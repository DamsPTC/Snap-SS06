/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b26194; end: 102b261d7;  */

void FUN_102b26194(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102b261d8; end: 102b261e3; -[SCSCMainCameraScopedSponsoredLensCameraHeatMapServicesSaberServiceProvider setMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b261d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef3748;
  func_0x000107c61428(param_1 + _DAT_112ef3748,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b261e4; end: 102b26237;  */

void FUN_102b261e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b26238; end: 102b2644b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b26238(void)

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
    func_0x000107c4c148();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102b1abcc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef2250);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef3750);
      *(long *)(unaff_x20 + _DAT_112ef3750) = lVar4;
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
                      "MainCameraScopeGraphBridge/SCSCMainCameraScopedSponsoredLensCameraHeatMapServicesSaberServiceProvider.swift"
                      ,0x6b,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b26364);
  (*pcVar1)();
}



/* Entry: 102b2644c; end: 102b2647f; -[SCSCMainCameraScopedSponsoredLensCameraHeatMapServicesSaberServiceProvider provide] */

void FUN_102b2644c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b26238();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b26480; end: 102b264b3; -[SCSCMainCameraScopedSponsoredLensCameraHeatMapServicesSaberServiceProvider __safeProvide] */

void FUN_102b26480(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b26364();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b264b4; end: 102b264f7; -[SCSCMainCameraScopedSponsoredLensCameraHeatMapServicesSaberServiceProvider end] */

void FUN_102b264b4(undefined8 param_1)

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



/* Entry: 102b264f8; end: 102b2668f;  */

void FUN_102b264f8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0fb10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f04f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MainCameraScopeGraphBridge/SCSCMainCameraScopedSponsoredLensCameraHeatMapServicesSaberServiceProvider.swift"
                            ,0x6b,2,0x62,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b26690);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c561a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b26690; end: 102b2673b; -[SCSCMainCameraScopedSponsoredLensCameraHeatMapServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102b26690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b264f8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b2673c; end: 102b267af; -[SCSCMainCameraScopedSponsoredLensCameraHeatMapServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2673c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef3740,0);
  func_0x000107c61614(param_1 + _DAT_112ef3748,0);
  *(undefined8 *)(param_1 + _DAT_112ef3750) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b267b0; end: 102b267e3;  */

void FUN_102b267b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b267e4; end: 102b2682b; -[SCSCMainCameraScopedSponsoredLensCameraHeatMapServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b267e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef3740);
  func_0x000107c61610(param_1 + _DAT_112ef3748);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef3750));
  return;
}



/* Entry: 102b2682c; end: 102b2684b;  */

void FUN_102b2682c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef3798);
  return;
}



/* Entry: 102b2684c; end: 102b26857; -[SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2684c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef3800;
  func_0x000107c61428(param_1 + _DAT_112ef3800,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b26858; end: 102b26863; -[SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b26858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef3800;
  func_0x000107c61428(param_1 + _DAT_112ef3800,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b26864; end: 102b2686f; -[SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider mainCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b26864(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef3808;
  func_0x000107c61428(param_1 + _DAT_112ef3808,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b26870; end: 102b268b3;  */

void FUN_102b26870(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102b268b4; end: 102b268bf; -[SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider setMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b268b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef3808;
  func_0x000107c61428(param_1 + _DAT_112ef3808,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b268c0; end: 102b26913;  */

void FUN_102b268c0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b26914; end: 102b26b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b26914(void)

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
    func_0x000107c4c148();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102b1acf8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef2258);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef3810);
      *(long *)(unaff_x20 + _DAT_112ef3810) = lVar4;
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
                      "MainCameraScopeGraphBridge/SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider.swift"
                      ,0x5d,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b26a40);
  (*pcVar1)();
}



/* Entry: 102b26b28; end: 102b26b5b; -[SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider provide] */

void FUN_102b26b28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b26914();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b26b5c; end: 102b26b8f; -[SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider __safeProvide] */

void FUN_102b26b5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b26a40();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b26b90; end: 102b26bd3; -[SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider end] */

