/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e1b190; end: 103e1b1b3;  */

undefined1  [16] FUN_103e1b190(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103e1b1b4; end: 103e1b1f3;  */

void FUN_103e1b1b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113012ff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc9a0b0;
  _swift_getWitnessTable(&UNK_10dc9a0b0,&UNK_110715758);
  puRam0000000113012ff0 = puVar1;
  return;
}



/* Entry: 103e1b1f4; end: 103e1b1f7;  */

void FUN_103e1b1f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113012ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc9a150;
  _swift_getWitnessTable(&UNK_10dc9a150,&UNK_110715778);
  puRam0000000113012ff8 = puVar1;
  return;
}



/* Entry: 103e1b1f8; end: 103e1b237;  */

void FUN_103e1b1f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113012ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc9a150;
  _swift_getWitnessTable(&UNK_10dc9a150,&UNK_110715778);
  puRam0000000113012ff8 = puVar1;
  return;
}



/* Entry: 103e1b238; end: 103e1b27f;  */

undefined1  [16] FUN_103e1b238(void)

{
  return ZEXT816(0x110715758);
}



/* Entry: 103e1b280; end: 103e1b29f; -[DpaLensSnapAdConfigServices adConfigHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b280(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113013000));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e1b2a0; end: 103e1b303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b2a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113013000) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113013008) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e1b304; end: 103e1b363; -[DpaLensSnapAdConfigServices init] */

void FUN_103e1b304(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DpaLensSnapAdConfigServices.DpaLensSnapAdConfigServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1b330);
  (*pcVar1)();
}



/* Entry: 103e1b364; end: 103e1b39b; -[DpaLensSnapAdConfigServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b364(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113013000));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113013008));
  return;
}



/* Entry: 103e1b39c; end: 103e1b5f7;  */

long FUN_103e1b39c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103e1b5f8; end: 103e1b603; -[SCDpaLensSnapAdConfig sourceAdId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b5f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113013038))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113013038);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e1b604; end: 103e1b60f; -[SCDpaLensSnapAdConfig lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b604(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113013040))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113013040);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e1b610; end: 103e1b61b; -[SCDpaLensSnapAdConfig rawAdData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b610(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113013048))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113013048);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e1b61c; end: 103e1b673;  */

void FUN_103e1b61c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e1b674; end: 103e1b70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113013038);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113013040);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113013048);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e1b710; end: 103e1b7f3; -[SCDpaLensSnapAdConfig initWithSourceAdId:lensId:rawAdData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b710(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_2;
  }
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
  plVar1 = (long *)(param_1 + _DAT_113013038);
  *plVar1 = param_3;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_113013040);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113013048);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e1b7f4; end: 103e1b8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b7f4(undefined8 *param_1)

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
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113013038);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113013040);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113013048);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e1b8cc; end: 103e1b8cf; -[SCDpaLensSnapAdConfig copyWithZone:] */

void FUN_103e1b8cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e1b8d0; end: 103e1b8eb; -[SCDpaLensSnapAdConfig description] */

void FUN_103e1b8d0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e1b8ec; end: 103e1b967; -[SCDpaLensSnapAdConfig init] */

void FUN_103e1b8ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "DpaLensSnapAdConfigServices/DpaLensSnapAdConfigWrapper.swift",0x3c,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1b934);
  (*pcVar1)();
}



/* Entry: 103e1b968; end: 103e1b9bb; -[SCDpaLensSnapAdConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b968(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113013038 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113013040 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113013048 + 8))
  ;
  return;
}



/* Entry: 103e1b9bc; end: 103e1b9db;  */

void FUN_103e1b9bc(void)

{
  _objc_opt_self(&PTR_PTR_112950108);
  return;
}



/* Entry: 103e1b9dc; end: 103e1ba27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b9dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113013078) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e1ba28; end: 103e1ba87; -[_TtC36SCSponsoredLensStudyConfigurationAPI39SponsoredLensStudyConfigurationServices init] */

void FUN_103e1ba28(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSponsoredLensStudyConfigurationAPI.SponsoredLensStudyConfigurationServices",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1ba54);
  (*pcVar1)();
}



/* Entry: 103e1ba88; end: 103e1ba97; -[_TtC36SCSponsoredLensStudyConfigurationAPI39SponsoredLensStudyConfigurationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1ba88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113013078));
  return;
}



/* Entry: 103e1ba98; end: 103e1bb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e1ba98(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  lVar1 = unaff_x20;
  func_0x0001000bf56c();
  *(long *)(unaff_x20 + _DAT_1130130a8) = lVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 103e1bb08; end: 103e1bb67; -[SponsoredLensSpectrumLoggerServices init] */

