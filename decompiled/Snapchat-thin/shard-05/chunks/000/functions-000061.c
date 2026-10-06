/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103aad3d4; end: 103aad3df; -[SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider setSpecengActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aad3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe32d0;
  func_0x000107c61428(param_1 + _DAT_112fe32d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aad3e0; end: 103aad433;  */

void FUN_103aad3e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aad434; end: 103aad647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103aad434(void)

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
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103aaaf30();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe2cd8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe32d8);
      *(long *)(unaff_x20 + _DAT_112fe32d8) = lVar4;
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
                      "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider.swift"
                      ,0x6a,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aad560);
  (*pcVar1)();
}



/* Entry: 103aad648; end: 103aad67b; -[SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider provide] */

void FUN_103aad648(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103aad434();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aad67c; end: 103aad6af; -[SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider __safeProvide] */

void FUN_103aad67c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103aad560();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aad6b0; end: 103aad6f3; -[SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider end] */

void FUN_103aad6b0(undefined8 param_1)

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



/* Entry: 103aad6f4; end: 103aad88b;  */

void FUN_103aad6f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e68410)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f197bf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider.swift"
                            ,0x6a,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103aad88c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103aad88c; end: 103aad937; -[SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103aad88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103aad6f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103aad938; end: 103aad9ab; -[SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aad938(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe32c8,0);
  func_0x000107c61614(param_1 + _DAT_112fe32d0,0);
  *(undefined8 *)(param_1 + _DAT_112fe32d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aad9ac; end: 103aad9df;  */

void FUN_103aad9ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aad9e0; end: 103aada27; -[SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aad9e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe32c8);
  func_0x000107c61610(param_1 + _DAT_112fe32d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe32d8));
  return;
}



/* Entry: 103aada28; end: 103aada47;  */

void FUN_103aada28(void)

{
  func_0x000107c61168(&PTR_PTR_112fe3320);
  return;
}



/* Entry: 103aada48; end: 103aada53; -[SCSCSpectaclesServerNetworkingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aada48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3388;
  func_0x000107c61428(param_1 + _DAT_112fe3388,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aada54; end: 103aada5f; -[SCSCSpectaclesServerNetworkingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aada54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3388;
  func_0x000107c61428(param_1 + _DAT_112fe3388,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aada60; end: 103aada6b; -[SCSCSpectaclesServerNetworkingServicesSaberServiceProvider specengActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aada60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3390;
  func_0x000107c61428(param_1 + _DAT_112fe3390,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aada6c; end: 103aadaaf;  */

void FUN_103aada6c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103aadab0; end: 103aadabb; -[SCSCSpectaclesServerNetworkingServicesSaberServiceProvider setSpecengActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aadab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3390;
  func_0x000107c61428(param_1 + _DAT_112fe3390,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aadabc; end: 103aadb0f;  */

void FUN_103aadabc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aadb10; end: 103aadd23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103aadb10(void)

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
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103aab05c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe2ce0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe3398);
      *(long *)(unaff_x20 + _DAT_112fe3398) = lVar4;
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
                      "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesServerNetworkingServicesSaberServiceProvider.swift"
                      ,0x69,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aadc3c);
  (*pcVar1)();
}



/* Entry: 103aadd24; end: 103aadd57; -[SCSCSpectaclesServerNetworkingServicesSaberServiceProvider provide] */

void FUN_103aadd24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103aadb10();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aadd58; end: 103aadd8b; -[SCSCSpectaclesServerNetworkingServicesSaberServiceProvider __safeProvide] */

void FUN_103aadd58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103aadc3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aadd8c; end: 103aaddcf; -[SCSCSpectaclesServerNetworkingServicesSaberServiceProvider end] */

void FUN_103aadd8c(undefined8 param_1)

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



/* Entry: 103aaddd0; end: 103aadf67;  */

