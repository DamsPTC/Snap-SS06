/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039a2c28; end: 1039a2c6f; -[SCAradsActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a2c54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a2c58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a2c28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbe4e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbe4e8));
  return;
}



/* Entry: 1039a2c70; end: 1039a2c8f;  */

void FUN_1039a2c70(void)

{
  func_0x000107c61168(&PTR_PTR_11290bcd8);
  return;
}



/* Entry: 1039a2c90; end: 1039a2c9b; -[SCMapAdsAdRequestProviderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a2c90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbe520;
  func_0x000107c61428(param_1 + _DAT_112fbe520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a2c9c; end: 1039a2ca7; -[SCMapAdsAdRequestProviderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a2c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbe520;
  func_0x000107c61428(param_1 + _DAT_112fbe520,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a2ca8; end: 1039a2cb3; -[SCMapAdsAdRequestProviderServicesSaberServiceProvider aradsActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a2ca8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbe528;
  func_0x000107c61428(param_1 + _DAT_112fbe528,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a2cb4; end: 1039a2cf7;  */

void FUN_1039a2cb4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039a2cf8; end: 1039a2d03; -[SCMapAdsAdRequestProviderServicesSaberServiceProvider setAradsActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a2cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbe528;
  func_0x000107c61428(param_1 + _DAT_112fbe528,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a2d04; end: 1039a2d57;  */

void FUN_1039a2d04(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a2d58; end: 1039a2f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039a2d58(void)

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
    func_0x000107c3e0dc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039a25b8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbe470);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbe530);
      *(long *)(unaff_x20 + _DAT_112fbe530) = lVar4;
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
                      "AradsActiveUserSessionScopeGraphBridge/SCMapAdsAdRequestProviderServicesSaberServiceProvider.swift"
                      ,0x62,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a2e84);
  (*pcVar1)();
}



/* Entry: 1039a2f6c; end: 1039a2f9f; -[SCMapAdsAdRequestProviderServicesSaberServiceProvider provide] */

void FUN_1039a2f6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039a2d58();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a2fa0; end: 1039a2fd3; -[SCMapAdsAdRequestProviderServicesSaberServiceProvider __safeProvide] */

void FUN_1039a2fa0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039a2e84();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a2fd4; end: 1039a3017; -[SCMapAdsAdRequestProviderServicesSaberServiceProvider end] */

void FUN_1039a2fd4(undefined8 param_1)

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



/* Entry: 1039a3018; end: 1039a31af;  */

void FUN_1039a3018(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e7f3d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f180c30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AradsActiveUserSessionScopeGraphBridge/SCMapAdsAdRequestProviderServicesSaberServiceProvider.swift"
                            ,0x62,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a31b0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c528b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039a31b0; end: 1039a325b; -[SCMapAdsAdRequestProviderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039a31b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039a3018(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039a325c; end: 1039a32cf; -[SCMapAdsAdRequestProviderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a325c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbe520,0);
  func_0x000107c61614(param_1 + _DAT_112fbe528,0);
  *(undefined8 *)(param_1 + _DAT_112fbe530) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a32d0; end: 1039a3303;  */

void FUN_1039a32d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a3304; end: 1039a334b; -[SCMapAdsAdRequestProviderServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a3304(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbe520);
  func_0x000107c61610(param_1 + _DAT_112fbe528);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbe530));
  return;
}



/* Entry: 1039a334c; end: 1039a336b;  */

void FUN_1039a334c(void)

{
  func_0x000107c61168(&PTR_PTR_112fbe578);
  return;
}



/* Entry: 1039a336c; end: 1039a3377; -[SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a336c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbe5e0;
  func_0x000107c61428(param_1 + _DAT_112fbe5e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a3378; end: 1039a3383; -[SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a3378(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbe5e0;
  func_0x000107c61428(param_1 + _DAT_112fbe5e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a3384; end: 1039a338f; -[SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider aradsActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a3384(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbe5e8;
  func_0x000107c61428(param_1 + _DAT_112fbe5e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a3390; end: 1039a33d3;  */

void FUN_1039a3390(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039a33d4; end: 1039a33df; -[SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider setAradsActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a33d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbe5e8;
  func_0x000107c61428(param_1 + _DAT_112fbe5e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a33e0; end: 1039a3433;  */

void FUN_1039a33e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a3434; end: 1039a3647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039a3434(void)

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
    func_0x000107c3e0dc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039a26e4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbe478);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbe5f0);
      *(long *)(unaff_x20 + _DAT_112fbe5f0) = lVar4;
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
                      "AradsActiveUserSessionScopeGraphBridge/SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider.swift"
                      ,0x6c,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a3560);
  (*pcVar1)();
}



