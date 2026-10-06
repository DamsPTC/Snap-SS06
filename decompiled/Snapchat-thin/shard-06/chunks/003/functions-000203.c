/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046aa3fc; end: 1046aa40b; -[SCWebViewFirstGAInfo hasGAPageViewHitInLandingPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046aa3fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308cf80);
}



/* Entry: 1046aa40c; end: 1046aa41b; -[SCWebViewFirstGAInfo firstGAHitLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aa40c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cf88));
  return;
}



/* Entry: 1046aa41c; end: 1046aa42b; -[SCWebViewFirstGAInfo firstGATsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aa41c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cf90));
  return;
}



/* Entry: 1046aa42c; end: 1046aa4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aa42c(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cf70) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11308cf78) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11308cf80) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308cf88) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308cf90) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046aa4c8; end: 1046aa59f; -[SCWebViewFirstGAInfo initWithGaHitTypes:hasGAPageViewHit:hasGAPageViewHitInLandingPage:firstGAHitLatency:firstGATsMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aa4c8(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  *(long *)(param_1 + _DAT_11308cf70) = param_3;
  *(undefined1 *)(param_1 + _DAT_11308cf78) = param_4;
  *(undefined1 *)(param_1 + _DAT_11308cf80) = param_5;
  *(undefined8 *)(param_1 + _DAT_11308cf88) = param_6;
  *(undefined8 *)(param_1 + _DAT_11308cf90) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 1046aa5a0; end: 1046aa6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aa5a0(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _swift_getObjectType();
  uStack_48 = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cf70) = uStack_48;
  *(undefined1 *)(unaff_x20 + _DAT_11308cf78) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(unaff_x20 + _DAT_11308cf80) = *(undefined1 *)((long)param_1 + 9);
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_1046aa980(&uStack_48,auStack_50,0x112d445a8,&UNK_10d990150);
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1046aa980(&uStack_48,auStack_50,0x112d445a8,&UNK_10d990150);
    func_0x00010c027c20();
  }
  *(undefined **)(unaff_x20 + _DAT_11308cf88) = puVar1;
  if (*(char *)(param_1 + 5) == '\x01') {
    func_0x000104662e60(param_1);
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c027c20();
    func_0x000104662e60(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11308cf90) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046aa6e8; end: 1046aa71b; -[SCWebViewFirstGAInfo hash] */

undefined8 FUN_1046aa6e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046aa038();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046aa71c; end: 1046aa79b; -[SCWebViewFirstGAInfo isEqual:] */

uint FUN_1046aa71c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046aa170(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046aa79c; end: 1046aa79f; -[SCWebViewFirstGAInfo copyWithZone:] */

void FUN_1046aa79c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046aa7a0; end: 1046aa7eb; -[SCWebViewFirstGAInfo description] */

void FUN_1046aa7a0(undefined8 param_1)

{
  undefined1 auStack_50 [48];
  
  _objc_retain();
  FUN_1046aa8b0(auStack_50);
  _objc_release(param_1);
  func_0x000104662e60(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046aa7ec; end: 1046aa867; -[SCWebViewFirstGAInfo init] */

void FUN_1046aa7ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/WebViewFirstGAInfoWrapper.swift",0x38,2,0x48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046aa834);
  (*pcVar1)();
}



/* Entry: 1046aa868; end: 1046aa8af; -[SCWebViewFirstGAInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aa868(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308cf70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cf88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cf90));
  return;
}



/* Entry: 1046aa8b0; end: 1046aa97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aa8b0(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = *(undefined8 *)(param_2 + _DAT_11308cf70);
  uVar3 = *(undefined1 *)(param_2 + _DAT_11308cf78);
  uVar4 = *(undefined1 *)(param_2 + _DAT_11308cf80);
  lVar7 = *(long *)(param_2 + _DAT_11308cf88);
  bVar1 = lVar7 == 0;
  if (bVar1) {
    _swift_bridgeObjectRetain(uVar6);
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    func_0x00010c0b4ca0();
  }
  lVar5 = *(long *)(param_2 + _DAT_11308cf90);
  bVar2 = lVar5 == 0;
  if (!bVar2) {
    func_0x00010c0b4ca0();
  }
  *param_1 = uVar6;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((long)param_1 + 9) = uVar4;
  param_1[2] = lVar7;
  *(bool *)(param_1 + 3) = bVar1;
  param_1[4] = lVar5;
  *(bool *)(param_1 + 5) = bVar2;
  return;
}



/* Entry: 1046aa980; end: 1046aa9c7;  */

undefined8 FUN_1046aa980(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1046aa9c8; end: 1046aa9e7;  */

void FUN_1046aa9c8(void)

{
  _objc_opt_self(&PTR_PTR_1129d2988);
  return;
}



/* Entry: 1046aa9e8; end: 1046aa9eb;  */

void FUN_1046aa9e8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308cfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd269d8;
  _swift_getWitnessTable(&UNK_10dd269d8,&UNK_1107969f0);
  puRam000000011308cfc0 = puVar1;
  return;
}



/* Entry: 1046aa9ec; end: 1046aaa2b;  */

void FUN_1046aa9ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011308cfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd269d8;
  _swift_getWitnessTable(&UNK_10dd269d8,&UNK_1107969f0);
  puRam000000011308cfc0 = puVar1;
  return;
}



/* Entry: 1046aaa2c; end: 1046aaad7;  */

void FUN_1046aaa2c(void)

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



/* Entry: 1046aaad8; end: 1046aab23;  */

void FUN_1046aaad8(ulong *param_1,ulong *param_2)

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



/* Entry: 1046aab24; end: 1046aab33; -[AdCanOpenURLServices canOpenURLProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aab24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cfc8));
  return;
}



/* Entry: 1046aab34; end: 1046aab7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aab34(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cfc8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046aab80; end: 1046aabdf; -[AdCanOpenURLServices init] */

void FUN_1046aab80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdCanOpenURLServices.AdCanOpenURLServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046aabac);
  (*pcVar1)();
}



