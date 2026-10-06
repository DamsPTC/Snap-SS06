/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a91e20; end: 103a91e67; -[SCProfileActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a91e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a91e50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a91e20(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fde758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fde760));
  return;
}



/* Entry: 103a91e68; end: 103a91e87;  */

void FUN_103a91e68(void)

{
  func_0x000107c61168(&PTR_PTR_11291d1b8);
  return;
}



/* Entry: 103a91e88; end: 103a91e93; -[SCMyProfile3DispatcherHostingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a91e88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde798;
  func_0x000107c61428(param_1 + _DAT_112fde798,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a91e94; end: 103a91e9f; -[SCMyProfile3DispatcherHostingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a91e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde798;
  func_0x000107c61428(param_1 + _DAT_112fde798,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a91ea0; end: 103a91eab; -[SCMyProfile3DispatcherHostingServicesSaberServiceProvider profileActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a91ea0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde7a0;
  func_0x000107c61428(param_1 + _DAT_112fde7a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a91eac; end: 103a91eef;  */

void FUN_103a91eac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a91ef0; end: 103a91efb; -[SCMyProfile3DispatcherHostingServicesSaberServiceProvider setProfileActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a91ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde7a0;
  func_0x000107c61428(param_1 + _DAT_112fde7a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a91efc; end: 103a91f4f;  */

void FUN_103a91efc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a91f50; end: 103a92163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a91f50(void)

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
    func_0x000107c4f34c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a91a50();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fde6f8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fde7a8);
      *(long *)(unaff_x20 + _DAT_112fde7a8) = lVar4;
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
                      "ProfileActiveUserSessionScopeGraphBridge/SCMyProfile3DispatcherHostingServicesSaberServiceProvider.swift"
                      ,0x68,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a9207c);
  (*pcVar1)();
}



/* Entry: 103a92164; end: 103a92197; -[SCMyProfile3DispatcherHostingServicesSaberServiceProvider provide] */