void FUN_103e1bb08(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredLensSpectrumLoggerServices.SponsoredLensSpectrumLoggerServices",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1bb34);
  (*pcVar1)();
}



/* Entry: 103e1bb68; end: 103e1bb77; -[SponsoredLensSpectrumLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1bb68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130130a8));
  return;
}



/* Entry: 103e1bb78; end: 103e1bbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e1bb78(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a4c074();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_1130130d8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_1130130e0) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1bc00);
  (*pcVar1)();
}



/* Entry: 103e1bc00; end: 103e1bc5f; -[_TtC29BmUserSessionScopeGraphBridge44BmUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e1bc00(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BmUserSessionScopeGraphBridge.BmUserSessionScopeGraphBridgeSaberEntryPoint",0x4a,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1bc2c);
  (*pcVar1)();
}



/* Entry: 103e1bc60; end: 103e1bc97; -[_TtC29BmUserSessionScopeGraphBridge44BmUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1bc60(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130130d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130130e0));
  return;
}



/* Entry: 103e1bc98; end: 103e1bcbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1bc98(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_1130130e0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_1130130d8));
  return;
}



/* Entry: 103e1bcc0; end: 103e1bd5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e1bcc0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113013c30);
  *(undefined8 *)(unaff_x20 + _DAT_113013110) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113013118) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e1bd5c; end: 103e1bdbb; -[_TtC29BmUserSessionScopeGraphBridge37SCBitmojiFetchServicesSaberEntryPoint init] */

void FUN_103e1bd5c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BmUserSessionScopeGraphBridge.SCBitmojiFetchServicesSaberEntryPoint",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1bd88);
  (*pcVar1)();
}



/* Entry: 103e1bdbc; end: 103e1be4f; -[_TtC29BmUserSessionScopeGraphBridge37SCBitmojiFetchServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1bdbc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113013110));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113013118));
  return;
}



/* Entry: 103e1be50; end: 103e1be57;  */

undefined8 FUN_103e1be50(void)

{
  return 0;
}



/* Entry: 103e1be58; end: 103e1bef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e1be58(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113013c58);
  *(undefined8 *)(unaff_x20 + _DAT_113013148) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113013150) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e1bef4; end: 103e1bf53; -[_TtC29BmUserSessionScopeGraphBridge39SCBitmojiMetricsServicesSaberEntryPoint init] */

void FUN_103e1bef4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BmUserSessionScopeGraphBridge.SCBitmojiMetricsServicesSaberEntryPoint",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1bf20);
  (*pcVar1)();
}



/* Entry: 103e1bf54; end: 103e1bfe7; -[_TtC29BmUserSessionScopeGraphBridge39SCBitmojiMetricsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1bf54(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113013148));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113013150));
  return;
}



/* Entry: 103e1bfe8; end: 103e1bfef;  */

undefined8 FUN_103e1bfe8(void)

{
  return 0;
}



/* Entry: 103e1bff0; end: 103e1c08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e1bff0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113013c60);
  *(undefined8 *)(unaff_x20 + _DAT_113013180) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113013188) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e1c08c; end: 103e1c0eb; -[_TtC29BmUserSessionScopeGraphBridge43SCBitmojiProfileLensServicesSaberEntryPoint init] */

void FUN_103e1c08c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BmUserSessionScopeGraphBridge.SCBitmojiProfileLensServicesSaberEntryPoint",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1c0b8);
  (*pcVar1)();
}



/* Entry: 103e1c0ec; end: 103e1c17f; -[_TtC29BmUserSessionScopeGraphBridge43SCBitmojiProfileLensServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1c0ec(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113013180));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113013188));
  return;
}



/* Entry: 103e1c180; end: 103e1c187;  */

undefined8 FUN_103e1c180(void)

{
  return 0;
}



/* Entry: 103e1c188; end: 103e1c223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e1c188(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113013c68);
  *(undefined8 *)(unaff_x20 + _DAT_1130131b8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130131c0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e1c224; end: 103e1c283; -[_TtC29BmUserSessionScopeGraphBridge38SCBitmojiSelfieServicesSaberEntryPoint init] */

void FUN_103e1c224(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BmUserSessionScopeGraphBridge.SCBitmojiSelfieServicesSaberEntryPoint",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1c250);
  (*pcVar1)();
}



/* Entry: 103e1c284; end: 103e1c317; -[_TtC29BmUserSessionScopeGraphBridge38SCBitmojiSelfieServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1c284(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130131b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130131c0));
  return;
}



/* Entry: 103e1c318; end: 103e1c31f;  */