/* Entry: 1046aabe0; end: 1046aabef; -[AdCanOpenURLServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aabe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cfc8));
  return;
}



/* Entry: 1046aabf0; end: 1046aabff; -[SCWebBrowsingOperaDependencies webBrowsingConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aabf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cff8));
  return;
}



/* Entry: 1046aac00; end: 1046aac0f; -[SCWebBrowsingOperaDependencies webViewPool] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aac00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308d000));
  return;
}



/* Entry: 1046aac10; end: 1046aac1f; -[SCWebBrowsingOperaDependencies webViewScriptCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aac10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308d008));
  return;
}



/* Entry: 1046aac20; end: 1046aac2f; -[SCWebBrowsingOperaDependencies webBrowsingSecureGuard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aac20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308d010));
  return;
}



/* Entry: 1046aac30; end: 1046aac3f; -[SCWebBrowsingOperaDependencies webBrowserLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aac30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308d018));
  return;
}



/* Entry: 1046aac40; end: 1046aacdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aac40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cff8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308d000) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308d008) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308d010) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308d018) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046aacdc; end: 1046aada3; -[SCWebBrowsingOperaDependencies initWithWebBrowsingConfigProvider:webViewPool:webViewScriptCache:webBrowsingSecureGuard:webBrowserLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aacdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cff8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308d000) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308d008) = param_5;
  *(undefined8 *)(param_1 + _DAT_11308d010) = param_6;
  *(undefined8 *)(param_1 + _DAT_11308d018) = param_7;
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



/* Entry: 1046aada4; end: 1046aae03; -[SCWebBrowsingOperaDependencies init] */

void FUN_1046aada4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebBrowsingServicesCore.WebBrowsingOperaDependencies",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046aadd0);
  (*pcVar1)();
}



/* Entry: 1046aae04; end: 1046aae6b; -[SCWebBrowsingOperaDependencies .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aae04(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cff8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308d000));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308d008));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308d010));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308d018));
  return;
}



/* Entry: 1046aae6c; end: 1046aae8b;  */

void FUN_1046aae6c(void)

{
  _objc_opt_self(&PTR_PTR_1129d2b30);
  return;
}



/* Entry: 1046aae8c; end: 1046aaebf; -[SCWebBrowsingConfigService scWebBrowsingConfigProvider] */

void FUN_1046aae8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001003cc718();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046aaec0; end: 1046aaf4b; -[SCWebBrowsingConfigService setScWebBrowsingConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aaec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308d050);
  *(undefined8 *)(param_1 + _DAT_11308d050) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1046aaf4c; end: 1046aafab; -[SCWebBrowsingConfigService init] */

void FUN_1046aaf4c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebBrowsingConfigService.SCWebBrowsingConfigService",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046aaf78);
  (*pcVar1)();
}



/* Entry: 1046aafac; end: 1046aafe3; -[SCWebBrowsingConfigService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aafac(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11308d048));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308d050));
  return;
}



/* Entry: 1046aafe4; end: 1046ab123;  */

void FUN_1046aafe4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[4],unaff_x20[5]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[6],unaff_x20[7]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[8],unaff_x20[9]);
  lVar4 = unaff_x20[10];
  lVar3 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    do {
      __ss6HasherV8_combineyySuF(*puVar5);
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
  lVar4 = unaff_x20[0xb];
  lVar3 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar5 = puVar5 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0xc) & 1);
  lVar4 = unaff_x20[0xd];
  lVar3 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    do {
      __ss6HasherV8_combineyySuF(*puVar5);
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
  lVar4 = unaff_x20[0xe];
  lVar3 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    do {
      __ss6HasherV8_combineyySuF(*puVar5);
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0xf) & 1);
  return;
}



/* Entry: 1046ab124; end: 1046ab15f;  */

void FUN_1046ab124(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1046aafe4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046ab160; end: 1046ab163;  */

void FUN_1046ab160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[4],unaff_x20[5]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[6],unaff_x20[7]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[8],unaff_x20[9]);
  lVar4 = unaff_x20[10];
  lVar3 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    do {
      __ss6HasherV8_combineyySuF(*puVar5);
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
  lVar4 = unaff_x20[0xb];
  lVar3 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar5 = puVar5 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0xc) & 1);
  lVar4 = unaff_x20[0xd];
  lVar3 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    do {
      __ss6HasherV8_combineyySuF(*puVar5);
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
  lVar4 = unaff_x20[0xe];
  lVar3 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    do {
      __ss6HasherV8_combineyySuF(*puVar5);
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 0xf) & 1);
  return;
}



/* Entry: 1046ab164; end: 1046ab19b;  */