/* Entry: 1039a3648; end: 1039a367b; -[SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider provide] */

void FUN_1039a3648(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039a3434();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a367c; end: 1039a36af; -[SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider __safeProvide] */

void FUN_1039a367c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039a3560();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a36b0; end: 1039a36f3; -[SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider end] */

void FUN_1039a36b0(undefined8 param_1)

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



/* Entry: 1039a36f4; end: 1039a388b;  */

void FUN_1039a36f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e7f3d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f180c30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AradsActiveUserSessionScopeGraphBridge/SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider.swift"
                            ,0x6c,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a388c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c528b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039a388c; end: 1039a3937; -[SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039a388c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039a36f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039a3938; end: 1039a39ab; -[SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a3938(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbe5e0,0);
  func_0x000107c61614(param_1 + _DAT_112fbe5e8,0);
  *(undefined8 *)(param_1 + _DAT_112fbe5f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a39ac; end: 1039a39df;  */

void FUN_1039a39ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a39e0; end: 1039a3a27; -[SCSCShoppingLensLaunchConfigPrivateServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a39e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbe5e0);
  func_0x000107c61610(param_1 + _DAT_112fbe5e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbe5f0));
  return;
}



/* Entry: 1039a3a28; end: 1039a3a47;  */

void FUN_1039a3a28(void)

{
  func_0x000107c61168(&PTR_PTR_112fbe638);
  return;
}



/* Entry: 1039a3a48; end: 1039a3a53; -[SCSCShoppingLensLaunchConfigServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a3a48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbe6a0;
  func_0x000107c61428(param_1 + _DAT_112fbe6a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a3a54; end: 1039a3a5f; -[SCSCShoppingLensLaunchConfigServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a3a54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbe6a0;
  func_0x000107c61428(param_1 + _DAT_112fbe6a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a3a60; end: 1039a3a6b; -[SCSCShoppingLensLaunchConfigServicesSaberServiceProvider aradsActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a3a60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbe6a8;
  func_0x000107c61428(param_1 + _DAT_112fbe6a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a3a6c; end: 1039a3aaf;  */

void FUN_1039a3a6c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039a3ab0; end: 1039a3abb; -[SCSCShoppingLensLaunchConfigServicesSaberServiceProvider setAradsActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a3ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbe6a8;
  func_0x000107c61428(param_1 + _DAT_112fbe6a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a3abc; end: 1039a3b0f;  */

void FUN_1039a3abc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a3b10; end: 1039a3d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039a3b10(void)

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
    func_0x000107c3e0dc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039a2810();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbe480);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbe6b0);
      *(long *)(unaff_x20 + _DAT_112fbe6b0) = lVar4;
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
                      "AradsActiveUserSessionScopeGraphBridge/SCSCShoppingLensLaunchConfigServicesSaberServiceProvider.swift"
                      ,0x65,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a3c3c);
  (*pcVar1)();
}



/* Entry: 1039a3d24; end: 1039a3d57; -[SCSCShoppingLensLaunchConfigServicesSaberServiceProvider provide] */

