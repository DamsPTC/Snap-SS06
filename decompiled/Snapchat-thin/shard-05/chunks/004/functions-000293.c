/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103dde028; end: 103dde05b; -[SCWebBrowsingSecureAccessServicesSaberServiceProvider __safeProvide] */

void FUN_103dde028(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103dddf0c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103dde05c; end: 103dde09f; -[SCWebBrowsingSecureAccessServicesSaberServiceProvider end] */

void FUN_103dde05c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dde0a0; end: 103dde237;  */

void FUN_103dde0a0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e453e0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1bac20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "AdclUserSessionScopeGraphBridge/SCWebBrowsingSecureAccessServicesSaberServiceProvider.swift"
                   ,0x5b,2,0x52,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103dde238);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52470();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103dde238; end: 103dde2e3; -[SCWebBrowsingSecureAccessServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103dde238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103dde0a0(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103dde2e4; end: 103dde357; -[SCWebBrowsingSecureAccessServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dde2e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113010488,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113010490,0);
  *(undefined8 *)(param_1 + _DAT_113010498) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dde358; end: 103dde38b;  */

void FUN_103dde358(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103dde38c; end: 103dde3d3; -[SCWebBrowsingSecureAccessServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dde38c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113010488);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113010490);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113010498));
  return;
}



/* Entry: 103dde3d4; end: 103dde3f3;  */

void FUN_103dde3d4(void)

{
  _objc_opt_self(&PTR_PTR_1130104e0);
  return;
}



/* Entry: 103dde3f4; end: 103dde3ff; -[SCWebViewServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dde3f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113010548;
  _swift_beginAccess(param_1 + _DAT_113010548,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dde400; end: 103dde40b; -[SCWebViewServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dde400(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113010548;
  _swift_beginAccess(param_1 + _DAT_113010548,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103dde40c; end: 103dde417; -[SCWebViewServicesSaberServiceProvider adclUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dde40c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113010550;
  _swift_beginAccess(param_1 + _DAT_113010550,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dde418; end: 103dde45b;  */

void FUN_103dde418(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dde45c; end: 103dde467; -[SCWebViewServicesSaberServiceProvider setAdclUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dde45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113010550;
  _swift_beginAccess(param_1 + _DAT_113010550,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103dde468; end: 103dde4bb;  */

void FUN_103dde468(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103dde4bc; end: 103dde6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dde4bc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d580();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103dd07c4();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11300ebf0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113010558);
      *(long *)(unaff_x20 + _DAT_113010558) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "AdclUserSessionScopeGraphBridge/SCWebViewServicesSaberServiceProvider.swift",0x4b,2,
             0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dde5e8);
  (*pcVar1)();
}



/* Entry: 103dde6d0; end: 103dde703; -[SCWebViewServicesSaberServiceProvider provide] */

void FUN_103dde6d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103dde4bc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103dde704; end: 103dde737; -[SCWebViewServicesSaberServiceProvider __safeProvide] */

void FUN_103dde704(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103dde5e8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103dde738; end: 103dde77b; -[SCWebViewServicesSaberServiceProvider end] */

void FUN_103dde738(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dde77c; end: 103dde913;  */

void FUN_103dde77c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e453e0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1bac20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "AdclUserSessionScopeGraphBridge/SCWebViewServicesSaberServiceProvider.swift",
                   0x4b,2,0x52,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103dde914);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52470();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103dde914; end: 103dde9bf; -[SCWebViewServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103dde914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103dde77c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103dde9c0; end: 103ddea33; -[SCWebViewServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dde9c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113010548,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113010550,0);
  *(undefined8 *)(param_1 + _DAT_113010558) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ddea34; end: 103ddea67;  */

void FUN_103ddea34(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ddea68; end: 103ddeaaf; -[SCWebViewServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ddea68(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113010548);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113010550);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113010558));
  return;
}



/* Entry: 103ddeab0; end: 103ddeacf;  */

void FUN_103ddeab0(void)

{
  _objc_opt_self(&PTR_PTR_1130105a0);
  return;
}



/* Entry: 103ddead0; end: 103ddeb7b;  */

void FUN_103ddead0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ddeb7c; end: 103ddeb97;  */

byte FUN_103ddeb7c(byte *param_1,byte *param_2)

{
  return (*param_1 ^ *param_2 ^ 0xff) & 1;
}



/* Entry: 103ddeb98; end: 103ddebd7;  */

void FUN_103ddeb98(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96380;
  _swift_getWitnessTable(&UNK_10dc96380,&UNK_110712bc8);
  puRam0000000113010608 = puVar1;
  return;
}



/* Entry: 103ddebd8; end: 103dded27;  */

int FUN_103ddebd8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ddec54;
        goto LAB_103ddec38;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ddec38:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103ddec54:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103dded28; end: 103dded5b; -[_TtC26AdRenderDataParserServices26AdRenderDataParserServices setPrimaryParser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dded28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113010620);
  *(undefined8 *)(param_1 + _DAT_113010620) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103dded5c; end: 103dded8f; -[_TtC26AdRenderDataParserServices26AdRenderDataParserServices shadowParser] */

void FUN_103dded5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010040e118();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103dded90; end: 103ddedc3; -[_TtC26AdRenderDataParserServices26AdRenderDataParserServices setShadowParser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dded90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113010628);
  *(undefined8 *)(param_1 + _DAT_113010628) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103ddedc4; end: 103ddee3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ddedc4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113010620) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113010628) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113010610) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113010618) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ddee40; end: 103ddee9f; -[_TtC26AdRenderDataParserServices26AdRenderDataParserServices init] */

void FUN_103ddee40(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdRenderDataParserServices.AdRenderDataParserServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ddee6c);
  (*pcVar1)();
}



/* Entry: 103ddeea0; end: 103ddeef7; -[_TtC26AdRenderDataParserServices26AdRenderDataParserServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ddeea0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113010610));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113010618));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010620));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113010628));
  return;
}



/* Entry: 103ddeef8; end: 103ddef2f;  */

void FUN_103ddeef8(undefined8 param_1)

{
  if (lRam00000001130106b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7c518c);
  return;
}



/* Entry: 103ddef30; end: 103ddef77;  */

undefined8 FUN_103ddef30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103ddef78; end: 103ddef7b;  */