void FUN_102b26b90(undefined8 param_1)

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



/* Entry: 102b26bd4; end: 102b26d6b;  */

void FUN_102b26bd4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0fb10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f04f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MainCameraScopeGraphBridge/SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider.swift"
                            ,0x5d,2,0x62,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b26d6c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c561a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b26d6c; end: 102b26e17; -[SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102b26d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b26bd4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b26e18; end: 102b26e8b; -[SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b26e18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef3800,0);
  func_0x000107c61614(param_1 + _DAT_112ef3808,0);
  *(undefined8 *)(param_1 + _DAT_112ef3810) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b26e8c; end: 102b26ebf;  */

void FUN_102b26e8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b26ec0; end: 102b26f07; -[SCSCMainCameraScopedViewfinderUIServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b26ec0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef3800);
  func_0x000107c61610(param_1 + _DAT_112ef3808);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef3810));
  return;
}



/* Entry: 102b26f08; end: 102b26f27;  */

void FUN_102b26f08(void)

{
  func_0x000107c61168(&PTR_PTR_112ef3858);
  return;
}



/* Entry: 102b26f28; end: 102b26f33; -[SCSCRealTimeScanScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b26f28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef38c0;
  func_0x000107c61428(param_1 + _DAT_112ef38c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b26f34; end: 102b26f3f; -[SCSCRealTimeScanScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b26f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef38c0;
  func_0x000107c61428(param_1 + _DAT_112ef38c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b26f40; end: 102b26f4b; -[SCSCRealTimeScanScopeServicesSaberServiceProvider mainCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b26f40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef38c8;
  func_0x000107c61428(param_1 + _DAT_112ef38c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b26f4c; end: 102b26f8f;  */

void FUN_102b26f4c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102b26f90; end: 102b26f9b; -[SCSCRealTimeScanScopeServicesSaberServiceProvider setMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b26f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef38c8;
  func_0x000107c61428(param_1 + _DAT_112ef38c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b26f9c; end: 102b26fef;  */

void FUN_102b26f9c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b26ff0; end: 102b27203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b26ff0(void)

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
    func_0x000107c4c148();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102b1ae24();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef2288);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef38d0);
      *(long *)(unaff_x20 + _DAT_112ef38d0) = lVar4;
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
                      "MainCameraScopeGraphBridge/SCSCRealTimeScanScopeServicesSaberServiceProvider.swift"
                      ,0x52,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2711c);
  (*pcVar1)();
}



/* Entry: 102b27204; end: 102b27237; -[SCSCRealTimeScanScopeServicesSaberServiceProvider provide] */

void FUN_102b27204(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b26ff0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b27238; end: 102b2726b; -[SCSCRealTimeScanScopeServicesSaberServiceProvider __safeProvide] */

void FUN_102b27238(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b2711c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b2726c; end: 102b272af; -[SCSCRealTimeScanScopeServicesSaberServiceProvider end] */

void FUN_102b2726c(undefined8 param_1)

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



/* Entry: 102b272b0; end: 102b27447;  */

void FUN_102b272b0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0fb10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f04f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MainCameraScopeGraphBridge/SCSCRealTimeScanScopeServicesSaberServiceProvider.swift"
                            ,0x52,2,0x62,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b27448);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c561a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b27448; end: 102b274f3; -[SCSCRealTimeScanScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102b27448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b272b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b274f4; end: 102b27567; -[SCSCRealTimeScanScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b274f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef38c0,0);
  func_0x000107c61614(param_1 + _DAT_112ef38c8,0);
  *(undefined8 *)(param_1 + _DAT_112ef38d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b27568; end: 102b2759b;  */

void FUN_102b27568(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b2759c; end: 102b275e3; -[SCSCRealTimeScanScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2759c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef38c0);
  func_0x000107c61610(param_1 + _DAT_112ef38c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef38d0));
  return;
}



/* Entry: 102b275e4; end: 102b27603;  */

void FUN_102b275e4(void)

{
  func_0x000107c61168(&PTR_PTR_112ef3918);
  return;
}



/* Entry: 102b27604; end: 102b2777b;  */

/* WARNING: Possible PIC construction at 0x000102b2766c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b27704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b27670) */
/* WARNING: Removing unreachable block (ram,0x000102b27708) */
/* WARNING: Removing unreachable block (ram,0x000102b27720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b27604(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef3988);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102b2777c; end: 102b27783;  */

void FUN_102b2777c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b27784; end: 102b277b7; -[SCSCMainCameraScopedServicesSaberEntryPoint end] */

void FUN_102b27784(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b27604();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b277b8; end: 102b277eb;  */

void FUN_102b277b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b277ec; end: 102b27823; -[SCSCMainCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b277ec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef3980);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef3988));
  return;
}