undefined8 FUN_103e1c318(void)

{
  return 0;
}



/* Entry: 103e1c320; end: 103e1c3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e1c320(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113013c70);
  *(undefined8 *)(unaff_x20 + _DAT_1130131f0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130131f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e1c3bc; end: 103e1c41b; -[_TtC29BmUserSessionScopeGraphBridge36SCBitmojiUserServicesSaberEntryPoint init] */

void FUN_103e1c3bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BmUserSessionScopeGraphBridge.SCBitmojiUserServicesSaberEntryPoint",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1c3e8);
  (*pcVar1)();
}



/* Entry: 103e1c41c; end: 103e1c4af; -[_TtC29BmUserSessionScopeGraphBridge36SCBitmojiUserServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1c41c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130131f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130131f8));
  return;
}



/* Entry: 103e1c4b0; end: 103e1c4b7;  */

undefined8 FUN_103e1c4b0(void)

{
  return 0;
}



/* Entry: 103e1c4b8; end: 103e1c51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1c4b8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013bf8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1c51c; end: 103e1c523;  */

void FUN_103e1c51c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1c524; end: 103e1c5c3;  */

void FUN_103e1c524(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1c5c4; end: 103e1c5e3;  */

void FUN_103e1c5c4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1c5e4; end: 103e1c647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1c5e4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c00);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1c648; end: 103e1c64f;  */

void FUN_103e1c648(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1c650; end: 103e1c673;  */

void FUN_103e1c650(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1c674; end: 103e1c693;  */

void FUN_103e1c674(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1c694; end: 103e1c6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1c694(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c08);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1c6f8; end: 103e1c6ff;  */

void FUN_103e1c6f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1c700; end: 103e1c79f;  */

void FUN_103e1c700(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1c7a0; end: 103e1c7bf;  */

void FUN_103e1c7a0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1c7c0; end: 103e1c823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1c7c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c10);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1c824; end: 103e1c82b;  */

void FUN_103e1c824(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1c82c; end: 103e1c8cb;  */

void FUN_103e1c82c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1c8cc; end: 103e1c8eb;  */

void FUN_103e1c8cc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1c8ec; end: 103e1c94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1c8ec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c18);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1c950; end: 103e1c957;  */

void FUN_103e1c950(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1c958; end: 103e1c9f7;  */

void FUN_103e1c958(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1c9f8; end: 103e1ca17;  */

void FUN_103e1c9f8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1ca18; end: 103e1ca7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1ca18(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c20);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1ca7c; end: 103e1ca83;  */

void FUN_103e1ca7c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1ca84; end: 103e1cb23;  */

void FUN_103e1ca84(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1cb24; end: 103e1cb43;  */

void FUN_103e1cb24(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1cb44; end: 103e1cba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1cb44(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c28);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1cba8; end: 103e1cbaf;  */

void FUN_103e1cba8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1cbb0; end: 103e1cc4f;  */

void FUN_103e1cbb0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1cc50; end: 103e1cc6f;  */

void FUN_103e1cc50(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1cc70; end: 103e1ccd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1cc70(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c38);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1ccd4; end: 103e1ccdb;  */

void FUN_103e1ccd4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1ccdc; end: 103e1ccff;  */

void FUN_103e1ccdc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1cd00; end: 103e1cd1f;  */

void FUN_103e1cd00(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1cd20; end: 103e1cd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1cd20(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c40);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1cd84; end: 103e1cd8b;  */

void FUN_103e1cd84(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1cd8c; end: 103e1cdaf;  */

void FUN_103e1cd8c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1cdb0; end: 103e1cdcf;  */

void FUN_103e1cdb0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1cdd0; end: 103e1ce33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1cdd0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c48);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1ce34; end: 103e1ce3b;  */

void FUN_103e1ce34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1ce3c; end: 103e1cedb;  */

void FUN_103e1ce3c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1cedc; end: 103e1cefb;  */

void FUN_103e1cedc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1cefc; end: 103e1cf5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1cefc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c50);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1cf60; end: 103e1cf67;  */

void FUN_103e1cf60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1cf68; end: 103e1d007;  */

void FUN_103e1cf68(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1d008; end: 103e1d027;  */

void FUN_103e1d008(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e1d028; end: 103e1d08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e1d028(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113013c78);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e1d08c; end: 103e1d093;  */

void FUN_103e1d08c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e1d094; end: 103e1d133;  */

void FUN_103e1d094(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1d134; end: 103e1d153;  */

void FUN_103e1d134(void)

{
  func_0x000100083b20();
  return;
}