void FUN_1046ab164(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1046aafe4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046ab19c; end: 1046ab21b;  */

uint FUN_1046ab19c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_b8 = (undefined1)param_1[0xd];
  uStack_af = *(undefined8 *)((long)param_1 + 0x71);
  uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_40 = param_2[0xc];
  uStack_2f = *(undefined8 *)((long)param_2 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
  uStack_38 = (undefined1)param_2[0xd];
  uStack_37 = (undefined7)((ulong)param_2[0xd] >> 8);
  FUN_1046ab21c(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1046ab21c; end: 1046ab357;  */

byte FUN_1046ab21c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if (((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) {
      uVar1 = param_1[6];
      if (((uVar1 == param_2[6]) && (param_1[7] == param_2[7])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar1 & 1) != 0)) {
        uVar1 = param_1[8];
        if (((uVar1 == param_2[8]) && (param_1[9] == param_2[9])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) != 0)) {
          uVar1 = param_1[10];
          FUN_1046abe00(uVar1,param_2[10]);
          if ((uVar1 & 1) != 0) {
            uVar1 = param_1[0xb];
            func_0x00010142cfc4(uVar1,param_2[0xb]);
            if (((uVar1 & 1) != 0) && ((((byte)param_1[0xc] ^ (byte)param_2[0xc]) & 1) == 0)) {
              uVar1 = param_1[0xd];
              FUN_1046abe00(uVar1,param_2[0xd]);
              if ((uVar1 & 1) != 0) {
                uVar1 = param_1[0xe];
                FUN_1046abe00(uVar1,param_2[0xe]);
                if ((uVar1 & 1) != 0) {
                  bVar2 = (byte)param_1[0xf] ^ (byte)param_2[0xf] ^ 1;
                  goto LAB_1046ab348;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = 0;
LAB_1046ab348:
  return bVar2 & 1;
}



/* Entry: 1046ab358; end: 1046ab35b;  */

void FUN_1046ab358(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26b20;
  _swift_getWitnessTable(&UNK_10dd26b20,&UNK_110796c40);
  puRam000000011308d080 = puVar1;
  return;
}



/* Entry: 1046ab35c; end: 1046ab39b;  */

void FUN_1046ab35c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26b20;
  _swift_getWitnessTable(&UNK_10dd26b20,&UNK_110796c40);
  puRam000000011308d080 = puVar1;
  return;
}



/* Entry: 1046ab39c; end: 1046ab427;  */

long FUN_1046ab39c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046ab428; end: 1046ab4f3;  */

undefined8 * FUN_1046ab428(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  uVar2 = param_2[10];
  uVar7 = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xb] = uVar7;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar1 = param_2[0xd];
  uVar8 = param_2[0xe];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar8;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar8);
  return param_1;
}



/* Entry: 1046ab4f4; end: 1046ab62f;  */

undefined8 * FUN_1046ab4f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  return param_1;
}



/* Entry: 1046ab630; end: 1046ab6eb;  */

undefined8 * FUN_1046ab630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(param_1[9]);
  uVar2 = param_1[10];
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  _swift_bridgeObjectRelease(param_1[0xd]);
  uVar2 = param_1[0xe];
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  return param_1;
}



/* Entry: 1046ab6ec; end: 1046ab7b7;  */

int FUN_1046ab6ec(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x79) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046ab7b8; end: 1046ab7e3;  */

void FUN_1046ab7b8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046ab89c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046ab7e4; end: 1046ab7ef;  */

void FUN_1046ab7e4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046ab7f0; end: 1046ab89b;  */

void FUN_1046ab7f0(void)

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



/* Entry: 1046ab89c; end: 1046ab8af;  */

undefined1  [16] FUN_1046ab89c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x10) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xf < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046ab8b0; end: 1046ab8ef;  */

void FUN_1046ab8b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26ba0;
  _swift_getWitnessTable(&UNK_10dd26ba0,&UNK_110796cc8);
  puRam000000011308d088 = puVar1;
  return;
}



/* Entry: 1046ab8f0; end: 1046ab8ff;  */

undefined1  [16] FUN_1046ab8f0(void)

{
  return ZEXT816(0x110796cc8);
}



/* Entry: 1046ab900; end: 1046abbe3;  */

long FUN_1046ab900(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046abbe4; end: 1046abbf3; -[WebBrowsingLoggingServices webBrowserLoggerObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abbe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308d098));
  return;
}



/* Entry: 1046abbf4; end: 1046abc03; -[WebBrowsingLoggingServices instantPageLoggerObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abbf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308d0a8));
  return;
}



/* Entry: 1046abc04; end: 1046abc13; -[WebBrowsingLoggingServices urlParameterModificationLoggerObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abc04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308d0b8));
  return;
}



/* Entry: 1046abc14; end: 1046abd27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1046abc14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d090);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  uVar2 = param_1;
  _swift_unknownObjectRetain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11308d098) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11308d0a0) = param_4;
  uVar2 = param_4;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11308d0a8) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11308d0b0) = param_5;
  uVar2 = param_5;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11308d0b8) = uVar2;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_1);
  _swift_release(param_3);
  _swift_release(param_4);
  _swift_release(param_5);
  return puVar3;
}



/* Entry: 1046abd28; end: 1046abd87; -[WebBrowsingLoggingServices init] */

void FUN_1046abd28(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebBrowsingLoggingServices.WebBrowsingLoggingServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046abd54);
  (*pcVar1)();
}