void FUN_103aaddd0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e68410)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f197bf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesServerNetworkingServicesSaberServiceProvider.swift"
                            ,0x69,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103aadf68);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103aadf68; end: 103aae013; -[SCSCSpectaclesServerNetworkingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103aadf68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103aaddd0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103aae014; end: 103aae087; -[SCSCSpectaclesServerNetworkingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae014(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe3388,0);
  func_0x000107c61614(param_1 + _DAT_112fe3390,0);
  *(undefined8 *)(param_1 + _DAT_112fe3398) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aae088; end: 103aae0bb;  */

void FUN_103aae088(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aae0bc; end: 103aae103; -[SCSCSpectaclesServerNetworkingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae0bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe3388);
  func_0x000107c61610(param_1 + _DAT_112fe3390);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe3398));
  return;
}



/* Entry: 103aae104; end: 103aae123;  */

void FUN_103aae104(void)

{
  func_0x000107c61168(&PTR_PTR_112fe33e0);
  return;
}



/* Entry: 103aae124; end: 103aae12f; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope device] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3448;
  func_0x000107c61428(param_1 + _DAT_112fe3448,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae130; end: 103aae13b; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae130(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3448;
  func_0x000107c61428(param_1 + _DAT_112fe3448,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae13c; end: 103aae147; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope connectionHub] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae13c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3450;
  func_0x000107c61428(param_1 + _DAT_112fe3450,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae148; end: 103aae153; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setConnectionHub:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae148(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3450;
  func_0x000107c61428(param_1 + _DAT_112fe3450,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae154; end: 103aae15f; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope dataFlowsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae154(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3458;
  func_0x000107c61428(param_1 + _DAT_112fe3458,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae160; end: 103aae16b; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setDataFlowsManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae160(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3458;
  func_0x000107c61428(param_1 + _DAT_112fe3458,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae16c; end: 103aae177; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope preferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae16c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3460;
  func_0x000107c61428(param_1 + _DAT_112fe3460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae178; end: 103aae183; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3460;
  func_0x000107c61428(param_1 + _DAT_112fe3460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae184; end: 103aae18f; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope genericMessageSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae184(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3468;
  func_0x000107c61428(param_1 + _DAT_112fe3468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae190; end: 103aae19b; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setGenericMessageSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae190(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3468;
  func_0x000107c61428(param_1 + _DAT_112fe3468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae19c; end: 103aae1a7; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope analyticsLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae19c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3470;
  func_0x000107c61428(param_1 + _DAT_112fe3470,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae1a8; end: 103aae1b3; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setAnalyticsLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae1a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3470;
  func_0x000107c61428(param_1 + _DAT_112fe3470,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae1b4; end: 103aae1bf; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope contentStatusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae1b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3478;
  func_0x000107c61428(param_1 + _DAT_112fe3478,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae1c0; end: 103aae1cb; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setContentStatusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3478;
  func_0x000107c61428(param_1 + _DAT_112fe3478,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae1cc; end: 103aae1d7; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope firmwareUpdateService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae1cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3480;
  func_0x000107c61428(param_1 + _DAT_112fe3480,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae1d8; end: 103aae1e3; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setFirmwareUpdateService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3480;
  func_0x000107c61428(param_1 + _DAT_112fe3480,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae1e4; end: 103aae1ef; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope deviceActivationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae1e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3488;
  func_0x000107c61428(param_1 + _DAT_112fe3488,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae1f0; end: 103aae1fb; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setDeviceActivationService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3488;
  func_0x000107c61428(param_1 + _DAT_112fe3488,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae1fc; end: 103aae207; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope spectaclesManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae1fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3490;
  func_0x000107c61428(param_1 + _DAT_112fe3490,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae208; end: 103aae213; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setSpectaclesManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae208(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3490;
  func_0x000107c61428(param_1 + _DAT_112fe3490,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae214; end: 103aae21f; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope ssidScanner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae214(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3498;
  func_0x000107c61428(param_1 + _DAT_112fe3498,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae220; end: 103aae22b; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setSsidScanner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3498;
  func_0x000107c61428(param_1 + _DAT_112fe3498,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae22c; end: 103aae237; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope notificationPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae22c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe34a0;
  func_0x000107c61428(param_1 + _DAT_112fe34a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae238; end: 103aae243; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope setNotificationPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae238(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe34a0;
  func_0x000107c61428(param_1 + _DAT_112fe34a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aae244; end: 103aae31b; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope featureCatalogPlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae244(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fe34a8);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x103aae2d4;
  puStack_48 = &UNK_1106c9ef0;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103aae31c; end: 103aae437; -[_TtC30SCSpectaclesDeviceFeatureScope30SCSpectaclesDeviceFeatureScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae31c(long param_1)

{
  func_0x000100d657c4(param_1 + _DAT_112fe3448);
  func_0x000100d657c4(param_1 + _DAT_112fe3450);
  func_0x000100d657c4(param_1 + _DAT_112fe3458);
  func_0x000100d657c4(param_1 + _DAT_112fe3460);
  func_0x000100d657c4(param_1 + _DAT_112fe3468);
  func_0x000100d657c4(param_1 + _DAT_112fe3470);
  func_0x000107c61610(param_1 + _DAT_112fe3478);
  func_0x000107c61610(param_1 + _DAT_112fe3480);
  func_0x000107c61610(param_1 + _DAT_112fe3488);
  func_0x000107c61610(param_1 + _DAT_112fe3490);
  func_0x000107c61610(param_1 + _DAT_112fe3498);
  func_0x000107c61610(param_1 + _DAT_112fe34a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe34a8 + 8));
  return;
}



/* Entry: 103aae438; end: 103aae47f; -[_TtC30SCSpectaclesDeviceFeatureScope38SCSpectaclesDeviceFeatureScopeServices contentStatusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae438(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe34b8;
  func_0x000107c61428(param_1 + _DAT_112fe34b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103aae480; end: 103aae48b; -[_TtC30SCSpectaclesDeviceFeatureScope38SCSpectaclesDeviceFeatureScopeServices firmwareUpdateService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae480(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe34c0;
  func_0x000107c61428(param_1 + _DAT_112fe34c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae48c; end: 103aae497; -[_TtC30SCSpectaclesDeviceFeatureScope38SCSpectaclesDeviceFeatureScopeServices deviceActivationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae48c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe34c8;
  func_0x000107c61428(param_1 + _DAT_112fe34c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae498; end: 103aae4a3; -[_TtC30SCSpectaclesDeviceFeatureScope38SCSpectaclesDeviceFeatureScopeServices spectaclesManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae498(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe34d0;
  func_0x000107c61428(param_1 + _DAT_112fe34d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aae4a4; end: 103aae4e7;  */