bool FUN_103ddef78(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar21;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar22;
  undefined8 uVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  code *pcVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  long lStack_f00;
  undefined8 *puStack_ef8;
  long lStack_ef0;
  long lStack_ee8;
  long lStack_ee0;
  ulong uStack_ed8;
  long lStack_ed0;
  long lStack_ec8;
  long lStack_ec0;
  long lStack_eb8;
  ulong uStack_eb0;
  ulong uStack_ea8;
  long lStack_ea0;
  long lStack_e98;
  long lStack_e90;
  ulong *puStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined1 uStack_dd8;
  undefined7 uStack_dd7;
  undefined1 uStack_dd0;
  undefined8 uStack_dcf;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined1 uStack_c78;
  undefined7 uStack_c77;
  undefined1 uStack_c70;
  undefined8 uStack_c6f;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined1 uStack_b18;
  undefined7 uStack_b17;
  undefined1 uStack_b10;
  undefined8 uStack_b0f;
  undefined1 auStack_a60 [704];
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 uStack_6f8;
  undefined7 uStack_6f7;
  undefined1 uStack_6f0;
  undefined8 uStack_6ef;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined7 uStack_637;
  undefined1 uStack_630;
  undefined8 uStack_62f;
  undefined1 auStack_4e0 [352];
  undefined1 auStack_380 [352];
  undefined1 auStack_220 [352];
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  byte bStack_a8;
  byte bStack_a7;
  byte bStack_a6;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  undefined8 uStack_78;
  
  lVar10 = 0;
  func_0x000100b91fbc();
  lStack_ec8 = *(long *)(lVar10 + -8);
  lStack_ec0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_ec8 + 0x40));
  lVar13 = (long)&lStack_f00 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112db3b70;
  uStack_ed8 = lVar13 - extraout_x8_00;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  lStack_ed0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (lVar13 - extraout_x8_00) - extraout_x8_01;
  lVar10 = 0;
  lStack_eb8 = lVar21;
  __s10Foundation4UUIDVMa();
  lStack_e90 = *(long *)(lVar10 + -8);
  lStack_e98 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e90 + 0x40));
  lVar21 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d3bc20;
  lStack_ea0 = lVar21;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  uVar22 = lVar21 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_eb0 = uVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar22 = uVar22 - extraout_x12;
  uStack_ea8 = uVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar22 = uVar22 - extraout_x12_00;
  lVar10 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = (uVar22 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar27 - extraout_x12_02;
  uVar20 = *param_1;
  uVar12 = param_1[1];
  uVar15 = *param_2;
  uVar18 = param_2[1];
  lStack_ee8 = extraout_x13;
  puStack_e88 = param_1;
  if (uVar12 >> 0x3c < 0xf) {
    if (uVar18 >> 0x3c < 0xf) {
      lStack_ef0 = lVar13;
      lStack_ee0 = lVar10;
      func_0x000100de78a0(uVar20,uVar12);
      func_0x000100de78a0(uVar15,uVar18);
      uVar11 = uVar20;
      func_0x000100e25fcc(uVar20,uVar12,uVar15,uVar18);
      func_0x0001000b44c0(uVar15,uVar18);
      func_0x0001000b44c0(uVar20,uVar12);
      if ((uVar11 & 1) == 0) {
        return false;
      }
      goto LAB_103ddfc00;
    }
  }
  else if (0xe < uVar18 >> 0x3c) {
    lStack_ef0 = lVar13;
    lStack_ee0 = lVar10;
    func_0x000100de78a0(uVar20,uVar12);
    func_0x000100de78a0(uVar15,uVar18);
    func_0x0001000b44c0(uVar20,uVar12);
LAB_103ddfc00:
    puVar1 = puStack_e88;
    uVar20 = puStack_e88[2];
    if (((uVar20 != param_2[2]) || (puStack_e88[3] != param_2[3])) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar20 & 1) == 0)) {
      return false;
    }
    uVar20 = param_2[5];
    if (puVar1[5] == 0) {
      if (uVar20 != 0) {
        return false;
      }
    }
    else {
      if (uVar20 == 0) {
        return false;
      }
      uVar12 = puVar1[4];
      if (((uVar12 != param_2[4]) || (puVar1[5] != uVar20)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar12 & 1) == 0)) {
        return false;
      }
    }
    uVar20 = param_2[7];
    if (puVar1[7] == 0) {
      if (uVar20 != 0) {
        return false;
      }
    }
    else {
      if (uVar20 == 0) {
        return false;
      }
      uVar12 = puVar1[6];
      if (((uVar12 != param_2[6]) || (puVar1[7] != uVar20)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar12 & 1) == 0)) {
        return false;
      }
    }
    uVar20 = param_2[9];
    if (puVar1[9] == 0) {
      if (uVar20 != 0) {
        return false;
      }
    }
    else {
      if (uVar20 == 0) {
        return false;
      }
      uVar12 = puVar1[8];
      if (((uVar12 != param_2[8]) || (puVar1[9] != uVar20)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar12 & 1) == 0)) {
        return false;
      }
    }
    lVar13 = 0;
    FUN_103ddeef8();
    iVar8 = *(int *)(lVar13 + 0x24);
    lVar10 = (long)*(int *)(lStack_ee0 + 0x30);
    puStack_ef8 = param_2;
    FUN_103ddef30((long)puVar1 + (long)iVar8,lVar21,0x112d3bc20,&UNK_10d904ef0);
    puVar19 = puStack_ef8;
    FUN_103ddef30((long)puStack_ef8 + (long)iVar8,lVar21 + lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar26 = lStack_e98;
    pcVar25 = *(code **)(lStack_e90 + 0x30);
    lVar14 = lVar21;
    (*pcVar25)(lVar21,1,lStack_e98);
    if ((int)lVar14 == 1) {
      lVar10 = lVar21 + lVar10;
      (*pcVar25)(lVar10,1,lVar26);
      if ((int)lVar10 != 1) {
LAB_103ddfddc:
        FUN_103de402c(lVar21,0x112d68090,&UNK_10da24400);
        return false;
      }
      FUN_103de402c(lVar21,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      FUN_103ddef30(lVar21,uVar22,0x112d3bc20,&UNK_10d904ef0);
      lVar14 = lVar21 + lVar10;
      (*pcVar25)(lVar14,1,lVar26);
      lVar7 = lStack_e90;
      lVar6 = lStack_ea0;
      if ((int)lVar14 == 1) {
        (**(code **)(lStack_e90 + 8))(uVar22,lVar26);
        goto LAB_103ddfddc;
      }
      lStack_f00 = lVar13;
      (**(code **)(lStack_e90 + 0x20))(lStack_ea0,lVar21 + lVar10,lVar26);
      uVar15 = 0x112d68098;
      func_0x000103de406c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar20 = uVar22;
      __sSQ2eeoiySbx_xtFZTj(uVar22,lVar6,lVar26,uVar15);
      puVar19 = puStack_ef8;
      lVar13 = lStack_f00;
      pcVar24 = *(code **)(lVar7 + 8);
      (*pcVar24)(lVar6,lVar26);
      (*pcVar24)(uVar22,lVar26);
      FUN_103de402c(lVar21,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar20 & 1) == 0) {
        return false;
      }
    }
    iVar8 = *(int *)(lVar13 + 0x28);
    lVar10 = (long)*(int *)(lStack_ee0 + 0x30);
    FUN_103ddef30((long)puStack_e88 + (long)iVar8,lVar27,0x112d3bc20,&UNK_10d904ef0);
    FUN_103ddef30((long)puVar19 + (long)iVar8,lVar27 + lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar21 = lVar27;
    (*pcVar25)(lVar27,1,lVar26);
    uVar20 = uStack_ea8;
    if ((int)lVar21 == 1) {
      lVar10 = lVar27 + lVar10;
      (*pcVar25)(lVar10,1,lVar26);
      if ((int)lVar10 != 1) {
LAB_103ddff68:
        FUN_103de402c(lVar27,0x112d68090,&UNK_10da24400);
        return false;
      }
      FUN_103de402c(lVar27,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      FUN_103ddef30(lVar27,uStack_ea8,0x112d3bc20,&UNK_10d904ef0);
      lVar21 = lVar27 + lVar10;
      (*pcVar25)(lVar21,1,lVar26);
      lVar6 = lStack_e90;
      lVar14 = lStack_ea0;
      if ((int)lVar21 == 1) {
        (**(code **)(lStack_e90 + 8))(uVar20,lVar26);
        goto LAB_103ddff68;
      }
      (**(code **)(lStack_e90 + 0x20))(lStack_ea0,lVar27 + lVar10,lVar26);
      uVar15 = 0x112d68098;
      func_0x000103de406c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar12 = uVar20;
      __sSQ2eeoiySbx_xtFZTj(uVar20,lVar14,lVar26,uVar15);
      pcVar24 = *(code **)(lVar6 + 8);
      (*pcVar24)(lVar14,lVar26);
      (*pcVar24)(uVar20,lVar26);
      FUN_103de402c(lVar27,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar12 & 1) == 0) {
        return false;
      }
    }
    iVar8 = *(int *)(lVar13 + 0x2c);
    lVar10 = (long)*(int *)(lStack_ee0 + 0x30);
    lStack_f00 = lVar13;
    FUN_103ddef30((long)puStack_e88 + (long)iVar8,lStack_ee8,0x112d3bc20,&UNK_10d904ef0);
    FUN_103ddef30((long)puVar19 + (long)iVar8,lStack_ee8 + lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar21 = lStack_ee8;
    (*pcVar25)(lStack_ee8,1,lVar26);
    uVar20 = uStack_eb0;
    if ((int)lVar21 == 1) {
      lVar10 = lStack_ee8 + lVar10;
      (*pcVar25)(lVar10,1,lVar26);
      if ((int)lVar10 != 1) {
LAB_103de00f4:
        FUN_103de402c(lStack_ee8,0x112d68090,&UNK_10da24400);
        return false;
      }
      FUN_103de402c(lStack_ee8,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      FUN_103ddef30(lStack_ee8,uStack_eb0,0x112d3bc20,&UNK_10d904ef0);
      lVar21 = lStack_ee8 + lVar10;
      (*pcVar25)(lVar21,1,lVar26);
      lVar27 = lStack_e90;
      lVar13 = lStack_ea0;
      if ((int)lVar21 == 1) {
        (**(code **)(lStack_e90 + 8))(uVar20,lVar26);
        goto LAB_103de00f4;
      }
      (**(code **)(lStack_e90 + 0x20))(lStack_ea0,lStack_ee8 + lVar10,lVar26);
      uVar15 = 0x112d68098;
      func_0x000103de406c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar12 = uVar20;
      __sSQ2eeoiySbx_xtFZTj(uVar20,lVar13,lVar26,uVar15);
      pcVar25 = *(code **)(lVar27 + 8);
      (*pcVar25)(lVar13,lVar26);
      (*pcVar25)(uVar20,lVar26);
      FUN_103de402c(lStack_ee8,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar12 & 1) == 0) {
        return false;
      }
    }
    if (*(int *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x30)) !=
        *(int *)((long)puVar19 + (long)*(int *)(lStack_f00 + 0x30))) {
      return false;
    }
    plVar16 = (long *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x34));
    puVar19 = (undefined8 *)((long)puVar19 + (long)*(int *)(lStack_f00 + 0x34));
    lVar10 = *plVar16;
    uVar20 = plVar16[1];
    lVar21 = plVar16[2];
    lVar13 = plVar16[3];
    lVar26 = plVar16[4];
    uVar15 = *puVar19;
    lVar27 = puVar19[1];
    uVar4 = puVar19[2];
    uVar5 = puVar19[3];
    uVar23 = puVar19[4];
    if (uVar20 == 1) {
      if (lVar27 != 1) {
LAB_103de0248:
        lStack_e90 = uVar15;
        puStack_e88 = (ulong *)lVar27;
        FUN_103de4004(lVar10,uVar20,lVar21,lVar13,lVar26);
        puVar1 = puStack_e88;
        FUN_103de4004(uVar15,puStack_e88,uVar4,uVar5,uVar23);
        func_0x000103de4018(lVar10,uVar20,lVar21,lVar13,lVar26);
        func_0x000103de4018(lStack_e90,puVar1,uVar4,uVar5,uVar23);
        return false;
      }
      FUN_103de4004(lVar10,1,lVar21,lVar13,lVar26);
      FUN_103de4004(uVar15,1,uVar4,uVar5,uVar23);
      func_0x000103de4018(lVar10,1,lVar21,lVar13,lVar26);
    }
    else {
      if (lVar27 == 1) goto LAB_103de0248;
      bStack_80 = (byte)uVar5 & 1;
      bStack_7f = (byte)((ulong)uVar5 >> 8) & 1;
      bStack_7e = (byte)((ulong)uVar5 >> 0x10) & 1;
      bStack_a8 = (byte)lVar13 & 1;
      bStack_a7 = (byte)((ulong)lVar13 >> 8) & 1;
      bStack_a6 = (byte)((ulong)lVar13 >> 0x10) & 1;
      uStack_ea8 = uVar20;
      lStack_ea0 = lVar10;
      lStack_e98 = lVar21;
      lStack_c0 = lVar10;
      uStack_b8 = uVar20;
      lStack_b0 = lVar21;
      lStack_a0 = lVar26;
      uStack_98 = uVar15;
      lStack_90 = lVar27;
      uStack_88 = uVar4;
      uStack_78 = uVar23;
      FUN_103de4004(lVar10,uVar20,lVar21,lVar13,lVar26);
      FUN_103de4004(uVar15,lVar27,uVar4,uVar5,uVar23);
      plVar16 = &lStack_c0;
      func_0x000104759444(plVar16,&uStack_98);
      func_0x000103de4018(uVar15,lVar27,uVar4,uVar5,uVar23);
      func_0x000103de4018(lStack_ea0,uStack_ea8,lStack_e98,lVar13,lVar26);
      if (((ulong)plVar16 & 1) == 0) {
        return false;
      }
    }
    puVar1 = puStack_e88;
    lVar10 = (long)*(int *)(lStack_f00 + 0x38);
    _memcpy(auStack_4e0,(long)puStack_e88 + lVar10,0x160);
    _memcpy(&uStack_7a0,(long)puVar1 + lVar10,0x160);
    puVar19 = puStack_ef8;
    _memcpy(auStack_380,(long)puStack_ef8 + lVar10,0x160);
    _memcpy(&uStack_640,(long)puVar19 + lVar10,0x160);
    iVar8 = (int)&uStack_7a0;
    func_0x000101542f6c();
    if (iVar8 == 1) {
      iVar8 = (int)&uStack_640;
      func_0x000101542f6c();
      if (iVar8 != 1) {
LAB_103de0478:
        _memcpy(auStack_a60,&uStack_7a0,0x2c0);
        FUN_103ddef30(auStack_4e0,auStack_220,0x112db3a28,&UNK_10d95ddb0);
        FUN_103ddef30(auStack_380,auStack_220,0x112db3a28,&UNK_10d95ddb0);
        FUN_103de402c(auStack_a60,0x113010758,&UNK_10dc96580);
        return false;
      }
      _memcpy(auStack_a60,&uStack_7a0,0x160);
      FUN_103ddef30(auStack_4e0,auStack_220,0x112db3a28,&UNK_10d95ddb0);
      FUN_103ddef30(auStack_380,auStack_220,0x112db3a28,&UNK_10d95ddb0);
      FUN_103de402c(auStack_a60,0x112db3a28,&UNK_10d95ddb0);
    }
    else {
      _memcpy(&uStack_bc0,&uStack_7a0,0x160);
      iVar8 = (int)&uStack_640;
      func_0x000101542f6c();
      if (iVar8 == 1) goto LAB_103de0478;
      _memcpy(&uStack_d20,&uStack_640,0x160);
      _memcpy(auStack_a60,&uStack_640,0x160);
      _memcpy(auStack_220,&uStack_bc0,0x160);
      FUN_103ddef30(auStack_4e0,&uStack_e80,0x112db3a28,&UNK_10d95ddb0);
      FUN_103ddef30(auStack_380,&uStack_e80,0x112db3a28,&UNK_10d95ddb0);
      puVar17 = auStack_220;
      func_0x00010475a084(puVar17,auStack_a60);
      FUN_103de402c(&uStack_d20,0x112db3a28,&UNK_10d95ddb0);
      FUN_103de402c(&uStack_7a0,0x112db3a28,&UNK_10d95ddb0);
      if (((ulong)puVar17 & 1) == 0) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x3c));
    uVar20 = puVar1[1];
    puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x3c));
    uVar12 = puVar2[1];
    if (uVar20 == 0) {
      if (uVar12 != 0) {
        return false;
      }
    }
    else {
      if (uVar12 == 0) {
        return false;
      }
      uVar18 = *puVar1;
      if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar18 & 1) == 0)) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x40));
    uVar20 = puVar1[1];
    puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x40));
    uVar12 = puVar2[1];
    if (uVar20 == 0) {
      if (uVar12 != 0) {
        return false;
      }
    }
    else {
      if (uVar12 == 0) {
        return false;
      }
      uVar18 = *puVar1;
      if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar18 & 1) == 0)) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x44));
    uVar20 = puVar1[1];
    puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x44));
    uVar12 = puVar2[1];
    if (uVar20 == 0) {
      if (uVar12 != 0) {
        return false;
      }
    }
    else {
      if (uVar12 == 0) {
        return false;
      }
      uVar18 = *puVar1;
      if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar18 & 1) == 0)) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x48));
    puVar19 = (undefined8 *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x48));
    uVar20 = *puVar1;
    uVar12 = puVar1[1];
    uVar15 = *puVar19;
    uVar18 = puVar19[1];
    if (uVar12 >> 0x3c < 0xf) {
      if (uVar18 >> 0x3c < 0xf) {
        func_0x000100de78a0(uVar20,uVar12);
        func_0x000100de78a0(uVar15,uVar18);
        uVar22 = uVar20;
        func_0x000100e25fcc(uVar20,uVar12,uVar15,uVar18);
        func_0x0001000b44c0(uVar15,uVar18);
        func_0x0001000b44c0(uVar20,uVar12);
        if ((uVar22 & 1) == 0) {
          return false;
        }
        goto LAB_103de074c;
      }
    }
    else if (0xe < uVar18 >> 0x3c) {
      func_0x000100de78a0(uVar20,uVar12);
      func_0x000100de78a0(uVar15,uVar18);
      func_0x0001000b44c0(uVar20,uVar12);
LAB_103de074c:
      lVar10 = lStack_eb8;
      if (*(long *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x4c)) !=
          *(long *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x4c))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x50)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x50))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x54)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x54))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x58)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x58))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x5c)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x5c))) {
        return false;
      }
      if (*(char *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x60)) !=
          *(char *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x60))) {
        return false;
      }
      iVar8 = *(int *)(lStack_f00 + 100);
      lVar21 = (long)*(int *)(lStack_ed0 + 0x30);
      FUN_103ddef30((long)puStack_e88 + (long)iVar8,lStack_eb8,0x112db39a8,&UNK_10d95dd90);
      FUN_103ddef30((long)puStack_ef8 + (long)iVar8,lVar10 + lVar21,0x112db39a8,&UNK_10d95dd90);
      pcVar25 = *(code **)(lStack_ec8 + 0x30);
      (*pcVar25)(lVar10,1,lStack_ec0);
      lVar13 = lStack_eb8;
      if ((int)lVar10 == 1) {
        lVar21 = lStack_eb8 + lVar21;
        (*pcVar25)(lVar21,1,lStack_ec0);
        if ((int)lVar21 != 1) {
LAB_103de08e8:
          FUN_103de402c(lStack_eb8,0x112db3b70,&UNK_10d95def0);
          return false;
        }
        FUN_103de402c(lStack_eb8,0x112db39a8,&UNK_10d95dd90);
      }
      else {
        FUN_103ddef30(lStack_eb8,uStack_ed8,0x112db39a8,&UNK_10d95dd90);
        lVar13 = lVar13 + lVar21;
        (*pcVar25)(lVar13,1,lStack_ec0);
        lVar27 = lStack_eb8;
        lVar10 = lStack_ef0;
        if ((int)lVar13 == 1) {
          FUN_103de0be8(uStack_ed8);
          goto LAB_103de08e8;
        }
        func_0x0001034c75b0(lStack_eb8 + lVar21,lStack_ef0);
        uVar20 = uStack_ed8;
        uVar12 = uStack_ed8;
        func_0x000104841c50(uStack_ed8,lVar10);
        FUN_103de0be8(lVar10);
        FUN_103de0be8(uVar20);
        FUN_103de402c(lVar27,0x112db39a8,&UNK_10d95dd90);
        if ((uVar12 & 1) == 0) {
          return false;
        }
      }
      if (*(float *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x68)) !=
          *(float *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x68))) {
        return false;
      }
      puVar19 = (undefined8 *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x6c));
      puVar3 = (undefined8 *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x6c));
      iVar8 = (int)&uStack_6e0;
      uStack_718 = puVar19[0x11];
      uStack_720 = puVar19[0x10];
      uStack_708 = puVar19[0x13];
      uStack_710 = puVar19[0x12];
      uStack_700 = puVar19[0x14];
      uStack_6d8 = puVar3[1];
      uStack_6e0 = *puVar3;
      uStack_6c8 = puVar3[3];
      uStack_6d0 = puVar3[2];
      uStack_6f8 = (undefined1)puVar19[0x15];
      uStack_6ef = *(undefined8 *)((long)puVar19 + 0xb1);
      uStack_6f7 = (undefined7)*(undefined8 *)((long)puVar19 + 0xa9);
      uStack_6f0 = (undefined1)((ulong)*(undefined8 *)((long)puVar19 + 0xa9) >> 0x38);
      uStack_758 = puVar19[9];
      uStack_760 = puVar19[8];
      uStack_748 = puVar19[0xb];
      uStack_750 = puVar19[10];
      uStack_738 = puVar19[0xd];
      uStack_740 = puVar19[0xc];
      uStack_728 = puVar19[0xf];
      uStack_730 = puVar19[0xe];
      uStack_798 = puVar19[1];
      uStack_7a0 = *puVar19;
      uStack_788 = puVar19[3];
      uStack_790 = puVar19[2];
      uStack_778 = puVar19[5];
      uStack_780 = puVar19[4];
      uStack_768 = puVar19[7];
      uStack_770 = puVar19[6];
      uStack_62f = *(undefined8 *)((long)puVar3 + 0xb1);
      uStack_630 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0xa9) >> 0x38);
      uStack_658 = puVar3[0x11];
      uStack_660 = puVar3[0x10];
      uStack_648 = puVar3[0x13];
      uStack_650 = puVar3[0x12];
      uStack_640 = puVar3[0x14];
      uStack_638 = (undefined1)puVar3[0x15];
      uStack_637 = (undefined7)((ulong)puVar3[0x15] >> 8);
      uStack_698 = puVar3[9];
      uStack_6a0 = puVar3[8];
      uStack_688 = puVar3[0xb];
      uStack_690 = puVar3[10];
      uStack_678 = puVar3[0xd];
      uStack_680 = puVar3[0xc];
      uStack_668 = puVar3[0xf];
      uStack_670 = puVar3[0xe];
      uStack_6b8 = puVar3[5];
      uStack_6c0 = puVar3[4];
      uStack_6a8 = puVar3[7];
      uStack_6b0 = puVar3[6];
      iVar9 = (int)&uStack_7a0;
      func_0x000101541310();
      if (iVar9 == 1) {
        func_0x000101541310();
        if (iVar8 != 1) {
          return false;
        }
      }
      else {
        uStack_df8 = uStack_718;
        uStack_e00 = uStack_720;
        uStack_de8 = uStack_708;
        uStack_df0 = uStack_710;
        uStack_dd8 = uStack_6f8;
        uStack_de0 = uStack_700;
        uStack_dcf = uStack_6ef;
        uStack_dd7 = uStack_6f7;
        uStack_dd0 = uStack_6f0;
        uStack_e38 = uStack_758;
        uStack_e40 = uStack_760;
        uStack_e28 = uStack_748;
        uStack_e30 = uStack_750;
        uStack_e18 = uStack_738;
        uStack_e20 = uStack_740;
        uStack_e08 = uStack_728;
        uStack_e10 = uStack_730;
        uStack_e78 = uStack_798;
        uStack_e80 = uStack_7a0;
        uStack_e68 = uStack_788;
        uStack_e70 = uStack_790;
        uStack_e58 = uStack_778;
        uStack_e60 = uStack_780;
        uStack_e48 = uStack_768;
        uStack_e50 = uStack_770;
        func_0x000101541310();
        if (iVar8 == 1) {
          return false;
        }
        uStack_b38 = uStack_658;
        uStack_b40 = uStack_660;
        uStack_b28 = uStack_648;
        uStack_b30 = uStack_650;
        uStack_b18 = uStack_638;
        uStack_b20 = uStack_640;
        uStack_b0f = uStack_62f;
        uStack_b17 = uStack_637;
        uStack_b10 = uStack_630;
        uStack_b78 = uStack_698;
        uStack_b80 = uStack_6a0;
        uStack_b68 = uStack_688;
        uStack_b70 = uStack_690;
        uStack_b58 = uStack_678;
        uStack_b60 = uStack_680;
        uStack_b48 = uStack_668;
        uStack_b50 = uStack_670;
        uStack_bb8 = uStack_6d8;
        uStack_bc0 = uStack_6e0;
        uStack_ba8 = uStack_6c8;
        uStack_bb0 = uStack_6d0;
        uStack_b98 = uStack_6b8;
        uStack_ba0 = uStack_6c0;
        uStack_b88 = uStack_6a8;
        uStack_b90 = uStack_6b0;
        uStack_c98 = uStack_df8;
        uStack_ca0 = uStack_e00;
        uStack_c88 = uStack_de8;
        uStack_c90 = uStack_df0;
        uStack_c78 = uStack_dd8;
        uStack_c80 = uStack_de0;
        uStack_c6f = uStack_dcf;
        uStack_c77 = uStack_dd7;
        uStack_c70 = uStack_dd0;
        uStack_cd8 = uStack_e38;
        uStack_ce0 = uStack_e40;
        uStack_cc8 = uStack_e28;
        uStack_cd0 = uStack_e30;
        uStack_cb8 = uStack_e18;
        uStack_cc0 = uStack_e20;
        uStack_ca8 = uStack_e08;
        uStack_cb0 = uStack_e10;
        uStack_d18 = uStack_e78;
        uStack_d20 = uStack_e80;
        uStack_d08 = uStack_e68;
        uStack_d10 = uStack_e70;
        uStack_cf8 = uStack_e58;
        uStack_d00 = uStack_e60;
        uStack_ce8 = uStack_e48;
        uStack_cf0 = uStack_e50;
        puVar19 = &uStack_d20;
        func_0x0001046c99dc(puVar19,&uStack_bc0);
        if (((ulong)puVar19 & 1) == 0) {
          return false;
        }
      }
      puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x70));
      uVar20 = puVar1[1];
      puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x70));
      uVar12 = puVar2[1];
      if (uVar20 == 0) {
        if (uVar12 != 0) {
          return false;
        }
      }
      else {
        if (uVar12 == 0) {
          return false;
        }
        uVar18 = *puVar1;
        if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar18 & 1) == 0)) {
          return false;
        }
      }
      if (*(int *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x74)) !=
          *(int *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x74))) {
        return false;
      }
      if (*(int *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x78)) !=
          *(int *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x78))) {
        return false;
      }
      return *(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x7c)) ==
             *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x7c));
    }
    func_0x000100de78a0(uVar20,uVar12);
    func_0x000100de78a0(uVar15,uVar18);
    func_0x0001000b44c0(uVar20,uVar12);
    goto LAB_103ddfb80;
  }
  func_0x000100de78a0(uVar20,uVar12);
  func_0x000100de78a0(uVar15,uVar18);
  func_0x0001000b44c0(uVar20,uVar12);
LAB_103ddfb80:
  func_0x0001000b44c0(uVar15,uVar18);
  return false;
}



/* Entry: 103ddef7c; end: 103ddf85b;  */

void FUN_103ddef7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined8 uStack_43f;
  undefined1 auStack_430 [352];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined8 uStack_21f;
  undefined1 auStack_208 [352];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  byte bStack_8f;
  byte bStack_8e;
  undefined8 uStack_88;
  
  lVar5 = 0;
  func_0x000100b91fbc();
  lStack_508 = *(long *)(lVar5 + -8);
  lStack_500 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_508 + 0x40));
  lVar9 = (long)&lStack_530 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112db39a8;
  lStack_530 = lVar9;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_00;
  lVar6 = 0;
  lStack_510 = lVar9;
  __s10Foundation4UUIDVMa();
  lStack_518 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_518 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  lStack_4f8 = lVar9;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_520 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lStack_528 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_00;
  uVar12 = unaff_x20[1];
  if (uVar12 >> 0x3c < 0xf) {
    uVar10 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar10,uVar12);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  lVar5 = unaff_x20[5];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[7];
  }
  else {
    uVar10 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
    lVar5 = unaff_x20[7];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[9];
  }
  else {
    uVar10 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
    lVar5 = unaff_x20[9];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
  }
  lVar7 = 0;
  FUN_103ddeef8();
  FUN_103ddef30((long)unaff_x20 + (long)*(int *)(lVar7 + 0x24),lVar9,0x112d3bc20,&UNK_10d904ef0);
  lVar5 = lStack_518;
  pcVar11 = *(code **)(lStack_518 + 0x30);
  lVar8 = lVar9;
  (*pcVar11)(lVar9,1,lVar6);
  lVar3 = lStack_4f8;
  if ((int)lVar8 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lStack_4f8,lVar9,lVar6);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar10 = 0x112d6c668;
    func_0x000103de406c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar6,uVar10);
    (**(code **)(lVar5 + 8))(lVar3,lVar6);
  }
  lVar9 = lStack_528;
  FUN_103ddef30((long)unaff_x20 + (long)*(int *)(lVar7 + 0x28),lStack_528,0x112d3bc20,&UNK_10d904ef0
               );
  lVar8 = lVar9;
  (*pcVar11)(lVar9,1,lVar6);
  lVar3 = lStack_4f8;
  if ((int)lVar8 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lStack_4f8,lVar9,lVar6);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar10 = 0x112d6c668;
    func_0x000103de406c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar6,uVar10);
    (**(code **)(lVar5 + 8))(lVar3,lVar6);
  }
  lVar9 = lStack_520;
  FUN_103ddef30((long)unaff_x20 + (long)*(int *)(lVar7 + 0x2c),lStack_520,0x112d3bc20,&UNK_10d904ef0
               );
  lVar8 = lVar9;
  (*pcVar11)(lVar9,1,lVar6);
  lVar3 = lStack_4f8;
  if ((int)lVar8 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lStack_4f8,lVar9,lVar6);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar10 = 0x112d6c668;
    func_0x000103de406c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar6,uVar10);
    (**(code **)(lVar5 + 8))(lVar3,lVar6);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x30)));
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x34));
  if (puVar1[1] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_88 = puVar1[4];
    uVar2 = *(undefined4 *)(puVar1 + 3);
    uStack_98 = puVar1[2];
    uStack_a8 = *puVar1;
    bStack_90 = (byte)uVar2 & 1;
    bStack_8f = (byte)((uint)uVar2 >> 8) & 1;
    bStack_8e = (byte)((uint)uVar2 >> 0x10) & 1;
    lStack_a0 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104759448(param_1);
  }
  _memcpy(auStack_430,(long)unaff_x20 + (long)*(int *)(lVar7 + 0x38),0x160);
  iVar4 = (int)auStack_430;
  func_0x000101542f6c();
  if (iVar4 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_208,auStack_430,0x160);
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x00010475a088(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x3c));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x40));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x44));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x48));
  uVar12 = puVar1[1];
  if (uVar12 >> 0x3c < 0xf) {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar10,uVar12);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x4c)))
  ;
  dVar15 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x50));
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    dVar16 = dVar15;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar16);
  dVar15 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x54));
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    dVar16 = dVar15;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar16);
  dVar15 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x58));
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    dVar16 = dVar15;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar16);
  dVar15 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x5c));
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    dVar16 = dVar15;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar16);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x60)));
  lVar6 = lStack_510;
  FUN_103ddef30((long)unaff_x20 + (long)*(int *)(lVar7 + 100),lStack_510,0x112db39a8,&UNK_10d95dd90)
  ;
  lVar9 = lVar6;
  (**(code **)(lStack_508 + 0x30))(lVar6,1,lStack_500);
  lVar5 = lStack_530;
  if ((int)lVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001034c75b0(lVar6,lStack_530);
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104841c54(param_1);
    FUN_103de0be8(lVar5);
  }
  fVar13 = *(float *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x68));
  fVar14 = 0.0;
  if (fVar13 != 0.0) {
    fVar14 = fVar13;
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar14);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x6c));
  uStack_468 = puVar1[0x11];
  uStack_470 = puVar1[0x10];
  uStack_458 = puVar1[0x13];
  uStack_460 = puVar1[0x12];
  uStack_450 = puVar1[0x14];
  uStack_448 = (undefined1)puVar1[0x15];
  uStack_43f = *(undefined8 *)((long)puVar1 + 0xb1);
  uStack_447 = (undefined7)*(undefined8 *)((long)puVar1 + 0xa9);
  uStack_440 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0xa9) >> 0x38);
  uStack_4a8 = puVar1[9];
  uStack_4b0 = puVar1[8];
  uStack_498 = puVar1[0xb];
  uStack_4a0 = puVar1[10];
  uStack_488 = puVar1[0xd];
  uStack_490 = puVar1[0xc];
  uStack_478 = puVar1[0xf];
  uStack_480 = puVar1[0xe];
  uStack_4e8 = puVar1[1];
  uStack_4f0 = *puVar1;
  uStack_4d8 = puVar1[3];
  uStack_4e0 = puVar1[2];
  uStack_4c8 = puVar1[5];
  uStack_4d0 = puVar1[4];
  uStack_4b8 = puVar1[7];
  uStack_4c0 = puVar1[6];
  iVar4 = (int)&uStack_4f0;
  func_0x000101541310();
  if (iVar4 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_248 = uStack_468;
    uStack_250 = uStack_470;
    uStack_238 = uStack_458;
    uStack_240 = uStack_460;
    uStack_228 = uStack_448;
    uStack_230 = uStack_450;
    uStack_21f = uStack_43f;
    uStack_227 = uStack_447;
    uStack_220 = uStack_440;
    uStack_288 = uStack_4a8;
    uStack_290 = uStack_4b0;
    uStack_278 = uStack_498;
    uStack_280 = uStack_4a0;
    uStack_268 = uStack_488;
    uStack_270 = uStack_490;
    uStack_258 = uStack_478;
    uStack_260 = uStack_480;
    uStack_2c8 = uStack_4e8;
    uStack_2d0 = uStack_4f0;
    uStack_2b8 = uStack_4d8;
    uStack_2c0 = uStack_4e0;
    uStack_2a8 = uStack_4c8;
    uStack_2b0 = uStack_4d0;
    uStack_298 = uStack_4b8;
    uStack_2a0 = uStack_4c0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x0001046c99e0(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x70));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x74)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x78)));
  dVar15 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x7c));
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    dVar16 = dVar15;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar16);
  return;
}