void FUN_1039a3d24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039a3b10();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a3d58; end: 1039a3d8b; -[SCSCShoppingLensLaunchConfigServicesSaberServiceProvider __safeProvide] */

void FUN_1039a3d58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039a3c3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a3d8c; end: 1039a3dcf; -[SCSCShoppingLensLaunchConfigServicesSaberServiceProvider end] */

void FUN_1039a3d8c(undefined8 param_1)

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



/* Entry: 1039a3dd0; end: 1039a3f67;  */

void FUN_1039a3dd0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e7f3d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f180c30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AradsActiveUserSessionScopeGraphBridge/SCSCShoppingLensLaunchConfigServicesSaberServiceProvider.swift"
                            ,0x65,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a3f68);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c528b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039a3f68; end: 1039a4013; -[SCSCShoppingLensLaunchConfigServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039a3f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039a3dd0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039a4014; end: 1039a4087; -[SCSCShoppingLensLaunchConfigServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4014(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbe6a0,0);
  func_0x000107c61614(param_1 + _DAT_112fbe6a8,0);
  *(undefined8 *)(param_1 + _DAT_112fbe6b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a4088; end: 1039a40bb;  */

void FUN_1039a4088(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a40bc; end: 1039a4103; -[SCSCShoppingLensLaunchConfigServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a40bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbe6a0);
  func_0x000107c61610(param_1 + _DAT_112fbe6a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbe6b0));
  return;
}



/* Entry: 1039a4104; end: 1039a4123;  */

void FUN_1039a4104(void)

{
  func_0x000107c61168(&PTR_PTR_112fbe6f8);
  return;
}



/* Entry: 1039a4124; end: 1039a412f; -[SCSCShoppingLensModerationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbe760;
  func_0x000107c61428(param_1 + _DAT_112fbe760,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a4130; end: 1039a413b; -[SCSCShoppingLensModerationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4130(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbe760;
  func_0x000107c61428(param_1 + _DAT_112fbe760,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a413c; end: 1039a4147; -[SCSCShoppingLensModerationServicesSaberServiceProvider aradsActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a413c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbe768;
  func_0x000107c61428(param_1 + _DAT_112fbe768,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a4148; end: 1039a418b;  */

void FUN_1039a4148(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039a418c; end: 1039a4197; -[SCSCShoppingLensModerationServicesSaberServiceProvider setAradsActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a418c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbe768;
  func_0x000107c61428(param_1 + _DAT_112fbe768,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a4198; end: 1039a41eb;  */

void FUN_1039a4198(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a41ec; end: 1039a43ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039a41ec(void)

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
    func_0x000107c3e0dc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039a293c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbe488);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbe770);
      *(long *)(unaff_x20 + _DAT_112fbe770) = lVar4;
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
                      "AradsActiveUserSessionScopeGraphBridge/SCSCShoppingLensModerationServicesSaberServiceProvider.swift"
                      ,99,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a4318);
  (*pcVar1)();
}



/* Entry: 1039a4400; end: 1039a4433; -[SCSCShoppingLensModerationServicesSaberServiceProvider provide] */

void FUN_1039a4400(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039a41ec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a4434; end: 1039a4467; -[SCSCShoppingLensModerationServicesSaberServiceProvider __safeProvide] */

void FUN_1039a4434(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039a4318();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a4468; end: 1039a44ab; -[SCSCShoppingLensModerationServicesSaberServiceProvider end] */

void FUN_1039a4468(undefined8 param_1)

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



/* Entry: 1039a44ac; end: 1039a4643;  */

void FUN_1039a44ac(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e7f3d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f180c30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AradsActiveUserSessionScopeGraphBridge/SCSCShoppingLensModerationServicesSaberServiceProvider.swift"
                            ,99,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a4644);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c528b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039a4644; end: 1039a46ef; -[SCSCShoppingLensModerationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039a4644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039a44ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039a46f0; end: 1039a4763; -[SCSCShoppingLensModerationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a46f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbe760,0);
  func_0x000107c61614(param_1 + _DAT_112fbe768,0);
  *(undefined8 *)(param_1 + _DAT_112fbe770) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a4764; end: 1039a4797;  */

void FUN_1039a4764(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a4798; end: 1039a47df; -[SCSCShoppingLensModerationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4798(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbe760);
  func_0x000107c61610(param_1 + _DAT_112fbe768);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbe770));
  return;
}



/* Entry: 1039a47e0; end: 1039a47ff;  */

void FUN_1039a47e0(void)

{
  func_0x000107c61168(&PTR_PTR_112fbe7b8);
  return;
}



/* Entry: 1039a4800; end: 1039a480f; -[MapAdsAdRequestProviderServices adRequestProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbe820));
  return;
}



/* Entry: 1039a4810; end: 1039a487f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039a4810(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001003a5b88();
  *(long *)(unaff_x20 + _DAT_112fbe820) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1039a4880; end: 1039a48df; -[MapAdsAdRequestProviderServices init] */

void FUN_1039a4880(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAdsAdRequestProviderServices.MapAdsAdRequestProviderServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a48ac);
  (*pcVar1)();
}



/* Entry: 1039a48e0; end: 1039a48ef; -[MapAdsAdRequestProviderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a48e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbe820));
  return;
}



/* Entry: 1039a48f0; end: 1039a4973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039a48f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  lVar1 = _DAT_11380c060;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(unaff_x20 + lVar1,param_5,lVar2);
  return unaff_x20;
}



/* Entry: 1039a4974; end: 1039a49cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4974(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = _DAT_11380c060;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039a49d0; end: 1039a49d7;  */

void FUN_1039a49d0(void)

{
  if (lRam0000000112fbe878 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7957b4);
  return;
}



/* Entry: 1039a49d8; end: 1039a4a0f;  */

void FUN_1039a49d8(undefined8 param_1)

{
  if (lRam0000000112fbe878 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7957b4);
  return;
}



/* Entry: 1039a4a10; end: 1039a4a87;  */

void FUN_1039a4a10(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10dc2f5c8;
  puStack_30 = &UNK_10dc2f5c8;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 1039a4a88; end: 1039a4ad7;  */

void FUN_1039a4a88(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112fbe910 != 0) {
    return;
  }
  puVar1 = &UNK_1106b6e18;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112fbe910 = param_1;
  return;
}



/* Entry: 1039a4ad8; end: 1039a4ae7; -[_TtC41SCShoppingLensLaunchConfigPrivateServices41SCShoppingLensLaunchConfigPrivateServices showcaseResponsePreloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbe920));
  return;
}



/* Entry: 1039a4ae8; end: 1039a4af7; -[_TtC41SCShoppingLensLaunchConfigPrivateServices41SCShoppingLensLaunchConfigPrivateServices lensLaunchInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbe928));
  return;
}



/* Entry: 1039a4af8; end: 1039a4b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbe918) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbe920) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbe928) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a4b6c; end: 1039a4bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fbe918) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbe920) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbe928) = param_3;
  func_0x0001002b23e4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a4bc0; end: 1039a4c1b; -[_TtC41SCShoppingLensLaunchConfigPrivateServices41SCShoppingLensLaunchConfigPrivateServices init] */

void FUN_1039a4bc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCShoppingLensLaunchConfigPrivateServices.SCShoppingLensLaunchConfigPrivateServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a4bec);
  (*pcVar1)();
}



/* Entry: 1039a4c1c; end: 1039a4c63; -[_TtC41SCShoppingLensLaunchConfigPrivateServices41SCShoppingLensLaunchConfigPrivateServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a4c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a4c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4c1c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbe918));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbe920));
  return;
}



/* Entry: 1039a4c64; end: 1039a4e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbe958) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbe960) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbe968) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbe970) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbe978);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbe980);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbe988);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_112fbe990) = param_11;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a4e5c; end: 1039a4f5f; -[SCShoppingLensLaunchInfo initWithLensLaunchSource:lensIds:selectedProductId:dpaCtaViewModel:launchSourceAdId:launchSourceAdServeItemId:launchSourceTrackId:shouldHideProductPicker:] */

void FUN_1039a4e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                  undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_4);
  if (param_7 == 0) {
    param_7 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_7);
    puVar2 = puVar3;
  }
  if (param_8 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_8);
    puVar1 = puVar3;
  }
  if (param_9 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_6);
  func_0x0001039a4d60(param_3,param_4,param_5,param_6,param_7,puVar2,param_8,puVar1,param_9,puVar3,
                      param_10);
  return;
}