/* Entry: 102b27824; end: 102b27843;  */

void FUN_102b27824(void)

{
  func_0x000107c61168(&PTR_PTR_11288b408);
  return;
}



/* Entry: 102b27844; end: 102b278bf; +[AdSponsoredSocialUnlockSwiftSupport viewThroughTrackingServicesWithAdConfigService:adOperationalLoggingServices:skAdServices:] */

void FUN_102b27844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_3;
  FUN_102b27b7c(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b278c0; end: 102b279e3; +[AdSponsoredSocialUnlockSwiftSupport viewTrackerWithAdConfigService:lensCarouselManagementServices:unlockableMetrics:adOperationalLoggingServices:skAdServices:viewThroughTracker:unlockableSnapInfo:viewTrackType:] */

void FUN_102b278c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  if (param_9 == 0) {
    param_9 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  uVar1 = param_3;
  func_0x000102b27d80(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_2,param_10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b279e4; end: 102b279fb; +[AdSponsoredSocialUnlockSwiftSupport viewTrackTypeFromSnapSource:] */

undefined1 FUN_102b279e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 0) {
    uVar1 = param_3 == 7;
  }
  return uVar1;
}



/* Entry: 102b279fc; end: 102b27a2f; +[AdSponsoredSocialUnlockSwiftSupport endViewThroughImpressionWithServices:] */

void FUN_102b279fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_102b27ebc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102b27a30; end: 102b27a6b; -[AdSponsoredSocialUnlockSwiftSupport init] */

void FUN_102b27a30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b27a6c; end: 102b27a9f;  */

void FUN_102b27a6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b27aa0; end: 102b27b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b27aa0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  lVar2 = lStack_48;
  func_0x000107c5b0b0(lStack_48);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5faec();
  uVar6 = param_2;
  func_0x000107c61170(lVar2);
  lVar2 = lStack_48;
  func_0x000100873628();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    uVar5 = 0;
    FUN_102b28258(0);
    func_0x000107c610f8();
    func_0x000102b2813c(lVar3,param_2,lVar4,uVar6,uVar5);
    func_0x000107c615e8(lStack_48);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b27b7c);
  (*pcVar1)();
}



/* Entry: 102b27b7c; end: 102b27ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b27b7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0f13b0);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar2);
  func_0x000107c61170(uVar3);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  FUN_102b27aa0(param_1);
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4d664(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000100873820(0);
  uVar3 = *(undefined8 *)(param_2 + _DAT_113010c08);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c5b0a8(param_3);
  func_0x000107c61180();
  func_0x000107c61174(puVar4);
  FUN_102b28278(uVar3,puVar2,param_1,param_3,puVar4);
  func_0x0001005b6364(0);
  func_0x000107c610f8();
  func_0x000102b2ac3c(uVar3,puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 102b27ebc; end: 102b27f67;  */

/* WARNING: Possible PIC construction at 0x000102b27f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b27f34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b27ebc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ef3c60);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(param_1);
    func_0x000107c61174(uVar2);
    func_0x000107c45a48(puVar1,param_2,0);
    func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102b27f68; end: 102b27f87;  */

void FUN_102b27f68(void)

{
  func_0x000107c61168(&PTR_PTR_11288b4c8);
  return;
}



/* Entry: 102b27f88; end: 102b281b7;  */

