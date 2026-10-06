/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10393bde4; end: 10393be57; -[SCSendToMassSnapNotificationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393bde4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb4380,0);
  func_0x000107c61614(param_1 + _DAT_112fb4388,0);
  *(undefined8 *)(param_1 + _DAT_112fb4390) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10393be58; end: 10393be8b;  */

void FUN_10393be58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10393be8c; end: 10393bed3; -[SCSendToMassSnapNotificationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393be8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb4380);
  func_0x000107c61610(param_1 + _DAT_112fb4388);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb4390));
  return;
}



/* Entry: 10393bed4; end: 10393bef3;  */

void FUN_10393bed4(void)

{
  func_0x000107c61168(&PTR_PTR_112fb43d8);
  return;
}



/* Entry: 10393bef4; end: 10393beff; -[SCShareUpsellPresenterScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393bef4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb4440;
  func_0x000107c61428(param_1 + _DAT_112fb4440,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393bf00; end: 10393bf0b; -[SCShareUpsellPresenterScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393bf00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb4440;
  func_0x000107c61428(param_1 + _DAT_112fb4440,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393bf0c; end: 10393bf17; -[SCShareUpsellPresenterScopeServicesSaberServiceProvider sharingUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393bf0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb4448;
  func_0x000107c61428(param_1 + _DAT_112fb4448,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393bf18; end: 10393bf5b;  */

void FUN_10393bf18(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10393bf5c; end: 10393bf67; -[SCShareUpsellPresenterScopeServicesSaberServiceProvider setSharingUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393bf5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb4448;
  func_0x000107c61428(param_1 + _DAT_112fb4448,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393bf68; end: 10393bfbb;  */

void FUN_10393bf68(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393bfbc; end: 10393c1cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10393bfbc(void)

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
    func_0x000107c5aa7c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103938bbc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb3ec0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb4450);
      *(long *)(unaff_x20 + _DAT_112fb4450) = lVar4;
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
                      "SharingUserNavigationScopeGraphBridge/SCShareUpsellPresenterScopeServicesSaberServiceProvider.swift"
                      ,99,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10393c0e8);
  (*pcVar1)();
}



/* Entry: 10393c1d0; end: 10393c203; -[SCShareUpsellPresenterScopeServicesSaberServiceProvider provide] */

void FUN_10393c1d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10393bfbc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393c204; end: 10393c237; -[SCShareUpsellPresenterScopeServicesSaberServiceProvider __safeProvide] */

void FUN_10393c204(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010393c0e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393c238; end: 10393c27b; -[SCShareUpsellPresenterScopeServicesSaberServiceProvider end] */

void FUN_10393c238(undefined8 param_1)

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



/* Entry: 10393c27c; end: 10393c413;  */

void FUN_10393c27c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e86840)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1797c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SharingUserNavigationScopeGraphBridge/SCShareUpsellPresenterScopeServicesSaberServiceProvider.swift"
                            ,99,2,0x3c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10393c414);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c590c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10393c414; end: 10393c4bf; -[SCShareUpsellPresenterScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10393c414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10393c27c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10393c4c0; end: 10393c533; -[SCShareUpsellPresenterScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393c4c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb4440,0);
  func_0x000107c61614(param_1 + _DAT_112fb4448,0);
  *(undefined8 *)(param_1 + _DAT_112fb4450) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10393c534; end: 10393c567;  */

void FUN_10393c534(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10393c568; end: 10393c5af; -[SCShareUpsellPresenterScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393c568(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb4440);
  func_0x000107c61610(param_1 + _DAT_112fb4448);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb4450));
  return;
}



/* Entry: 10393c5b0; end: 10393c5cf;  */

void FUN_10393c5b0(void)

{
  func_0x000107c61168(&PTR_PTR_112fb4498);
  return;
}



/* Entry: 10393c5d0; end: 10393c5db; -[SCShortcutsCarouselScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393c5d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb4500;
  func_0x000107c61428(param_1 + _DAT_112fb4500,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393c5dc; end: 10393c5e7; -[SCShortcutsCarouselScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393c5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb4500;
  func_0x000107c61428(param_1 + _DAT_112fb4500,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393c5e8; end: 10393c5f3; -[SCShortcutsCarouselScopeServicesSaberServiceProvider sharingUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393c5e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb4508;
  func_0x000107c61428(param_1 + _DAT_112fb4508,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393c5f4; end: 10393c637;  */