/* Entry: 1039a4f60; end: 1039a4fbf; -[SCShoppingLensLaunchInfo init] */

void FUN_1039a4f60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCShoppingLensLaunchConfigPrivateServices.ShoppingLensLaunchInfo",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a4f8c);
  (*pcVar1)();
}



/* Entry: 1039a4fc0; end: 1039a5033; -[SCShoppingLensLaunchInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a4fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039a5000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a4fe0) */
/* WARNING: Removing unreachable block (ram,0x0001039a5004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a4fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fbe960));
  return;
}



/* Entry: 1039a5034; end: 1039a5053;  */

void FUN_1039a5034(void)

{
  func_0x000107c61168(&PTR_PTR_11290c0a0);
  return;
}



/* Entry: 1039a5054; end: 1039a5063; -[_TtC34SCShoppingLensLaunchConfigServices34SCShoppingLensLaunchConfigServices productPreselector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbe9c0));
  return;
}



/* Entry: 1039a5064; end: 1039a50af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5064(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbe9c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a50b0; end: 1039a50eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a50b0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fbe9c0) = param_1;
  func_0x0001002b2420();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a50ec; end: 1039a5147; -[_TtC34SCShoppingLensLaunchConfigServices34SCShoppingLensLaunchConfigServices init] */

void FUN_1039a50ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCShoppingLensLaunchConfigServices.SCShoppingLensLaunchConfigServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a5118);
  (*pcVar1)();
}