/* Entry: 1046abd88; end: 1046abdff; -[WebBrowsingLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abd88(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11308d090));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308d098));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11308d0a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308d0a8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11308d0b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308d0b8));
  return;
}



/* Entry: 1046abe00; end: 1046abe5b;  */

bool FUN_1046abe00(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    plVar2 = (long *)(param_1 + 0x20);
    plVar3 = (long *)(param_2 + 0x20);
    do {
      lVar4 = lVar4 + -1;
      bVar1 = *plVar2 == *plVar3;
      if (*plVar2 != *plVar3) {
        return bVar1;
      }
      plVar2 = plVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
    return bVar1;
  }
  return true;
}



/* Entry: 1046abe5c; end: 1046abe67; -[SCWebBrowsingUrlParameterModificationEvent domain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abe5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308d0e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308d0e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046abe68; end: 1046abe73; -[SCWebBrowsingUrlParameterModificationEvent adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abe68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308d0f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308d0f0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046abe74; end: 1046abe7f; -[SCWebBrowsingUrlParameterModificationEvent serveItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abe74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308d0f8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308d0f8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046abe80; end: 1046abe8b; -[SCWebBrowsingUrlParameterModificationEvent preprocessedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abe80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308d100);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308d100))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046abe8c; end: 1046abe97; -[SCWebBrowsingUrlParameterModificationEvent postprocessedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abe8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308d108);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308d108))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046abe98; end: 1046abedf;  */

void FUN_1046abe98(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1046abee0; end: 1046abef3; -[SCWebBrowsingUrlParameterModificationEvent operationsRaw] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abee0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308d110);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046abef4; end: 1046abf07; -[SCWebBrowsingUrlParameterModificationEvent affectedFields] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abef4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308d118);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046abf08; end: 1046abf17; -[SCWebBrowsingUrlParameterModificationEvent isShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046abf08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308d120);
}



/* Entry: 1046abf18; end: 1046abf2b; -[SCWebBrowsingUrlParameterModificationEvent affectedScriptTypesRaw] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abf18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308d128);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046abf2c; end: 1046abf3f; -[SCWebBrowsingUrlParameterModificationEvent scriptTypesInShadowRaw] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abf2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308d130);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046abf40; end: 1046abf83;  */

void FUN_1046abf40(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046abf84; end: 1046abf93; -[SCWebBrowsingUrlParameterModificationEvent isCidRedirect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046abf84(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308d138);
}



/* Entry: 1046abf94; end: 1046ac243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046abf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d0e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d0f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d0f8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d100);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d108);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11308d110) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308d118) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11308d120) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11308d128) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11308d130) = param_16;
  *(undefined1 *)(unaff_x20 + _DAT_11308d138) = param_17;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046ac244; end: 1046ac37f; -[SCWebBrowsingUrlParameterModificationEvent initWithDomain:adId:serveItemId:preprocessedUrl:postprocessedUrl:operationsRaw:affectedFields:isShadow:affectedScriptTypesRaw:scriptTypesInShadowRaw:isCidRedirect:] */

void FUN_1046ac244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = uVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  uVar4 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  uVar5 = uVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = PTR___sSuN_11034e220;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_8,PTR___sSuN_11034e220);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_9,PTR___sSSN_11034da80);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_12,puVar1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_13,puVar1);
  func_0x0001046ac0ec(param_3,param_2,param_4,uVar2,param_5,uVar3,param_6,uVar4,param_7,uVar5,
                      param_8,param_9,param_10);
  return;
}



/* Entry: 1046ac380; end: 1046ac3af;  */

void FUN_1046ac380(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1046ac3b0(param_1);
  return;
}



/* Entry: 1046ac3b0; end: 1046ac567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046ac3b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d0e8);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d0f0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d0f8);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uVar2 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d100);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uVar2 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d108);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  uStack_98 = param_1[10];
  uStack_a0 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_11308d110) = uStack_98;
  *(undefined8 *)(unaff_x20 + _DAT_11308d118) = uStack_a0;
  *(undefined1 *)(unaff_x20 + _DAT_11308d120) = *(undefined1 *)(param_1 + 0xc);
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_11308d128) = uStack_a8;
  *(undefined8 *)(unaff_x20 + _DAT_11308d130) = uStack_b0;
  func_0x000100402194(&uStack_50,auStack_c0);
  func_0x000100402194(&uStack_60,auStack_c0);
  func_0x000100402194(&uStack_70,auStack_c0);
  func_0x000100402194(&uStack_80,auStack_c0);
  func_0x000100402194(&uStack_90,auStack_c0);
  FUN_1046acbac(&uStack_98,auStack_c0,0x112d5dfb8,&UNK_10dd26cd0);
  FUN_1046acbac(&uStack_a0,auStack_c0,0x112d38270,&UNK_10d905a20);
  FUN_1046acbac(&uStack_a8,auStack_c0,0x112d5dfb8,&UNK_10dd26cd0);
  FUN_1046acbac(&uStack_b0,auStack_c0,0x112d5dfb8,&UNK_10dd26cd0);
  FUN_1046ac568(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_11308d138) = *(undefined1 *)(param_1 + 0xf);
  _objc_msgSendSuper2(&stack0xffffffffffffff30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046ac568; end: 1046ac59b;  */

