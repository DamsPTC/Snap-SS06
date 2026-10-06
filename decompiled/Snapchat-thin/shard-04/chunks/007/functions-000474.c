/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037f4028; end: 1037f406b;  */

void FUN_1037f4028(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037f406c; end: 1037f4077; -[SCSCRemixChatWallpaperServicesSaberServiceProvider setConvoUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f406c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9ad48;
  func_0x000107c61428(param_1 + _DAT_112f9ad48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f4078; end: 1037f40cb;  */

void FUN_1037f4078(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f40cc; end: 1037f42df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037f40cc(void)

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
    func_0x000107c40760();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037ef480();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f9a518);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f9ad50);
      *(long *)(unaff_x20 + _DAT_112f9ad50) = lVar4;
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
                      "ConvoUserNavigationScopeGraphBridge/SCSCRemixChatWallpaperServicesSaberServiceProvider.swift"
                      ,0x5c,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f41f8);
  (*pcVar1)();
}



/* Entry: 1037f42e0; end: 1037f4313; -[SCSCRemixChatWallpaperServicesSaberServiceProvider provide] */

void FUN_1037f42e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037f40cc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f4314; end: 1037f4347; -[SCSCRemixChatWallpaperServicesSaberServiceProvider __safeProvide] */

void FUN_1037f4314(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037f41f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f4348; end: 1037f438b; -[SCSCRemixChatWallpaperServicesSaberServiceProvider end] */

void FUN_1037f4348(undefined8 param_1)

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



/* Entry: 1037f438c; end: 1037f4523;  */

void FUN_1037f438c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e94550)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f16bab0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ConvoUserNavigationScopeGraphBridge/SCSCRemixChatWallpaperServicesSaberServiceProvider.swift"
                            ,0x5c,2,0x3d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f4524);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5399c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037f4524; end: 1037f45cf; -[SCSCRemixChatWallpaperServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037f4524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037f438c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037f45d0; end: 1037f4643; -[SCSCRemixChatWallpaperServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f45d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f9ad40,0);
  func_0x000107c61614(param_1 + _DAT_112f9ad48,0);
  *(undefined8 *)(param_1 + _DAT_112f9ad50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037f4644; end: 1037f4677;  */

void FUN_1037f4644(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037f4678; end: 1037f46bf; -[SCSCRemixChatWallpaperServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f4678(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f9ad40);
  func_0x000107c61610(param_1 + _DAT_112f9ad48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9ad50));
  return;
}



/* Entry: 1037f46c0; end: 1037f46df;  */

void FUN_1037f46c0(void)

{
  func_0x000107c61168(&PTR_PTR_112f9ad98);
  return;
}



/* Entry: 1037f46e0; end: 1037f46eb; -[SCSCSendFlowScopeBuilderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f46e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9ae00;
  func_0x000107c61428(param_1 + _DAT_112f9ae00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037f46ec; end: 1037f46f7; -[SCSCSendFlowScopeBuilderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f46ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9ae00;
  func_0x000107c61428(param_1 + _DAT_112f9ae00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f46f8; end: 1037f4703; -[SCSCSendFlowScopeBuilderServicesSaberServiceProvider convoUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f46f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9ae08;
  func_0x000107c61428(param_1 + _DAT_112f9ae08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037f4704; end: 1037f4747;  */

void FUN_1037f4704(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037f4748; end: 1037f4753; -[SCSCSendFlowScopeBuilderServicesSaberServiceProvider setConvoUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f4748(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9ae08;
  func_0x000107c61428(param_1 + _DAT_112f9ae08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f4754; end: 1037f47a7;  */

void FUN_1037f4754(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f47a8; end: 1037f49bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037f47a8(void)

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
    func_0x000107c40760();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037ef5ac();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f9a520);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f9ae10);
      *(long *)(unaff_x20 + _DAT_112f9ae10) = lVar4;
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
                      "ConvoUserNavigationScopeGraphBridge/SCSCSendFlowScopeBuilderServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f48d4);
  (*pcVar1)();
}



/* Entry: 1037f49bc; end: 1037f49ef; -[SCSCSendFlowScopeBuilderServicesSaberServiceProvider provide] */

void FUN_1037f49bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037f47a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f49f0; end: 1037f4a23; -[SCSCSendFlowScopeBuilderServicesSaberServiceProvider __safeProvide] */

void FUN_1037f49f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037f48d4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f4a24; end: 1037f4a67; -[SCSCSendFlowScopeBuilderServicesSaberServiceProvider end] */

void FUN_1037f4a24(undefined8 param_1)

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



/* Entry: 1037f4a68; end: 1037f4bff;  */

void FUN_1037f4a68(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e94550)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f16bab0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ConvoUserNavigationScopeGraphBridge/SCSCSendFlowScopeBuilderServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x3d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f4c00);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5399c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037f4c00; end: 1037f4cab; -[SCSCSendFlowScopeBuilderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037f4c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037f4a68(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037f4cac; end: 1037f4d1f; -[SCSCSendFlowScopeBuilderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f4cac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f9ae00,0);
  func_0x000107c61614(param_1 + _DAT_112f9ae08,0);
  *(undefined8 *)(param_1 + _DAT_112f9ae10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037f4d20; end: 1037f4d53;  */

void FUN_1037f4d20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037f4d54; end: 1037f4d9b; -[SCSCSendFlowScopeBuilderServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f4d54(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f9ae00);
  func_0x000107c61610(param_1 + _DAT_112f9ae08);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9ae10));
  return;
}



/* Entry: 1037f4d9c; end: 1037f4dbb;  */

void FUN_1037f4d9c(void)

{
  func_0x000107c61168(&PTR_PTR_112f9ae58);
  return;
}



/* Entry: 1037f4dbc; end: 1037f4dc7; -[SCSCSnapchatterSendingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f4dbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9aec0;
  func_0x000107c61428(param_1 + _DAT_112f9aec0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037f4dc8; end: 1037f4dd3; -[SCSCSnapchatterSendingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f4dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9aec0;
  func_0x000107c61428(param_1 + _DAT_112f9aec0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f4dd4; end: 1037f4ddf; -[SCSCSnapchatterSendingServicesSaberServiceProvider convoUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f4dd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9aec8;
  func_0x000107c61428(param_1 + _DAT_112f9aec8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037f4de0; end: 1037f4e23;  */

void FUN_1037f4de0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037f4e24; end: 1037f4e2f; -[SCSCSnapchatterSendingServicesSaberServiceProvider setConvoUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f4e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9aec8;
  func_0x000107c61428(param_1 + _DAT_112f9aec8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f4e30; end: 1037f4e83;  */

void FUN_1037f4e30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037f4e84; end: 1037f5097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037f4e84(void)

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
    func_0x000107c40760();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037ef6d8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f9a528);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f9aed0);
      *(long *)(unaff_x20 + _DAT_112f9aed0) = lVar4;
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
                      "ConvoUserNavigationScopeGraphBridge/SCSCSnapchatterSendingServicesSaberServiceProvider.swift"
                      ,0x5c,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f4fb0);
  (*pcVar1)();
}



/* Entry: 1037f5098; end: 1037f50cb; -[SCSCSnapchatterSendingServicesSaberServiceProvider provide] */

void FUN_1037f5098(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037f4e84();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f50cc; end: 1037f50ff; -[SCSCSnapchatterSendingServicesSaberServiceProvider __safeProvide] */

void FUN_1037f50cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037f4fb0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f5100; end: 1037f5143; -[SCSCSnapchatterSendingServicesSaberServiceProvider end] */

void FUN_1037f5100(undefined8 param_1)

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



/* Entry: 1037f5144; end: 1037f52db;  */

void FUN_1037f5144(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e94550)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f16bab0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ConvoUserNavigationScopeGraphBridge/SCSCSnapchatterSendingServicesSaberServiceProvider.swift"
                            ,0x5c,2,0x3d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f52dc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5399c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037f52dc; end: 1037f5387; -[SCSCSnapchatterSendingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037f52dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037f5144(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037f5388; end: 1037f53fb; -[SCSCSnapchatterSendingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f5388(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f9aec0,0);
  func_0x000107c61614(param_1 + _DAT_112f9aec8,0);
  *(undefined8 *)(param_1 + _DAT_112f9aed0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037f53fc; end: 1037f542f;  */

void FUN_1037f53fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037f5430; end: 1037f5477; -[SCSCSnapchatterSendingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f5430(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f9aec0);
  func_0x000107c61610(param_1 + _DAT_112f9aec8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9aed0));
  return;
}



/* Entry: 1037f5478; end: 1037f5497;  */

void FUN_1037f5478(void)

{
  func_0x000107c61168(&PTR_PTR_112f9af18);
  return;
}



/* Entry: 1037f5498; end: 1037f54a7; -[_TtC23SCRemixChatWallpaperAPI28SCRemixChatWallpaperServices remixChatWallpaperController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f5498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f9af80));
  return;
}



/* Entry: 1037f54a8; end: 1037f553f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f54a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f9af80) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037f5540; end: 1037f559f; -[_TtC23SCRemixChatWallpaperAPI28SCRemixChatWallpaperServices init] */

void FUN_1037f5540(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCRemixChatWallpaperAPI.SCRemixChatWallpaperServices",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f556c);
  (*pcVar1)();
}



/* Entry: 1037f55a0; end: 1037f55af; -[_TtC23SCRemixChatWallpaperAPI28SCRemixChatWallpaperServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f55a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9af80));
  return;
}



/* Entry: 1037f55b0; end: 1037f55ef;  */

void FUN_1037f55b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f9afe8;
  func_0x0001000285a8(0x112f9afe8,&UNK_10dc11ad0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1037f55f0; end: 1037f56f7;  */

void FUN_1037f55f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f9aff0,&UNK_10dc11ad8);
  puVar1 = &UNK_110697de0;
  func_0x000107c613fc(&UNK_110697de0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1037f56f8,puVar1);
  return;
}



/* Entry: 1037f56f8; end: 1037f56ff;  */

void FUN_1037f56f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  FUN_1037f5fbc();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1037f5b28(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1037f5700; end: 1037f575f;  */

undefined8 FUN_1037f5700(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1037f5b28(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 1037f5760; end: 1037f5783;  */

void FUN_1037f5760(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037f5784; end: 1037f5847;  */

void FUN_1037f5784(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037f5848; end: 1037f585b;  */

void FUN_1037f5848(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9b148 == (undefined *)0x0 || ((ulong)puRam0000000112f9b148 & 1) != 0) {
    puVar1 = &UNK_10e99f470;
    func_0x000107c61518(&UNK_10e99f470,0x26,0,0);
    puRam0000000112f9b148 = puVar1;
  }
  return;
}



/* Entry: 1037f585c; end: 1037f5983;  */

ulong FUN_1037f585c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f5984);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1037f5984(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f5980);
      (*pcVar1)();
    }
    FUN_1037f5a04(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1037f5984; end: 1037f5a03;  */

undefined * FUN_1037f5984(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1037f5848();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1037f5a04; end: 1037f5b27;  */

long FUN_1037f5a04(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037f5b24);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1037f5b28);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f9b140;
        func_0x0001000285a8(0x112f9b140,&UNK_10dc11ce0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f9b140;
      func_0x0001000285a8(0x112f9b140,&UNK_10dc11ce0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1037f5b20);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1037f5b28; end: 1037f5deb;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f5b28(long *******param_1)

{
  byte bVar1;
  long *******ppppppplVar2;
  long *******ppppppplVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *******ppppppplVar4;
  undefined *puVar5;
  long *******ppppppplVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x19;
  long *******unaff_x20;
  long *******ppppppplVar9;
  ulong uVar10;
  long *******ppppppplVar11;
  long *******unaff_x24;
  long ******unaff_x25;
  ulong uVar12;
  ulong unaff_x27;
  ulong unaff_x28;
  byte bStack_b1;
  long *******appppppplStack_b0 [9];
  long lStack_68;
  
  ppppppplVar3 = _DAT_113073a90;
  ppppppplVar2 = _DAT_113073a88;
  uVar12 = 0;
  ppppppplVar4 = param_1;
  ppppppplVar9 = unaff_x20;
  ppppppplVar11 = (long *******)PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    bVar1 = *(byte *)(uVar12 + 0x112f9afd8);
    uVar10 = (ulong)bVar1;
    uVar12 = uVar12 + 1;
    uVar8 = (ulong)(byte)(&UNK_10dc11ac0)[uVar10];
    ppppppplVar6 = (long *******)(uVar8 * 4 + 0x1037f5bc4);
    switch(bVar1) {
    case 0:
      func_0x000104397d10();
      goto code_r0x0001037f5c08;
    case 1:
      func_0x000104397bc0();
code_r0x0001037f5c08:
      unaff_x24 = (long *******)*ppppppplVar4;
      unaff_x25 = ppppppplVar4[1];
      func_0x000107c61434(unaff_x25);
code_r0x0001037f5c14:
      ppppppplVar6 = ppppppplVar2;
code_r0x0001037f5c18:
      unaff_x19 = *(long *)((long)param_1 + (long)ppppppplVar6);
      ppppppplVar6 = *(long ********)(unaff_x19 + 0x10);
      goto joined_r0x0001037f5c54;
    case 2:
    case 4:
    case 5:
      goto code_r0x0001037f5cf8;
    default:
      ppppppplVar6 = ppppppplVar3;
    case 0x38:
    case 0x46:
    case 0x86:
    case 0xc6:
    case 0xe0:
    case 0xee:
      ppppppplVar6 = *(long ********)((long)param_1 + (long)ppppppplVar6);
code_r0x0001037f5bcc:
      if (ppppppplVar6 == (long *******)0x0) {
code_r0x0001037f5bd0:
        goto code_r0x0001037f5cf8;
      }
      goto code_r0x0001037f5b90;
    case 7:
    case 0x98:
      func_0x000104397b88();
      break;
    case 8:
      func_0x000104397b50();
      break;
    case 9:
      func_0x000104397c68();
      break;
    case 10:
      func_0x000104397bf8();
      break;
    case 0xb:
      func_0x000104397c30();
    case 0x94:
      break;
    case 0xc:
    case 0x14:
    case 0x1c:
    case 0x24:
      func_0x000104397d48();
    case 0xac:
    case 0xb4:
    case 0xbc:
      break;
    case 0xd:
      func_0x000104397cd8();
      break;
    case 0xe:
    case 0x60:
      func_0x000104397b18();
    case 0x4f:
    case 0x8f:
    case 0xcf:
    case 0xf7:
      break;
    case 0x10:
    case 0x8c:
      if (ppppppplRam0000000112f9b070 != (long *******)0x0) {
        return;
      }
      ppppppplVar4 = (long *******)&UNK_10dc11000;
    case 0x2d:
    case 0x55:
    case 0x9d:
    case 0xd5:
    case 0xfd:
      ppppppplVar4 = ppppppplVar4 + 0x177;
      func_0x000107c61520(ppppppplVar4,&UNK_110697f28);
      ppppppplRam0000000112f9b070 = ppppppplVar4;
      return;
    case 0x11:
    case 0x12:
    case 0x21:
    case 0x22:
    case 0x69:
    case 0x6a:
    case 0x91:
    case 0x92:
    case 0xb1:
    case 0xb2:
    case 0xb9:
    case 0xba:
      goto LAB_1037f5f24;
    case 0x18:
      goto code_r0x0001037f5dcc;
    case 0x19:
      return;
    case 0x1a:
      if (ppppppplVar4 != (long *******)0x0) {
        return;
      }
LAB_1037f5f24:
      puVar5 = &UNK_10dc11c00;
      func_0x000107c61520(&UNK_10dc11c00,&UNK_110697f28);
      puRam0000000112f9b068 = puVar5;
code_r0x0001037f5f4c:
      return;
    case 0x20:
      goto code_r0x0001037f5f4c;
    case 0x28:
      goto code_r0x0001037f5d08;
    case 0x29:
    case 0x3d:
    case 0x51:
    case 0x65:
    case 0x6d:
    case 0x75:
    case 0x7d:
    case 0x99:
    case 0xad:
    case 0xb5:
    case 0xbd:
      goto code_r0x0001037f5d54;
    case 0x2a:
    case 0x3e:
    case 0x52:
    case 0x66:
    case 0x6e:
    case 0x76:
    case 0x7e:
    case 0x9a:
    case 0xae:
    case 0xb6:
    case 0xbe:
    case 0xd2:
    case 0xe6:
    case 0xe8:
    case 0xfa:
      ppppppplVar4 = *(long ********)(uVar8 * 4 + 0x1037f5c14);
    case 0x68:
    case 0xd0:
      if (ppppppplVar4 != (long *******)0x0) {
        return;
      }
      puVar5 = &UNK_10dc11b90;
      func_0x000107c61520(&UNK_10dc11b90,&UNK_110697f28);
      puRam0000000112f9b050 = puVar5;
code_r0x0001037f5e9c:
      return;
    case 0x2b:
    case 0x3f:
    case 0x53:
    case 0x67:
    case 0x6f:
    case 0x77:
    case 0x7f:
    case 0x9b:
    case 0xaf:
    case 0xb7:
    case 0xbf:
    case 0xd3:
    case 0xe7:
    case 0xfb:
      goto code_r0x0001037f5bcc;
    case 0x2c:
    case 0xe4:
      FUN_1037f5ecc(0x112f9b040,0x112f9b048,&UNK_10dc11b50);
code_r0x0001037f5e54:
      return;
    case 0x2e:
    case 0x56:
    case 0x9e:
    case 0xd6:
    case 0xfe:
      goto code_r0x0001037f5e9c;
    case 0x36:
    case 0x5e:
    case 0xa6:
    case 0xa8:
    case 0xde:
      goto code_r0x0001037f5bd0;
    case 0x3c:
    case 0xe9:
      goto code_r0x0001037f5cd8;
    case 0x40:
code_r0x0001037f5cf4:
      func_0x0001037f6130();
      goto code_r0x0001037f5cf8;
    case 0x41:
    case 0x71:
    case 0x79:
    case 0x81:
      goto code_r0x0001037f5cdc;
    case 0x42:
    case 0x72:
    case 0x7a:
    case 0x82:
    case 0xc2:
    case 0xea:
      FUN_1037f5ecc();
      return;
    case 0x43:
    case 0x73:
    case 0x7b:
    case 0x83:
    case 0xc3:
    case 0xeb:
      return;
    case 0x4c:
      goto code_r0x0001037f5e54;
    case 0x4d:
    case 0x80:
    case 0x8d:
      goto code_r0x0001037f5c14;
    case 0x4e:
    case 0x8e:
    case 0xce:
    case 0xf6:
      goto code_r0x0001037f5e18;
    case 0x50:
      goto code_r0x0001037f5ca8;
    case 0x54:
      goto code_r0x0001037f5d94;
    case 100:
    case 0x6c:
    case 0x74:
    case 0x7c:
      goto code_r0x0001037f5c78;
    case 0x70:
      goto code_r0x0001037f5cd4;
    case 0x78:
      goto code_r0x0001037f5c94;
    case 0x90:
      return;
    case 0x9c:
      goto code_r0x0001037f5c74;
    case 0xb0:
      goto code_r0x0001037f5d90;
    case 0xb8:
      goto code_r0x0001037f5d48;
    case 0xc0:
      goto code_r0x0001037f5c84;
    case 0xc1:
      goto code_r0x0001037f5cac;
    case 0xcc:
      goto code_r0x0001037f5c54;
    case 0xcd:
    case 0xf5:
      goto code_r0x0001037f5c18;
    case 0xd1:
    case 0xe5:
    case 0xf9:
      goto code_r0x0001037f5d50;
    case 0xd4:
      goto code_r0x0001037f5d64;
    case 0xf4:
      goto code_r0x0001037f5db4;
    case 0xf8:
      ppppppplVar4 = (long *******)&UNK_10dc11ae8;
code_r0x0001037f5e18:
      func_0x000107c61520();
      ppppppplRam0000000112f9b038 = ppppppplVar4;
      return;
    case 0xfc:
      goto code_r0x0001037f5cc4;
    }
    unaff_x24 = (long *******)*ppppppplVar4;
    unaff_x25 = ppppppplVar4[1];
    unaff_x19 = *(long *)((long)param_1 + (long)ppppppplVar2);
    func_0x000107c61434(unaff_x25);
    ppppppplVar6 = *(long ********)(unaff_x19 + 0x10);
code_r0x0001037f5c54:
joined_r0x0001037f5c54:
    if (ppppppplVar6 != (long *******)0x0) {
      func_0x000107c6068c(appppppplStack_b0,*(undefined8 *)(unaff_x19 + 0x28));
      ppppppplVar4 = (long *******)appppppplStack_b0;
      func_0x000107c5fb58(ppppppplVar4,unaff_x24);
code_r0x0001037f5c74:
code_r0x0001037f5c78:
      func_0x000107c606a8();
      ppppppplVar9 = (long *******)(unaff_x19 + 0x38);
      ppppppplVar6 = (long *******)(ulong)*(byte *)(unaff_x19 + 0x20);
code_r0x0001037f5c84:
      ppppppplVar6 = (long *******)(-1L << ((ulong)ppppppplVar6 & 0x3f));
      unaff_x28 = (ulong)ppppppplVar4 & ((ulong)ppppppplVar6 ^ 0xffffffffffffffff);
      uVar8 = unaff_x28 >> 6;
code_r0x0001037f5c94:
      if (((ulong)ppppppplVar9[uVar8] >> (unaff_x28 & 0x3f) & 1) != 0) {
        unaff_x27 = ~(ulong)ppppppplVar6;
        do {
          ppppppplVar6 = *(long ********)(unaff_x19 + 0x30);
code_r0x0001037f5ca8:
          ppppppplVar6 = ppppppplVar6 + unaff_x28 * 2;
code_r0x0001037f5cac:
          ppppppplVar4 = (long *******)*ppppppplVar6;
          if (ppppppplVar4 == unaff_x24 && ppppppplVar6[1] == unaff_x25) goto code_r0x0001037f5cf4;
code_r0x0001037f5cc4:
          func_0x000107c605b8();
          if (((ulong)ppppppplVar4 & 1) != 0) goto code_r0x0001037f5cf4;
          ppppppplVar6 = (long *******)(unaff_x28 + 1);
code_r0x0001037f5cd4:
          unaff_x28 = (ulong)ppppppplVar6 & unaff_x27;
code_r0x0001037f5cd8:
          ppppppplVar6 = (long *******)(unaff_x28 >> 6);
code_r0x0001037f5cdc:
        } while (((ulong)ppppppplVar9[(long)ppppppplVar6] >> (unaff_x28 & 0x3f) & 1) != 0);
      }
    }
    ppppppplVar4 = unaff_x24;
    func_0x0001037f6130(unaff_x24,unaff_x25);
code_r0x0001037f5b90:
    in_CY = 0xe < uVar12;
    in_ZR = uVar12 == 0xf;
  } while (!(bool)in_ZR);
  unaff_x20[2] = (long ******)ppppppplVar11;
code_r0x0001037f5dcc:
  return;
code_r0x0001037f5cf8:
  ppppppplVar6 = (long *******)appppppplStack_b0;
  ppppppplVar4 = (long *******)&bStack_b1;
  bStack_b1 = bVar1;
code_r0x0001037f5d08:
  func_0x00010008a7c8(ppppppplVar6);
  ppppppplVar9 = appppppplStack_b0[0];
  if (appppppplStack_b0[0] != (long *******)0x0) {
    func_0x000100083b20(&lStack_68);
    ppppppplVar4 = ppppppplVar9;
    func_0x000107c61574();
    unaff_x19 = lStack_68;
    if (lStack_68 != 0) {
      ppppppplVar4 = ppppppplVar11;
      func_0x000107c61550();
      if ((((int)ppppppplVar4 == 0) || ((long)ppppppplVar11 < 0)) ||
         (((ulong)ppppppplVar11 >> 0x3e & 1) != 0)) {
        if ((ulong)ppppppplVar11 >> 0x3e == 0) {
code_r0x0001037f5d48:
        }
        else {
          ppppppplVar6 = (long *******)((ulong)ppppppplVar11 & 0xffffffffffffff8);
code_r0x0001037f5db4:
          if ((long *******)0x7fffffffffffffff < ppppppplVar11) {
            ppppppplVar6 = ppppppplVar11;
          }
          func_0x000107c60480(ppppppplVar6);
        }
code_r0x0001037f5d50:
code_r0x0001037f5d54:
        ppppppplVar4 = (long *******)0x0;
        FUN_1037f585c();
code_r0x0001037f5d64:
        ppppppplVar11 = ppppppplVar4;
      }
      uVar7 = (ulong)ppppppplVar11 & 0xffffffffffffff8;
      uVar10 = *(ulong *)(uVar7 + 0x10);
      uVar8 = *(ulong *)(uVar7 + 0x18);
      ppppppplVar9 = (long *******)(uVar10 + 1);
      if (uVar8 >> 1 <= uVar10) {
        in_CY = uVar8 != 0;
        in_ZR = uVar8 == 1;
code_r0x0001037f5d90:
        ppppppplVar4 = (long *******)(ulong)((bool)in_CY && !(bool)in_ZR);
code_r0x0001037f5d94:
        FUN_1037f585c();
        uVar7 = (ulong)ppppppplVar4 & 0xffffffffffffff8;
        ppppppplVar11 = ppppppplVar4;
      }
      *(long ********)(uVar7 + 0x10) = ppppppplVar9;
      *(long *)(uVar7 + uVar10 * 8 + 0x20) = unaff_x19;
    }
  }
  goto code_r0x0001037f5b90;
}



/* Entry: 1037f5dec; end: 1037f5def;  */

void FUN_1037f5dec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9b038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc11ae8;
  func_0x000107c61520(&UNK_10dc11ae8,&UNK_110697e78);
  puRam0000000112f9b038 = puVar1;
  return;
}



/* Entry: 1037f5df0; end: 1037f5e5b;  */

void FUN_1037f5df0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9b038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc11ae8;
  func_0x000107c61520(&UNK_10dc11ae8,&UNK_110697e78);
  puRam0000000112f9b038 = puVar1;
  return;
}



/* Entry: 1037f5e5c; end: 1037f5e5f;  */

void FUN_1037f5e5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9b050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc11b90;
  func_0x000107c61520(&UNK_10dc11b90,&UNK_110697f28);
  puRam0000000112f9b050 = puVar1;
  return;
}



/* Entry: 1037f5e60; end: 1037f5ecb;  */

void FUN_1037f5e60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9b050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc11b90;
  func_0x000107c61520(&UNK_10dc11b90,&UNK_110697f28);
  puRam0000000112f9b050 = puVar1;
  return;
}



/* Entry: 1037f5ecc; end: 1037f5f0f;  */

void FUN_1037f5ecc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1037f5f10; end: 1037f5f13;  */

void FUN_1037f5f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9b068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc11c00;
  func_0x000107c61520(&UNK_10dc11c00,&UNK_110697f28);
  puRam0000000112f9b068 = puVar1;
  return;
}



/* Entry: 1037f5f14; end: 1037f5f53;  */

void FUN_1037f5f14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9b068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc11c00;
  func_0x000107c61520(&UNK_10dc11c00,&UNK_110697f28);
  puRam0000000112f9b068 = puVar1;
  return;
}



/* Entry: 1037f5f54; end: 1037f5f57;  */

void FUN_1037f5f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9b070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc11bb8;
  func_0x000107c61520(&UNK_10dc11bb8,&UNK_110697f28);
  puRam0000000112f9b070 = puVar1;
  return;
}



/* Entry: 1037f5f58; end: 1037f5f97;  */

void FUN_1037f5f58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9b070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc11bb8;
  func_0x000107c61520(&UNK_10dc11bb8,&UNK_110697f28);
  puRam0000000112f9b070 = puVar1;
  return;
}