/* Entry: 1039a5148; end: 1039a5157; -[_TtC34SCShoppingLensLaunchConfigServices34SCShoppingLensLaunchConfigServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbe9c0));
  return;
}



/* Entry: 1039a5158; end: 1039a51df; -[_TtC32SCShoppingLensModerationServices32SCShoppingLensModerationServices moderationStateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5158(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbe9f0;
  func_0x000107c61428(param_1 + _DAT_112fbe9f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1039a51e0; end: 1039a5297; -[_TtC32SCShoppingLensModerationServices32SCShoppingLensModerationServices setModerationStateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a51e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbe9f0;
  func_0x000107c61428(param_1 + _DAT_112fbe9f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1039a5298; end: 1039a52d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1039a5298(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112fbe9f0;
  func_0x000107c61428(unaff_x20 + _DAT_112fbe9f0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1039a52d8;
  return auVar2;
}



/* Entry: 1039a52d8; end: 1039a52db;  */

void FUN_1039a52d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1039a52dc; end: 1039a5327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a52dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbe9f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a5328; end: 1039a5363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5328(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fbe9f0) = param_1;
  func_0x0001002b245c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a5364; end: 1039a53bf; -[_TtC32SCShoppingLensModerationServices32SCShoppingLensModerationServices init] */

void FUN_1039a5364(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCShoppingLensModerationServices.SCShoppingLensModerationServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a5390);
  (*pcVar1)();
}



/* Entry: 1039a53c0; end: 1039a53cf; -[_TtC32SCShoppingLensModerationServices32SCShoppingLensModerationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a53c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbe9f0));
  return;
}


