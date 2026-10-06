/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037f9054; end: 1037f90a7;  */

void FUN_1037f9054(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f90a8; end: 1037f92bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037f90a8(void)

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
    func_0x000107c40c08();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037f7330();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f9b7c0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f9bb50);
      *(long *)(unaff_x20 + _DAT_112f9bb50) = lVar4;
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
                      "CreateUserNavigationScopeGraphBridge/SCSCSmartReplyServicesSaberServiceProvider.swift"
                      ,0x55,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f91d4);
  (*pcVar1)();
}



/* Entry: 1037f92bc; end: 1037f92ef; -[SCSCSmartReplyServicesSaberServiceProvider provide] */

void FUN_1037f92bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037f90a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f92f0; end: 1037f9323; -[SCSCSmartReplyServicesSaberServiceProvider __safeProvide] */

void FUN_1037f92f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037f91d4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f9324; end: 1037f9367; -[SCSCSmartReplyServicesSaberServiceProvider end] */

void FUN_1037f9324(undefined8 param_1)

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



/* Entry: 1037f9368; end: 1037f94ff;  */

void FUN_1037f9368(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e93b10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f16c4f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreateUserNavigationScopeGraphBridge/SCSCSmartReplyServicesSaberServiceProvider.swift"
                            ,0x55,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f9500);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53a98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037f9500; end: 1037f95ab; -[SCSCSmartReplyServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037f9500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037f9368(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037f95ac; end: 1037f961f; -[SCSCSmartReplyServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f95ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f9bb40,0);
  func_0x000107c61614(param_1 + _DAT_112f9bb48,0);
  *(undefined8 *)(param_1 + _DAT_112f9bb50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037f9620; end: 1037f9653;  */

void FUN_1037f9620(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037f9654; end: 1037f969b; -[SCSCSmartReplyServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f9654(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f9bb40);
  func_0x000107c61610(param_1 + _DAT_112f9bb48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9bb50));
  return;
}



/* Entry: 1037f969c; end: 1037f96bb;  */

void FUN_1037f969c(void)

{
  func_0x000107c61168(&PTR_PTR_112f9bb98);
  return;
}



/* Entry: 1037f96bc; end: 1037f96c7; -[SCSCSnapKitDeeplinkingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f96bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9bc00;
  func_0x000107c61428(param_1 + _DAT_112f9bc00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037f96c8; end: 1037f96d3; -[SCSCSnapKitDeeplinkingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f96c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9bc00;
  func_0x000107c61428(param_1 + _DAT_112f9bc00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f96d4; end: 1037f96df; -[SCSCSnapKitDeeplinkingServicesSaberServiceProvider createUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f96d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9bc08;
  func_0x000107c61428(param_1 + _DAT_112f9bc08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037f96e0; end: 1037f9723;  */

void FUN_1037f96e0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037f9724; end: 1037f972f; -[SCSCSnapKitDeeplinkingServicesSaberServiceProvider setCreateUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f9724(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9bc08;
  func_0x000107c61428(param_1 + _DAT_112f9bc08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f9730; end: 1037f9783;  */

void FUN_1037f9730(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f9784; end: 1037f9997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037f9784(void)

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
    func_0x000107c40c08();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037f745c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f9b7c8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f9bc10);
      *(long *)(unaff_x20 + _DAT_112f9bc10) = lVar4;
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
                      "CreateUserNavigationScopeGraphBridge/SCSCSnapKitDeeplinkingServicesSaberServiceProvider.swift"
                      ,0x5d,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f98b0);
  (*pcVar1)();
}



/* Entry: 1037f9998; end: 1037f99cb; -[SCSCSnapKitDeeplinkingServicesSaberServiceProvider provide] */

void FUN_1037f9998(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037f9784();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f99cc; end: 1037f99ff; -[SCSCSnapKitDeeplinkingServicesSaberServiceProvider __safeProvide] */

void FUN_1037f99cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037f98b0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f9a00; end: 1037f9a43; -[SCSCSnapKitDeeplinkingServicesSaberServiceProvider end] */

void FUN_1037f9a00(undefined8 param_1)

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



/* Entry: 1037f9a44; end: 1037f9bdb;  */

void FUN_1037f9a44(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e93b10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f16c4f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreateUserNavigationScopeGraphBridge/SCSCSnapKitDeeplinkingServicesSaberServiceProvider.swift"
                            ,0x5d,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f9bdc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53a98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037f9bdc; end: 1037f9c87; -[SCSCSnapKitDeeplinkingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037f9bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037f9a44(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037f9c88; end: 1037f9cfb; -[SCSCSnapKitDeeplinkingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f9c88(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f9bc00,0);
  func_0x000107c61614(param_1 + _DAT_112f9bc08,0);
  *(undefined8 *)(param_1 + _DAT_112f9bc10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037f9cfc; end: 1037f9d2f;  */

void FUN_1037f9cfc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037f9d30; end: 1037f9d77; -[SCSCSnapKitDeeplinkingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f9d30(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f9bc00);
  func_0x000107c61610(param_1 + _DAT_112f9bc08);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9bc10));
  return;
}



/* Entry: 1037f9d78; end: 1037f9d97;  */

void FUN_1037f9d78(void)

{
  func_0x000107c61168(&PTR_PTR_112f9bc58);
  return;
}



/* Entry: 1037f9d98; end: 1037f9da3; -[SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f9d98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9bcc0;
  func_0x000107c61428(param_1 + _DAT_112f9bcc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037f9da4; end: 1037f9daf; -[SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f9da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9bcc0;
  func_0x000107c61428(param_1 + _DAT_112f9bcc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f9db0; end: 1037f9dbb; -[SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider createUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f9db0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9bcc8;
  func_0x000107c61428(param_1 + _DAT_112f9bcc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037f9dbc; end: 1037f9dff;  */

void FUN_1037f9dbc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037f9e00; end: 1037f9e0b; -[SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider setCreateUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f9e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9bcc8;
  func_0x000107c61428(param_1 + _DAT_112f9bcc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f9e0c; end: 1037f9e5f;  */

void FUN_1037f9e0c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f9e60; end: 1037fa073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037f9e60(void)

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
    func_0x000107c40c08();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037f7588();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f9b7d0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f9bcd0);
      *(long *)(unaff_x20 + _DAT_112f9bcd0) = lVar4;
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
                      "CreateUserNavigationScopeGraphBridge/SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider.swift"
                      ,0x68,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f9f8c);
  (*pcVar1)();
}



/* Entry: 1037fa074; end: 1037fa0a7; -[SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider provide] */

void FUN_1037fa074(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037f9e60();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037fa0a8; end: 1037fa0db; -[SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider __safeProvide] */

void FUN_1037fa0a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037f9f8c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037fa0dc; end: 1037fa11f; -[SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider end] */

void FUN_1037fa0dc(undefined8 param_1)

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



/* Entry: 1037fa120; end: 1037fa2b7;  */

void FUN_1037fa120(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e93b10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f16c4f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreateUserNavigationScopeGraphBridge/SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider.swift"
                            ,0x68,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037fa2b8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53a98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037fa2b8; end: 1037fa363; -[SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037fa2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037fa120(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037fa364; end: 1037fa3d7; -[SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fa364(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f9bcc0,0);
  func_0x000107c61614(param_1 + _DAT_112f9bcc8,0);
  *(undefined8 *)(param_1 + _DAT_112f9bcd0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037fa3d8; end: 1037fa40b;  */

void FUN_1037fa3d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037fa40c; end: 1037fa453; -[SCSCStickerQuickReplyDataProviderServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fa40c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f9bcc0);
  func_0x000107c61610(param_1 + _DAT_112f9bcc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9bcd0));
  return;
}



/* Entry: 1037fa454; end: 1037fa473;  */

void FUN_1037fa454(void)

{
  func_0x000107c61168(&PTR_PTR_112f9bd18);
  return;
}



/* Entry: 1037fa474; end: 1037fa483; -[CreateStickerSpotlightOperaPluginServices pluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fa474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f9bd80));
  return;
}



/* Entry: 1037fa484; end: 1037fa4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fa484(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f9bd80) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037fa4d0; end: 1037fa527; -[CreateStickerSpotlightOperaPluginServices initWithPluginProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fa4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f9bd80) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1037fa528; end: 1037fa587; -[CreateStickerSpotlightOperaPluginServices init] */

void FUN_1037fa528(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreateStickerSpotlightOperaPluginServices.CreateStickerSpotlightOperaPluginServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037fa554);
  (*pcVar1)();
}



/* Entry: 1037fa588; end: 1037fa597; -[CreateStickerSpotlightOperaPluginServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fa588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9bd80));
  return;
}



/* Entry: 1037fa598; end: 1037fa61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037fa598(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100ad1008();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f9bdb0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f9bdb8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037fa620);
  (*pcVar1)();
}



/* Entry: 1037fa620; end: 1037fa67f; -[_TtC38CreatorsUserNavigationScopeGraphBridge53CreatorsUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037fa620(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsUserNavigationScopeGraphBridge.CreatorsUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037fa64c);
  (*pcVar1)();
}



/* Entry: 1037fa680; end: 1037fa6b7; -[_TtC38CreatorsUserNavigationScopeGraphBridge53CreatorsUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037fa69c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037fa6a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fa680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9bdb0));
  return;
}



/* Entry: 1037fa6b8; end: 1037fa6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fa6b8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f9bdb8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f9bdb0));
  return;
}



/* Entry: 1037fa6e0; end: 1037fa77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037fa6e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f9c330);
  *(undefined8 *)(unaff_x20 + _DAT_112f9bde8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f9bdf0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1037fa77c; end: 1037fa7db; -[_TtC38CreatorsUserNavigationScopeGraphBridge37SCImpalaLegacyServicesSaberEntryPoint init] */

void FUN_1037fa77c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsUserNavigationScopeGraphBridge.SCImpalaLegacyServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037fa7a8);
  (*pcVar1)();
}



/* Entry: 1037fa7dc; end: 1037fa86f; -[_TtC38CreatorsUserNavigationScopeGraphBridge37SCImpalaLegacyServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fa7dc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f9bde8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9bdf0));
  return;
}



/* Entry: 1037fa870; end: 1037fa877;  */

undefined8 FUN_1037fa870(void)

{
  return 0;
}



/* Entry: 1037fa878; end: 1037fa8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037fa878(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f9c310);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037fa8dc; end: 1037fa8e3;  */

void FUN_1037fa8dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037fa8e4; end: 1037fa983;  */

void FUN_1037fa8e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037fa984; end: 1037fa9a3;  */

void FUN_1037fa984(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037fa9a4; end: 1037faa07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037fa9a4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f9c318);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037faa08; end: 1037faa0f;  */

void FUN_1037faa08(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037faa10; end: 1037faaaf;  */

void FUN_1037faa10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037faab0; end: 1037faacf;  */

void FUN_1037faab0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037faad0; end: 1037fab33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037faad0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f9c320);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037fab34; end: 1037fab3b;  */

void FUN_1037fab34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037fab3c; end: 1037fabdb;  */

void FUN_1037fab3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037fabdc; end: 1037fabfb;  */

void FUN_1037fabdc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037fabfc; end: 1037fac5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037fabfc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f9c328);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037fac60; end: 1037fac67;  */

void FUN_1037fac60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037fac68; end: 1037fad07;  */

void FUN_1037fac68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037fad08; end: 1037fad27;  */

void FUN_1037fad08(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037fad28; end: 1037fad8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037fad28(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f9c338);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037fad8c; end: 1037fad93;  */

void FUN_1037fad8c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037fad94; end: 1037fae33;  */

void FUN_1037fad94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037fae34; end: 1037fae53;  */

void FUN_1037fae34(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037fae54; end: 1037faeb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037fae54(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f9c340);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037faeb8; end: 1037faebf;  */

void FUN_1037faeb8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037faec0; end: 1037faf5f;  */

void FUN_1037faec0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037faf60; end: 1037faf7f;  */

void FUN_1037faf60(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037faf80; end: 1037fb043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037faf80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f9c310) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f9c318) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f9c320) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f9c328) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f9c330) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f9c338) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f9c340) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037fb044; end: 1037fb0a3; -[_TtC38CreatorsUserNavigationScopeGraphBridge46CreatorsUserNavigationScopeGraphBridgeServices init] */

void FUN_1037fb044(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsUserNavigationScopeGraphBridge.CreatorsUserNavigationScopeGraphBridgeServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037fb070);
  (*pcVar1)();
}



/* Entry: 1037fb0a4; end: 1037fb187; -[_TtC38CreatorsUserNavigationScopeGraphBridge46CreatorsUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037fb0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037fb0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037fb100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037fb0e4) */
/* WARNING: Removing unreachable block (ram,0x0001037fb0c4) */
/* WARNING: Removing unreachable block (ram,0x0001037fb104) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fb0a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9c330));
  return;
}



/* Entry: 1037fb188; end: 1037fb1bf;  */

undefined1  [16] FUN_1037fb188(void)

{
  return ZEXT816(0x110698610);
}



/* Entry: 1037fb1c0; end: 1037fb203; -[SCCreatorsUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_1037fb1c0(undefined8 param_1)

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



/* Entry: 1037fb204; end: 1037fb237;  */

void FUN_1037fb204(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037fb238; end: 1037fb27f; -[SCCreatorsUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037fb264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037fb268) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fb238(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f9c398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9c3a0));
  return;
}



/* Entry: 1037fb280; end: 1037fb29f;  */

void FUN_1037fb280(void)

{
  func_0x000107c61168(&PTR_PTR_1128f09f0);
  return;
}



/* Entry: 1037fb2a0; end: 1037fb2e3; -[SCSCImpalaLegacyServicesSaberEntryPoint end] */

void FUN_1037fb2a0(undefined8 param_1)

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



/* Entry: 1037fb2e4; end: 1037fb317;  */

void FUN_1037fb2e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037fb318; end: 1037fb36f; -[SCSCImpalaLegacyServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037fb354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037fb358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fb318(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f9c3d8);
  func_0x000107c61610(param_1 + _DAT_112f9c3e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9c3e8));
  return;
}