/* Entry: 1037f5f98; end: 1037f5fbb;  */

void FUN_1037f5f98(void)

{
  return;
}



/* Entry: 1037f5fbc; end: 1037f5fdb;  */

void FUN_1037f5fbc(void)

{
  func_0x000107c61168(&PTR_PTR_112f9b0e0);
  return;
}



/* Entry: 1037f5fdc; end: 1037f6183;  */

int FUN_1037f5fdc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf1 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xe) {
      iVar2 = 4;
    }
    if (param_2 + 0xe >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1037f6058;
        goto LAB_1037f603c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1037f603c:
      return ((uint)*param_1 | uVar1 << 8) - 0xe;
    }
  }
LAB_1037f6058:
  iVar2 = *param_1 - 0xf;
  if (*param_1 < 0xf) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1037f6184; end: 1037f6193; -[_TtC25SCChatInputPluginRegistry33SCChatInputPluginScopeBuildResult scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f6184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f9b150));
  return;
}



/* Entry: 1037f6194; end: 1037f61ef; -[_TtC25SCChatInputPluginRegistry33SCChatInputPluginScopeBuildResult chatInputPluginProviders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f6194(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f9b158);
  func_0x000107c61434(uVar3);
  uVar1 = 0x112f9b140;
  func_0x0001000285a8(0x112f9b140,&UNK_10dc11ce0);
  uVar2 = uVar3;
  func_0x000107c5fc48(uVar3,uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037f61f0; end: 1037f6253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f61f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f9b150) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f9b158) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037f6254; end: 1037f627f; -[_TtC25SCChatInputPluginRegistry33SCChatInputPluginScopeBuildResult init] */