undefined1  [16] FUN_102b27f88(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 != 0) {
      iVar8 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar8,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b280c0);
        (*pcVar2)();
      }
      if (iVar8 - (int)param_1 != 0x10) goto LAB_102b280ac;
      goto LAB_102b27fc4;
    }
    uVar9 = param_2 >> 0x30 & 0xff;
  }
  else {
    if (uVar7 != 2) goto LAB_102b280ac;
    uVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b280bc);
      (*pcVar2)();
    }
  }
  if (uVar9 == 0x10) {
LAB_102b27fc4:
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c4635c(puVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61178(puVar3);
    func_0x000107c3eea8();
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSUUID_1126b0270);
    func_0x000107c48ff4();
    puVar5 = puVar4;
    func_0x000107c3ac54();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = puVar6;
    return auVar10;
  }
LAB_102b280ac:
  return ZEXT816(0);
}



/* Entry: 102b281b8; end: 102b28217; -[SCSponsoredLensTrackerADConfig init] */

void FUN_102b281b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSponsoredSocialUnlockServicesImpl.SponsoredLensTrackerADConfig",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b281e4);
  (*pcVar1)();
}



/* Entry: 102b28218; end: 102b28257; -[SCSponsoredLensTrackerADConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b28238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b2823c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b28218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ef39e0 + 8))
  ;
  return;
}



/* Entry: 102b28258; end: 102b28277;  */

void FUN_102b28258(void)

{
  func_0x000107c61168(&PTR_PTR_11288b578);
  return;
}



/* Entry: 102b28278; end: 102b2831f;  */

undefined8
FUN_102b28278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x000100873734();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_4;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  func_0x000107c615f0(param_2);
  func_0x000100873840();
  lVar1 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  func_0x000107c61464(unaff_x20,lVar1,0x59,7);
  return param_2;
}



/* Entry: 102b28320; end: 102b2837f; -[SCSponsoredSocialUnlockViewThroughTracker init] */

void FUN_102b28320(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSponsoredSocialUnlockServicesImpl.SponsoredSocialUnlockViewThroughTracker",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2834c);
  (*pcVar1)();
}



/* Entry: 102b28380; end: 102b283f7; -[SCSponsoredSocialUnlockViewThroughTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b2839c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b283a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b28380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ef3a18));
  return;
}



/* Entry: 102b283f8; end: 102b284d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b283f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef3a18);
  puVar1 = &UNK_11059dfe8;
  func_0x000107c613fc(&UNK_11059dfe8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_11059e010;
  func_0x000107c613fc(&UNK_11059e010,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_40 = FUN_102b28bc0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11059e028;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102b284d8; end: 102b28533;  */