/* Entry: 103ddf85c; end: 103ddf897;  */

void FUN_103ddf85c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_103ddef7c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ddf898; end: 103ddf89b;  */

void FUN_103ddf898(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined8 uStack_43f;
  undefined1 auStack_430 [352];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined8 uStack_21f;
  undefined1 auStack_208 [352];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  byte bStack_8f;
  byte bStack_8e;
  undefined8 uStack_88;
  
  lVar5 = 0;
  func_0x000100b91fbc();
  lStack_508 = *(long *)(lVar5 + -8);
  lStack_500 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_508 + 0x40));
  lVar9 = (long)&lStack_530 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112db39a8;
  lStack_530 = lVar9;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_00;
  lVar6 = 0;
  lStack_510 = lVar9;
  __s10Foundation4UUIDVMa();
  lStack_518 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_518 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  lStack_4f8 = lVar9;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_520 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lStack_528 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_00;
  uVar12 = unaff_x20[1];
  if (uVar12 >> 0x3c < 0xf) {
    uVar10 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar10,uVar12);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  lVar5 = unaff_x20[5];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[7];
  }
  else {
    uVar10 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
    lVar5 = unaff_x20[7];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[9];
  }
  else {
    uVar10 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
    lVar5 = unaff_x20[9];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
  }
  lVar7 = 0;
  FUN_103ddeef8();
  FUN_103ddef30((long)unaff_x20 + (long)*(int *)(lVar7 + 0x24),lVar9,0x112d3bc20,&UNK_10d904ef0);
  lVar5 = lStack_518;
  pcVar11 = *(code **)(lStack_518 + 0x30);
  lVar8 = lVar9;
  (*pcVar11)(lVar9,1,lVar6);
  lVar3 = lStack_4f8;
  if ((int)lVar8 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lStack_4f8,lVar9,lVar6);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar10 = 0x112d6c668;
    func_0x000103de406c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar6,uVar10);
    (**(code **)(lVar5 + 8))(lVar3,lVar6);
  }
  lVar9 = lStack_528;
  FUN_103ddef30((long)unaff_x20 + (long)*(int *)(lVar7 + 0x28),lStack_528,0x112d3bc20,&UNK_10d904ef0
               );
  lVar8 = lVar9;
  (*pcVar11)(lVar9,1,lVar6);
  lVar3 = lStack_4f8;
  if ((int)lVar8 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lStack_4f8,lVar9,lVar6);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar10 = 0x112d6c668;
    func_0x000103de406c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar6,uVar10);
    (**(code **)(lVar5 + 8))(lVar3,lVar6);
  }
  lVar9 = lStack_520;
  FUN_103ddef30((long)unaff_x20 + (long)*(int *)(lVar7 + 0x2c),lStack_520,0x112d3bc20,&UNK_10d904ef0
               );
  lVar8 = lVar9;
  (*pcVar11)(lVar9,1,lVar6);
  lVar3 = lStack_4f8;
  if ((int)lVar8 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lStack_4f8,lVar9,lVar6);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar10 = 0x112d6c668;
    func_0x000103de406c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar6,uVar10);
    (**(code **)(lVar5 + 8))(lVar3,lVar6);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x30)));
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x34));
  if (puVar1[1] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_88 = puVar1[4];
    uVar2 = *(undefined4 *)(puVar1 + 3);
    uStack_98 = puVar1[2];
    uStack_a8 = *puVar1;
    bStack_90 = (byte)uVar2 & 1;
    bStack_8f = (byte)((uint)uVar2 >> 8) & 1;
    bStack_8e = (byte)((uint)uVar2 >> 0x10) & 1;
    lStack_a0 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104759448(param_1);
  }
  _memcpy(auStack_430,(long)unaff_x20 + (long)*(int *)(lVar7 + 0x38),0x160);
  iVar4 = (int)auStack_430;
  func_0x000101542f6c();
  if (iVar4 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_208,auStack_430,0x160);
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x00010475a088(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x3c));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x40));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x44));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x48));
  uVar12 = puVar1[1];
  if (uVar12 >> 0x3c < 0xf) {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar10,uVar12);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x4c)))
  ;
  dVar15 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x50));
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    dVar16 = dVar15;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar16);
  dVar15 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x54));
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    dVar16 = dVar15;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar16);
  dVar15 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x58));
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    dVar16 = dVar15;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar16);
  dVar15 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x5c));
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    dVar16 = dVar15;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar16);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x60)));
  lVar6 = lStack_510;
  FUN_103ddef30((long)unaff_x20 + (long)*(int *)(lVar7 + 100),lStack_510,0x112db39a8,&UNK_10d95dd90)
  ;
  lVar9 = lVar6;
  (**(code **)(lStack_508 + 0x30))(lVar6,1,lStack_500);
  lVar5 = lStack_530;
  if ((int)lVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001034c75b0(lVar6,lStack_530);
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104841c54(param_1);
    FUN_103de0be8(lVar5);
  }
  fVar13 = *(float *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x68));
  fVar14 = 0.0;
  if (fVar13 != 0.0) {
    fVar14 = fVar13;
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar14);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x6c));
  uStack_468 = puVar1[0x11];
  uStack_470 = puVar1[0x10];
  uStack_458 = puVar1[0x13];
  uStack_460 = puVar1[0x12];
  uStack_450 = puVar1[0x14];
  uStack_448 = (undefined1)puVar1[0x15];
  uStack_43f = *(undefined8 *)((long)puVar1 + 0xb1);
  uStack_447 = (undefined7)*(undefined8 *)((long)puVar1 + 0xa9);
  uStack_440 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0xa9) >> 0x38);
  uStack_4a8 = puVar1[9];
  uStack_4b0 = puVar1[8];
  uStack_498 = puVar1[0xb];
  uStack_4a0 = puVar1[10];
  uStack_488 = puVar1[0xd];
  uStack_490 = puVar1[0xc];
  uStack_478 = puVar1[0xf];
  uStack_480 = puVar1[0xe];
  uStack_4e8 = puVar1[1];
  uStack_4f0 = *puVar1;
  uStack_4d8 = puVar1[3];
  uStack_4e0 = puVar1[2];
  uStack_4c8 = puVar1[5];
  uStack_4d0 = puVar1[4];
  uStack_4b8 = puVar1[7];
  uStack_4c0 = puVar1[6];
  iVar4 = (int)&uStack_4f0;
  func_0x000101541310();
  if (iVar4 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_248 = uStack_468;
    uStack_250 = uStack_470;
    uStack_238 = uStack_458;
    uStack_240 = uStack_460;
    uStack_228 = uStack_448;
    uStack_230 = uStack_450;
    uStack_21f = uStack_43f;
    uStack_227 = uStack_447;
    uStack_220 = uStack_440;
    uStack_288 = uStack_4a8;
    uStack_290 = uStack_4b0;
    uStack_278 = uStack_498;
    uStack_280 = uStack_4a0;
    uStack_268 = uStack_488;
    uStack_270 = uStack_490;
    uStack_258 = uStack_478;
    uStack_260 = uStack_480;
    uStack_2c8 = uStack_4e8;
    uStack_2d0 = uStack_4f0;
    uStack_2b8 = uStack_4d8;
    uStack_2c0 = uStack_4e0;
    uStack_2a8 = uStack_4c8;
    uStack_2b0 = uStack_4d0;
    uStack_298 = uStack_4b8;
    uStack_2a0 = uStack_4c0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x0001046c99e0(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x70));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar5);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x74)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x78)));
  dVar15 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar7 + 0x7c));
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    dVar16 = dVar15;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar16);
  return;
}



/* Entry: 103ddf89c; end: 103ddf8d3;  */

void FUN_103ddf89c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_103ddef7c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ddf8d4; end: 103ddf8d7;  */