undefined8 FUN_1046ac568(undefined8 param_1)

{
  (*(code *)(undefined *)0x1046ab3c8)();
  return param_1;
}



/* Entry: 1046ac59c; end: 1046ac5cf; -[SCWebBrowsingUrlParameterModificationEvent hash] */

undefined8 FUN_1046ac59c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046ac5d0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046ac5d0; end: 1046ac813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046ac5d0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308d0e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308d0e8))[1]);
  uVar3 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308d0f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308d0f0))[1]);
  uVar3 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308d0f8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308d0f8))[1]);
  uVar3 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308d100);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308d100))[1]);
  uVar3 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308d108);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308d108))[1]);
  uVar3 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  puVar1 = PTR___sSuN_11034e220;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d110);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,PTR___sSuN_11034e220);
  uVar2 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d118);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,PTR___sSSN_11034da80);
  uVar2 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308d120));
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d128);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,puVar1);
  uVar2 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d130);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,puVar1);
  uVar2 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308d138));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046ac814; end: 1046acbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1046ac814(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long unaff_x20;
  uint uVar16;
  uint uStack_94;
  uint uStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar12 = unaff_x20;
  _swift_getObjectType();
  FUN_1046acbac(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar10 = &lStack_88;
    _swift_dynamicCast(plVar10,auStack_80,PTR___sypN_11034f1a8 + 8,lVar12,6);
    if (((ulong)plVar10 & 1) != 0) {
      lVar12 = *(long *)(unaff_x20 + _DAT_11308d0e8);
      if (lVar12 == *(long *)(lStack_88 + _DAT_11308d0e8) &&
          ((long *)(unaff_x20 + _DAT_11308d0e8))[1] == ((long *)(lStack_88 + _DAT_11308d0e8))[1]) {
        uVar7 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar7 = (uint)lVar12;
      }
      lVar12 = *(long *)(unaff_x20 + _DAT_11308d0f0);
      if (lVar12 == *(long *)(lStack_88 + _DAT_11308d0f0) &&
          ((long *)(unaff_x20 + _DAT_11308d0f0))[1] == ((long *)(lStack_88 + _DAT_11308d0f0))[1]) {
        uVar8 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar8 = (uint)lVar12;
      }
      lVar12 = *(long *)(unaff_x20 + _DAT_11308d0f8);
      if (lVar12 == *(long *)(lStack_88 + _DAT_11308d0f8) &&
          ((long *)(unaff_x20 + _DAT_11308d0f8))[1] == ((long *)(lStack_88 + _DAT_11308d0f8))[1]) {
        uVar9 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar9 = (uint)lVar12;
      }
      lVar12 = *(long *)(unaff_x20 + _DAT_11308d100);
      if ((lVar12 == *(long *)(lStack_88 + _DAT_11308d100)) &&
         (((long *)(unaff_x20 + _DAT_11308d100))[1] == ((long *)(lStack_88 + _DAT_11308d100))[1])) {
        uStack_90 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_90 = (uint)lVar12;
      }
      lVar12 = *(long *)(unaff_x20 + _DAT_11308d108);
      if ((lVar12 == *(long *)(lStack_88 + _DAT_11308d108)) &&
         (((long *)(unaff_x20 + _DAT_11308d108))[1] == ((long *)(lStack_88 + _DAT_11308d108))[1])) {
        uStack_94 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_94 = (uint)lVar12;
      }
      lVar12 = *(long *)(unaff_x20 + _DAT_11308d110);
      lVar13 = *(long *)(lStack_88 + _DAT_11308d110);
      lVar15 = *(long *)(lVar12 + 0x10);
      if (lVar15 == *(long *)(lVar13 + 0x10)) {
        if ((lVar15 == 0) || (lVar12 == lVar13)) {
          uVar16 = 1;
        }
        else {
          plVar10 = (long *)(lVar12 + 0x20);
          plVar14 = (long *)(lVar13 + 0x20);
          do {
            lVar15 = lVar15 + -1;
            uVar16 = (uint)(*plVar10 == *plVar14);
            if (*plVar10 != *plVar14) break;
            plVar10 = plVar10 + 1;
            plVar14 = plVar14 + 1;
          } while (lVar15 != 0);
        }
      }
      else {
        uVar16 = 0;
      }
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11308d118);
      func_0x00010142cfc4(uVar11,*(undefined8 *)(lStack_88 + _DAT_11308d118));
      lVar12 = *(long *)(unaff_x20 + _DAT_11308d128);
      lVar13 = *(long *)(lStack_88 + _DAT_11308d128);
      lVar15 = *(long *)(lVar12 + 0x10);
      if (lVar15 == *(long *)(lVar13 + 0x10)) {
        if ((lVar15 == 0) || (lVar12 == lVar13)) {
          bVar5 = false;
        }
        else {
          plVar10 = (long *)(lVar12 + 0x20);
          plVar14 = (long *)(lVar13 + 0x20);
          do {
            lVar15 = lVar15 + -1;
            bVar5 = *plVar10 != *plVar14;
            plVar10 = plVar10 + 1;
            plVar14 = plVar14 + 1;
          } while (!bVar5 && lVar15 != 0);
        }
      }
      else {
        bVar5 = true;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_11308d120);
      bVar2 = *(byte *)(lStack_88 + _DAT_11308d120);
      lVar12 = *(long *)(unaff_x20 + _DAT_11308d130);
      lVar13 = *(long *)(lStack_88 + _DAT_11308d130);
      lVar15 = *(long *)(lVar12 + 0x10);
      if (lVar15 == *(long *)(lVar13 + 0x10)) {
        if ((lVar15 == 0) || (lVar12 == lVar13)) {
          bVar6 = true;
        }
        else {
          plVar10 = (long *)(lVar12 + 0x20);
          plVar14 = (long *)(lVar13 + 0x20);
          do {
            lVar15 = lVar15 + -1;
            bVar6 = *plVar10 == *plVar14;
            if (!bVar6) break;
            plVar10 = plVar10 + 1;
            plVar14 = plVar14 + 1;
          } while (lVar15 != 0);
        }
      }
      else {
        bVar6 = false;
      }
      bVar3 = *(byte *)(unaff_x20 + _DAT_11308d138);
      bVar4 = *(byte *)(lStack_88 + _DAT_11308d138);
      _objc_release(lStack_88);
      if ((((uint)(bVar1 ^ bVar2) |
           uVar7 & uVar8 & uVar9 & uStack_90 & uStack_94 & uVar16 & (uint)uVar11 ^ 0xffffffff) & 1)
          == 0 && !bVar5) {
        return bVar6 & (bVar3 ^ bVar4 ^ 1);
      }
    }
  }
  return 0;
}