void FUN_102b284d8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102b28534(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b28534; end: 102b28967;  */

/* WARNING: Possible PIC construction at 0x000102b28574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b285b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b28670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b28680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b286bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b286dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b28710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b28770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2878c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b28814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b28830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b288d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b288e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b288f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b28924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b2893c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b28928) */
/* WARNING: Removing unreachable block (ram,0x000102b288f4) */
/* WARNING: Removing unreachable block (ram,0x000102b28938) */
/* WARNING: Removing unreachable block (ram,0x000102b28918) */
/* WARNING: Removing unreachable block (ram,0x000102b288e4) */
/* WARNING: Removing unreachable block (ram,0x000102b288d4) */
/* WARNING: Removing unreachable block (ram,0x000102b28834) */
/* WARNING: Removing unreachable block (ram,0x000102b28818) */
/* WARNING: Removing unreachable block (ram,0x000102b2881c) */
/* WARNING: Removing unreachable block (ram,0x000102b28790) */
/* WARNING: Removing unreachable block (ram,0x000102b28774) */
/* WARNING: Removing unreachable block (ram,0x000102b28778) */
/* WARNING: Removing unreachable block (ram,0x000102b28714) */
/* WARNING: Removing unreachable block (ram,0x000102b28720) */
/* WARNING: Removing unreachable block (ram,0x000102b287e4) */
/* WARNING: Removing unreachable block (ram,0x000102b287e8) */
/* WARNING: Removing unreachable block (ram,0x000102b28838) */
/* WARNING: Removing unreachable block (ram,0x000102b28844) */
/* WARNING: Removing unreachable block (ram,0x000102b287fc) */
/* WARNING: Removing unreachable block (ram,0x000102b28758) */
/* WARNING: Removing unreachable block (ram,0x000102b286e0) */
/* WARNING: Removing unreachable block (ram,0x000102b286e4) */
/* WARNING: Removing unreachable block (ram,0x000102b286c0) */
/* WARNING: Removing unreachable block (ram,0x000102b286c4) */
/* WARNING: Removing unreachable block (ram,0x000102b28684) */
/* WARNING: Removing unreachable block (ram,0x000102b28690) */
/* WARNING: Removing unreachable block (ram,0x000102b287c0) */
/* WARNING: Removing unreachable block (ram,0x000102b286a4) */
/* WARNING: Removing unreachable block (ram,0x000102b28674) */
/* WARNING: Removing unreachable block (ram,0x000102b285b8) */
/* WARNING: Removing unreachable block (ram,0x000102b285bc) */
/* WARNING: Removing unreachable block (ram,0x000102b285d4) */
/* WARNING: Removing unreachable block (ram,0x000102b287b0) */
/* WARNING: Removing unreachable block (ram,0x000102b287c4) */
/* WARNING: Removing unreachable block (ram,0x000102b285dc) */
/* WARNING: Removing unreachable block (ram,0x000102b28578) */
/* WARNING: Removing unreachable block (ram,0x000102b28588) */
/* WARNING: Removing unreachable block (ram,0x000102b2859c) */
/* WARNING: Removing unreachable block (ram,0x000102b28940) */

void FUN_102b28534(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c4a4d8();
  if ((int)lVar1 != 0) {
    func_0x000107c5d2d8();
    func_0x000107c61180();
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 102b28968; end: 102b28ad7; -[SCSponsoredSocialUnlockViewThroughTracker startViewThroughImpressionFor:] */

/* WARNING: Possible PIC construction at 0x000102b289a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b289a4) */

void FUN_102b28968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102b283f8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b28ad8; end: 102b28b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b28ad8(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c3ebcc();
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112ef3a48;
    if (param_2 != 0) {
      if ((*(long *)(param_2 + _DAT_112ef3a40) != 0) &&
         (*(char *)(param_2 + _DAT_112ef3a48) == '\x01')) {
        func_0x000107c42828(*(long *)(param_2 + _DAT_112ef3a40));
        *(undefined1 *)(param_2 + lVar1) = 0;
      }
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 102b28b64; end: 102b28b8b; -[SCSponsoredSocialUnlockViewThroughTracker endViewThroughImpression] */

void FUN_102b28b64(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102b289b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b28b8c; end: 102b28bbf;  */

void FUN_102b28b8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b28bc0; end: 102b28beb;  */

void FUN_102b28bc0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102b28534(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102b28bec; end: 102b28c2f;  */

void FUN_102b28bec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef3b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ca340;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ef3b28 = puVar1;
  return;
}



/* Entry: 102b28c30; end: 102b28c37;  */

void FUN_102b28c30(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102b28c38; end: 102b28c73; -[_TtC35SCSponsoredSocialUnlockServicesImpl41SponsoredSocialUnlockViewTrackerEmptyImpl init] */

void FUN_102b28c38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b28c74; end: 102b28ca7;  */

void FUN_102b28c74(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b28ca8; end: 102b28cab; -[_TtC35SCSponsoredSocialUnlockServicesImpl41SponsoredSocialUnlockViewTrackerEmptyImpl startTracking] */

void FUN_102b28ca8(void)

{
  return;
}



/* Entry: 102b28cac; end: 102b28ccb;  */

void FUN_102b28cac(void)

{
  func_0x000107c61168(&PTR_PTR_11288b730);
  return;
}



/* Entry: 102b28ccc; end: 102b28ccf; -[_TtC35SCSponsoredSocialUnlockServicesImpl41SponsoredSocialUnlockViewTrackerEmptyImpl finishTracking] */

void FUN_102b28ccc(void)

{
  return;
}



/* Entry: 102b28cd0; end: 102b28ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b28cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [16];
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b68) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b70) = param_4;
  (**(code **)(lVar5 + 0x68))
            (auStack_70 + (-0x20 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0f13b0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar5 + 8))(auStack_70 + (-0x20 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),lVar1);
  *(undefined **)(unaff_x20 + _DAT_112ef3b78) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b80) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b88) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b90) = param_6;
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  return puVar4;
}



/* Entry: 102b28ec8; end: 102b28f2b;  */

undefined8
FUN_102b28ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102b2949c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 102b28f2c; end: 102b2900b; -[_TtC35SCSponsoredSocialUnlockServicesImpl39SponsoredSocialUnlockViewTrackerFactory initWithLensCarouselManager:unlockableMetrics:timeProvider:metricsManager:adConfig:viewThroughTracker:adNetwork:] */

undefined8
FUN_102b28f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_9);
  uVar1 = param_3;
  FUN_102b2949c(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 102b2900c; end: 102b29323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102b2900c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar4 = *(long **)(unaff_x20 + _DAT_112ef3b58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar4 == (long *)0x0) {
    FUN_102b28cac();
    func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return plVar4;
  }
  plVar5 = plVar4;
  func_0x000107c3d14c();
  func_0x000107c61180();
  func_0x000107c615e8(plVar4);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ef3b68);
  lVar6 = *(long *)(unaff_x20 + _DAT_112ef3b60);
  func_0x000107c5d2e4();
  func_0x000107c61180();
  if (lVar6 != 0) {
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ef3b70);
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112ef3b78);
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ef3b80);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ef3b88);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ef3b90);
    lVar7 = 0;
    FUN_102b2ab7c();
    lVar8 = lVar7;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar8 + _DAT_112ef3bc0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar2 = (undefined8 *)(lVar8 + _DAT_112ef3bc8);
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 1;
    *(undefined8 *)(lVar8 + _DAT_112ef3bd0) = 0;
    *(undefined8 *)(lVar8 + _DAT_112ef3bd8) = 0;
    *(undefined8 *)(lVar8 + _DAT_112ef3be0) = 0;
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined8 *)(lVar8 + _DAT_112ef3be8) = uVar13;
    *(long *)(lVar8 + _DAT_112ef3bf0) = lVar6;
    *(undefined8 *)(lVar8 + _DAT_112ef3bf8) = param_3;
    *(undefined8 *)(lVar8 + _DAT_112ef3c00) = uVar12;
    *(undefined8 *)(lVar8 + _DAT_112ef3c08) = uVar17;
    *(undefined8 *)(lVar8 + _DAT_112ef3c10) = uVar16;
    *(undefined8 *)(lVar8 + _DAT_112ef3c18) = uVar15;
    *(undefined8 *)(lVar8 + _DAT_112ef3c20) = uVar14;
    puVar9 = PTR_s_init_1125d9248;
    lStack_70 = lVar8;
    lStack_68 = lVar7;
    func_0x000107c61434(param_2);
    func_0x000107c615f0(uVar13);
    func_0x000107c61174(lVar6);
    func_0x000107c61174(uVar12);
    func_0x000107c615f0(uVar17);
    func_0x000107c61174(uVar16);
    func_0x000107c61174(uVar15);
    func_0x000107c615f0(uVar14);
    plVar4 = &lStack_70;
    func_0x000107c61154(plVar4,puVar9);
    puVar9 = &UNK_11059e098;
    func_0x000107c613fc(&UNK_11059e098,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,plVar4);
    pcStack_80 = FUN_102b29660;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100b610dc;
    puStack_88 = &UNK_11059e0b0;
    ppuVar10 = &puStack_a0;
    puStack_78 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar9);
    plVar11 = plVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(plVar5);
    func_0x000107c60bd0(ppuVar10);
    uVar13 = *(undefined8 *)((long)plVar4 + _DAT_112ef3bd0);
    *(long **)((long)plVar4 + _DAT_112ef3bd0) = plVar11;
    func_0x000107c61170(plVar4);
    func_0x000107c61170(uVar13);
    return plVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102b29324);
  (*pcVar3)();
}