bool FUN_103ddf8d4(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar21;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar22;
  undefined8 uVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  code *pcVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  long lStack_f00;
  undefined8 *puStack_ef8;
  long lStack_ef0;
  long lStack_ee8;
  long lStack_ee0;
  ulong uStack_ed8;
  long lStack_ed0;
  long lStack_ec8;
  long lStack_ec0;
  long lStack_eb8;
  ulong uStack_eb0;
  ulong uStack_ea8;
  long lStack_ea0;
  long lStack_e98;
  long lStack_e90;
  ulong *puStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined1 uStack_dd8;
  undefined7 uStack_dd7;
  undefined1 uStack_dd0;
  undefined8 uStack_dcf;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined1 uStack_c78;
  undefined7 uStack_c77;
  undefined1 uStack_c70;
  undefined8 uStack_c6f;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined1 uStack_b18;
  undefined7 uStack_b17;
  undefined1 uStack_b10;
  undefined8 uStack_b0f;
  undefined1 auStack_a60 [704];
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 uStack_6f8;
  undefined7 uStack_6f7;
  undefined1 uStack_6f0;
  undefined8 uStack_6ef;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined7 uStack_637;
  undefined1 uStack_630;
  undefined8 uStack_62f;
  undefined1 auStack_4e0 [352];
  undefined1 auStack_380 [352];
  undefined1 auStack_220 [352];
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  byte bStack_a8;
  byte bStack_a7;
  byte bStack_a6;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  undefined8 uStack_78;
  
  lVar10 = 0;
  func_0x000100b91fbc();
  lStack_ec8 = *(long *)(lVar10 + -8);
  lStack_ec0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_ec8 + 0x40));
  lVar13 = (long)&lStack_f00 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112db3b70;
  uStack_ed8 = lVar13 - extraout_x8_00;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  lStack_ed0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (lVar13 - extraout_x8_00) - extraout_x8_01;
  lVar10 = 0;
  lStack_eb8 = lVar21;
  __s10Foundation4UUIDVMa();
  lStack_e90 = *(long *)(lVar10 + -8);
  lStack_e98 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e90 + 0x40));
  lVar21 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d3bc20;
  lStack_ea0 = lVar21;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  uVar22 = lVar21 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_eb0 = uVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar22 = uVar22 - extraout_x12;
  uStack_ea8 = uVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar22 = uVar22 - extraout_x12_00;
  lVar10 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = (uVar22 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar27 - extraout_x12_02;
  uVar20 = *param_1;
  uVar12 = param_1[1];
  uVar15 = *param_2;
  uVar18 = param_2[1];
  lStack_ee8 = extraout_x13;
  puStack_e88 = param_1;
  if (uVar12 >> 0x3c < 0xf) {
    if (uVar18 >> 0x3c < 0xf) {
      lStack_ef0 = lVar13;
      lStack_ee0 = lVar10;
      func_0x000100de78a0(uVar20,uVar12);
      func_0x000100de78a0(uVar15,uVar18);
      uVar11 = uVar20;
      func_0x000100e25fcc(uVar20,uVar12,uVar15,uVar18);
      func_0x0001000b44c0(uVar15,uVar18);
      func_0x0001000b44c0(uVar20,uVar12);
      if ((uVar11 & 1) == 0) {
        return false;
      }
      goto LAB_103ddfc00;
    }
  }
  else if (0xe < uVar18 >> 0x3c) {
    lStack_ef0 = lVar13;
    lStack_ee0 = lVar10;
    func_0x000100de78a0(uVar20,uVar12);
    func_0x000100de78a0(uVar15,uVar18);
    func_0x0001000b44c0(uVar20,uVar12);
LAB_103ddfc00:
    puVar1 = puStack_e88;
    uVar20 = puStack_e88[2];
    if (((uVar20 != param_2[2]) || (puStack_e88[3] != param_2[3])) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar20 & 1) == 0)) {
      return false;
    }
    uVar20 = param_2[5];
    if (puVar1[5] == 0) {
      if (uVar20 != 0) {
        return false;
      }
    }
    else {
      if (uVar20 == 0) {
        return false;
      }
      uVar12 = puVar1[4];
      if (((uVar12 != param_2[4]) || (puVar1[5] != uVar20)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar12 & 1) == 0)) {
        return false;
      }
    }
    uVar20 = param_2[7];
    if (puVar1[7] == 0) {
      if (uVar20 != 0) {
        return false;
      }
    }
    else {
      if (uVar20 == 0) {
        return false;
      }
      uVar12 = puVar1[6];
      if (((uVar12 != param_2[6]) || (puVar1[7] != uVar20)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar12 & 1) == 0)) {
        return false;
      }
    }
    uVar20 = param_2[9];
    if (puVar1[9] == 0) {
      if (uVar20 != 0) {
        return false;
      }
    }
    else {
      if (uVar20 == 0) {
        return false;
      }
      uVar12 = puVar1[8];
      if (((uVar12 != param_2[8]) || (puVar1[9] != uVar20)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar12 & 1) == 0)) {
        return false;
      }
    }
    lVar13 = 0;
    FUN_103ddeef8();
    iVar8 = *(int *)(lVar13 + 0x24);
    lVar10 = (long)*(int *)(lStack_ee0 + 0x30);
    puStack_ef8 = param_2;
    FUN_103ddef30((long)puVar1 + (long)iVar8,lVar21,0x112d3bc20,&UNK_10d904ef0);
    puVar19 = puStack_ef8;
    FUN_103ddef30((long)puStack_ef8 + (long)iVar8,lVar21 + lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar26 = lStack_e98;
    pcVar25 = *(code **)(lStack_e90 + 0x30);
    lVar14 = lVar21;
    (*pcVar25)(lVar21,1,lStack_e98);
    if ((int)lVar14 == 1) {
      lVar10 = lVar21 + lVar10;
      (*pcVar25)(lVar10,1,lVar26);
      if ((int)lVar10 != 1) {
LAB_103ddfddc:
        FUN_103de402c(lVar21,0x112d68090,&UNK_10da24400);
        return false;
      }
      FUN_103de402c(lVar21,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      FUN_103ddef30(lVar21,uVar22,0x112d3bc20,&UNK_10d904ef0);
      lVar14 = lVar21 + lVar10;
      (*pcVar25)(lVar14,1,lVar26);
      lVar7 = lStack_e90;
      lVar6 = lStack_ea0;
      if ((int)lVar14 == 1) {
        (**(code **)(lStack_e90 + 8))(uVar22,lVar26);
        goto LAB_103ddfddc;
      }
      lStack_f00 = lVar13;
      (**(code **)(lStack_e90 + 0x20))(lStack_ea0,lVar21 + lVar10,lVar26);
      uVar15 = 0x112d68098;
      func_0x000103de406c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar20 = uVar22;
      __sSQ2eeoiySbx_xtFZTj(uVar22,lVar6,lVar26,uVar15);
      puVar19 = puStack_ef8;
      lVar13 = lStack_f00;
      pcVar24 = *(code **)(lVar7 + 8);
      (*pcVar24)(lVar6,lVar26);
      (*pcVar24)(uVar22,lVar26);
      FUN_103de402c(lVar21,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar20 & 1) == 0) {
        return false;
      }
    }
    iVar8 = *(int *)(lVar13 + 0x28);
    lVar10 = (long)*(int *)(lStack_ee0 + 0x30);
    FUN_103ddef30((long)puStack_e88 + (long)iVar8,lVar27,0x112d3bc20,&UNK_10d904ef0);
    FUN_103ddef30((long)puVar19 + (long)iVar8,lVar27 + lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar21 = lVar27;
    (*pcVar25)(lVar27,1,lVar26);
    uVar20 = uStack_ea8;
    if ((int)lVar21 == 1) {
      lVar10 = lVar27 + lVar10;
      (*pcVar25)(lVar10,1,lVar26);
      if ((int)lVar10 != 1) {
LAB_103ddff68:
        FUN_103de402c(lVar27,0x112d68090,&UNK_10da24400);
        return false;
      }
      FUN_103de402c(lVar27,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      FUN_103ddef30(lVar27,uStack_ea8,0x112d3bc20,&UNK_10d904ef0);
      lVar21 = lVar27 + lVar10;
      (*pcVar25)(lVar21,1,lVar26);
      lVar6 = lStack_e90;
      lVar14 = lStack_ea0;
      if ((int)lVar21 == 1) {
        (**(code **)(lStack_e90 + 8))(uVar20,lVar26);
        goto LAB_103ddff68;
      }
      (**(code **)(lStack_e90 + 0x20))(lStack_ea0,lVar27 + lVar10,lVar26);
      uVar15 = 0x112d68098;
      func_0x000103de406c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar12 = uVar20;
      __sSQ2eeoiySbx_xtFZTj(uVar20,lVar14,lVar26,uVar15);
      pcVar24 = *(code **)(lVar6 + 8);
      (*pcVar24)(lVar14,lVar26);
      (*pcVar24)(uVar20,lVar26);
      FUN_103de402c(lVar27,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar12 & 1) == 0) {
        return false;
      }
    }
    iVar8 = *(int *)(lVar13 + 0x2c);
    lVar10 = (long)*(int *)(lStack_ee0 + 0x30);
    lStack_f00 = lVar13;
    FUN_103ddef30((long)puStack_e88 + (long)iVar8,lStack_ee8,0x112d3bc20,&UNK_10d904ef0);
    FUN_103ddef30((long)puVar19 + (long)iVar8,lStack_ee8 + lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar21 = lStack_ee8;
    (*pcVar25)(lStack_ee8,1,lVar26);
    uVar20 = uStack_eb0;
    if ((int)lVar21 == 1) {
      lVar10 = lStack_ee8 + lVar10;
      (*pcVar25)(lVar10,1,lVar26);
      if ((int)lVar10 != 1) {
LAB_103de00f4:
        FUN_103de402c(lStack_ee8,0x112d68090,&UNK_10da24400);
        return false;
      }
      FUN_103de402c(lStack_ee8,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      FUN_103ddef30(lStack_ee8,uStack_eb0,0x112d3bc20,&UNK_10d904ef0);
      lVar21 = lStack_ee8 + lVar10;
      (*pcVar25)(lVar21,1,lVar26);
      lVar27 = lStack_e90;
      lVar13 = lStack_ea0;
      if ((int)lVar21 == 1) {
        (**(code **)(lStack_e90 + 8))(uVar20,lVar26);
        goto LAB_103de00f4;
      }
      (**(code **)(lStack_e90 + 0x20))(lStack_ea0,lStack_ee8 + lVar10,lVar26);
      uVar15 = 0x112d68098;
      func_0x000103de406c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar12 = uVar20;
      __sSQ2eeoiySbx_xtFZTj(uVar20,lVar13,lVar26,uVar15);
      pcVar25 = *(code **)(lVar27 + 8);
      (*pcVar25)(lVar13,lVar26);
      (*pcVar25)(uVar20,lVar26);
      FUN_103de402c(lStack_ee8,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar12 & 1) == 0) {
        return false;
      }
    }
    if (*(int *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x30)) !=
        *(int *)((long)puVar19 + (long)*(int *)(lStack_f00 + 0x30))) {
      return false;
    }
    plVar16 = (long *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x34));
    puVar19 = (undefined8 *)((long)puVar19 + (long)*(int *)(lStack_f00 + 0x34));
    lVar10 = *plVar16;
    uVar20 = plVar16[1];
    lVar21 = plVar16[2];
    lVar13 = plVar16[3];
    lVar26 = plVar16[4];
    uVar15 = *puVar19;
    lVar27 = puVar19[1];
    uVar4 = puVar19[2];
    uVar5 = puVar19[3];
    uVar23 = puVar19[4];
    if (uVar20 == 1) {
      if (lVar27 != 1) {
LAB_103de0248:
        lStack_e90 = uVar15;
        puStack_e88 = (ulong *)lVar27;
        FUN_103de4004(lVar10,uVar20,lVar21,lVar13,lVar26);
        puVar1 = puStack_e88;
        FUN_103de4004(uVar15,puStack_e88,uVar4,uVar5,uVar23);
        func_0x000103de4018(lVar10,uVar20,lVar21,lVar13,lVar26);
        func_0x000103de4018(lStack_e90,puVar1,uVar4,uVar5,uVar23);
        return false;
      }
      FUN_103de4004(lVar10,1,lVar21,lVar13,lVar26);
      FUN_103de4004(uVar15,1,uVar4,uVar5,uVar23);
      func_0x000103de4018(lVar10,1,lVar21,lVar13,lVar26);
    }
    else {
      if (lVar27 == 1) goto LAB_103de0248;
      bStack_80 = (byte)uVar5 & 1;
      bStack_7f = (byte)((ulong)uVar5 >> 8) & 1;
      bStack_7e = (byte)((ulong)uVar5 >> 0x10) & 1;
      bStack_a8 = (byte)lVar13 & 1;
      bStack_a7 = (byte)((ulong)lVar13 >> 8) & 1;
      bStack_a6 = (byte)((ulong)lVar13 >> 0x10) & 1;
      uStack_ea8 = uVar20;
      lStack_ea0 = lVar10;
      lStack_e98 = lVar21;
      lStack_c0 = lVar10;
      uStack_b8 = uVar20;
      lStack_b0 = lVar21;
      lStack_a0 = lVar26;
      uStack_98 = uVar15;
      lStack_90 = lVar27;
      uStack_88 = uVar4;
      uStack_78 = uVar23;
      FUN_103de4004(lVar10,uVar20,lVar21,lVar13,lVar26);
      FUN_103de4004(uVar15,lVar27,uVar4,uVar5,uVar23);
      plVar16 = &lStack_c0;
      func_0x000104759444(plVar16,&uStack_98);
      func_0x000103de4018(uVar15,lVar27,uVar4,uVar5,uVar23);
      func_0x000103de4018(lStack_ea0,uStack_ea8,lStack_e98,lVar13,lVar26);
      if (((ulong)plVar16 & 1) == 0) {
        return false;
      }
    }
    puVar1 = puStack_e88;
    lVar10 = (long)*(int *)(lStack_f00 + 0x38);
    _memcpy(auStack_4e0,(long)puStack_e88 + lVar10,0x160);
    _memcpy(&uStack_7a0,(long)puVar1 + lVar10,0x160);
    puVar19 = puStack_ef8;
    _memcpy(auStack_380,(long)puStack_ef8 + lVar10,0x160);
    _memcpy(&uStack_640,(long)puVar19 + lVar10,0x160);
    iVar8 = (int)&uStack_7a0;
    func_0x000101542f6c();
    if (iVar8 == 1) {
      iVar8 = (int)&uStack_640;
      func_0x000101542f6c();
      if (iVar8 != 1) {
LAB_103de0478:
        _memcpy(auStack_a60,&uStack_7a0,0x2c0);
        FUN_103ddef30(auStack_4e0,auStack_220,0x112db3a28,&UNK_10d95ddb0);
        FUN_103ddef30(auStack_380,auStack_220,0x112db3a28,&UNK_10d95ddb0);
        FUN_103de402c(auStack_a60,0x113010758,&UNK_10dc96580);
        return false;
      }
      _memcpy(auStack_a60,&uStack_7a0,0x160);
      FUN_103ddef30(auStack_4e0,auStack_220,0x112db3a28,&UNK_10d95ddb0);
      FUN_103ddef30(auStack_380,auStack_220,0x112db3a28,&UNK_10d95ddb0);
      FUN_103de402c(auStack_a60,0x112db3a28,&UNK_10d95ddb0);
    }
    else {
      _memcpy(&uStack_bc0,&uStack_7a0,0x160);
      iVar8 = (int)&uStack_640;
      func_0x000101542f6c();
      if (iVar8 == 1) goto LAB_103de0478;
      _memcpy(&uStack_d20,&uStack_640,0x160);
      _memcpy(auStack_a60,&uStack_640,0x160);
      _memcpy(auStack_220,&uStack_bc0,0x160);
      FUN_103ddef30(auStack_4e0,&uStack_e80,0x112db3a28,&UNK_10d95ddb0);
      FUN_103ddef30(auStack_380,&uStack_e80,0x112db3a28,&UNK_10d95ddb0);
      puVar17 = auStack_220;
      func_0x00010475a084(puVar17,auStack_a60);
      FUN_103de402c(&uStack_d20,0x112db3a28,&UNK_10d95ddb0);
      FUN_103de402c(&uStack_7a0,0x112db3a28,&UNK_10d95ddb0);
      if (((ulong)puVar17 & 1) == 0) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x3c));
    uVar20 = puVar1[1];
    puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x3c));
    uVar12 = puVar2[1];
    if (uVar20 == 0) {
      if (uVar12 != 0) {
        return false;
      }
    }
    else {
      if (uVar12 == 0) {
        return false;
      }
      uVar18 = *puVar1;
      if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar18 & 1) == 0)) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x40));
    uVar20 = puVar1[1];
    puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x40));
    uVar12 = puVar2[1];
    if (uVar20 == 0) {
      if (uVar12 != 0) {
        return false;
      }
    }
    else {
      if (uVar12 == 0) {
        return false;
      }
      uVar18 = *puVar1;
      if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar18 & 1) == 0)) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x44));
    uVar20 = puVar1[1];
    puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x44));
    uVar12 = puVar2[1];
    if (uVar20 == 0) {
      if (uVar12 != 0) {
        return false;
      }
    }
    else {
      if (uVar12 == 0) {
        return false;
      }
      uVar18 = *puVar1;
      if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar18 & 1) == 0)) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x48));
    puVar19 = (undefined8 *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x48));
    uVar20 = *puVar1;
    uVar12 = puVar1[1];
    uVar15 = *puVar19;
    uVar18 = puVar19[1];
    if (uVar12 >> 0x3c < 0xf) {
      if (uVar18 >> 0x3c < 0xf) {
        func_0x000100de78a0(uVar20,uVar12);
        func_0x000100de78a0(uVar15,uVar18);
        uVar22 = uVar20;
        func_0x000100e25fcc(uVar20,uVar12,uVar15,uVar18);
        func_0x0001000b44c0(uVar15,uVar18);
        func_0x0001000b44c0(uVar20,uVar12);
        if ((uVar22 & 1) == 0) {
          return false;
        }
        goto LAB_103de074c;
      }
    }
    else if (0xe < uVar18 >> 0x3c) {
      func_0x000100de78a0(uVar20,uVar12);
      func_0x000100de78a0(uVar15,uVar18);
      func_0x0001000b44c0(uVar20,uVar12);
LAB_103de074c:
      lVar10 = lStack_eb8;
      if (*(long *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x4c)) !=
          *(long *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x4c))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x50)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x50))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x54)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x54))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x58)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x58))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x5c)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x5c))) {
        return false;
      }
      if (*(char *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x60)) !=
          *(char *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x60))) {
        return false;
      }
      iVar8 = *(int *)(lStack_f00 + 100);
      lVar21 = (long)*(int *)(lStack_ed0 + 0x30);
      FUN_103ddef30((long)puStack_e88 + (long)iVar8,lStack_eb8,0x112db39a8,&UNK_10d95dd90);
      FUN_103ddef30((long)puStack_ef8 + (long)iVar8,lVar10 + lVar21,0x112db39a8,&UNK_10d95dd90);
      pcVar25 = *(code **)(lStack_ec8 + 0x30);
      (*pcVar25)(lVar10,1,lStack_ec0);
      lVar13 = lStack_eb8;
      if ((int)lVar10 == 1) {
        lVar21 = lStack_eb8 + lVar21;
        (*pcVar25)(lVar21,1,lStack_ec0);
        if ((int)lVar21 != 1) {
LAB_103de08e8:
          FUN_103de402c(lStack_eb8,0x112db3b70,&UNK_10d95def0);
          return false;
        }
        FUN_103de402c(lStack_eb8,0x112db39a8,&UNK_10d95dd90);
      }
      else {
        FUN_103ddef30(lStack_eb8,uStack_ed8,0x112db39a8,&UNK_10d95dd90);
        lVar13 = lVar13 + lVar21;
        (*pcVar25)(lVar13,1,lStack_ec0);
        lVar27 = lStack_eb8;
        lVar10 = lStack_ef0;
        if ((int)lVar13 == 1) {
          FUN_103de0be8(uStack_ed8);
          goto LAB_103de08e8;
        }
        func_0x0001034c75b0(lStack_eb8 + lVar21,lStack_ef0);
        uVar20 = uStack_ed8;
        uVar12 = uStack_ed8;
        func_0x000104841c50(uStack_ed8,lVar10);
        FUN_103de0be8(lVar10);
        FUN_103de0be8(uVar20);
        FUN_103de402c(lVar27,0x112db39a8,&UNK_10d95dd90);
        if ((uVar12 & 1) == 0) {
          return false;
        }
      }
      if (*(float *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x68)) !=
          *(float *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x68))) {
        return false;
      }
      puVar19 = (undefined8 *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x6c));
      puVar3 = (undefined8 *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x6c));
      iVar8 = (int)&uStack_6e0;
      uStack_718 = puVar19[0x11];
      uStack_720 = puVar19[0x10];
      uStack_708 = puVar19[0x13];
      uStack_710 = puVar19[0x12];
      uStack_700 = puVar19[0x14];
      uStack_6d8 = puVar3[1];
      uStack_6e0 = *puVar3;
      uStack_6c8 = puVar3[3];
      uStack_6d0 = puVar3[2];
      uStack_6f8 = (undefined1)puVar19[0x15];
      uStack_6ef = *(undefined8 *)((long)puVar19 + 0xb1);
      uStack_6f7 = (undefined7)*(undefined8 *)((long)puVar19 + 0xa9);
      uStack_6f0 = (undefined1)((ulong)*(undefined8 *)((long)puVar19 + 0xa9) >> 0x38);
      uStack_758 = puVar19[9];
      uStack_760 = puVar19[8];
      uStack_748 = puVar19[0xb];
      uStack_750 = puVar19[10];
      uStack_738 = puVar19[0xd];
      uStack_740 = puVar19[0xc];
      uStack_728 = puVar19[0xf];
      uStack_730 = puVar19[0xe];
      uStack_798 = puVar19[1];
      uStack_7a0 = *puVar19;
      uStack_788 = puVar19[3];
      uStack_790 = puVar19[2];
      uStack_778 = puVar19[5];
      uStack_780 = puVar19[4];
      uStack_768 = puVar19[7];
      uStack_770 = puVar19[6];
      uStack_62f = *(undefined8 *)((long)puVar3 + 0xb1);
      uStack_630 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0xa9) >> 0x38);
      uStack_658 = puVar3[0x11];
      uStack_660 = puVar3[0x10];
      uStack_648 = puVar3[0x13];
      uStack_650 = puVar3[0x12];
      uStack_640 = puVar3[0x14];
      uStack_638 = (undefined1)puVar3[0x15];
      uStack_637 = (undefined7)((ulong)puVar3[0x15] >> 8);
      uStack_698 = puVar3[9];
      uStack_6a0 = puVar3[8];
      uStack_688 = puVar3[0xb];
      uStack_690 = puVar3[10];
      uStack_678 = puVar3[0xd];
      uStack_680 = puVar3[0xc];
      uStack_668 = puVar3[0xf];
      uStack_670 = puVar3[0xe];
      uStack_6b8 = puVar3[5];
      uStack_6c0 = puVar3[4];
      uStack_6a8 = puVar3[7];
      uStack_6b0 = puVar3[6];
      iVar9 = (int)&uStack_7a0;
      func_0x000101541310();
      if (iVar9 == 1) {
        func_0x000101541310();
        if (iVar8 != 1) {
          return false;
        }
      }
      else {
        uStack_df8 = uStack_718;
        uStack_e00 = uStack_720;
        uStack_de8 = uStack_708;
        uStack_df0 = uStack_710;
        uStack_dd8 = uStack_6f8;
        uStack_de0 = uStack_700;
        uStack_dcf = uStack_6ef;
        uStack_dd7 = uStack_6f7;
        uStack_dd0 = uStack_6f0;
        uStack_e38 = uStack_758;
        uStack_e40 = uStack_760;
        uStack_e28 = uStack_748;
        uStack_e30 = uStack_750;
        uStack_e18 = uStack_738;
        uStack_e20 = uStack_740;
        uStack_e08 = uStack_728;
        uStack_e10 = uStack_730;
        uStack_e78 = uStack_798;
        uStack_e80 = uStack_7a0;
        uStack_e68 = uStack_788;
        uStack_e70 = uStack_790;
        uStack_e58 = uStack_778;
        uStack_e60 = uStack_780;
        uStack_e48 = uStack_768;
        uStack_e50 = uStack_770;
        func_0x000101541310();
        if (iVar8 == 1) {
          return false;
        }
        uStack_b38 = uStack_658;
        uStack_b40 = uStack_660;
        uStack_b28 = uStack_648;
        uStack_b30 = uStack_650;
        uStack_b18 = uStack_638;
        uStack_b20 = uStack_640;
        uStack_b0f = uStack_62f;
        uStack_b17 = uStack_637;
        uStack_b10 = uStack_630;
        uStack_b78 = uStack_698;
        uStack_b80 = uStack_6a0;
        uStack_b68 = uStack_688;
        uStack_b70 = uStack_690;
        uStack_b58 = uStack_678;
        uStack_b60 = uStack_680;
        uStack_b48 = uStack_668;
        uStack_b50 = uStack_670;
        uStack_bb8 = uStack_6d8;
        uStack_bc0 = uStack_6e0;
        uStack_ba8 = uStack_6c8;
        uStack_bb0 = uStack_6d0;
        uStack_b98 = uStack_6b8;
        uStack_ba0 = uStack_6c0;
        uStack_b88 = uStack_6a8;
        uStack_b90 = uStack_6b0;
        uStack_c98 = uStack_df8;
        uStack_ca0 = uStack_e00;
        uStack_c88 = uStack_de8;
        uStack_c90 = uStack_df0;
        uStack_c78 = uStack_dd8;
        uStack_c80 = uStack_de0;
        uStack_c6f = uStack_dcf;
        uStack_c77 = uStack_dd7;
        uStack_c70 = uStack_dd0;
        uStack_cd8 = uStack_e38;
        uStack_ce0 = uStack_e40;
        uStack_cc8 = uStack_e28;
        uStack_cd0 = uStack_e30;
        uStack_cb8 = uStack_e18;
        uStack_cc0 = uStack_e20;
        uStack_ca8 = uStack_e08;
        uStack_cb0 = uStack_e10;
        uStack_d18 = uStack_e78;
        uStack_d20 = uStack_e80;
        uStack_d08 = uStack_e68;
        uStack_d10 = uStack_e70;
        uStack_cf8 = uStack_e58;
        uStack_d00 = uStack_e60;
        uStack_ce8 = uStack_e48;
        uStack_cf0 = uStack_e50;
        puVar19 = &uStack_d20;
        func_0x0001046c99dc(puVar19,&uStack_bc0);
        if (((ulong)puVar19 & 1) == 0) {
          return false;
        }
      }
      puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x70));
      uVar20 = puVar1[1];
      puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x70));
      uVar12 = puVar2[1];
      if (uVar20 == 0) {
        if (uVar12 != 0) {
          return false;
        }
      }
      else {
        if (uVar12 == 0) {
          return false;
        }
        uVar18 = *puVar1;
        if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar18 & 1) == 0)) {
          return false;
        }
      }
      if (*(int *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x74)) !=
          *(int *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x74))) {
        return false;
      }
      if (*(int *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x78)) !=
          *(int *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x78))) {
        return false;
      }
      return *(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x7c)) ==
             *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x7c));
    }
    func_0x000100de78a0(uVar20,uVar12);
    func_0x000100de78a0(uVar15,uVar18);
    func_0x0001000b44c0(uVar20,uVar12);
    goto LAB_103ddfb80;
  }
  func_0x000100de78a0(uVar20,uVar12);
  func_0x000100de78a0(uVar15,uVar18);
  func_0x0001000b44c0(uVar20,uVar12);
LAB_103ddfb80:
  func_0x0001000b44c0(uVar15,uVar18);
  return false;
}