/* Entry: 1046acbac; end: 1046acbf3;  */

undefined8 FUN_1046acbac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1046acbf4; end: 1046acc73; -[SCWebBrowsingUrlParameterModificationEvent isEqual:] */

uint FUN_1046acbf4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046ac814(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046acc74; end: 1046acc77; -[SCWebBrowsingUrlParameterModificationEvent copyWithZone:] */

void FUN_1046acc74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046acc78; end: 1046ad05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046acc78(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d0e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_11308d0e8))[1]);
  uVar2 = 0x4e49414d4f44;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e49414d4f44,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d0f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_11308d0f0))[1]);
  uVar2 = 0x44495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d0f8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_11308d0f8))[1]);
  uVar2 = 0x54495f4556524553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54495f4556524553,0xed000044495f4d45);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d100);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_11308d100))[1]);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20b610);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d108);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_11308d108))[1]);
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20b630);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR___sSuN_11034e220;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d110);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,PTR___sSuN_11034e220);
  uVar2 = 0x4f4954415245504f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f4954415245504f,0xee005741525f534e);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d118);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,PTR___sSSN_11034da80);
  uVar2 = 0x4445544345464641;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4445544345464641,0xef53444c4549465f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = 0x4f444148535f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f444148535f5349,0xe900000000000057);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d128);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,puVar1);
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20b650);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308d130);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,puVar1);
  uVar2 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20b670);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = 0x525f4449435f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525f4449435f5349,0xef54434552494445);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1046ad060; end: 1046ad0af; -[SCWebBrowsingUrlParameterModificationEvent encodeWithCoder:] */

void FUN_1046ad060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1046acc78(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1046ad0b0; end: 1046ad0df;  */

void FUN_1046ad0b0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1046ad0e0(param_1);
  return;
}



/* Entry: 1046ad0e0; end: 1046ada5b;  */