/* Entry: 102b29324; end: 102b293a3; -[_TtC35SCSponsoredSocialUnlockServicesImpl39SponsoredSocialUnlockViewTrackerFactory viewTrackerWithUnlockableSnapInfo:viewTrackType:] */

void FUN_102b29324(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_102b2900c(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102b293a4; end: 102b29403; -[_TtC35SCSponsoredSocialUnlockServicesImpl39SponsoredSocialUnlockViewTrackerFactory init] */

void FUN_102b293a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSponsoredSocialUnlockServicesImpl.SponsoredSocialUnlockViewTrackerFactory",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b293d0);
  (*pcVar1)();
}



/* Entry: 102b29404; end: 102b2949b; -[_TtC35SCSponsoredSocialUnlockServicesImpl39SponsoredSocialUnlockViewTrackerFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b29440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b29460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b29444) */
/* WARNING: Removing unreachable block (ram,0x000102b29464) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b29404(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef3b58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef3b60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ef3b68));
  return;
}



/* Entry: 102b2949c; end: 102b2965f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2949c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_88 = param_5;
  uStack_80 = param_7;
  uStack_78 = param_6;
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b68) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b70) = param_4;
  (**(code **)(lVar4 + 0x68))
            (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0f13b0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + _DAT_112ef3b78) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b80) = uStack_88;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b88) = uStack_80;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3b90) = uStack_78;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b29660; end: 102b29683;  */

void FUN_102b29660(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4dfe8(param_1);
    func_0x000107c61180();
    FUN_102b29d58();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b29684; end: 102b296a3;  */

void FUN_102b29684(void)

{
  func_0x000107c61168(&PTR_PTR_11288b7e0);
  return;
}



/* Entry: 102b296a4; end: 102b29943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b296a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef3bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ef3bc8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3bd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3bd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3be0) = 0;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3be8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3bf0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3bf8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c00) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c08) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c10) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c18) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c20) = param_11;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c615f0(param_11);
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,puVar4);
  puVar4 = &UNK_11059e0e8;
  func_0x000107c613fc(&UNK_11059e0e8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar3);
  pcStack_80 = FUN_102b29d50;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100b610dc;
  puStack_88 = &UNK_11059e100;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  uVar6 = param_6;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c615e8(param_11);
  func_0x000107c60bd0(ppuVar5);
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112ef3bd0);
  *(undefined8 *)(puVar3 + _DAT_112ef3bd0) = uVar6;
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  return puVar3;
}



/* Entry: 102b29944; end: 102b29957;  */

bool FUN_102b29944(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102b29958; end: 102b29a2f;  */

void FUN_102b29958(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102b29a30; end: 102b29a3b;  */

void FUN_102b29a30(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102b29a3c; end: 102b29cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b29a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef3bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ef3bc8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3bd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3bd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3be0) = 0;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3be8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3bf0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3bf8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c00) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c08) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c10) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c18) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ef3c20) = param_11;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c615f0(param_11);
  puVar3 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar3,puVar4);
  puVar4 = &UNK_11059e0e8;
  func_0x000107c613fc(&UNK_11059e0e8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar3);
  uStack_80 = 0x102b2aba4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100b610dc;
  puStack_88 = &UNK_11059e128;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  uVar6 = param_6;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c615e8(param_11);
  func_0x000107c60bd0(ppuVar5);
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112ef3bd0);
  *(undefined8 *)(puVar3 + _DAT_112ef3bd0) = uVar6;
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  return puVar3;
}



/* Entry: 102b29cdc; end: 102b29d4f;  */

void FUN_102b29cdc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4dfe8(param_1);
    func_0x000107c61180();
    FUN_102b29d58();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b29d50; end: 102b29d57;  */

void FUN_102b29d50(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4dfe8(param_1);
    func_0x000107c61180();
    FUN_102b29d58();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}