/* Entry: 103ddf8d8; end: 103de0be7;  */

bool FUN_103ddf8d8(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar21;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar22;
  undefined8 uVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  code *pcVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  long lStack_f00;
  undefined8 *puStack_ef8;
  long lStack_ef0;
  long lStack_ee8;
  long lStack_ee0;
  ulong uStack_ed8;
  long lStack_ed0;
  long lStack_ec8;
  long lStack_ec0;
  long lStack_eb8;
  ulong uStack_eb0;
  ulong uStack_ea8;
  long lStack_ea0;
  long lStack_e98;
  long lStack_e90;
  ulong *puStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined1 uStack_dd8;
  undefined7 uStack_dd7;
  undefined1 uStack_dd0;
  undefined8 uStack_dcf;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined1 uStack_c78;
  undefined7 uStack_c77;
  undefined1 uStack_c70;
  undefined8 uStack_c6f;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined1 uStack_b18;
  undefined7 uStack_b17;
  undefined1 uStack_b10;
  undefined8 uStack_b0f;
  undefined1 auStack_a60 [704];
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 uStack_6f8;
  undefined7 uStack_6f7;
  undefined1 uStack_6f0;
  undefined8 uStack_6ef;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined7 uStack_637;
  undefined1 uStack_630;
  undefined8 uStack_62f;
  undefined1 auStack_4e0 [352];
  undefined1 auStack_380 [352];
  undefined1 auStack_220 [352];
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  byte bStack_a8;
  byte bStack_a7;
  byte bStack_a6;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  undefined8 uStack_78;
  
  lVar10 = 0;
  func_0x000100b91fbc();
  lStack_ec8 = *(long *)(lVar10 + -8);
  lStack_ec0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_ec8 + 0x40));
  lVar13 = (long)&lStack_f00 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112db3b70;
  uStack_ed8 = lVar13 - extraout_x8_00;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  lStack_ed0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (lVar13 - extraout_x8_00) - extraout_x8_01;
  lVar10 = 0;
  lStack_eb8 = lVar21;
  __s10Foundation4UUIDVMa();
  lStack_e90 = *(long *)(lVar10 + -8);
  lStack_e98 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e90 + 0x40));
  lVar21 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d3bc20;
  lStack_ea0 = lVar21;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  uVar22 = lVar21 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_eb0 = uVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar22 = uVar22 - extraout_x12;
  uStack_ea8 = uVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar22 = uVar22 - extraout_x12_00;
  lVar10 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = (uVar22 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar27 - extraout_x12_02;
  uVar20 = *param_1;
  uVar12 = param_1[1];
  uVar15 = *param_2;
  uVar18 = param_2[1];
  lStack_ee8 = extraout_x13;
  puStack_e88 = param_1;
  if (uVar12 >> 0x3c < 0xf) {
    if (uVar18 >> 0x3c < 0xf) {
      lStack_ef0 = lVar13;
      lStack_ee0 = lVar10;
      func_0x000100de78a0(uVar20,uVar12);
      func_0x000100de78a0(uVar15,uVar18);
      uVar11 = uVar20;
      func_0x000100e25fcc(uVar20,uVar12,uVar15,uVar18);
      func_0x0001000b44c0(uVar15,uVar18);
      func_0x0001000b44c0(uVar20,uVar12);
      if ((uVar11 & 1) == 0) {
        return false;
      }
      goto LAB_103ddfc00;
    }
  }
  else if (0xe < uVar18 >> 0x3c) {
    lStack_ef0 = lVar13;
    lStack_ee0 = lVar10;
    func_0x000100de78a0(uVar20,uVar12);
    func_0x000100de78a0(uVar15,uVar18);
    func_0x0001000b44c0(uVar20,uVar12);
LAB_103ddfc00:
    puVar1 = puStack_e88;
    uVar20 = puStack_e88[2];
    if (((uVar20 != param_2[2]) || (puStack_e88[3] != param_2[3])) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar20 & 1) == 0)) {
      return false;
    }
    uVar20 = param_2[5];
    if (puVar1[5] == 0) {
      if (uVar20 != 0) {
        return false;
      }
    }
    else {
      if (uVar20 == 0) {
        return false;
      }
      uVar12 = puVar1[4];
      if (((uVar12 != param_2[4]) || (puVar1[5] != uVar20)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar12 & 1) == 0)) {
        return false;
      }
    }
    uVar20 = param_2[7];
    if (puVar1[7] == 0) {
      if (uVar20 != 0) {
        return false;
      }
    }
    else {
      if (uVar20 == 0) {
        return false;
      }
      uVar12 = puVar1[6];
      if (((uVar12 != param_2[6]) || (puVar1[7] != uVar20)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar12 & 1) == 0)) {
        return false;
      }
    }
    uVar20 = param_2[9];
    if (puVar1[9] == 0) {
      if (uVar20 != 0) {
        return false;
      }
    }
    else {
      if (uVar20 == 0) {
        return false;
      }
      uVar12 = puVar1[8];
      if (((uVar12 != param_2[8]) || (puVar1[9] != uVar20)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar12 & 1) == 0)) {
        return false;
      }
    }
    lVar13 = 0;
    FUN_103ddeef8();
    iVar8 = *(int *)(lVar13 + 0x24);
    lVar10 = (long)*(int *)(lStack_ee0 + 0x30);
    puStack_ef8 = param_2;
    FUN_103ddef30((long)puVar1 + (long)iVar8,lVar21,0x112d3bc20,&UNK_10d904ef0);
    puVar19 = puStack_ef8;
    FUN_103ddef30((long)puStack_ef8 + (long)iVar8,lVar21 + lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar26 = lStack_e98;
    pcVar25 = *(code **)(lStack_e90 + 0x30);
    lVar14 = lVar21;
    (*pcVar25)(lVar21,1,lStack_e98);
    if ((int)lVar14 == 1) {
      lVar10 = lVar21 + lVar10;
      (*pcVar25)(lVar10,1,lVar26);
      if ((int)lVar10 != 1) {
LAB_103ddfddc:
        FUN_103de402c(lVar21,0x112d68090,&UNK_10da24400);
        return false;
      }
      FUN_103de402c(lVar21,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      FUN_103ddef30(lVar21,uVar22,0x112d3bc20,&UNK_10d904ef0);
      lVar14 = lVar21 + lVar10;
      (*pcVar25)(lVar14,1,lVar26);
      lVar7 = lStack_e90;
      lVar6 = lStack_ea0;
      if ((int)lVar14 == 1) {
        (**(code **)(lStack_e90 + 8))(uVar22,lVar26);
        goto LAB_103ddfddc;
      }
      lStack_f00 = lVar13;
      (**(code **)(lStack_e90 + 0x20))(lStack_ea0,lVar21 + lVar10,lVar26);
      uVar15 = 0x112d68098;
      func_0x000103de406c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar20 = uVar22;
      __sSQ2eeoiySbx_xtFZTj(uVar22,lVar6,lVar26,uVar15);
      puVar19 = puStack_ef8;
      lVar13 = lStack_f00;
      pcVar24 = *(code **)(lVar7 + 8);
      (*pcVar24)(lVar6,lVar26);
      (*pcVar24)(uVar22,lVar26);
      FUN_103de402c(lVar21,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar20 & 1) == 0) {
        return false;
      }
    }
    iVar8 = *(int *)(lVar13 + 0x28);
    lVar10 = (long)*(int *)(lStack_ee0 + 0x30);
    FUN_103ddef30((long)puStack_e88 + (long)iVar8,lVar27,0x112d3bc20,&UNK_10d904ef0);
    FUN_103ddef30((long)puVar19 + (long)iVar8,lVar27 + lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar21 = lVar27;
    (*pcVar25)(lVar27,1,lVar26);
    uVar20 = uStack_ea8;
    if ((int)lVar21 == 1) {
      lVar10 = lVar27 + lVar10;
      (*pcVar25)(lVar10,1,lVar26);
      if ((int)lVar10 != 1) {
LAB_103ddff68:
        FUN_103de402c(lVar27,0x112d68090,&UNK_10da24400);
        return false;
      }
      FUN_103de402c(lVar27,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      FUN_103ddef30(lVar27,uStack_ea8,0x112d3bc20,&UNK_10d904ef0);
      lVar21 = lVar27 + lVar10;
      (*pcVar25)(lVar21,1,lVar26);
      lVar6 = lStack_e90;
      lVar14 = lStack_ea0;
      if ((int)lVar21 == 1) {
        (**(code **)(lStack_e90 + 8))(uVar20,lVar26);
        goto LAB_103ddff68;
      }
      (**(code **)(lStack_e90 + 0x20))(lStack_ea0,lVar27 + lVar10,lVar26);
      uVar15 = 0x112d68098;
      func_0x000103de406c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar12 = uVar20;
      __sSQ2eeoiySbx_xtFZTj(uVar20,lVar14,lVar26,uVar15);
      pcVar24 = *(code **)(lVar6 + 8);
      (*pcVar24)(lVar14,lVar26);
      (*pcVar24)(uVar20,lVar26);
      FUN_103de402c(lVar27,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar12 & 1) == 0) {
        return false;
      }
    }
    iVar8 = *(int *)(lVar13 + 0x2c);
    lVar10 = (long)*(int *)(lStack_ee0 + 0x30);
    lStack_f00 = lVar13;
    FUN_103ddef30((long)puStack_e88 + (long)iVar8,lStack_ee8,0x112d3bc20,&UNK_10d904ef0);
    FUN_103ddef30((long)puVar19 + (long)iVar8,lStack_ee8 + lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar21 = lStack_ee8;
    (*pcVar25)(lStack_ee8,1,lVar26);
    uVar20 = uStack_eb0;
    if ((int)lVar21 == 1) {
      lVar10 = lStack_ee8 + lVar10;
      (*pcVar25)(lVar10,1,lVar26);
      if ((int)lVar10 != 1) {
LAB_103de00f4:
        FUN_103de402c(lStack_ee8,0x112d68090,&UNK_10da24400);
        return false;
      }
      FUN_103de402c(lStack_ee8,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      FUN_103ddef30(lStack_ee8,uStack_eb0,0x112d3bc20,&UNK_10d904ef0);
      lVar21 = lStack_ee8 + lVar10;
      (*pcVar25)(lVar21,1,lVar26);
      lVar27 = lStack_e90;
      lVar13 = lStack_ea0;
      if ((int)lVar21 == 1) {
        (**(code **)(lStack_e90 + 8))(uVar20,lVar26);
        goto LAB_103de00f4;
      }
      (**(code **)(lStack_e90 + 0x20))(lStack_ea0,lStack_ee8 + lVar10,lVar26);
      uVar15 = 0x112d68098;
      func_0x000103de406c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar12 = uVar20;
      __sSQ2eeoiySbx_xtFZTj(uVar20,lVar13,lVar26,uVar15);
      pcVar25 = *(code **)(lVar27 + 8);
      (*pcVar25)(lVar13,lVar26);
      (*pcVar25)(uVar20,lVar26);
      FUN_103de402c(lStack_ee8,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar12 & 1) == 0) {
        return false;
      }
    }
    if (*(int *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x30)) !=
        *(int *)((long)puVar19 + (long)*(int *)(lStack_f00 + 0x30))) {
      return false;
    }
    plVar16 = (long *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x34));
    puVar19 = (undefined8 *)((long)puVar19 + (long)*(int *)(lStack_f00 + 0x34));
    lVar10 = *plVar16;
    uVar20 = plVar16[1];
    lVar21 = plVar16[2];
    lVar13 = plVar16[3];
    lVar26 = plVar16[4];
    uVar15 = *puVar19;
    lVar27 = puVar19[1];
    uVar4 = puVar19[2];
    uVar5 = puVar19[3];
    uVar23 = puVar19[4];
    if (uVar20 == 1) {
      if (lVar27 != 1) {
LAB_103de0248:
        lStack_e90 = uVar15;
        puStack_e88 = (ulong *)lVar27;
        FUN_103de4004(lVar10,uVar20,lVar21,lVar13,lVar26);
        puVar1 = puStack_e88;
        FUN_103de4004(uVar15,puStack_e88,uVar4,uVar5,uVar23);
        func_0x000103de4018(lVar10,uVar20,lVar21,lVar13,lVar26);
        func_0x000103de4018(lStack_e90,puVar1,uVar4,uVar5,uVar23);
        return false;
      }
      FUN_103de4004(lVar10,1,lVar21,lVar13,lVar26);
      FUN_103de4004(uVar15,1,uVar4,uVar5,uVar23);
      func_0x000103de4018(lVar10,1,lVar21,lVar13,lVar26);
    }
    else {
      if (lVar27 == 1) goto LAB_103de0248;
      bStack_80 = (byte)uVar5 & 1;
      bStack_7f = (byte)((ulong)uVar5 >> 8) & 1;
      bStack_7e = (byte)((ulong)uVar5 >> 0x10) & 1;
      bStack_a8 = (byte)lVar13 & 1;
      bStack_a7 = (byte)((ulong)lVar13 >> 8) & 1;
      bStack_a6 = (byte)((ulong)lVar13 >> 0x10) & 1;
      uStack_ea8 = uVar20;
      lStack_ea0 = lVar10;
      lStack_e98 = lVar21;
      lStack_c0 = lVar10;
      uStack_b8 = uVar20;
      lStack_b0 = lVar21;
      lStack_a0 = lVar26;
      uStack_98 = uVar15;
      lStack_90 = lVar27;
      uStack_88 = uVar4;
      uStack_78 = uVar23;
      FUN_103de4004(lVar10,uVar20,lVar21,lVar13,lVar26);
      FUN_103de4004(uVar15,lVar27,uVar4,uVar5,uVar23);
      plVar16 = &lStack_c0;
      func_0x000104759444(plVar16,&uStack_98);
      func_0x000103de4018(uVar15,lVar27,uVar4,uVar5,uVar23);
      func_0x000103de4018(lStack_ea0,uStack_ea8,lStack_e98,lVar13,lVar26);
      if (((ulong)plVar16 & 1) == 0) {
        return false;
      }
    }
    puVar1 = puStack_e88;
    lVar10 = (long)*(int *)(lStack_f00 + 0x38);
    _memcpy(auStack_4e0,(long)puStack_e88 + lVar10,0x160);
    _memcpy(&uStack_7a0,(long)puVar1 + lVar10,0x160);
    puVar19 = puStack_ef8;
    _memcpy(auStack_380,(long)puStack_ef8 + lVar10,0x160);
    _memcpy(&uStack_640,(long)puVar19 + lVar10,0x160);
    iVar8 = (int)&uStack_7a0;
    func_0x000101542f6c();
    if (iVar8 == 1) {
      iVar8 = (int)&uStack_640;
      func_0x000101542f6c();
      if (iVar8 != 1) {
LAB_103de0478:
        _memcpy(auStack_a60,&uStack_7a0,0x2c0);
        FUN_103ddef30(auStack_4e0,auStack_220,0x112db3a28,&UNK_10d95ddb0);
        FUN_103ddef30(auStack_380,auStack_220,0x112db3a28,&UNK_10d95ddb0);
        FUN_103de402c(auStack_a60,0x113010758,&UNK_10dc96580);
        return false;
      }
      _memcpy(auStack_a60,&uStack_7a0,0x160);
      FUN_103ddef30(auStack_4e0,auStack_220,0x112db3a28,&UNK_10d95ddb0);
      FUN_103ddef30(auStack_380,auStack_220,0x112db3a28,&UNK_10d95ddb0);
      FUN_103de402c(auStack_a60,0x112db3a28,&UNK_10d95ddb0);
    }
    else {
      _memcpy(&uStack_bc0,&uStack_7a0,0x160);
      iVar8 = (int)&uStack_640;
      func_0x000101542f6c();
      if (iVar8 == 1) goto LAB_103de0478;
      _memcpy(&uStack_d20,&uStack_640,0x160);
      _memcpy(auStack_a60,&uStack_640,0x160);
      _memcpy(auStack_220,&uStack_bc0,0x160);
      FUN_103ddef30(auStack_4e0,&uStack_e80,0x112db3a28,&UNK_10d95ddb0);
      FUN_103ddef30(auStack_380,&uStack_e80,0x112db3a28,&UNK_10d95ddb0);
      puVar17 = auStack_220;
      func_0x00010475a084(puVar17,auStack_a60);
      FUN_103de402c(&uStack_d20,0x112db3a28,&UNK_10d95ddb0);
      FUN_103de402c(&uStack_7a0,0x112db3a28,&UNK_10d95ddb0);
      if (((ulong)puVar17 & 1) == 0) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x3c));
    uVar20 = puVar1[1];
    puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x3c));
    uVar12 = puVar2[1];
    if (uVar20 == 0) {
      if (uVar12 != 0) {
        return false;
      }
    }
    else {
      if (uVar12 == 0) {
        return false;
      }
      uVar18 = *puVar1;
      if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar18 & 1) == 0)) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x40));
    uVar20 = puVar1[1];
    puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x40));
    uVar12 = puVar2[1];
    if (uVar20 == 0) {
      if (uVar12 != 0) {
        return false;
      }
    }
    else {
      if (uVar12 == 0) {
        return false;
      }
      uVar18 = *puVar1;
      if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar18 & 1) == 0)) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x44));
    uVar20 = puVar1[1];
    puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x44));
    uVar12 = puVar2[1];
    if (uVar20 == 0) {
      if (uVar12 != 0) {
        return false;
      }
    }
    else {
      if (uVar12 == 0) {
        return false;
      }
      uVar18 = *puVar1;
      if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar18 & 1) == 0)) {
        return false;
      }
    }
    puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x48));
    puVar19 = (undefined8 *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x48));
    uVar20 = *puVar1;
    uVar12 = puVar1[1];
    uVar15 = *puVar19;
    uVar18 = puVar19[1];
    if (uVar12 >> 0x3c < 0xf) {
      if (uVar18 >> 0x3c < 0xf) {
        func_0x000100de78a0(uVar20,uVar12);
        func_0x000100de78a0(uVar15,uVar18);
        uVar22 = uVar20;
        func_0x000100e25fcc(uVar20,uVar12,uVar15,uVar18);
        func_0x0001000b44c0(uVar15,uVar18);
        func_0x0001000b44c0(uVar20,uVar12);
        if ((uVar22 & 1) == 0) {
          return false;
        }
        goto LAB_103de074c;
      }
    }
    else if (0xe < uVar18 >> 0x3c) {
      func_0x000100de78a0(uVar20,uVar12);
      func_0x000100de78a0(uVar15,uVar18);
      func_0x0001000b44c0(uVar20,uVar12);
LAB_103de074c:
      lVar10 = lStack_eb8;
      if (*(long *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x4c)) !=
          *(long *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x4c))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x50)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x50))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x54)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x54))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x58)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x58))) {
        return false;
      }
      if (*(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x5c)) !=
          *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x5c))) {
        return false;
      }
      if (*(char *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x60)) !=
          *(char *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x60))) {
        return false;
      }
      iVar8 = *(int *)(lStack_f00 + 100);
      lVar21 = (long)*(int *)(lStack_ed0 + 0x30);
      FUN_103ddef30((long)puStack_e88 + (long)iVar8,lStack_eb8,0x112db39a8,&UNK_10d95dd90);
      FUN_103ddef30((long)puStack_ef8 + (long)iVar8,lVar10 + lVar21,0x112db39a8,&UNK_10d95dd90);
      pcVar25 = *(code **)(lStack_ec8 + 0x30);
      (*pcVar25)(lVar10,1,lStack_ec0);
      lVar13 = lStack_eb8;
      if ((int)lVar10 == 1) {
        lVar21 = lStack_eb8 + lVar21;
        (*pcVar25)(lVar21,1,lStack_ec0);
        if ((int)lVar21 != 1) {
LAB_103de08e8:
          FUN_103de402c(lStack_eb8,0x112db3b70,&UNK_10d95def0);
          return false;
        }
        FUN_103de402c(lStack_eb8,0x112db39a8,&UNK_10d95dd90);
      }
      else {
        FUN_103ddef30(lStack_eb8,uStack_ed8,0x112db39a8,&UNK_10d95dd90);
        lVar13 = lVar13 + lVar21;
        (*pcVar25)(lVar13,1,lStack_ec0);
        lVar27 = lStack_eb8;
        lVar10 = lStack_ef0;
        if ((int)lVar13 == 1) {
          FUN_103de0be8(uStack_ed8);
          goto LAB_103de08e8;
        }
        func_0x0001034c75b0(lStack_eb8 + lVar21,lStack_ef0);
        uVar20 = uStack_ed8;
        uVar12 = uStack_ed8;
        func_0x000104841c50(uStack_ed8,lVar10);
        FUN_103de0be8(lVar10);
        FUN_103de0be8(uVar20);
        FUN_103de402c(lVar27,0x112db39a8,&UNK_10d95dd90);
        if ((uVar12 & 1) == 0) {
          return false;
        }
      }
      if (*(float *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x68)) !=
          *(float *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x68))) {
        return false;
      }
      puVar19 = (undefined8 *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x6c));
      puVar3 = (undefined8 *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x6c));
      iVar8 = (int)&uStack_6e0;
      uStack_718 = puVar19[0x11];
      uStack_720 = puVar19[0x10];
      uStack_708 = puVar19[0x13];
      uStack_710 = puVar19[0x12];
      uStack_700 = puVar19[0x14];
      uStack_6d8 = puVar3[1];
      uStack_6e0 = *puVar3;
      uStack_6c8 = puVar3[3];
      uStack_6d0 = puVar3[2];
      uStack_6f8 = (undefined1)puVar19[0x15];
      uStack_6ef = *(undefined8 *)((long)puVar19 + 0xb1);
      uStack_6f7 = (undefined7)*(undefined8 *)((long)puVar19 + 0xa9);
      uStack_6f0 = (undefined1)((ulong)*(undefined8 *)((long)puVar19 + 0xa9) >> 0x38);
      uStack_758 = puVar19[9];
      uStack_760 = puVar19[8];
      uStack_748 = puVar19[0xb];
      uStack_750 = puVar19[10];
      uStack_738 = puVar19[0xd];
      uStack_740 = puVar19[0xc];
      uStack_728 = puVar19[0xf];
      uStack_730 = puVar19[0xe];
      uStack_798 = puVar19[1];
      uStack_7a0 = *puVar19;
      uStack_788 = puVar19[3];
      uStack_790 = puVar19[2];
      uStack_778 = puVar19[5];
      uStack_780 = puVar19[4];
      uStack_768 = puVar19[7];
      uStack_770 = puVar19[6];
      uStack_62f = *(undefined8 *)((long)puVar3 + 0xb1);
      uStack_630 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0xa9) >> 0x38);
      uStack_658 = puVar3[0x11];
      uStack_660 = puVar3[0x10];
      uStack_648 = puVar3[0x13];
      uStack_650 = puVar3[0x12];
      uStack_640 = puVar3[0x14];
      uStack_638 = (undefined1)puVar3[0x15];
      uStack_637 = (undefined7)((ulong)puVar3[0x15] >> 8);
      uStack_698 = puVar3[9];
      uStack_6a0 = puVar3[8];
      uStack_688 = puVar3[0xb];
      uStack_690 = puVar3[10];
      uStack_678 = puVar3[0xd];
      uStack_680 = puVar3[0xc];
      uStack_668 = puVar3[0xf];
      uStack_670 = puVar3[0xe];
      uStack_6b8 = puVar3[5];
      uStack_6c0 = puVar3[4];
      uStack_6a8 = puVar3[7];
      uStack_6b0 = puVar3[6];
      iVar9 = (int)&uStack_7a0;
      func_0x000101541310();
      if (iVar9 == 1) {
        func_0x000101541310();
        if (iVar8 != 1) {
          return false;
        }
      }
      else {
        uStack_df8 = uStack_718;
        uStack_e00 = uStack_720;
        uStack_de8 = uStack_708;
        uStack_df0 = uStack_710;
        uStack_dd8 = uStack_6f8;
        uStack_de0 = uStack_700;
        uStack_dcf = uStack_6ef;
        uStack_dd7 = uStack_6f7;
        uStack_dd0 = uStack_6f0;
        uStack_e38 = uStack_758;
        uStack_e40 = uStack_760;
        uStack_e28 = uStack_748;
        uStack_e30 = uStack_750;
        uStack_e18 = uStack_738;
        uStack_e20 = uStack_740;
        uStack_e08 = uStack_728;
        uStack_e10 = uStack_730;
        uStack_e78 = uStack_798;
        uStack_e80 = uStack_7a0;
        uStack_e68 = uStack_788;
        uStack_e70 = uStack_790;
        uStack_e58 = uStack_778;
        uStack_e60 = uStack_780;
        uStack_e48 = uStack_768;
        uStack_e50 = uStack_770;
        func_0x000101541310();
        if (iVar8 == 1) {
          return false;
        }
        uStack_b38 = uStack_658;
        uStack_b40 = uStack_660;
        uStack_b28 = uStack_648;
        uStack_b30 = uStack_650;
        uStack_b18 = uStack_638;
        uStack_b20 = uStack_640;
        uStack_b0f = uStack_62f;
        uStack_b17 = uStack_637;
        uStack_b10 = uStack_630;
        uStack_b78 = uStack_698;
        uStack_b80 = uStack_6a0;
        uStack_b68 = uStack_688;
        uStack_b70 = uStack_690;
        uStack_b58 = uStack_678;
        uStack_b60 = uStack_680;
        uStack_b48 = uStack_668;
        uStack_b50 = uStack_670;
        uStack_bb8 = uStack_6d8;
        uStack_bc0 = uStack_6e0;
        uStack_ba8 = uStack_6c8;
        uStack_bb0 = uStack_6d0;
        uStack_b98 = uStack_6b8;
        uStack_ba0 = uStack_6c0;
        uStack_b88 = uStack_6a8;
        uStack_b90 = uStack_6b0;
        uStack_c98 = uStack_df8;
        uStack_ca0 = uStack_e00;
        uStack_c88 = uStack_de8;
        uStack_c90 = uStack_df0;
        uStack_c78 = uStack_dd8;
        uStack_c80 = uStack_de0;
        uStack_c6f = uStack_dcf;
        uStack_c77 = uStack_dd7;
        uStack_c70 = uStack_dd0;
        uStack_cd8 = uStack_e38;
        uStack_ce0 = uStack_e40;
        uStack_cc8 = uStack_e28;
        uStack_cd0 = uStack_e30;
        uStack_cb8 = uStack_e18;
        uStack_cc0 = uStack_e20;
        uStack_ca8 = uStack_e08;
        uStack_cb0 = uStack_e10;
        uStack_d18 = uStack_e78;
        uStack_d20 = uStack_e80;
        uStack_d08 = uStack_e68;
        uStack_d10 = uStack_e70;
        uStack_cf8 = uStack_e58;
        uStack_d00 = uStack_e60;
        uStack_ce8 = uStack_e48;
        uStack_cf0 = uStack_e50;
        puVar19 = &uStack_d20;
        func_0x0001046c99dc(puVar19,&uStack_bc0);
        if (((ulong)puVar19 & 1) == 0) {
          return false;
        }
      }
      puVar1 = (ulong *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x70));
      uVar20 = puVar1[1];
      puVar2 = (ulong *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x70));
      uVar12 = puVar2[1];
      if (uVar20 == 0) {
        if (uVar12 != 0) {
          return false;
        }
      }
      else {
        if (uVar12 == 0) {
          return false;
        }
        uVar18 = *puVar1;
        if (((uVar18 != *puVar2) || (uVar20 != uVar12)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar18 & 1) == 0)) {
          return false;
        }
      }
      if (*(int *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x74)) !=
          *(int *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x74))) {
        return false;
      }
      if (*(int *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x78)) !=
          *(int *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x78))) {
        return false;
      }
      return *(double *)((long)puStack_e88 + (long)*(int *)(lStack_f00 + 0x7c)) ==
             *(double *)((long)puStack_ef8 + (long)*(int *)(lStack_f00 + 0x7c));
    }
    func_0x000100de78a0(uVar20,uVar12);
    func_0x000100de78a0(uVar15,uVar18);
    func_0x0001000b44c0(uVar20,uVar12);
    goto LAB_103ddfb80;
  }
  func_0x000100de78a0(uVar20,uVar12);
  func_0x000100de78a0(uVar15,uVar18);
  func_0x0001000b44c0(uVar20,uVar12);