void FUN_10393c5f4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10393c638; end: 10393c643; -[SCShortcutsCarouselScopeServicesSaberServiceProvider setSharingUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393c638(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb4508;
  func_0x000107c61428(param_1 + _DAT_112fb4508,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393c644; end: 10393c697;  */

void FUN_10393c644(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393c698; end: 10393c8ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10393c698(void)

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
    func_0x000107c5aa7c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103938ce8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb3ec8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb4510);
      *(long *)(unaff_x20 + _DAT_112fb4510) = lVar4;
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
                      "SharingUserNavigationScopeGraphBridge/SCShortcutsCarouselScopeServicesSaberServiceProvider.swift"
                      ,0x60,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10393c7c4);
  (*pcVar1)();
}



/* Entry: 10393c8ac; end: 10393c8df; -[SCShortcutsCarouselScopeServicesSaberServiceProvider provide] */

void FUN_10393c8ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10393c698();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393c8e0; end: 10393c913; -[SCShortcutsCarouselScopeServicesSaberServiceProvider __safeProvide] */

void FUN_10393c8e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010393c7c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393c914; end: 10393c957; -[SCShortcutsCarouselScopeServicesSaberServiceProvider end] */

void FUN_10393c914(undefined8 param_1)

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



/* Entry: 10393c958; end: 10393caef;  */

void FUN_10393c958(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e86840)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1797c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SharingUserNavigationScopeGraphBridge/SCShortcutsCarouselScopeServicesSaberServiceProvider.swift"
                            ,0x60,2,0x3c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10393caf0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c590c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10393caf0; end: 10393cb9b; -[SCShortcutsCarouselScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10393caf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10393c958(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10393cb9c; end: 10393cc0f; -[SCShortcutsCarouselScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393cb9c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb4500,0);
  func_0x000107c61614(param_1 + _DAT_112fb4508,0);
  *(undefined8 *)(param_1 + _DAT_112fb4510) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10393cc10; end: 10393cc43;  */

void FUN_10393cc10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10393cc44; end: 10393cc8b; -[SCShortcutsCarouselScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393cc44(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb4500);
  func_0x000107c61610(param_1 + _DAT_112fb4508);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb4510));
  return;
}



/* Entry: 10393cc8c; end: 10393ccab;  */

void FUN_10393cc8c(void)

{
  func_0x000107c61168(&PTR_PTR_112fb4558);
  return;
}



/* Entry: 10393ccac; end: 10393ccb7; -[SCSpotlightAutoShareServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393ccac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb45c0;
  func_0x000107c61428(param_1 + _DAT_112fb45c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393ccb8; end: 10393ccc3; -[SCSpotlightAutoShareServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393ccb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb45c0;
  func_0x000107c61428(param_1 + _DAT_112fb45c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393ccc4; end: 10393cccf; -[SCSpotlightAutoShareServiceSaberServiceProvider sharingUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393ccc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb45c8;
  func_0x000107c61428(param_1 + _DAT_112fb45c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393ccd0; end: 10393cd13;  */

void FUN_10393ccd0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10393cd14; end: 10393cd1f; -[SCSpotlightAutoShareServiceSaberServiceProvider setSharingUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393cd14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb45c8;
  func_0x000107c61428(param_1 + _DAT_112fb45c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393cd20; end: 10393cd73;  */

void FUN_10393cd20(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393cd74; end: 10393cf87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10393cd74(void)

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
    func_0x000107c5aa7c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103938e14();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb3ed0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb45d0);
      *(long *)(unaff_x20 + _DAT_112fb45d0) = lVar4;
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
                      "SharingUserNavigationScopeGraphBridge/SCSpotlightAutoShareServiceSaberServiceProvider.swift"
                      ,0x5b,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10393cea0);
  (*pcVar1)();
}



/* Entry: 10393cf88; end: 10393cfbb; -[SCSpotlightAutoShareServiceSaberServiceProvider provide] */

void FUN_10393cf88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10393cd74();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393cfbc; end: 10393cfef; -[SCSpotlightAutoShareServiceSaberServiceProvider __safeProvide] */

void FUN_10393cfbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010393cea0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393cff0; end: 10393d033; -[SCSpotlightAutoShareServiceSaberServiceProvider end] */

void FUN_10393cff0(undefined8 param_1)

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



/* Entry: 10393d034; end: 10393d1cb;  */

void FUN_10393d034(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e86840)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1797c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SharingUserNavigationScopeGraphBridge/SCSpotlightAutoShareServiceSaberServiceProvider.swift"
                            ,0x5b,2,0x3c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10393d1cc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c590c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10393d1cc; end: 10393d277; -[SCSpotlightAutoShareServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_10393d1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10393d034(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10393d278; end: 10393d2eb; -[SCSpotlightAutoShareServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393d278(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb45c0,0);
  func_0x000107c61614(param_1 + _DAT_112fb45c8,0);
  *(undefined8 *)(param_1 + _DAT_112fb45d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10393d2ec; end: 10393d31f;  */

void FUN_10393d2ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10393d320; end: 10393d367; -[SCSpotlightAutoShareServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393d320(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb45c0);
  func_0x000107c61610(param_1 + _DAT_112fb45c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb45d0));
  return;
}



/* Entry: 10393d368; end: 10393d387;  */

void FUN_10393d368(void)

{
  func_0x000107c61168(&PTR_PTR_112fb4618);
  return;
}



/* Entry: 10393d388; end: 10393d393; -[SCSpotlightTileServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393d388(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb4680;
  func_0x000107c61428(param_1 + _DAT_112fb4680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393d394; end: 10393d39f; -[SCSpotlightTileServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393d394(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb4680;
  func_0x000107c61428(param_1 + _DAT_112fb4680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393d3a0; end: 10393d3ab; -[SCSpotlightTileServicesSaberServiceProvider sharingUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393d3a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb4688;
  func_0x000107c61428(param_1 + _DAT_112fb4688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393d3ac; end: 10393d3ef;  */

void FUN_10393d3ac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10393d3f0; end: 10393d3fb; -[SCSpotlightTileServicesSaberServiceProvider setSharingUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393d3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb4688;
  func_0x000107c61428(param_1 + _DAT_112fb4688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393d3fc; end: 10393d44f;  */

void FUN_10393d3fc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393d450; end: 10393d663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10393d450(void)

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
    func_0x000107c5aa7c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103938f40();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb3ed8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb4690);
      *(long *)(unaff_x20 + _DAT_112fb4690) = lVar4;
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
                      "SharingUserNavigationScopeGraphBridge/SCSpotlightTileServicesSaberServiceProvider.swift"
                      ,0x57,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10393d57c);
  (*pcVar1)();
}



/* Entry: 10393d664; end: 10393d697; -[SCSpotlightTileServicesSaberServiceProvider provide] */

void FUN_10393d664(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10393d450();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393d698; end: 10393d6cb; -[SCSpotlightTileServicesSaberServiceProvider __safeProvide] */

void FUN_10393d698(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010393d57c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393d6cc; end: 10393d70f; -[SCSpotlightTileServicesSaberServiceProvider end] */

void FUN_10393d6cc(undefined8 param_1)

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



/* Entry: 10393d710; end: 10393d8a7;  */

void FUN_10393d710(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e86840)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1797c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SharingUserNavigationScopeGraphBridge/SCSpotlightTileServicesSaberServiceProvider.swift"
                            ,0x57,2,0x3c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10393d8a8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c590c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10393d8a8; end: 10393d953; -[SCSpotlightTileServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10393d8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10393d710(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10393d954; end: 10393d9c7; -[SCSpotlightTileServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393d954(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb4680,0);
  func_0x000107c61614(param_1 + _DAT_112fb4688,0);
  *(undefined8 *)(param_1 + _DAT_112fb4690) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10393d9c8; end: 10393d9fb;  */

void FUN_10393d9c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10393d9fc; end: 10393da43; -[SCSpotlightTileServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393d9fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb4680);
  func_0x000107c61610(param_1 + _DAT_112fb4688);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb4690));
  return;
}



/* Entry: 10393da44; end: 10393da63;  */

void FUN_10393da44(void)

{
  func_0x000107c61168(&PTR_PTR_112fb46d8);
  return;
}



/* Entry: 10393da64; end: 10393da6f; -[SCTilePickerLauncherServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393da64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb4740;
  func_0x000107c61428(param_1 + _DAT_112fb4740,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393da70; end: 10393da7b; -[SCTilePickerLauncherServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393da70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb4740;
  func_0x000107c61428(param_1 + _DAT_112fb4740,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393da7c; end: 10393da87; -[SCTilePickerLauncherServicesSaberServiceProvider sharingUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393da7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb4748;
  func_0x000107c61428(param_1 + _DAT_112fb4748,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393da88; end: 10393dacb;  */

void FUN_10393da88(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10393dacc; end: 10393dad7; -[SCTilePickerLauncherServicesSaberServiceProvider setSharingUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393dacc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb4748;
  func_0x000107c61428(param_1 + _DAT_112fb4748,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393dad8; end: 10393db2b;  */

void FUN_10393dad8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393db2c; end: 10393dd3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10393db2c(void)

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
    func_0x000107c5aa7c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010393906c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb3ee0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb4750);
      *(long *)(unaff_x20 + _DAT_112fb4750) = lVar4;
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
                      "SharingUserNavigationScopeGraphBridge/SCTilePickerLauncherServicesSaberServiceProvider.swift"
                      ,0x5c,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10393dc58);
  (*pcVar1)();
}



/* Entry: 10393dd40; end: 10393dd73; -[SCTilePickerLauncherServicesSaberServiceProvider provide] */

void FUN_10393dd40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10393db2c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393dd74; end: 10393dda7; -[SCTilePickerLauncherServicesSaberServiceProvider __safeProvide] */

void FUN_10393dd74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010393dc58();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393dda8; end: 10393ddeb; -[SCTilePickerLauncherServicesSaberServiceProvider end] */

void FUN_10393dda8(undefined8 param_1)

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



/* Entry: 10393ddec; end: 10393df83;  */

void FUN_10393ddec(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e86840)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1797c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SharingUserNavigationScopeGraphBridge/SCTilePickerLauncherServicesSaberServiceProvider.swift"
                            ,0x5c,2,0x3c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10393df84);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c590c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10393df84; end: 10393e02f; -[SCTilePickerLauncherServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10393df84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10393ddec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10393e030; end: 10393e0a3; -[SCTilePickerLauncherServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393e030(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb4740,0);
  func_0x000107c61614(param_1 + _DAT_112fb4748,0);
  *(undefined8 *)(param_1 + _DAT_112fb4750) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10393e0a4; end: 10393e0d7;  */

void FUN_10393e0a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10393e0d8; end: 10393e11f; -[SCTilePickerLauncherServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393e0d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb4740);
  func_0x000107c61610(param_1 + _DAT_112fb4748);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb4750));
  return;
}



/* Entry: 10393e120; end: 10393e13f;  */

void FUN_10393e120(void)

{
  func_0x000107c61168(&PTR_PTR_112fb4798);
  return;
}



/* Entry: 10393e140; end: 10393e14f; -[SCSpotlightTileBuildResult snapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393e140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb4800));
  return;
}



/* Entry: 10393e150; end: 10393e19b; -[SCSpotlightTileBuildResult clientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393e150(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fb4808);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fb4808))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10393e19c; end: 10393e273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393e19c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb4800) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fb4808);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10393e274; end: 10393e2d3; -[SCSpotlightTileBuildResult init] */

void FUN_10393e274(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightTileServices.SpotlightTileBuildResult",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10393e2a0);
  (*pcVar1)();
}



/* Entry: 10393e2d4; end: 10393e30f; -[SCSpotlightTileBuildResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393e2d4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fb4800));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fb4808 + 8))
  ;
  return;
}



/* Entry: 10393e310; end: 10393e32f;  */

void FUN_10393e310(void)

{
  func_0x000107c61168(&PTR_PTR_112903ec0);
  return;
}



/* Entry: 10393e330; end: 10393e557;  */

/* WARNING: Removing unreachable block (ram,0x00010393e3ec) */

undefined *
FUN_10393e330(undefined8 param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((param_3 & 0xff000000000000) == 0) {
        return (undefined *)0x0;
      }
      goto LAB_10393e398;
    }
    lVar6 = (long)(int)param_2;
    lVar7 = param_2 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return (undefined *)0x0;
    }
    lVar6 = *(long *)(param_2 + 0x10);
    lVar7 = *(long *)(param_2 + 0x18);
  }
  if (lVar6 == lVar7) {
    return (undefined *)0x0;
  }
LAB_10393e398:
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(param_4,param_5);
  lVar6 = param_4;
  func_0x0001010282b0(param_4,param_5);
  func_0x00010006c090(param_4,param_5);
  if (lVar6 == 0) {
    return (undefined *)0x0;
  }
  func_0x000107c60734();
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar7 = param_2;
  func_0x000107c5ee20(param_2,param_3);
  func_0x000107c3ed10();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  puVar3 = &UNK_1106af878;
  func_0x000107c613fc(&UNK_1106af878,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(puVar3 + 0x20) = param_7;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  *(long *)(puVar3 + 0x30) = param_2;
  *(ulong *)(puVar3 + 0x38) = param_3;
  pcStack_88 = FUN_10393e884;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10393e80c;
  puStack_90 = &UNK_1106af890;
  ppuVar4 = &puStack_a8;
  puStack_80 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_80;
  func_0x000107c61434(param_7);
  func_0x000107c61174(puVar2);
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c5dc64(unaff_x20);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(unaff_x20);
  puVar3 = puVar2;
  func_0x000107c43bf4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10393e558; end: 10393e80b;  */

/* WARNING: Possible PIC construction at 0x00010393e67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010393e7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010393e7a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010393e7e0) */
/* WARNING: Removing unreachable block (ram,0x00010393e680) */
/* WARNING: Removing unreachable block (ram,0x00010393e7a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393e558(double param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_b0 [80];
  
  puVar8 = auStack_b0;
  dVar10 = param_1;
  func_0x000107c60734();
  dVar10 = (dVar10 - param_1) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10393e804);
    (*pcVar3)();
  }
  if (-9.223372036854778e+18 < dVar10) {
    if (dVar10 < 9.223372036854776e+18) {
      if (param_2 == 0) {
        if (param_3 == 0) {
          lVar4 = 0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          func_0x000107c61534();
          *(undefined8 *)(lVar4 + 0x18) = 2;
          *(undefined8 *)(lVar4 + 0x10) = 1;
          uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          func_0x000107c5faec();
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
          puVar2 = PTR___sSSN_11034da80;
          *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
          *(undefined1 **)(lVar4 + 0x28) = puVar8;
          *(undefined8 *)(lVar4 + 0x30) = 0xd00000000000001f;
          *(undefined8 *)(lVar4 + 0x38) = 0x800000010f179d00;
          lVar6 = lVar4;
          func_0x000100214a84(lVar4);
          func_0x000107c61588(lVar4);
          func_0x000100f15a0c((undefined8 *)(lVar4 + 0x20));
          puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c5fadc(param_4,param_5);
          func_0x000107c5f9dc(lVar6,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
          func_0x000107c6142c(lVar6);
          func_0x000107c466bc(puVar7);
        }
        else {
          func_0x000107c614b0(param_3);
          param_4 = param_3;
          func_0x000107c5ed2c(param_3);
          func_0x000107c614ac(param_3);
          func_0x000107c3fef8(param_6);
        }
      }
      else {
        uVar9 = *(undefined8 *)(param_2 + _DAT_112fb4800);
        uVar5 = *(undefined8 *)(param_2 + _DAT_112fb4808);
        uVar1 = ((undefined8 *)(param_2 + _DAT_112fb4808))[1];
        func_0x0001043f8630(0);
        func_0x000107c610f8();
        func_0x000107c61174(param_2);
        func_0x000107c61174(uVar9);
        func_0x000107c61434(uVar1);
        func_0x00010006c00c(param_7,param_8);
        func_0x0001043f7db8(uVar9,uVar5,uVar1,param_7,param_8);
        func_0x000107c3fefc(param_6);
        param_4 = param_2;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10393e80c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10393e808);
  (*pcVar3)();
}



/* Entry: 10393e80c; end: 10393e883;  */

/* WARNING: Possible PIC construction at 0x00010393e868: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010393e86c) */

void FUN_10393e80c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10393e884; end: 10393e8b3;  */

/* WARNING: Possible PIC construction at 0x00010393e67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010393e7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010393e7a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010393e7e0) */
/* WARNING: Removing unreachable block (ram,0x00010393e680) */
/* WARNING: Removing unreachable block (ram,0x00010393e7a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393e884(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  double dVar14;
  double dVar15;
  undefined1 auStack_b0 [80];
  
  dVar15 = *(double *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar11 = auStack_b0;
  dVar14 = dVar15;
  func_0x000107c60734();
  dVar14 = (dVar14 - dVar15) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10393e804);
    (*pcVar5)();
  }
  if (-9.223372036854778e+18 < dVar14) {
    if (dVar14 < 9.223372036854776e+18) {
      if (param_1 == 0) {
        if (param_2 == 0) {
          lVar6 = 0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          func_0x000107c61534();
          *(undefined8 *)(lVar6 + 0x18) = 2;
          *(undefined8 *)(lVar6 + 0x10) = 1;
          uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          func_0x000107c5faec();
          *(undefined8 *)(lVar6 + 0x20) = uVar7;
          puVar4 = PTR___sSSN_11034da80;
          *(undefined **)(lVar6 + 0x48) = PTR___sSSN_11034da80;
          *(undefined1 **)(lVar6 + 0x28) = puVar11;
          *(undefined8 *)(lVar6 + 0x30) = 0xd00000000000001f;
          *(undefined8 *)(lVar6 + 0x38) = 0x800000010f179d00;
          lVar8 = lVar6;
          func_0x000100214a84(lVar6);
          func_0x000107c61588(lVar6);
          func_0x000100f15a0c((undefined8 *)(lVar6 + 0x20));
          puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c5fadc(lVar10,uVar2);
          func_0x000107c5f9dc(lVar8,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
          func_0x000107c6142c(lVar8);
          func_0x000107c466bc(puVar9);
        }
        else {
          func_0x000107c614b0(param_2);
          lVar10 = param_2;
          func_0x000107c5ed2c(param_2);
          func_0x000107c614ac(param_2);
          func_0x000107c3fef8(uVar7);
        }
      }
      else {
        uVar13 = *(undefined8 *)(param_1 + _DAT_112fb4800);
        uVar2 = *(undefined8 *)(param_1 + _DAT_112fb4808);
        uVar1 = ((undefined8 *)(param_1 + _DAT_112fb4808))[1];
        func_0x0001043f8630(0);
        func_0x000107c610f8();
        func_0x000107c61174(param_1);
        func_0x000107c61174(uVar13);
        func_0x000107c61434(uVar1);
        func_0x00010006c00c(uVar3,uVar12);
        func_0x0001043f7db8(uVar13,uVar2,uVar1,uVar3,uVar12);
        func_0x000107c3fefc(uVar7);
        lVar10 = param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar10);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10393e80c);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10393e808);
  (*pcVar5)();
}



/* Entry: 10393e8b4; end: 10393e9a7; -[_TtC16SCTilePickerFlow25FramePickerConfirmHandler confirmFrameWithTimestampMs:editedSnapDoc:baseFrameImage:] */

/* WARNING: Possible PIC construction at 0x00010393e910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010393e954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010393e970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010393e958) */
/* WARNING: Removing unreachable block (ram,0x00010393e914) */
/* WARNING: Removing unreachable block (ram,0x00010393e978) */
/* WARNING: Removing unreachable block (ram,0x00010393e928) */
/* WARNING: Removing unreachable block (ram,0x00010393e974) */
/* WARNING: Removing unreachable block (ram,0x00010393e98c) */

void FUN_10393e8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10393e9a8; end: 10393ea07; -[_TtC16SCTilePickerFlow25FramePickerConfirmHandler init] */

void FUN_10393e9a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTilePickerFlow.FramePickerConfirmHandler",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10393e9d4);
  (*pcVar1)();
}



/* Entry: 10393ea08; end: 10393ea17; -[_TtC16SCTilePickerFlow25FramePickerConfirmHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10393ea08(long param_1)

{
  param_1 = param_1 + _DAT_112fb4838;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10393ea18; end: 10393ea37;  */

void FUN_10393ea18(void)

{
  func_0x000107c61168(&PTR_PTR_112903f88);
  return;
}



/* Entry: 10393ea38; end: 10393ea5b;  */

undefined8 FUN_10393ea38(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10393ea5c; end: 10393ec2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10393ea5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb4868) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fb4870) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4878) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4880) = param_1;
  func_0x000107c61174(param_1);
  uVar1 = param_2;
  func_0x000107c42d48();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112fb4888) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4890) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4898) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar2;
}