void FUN_1037f6254(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputPluginRegistry.SCChatInputPluginScopeBuildResult",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f6280);
  (*pcVar1)();
}



/* Entry: 1037f6280; end: 1037f62b7; -[_TtC25SCChatInputPluginRegistry33SCChatInputPluginScopeBuildResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f6280(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f9b150));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f9b158));
  return;
}



/* Entry: 1037f62b8; end: 1037f6323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f62b8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003843d0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f9b168) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1037f6324; end: 1037f632b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f6324(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003843d0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f9b168) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1037f632c; end: 1037f6377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f632c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f9b168) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037f6378; end: 1037f640f; -[_TtC25SCChatInputPluginRegistry30SCChatInputPluginScopeServices buildWithEnabledFeatureIdentifiers:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037f6378(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5fe10(param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  FUN_1037f6410(param_3,param_4,0);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112f9b150);
  func_0x000107c6117c(uVar2);
  func_0x000107c61170(lVar1);
  return uVar2;
}



/* Entry: 1037f6410; end: 1037f655b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1037f6410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100384114(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61434();
  func_0x000104397918();
  lStack_58 = param_1;
  func_0x00010008a7c8(&uStack_48,&lStack_58);
  func_0x000100083b20(&lStack_58);
  func_0x000107c61574(uStack_48);
  lVar2 = lStack_58;
  lVar3 = lStack_58;
  func_0x000107c614f0(lStack_58);
  (**(code **)(lStack_50 + 0x10))();
  func_0x000100083b20(&lStack_58);
  func_0x000107c61574(lVar3);
  lVar3 = lStack_58;
  uVar6 = *(undefined8 *)(lStack_58 + 0x10);
  func_0x000107c61434(uVar6);
  func_0x000107c61574();
  FUN_1037f6734();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(long *)(lVar4 + _DAT_112f9b150) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112f9b158) = uVar6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c61174(param_1);
  plVar5 = &lStack_68;
  func_0x000107c61154(plVar5,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(lVar2);
  return plVar5;
}



/* Entry: 1037f655c; end: 1037f6617; -[_TtC25SCChatInputPluginRegistry30SCChatInputPluginScopeServices buildWithEnabledFeatureIdentifiers:context:contextMessagingScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1037f655c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5fe10(param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  FUN_1037f6410(param_3,param_4,param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112f9b150);
  func_0x000107c6117c(uVar2);
  func_0x000107c61170(lVar1);
  return uVar2;
}



/* Entry: 1037f6618; end: 1037f6693; -[_TtC25SCChatInputPluginRegistry30SCChatInputPluginScopeServices buildScopeAndPluginsWithEnabledFeatureIdentifiers:context:] */