LAB_103ddfb80:
  func_0x0001000b44c0(uVar15,uVar18);
  return false;
}



/* Entry: 103de0be8; end: 103de0c23;  */

undefined8 FUN_103de0be8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b91fbc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103de0c24; end: 103de0c4f;  */

void FUN_103de0c24(void)

{
  func_0x000103de406c(0x113010658,FUN_103ddeef8,&UNK_10dc96480);
  return;
}



/* Entry: 103de0c50; end: 103de1403;  */

long * FUN_103de0c50(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar12 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar12 >> 0x11 & 1) == 0) {
    uVar22 = param_2[1];
    if (uVar22 >> 0x3c < 0xf) {
      lVar14 = *param_2;
      func_0x00010006c00c(lVar14,uVar22);
      *param_1 = lVar14;
      param_1[1] = uVar22;
    }
    else {
      lVar14 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar14;
    }
    lVar14 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar14;
    lVar23 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar23;
    lVar16 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar16;
    lVar29 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar29;
    lVar28 = (long)*(int *)(param_3 + 0x24);
    lVar13 = 0;
    __s10Foundation4UUIDVMa();
    lVar21 = *(long *)(lVar13 + -8);
    pcVar25 = *(code **)(lVar21 + 0x30);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar23);
    _swift_bridgeObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar29);
    lVar14 = (long)param_2 + lVar28;
    (*pcVar25)(lVar14,1,lVar13);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar21 + 0x10))((long)param_1 + lVar28,(long)param_2 + lVar28,lVar13);
      (**(code **)(lVar21 + 0x38))((long)param_1 + lVar28,0,1,lVar13);
    }
    else {
      lVar14 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar28,(long)param_2 + lVar28,
              *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    lVar23 = (long)*(int *)(param_3 + 0x28);
    lVar14 = (long)param_2 + lVar23;
    (*pcVar25)(lVar14,1,lVar13);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar21 + 0x10))((long)param_1 + lVar23,(long)param_2 + lVar23,lVar13);
      (**(code **)(lVar21 + 0x38))((long)param_1 + lVar23,0,1,lVar13);
    }
    else {
      lVar14 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar23,(long)param_2 + lVar23,
              *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    lVar23 = (long)*(int *)(param_3 + 0x2c);
    lVar14 = (long)param_2 + lVar23;
    (*pcVar25)(lVar14,1,lVar13);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar21 + 0x10))((long)param_1 + lVar23,(long)param_2 + lVar23,lVar13);
      (**(code **)(lVar21 + 0x38))((long)param_1 + lVar23,0,1,lVar13);
    }
    else {
      lVar14 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar23,(long)param_2 + lVar23,
              *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    iVar11 = *(int *)(param_3 + 0x34);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
    lVar14 = puVar2[1];
    if (lVar14 == 1) {
      uVar26 = *puVar2;
      uVar30 = puVar2[3];
      uVar18 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar26;
      puVar1[3] = uVar30;
      puVar1[2] = uVar18;
      puVar1[4] = puVar2[4];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar14;
      puVar1[2] = puVar2[2];
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(puVar2 + 3);
      *(undefined2 *)((long)puVar1 + 0x19) = *(undefined2 *)((long)puVar2 + 0x19);
      puVar1[4] = puVar2[4];
      _swift_bridgeObjectRetain();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    if (puVar2[0x27] == 0) {
      _memcpy(puVar1,puVar2,0x160);
    }
    else {
      uVar26 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar26;
      uVar26 = puVar2[2];
      uVar18 = puVar2[3];
      puVar1[2] = uVar26;
      puVar1[3] = uVar18;
      uVar17 = puVar2[4];
      puVar1[4] = uVar17;
      uVar18 = puVar2[5];
      puVar1[6] = puVar2[6];
      puVar1[5] = uVar18;
      uVar20 = puVar2[7];
      uVar18 = puVar2[8];
      puVar1[7] = uVar20;
      puVar1[8] = uVar18;
      *(undefined2 *)(puVar1 + 9) = *(undefined2 *)(puVar2 + 9);
      *(undefined1 *)((long)puVar1 + 0x4a) = *(undefined1 *)((long)puVar2 + 0x4a);
      uVar18 = puVar2[0xb];
      puVar1[10] = puVar2[10];
      puVar1[0xb] = uVar18;
      uVar19 = puVar2[0xc];
      puVar1[0xc] = uVar19;
      *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)(puVar2 + 0xd);
      uVar30 = puVar2[0xe];
      puVar1[0xf] = puVar2[0xf];
      puVar1[0xe] = uVar30;
      *(undefined1 *)(puVar1 + 0x10) = *(undefined1 *)(puVar2 + 0x10);
      uVar30 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x12] = uVar30;
      uVar4 = puVar2[0x14];
      puVar1[0x13] = puVar2[0x13];
      puVar1[0x14] = uVar4;
      uVar5 = puVar2[0x16];
      puVar1[0x15] = puVar2[0x15];
      puVar1[0x16] = uVar5;
      uVar6 = puVar2[0x18];
      puVar1[0x17] = puVar2[0x17];
      puVar1[0x18] = uVar6;
      uVar7 = puVar2[0x1a];
      puVar1[0x19] = puVar2[0x19];
      puVar1[0x1a] = uVar7;
      uVar31 = puVar2[0x1b];
      puVar1[0x1c] = puVar2[0x1c];
      puVar1[0x1b] = uVar31;
      uVar27 = puVar2[0x1d];
      puVar1[0x1d] = uVar27;
      *(undefined1 *)(puVar1 + 0x1e) = *(undefined1 *)(puVar2 + 0x1e);
      *(undefined1 *)((long)puVar1 + 0xf1) = *(undefined1 *)((long)puVar2 + 0xf1);
      *(undefined1 *)((long)puVar1 + 0xf2) = *(undefined1 *)((long)puVar2 + 0xf2);
      uVar31 = puVar2[0x20];
      puVar1[0x1f] = puVar2[0x1f];
      puVar1[0x20] = uVar31;
      uVar8 = puVar2[0x22];
      puVar1[0x21] = puVar2[0x21];
      puVar1[0x22] = uVar8;
      uVar9 = puVar2[0x24];
      puVar1[0x23] = puVar2[0x23];
      puVar1[0x24] = uVar9;
      uVar10 = puVar2[0x26];
      puVar1[0x25] = puVar2[0x25];
      puVar1[0x26] = uVar10;
      uVar24 = puVar2[0x27];
      puVar1[0x27] = uVar24;
      uVar32 = puVar2[0x28];
      puVar1[0x29] = puVar2[0x29];
      puVar1[0x28] = uVar32;
      uVar32 = puVar2[0x2b];
      puVar1[0x2a] = puVar2[0x2a];
      puVar1[0x2b] = uVar32;
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar30);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRetain(uVar24);
    }
    iVar11 = *(int *)(param_3 + 0x40);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    uVar26 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar26;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
    uVar26 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar26;
    iVar11 = *(int *)(param_3 + 0x48);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
    uVar18 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar18;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
    uVar22 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar18);
    if (uVar22 >> 0x3c < 0xf) {
      uVar26 = *puVar2;
      func_0x00010006c00c(uVar26,uVar22);
      *puVar1 = uVar26;
      puVar1[1] = uVar22;
    }
    else {
      uVar26 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar26;
    }
    iVar11 = *(int *)(param_3 + 0x50);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
    *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
    iVar11 = *(int *)(param_3 + 0x58);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x54)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
    *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
    iVar11 = *(int *)(param_3 + 0x60);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
    *(undefined1 *)((long)param_1 + (long)iVar11) = *(undefined1 *)((long)param_2 + (long)iVar11);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 100));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 100));
    lVar14 = 0;
    func_0x000100b91fbc();
    lVar23 = *(long *)(lVar14 + -8);
    puVar15 = puVar2;
    (**(code **)(lVar23 + 0x30))(puVar2,1,lVar14);
    if ((int)puVar15 == 0) {
      uVar26 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar26;
      uVar26 = puVar2[2];
      uVar30 = puVar2[5];
      uVar18 = puVar2[4];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar26;
      puVar1[5] = uVar30;
      puVar1[4] = uVar18;
      uVar26 = puVar2[6];
      uVar18 = puVar2[7];
      puVar1[6] = uVar26;
      puVar1[7] = uVar18;
      uVar18 = puVar2[8];
      puVar1[8] = uVar18;
      lVar29 = (long)*(int *)(lVar14 + 0x28);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar18);
      lVar16 = (long)puVar2 + lVar29;
      (*pcVar25)(lVar16,1,lVar13);
      if ((int)lVar16 == 0) {
        (**(code **)(lVar21 + 0x10))((long)puVar1 + lVar29,(long)puVar2 + lVar29,lVar13);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar29,0,1,lVar13);
      }
      else {
        lVar16 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar29,(long)puVar2 + lVar29,
                *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
      }
      puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x2c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x2c));
      uVar26 = puVar3[1];
      *puVar15 = *puVar3;
      puVar15[1] = uVar26;
      puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x30));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x30));
      uVar26 = puVar3[1];
      *puVar15 = *puVar3;
      puVar15[1] = uVar26;
      lVar29 = (long)*(int *)(lVar14 + 0x34);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar26);
      lVar16 = (long)puVar2 + lVar29;
      (*pcVar25)(lVar16,1,lVar13);
      if ((int)lVar16 == 0) {
        (**(code **)(lVar21 + 0x10))((long)puVar1 + lVar29,(long)puVar2 + lVar29,lVar13);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar29,0,1,lVar13);
      }
      else {
        lVar16 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar29,(long)puVar2 + lVar29,
                *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
      }
      puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x38));
      uVar26 = puVar3[1];
      *puVar15 = *puVar3;
      puVar15[1] = uVar26;
      puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x3c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x3c));
      uVar26 = puVar2[1];
      *puVar15 = *puVar2;
      puVar15[1] = uVar26;
      pcVar25 = *(code **)(lVar23 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar26);
      (*pcVar25)(puVar1,0,1,lVar14);
    }
    else {
      lVar14 = 0x112db39a8;
      func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    iVar11 = *(int *)(param_3 + 0x6c);
    *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x68)) =
         *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
    uVar26 = *puVar2;
    uVar30 = puVar2[3];
    uVar18 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar26;
    puVar1[3] = uVar30;
    puVar1[2] = uVar18;
    uVar26 = puVar2[4];
    uVar30 = puVar2[7];
    uVar18 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar26;
    puVar1[7] = uVar30;
    puVar1[6] = uVar18;
    uVar30 = puVar2[0xc];
    uVar18 = puVar2[0xf];
    uVar26 = puVar2[0xe];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xc] = uVar30;
    puVar1[0xf] = uVar18;
    puVar1[0xe] = uVar26;
    uVar30 = puVar2[8];
    uVar18 = puVar2[0xb];
    uVar26 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar30;
    puVar1[0xb] = uVar18;
    puVar1[10] = uVar26;
    uVar26 = *(undefined8 *)((long)puVar2 + 0xa9);
    *(undefined8 *)((long)puVar1 + 0xb1) = *(undefined8 *)((long)puVar2 + 0xb1);
    *(undefined8 *)((long)puVar1 + 0xa9) = uVar26;
    uVar26 = puVar2[0x12];
    uVar30 = puVar2[0x15];
    uVar18 = puVar2[0x14];
    puVar1[0x13] = puVar2[0x13];
    puVar1[0x12] = uVar26;
    puVar1[0x15] = uVar30;
    puVar1[0x14] = uVar18;
    uVar26 = puVar2[0x10];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar26;
    iVar11 = *(int *)(param_3 + 0x74);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x70));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
    uVar26 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar26;
    *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
    iVar11 = *(int *)(param_3 + 0x7c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x78)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
    *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
    _swift_bridgeObjectRetain();
  }
  else {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar22 = (ulong)uVar12 & 0xff;
    param_1 = (long *)(lVar14 + (uVar22 + 0x10 & (uVar22 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103de1404; end: 103de16db;  */

void FUN_103de1404(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  if ((ulong)param_1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*param_1);
  }
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_bridgeObjectRelease(param_1[5]);
  _swift_bridgeObjectRelease(param_1[7]);
  _swift_bridgeObjectRelease(param_1[9]);
  iVar2 = *(int *)(param_2 + 0x24);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = (long)param_1 + (long)iVar2;
  (*pcVar8)(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 8))((long)param_1 + (long)iVar2,lVar3);
  }
  iVar2 = *(int *)(param_2 + 0x28);
  lVar4 = (long)param_1 + (long)iVar2;
  (*pcVar8)(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 8))((long)param_1 + (long)iVar2,lVar3);
  }
  iVar2 = *(int *)(param_2 + 0x2c);
  lVar4 = (long)param_1 + (long)iVar2;
  (*pcVar8)(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 8))((long)param_1 + (long)iVar2,lVar3);
  }
  if (*(long *)((long)param_1 + (long)*(int *)(param_2 + 0x34) + 8) != 1) {
    _swift_bridgeObjectRelease();
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (*(long *)((long)param_1 + (long)iVar2 + 0x138) != 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x10));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x20));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x58));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x90));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0xa0));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0xb0));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0xc0));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0xd0));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0xe8));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x100));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x110));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x120));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x130));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x138));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x40) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x44) + 8));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x48));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  lVar4 = (long)param_1 + (long)*(int *)(param_2 + 100);
  lVar5 = 0;
  func_0x000100b91fbc();
  lVar6 = lVar4;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x30));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x40));
    iVar2 = *(int *)(lVar5 + 0x28);
    lVar6 = lVar4 + iVar2;
    (*pcVar8)(lVar6,1,lVar3);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar7 + 8))(lVar4 + iVar2,lVar3);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar5 + 0x2c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar5 + 0x30) + 8));
    iVar2 = *(int *)(lVar5 + 0x34);
    lVar6 = lVar4 + iVar2;
    (*pcVar8)(lVar6,1,lVar3);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar7 + 8))(lVar4 + iVar2,lVar3);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar5 + 0x38) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar5 + 0x3c) + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x70) + 8));
  return;
}