void FUN_103a92164(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a91f50();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a92198; end: 103a921cb; -[SCMyProfile3DispatcherHostingServicesSaberServiceProvider __safeProvide] */

void FUN_103a92198(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a9207c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a921cc; end: 103a9220f; -[SCMyProfile3DispatcherHostingServicesSaberServiceProvider end] */

void FUN_103a921cc(undefined8 param_1)

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



/* Entry: 103a92210; end: 103a923a7;  */

void FUN_103a92210(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e6b5c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f194a40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ProfileActiveUserSessionScopeGraphBridge/SCMyProfile3DispatcherHostingServicesSaberServiceProvider.swift"
                            ,0x68,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a923a8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c578b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a923a8; end: 103a92453; -[SCMyProfile3DispatcherHostingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a923a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a92210(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a92454; end: 103a924c7; -[SCMyProfile3DispatcherHostingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a92454(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fde798,0);
  func_0x000107c61614(param_1 + _DAT_112fde7a0,0);
  *(undefined8 *)(param_1 + _DAT_112fde7a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a924c8; end: 103a924fb;  */

void FUN_103a924c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a924fc; end: 103a92543; -[SCMyProfile3DispatcherHostingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a924fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fde798);
  func_0x000107c61610(param_1 + _DAT_112fde7a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fde7a8));
  return;
}



/* Entry: 103a92544; end: 103a92563;  */

void FUN_103a92544(void)

{
  func_0x000107c61168(&PTR_PTR_112fde7f0);
  return;
}



/* Entry: 103a92564; end: 103a9256f; -[SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a92564(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde858;
  func_0x000107c61428(param_1 + _DAT_112fde858,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a92570; end: 103a9257b; -[SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a92570(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde858;
  func_0x000107c61428(param_1 + _DAT_112fde858,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a9257c; end: 103a92587; -[SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider profileActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a9257c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde860;
  func_0x000107c61428(param_1 + _DAT_112fde860,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a92588; end: 103a925cb;  */

void FUN_103a92588(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a925cc; end: 103a925d7; -[SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider setProfileActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a925cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde860;
  func_0x000107c61428(param_1 + _DAT_112fde860,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a925d8; end: 103a9262b;  */

void FUN_103a925d8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a9262c; end: 103a9283f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a9262c(void)

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
    func_0x000107c4f34c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a91b7c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fde700);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fde868);
      *(long *)(unaff_x20 + _DAT_112fde868) = lVar4;
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
                      "ProfileActiveUserSessionScopeGraphBridge/SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider.swift"
                      ,0x73,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a92758);
  (*pcVar1)();
}



/* Entry: 103a92840; end: 103a92873; -[SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider provide] */

void FUN_103a92840(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a9262c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a92874; end: 103a928a7; -[SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider __safeProvide] */

void FUN_103a92874(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a92758();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a928a8; end: 103a928eb; -[SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider end] */

void FUN_103a928a8(undefined8 param_1)

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



/* Entry: 103a928ec; end: 103a92a83;  */

void FUN_103a928ec(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e6b5c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f194a40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ProfileActiveUserSessionScopeGraphBridge/SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider.swift"
                            ,0x73,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a92a84);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c578b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a92a84; end: 103a92b2f; -[SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a92a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a928ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a92b30; end: 103a92ba3; -[SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a92b30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fde858,0);
  func_0x000107c61614(param_1 + _DAT_112fde860,0);
  *(undefined8 *)(param_1 + _DAT_112fde868) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a92ba4; end: 103a92bd7;  */

void FUN_103a92ba4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a92bd8; end: 103a92c1f; -[SCSCProfileNowPlayingPillContextProviderServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a92bd8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fde858);
  func_0x000107c61610(param_1 + _DAT_112fde860);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fde868));
  return;
}



/* Entry: 103a92c20; end: 103a92c3f;  */

void FUN_103a92c20(void)

{
  func_0x000107c61168(&PTR_PTR_112fde8b0);
  return;
}



/* Entry: 103a92c40; end: 103a92ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a92c40(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  func_0x0001002d2970();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112fde920) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 103a92ca8; end: 103a92d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a92ca8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fde920) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a92d2c; end: 103a92d9f; -[_TtC46SCProfileNowPlayingPillContextProviderServices46SCProfileNowPlayingPillContextProviderServices nowPlayingPillContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a92d2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a92da0; end: 103a92dd3;  */

void FUN_103a92da0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a92dd4; end: 103a92de3;  */

undefined1  [16] FUN_103a92dd4(void)

{
  return ZEXT816(0x1106c7ee0);
}



/* Entry: 103a92de4; end: 103a92df3; -[_TtC46SCProfileNowPlayingPillContextProviderServices46SCProfileNowPlayingPillContextProviderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a92de4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fde920));
  return;
}



/* Entry: 103a92df4; end: 103a930ef;  */

/* WARNING: Possible PIC construction at 0x000103a92ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a92fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a93044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a93060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a930c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a93064) */
/* WARNING: Removing unreachable block (ram,0x000103a93048) */
/* WARNING: Removing unreachable block (ram,0x000103a92fa8) */
/* WARNING: Removing unreachable block (ram,0x000103a92ea8) */
/* WARNING: Removing unreachable block (ram,0x000103a92ed8) */
/* WARNING: Removing unreachable block (ram,0x000103a930b4) */
/* WARNING: Removing unreachable block (ram,0x000103a930bc) */
/* WARNING: Removing unreachable block (ram,0x000103a92f38) */
/* WARNING: Removing unreachable block (ram,0x000103a930cc) */

void FUN_103a92df4(undefined8 param_1,long param_2)

{
  func_0x000107c31204();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  func_0x000107c610f8(PTR_PTR_1126afdb8);
  func_0x000107c45510();
  func_0x000107c602fc(0x1f);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 103a930f0; end: 103a932eb;  */

/* WARNING: Possible PIC construction at 0x000103a93294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a93298) */

void FUN_103a930f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  if (param_5 == 0) {
    return;
  }
  puVar2 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  func_0x000107c615f0(param_5);
  uVar3 = param_2;
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c46d50();
  func_0x000107c61170(uVar3);
  if (puVar2 != (undefined *)0x0) {
    func_0x0001000bb420(param_1,&puStack_80);
    puVar4 = &UNK_1106c8050;
    func_0x000107c613fc(&UNK_1106c8050,0x48,7);
    *(long *)(puVar4 + 0x10) = param_5;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    func_0x000100102924(&puStack_80,puVar4 + 0x20);
    *(undefined8 *)(puVar4 + 0x40) = param_4;
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c61174(param_4);
    func_0x000107c615f0(param_5);
    func_0x000107c61174(puVar2);
    func_0x000107c602fc(0x1d);
    func_0x000107c6142c(uStack_78);
    puStack_80 = (undefined *)0xd00000000000001b;
    uStack_78 = 0x800000010f194b80;
    func_0x000107c5fb78(param_2,param_3);
    uVar3 = uStack_78;
    puVar2 = puStack_80;
    uStack_60 = 0x103a93420;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1106c8068;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c5fb28(puVar2,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x0001000d76cc(puVar2 + 0x20,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_5);
  return;
}



/* Entry: 103a932ec; end: 103a9339f;  */

void FUN_103a932ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = lVar1;
  func_0x000107c61440();
  if (lVar2 == 0 || param_1 == 0) {
    func_0x0001006732c8(param_3,*(undefined8 *)(param_3 + 0x18));
    func_0x000107c605b0();
    func_0x000107c445ac(param_1);
    param_1 = param_3;
  }
  else {
    pcVar3 = *(code **)(lVar2 + 8);
    func_0x000107c615f0(param_1);
    (*pcVar3)(param_2,lVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a933a0; end: 103a933cb;  */

void FUN_103a933a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = unaff_x20 + 0x20;
  lVar2 = lVar5;
  func_0x000107c614f0();
  lVar3 = lVar2;
  func_0x000107c61440();
  if (lVar3 == 0 || lVar5 == 0) {
    func_0x0001006732c8(lVar4,*(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c605b0();
    func_0x000107c445ac(lVar5);
    lVar5 = lVar4;
  }
  else {
    pcVar6 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar5);
    (*pcVar6)(uVar1,lVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
  return;
}



/* Entry: 103a933cc; end: 103a93407;  */

void FUN_103a933cc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100183ab8(unaff_x20 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103a93408; end: 103a93423;  */

undefined1  [16] FUN_103a93408(void)

{
  return ZEXT816(0x1106c80a0);
}



/* Entry: 103a93424; end: 103a9352b; -[_TtC15MyProfile3Scope32MyProfile3DispatcherHostRegistry init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93424(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112fde950;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  func_0x000107c61614(param_1 + _DAT_112fde958,0);
  func_0x000107c61614(param_1 + _DAT_112fde960,0);
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a9352c; end: 103a93567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a9352c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10) + _DAT_112fde958;
  func_0x000107c61618();
  *param_1 = lVar1;
  return;
}



/* Entry: 103a93568; end: 103a935c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93568(void)

{
  undefined1 auStack_60 [16];
  undefined1 uStack_31;
  
  func_0x000100087bd4(&uStack_31,FUN_103a93678,auStack_60,PTR___sSbN_11034dd40);
  return;
}



/* Entry: 103a935c8; end: 103a93677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a935c8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  
  lVar1 = _DAT_112fde960;
  lVar3 = param_2 + _DAT_112fde960;
  func_0x000107c61618();
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    func_0x000107c615e8();
    lVar3 = param_2 + lVar1;
    func_0x000107c61618();
    if (lVar3 == 0) {
      bVar2 = true;
    }
    else {
      func_0x000107c615e8();
      bVar2 = lVar3 != param_3;
    }
  }
  func_0x000107c61604(param_2 + _DAT_112fde958,param_4);
  func_0x000107c61604(param_2 + lVar1,param_3);
  *(bool *)param_1 = bVar2;
  return;
}



/* Entry: 103a93678; end: 103a93693;  */

void FUN_103a93678(void)

{
  long unaff_x20;
  
  FUN_103a935c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103a93694; end: 103a936ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93694(void)

{
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + _DAT_112fde950),FUN_103a9376c,auStack_50,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 103a936f0; end: 103a9376b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a936f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_112fde960;
  lVar2 = param_1 + _DAT_112fde960;
  func_0x000107c61618();
  if ((lVar2 != 0) && (func_0x000107c615e8(), lVar2 == param_2)) {
    func_0x000107c61604(param_1 + _DAT_112fde958,0);
    func_0x000107c61604(param_1 + lVar1,0);
  }
  return;
}



/* Entry: 103a9376c; end: 103a93783;  */

void FUN_103a9376c(void)

{
  long unaff_x20;
  
  FUN_103a936f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103a93784; end: 103a9380f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93784(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined1 uStack_31;
  
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fde950);
  func_0x000107c6157c(uVar1);
  func_0x000100087bd4(&uStack_31,FUN_103a9387c,auStack_50,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  func_0x000107c61154(&stack0xffffffffffffff98,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a93810; end: 103a9387b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93810(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  
  lVar1 = param_2 + _DAT_112fde958;
  func_0x000107c61618();
  if (lVar1 == 0) {
    param_2 = param_2 + _DAT_112fde960;
    func_0x000107c61618();
    if (param_2 == 0) {
      uVar2 = 0;
      goto LAB_103a9385c;
    }
  }
  func_0x000107c615e8();
  uVar2 = 1;
LAB_103a9385c:
  *param_1 = uVar2;
  return;
}



/* Entry: 103a9387c; end: 103a93893;  */

void FUN_103a9387c(void)

{
  long unaff_x20;
  
  FUN_103a93810(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a93894; end: 103a93927; -[_TtC15MyProfile3Scope32MyProfile3DispatcherHostRegistry dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93894(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 uStack_31;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fde950);
  lStack_40 = param_1;
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000100087bd4(&uStack_31,FUN_103a93a68,auStack_50,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar2);
  lStack_68 = param_1;
  lStack_60 = lVar1;
  func_0x000107c61154(&lStack_68,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a93928; end: 103a9399b; -[_TtC15MyProfile3Scope32MyProfile3DispatcherHostRegistry .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a93954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a93958) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a93928(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fde950));
  param_1 = param_1 + _DAT_112fde958;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103a9399c; end: 103a939bb;  */

void FUN_103a9399c(void)

{
  func_0x000107c61168(&PTR_PTR_11291d3d0);
  return;
}



/* Entry: 103a939bc; end: 103a93a13; -[_TtC15MyProfile3Scope35MyProfile3DispatcherHostingServices init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a939bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = lVar1;
  FUN_103a9399c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(long *)(param_1 + _DAT_112fde970) = lVar2;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a93a14; end: 103a93a47;  */

void FUN_103a93a14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a93a48; end: 103a93a57;  */

undefined1  [16] FUN_103a93a48(void)

{
  return ZEXT816(0x1106c80c0);
}



/* Entry: 103a93a58; end: 103a93a67; -[_TtC15MyProfile3Scope35MyProfile3DispatcherHostingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fde970));
  return;
}



/* Entry: 103a93a68; end: 103a93a7b;  */

void FUN_103a93a68(void)

{
  FUN_103a9387c();
  return;
}



/* Entry: 103a93a7c; end: 103a93a87; -[_TtC15MyProfile3Scope15MyProfile3Scope deeplinkPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93a7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdea18;
  func_0x000107c61428(param_1 + _DAT_112fdea18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a93a88; end: 103a93a93; -[_TtC15MyProfile3Scope15MyProfile3Scope setDeeplinkPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdea18;
  func_0x000107c61428(param_1 + _DAT_112fdea18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a93a94; end: 103a93a9f; -[_TtC15MyProfile3Scope15MyProfile3Scope hostingNavigationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93a94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdea20;
  func_0x000107c61428(param_1 + _DAT_112fdea20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a93aa0; end: 103a93aab; -[_TtC15MyProfile3Scope15MyProfile3Scope setHostingNavigationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdea20;
  func_0x000107c61428(param_1 + _DAT_112fdea20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a93aac; end: 103a93ab7; -[_TtC15MyProfile3Scope15MyProfile3Scope pageActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93aac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdea28;
  func_0x000107c61428(param_1 + _DAT_112fdea28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a93ab8; end: 103a93afb;  */

void FUN_103a93ab8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a93afc; end: 103a93b07; -[_TtC15MyProfile3Scope15MyProfile3Scope setPageActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a93afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdea28;
  func_0x000107c61428(param_1 + _DAT_112fdea28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a93b08; end: 103a93b5b;  */

void FUN_103a93b08(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a93b5c; end: 103a93dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103a93b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112fde9e0;
  func_0x000107c61614(unaff_x20 + _DAT_112fde9e0,0);
  lVar4 = _DAT_112fde9e8;
  func_0x000107c61614(unaff_x20 + _DAT_112fde9e8,0);
  lVar5 = _DAT_112fdea18;
  func_0x000107c61614(unaff_x20 + _DAT_112fdea18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fdea20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fdea28,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fde9c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fde9d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fde9d8) = param_4;
  func_0x000107c61428(unaff_x20 + lVar4,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_6);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_a8,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_112fde9f0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fde9f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fdea00) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fdea08);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112fdea10) = param_11;
  func_0x000107c61428(unaff_x20 + lVar5,auStack_c0,1,0);
  func_0x000107c61604(unaff_x20 + lVar5,param_12);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  puVar6 = auStack_d0;
  func_0x000107c61154(puVar6,puVar2);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_11);
  func_0x000107c615e8(param_12);
  return puVar6;
}



/* Entry: 103a93dd0; end: 103a93f2f; -[_TtC15MyProfile3Scope15MyProfile3Scope initWithAttachedUIContainer:containerViewController:deckContainerFactory:delegate:deckContainerObserver:profileV2ContentProvider:pageOpenTimeMs:initialOnCreateOptionRawValue:sourceSessionId:deeplinkPayload:deeplinkPerformer:] */

undefined8
FUN_103a93dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  
  if (param_11 == 0) {
    uStack_80 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_80 = param_11;
  }
  func_0x000107c615f0(param_4);
  uVar1 = param_5;
  func_0x000107c61174();
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  uVar2 = param_10;
  func_0x000107c61174();
  uVar3 = param_12;
  func_0x000107c61174();
  func_0x000107c615f0(param_13);
  uVar4 = param_4;
  FUN_103a9406c(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,uStack_80,param_3,
                param_12,param_13);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(param_13);
  return uVar4;
}



/* Entry: 103a93f30; end: 103a93f8f; -[_TtC15MyProfile3Scope15MyProfile3Scope init] */

void FUN_103a93f30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfile3Scope.MyProfile3Scope",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a93f5c);
  (*pcVar1)();
}



/* Entry: 103a93f90; end: 103a9406b; -[_TtC15MyProfile3Scope15MyProfile3Scope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a93fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a94040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a93fe0) */
/* WARNING: Removing unreachable block (ram,0x000103a94044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a93f90(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fde9c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fde9d0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fde9d8));
  param_1 = param_1 + _DAT_112fde9e0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103a9406c; end: 103a9426f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a9406c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112fde9e0;
  func_0x000107c61614(unaff_x20 + _DAT_112fde9e0,0);
  lVar4 = _DAT_112fde9e8;
  func_0x000107c61614(unaff_x20 + _DAT_112fde9e8,0);
  lVar5 = _DAT_112fdea18;
  func_0x000107c61614(unaff_x20 + _DAT_112fdea18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fdea20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fdea28,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fde9c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fde9d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fde9d8) = param_4;
  func_0x000107c61428(unaff_x20 + lVar4,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_6);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_a8,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_112fde9f0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fde9f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fdea00) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fdea08);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112fdea10) = param_11;
  func_0x000107c61428(unaff_x20 + lVar5,auStack_c0,1,0);
  func_0x000107c61604(unaff_x20 + lVar5,param_12);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  func_0x000107c61154(&stack0xffffffffffffff30,puVar2);
  return;
}



/* Entry: 103a94270; end: 103a9428f;  */

void FUN_103a94270(void)

{
  func_0x000107c61168(&PTR_PTR_11291d550);
  return;
}



/* Entry: 103a94290; end: 103a94327;  */

long FUN_103a94290(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  return unaff_x20;
}



/* Entry: 103a94328; end: 103a94377;  */

undefined1 FUN_103a94328(void)

{
  undefined1 uStack_31;
  
  func_0x000100087bd4(&uStack_31,FUN_103a94378);
  return uStack_31;
}



/* Entry: 103a94378; end: 103a94397;  */

void FUN_103a94378(undefined1 *param_1)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x18) & 1) != 0) {
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *param_1 = 1;
  return;
}



/* Entry: 103a94398; end: 103a943e3;  */

void FUN_103a94398(void)

{
  func_0x000100087bd4(FUN_103a943e4);
  return;
}



/* Entry: 103a943e4; end: 103a943f7;  */

void FUN_103a943e4(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 103a943f8; end: 103a9446f;  */

void FUN_103a943f8(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 uStack_31;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x000100087bd4(&uStack_31,0x103a94490);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6145c();
  return;
}



/* Entry: 103a94470; end: 103a944a3;  */

void FUN_103a94470(void)

{
  func_0x000107c61168(&PTR_PTR_112fdea98);
  return;
}



/* Entry: 103a944a4; end: 103a944eb; -[SCProfile3BridgeWiring actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a944a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdeb00;
  func_0x000107c61428(param_1 + _DAT_112fdeb00,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a944ec; end: 103a9454f; -[SCProfile3BridgeWiring setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a944ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdeb00;
  func_0x000107c61428(param_1 + _DAT_112fdeb00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103a94550; end: 103a94597; -[SCProfile3BridgeWiring eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94550(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdeb08;
  func_0x000107c61428(param_1 + _DAT_112fdeb08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103a94598; end: 103a945fb; -[SCProfile3BridgeWiring setEventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94598(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdeb08;
  func_0x000107c61428(param_1 + _DAT_112fdeb08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103a945fc; end: 103a94643; -[SCProfile3BridgeWiring visibilityObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a945fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdeb10;
  func_0x000107c61428(param_1 + _DAT_112fdeb10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103a94644; end: 103a946a7; -[SCProfile3BridgeWiring setVisibilityObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94644(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdeb10;
  func_0x000107c61428(param_1 + _DAT_112fdeb10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103a946a8; end: 103a946bb; -[SCProfile3BridgeWiring sectionOrderRefreshRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a946a8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112fdeb18);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1106c81d8;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103a946bc; end: 103a94777; -[SCProfile3BridgeWiring setSectionOrderRefreshRequested:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a946bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1106c81c0;
    func_0x000107c613fc(&UNK_1106c81c0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x103a94b54;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112fdeb18);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103a94778; end: 103a9478b; -[SCProfile3BridgeWiring forceFullReapplyRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94778(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112fdeb20);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1106c8188;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103a9478c; end: 103a94833;  */

void FUN_103a9478c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + *param_3);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    ppuVar3 = &puStack_78;
    uStack_60 = param_4;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103a94834; end: 103a948ef; -[SCProfile3BridgeWiring setForceFullReapplyRequested:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94834(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1106c8170;
    func_0x000107c613fc(&UNK_1106c8170,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_103a94b24;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112fdeb20);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103a948f0; end: 103a94983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a948f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fdeb18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fdeb20);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fdeb00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fdeb08) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fdeb10) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a94984; end: 103a94a33; -[SCProfile3BridgeWiring initWithActionHandler:eventAnnouncer:visibilityObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fdeb18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fdeb20);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112fdeb00) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fdeb08) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fdeb10) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 103a94a34; end: 103a94a93; -[SCProfile3BridgeWiring init] */

void FUN_103a94a34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfile3V2ContentProvidingAPI.SCProfile3BridgeWiring",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a94a60);
  (*pcVar1)();
}