void FUN_1037f6618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5fe10(param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1037f6410(param_3,param_4,0);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037f6694; end: 1037f6733; -[_TtC25SCChatInputPluginRegistry30SCChatInputPluginScopeServices buildScopeAndPluginsWithEnabledFeatureIdentifiers:context:contextMessagingScope:] */

void FUN_1037f6694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5fe10(param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1037f6410(param_3,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037f6734; end: 1037f6753;  */

void FUN_1037f6734(void)

{
  func_0x000107c61168(&PTR_PTR_1128efd00);
  return;
}



/* Entry: 1037f6754; end: 1037f677f; -[_TtC25SCChatInputPluginRegistry30SCChatInputPluginScopeServices init] */

void FUN_1037f6754(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputPluginRegistry.SCChatInputPluginScopeServices",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f6780);
  (*pcVar1)();
}



/* Entry: 1037f6780; end: 1037f6783;  */

void FUN_1037f6780(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037f6784; end: 1037f67b7;  */

void FUN_1037f6784(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037f67b8; end: 1037f67db; -[_TtC25SCChatInputPluginRegistry30SCChatInputPluginScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f67b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9b168));
  return;
}



/* Entry: 1037f67dc; end: 1037f6827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f67dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f9b1c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037f6828; end: 1037f6943; -[_TtC20SCSendFlowScopeProxy30SCSendFlowScopeBuilderServices buildWithSource:config:triggerEventSubject:uiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f6828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126aa068;
  func_0x000107c610f8();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174();
  func_0x000107c48894(puVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_68[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1037f6944; end: 1037f6a43; -[_TtC20SCSendFlowScopeProxy30SCSendFlowScopeBuilderServices buildWithSource:config:uiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f6944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126aa068;
  func_0x000107c610f8();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174();
  func_0x000107c48898(puVar1,param_2,param_3,param_4,param_5,param_6);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_68[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1037f6a44; end: 1037f6a73;  */

void FUN_1037f6a44(void)

{
  func_0x000100342dd8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037f6a74; end: 1037f6aa3; -[_TtC20SCSendFlowScopeProxy30SCSendFlowScopeBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f6a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f9b1c0));
  return;
}



/* Entry: 1037f6aa4; end: 1037f6b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037f6aa4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100ad02f4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f9b208) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f9b210) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f6b2c);
  (*pcVar1)();
}



/* Entry: 1037f6b2c; end: 1037f6b8b; -[_TtC36CreateUserNavigationScopeGraphBridge51CreateUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037f6b2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreateUserNavigationScopeGraphBridge.CreateUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037f6b58);
  (*pcVar1)();
}



/* Entry: 1037f6b8c; end: 1037f6bc3; -[_TtC36CreateUserNavigationScopeGraphBridge51CreateUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037f6ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037f6bac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f6b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9b208));
  return;
}



/* Entry: 1037f6bc4; end: 1037f6beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037f6bc4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f9b210),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f9b208));
  return;
}



/* Entry: 1037f6bec; end: 1037f6c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037f6bec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f9b7a0);
  *(undefined8 *)(unaff_x20 + _DAT_112f9b240) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f9b248) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}


