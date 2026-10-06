/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039534f0; end: 103953523; -[SCSCDiscoverFeedDeepLinkProcessorServicesSaberServiceProvider __safeProvide] */

void FUN_1039534f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039533d4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103953524; end: 103953567; -[SCSCDiscoverFeedDeepLinkProcessorServicesSaberServiceProvider end] */

void FUN_103953524(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103953568; end: 1039536ff;  */

void FUN_103953568(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e83ec0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f17c140,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedDeepLinkProcessorServicesSaberServiceProvider.swift"
                            ,0x65,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103953700);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103953700; end: 1039537ab; -[SCSCDiscoverFeedDeepLinkProcessorServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103953700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103953568(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039537ac; end: 10395381f; -[SCSCDiscoverFeedDeepLinkProcessorServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039537ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb8938,0);
  func_0x000107c61614(param_1 + _DAT_112fb8940,0);
  *(undefined8 *)(param_1 + _DAT_112fb8948) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103953820; end: 103953853;  */

void FUN_103953820(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103953854; end: 10395389b; -[SCSCDiscoverFeedDeepLinkProcessorServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103953854(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb8938);
  func_0x000107c61610(param_1 + _DAT_112fb8940);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb8948));
  return;
}



/* Entry: 10395389c; end: 1039538bb;  */

void FUN_10395389c(void)

{
  func_0x000107c61168(&PTR_PTR_112fb8990);
  return;
}



/* Entry: 1039538bc; end: 1039538c7; -[SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039538bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb89f8;
  func_0x000107c61428(param_1 + _DAT_112fb89f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039538c8; end: 1039538d3; -[SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039538c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb89f8;
  func_0x000107c61428(param_1 + _DAT_112fb89f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039538d4; end: 1039538df; -[SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider strUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039538d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8a00;
  func_0x000107c61428(param_1 + _DAT_112fb8a00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039538e0; end: 103953923;  */

void FUN_1039538e0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103953924; end: 10395392f; -[SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider setStrUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103953924(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8a00;
  func_0x000107c61428(param_1 + _DAT_112fb8a00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103953930; end: 103953983;  */

void FUN_103953930(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103953984; end: 103953b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103953984(void)

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
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5c0a8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010394d96c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb8158);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb8a08);
      *(long *)(unaff_x20 + _DAT_112fb8a08) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider.swift"
                      ,100,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103953ab0);
  (*pcVar1)();
}



/* Entry: 103953b98; end: 103953bcb; -[SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider provide] */

void FUN_103953b98(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103953984();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103953bcc; end: 103953bff; -[SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider __safeProvide] */

void FUN_103953bcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103953ab0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103953c00; end: 103953c43; -[SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider end] */

void FUN_103953c00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103953c44; end: 103953ddb;  */

void FUN_103953c44(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e83ec0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f17c140,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider.swift"
                            ,100,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103953ddc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103953ddc; end: 103953e87; -[SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103953ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103953c44(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103953e88; end: 103953efb; -[SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103953e88(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb89f8,0);
  func_0x000107c61614(param_1 + _DAT_112fb8a00,0);
  *(undefined8 *)(param_1 + _DAT_112fb8a08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103953efc; end: 103953f2f;  */

void FUN_103953efc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103953f30; end: 103953f77; -[SCSCDiscoverFeedDeeplinkHandlingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103953f30(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb89f8);
  func_0x000107c61610(param_1 + _DAT_112fb8a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb8a08));
  return;
}



/* Entry: 103953f78; end: 103953f97;  */

void FUN_103953f78(void)

{
  func_0x000107c61168(&PTR_PTR_112fb8a50);
  return;
}



/* Entry: 103953f98; end: 103953fa3; -[SCSCDiscoverFeedExtensionServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103953f98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8ab8;
  func_0x000107c61428(param_1 + _DAT_112fb8ab8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103953fa4; end: 103953faf; -[SCSCDiscoverFeedExtensionServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103953fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8ab8;
  func_0x000107c61428(param_1 + _DAT_112fb8ab8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103953fb0; end: 103953fbb; -[SCSCDiscoverFeedExtensionServicesSaberServiceProvider strUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103953fb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8ac0;
  func_0x000107c61428(param_1 + _DAT_112fb8ac0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103953fbc; end: 103953fff;  */

void FUN_103953fbc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103954000; end: 10395400b; -[SCSCDiscoverFeedExtensionServicesSaberServiceProvider setStrUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103954000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8ac0;
  func_0x000107c61428(param_1 + _DAT_112fb8ac0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10395400c; end: 10395405f;  */

void FUN_10395400c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103954060; end: 103954273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103954060(void)

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
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5c0a8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010394da98();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb8160);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb8ac8);
      *(long *)(unaff_x20 + _DAT_112fb8ac8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedExtensionServicesSaberServiceProvider.swift"
                      ,0x5d,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10395418c);
  (*pcVar1)();
}



/* Entry: 103954274; end: 1039542a7; -[SCSCDiscoverFeedExtensionServicesSaberServiceProvider provide] */

void FUN_103954274(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103954060();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039542a8; end: 1039542db; -[SCSCDiscoverFeedExtensionServicesSaberServiceProvider __safeProvide] */

void FUN_1039542a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010395418c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039542dc; end: 10395431f; -[SCSCDiscoverFeedExtensionServicesSaberServiceProvider end] */

void FUN_1039542dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103954320; end: 1039544b7;  */

void FUN_103954320(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e83ec0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f17c140,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedExtensionServicesSaberServiceProvider.swift"
                            ,0x5d,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039544b8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039544b8; end: 103954563; -[SCSCDiscoverFeedExtensionServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039544b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103954320(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103954564; end: 1039545d7; -[SCSCDiscoverFeedExtensionServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103954564(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb8ab8,0);
  func_0x000107c61614(param_1 + _DAT_112fb8ac0,0);
  *(undefined8 *)(param_1 + _DAT_112fb8ac8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039545d8; end: 10395460b;  */

void FUN_1039545d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10395460c; end: 103954653; -[SCSCDiscoverFeedExtensionServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10395460c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb8ab8);
  func_0x000107c61610(param_1 + _DAT_112fb8ac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb8ac8));
  return;
}



/* Entry: 103954654; end: 103954673;  */

void FUN_103954654(void)

{
  func_0x000107c61168(&PTR_PTR_112fb8b10);
  return;
}



/* Entry: 103954674; end: 10395467f; -[SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103954674(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8b78;
  func_0x000107c61428(param_1 + _DAT_112fb8b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103954680; end: 10395468b; -[SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103954680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8b78;
  func_0x000107c61428(param_1 + _DAT_112fb8b78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10395468c; end: 103954697; -[SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider strUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10395468c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8b80;
  func_0x000107c61428(param_1 + _DAT_112fb8b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103954698; end: 1039546db;  */

void FUN_103954698(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039546dc; end: 1039546e7; -[SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider setStrUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039546dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8b80;
  func_0x000107c61428(param_1 + _DAT_112fb8b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039546e8; end: 10395473b;  */

void FUN_1039546e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10395473c; end: 10395494f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10395473c(void)

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
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5c0a8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010394dbc4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb8168);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb8b88);
      *(long *)(unaff_x20 + _DAT_112fb8b88) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider.swift"
                      ,0x68,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103954868);
  (*pcVar1)();
}



/* Entry: 103954950; end: 103954983; -[SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider provide] */

void FUN_103954950(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10395473c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103954984; end: 1039549b7; -[SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider __safeProvide] */

void FUN_103954984(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103954868();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039549b8; end: 1039549fb; -[SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider end] */

void FUN_1039549b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039549fc; end: 103954b93;  */

void FUN_1039549fc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e83ec0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f17c140,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider.swift"
                            ,0x68,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103954b94);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103954b94; end: 103954c3f; -[SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103954b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1039549fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103954c40; end: 103954cb3; -[SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103954c40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb8b78,0);
  func_0x000107c61614(param_1 + _DAT_112fb8b80,0);
  *(undefined8 *)(param_1 + _DAT_112fb8b88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103954cb4; end: 103954ce7;  */

void FUN_103954cb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103954ce8; end: 103954d2f; -[SCSCDiscoverFeedFriendsSectionLegacyServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103954ce8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb8b78);
  func_0x000107c61610(param_1 + _DAT_112fb8b80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb8b88));
  return;
}



/* Entry: 103954d30; end: 103954d4f;  */

void FUN_103954d30(void)

{
  func_0x000107c61168(&PTR_PTR_112fb8bd0);
  return;
}



/* Entry: 103954d50; end: 103954d5b; -[SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103954d50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8c38;
  func_0x000107c61428(param_1 + _DAT_112fb8c38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103954d5c; end: 103954d67; -[SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103954d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8c38;
  func_0x000107c61428(param_1 + _DAT_112fb8c38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103954d68; end: 103954d73; -[SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider strUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103954d68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8c40;
  func_0x000107c61428(param_1 + _DAT_112fb8c40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103954d74; end: 103954db7;  */

void FUN_103954d74(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103954db8; end: 103954dc3; -[SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider setStrUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103954db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8c40;
  func_0x000107c61428(param_1 + _DAT_112fb8c40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103954dc4; end: 103954e17;  */

void FUN_103954dc4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103954e18; end: 10395502b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103954e18(void)

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
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5c0a8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010394dcf0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb8170);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb8c48);
      *(long *)(unaff_x20 + _DAT_112fb8c48) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider.swift"
                      ,0x6f,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103954f44);
  (*pcVar1)();
}



/* Entry: 10395502c; end: 10395505f; -[SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider provide] */

void FUN_10395502c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103954e18();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103955060; end: 103955093; -[SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider __safeProvide] */

void FUN_103955060(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103954f44();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103955094; end: 1039550d7; -[SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider end] */

void FUN_103955094(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039550d8; end: 10395526f;  */

void FUN_1039550d8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e83ec0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f17c140,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider.swift"
                            ,0x6f,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103955270);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103955270; end: 10395531b; -[SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103955270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1039550d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10395531c; end: 10395538f; -[SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10395531c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb8c38,0);
  func_0x000107c61614(param_1 + _DAT_112fb8c40,0);
  *(undefined8 *)(param_1 + _DAT_112fb8c48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103955390; end: 1039553c3;  */

void FUN_103955390(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039553c4; end: 10395540b; -[SCSCDiscoverFeedImpalaProfilePresentHandlerServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039553c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb8c38);
  func_0x000107c61610(param_1 + _DAT_112fb8c40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb8c48));
  return;
}



/* Entry: 10395540c; end: 10395542b;  */

void FUN_10395540c(void)

{
  func_0x000107c61168(&PTR_PTR_112fb8c90);
  return;
}



/* Entry: 10395542c; end: 103955437; -[SCSCDiscoverFeedMessagingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10395542c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8cf8;
  func_0x000107c61428(param_1 + _DAT_112fb8cf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103955438; end: 103955443; -[SCSCDiscoverFeedMessagingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103955438(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8cf8;
  func_0x000107c61428(param_1 + _DAT_112fb8cf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103955444; end: 10395544f; -[SCSCDiscoverFeedMessagingServicesSaberServiceProvider strUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103955444(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8d00;
  func_0x000107c61428(param_1 + _DAT_112fb8d00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103955450; end: 103955493;  */

void FUN_103955450(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103955494; end: 10395549f; -[SCSCDiscoverFeedMessagingServicesSaberServiceProvider setStrUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103955494(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8d00;
  func_0x000107c61428(param_1 + _DAT_112fb8d00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039554a0; end: 1039554f3;  */

void FUN_1039554a0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039554f4; end: 103955707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039554f4(void)

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
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5c0a8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010394de1c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb8178);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb8d08);
      *(long *)(unaff_x20 + _DAT_112fb8d08) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedMessagingServicesSaberServiceProvider.swift"
                      ,0x5d,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103955620);
  (*pcVar1)();
}



/* Entry: 103955708; end: 10395573b; -[SCSCDiscoverFeedMessagingServicesSaberServiceProvider provide] */

void FUN_103955708(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039554f4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10395573c; end: 10395576f; -[SCSCDiscoverFeedMessagingServicesSaberServiceProvider __safeProvide] */

void FUN_10395573c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103955620();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103955770; end: 1039557b3; -[SCSCDiscoverFeedMessagingServicesSaberServiceProvider end] */

void FUN_103955770(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039557b4; end: 10395594b;  */

void FUN_1039557b4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e83ec0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f17c140,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedMessagingServicesSaberServiceProvider.swift"
                            ,0x5d,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10395594c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10395594c; end: 1039559f7; -[SCSCDiscoverFeedMessagingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10395594c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1039557b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039559f8; end: 103955a6b; -[SCSCDiscoverFeedMessagingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039559f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb8cf8,0);
  func_0x000107c61614(param_1 + _DAT_112fb8d00,0);
  *(undefined8 *)(param_1 + _DAT_112fb8d08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103955a6c; end: 103955a9f;  */

void FUN_103955a6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103955aa0; end: 103955ae7; -[SCSCDiscoverFeedMessagingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103955aa0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb8cf8);
  func_0x000107c61610(param_1 + _DAT_112fb8d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb8d08));
  return;
}



/* Entry: 103955ae8; end: 103955b07;  */

void FUN_103955ae8(void)

{
  func_0x000107c61168(&PTR_PTR_112fb8d50);
  return;
}



/* Entry: 103955b08; end: 103955b13; -[SCSCDiscoverFeedOperaServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103955b08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8db8;
  func_0x000107c61428(param_1 + _DAT_112fb8db8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103955b14; end: 103955b1f; -[SCSCDiscoverFeedOperaServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103955b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8db8;
  func_0x000107c61428(param_1 + _DAT_112fb8db8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103955b20; end: 103955b2b; -[SCSCDiscoverFeedOperaServicesSaberServiceProvider strUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103955b20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb8dc0;
  func_0x000107c61428(param_1 + _DAT_112fb8dc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103955b2c; end: 103955b6f;  */

void FUN_103955b2c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103955b70; end: 103955b7b; -[SCSCDiscoverFeedOperaServicesSaberServiceProvider setStrUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103955b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb8dc0;
  func_0x000107c61428(param_1 + _DAT_112fb8dc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103955b7c; end: 103955bcf;  */

void FUN_103955b7c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103955bd0; end: 103955de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103955bd0(void)

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
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5c0a8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010394df48();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb8180);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb8dc8);
      *(long *)(unaff_x20 + _DAT_112fb8dc8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedOperaServicesSaberServiceProvider.swift"
                      ,0x59,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103955cfc);
  (*pcVar1)();
}



/* Entry: 103955de4; end: 103955e17; -[SCSCDiscoverFeedOperaServicesSaberServiceProvider provide] */

void FUN_103955de4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103955bd0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103955e18; end: 103955e4b; -[SCSCDiscoverFeedOperaServicesSaberServiceProvider __safeProvide] */

void FUN_103955e18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103955cfc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103955e4c; end: 103955e8f; -[SCSCDiscoverFeedOperaServicesSaberServiceProvider end] */

void FUN_103955e4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103955e90; end: 103956027;  */

void FUN_103955e90(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e83ec0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f17c140,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrUserNavigationScopeGraphBridge/SCSCDiscoverFeedOperaServicesSaberServiceProvider.swift"
                            ,0x59,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103956028);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103956028; end: 1039560d3; -[SCSCDiscoverFeedOperaServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103956028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103955e90(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}