/* Entry: 103de16dc; end: 103de2efb;  */

undefined8 * FUN_103de16dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  uVar21 = param_2[1];
  if (uVar21 >> 0x3c < 0xf) {
    uVar24 = *param_2;
    func_0x00010006c00c(uVar24,uVar21);
    *param_1 = uVar24;
    param_1[1] = uVar21;
  }
  else {
    uVar24 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar24;
  }
  uVar24 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar24;
  uVar17 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar17;
  uVar28 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar28;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  lVar26 = (long)*(int *)(param_3 + 0x24);
  lVar12 = 0;
  __s10Foundation4UUIDVMa();
  lVar20 = *(long *)(lVar12 + -8);
  pcVar23 = *(code **)(lVar20 + 0x30);
  _swift_bridgeObjectRetain(uVar24);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar28);
  _swift_bridgeObjectRetain(uVar4);
  lVar13 = (long)param_2 + lVar26;
  (*pcVar23)(lVar13,1,lVar12);
  if ((int)lVar13 == 0) {
    (**(code **)(lVar20 + 0x10))((long)param_1 + lVar26,(long)param_2 + lVar26,lVar12);
    (**(code **)(lVar20 + 0x38))((long)param_1 + lVar26,0,1,lVar12);
  }
  else {
    lVar13 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar26,(long)param_2 + lVar26,
            *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  }
  lVar26 = (long)*(int *)(param_3 + 0x28);
  lVar13 = (long)param_2 + lVar26;
  (*pcVar23)(lVar13,1,lVar12);
  if ((int)lVar13 == 0) {
    (**(code **)(lVar20 + 0x10))((long)param_1 + lVar26,(long)param_2 + lVar26,lVar12);
    (**(code **)(lVar20 + 0x38))((long)param_1 + lVar26,0,1,lVar12);
  }
  else {
    lVar13 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar26,(long)param_2 + lVar26,
            *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  }
  lVar26 = (long)*(int *)(param_3 + 0x2c);
  lVar13 = (long)param_2 + lVar26;
  (*pcVar23)(lVar13,1,lVar12);
  if ((int)lVar13 == 0) {
    (**(code **)(lVar20 + 0x10))((long)param_1 + lVar26,(long)param_2 + lVar26,lVar12);
    (**(code **)(lVar20 + 0x38))((long)param_1 + lVar26,0,1,lVar12);
  }
  else {
    lVar13 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar26,(long)param_2 + lVar26,
            *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  }
  iVar11 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
  lVar13 = puVar2[1];
  if (lVar13 == 1) {
    uVar24 = *puVar2;
    uVar28 = puVar2[3];
    uVar17 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar24;
    puVar1[3] = uVar28;
    puVar1[2] = uVar17;
    puVar1[4] = puVar2[4];
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar13;
    puVar1[2] = puVar2[2];
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(puVar2 + 3);
    *(undefined2 *)((long)puVar1 + 0x19) = *(undefined2 *)((long)puVar2 + 0x19);
    puVar1[4] = puVar2[4];
    _swift_bridgeObjectRetain();
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  if (puVar2[0x27] == 0) {
    _memcpy(puVar1,puVar2,0x160);
  }
  else {
    uVar24 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar24;
    uVar24 = puVar2[2];
    uVar17 = puVar2[3];
    puVar1[2] = uVar24;
    puVar1[3] = uVar17;
    uVar16 = puVar2[4];
    puVar1[4] = uVar16;
    uVar17 = puVar2[5];
    puVar1[6] = puVar2[6];
    puVar1[5] = uVar17;
    uVar19 = puVar2[7];
    uVar17 = puVar2[8];
    puVar1[7] = uVar19;
    puVar1[8] = uVar17;
    *(undefined2 *)(puVar1 + 9) = *(undefined2 *)(puVar2 + 9);
    *(undefined1 *)((long)puVar1 + 0x4a) = *(undefined1 *)((long)puVar2 + 0x4a);
    uVar17 = puVar2[0xb];
    puVar1[10] = puVar2[10];
    puVar1[0xb] = uVar17;
    uVar18 = puVar2[0xc];
    puVar1[0xc] = uVar18;
    *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)(puVar2 + 0xd);
    uVar28 = puVar2[0xe];
    puVar1[0xf] = puVar2[0xf];
    puVar1[0xe] = uVar28;
    *(undefined1 *)(puVar1 + 0x10) = *(undefined1 *)(puVar2 + 0x10);
    uVar28 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x12] = uVar28;
    uVar4 = puVar2[0x14];
    puVar1[0x13] = puVar2[0x13];
    puVar1[0x14] = uVar4;
    uVar5 = puVar2[0x16];
    puVar1[0x15] = puVar2[0x15];
    puVar1[0x16] = uVar5;
    uVar6 = puVar2[0x18];
    puVar1[0x17] = puVar2[0x17];
    puVar1[0x18] = uVar6;
    uVar7 = puVar2[0x1a];
    puVar1[0x19] = puVar2[0x19];
    puVar1[0x1a] = uVar7;
    uVar29 = puVar2[0x1b];
    puVar1[0x1c] = puVar2[0x1c];
    puVar1[0x1b] = uVar29;
    uVar25 = puVar2[0x1d];
    puVar1[0x1d] = uVar25;
    *(undefined1 *)(puVar1 + 0x1e) = *(undefined1 *)(puVar2 + 0x1e);
    *(undefined1 *)((long)puVar1 + 0xf1) = *(undefined1 *)((long)puVar2 + 0xf1);
    *(undefined1 *)((long)puVar1 + 0xf2) = *(undefined1 *)((long)puVar2 + 0xf2);
    uVar29 = puVar2[0x20];
    puVar1[0x1f] = puVar2[0x1f];
    puVar1[0x20] = uVar29;
    uVar8 = puVar2[0x22];
    puVar1[0x21] = puVar2[0x21];
    puVar1[0x22] = uVar8;
    uVar9 = puVar2[0x24];
    puVar1[0x23] = puVar2[0x23];
    puVar1[0x24] = uVar9;
    uVar10 = puVar2[0x26];
    puVar1[0x25] = puVar2[0x25];
    puVar1[0x26] = uVar10;
    uVar22 = puVar2[0x27];
    puVar1[0x27] = uVar22;
    uVar30 = puVar2[0x28];
    puVar1[0x29] = puVar2[0x29];
    puVar1[0x28] = uVar30;
    uVar30 = puVar2[0x2b];
    puVar1[0x2a] = puVar2[0x2a];
    puVar1[0x2b] = uVar30;
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar22);
  }
  iVar11 = *(int *)(param_3 + 0x40);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar24 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar24;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
  uVar24 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar24;
  iVar11 = *(int *)(param_3 + 0x48);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar17 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar17;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
  uVar21 = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar24);
  _swift_bridgeObjectRetain(uVar17);
  if (uVar21 >> 0x3c < 0xf) {
    uVar24 = *puVar2;
    func_0x00010006c00c(uVar24,uVar21);
    *puVar1 = uVar24;
    puVar1[1] = uVar21;
  }
  else {
    uVar24 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar24;
  }
  iVar11 = *(int *)(param_3 + 0x50);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
  iVar11 = *(int *)(param_3 + 0x58);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x54)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
  *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
  iVar11 = *(int *)(param_3 + 0x60);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
  *(undefined1 *)((long)param_1 + (long)iVar11) = *(undefined1 *)((long)param_2 + (long)iVar11);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 100));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 100));
  lVar13 = 0;
  func_0x000100b91fbc();
  lVar26 = *(long *)(lVar13 + -8);
  puVar14 = puVar2;
  (**(code **)(lVar26 + 0x30))(puVar2,1,lVar13);
  if ((int)puVar14 == 0) {
    uVar24 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar24;
    uVar24 = puVar2[2];
    uVar28 = puVar2[5];
    uVar17 = puVar2[4];
    puVar1[3] = puVar2[3];
    puVar1[2] = uVar24;
    puVar1[5] = uVar28;
    puVar1[4] = uVar17;
    uVar24 = puVar2[6];
    uVar17 = puVar2[7];
    puVar1[6] = uVar24;
    puVar1[7] = uVar17;
    uVar17 = puVar2[8];
    puVar1[8] = uVar17;
    lVar27 = (long)*(int *)(lVar13 + 0x28);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar17);
    lVar15 = (long)puVar2 + lVar27;
    (*pcVar23)(lVar15,1,lVar12);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar27,(long)puVar2 + lVar27,lVar12);
      (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar27,0,1,lVar12);
    }
    else {
      lVar15 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar27,(long)puVar2 + lVar27,
              *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x2c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x2c));
    uVar24 = puVar3[1];
    *puVar14 = *puVar3;
    puVar14[1] = uVar24;
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x30));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x30));
    uVar24 = puVar3[1];
    *puVar14 = *puVar3;
    puVar14[1] = uVar24;
    lVar27 = (long)*(int *)(lVar13 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar24);
    lVar15 = (long)puVar2 + lVar27;
    (*pcVar23)(lVar15,1,lVar12);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar27,(long)puVar2 + lVar27,lVar12);
      (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar27,0,1,lVar12);
    }
    else {
      lVar12 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar27,(long)puVar2 + lVar27,
              *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x38));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x38));
    uVar24 = puVar3[1];
    *puVar14 = *puVar3;
    puVar14[1] = uVar24;
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x3c));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x3c));
    uVar24 = puVar2[1];
    *puVar14 = *puVar2;
    puVar14[1] = uVar24;
    pcVar23 = *(code **)(lVar26 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar24);
    (*pcVar23)(puVar1,0,1,lVar13);
  }
  else {
    lVar13 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  }
  iVar11 = *(int *)(param_3 + 0x6c);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x68)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
  uVar24 = *puVar2;
  uVar28 = puVar2[3];
  uVar17 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar24;
  puVar1[3] = uVar28;
  puVar1[2] = uVar17;
  uVar24 = puVar2[4];
  uVar28 = puVar2[7];
  uVar17 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar24;
  puVar1[7] = uVar28;
  puVar1[6] = uVar17;
  uVar28 = puVar2[0xc];
  uVar17 = puVar2[0xf];
  uVar24 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar28;
  puVar1[0xf] = uVar17;
  puVar1[0xe] = uVar24;
  uVar28 = puVar2[8];
  uVar17 = puVar2[0xb];
  uVar24 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar28;
  puVar1[0xb] = uVar17;
  puVar1[10] = uVar24;
  uVar24 = *(undefined8 *)((long)puVar2 + 0xa9);
  *(undefined8 *)((long)puVar1 + 0xb1) = *(undefined8 *)((long)puVar2 + 0xb1);
  *(undefined8 *)((long)puVar1 + 0xa9) = uVar24;
  uVar24 = puVar2[0x12];
  uVar28 = puVar2[0x15];
  uVar17 = puVar2[0x14];
  puVar1[0x13] = puVar2[0x13];
  puVar1[0x12] = uVar24;
  puVar1[0x15] = uVar28;
  puVar1[0x14] = uVar17;
  uVar24 = puVar2[0x10];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar24;
  iVar11 = *(int *)(param_3 + 0x74);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x70));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
  uVar24 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar24;
  *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
  iVar11 = *(int *)(param_3 + 0x7c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x78)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
  *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 103de2efc; end: 103de2f2f;  */

undefined8 FUN_103de2efc(undefined8 param_1)

{
  (*(code *)&DAT_104759c2c)();
  return param_1;
}



/* Entry: 103de2f30; end: 103de3e67;  */

undefined8 * FUN_103de2f30(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  uVar13 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar13;
  lVar9 = (long)*(int *)(param_3 + 0x24);
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar5 + -8);
  pcVar12 = *(code **)(lVar10 + 0x30);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar12)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x28);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar12)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x2c);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar12)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar13 = *puVar2;
  uVar15 = puVar2[3];
  uVar14 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar13;
  puVar1[3] = uVar15;
  puVar1[2] = uVar14;
  puVar1[4] = puVar2[4];
  _memcpy((long)param_1 + (long)*(int *)(param_3 + 0x38),
          (long)param_2 + (long)*(int *)(param_3 + 0x38),0x160);
  iVar3 = *(int *)(param_3 + 0x40);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  iVar3 = *(int *)(param_3 + 0x48);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  iVar3 = *(int *)(param_3 + 0x50);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x58);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x54)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x60);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 100));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 100));
  lVar6 = 0;
  func_0x000100b91fbc();
  lVar9 = *(long *)(lVar6 + -8);
  puVar7 = puVar2;
  (**(code **)(lVar9 + 0x30))(puVar2,1,lVar6);
  if ((int)puVar7 == 0) {
    uVar13 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar13;
    puVar1[3] = uVar15;
    puVar1[2] = uVar14;
    puVar1[4] = puVar2[4];
    uVar13 = puVar2[5];
    puVar1[6] = puVar2[6];
    puVar1[5] = uVar13;
    uVar13 = puVar2[7];
    puVar1[8] = puVar2[8];
    puVar1[7] = uVar13;
    lVar11 = (long)*(int *)(lVar6 + 0x28);
    lVar8 = (long)puVar2 + lVar11;
    (*pcVar12)(lVar8,1,lVar5);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar10 + 0x20))((long)puVar1 + lVar11,(long)puVar2 + lVar11,lVar5);
      (**(code **)(lVar10 + 0x38))((long)puVar1 + lVar11,0,1,lVar5);
    }
    else {
      lVar8 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar11,(long)puVar2 + lVar11,
              *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x2c));
    uVar13 = *puVar7;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x2c));
    puVar4[1] = puVar7[1];
    *puVar4 = uVar13;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30));
    uVar13 = *puVar7;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30));
    puVar4[1] = puVar7[1];
    *puVar4 = uVar13;
    lVar11 = (long)*(int *)(lVar6 + 0x34);
    lVar8 = (long)puVar2 + lVar11;
    (*pcVar12)(lVar8,1,lVar5);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar10 + 0x20))((long)puVar1 + lVar11,(long)puVar2 + lVar11,lVar5);
      (**(code **)(lVar10 + 0x38))((long)puVar1 + lVar11,0,1,lVar5);
    }
    else {
      lVar5 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar11,(long)puVar2 + lVar11,
              *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
    uVar13 = *puVar7;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
    puVar4[1] = puVar7[1];
    *puVar4 = uVar13;
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x3c));
    uVar13 = *puVar2;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x3c));
    puVar7[1] = puVar2[1];
    *puVar7 = uVar13;
    (**(code **)(lVar9 + 0x38))(puVar1,0,1,lVar6);
  }
  else {
    lVar6 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x6c);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x68)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar13 = *puVar2;
  uVar15 = puVar2[3];
  uVar14 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar13;
  puVar1[3] = uVar15;
  puVar1[2] = uVar14;
  uVar13 = puVar2[4];
  uVar15 = puVar2[7];
  uVar14 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar13;
  puVar1[7] = uVar15;
  puVar1[6] = uVar14;
  uVar15 = puVar2[0xc];
  uVar14 = puVar2[0xf];
  uVar13 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar15;
  puVar1[0xf] = uVar14;
  puVar1[0xe] = uVar13;
  uVar15 = puVar2[8];
  uVar14 = puVar2[0xb];
  uVar13 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar15;
  puVar1[0xb] = uVar14;
  puVar1[10] = uVar13;
  uVar13 = *(undefined8 *)((long)puVar2 + 0xa9);
  *(undefined8 *)((long)puVar1 + 0xb1) = *(undefined8 *)((long)puVar2 + 0xb1);
  *(undefined8 *)((long)puVar1 + 0xa9) = uVar13;
  uVar13 = puVar2[0x12];
  uVar15 = puVar2[0x15];
  uVar14 = puVar2[0x14];
  puVar1[0x13] = puVar2[0x13];
  puVar1[0x12] = uVar13;
  puVar1[0x15] = uVar15;
  puVar1[0x14] = uVar14;
  uVar13 = puVar2[0x10];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar13;
  iVar3 = *(int *)(param_3 + 0x74);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x70));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x7c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x78)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  return param_1;
}