undefined8 FUN_1046ad0e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
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
  undefined8 unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar3 = 0x4e49414d4f44;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e49414d4f44,0xe600000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    _objc_release(param_1);
  }
  else {
    puVar5 = &uStack_c0;
    _swift_dynamicCast(puVar5,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar14 = uStack_b8;
    uVar3 = uStack_c0;
    if (((ulong)puVar5 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1046ada1c;
    }
    uVar6 = 0x44495f4441;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
    lVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar4 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
      _swift_unknownObjectRelease(lVar4);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 != 0) {
      puVar5 = &uStack_c0;
      _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar15 = uStack_b8;
      uVar6 = uStack_c0;
      if (((ulong)puVar5 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar7 = 0x54495f4556524553;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54495f4556524553,0xed000044495f4d45)
        ;
        lVar4 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (lVar4 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
          _swift_unknownObjectRelease(lVar4);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          _objc_release(param_1);
LAB_1046ad9b8:
          _swift_bridgeObjectRelease(uVar15);
          goto LAB_1046ad9c0;
        }
        puVar5 = &uStack_c0;
        _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        uVar16 = uStack_b8;
        uVar7 = uStack_c0;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_release(param_1);
        }
        else {
          uVar8 = 0xd000000000000010;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000010,0x800000010f20b610);
          lVar4 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          if (lVar4 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
            _swift_unknownObjectRelease(lVar4);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            _objc_release(param_1);
LAB_1046ad9b0:
            _swift_bridgeObjectRelease(uVar16);
            goto LAB_1046ad9b8;
          }
          puVar5 = &uStack_c0;
          _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
          uVar17 = uStack_b8;
          uVar8 = uStack_c0;
          if (((ulong)puVar5 & 1) == 0) {
            _objc_release(param_1);
          }
          else {
            uVar9 = 0xd000000000000011;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000011,0x800000010f20b630);
            lVar4 = param_1;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            if (lVar4 == 0) {
              uStack_a8 = 0;
              uStack_b0 = 0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
              _swift_unknownObjectRelease(lVar4);
            }
            uStack_88 = uStack_a8;
            uStack_90 = uStack_b0;
            lStack_78 = lStack_98;
            uStack_80 = uStack_a0;
            if (lStack_98 == 0) {
              _objc_release(param_1);
LAB_1046ad9a8:
              _swift_bridgeObjectRelease(uVar17);
              goto LAB_1046ad9b0;
            }
            puVar5 = &uStack_c0;
            _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
            uVar9 = uStack_c0;
            if (((ulong)puVar5 & 1) == 0) {
              _objc_release(param_1);
            }
            else {
              uVar10 = 0x4f4954415245504f;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x4f4954415245504f,0xee005741525f534e);
              lVar4 = param_1;
              func_0x00010bf67000();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar10);
              if (lVar4 == 0) {
                uStack_a8 = 0;
                uStack_b0 = 0;
                lStack_98 = 0;
                uStack_a0 = 0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
                _swift_unknownObjectRelease(lVar4);
              }
              uStack_88 = uStack_a8;
              uStack_90 = uStack_b0;
              lStack_78 = lStack_98;
              uStack_80 = uStack_a0;
              if (lStack_98 == 0) {
                _objc_release(param_1);
LAB_1046ad9a0:
                _swift_bridgeObjectRelease(uStack_b8);
                goto LAB_1046ad9a8;
              }
              uVar10 = 0x112d5dfb8;
              func_0x0001000285a8(0x112d5dfb8,&UNK_10dd26cd0);
              puVar5 = &uStack_c0;
              _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,uVar10,6);
              uVar2 = uStack_c0;
              if (((ulong)puVar5 & 1) == 0) {
                _objc_release(param_1);
              }
              else {
                uVar11 = 0x4445544345464641;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0x4445544345464641,0xef53444c4549465f);
                lVar4 = param_1;
                func_0x00010bf67000();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar11);
                if (lVar4 == 0) {
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  lStack_98 = 0;
                  uStack_a0 = 0;
                }
                else {
                  __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
                  _swift_unknownObjectRelease(lVar4);
                }
                uStack_88 = uStack_a8;
                uStack_90 = uStack_b0;
                lStack_78 = lStack_98;
                uStack_80 = uStack_a0;
                if (lStack_98 == 0) {
                  _objc_release(param_1);
LAB_1046ad998:
                  _swift_bridgeObjectRelease(uVar2);
                  goto LAB_1046ad9a0;
                }
                uVar11 = 0x112d38270;
                func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
                puVar5 = &uStack_c0;
                _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,uVar11,6);
                uVar11 = uStack_c0;
                if (((ulong)puVar5 & 1) == 0) {
                  _objc_release(param_1);
                }
                else {
                  uVar12 = 0x4f444148535f5349;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0x4f444148535f5349,0xe900000000000057);
                  func_0x00010bf66ce0();
                  _objc_release(uVar12);
                  uVar12 = 0xd000000000000019;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0xd000000000000019,0x800000010f20b650);
                  lVar4 = param_1;
                  func_0x00010bf67000();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar12);
                  if (lVar4 == 0) {
                    uStack_a8 = 0;
                    uStack_b0 = 0;
                    lStack_98 = 0;
                    uStack_a0 = 0;
                  }
                  else {
                    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
                    _swift_unknownObjectRelease(lVar4);
                  }
                  uStack_88 = uStack_a8;
                  uStack_90 = uStack_b0;
                  lStack_78 = lStack_98;
                  uStack_80 = uStack_a0;
                  if (lStack_98 == 0) {
                    _objc_release(param_1);
LAB_1046ad990:
                    _swift_bridgeObjectRelease(uVar11);
                    goto LAB_1046ad998;
                  }
                  puVar5 = &uStack_c0;
                  _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,uVar10,6);
                  uVar12 = uStack_c0;
                  if (((ulong)puVar5 & 1) == 0) {
                    _objc_release(param_1);
                  }
                  else {
                    uVar13 = 0xd00000000000001a;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                              (0xd00000000000001a,0x800000010f20b670);
                    lVar4 = param_1;
                    func_0x00010bf67000();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar13);
                    if (lVar4 == 0) {
                      uStack_a8 = 0;
                      uStack_b0 = 0;
                      lStack_98 = 0;
                      uStack_a0 = 0;
                    }
                    else {
                      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
                      _swift_unknownObjectRelease(lVar4);
                    }
                    uStack_88 = uStack_a8;
                    uStack_90 = uStack_b0;
                    lStack_78 = lStack_98;
                    uStack_80 = uStack_a0;
                    if (lStack_98 == 0) {
                      _objc_release(param_1);
                      _swift_bridgeObjectRelease(uVar12);
                      goto LAB_1046ad990;
                    }
                    puVar5 = &uStack_c0;
                    _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,uVar10,6);
                    if (((ulong)puVar5 & 1) != 0) {
                      uVar10 = 0x525f4449435f5349;
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                (0x525f4449435f5349,0xef54434552494445);
                      func_0x00010bf66ce0();
                      _objc_release(uVar10);
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar14);
                      _swift_bridgeObjectRelease(uVar14);
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar15);
                      _swift_bridgeObjectRelease(uVar15);
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar16);
                      _swift_bridgeObjectRelease(uVar16);
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar17);
                      _swift_bridgeObjectRelease(uVar17);
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,uStack_b8);
                      _swift_bridgeObjectRelease(uStack_b8);
                      puVar1 = PTR___sSuN_11034e220;
                      uVar14 = uVar2;
                      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
                                (uVar2,PTR___sSuN_11034e220);
                      _swift_bridgeObjectRelease(uVar2);
                      uVar15 = uVar11;
                      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
                                (uVar11,PTR___sSSN_11034da80);
                      _swift_bridgeObjectRelease(uVar11);
                      uVar16 = uVar12;
                      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar12,puVar1);
                      _swift_bridgeObjectRelease(uVar12);
                      uVar17 = uStack_c0;
                      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_c0,puVar1);
                      _swift_bridgeObjectRelease(uStack_c0);
                      func_0x00010c00e2c0();
                      _objc_release(uVar3);
                      _objc_release(uVar6);
                      _objc_release(uVar7);
                      _objc_release(uVar8);
                      _objc_release(uVar9);
                      _objc_release(uVar14);
                      _objc_release(uVar15);
                      _objc_release(uVar16);
                      _objc_release(uVar17);
                      _objc_release(param_1);
                      return unaff_x20;
                    }
                    _objc_release(param_1);
                    _swift_bridgeObjectRelease(uVar12);
                  }
                  _swift_bridgeObjectRelease(uVar11);
                }
                _swift_bridgeObjectRelease(uVar2);
              }
              _swift_bridgeObjectRelease(uStack_b8);
            }
            _swift_bridgeObjectRelease(uVar17);
          }
          _swift_bridgeObjectRelease(uVar16);
        }
        _swift_bridgeObjectRelease(uVar15);
      }
      _swift_bridgeObjectRelease(uVar14);
      goto LAB_1046ada1c;
    }
    _objc_release(param_1);