/* Entry: 1037fb370; end: 1037fb38f;  */

void FUN_1037fb370(void)

{
  func_0x000107c61168(&PTR_PTR_1128f0ab8);
  return;
}



/* Entry: 1037fb390; end: 1037fb39b; -[SCPublicProfileAndUserDataServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fb390(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9c420;
  func_0x000107c61428(param_1 + _DAT_112f9c420,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037fb39c; end: 1037fb3a7; -[SCPublicProfileAndUserDataServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fb39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9c420;
  func_0x000107c61428(param_1 + _DAT_112f9c420,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037fb3a8; end: 1037fb3b3; -[SCPublicProfileAndUserDataServicesSaberServiceProvider creatorsUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fb3a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9c428;
  func_0x000107c61428(param_1 + _DAT_112f9c428,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037fb3b4; end: 1037fb3f7;  */

void FUN_1037fb3b4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037fb3f8; end: 1037fb403; -[SCPublicProfileAndUserDataServicesSaberServiceProvider setCreatorsUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037fb3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9c428;
  func_0x000107c61428(param_1 + _DAT_112f9c428,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037fb404; end: 1037fb457;  */

void FUN_1037fb404(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037fb458; end: 1037fb66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037fb458(void)

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
    func_0x000107c40d5c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037fa908();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f9c310);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f9c430);
      *(long *)(unaff_x20 + _DAT_112f9c430) = lVar4;
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
                      "CreatorsUserNavigationScopeGraphBridge/SCPublicProfileAndUserDataServicesSaberServiceProvider.swift"
                      ,99,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037fb584);
  (*pcVar1)();
}



/* Entry: 1037fb66c; end: 1037fb69f; -[SCPublicProfileAndUserDataServicesSaberServiceProvider provide] */

void FUN_1037fb66c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037fb458();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