void FUN_103aae4a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103aae4e8; end: 103aae52f; -[_TtC30SCSpectaclesDeviceFeatureScope38SCSpectaclesDeviceFeatureScopeServices ssidScanner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae4e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe34d8;
  func_0x000107c61428(param_1 + _DAT_112fe34d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103aae530; end: 103aae577; -[_TtC30SCSpectaclesDeviceFeatureScope38SCSpectaclesDeviceFeatureScopeServices notificationPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aae530(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe34e0;
  func_0x000107c61428(param_1 + _DAT_112fe34e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103aae578; end: 103aaea03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103aae578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x20;
  long *aplStack_240 [2];
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar16 = _DAT_112fe34b8;
  func_0x000107c61428(unaff_x20 + _DAT_112fe34b8,auStack_80,0,0);
  lVar15 = _DAT_112fe34c0;
  uVar21 = *(undefined8 *)(unaff_x20 + lVar16);
  func_0x000107c61428(unaff_x20 + _DAT_112fe34c0,auStack_98,0,0);
  lVar15 = unaff_x20 + lVar15;
  func_0x000107c61618();
  lVar16 = _DAT_112fe34c8;
  func_0x000107c61428(unaff_x20 + _DAT_112fe34c8,auStack_b0,0,0);
  lVar16 = unaff_x20 + lVar16;
  func_0x000107c61618();
  lVar17 = _DAT_112fe34d0;
  func_0x000107c61428(unaff_x20 + _DAT_112fe34d0,auStack_c8,0,0);
  lVar17 = unaff_x20 + lVar17;
  func_0x000107c61618();
  lVar18 = _DAT_112fe34d8;
  func_0x000107c61428(unaff_x20 + _DAT_112fe34d8,auStack_e0,0,0);
  lVar3 = _DAT_112fe34e0;
  uVar22 = *(undefined8 *)(unaff_x20 + lVar18);
  lVar18 = unaff_x20 + _DAT_112fe34e0;
  func_0x000107c61428(lVar18,auStack_f8,0,0);
  uVar23 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x0001002a7ca4();
  lVar19 = lVar18;
  func_0x000107c610f8();
  lVar3 = _DAT_112fe3448;
  func_0x000107c61614(lVar19 + _DAT_112fe3448,0);
  lVar4 = _DAT_112fe3450;
  func_0x000107c61614(lVar19 + _DAT_112fe3450,0);
  lVar5 = _DAT_112fe3458;
  func_0x000107c61614(lVar19 + _DAT_112fe3458,0);
  lVar6 = _DAT_112fe3460;
  func_0x000107c61614(lVar19 + _DAT_112fe3460,0);
  lVar7 = _DAT_112fe3468;
  func_0x000107c61614(lVar19 + _DAT_112fe3468,0);
  lVar8 = _DAT_112fe3470;
  func_0x000107c61614(lVar19 + _DAT_112fe3470,0);
  lVar9 = _DAT_112fe3478;
  func_0x000107c61614(lVar19 + _DAT_112fe3478,0);
  lVar10 = _DAT_112fe3480;
  func_0x000107c61614(lVar19 + _DAT_112fe3480,0);
  lVar11 = _DAT_112fe3488;
  func_0x000107c61614(lVar19 + _DAT_112fe3488,0);
  lVar12 = _DAT_112fe3490;
  func_0x000107c61614(lVar19 + _DAT_112fe3490,0);
  lVar13 = _DAT_112fe3498;
  func_0x000107c61614(lVar19 + _DAT_112fe3498,0);
  lVar14 = _DAT_112fe34a0;
  func_0x000107c61614(lVar19 + _DAT_112fe34a0,0);
  func_0x000107c61428(lVar19 + lVar3,auStack_110,1,0);
  func_0x000107c61604(lVar19 + lVar3,param_1);
  func_0x000107c61428(lVar19 + lVar4,auStack_128,1,0);
  func_0x000107c61604(lVar19 + lVar4,param_2);
  func_0x000107c61428(lVar19 + lVar5,auStack_140,1,0);
  func_0x000107c61604(lVar19 + lVar5,param_3);
  func_0x000107c61428(lVar19 + lVar6,auStack_158,1,0);
  func_0x000107c61604(lVar19 + lVar6,param_4);
  func_0x000107c61428(lVar19 + lVar7,auStack_170,1,0);
  func_0x000107c61604(lVar19 + lVar7,param_5);
  func_0x000107c61428(lVar19 + lVar8,auStack_188,1,0);
  func_0x000107c61604(lVar19 + lVar8,param_6);
  func_0x000107c61428(lVar19 + lVar9,auStack_1a0,1,0);
  func_0x000107c61604(lVar19 + lVar9,uVar21);
  func_0x000107c61428(lVar19 + lVar10,auStack_1b8,1,0);
  func_0x000107c61604(lVar19 + lVar10,lVar15);
  func_0x000107c61428(lVar19 + lVar11,auStack_1d0,1,0);
  func_0x000107c61604(lVar19 + lVar11,lVar16);
  func_0x000107c61428(lVar19 + lVar12,auStack_1e8,1,0);
  func_0x000107c61604(lVar19 + lVar12,lVar17);
  func_0x000107c61428(lVar19 + lVar13,auStack_200,1,0);
  func_0x000107c61604(lVar19 + lVar13,uVar22);
  func_0x000107c61428(lVar19 + lVar14,auStack_218,1,0);
  func_0x000107c61604(lVar19 + lVar14,uVar23);
  puVar1 = (undefined8 *)(lVar19 + _DAT_112fe34a8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_228 = lVar19;
  lStack_220 = lVar18;
  func_0x000107c61174();
  func_0x000107c6157c(param_8);
  plVar20 = &lStack_228;
  func_0x000107c61154(plVar20,puVar2);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar17);
  aplStack_240[0] = plVar20;
  func_0x00010008a7c8(&uStack_230,aplStack_240);
  func_0x000100083b20(aplStack_240);
  func_0x000107c61574(uStack_230);
  func_0x000107c615e8(aplStack_240[0]);
  return plVar20;
}



/* Entry: 103aaea04; end: 103aaeb2b; -[_TtC30SCSpectaclesDeviceFeatureScope38SCSpectaclesDeviceFeatureScopeServices buildWithDevice:connectionHub:dataFlowsManager:preferences:genericMessageSender:analyticsLogger:featureCatalogPlugin:] */

void FUN_103aaea04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1106c9ed8;
  func_0x000107c613fc(&UNK_1106c9ed8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_103aae578(param_3,param_4,param_5,param_6,param_7,param_8,0x103aaec0c,puVar1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103aaeb2c; end: 103aaeb2f;  */

void FUN_103aaeb2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aaeb30; end: 103aaeb63;  */

void FUN_103aaeb30(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aaeb64; end: 103aaebeb; -[_TtC30SCSpectaclesDeviceFeatureScope38SCSpectaclesDeviceFeatureScopeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aaeb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aaebd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aaeb94) */
/* WARNING: Removing unreachable block (ram,0x000103aaebd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaeb64(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe34e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe34b8));
  return;
}



/* Entry: 103aaebec; end: 103aaec3b;  */

undefined1  [16] FUN_103aaebec(void)

{
  return ZEXT816(0x1106c9e98);
}



/* Entry: 103aaec3c; end: 103aaecc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aaec3c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100ac350c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fe3558) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fe3560) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aaecc4);
  (*pcVar1)();
}



/* Entry: 103aaecc4; end: 103aaed23; -[_TtC37SpotActiveUserSessionScopeGraphBridge52SpotActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103aaecc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotActiveUserSessionScopeGraphBridge.SpotActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aaecf0);
  (*pcVar1)();
}



/* Entry: 103aaed24; end: 103aaed5b; -[_TtC37SpotActiveUserSessionScopeGraphBridge52SpotActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aaed40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aaed44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaed24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe3558));
  return;
}



/* Entry: 103aaed5c; end: 103aaed83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaed5c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fe3560),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fe3558));
  return;
}



/* Entry: 103aaed84; end: 103aaede7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaed84(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe3b50);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaede8; end: 103aaedef;  */

void FUN_103aaede8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaedf0; end: 103aaee8f;  */

void FUN_103aaedf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaee90; end: 103aaeeaf;  */

void FUN_103aaee90(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaeeb0; end: 103aaef13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaeeb0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe3b58);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaef14; end: 103aaef1b;  */

void FUN_103aaef14(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaef1c; end: 103aaefbb;  */

void FUN_103aaef1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaefbc; end: 103aaefdb;  */

void FUN_103aaefbc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaefdc; end: 103aaf03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaefdc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe3b60);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaf040; end: 103aaf047;  */

void FUN_103aaf040(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaf048; end: 103aaf0e7;  */

void FUN_103aaf048(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaf0e8; end: 103aaf107;  */

void FUN_103aaf0e8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaf108; end: 103aaf16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaf108(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe3b68);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaf16c; end: 103aaf173;  */

void FUN_103aaf16c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaf174; end: 103aaf213;  */

void FUN_103aaf174(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaf214; end: 103aaf233;  */

void FUN_103aaf214(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaf234; end: 103aaf297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaf234(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe3b70);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaf298; end: 103aaf29f;  */

void FUN_103aaf298(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaf2a0; end: 103aaf33f;  */

void FUN_103aaf2a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaf340; end: 103aaf35f;  */

void FUN_103aaf340(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaf360; end: 103aaf3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaf360(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe3b78);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaf3c4; end: 103aaf3cb;  */

void FUN_103aaf3c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaf3cc; end: 103aaf46b;  */

void FUN_103aaf3cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaf46c; end: 103aaf48b;  */

void FUN_103aaf46c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaf48c; end: 103aaf4ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaf48c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe3b80);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaf4f0; end: 103aaf4f7;  */

void FUN_103aaf4f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaf4f8; end: 103aaf597;  */

void FUN_103aaf4f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaf598; end: 103aaf5b7;  */

void FUN_103aaf598(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaf5b8; end: 103aaf67b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaf5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe3b50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe3b58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fe3b60) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe3b68) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fe3b70) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fe3b78) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fe3b80) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}