/* Entry: 103de3e68; end: 103de3e7f;  */

void FUN_103de3e68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103de3e80; end: 103de3fb7;  */

void FUN_103de3e80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puStack_120 = &UNK_10dc964d8;
  puStack_118 = &UNK_10dc964f0;
  puStack_110 = &UNK_10dc96508;
  puStack_108 = &UNK_10dc96508;
  puStack_100 = &UNK_10dc96508;
  uVar3 = 0x112e39c78;
  lVar2 = 0x13f;
  FUN_103de3fb8(0x13f,0x112e39c78,PTR___s10Foundation4UUIDVMa_110350c38);
  if (uVar3 < 0x40) {
    lStack_f8 = *(long *)(lVar2 + -8) + 0x40;
    puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_d8 = &UNK_10dc96520;
    puStack_d0 = &UNK_10dc96538;
    puStack_c8 = &UNK_10dc96508;
    puStack_c0 = &UNK_10dc96508;
    puStack_b8 = &UNK_10dc96508;
    puStack_b0 = &UNK_10dc964d8;
    puStack_80 = &UNK_10dc96550;
    uVar3 = 0x112db3d60;
    lVar2 = 0x13f;
    lStack_f0 = lStack_f8;
    lStack_e8 = lStack_f8;
    puStack_e0 = puVar1;
    puStack_a8 = puVar1;
    puStack_a0 = puVar1;
    puStack_98 = puVar1;
    puStack_90 = puVar1;
    puStack_88 = puVar1;
    FUN_103de3fb8(0x13f,0x112db3d60,&SUB_100b91fbc);
    if (uVar3 < 0x40) {
      lStack_78 = *(long *)(lVar2 + -8) + 0x40;
      puStack_70 = PTR___sBi32_WV_11034d668 + 0x40;
      puStack_68 = &UNK_10dc96568;
      puStack_60 = &UNK_10dc96508;
      puStack_58 = puVar1;
      puStack_50 = puVar1;
      puStack_48 = puVar1;
      _swift_initStructMetadata(param_1,0x100,0x1c,&puStack_120,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 103de3fb8; end: 103de4003;  */

void FUN_103de3fb8(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    (*param_3)();
    __sSqMa();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 103de4004; end: 103de402b;  */

void FUN_103de4004(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 103de402c; end: 103de40ab;  */

undefined8 FUN_103de402c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103de40ac; end: 103de41cb;  */

void FUN_103de40ac(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = 0;
  func_0x000100b91fbc();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar3 - extraout_x8_00;
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  func_0x00010153be40();
  lVar2 = lVar4;
  (**(code **)(lVar5 + 0x30))(lVar4,1,lVar1);
  if ((int)lVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001034c75b0(lVar4,puVar3);
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104841c54(auStack_88);
    FUN_103de0be8(puVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103de41cc; end: 103de41cf;  */

void FUN_103de41cc(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = 0;
  func_0x000100b91fbc();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar3 - extraout_x8_00;
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  func_0x00010153be40();
  lVar2 = lVar4;
  (**(code **)(lVar5 + 0x30))(lVar4,1,lVar1);
  if ((int)lVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001034c75b0(lVar4,puVar3);
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104841c54(auStack_88);
    FUN_103de0be8(puVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103de41d0; end: 103de43f7;  */

void FUN_103de41d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000100b91fbc();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar3 - extraout_x8_00;
  func_0x00010153be40();
  lVar2 = lVar4;
  (**(code **)(lVar5 + 0x30))(lVar4,1,lVar1);
  if ((int)lVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001034c75b0(lVar4,puVar3);
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104841c54(param_1);
    FUN_103de0be8(puVar3);
  }
  return;
}



/* Entry: 103de43f8; end: 103de43fb;  */

undefined8 FUN_103de43f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0;
  func_0x000100b91fbc();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = (long)puVar3 - extraout_x8_00;
  lVar8 = 0x112db3b70;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = uVar5 - extraout_x8_01;
  lVar8 = (long)*(int *)(lVar8 + 0x30);
  func_0x00010153be40(param_1,lVar4);
  func_0x00010153be40(param_2,lVar4 + lVar8);
  pcVar6 = *(code **)(lVar7 + 0x30);
  lVar7 = lVar4;
  (*pcVar6)(lVar4,1,lVar1);
  if ((int)lVar7 == 1) {
    lVar8 = lVar4 + lVar8;
    (*pcVar6)(lVar8,1,lVar1);
    if ((int)lVar8 == 1) {
      func_0x000103de58d0(lVar4,0x112db39a8,&UNK_10d95dd90);
      return 1;
    }
  }
  else {
    func_0x00010153be40(lVar4,uVar5);
    lVar7 = lVar4 + lVar8;
    (*pcVar6)(lVar7,1,lVar1);
    if ((int)lVar7 != 1) {
      func_0x0001034c75b0(lVar4 + lVar8,puVar3);
      uVar2 = uVar5;
      func_0x000104841c50(uVar5,puVar3);
      FUN_103de0be8(puVar3);
      FUN_103de0be8(uVar5);
      func_0x000103de58d0(lVar4,0x112db39a8,&UNK_10d95dd90);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    FUN_103de0be8(uVar5);
  }
  func_0x000103de58d0(lVar4,0x112db3b70,&UNK_10d95def0);
  return 0;
}



/* Entry: 103de43fc; end: 103de45eb;  */

undefined8 FUN_103de43fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0;
  func_0x000100b91fbc();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = (long)puVar3 - extraout_x8_00;
  lVar8 = 0x112db3b70;
  func_0x0001000285a8(0x112db3b70,&UNK_10d95def0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = uVar5 - extraout_x8_01;
  lVar8 = (long)*(int *)(lVar8 + 0x30);
  func_0x00010153be40(param_1,lVar4);
  func_0x00010153be40(param_2,lVar4 + lVar8);
  pcVar6 = *(code **)(lVar7 + 0x30);
  lVar7 = lVar4;
  (*pcVar6)(lVar4,1,lVar1);
  if ((int)lVar7 == 1) {
    lVar8 = lVar4 + lVar8;
    (*pcVar6)(lVar8,1,lVar1);
    if ((int)lVar8 == 1) {
      func_0x000103de58d0(lVar4,0x112db39a8,&UNK_10d95dd90);
      return 1;
    }
  }
  else {
    func_0x00010153be40(lVar4,uVar5);
    lVar7 = lVar4 + lVar8;
    (*pcVar6)(lVar7,1,lVar1);
    if ((int)lVar7 != 1) {
      func_0x0001034c75b0(lVar4 + lVar8,puVar3);
      uVar2 = uVar5;
      func_0x000104841c50(uVar5,puVar3);
      FUN_103de0be8(puVar3);
      FUN_103de0be8(uVar5);
      func_0x000103de58d0(lVar4,0x112db39a8,&UNK_10d95dd90);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    FUN_103de0be8(uVar5);
  }
  func_0x000103de58d0(lVar4,0x112db3b70,&UNK_10d95def0);
  return 0;
}



/* Entry: 103de45ec; end: 103de45ef;  */

void FUN_103de45ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113010760 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000103de4634(0xff);
  puVar2 = &UNK_10dc965c8;
  _swift_getWitnessTable(&UNK_10dc965c8,uVar1);
  puRam0000000113010760 = puVar2;
  return;
}



/* Entry: 103de45f0; end: 103de466b;  */

void FUN_103de45f0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113010760 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000103de4634(0xff);
  puVar2 = &UNK_10dc965c8;
  _swift_getWitnessTable(&UNK_10dc965c8,uVar1);
  puRam0000000113010760 = puVar2;
  return;
}



/* Entry: 103de466c; end: 103de48ff;  */

long * FUN_103de466c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  
  lVar9 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  lVar9 = *(long *)(lVar9 + -8);
  uVar4 = *(uint *)(lVar9 + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    func_0x000100b91fbc();
    lVar10 = *(long *)(lVar5 + -8);
    plVar6 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,1,lVar5);
    if ((int)plVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar9 + 0x40));
      return param_1;
    }
    lVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar11;
    lVar9 = param_2[2];
    lVar12 = param_2[5];
    lVar7 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = lVar9;
    param_1[5] = lVar12;
    param_1[4] = lVar7;
    lVar9 = param_2[6];
    lVar7 = param_2[7];
    param_1[6] = lVar9;
    param_1[7] = lVar7;
    lVar12 = param_2[8];
    param_1[8] = lVar12;
    lVar15 = (long)*(int *)(lVar5 + 0x28);
    lVar7 = 0;
    __s10Foundation4UUIDVMa();
    lVar13 = *(long *)(lVar7 + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(lVar12);
    lVar9 = (long)param_2 + lVar15;
    (*pcVar14)(lVar9,1,lVar7);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,lVar7);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar15,0,1,lVar7);
    }
    else {
      lVar9 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar15,(long)param_2 + lVar15,
              *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x2c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    lVar11 = (long)*(int *)(lVar5 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    lVar9 = (long)param_2 + lVar11;
    (*pcVar14)(lVar9,1,lVar7);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar7);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar11,0,1,lVar7);
    }
    else {
      lVar9 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar11,(long)param_2 + lVar11,
              *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x38));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x3c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    pcVar14 = *(code **)(lVar10 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    (*pcVar14)(param_1,0,1,lVar5);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar8 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar9 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103de4900; end: 103de4a1f;  */

void FUN_103de4900(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar2 = 0;
  func_0x000100b91fbc();
  lVar3 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  iVar1 = *(int *)(lVar2 + 0x28);
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar6)(lVar3,1,lVar4);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,lVar4);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x2c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x30) + 8));
  iVar1 = *(int *)(lVar2 + 0x34);
  lVar3 = param_1 + iVar1;
  (*pcVar6)(lVar3,1,lVar4);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,lVar4);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x38) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x3c) + 8));
  return;
}



/* Entry: 103de4a20; end: 103de520b;  */

undefined8 * FUN_103de4a20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = 0;
  func_0x000100b91fbc();
  lVar7 = *(long *)(lVar3 + -8);
  puVar4 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,1,lVar3);
  if ((int)puVar4 != 0) {
    lVar3 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    return param_1;
  }
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar12 = param_2[2];
  uVar13 = param_2[5];
  uVar8 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar12;
  param_1[5] = uVar13;
  param_1[4] = uVar8;
  uVar12 = param_2[6];
  uVar8 = param_2[7];
  param_1[6] = uVar12;
  param_1[7] = uVar8;
  uVar8 = param_2[8];
  param_1[8] = uVar8;
  lVar11 = (long)*(int *)(lVar3 + 0x28);
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar8);
  lVar6 = (long)param_2 + lVar11;
  (*pcVar10)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar11,(long)param_2 + lVar11,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x2c));
  uVar12 = puVar1[1];
  *puVar4 = *puVar1;
  puVar4[1] = uVar12;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x30));
  uVar12 = puVar1[1];
  *puVar4 = *puVar1;
  puVar4[1] = uVar12;
  lVar11 = (long)*(int *)(lVar3 + 0x34);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar12);
  lVar6 = (long)param_2 + lVar11;
  (*pcVar10)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar11,(long)param_2 + lVar11,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x38));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x38));
  uVar12 = puVar1[1];
  *puVar4 = *puVar1;
  puVar4[1] = uVar12;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x3c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x3c));
  uVar12 = param_2[1];
  *puVar4 = *param_2;
  puVar4[1] = uVar12;
  pcVar10 = *(code **)(lVar7 + 0x38);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar12);
  (*pcVar10)(param_1,0,1,lVar3);
  return param_1;
}



/* Entry: 103de520c; end: 103de584f;  */

undefined8 * FUN_103de520c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = 0;
  func_0x000100b91fbc();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar2);
  if ((int)puVar3 != 0) {
    lVar2 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    return param_1;
  }
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  param_1[4] = param_2[4];
  uVar10 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar10;
  uVar10 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar10;
  lVar9 = (long)*(int *)(lVar2 + 0x28);
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x2c));
  uVar10 = *puVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x2c));
  puVar1[1] = puVar3[1];
  *puVar1 = uVar10;
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x30));
  uVar10 = *puVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x30));
  puVar1[1] = puVar3[1];
  *puVar1 = uVar10;
  lVar9 = (long)*(int *)(lVar2 + 0x34);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x38));
  uVar10 = *puVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x38));
  puVar1[1] = puVar3[1];
  *puVar1 = uVar10;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x3c));
  uVar10 = *param_2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x3c));
  puVar3[1] = param_2[1];
  *puVar3 = uVar10;
  (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar2);
  return param_1;
}



/* Entry: 103de5850; end: 103de5867;  */

void FUN_103de5850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103de5868; end: 103de590f;  */

void FUN_103de5868(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000101553a7c();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&lStack_28,param_1 + 0x10);
  }
  return;
}



/* Entry: 103de5910; end: 103de591b; -[SCAdRenderDataParserScope adRenderData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5910(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130107f8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1130107f8);
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



/* Entry: 103de591c; end: 103de5967; -[SCAdRenderDataParserScope adIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de591c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113010800);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113010800))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103de5968; end: 103de5973; -[SCAdRenderDataParserScope serveItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5968(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113010808))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113010808);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103de5974; end: 103de597f; -[SCAdRenderDataParserScope adServeRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5974(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113010810))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113010810);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103de5980; end: 103de598b; -[SCAdRenderDataParserScope pixelId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5980(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113010818))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113010818);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103de598c; end: 103de5997; -[SCAdRenderDataParserScope adSquadId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de598c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_103de8a10(param_1 + _DAT_113812110,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103de5998; end: 103de59a3; -[SCAdRenderDataParserScope campaignId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5998(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_103de8a10(param_1 + _DAT_113812118,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103de59a4; end: 103de5a83;  */

void FUN_103de59a4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_103de8a10(param_1 + *param_3,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103de5a84; end: 103de5a8f; -[SCAdRenderDataParserScope adAccountId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5a84(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_103de8a10(param_1 + _DAT_113812120,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103de5a90; end: 103de5a9f; -[SCAdRenderDataParserScope adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103de5a90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113812128);
}



/* Entry: 103de5aa0; end: 103de5aaf; -[SCAdRenderDataParserScope serveLoggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113812130));
  return;
}



/* Entry: 103de5ab0; end: 103de5abf; -[SCAdRenderDataParserScope targetingParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113812138));
  return;
}



/* Entry: 103de5ac0; end: 103de5acb; -[SCAdRenderDataParserScope rawUserData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5ac0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113812140))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113812140);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103de5acc; end: 103de5ad7; -[SCAdRenderDataParserScope rawAdData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5acc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113812148))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113812148);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103de5ad8; end: 103de5ae3; -[SCAdRenderDataParserScope protoTrackURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5ad8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113812150))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113812150);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103de5ae4; end: 103de5aef; -[SCAdRenderDataParserScope viewReceipt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5ae4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113812158))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113812158);
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



/* Entry: 103de5af0; end: 103de5b5f;  */

void FUN_103de5af0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + *param_3);
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



/* Entry: 103de5b60; end: 103de5b6f; -[SCAdRenderDataParserScope storyDedupeFp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103de5b60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113812160);
}



/* Entry: 103de5b70; end: 103de5b7f; -[SCAdRenderDataParserScope filledAdTTLInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103de5b70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113812168);
}



/* Entry: 103de5b80; end: 103de5b8f; -[SCAdRenderDataParserScope noFillAdTTLInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103de5b80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113812170);
}



/* Entry: 103de5b90; end: 103de5b9f; -[SCAdRenderDataParserScope backupAdTTLInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103de5b90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113812178);
}



/* Entry: 103de5ba0; end: 103de5baf; -[SCAdRenderDataParserScope serveTimeStampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103de5ba0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113812180);
}



/* Entry: 103de5bb0; end: 103de5bbf; -[SCAdRenderDataParserScope adSwipeUpLikely] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103de5bb0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113812188);
}



/* Entry: 103de5bc0; end: 103de5bcf; -[SCAdRenderDataParserScope skAdNetworkAttribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113812190));
  return;
}



/* Entry: 103de5bd0; end: 103de5bdf; -[SCAdRenderDataParserScope organicValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103de5bd0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113812198);
}



/* Entry: 103de5be0; end: 103de5bef; -[SCAdRenderDataParserScope adInsertionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138121a0));
  return;
}



/* Entry: 103de5bf0; end: 103de5bfb; -[SCAdRenderDataParserScope adRequestDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de5bf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138121a8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138121a8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103de5bfc; end: 103de5c53;  */

void FUN_103de5bfc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103de5c54; end: 103de5c63; -[SCAdRenderDataParserScope optimizationGoal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103de5c54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138121b0);
}



/* Entry: 103de5c64; end: 103de5c73; -[SCAdRenderDataParserScope brandSafetyInventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103de5c64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138121b8);
}



/* Entry: 103de5c74; end: 103de5c83; -[SCAdRenderDataParserScope resolvedTimeStampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103de5c74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138121c0);
}



/* Entry: 103de5c84; end: 103de6387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103de5c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined1 param_32,
             undefined4 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130107f8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010800);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010808);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010810);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010818);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  FUN_103de8a10(param_17,unaff_x20 + _DAT_113812110,0x112d3bc20,&UNK_10d904ef0);
  FUN_103de8a10(param_18,unaff_x20 + _DAT_113812118,0x112d3bc20,&UNK_10d904ef0);
  FUN_103de8a10(param_19,unaff_x20 + _DAT_113812120,0x112d3bc20,&UNK_10d904ef0);
  *(undefined8 *)(unaff_x20 + _DAT_113812128) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_113812130) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_113812138) = param_22;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113812140);
  *puVar1 = param_23;
  puVar1[1] = param_24;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113812148);
  *puVar1 = param_25;
  puVar1[1] = param_26;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113812150);
  *puVar1 = param_27;
  puVar1[1] = param_28;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113812158);
  *puVar1 = param_29;
  puVar1[1] = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_113812160) = param_31;
  *(undefined8 *)(unaff_x20 + _DAT_113812168) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113812170) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113812178) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113812180) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113812188) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_113812190) = param_34;
  *(undefined4 *)(unaff_x20 + _DAT_113812198) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1138121a0) = param_35;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138121a8);
  *puVar1 = param_36;
  puVar1[1] = param_37;
  *(undefined8 *)(unaff_x20 + _DAT_1138121b0) = param_38;
  *(undefined8 *)(unaff_x20 + _DAT_1138121b8) = param_39;
  *(undefined8 *)(unaff_x20 + _DAT_1138121c0) = param_6;
  puVar2 = auStack_a8;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x000103de8a58(param_19,0x112d3bc20,&UNK_10d904ef0);
  func_0x000103de8a58(param_18,0x112d3bc20,&UNK_10d904ef0);
  func_0x000103de8a58(param_17,0x112d3bc20,&UNK_10d904ef0);
  return puVar2;
}