LAB_1046ad9c0:
    _swift_bridgeObjectRelease(uVar14);
  }
  func_0x00010006e7f4(&uStack_90);
LAB_1046ada1c:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1046ada5c; end: 1046ada83; -[SCWebBrowsingUrlParameterModificationEvent initWithCoder:] */

void FUN_1046ada5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1046ad0e0();
  return;
}



/* Entry: 1046ada84; end: 1046adab7; -[SCWebBrowsingUrlParameterModificationEvent description] */

void FUN_1046ada84(void)

{
  undefined1 auStack_90 [128];
  
  FUN_1046adbf0(auStack_90);
  FUN_1046ac568(auStack_90);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046adab8; end: 1046adb33; -[SCWebBrowsingUrlParameterModificationEvent init] */

void FUN_1046adab8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "WebBrowsingLoggingServices/WebBrowsingUrlParameterModificationEventWrapper.swift",0x50
             ,2,0xb4,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046adb00);
  (*pcVar1)();
}



/* Entry: 1046adb34; end: 1046adbef; -[SCWebBrowsingUrlParameterModificationEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046adb34(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308d0e8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308d0f0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308d0f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308d100 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308d108 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308d110));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308d118));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308d128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308d130));
  return;
}



/* Entry: 1046adbf0; end: 1046add1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046adbf0(undefined8 *param_1,long param_2)

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
  undefined1 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar5 = ((undefined8 *)(param_2 + _DAT_11308d0e8))[1];
  uVar1 = *(undefined8 *)(param_2 + _DAT_11308d0f0);
  uVar6 = ((undefined8 *)(param_2 + _DAT_11308d0f0))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_11308d0f8);
  uVar7 = ((undefined8 *)(param_2 + _DAT_11308d0f8))[1];
  uVar3 = *(undefined8 *)(param_2 + _DAT_11308d100);
  uVar8 = ((undefined8 *)(param_2 + _DAT_11308d100))[1];
  uVar4 = *(undefined8 *)(param_2 + _DAT_11308d108);
  uVar9 = ((undefined8 *)(param_2 + _DAT_11308d108))[1];
  uVar12 = *(undefined8 *)(param_2 + _DAT_11308d110);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11308d118);
  uVar10 = *(undefined1 *)(param_2 + _DAT_11308d120);
  uVar14 = *(undefined8 *)(param_2 + _DAT_11308d128);
  uVar15 = *(undefined8 *)(param_2 + _DAT_11308d130);
  uVar11 = *(undefined1 *)(param_2 + _DAT_11308d138);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11308d0e8);
  param_1[1] = uVar5;
  param_1[2] = uVar1;
  param_1[3] = uVar6;
  param_1[4] = uVar2;
  param_1[5] = uVar7;
  param_1[6] = uVar3;
  param_1[7] = uVar8;
  param_1[8] = uVar4;
  param_1[9] = uVar9;
  param_1[10] = uVar12;
  param_1[0xb] = uVar13;
  *(undefined1 *)(param_1 + 0xc) = uVar10;
  param_1[0xd] = uVar14;
  param_1[0xe] = uVar15;
  *(undefined1 *)(param_1 + 0xf) = uVar11;
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar15);
  return;
}



/* Entry: 1046add20; end: 1046add3f;  */

void FUN_1046add20(void)

{
  _objc_opt_self(&PTR_PTR_1129d2dc0);
  return;
}



/* Entry: 1046add40; end: 1046add53;  */

bool FUN_1046add40(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046add54; end: 1046add7f;  */

void FUN_1046add54(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046adfac();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}


