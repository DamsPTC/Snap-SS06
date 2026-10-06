/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a3879c; end: 100a3891f;  */

/* WARNING: Possible PIC construction at 0x000100a3889c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a388ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a388c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a388a0) */
/* WARNING: Removing unreachable block (ram,0x000100a388b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3879c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f6d0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51120();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a389c4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11305b5d0);
        *(undefined8 *)(lVar2 + _DAT_11305b2d0) = uVar6;
        *(long *)(lVar2 + _DAT_11305b2d8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11305b2d8);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a38920; end: 100a3892b; -[SCSCNotificationPermissionServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a38920(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b6c8;
  func_0x000107c61428(param_1 + _DAT_11305b6c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a3892c; end: 100a3896f;  */

void FUN_100a3892c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a38970; end: 100a3897b; -[SCSCNotificationPermissionServicesSaberEntryPoint pushSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a38970(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b6d0;
  func_0x000107c61428(param_1 + _DAT_11305b6d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a3897c; end: 100a389c3; -[SCSCNotificationPermissionServicesSaberEntryPoint sCNotificationPermissionServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3897c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b6d8;
  func_0x000107c61428(param_1 + _DAT_11305b6d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a389c4; end: 100a389e3;  */

void FUN_100a389c4(void)

{
  func_0x000107c61168(&PTR_PTR_112989c28);
  return;
}



/* Entry: 100a389e4; end: 100a38e1f;  */

long FUN_100a389e4(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  
  lVar4 = 0;
  for (lVar5 = 0xd0; lVar5 != 0x3a0; lVar5 = lVar5 + 0xf0) {
    lVar6 = *(long *)(unaff_x19 + 0x6e0 + lVar5);
    lVar1 = lVar6;
    if (lVar4 <= lVar6) {
      lVar1 = lVar4;
    }
    lVar2 = lVar4;
    if (lVar6 != 0) {
      lVar2 = lVar1;
    }
    bVar3 = lVar4 != 0;
    lVar4 = lVar6;
    if (bVar3) {
      lVar4 = lVar2;
    }
  }
  return lVar4;
}



/* Entry: 100a38e20; end: 100a38e9f; -[SCSCNotificationsServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a38e20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305b710,0);
  func_0x000107c61614(param_1 + _DAT_11305b718,0);
  *(undefined8 *)(param_1 + _DAT_11305b720) = 0;
  *(undefined8 *)(param_1 + _DAT_11305b728) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a38ea0; end: 100a38f4b; -[SCSCNotificationsServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a38ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a38f4c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a38f4c; end: 100a3914f;  */

void FUN_100a38f4c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0e155b0)) ||
       (func_0x000107c605b8(0xd000000000000022,0x800000010f1eaa50,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57a50();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0e15470)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001e,0x800000010f1eab90,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PushSystemScopeGraphBridge/SCSCNotificationsServicesSaberEntryPoint.swift"
                              ,0x49,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a39150);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c586d4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a39150; end: 100a3915b; -[SCSCNotificationsServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a39150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b710;
  func_0x000107c61428(param_1 + _DAT_11305b710,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a3915c; end: 100a391af;  */

void FUN_100a3915c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a391b0; end: 100a391bb; -[SCSCNotificationsServicesSaberEntryPoint setPushSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a391b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b718;
  func_0x000107c61428(param_1 + _DAT_11305b718,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a391bc; end: 100a3921f; -[SCSCNotificationsServicesSaberEntryPoint setSCNotificationsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a391bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b720;
  func_0x000107c61428(param_1 + _DAT_11305b720,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a39220; end: 100a39247; -[SCSCNotificationsServicesSaberEntryPoint begin] */

void FUN_100a39220(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a39248();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a39248; end: 100a393cb;  */

/* WARNING: Possible PIC construction at 0x000100a39348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a39358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a39374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a3934c) */
/* WARNING: Removing unreachable block (ram,0x000100a3935c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a39248(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f6d0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5112c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a39470();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11305b5e0);
        *(undefined8 *)(lVar2 + _DAT_11305b308) = uVar6;
        *(long *)(lVar2 + _DAT_11305b310) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11305b310);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a393cc; end: 100a393d7; -[SCSCNotificationsServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a393cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b710;
  func_0x000107c61428(param_1 + _DAT_11305b710,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a393d8; end: 100a3941b;  */

void FUN_100a393d8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a3941c; end: 100a39427; -[SCSCNotificationsServicesSaberEntryPoint pushSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3941c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b718;
  func_0x000107c61428(param_1 + _DAT_11305b718,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a39428; end: 100a3946f; -[SCSCNotificationsServicesSaberEntryPoint sCNotificationsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a39428(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b720;
  func_0x000107c61428(param_1 + _DAT_11305b720,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a39470; end: 100a3948f;  */

void FUN_100a39470(void)

{
  func_0x000107c61168(&PTR_PTR_112989cf0);
  return;
}



/* Entry: 100a39490; end: 100a3950b;  */

bool FUN_100a39490(void)

{
  ulong uVar1;
  long unaff_x19;
  
  if (*(long *)(unaff_x19 + 0x9d8) != 0) {
    return true;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x980);
  if (uVar1 < *(ulong *)(unaff_x19 + 0x978)) {
    uVar1 = *(long *)(unaff_x19 + 0x990) + uVar1;
  }
  return (ulong)*(uint *)(unaff_x19 + 0x9a0) <
         ((ulong)*(uint *)(unaff_x19 + 0x99c) - *(ulong *)(unaff_x19 + 0x978)) + uVar1;
}



/* Entry: 100a3950c; end: 100a39513; +[SCBackgroundPrefetchEntryPoint context] */

undefined8 FUN_100a3950c(void)

{
  return 2;
}



/* Entry: 100a39514; end: 100a3951b; -[SCDelayedEntryPointHandlerContext fromNotification] */

undefined1 FUN_100a39514(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100a3951c; end: 100a395bf;  */

long FUN_100a3951c(void)

{
  long unaff_x20;
  
  return unaff_x20 + 0x1098;
}



/* Entry: 100a395c0; end: 100a3963f; -[SCSCPlayerServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a395c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305a050,0);
  func_0x000107c61614(param_1 + _DAT_11305a058,0);
  *(undefined8 *)(param_1 + _DAT_11305a060) = 0;
  *(undefined8 *)(param_1 + _DAT_11305a068) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a39640; end: 100a396eb; -[SCSCPlayerServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a39640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a396ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a396ec; end: 100a398ef;  */

void FUN_100a396ec(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0e16910)) ||
       (func_0x000107c605b8(0xd000000000000020,0x800000010f1e96f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c563c8();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef0e16870)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010f1e9790,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MeSystemScopeGraphBridge/SCSCPlayerServicesSaberEntryPoint.swift",
                              0x40,2,0x32,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a398f0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58724();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a398f0; end: 100a398fb; -[SCSCPlayerServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a398f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a050;
  func_0x000107c61428(param_1 + _DAT_11305a050,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a398fc; end: 100a3994f;  */

void FUN_100a398fc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a39950; end: 100a399ff;  */

long * FUN_100a39950(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x000100a275d4();
  if ((plVar1 != (long *)0x0) && ((long *)*plVar1 != (long *)0x0)) {
    (**(code **)(*(long *)*plVar1 + 0x28))();
  }
  func_0x000100a276d8(*param_1);
  return param_1;
}



/* Entry: 100a39a00; end: 100a39a0b; -[SCSCPlayerServicesSaberEntryPoint setMeSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a39a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a058;
  func_0x000107c61428(param_1 + _DAT_11305a058,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a39a0c; end: 100a39a6f; -[SCSCPlayerServicesSaberEntryPoint setSCPlayerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a39a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a060;
  func_0x000107c61428(param_1 + _DAT_11305a060,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a39a70; end: 100a39a97; -[SCSCPlayerServicesSaberEntryPoint begin] */

void FUN_100a39a70(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a39a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a39a98; end: 100a39c1b;  */

/* WARNING: Possible PIC construction at 0x000100a39b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a39ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a39bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a39b9c) */
/* WARNING: Removing unreachable block (ram,0x000100a39bac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a39a98(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c918();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5117c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a39cc0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113059f70);
        *(undefined8 *)(lVar2 + _DAT_113059d70) = uVar6;
        *(long *)(lVar2 + _DAT_113059d78) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113059d78);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a39c1c; end: 100a39c27; -[SCSCPlayerServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a39c1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a050;
  func_0x000107c61428(param_1 + _DAT_11305a050,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a39c28; end: 100a39c6b;  */

void FUN_100a39c28(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a39c6c; end: 100a39c77; -[SCSCPlayerServicesSaberEntryPoint meSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a39c6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a058;
  func_0x000107c61428(param_1 + _DAT_11305a058,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a39c78; end: 100a39cbf; -[SCSCPlayerServicesSaberEntryPoint sCPlayerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a39c78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a060;
  func_0x000107c61428(param_1 + _DAT_11305a060,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a39cc0; end: 100a39cdf;  */

void FUN_100a39cc0(void)

{
  func_0x000107c61168(&PTR_PTR_112988098);
  return;
}



/* Entry: 100a39ce0; end: 100a3aaab;  */

void FUN_100a39ce0(long param_1)

{
  if (param_1 != 0) {
    FUN_10014f860(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100a3aaac; end: 100a3aab3; +[SCNotificationActionHandlerSystemScopedEntryPoint context] */

undefined8 FUN_100a3aaac(void)

{
  return 2;
}



/* Entry: 100a3aab4; end: 100a3ab33; -[SCSCSystemBlizzardServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3aab4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130583c0,0);
  func_0x000107c61614(param_1 + _DAT_1130583c8,0);
  *(undefined8 *)(param_1 + _DAT_1130583d0) = 0;
  *(undefined8 *)(param_1 + _DAT_1130583d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a3ab34; end: 100a3abdf; -[SCSCSystemBlizzardServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a3ab34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a3abe0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a3abe0; end: 100a3ade3;  */

void FUN_100a3abe0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0e17cf0)) ||
       (func_0x000107c605b8(0xd000000000000022,0x800000010f1e8310,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53e40();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0e17be0)) {
        uVar2 = 0xd00000000000001f;
        func_0x000107c605b8(0xd00000000000001f,0x800000010f1e8420,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DatpSystemScopeGraphBridge/SCSCSystemBlizzardServicesSaberEntryPoint.swift"
                              ,0x4a,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3ade4);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58a30();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a3ade4; end: 100a3adef; -[SCSCSystemBlizzardServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3ade4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130583c0;
  func_0x000107c61428(param_1 + _DAT_1130583c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a3adf0; end: 100a3ae43;  */

void FUN_100a3adf0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a3ae44; end: 100a3ae4f; -[SCSCSystemBlizzardServicesSaberEntryPoint setDatpSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3ae44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130583c8;
  func_0x000107c61428(param_1 + _DAT_1130583c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a3ae50; end: 100a3aeb3; -[SCSCSystemBlizzardServicesSaberEntryPoint setSCSystemBlizzardServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3ae50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130583d0;
  func_0x000107c61428(param_1 + _DAT_1130583d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a3aeb4; end: 100a3aedb; -[SCSCSystemBlizzardServicesSaberEntryPoint begin] */

void FUN_100a3aeb4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a3aedc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a3aedc; end: 100a3b05f;  */

/* WARNING: Possible PIC construction at 0x000100a3afdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a3afec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a3b008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a3afe0) */
/* WARNING: Removing unreachable block (ram,0x000100a3aff0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3aedc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c41368();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51488();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a3b104();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113058298);
        *(undefined8 *)(lVar2 + _DAT_113057e08) = uVar6;
        *(long *)(lVar2 + _DAT_113057e10) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113057e10);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a3b060; end: 100a3b06b; -[SCSCSystemBlizzardServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b060(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130583c0;
  func_0x000107c61428(param_1 + _DAT_1130583c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a3b06c; end: 100a3b0af;  */

void FUN_100a3b06c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a3b0b0; end: 100a3b0bb; -[SCSCSystemBlizzardServicesSaberEntryPoint datpSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b0b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130583c8;
  func_0x000107c61428(param_1 + _DAT_1130583c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a3b0bc; end: 100a3b103; -[SCSCSystemBlizzardServicesSaberEntryPoint sCSystemBlizzardServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b0bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130583d0;
  func_0x000107c61428(param_1 + _DAT_1130583d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a3b104; end: 100a3b123;  */

void FUN_100a3b104(void)

{
  func_0x000107c61168(&PTR_PTR_112986668);
  return;
}



/* Entry: 100a3b124; end: 100a3b1a3; -[SCSCSystemInstallServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b124(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113050e88,0);
  func_0x000107c61614(param_1 + _DAT_113050e90,0);
  *(undefined8 *)(param_1 + _DAT_113050e98) = 0;
  *(undefined8 *)(param_1 + _DAT_113050ea0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a3b1a4; end: 100a3b24f; -[SCSCSystemInstallServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a3b1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a3b250(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a3b250; end: 100a3b453;  */

void FUN_100a3b250(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd000000000000023;
    if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef0e1c5d0)) ||
       (func_0x000107c605b8(0xd000000000000023,0x800000010f1e3a30,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c521a8();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0e1c510)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001e,0x800000010f1e3af0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ActivSystemScopeGraphBridge/SCSCSystemInstallServicesSaberEntryPoint.swift"
                              ,0x4a,2,0x49,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3b454);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58a34();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a3b454; end: 100a3b45f; -[SCSCSystemInstallServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b454(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113050e88;
  func_0x000107c61428(param_1 + _DAT_113050e88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a3b460; end: 100a3b4b3;  */

void FUN_100a3b460(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a3b4b4; end: 100a3b4bf; -[SCSCSystemInstallServicesSaberEntryPoint setActivSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113050e90;
  func_0x000107c61428(param_1 + _DAT_113050e90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a3b4c0; end: 100a3b523; -[SCSCSystemInstallServicesSaberEntryPoint setSCSystemInstallServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113050e98;
  func_0x000107c61428(param_1 + _DAT_113050e98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a3b524; end: 100a3b54b; -[SCSCSystemInstallServicesSaberEntryPoint begin] */

void FUN_100a3b524(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a3b54c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a3b54c; end: 100a3b6cf;  */

/* WARNING: Possible PIC construction at 0x000100a3b64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a3b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a3b678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a3b650) */
/* WARNING: Removing unreachable block (ram,0x000100a3b660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b54c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d020();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5148c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a3b774();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113050d80);
        *(undefined8 *)(lVar2 + _DAT_11304f840) = uVar6;
        *(long *)(lVar2 + _DAT_11304f848) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11304f848);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a3b6d0; end: 100a3b6db; -[SCSCSystemInstallServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b6d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113050e88;
  func_0x000107c61428(param_1 + _DAT_113050e88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a3b6dc; end: 100a3b71f;  */

void FUN_100a3b6dc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a3b720; end: 100a3b72b; -[SCSCSystemInstallServicesSaberEntryPoint activSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b720(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113050e90;
  func_0x000107c61428(param_1 + _DAT_113050e90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a3b72c; end: 100a3b773; -[SCSCSystemInstallServicesSaberEntryPoint sCSystemInstallServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3b72c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113050e98;
  func_0x000107c61428(param_1 + _DAT_113050e98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a3b774; end: 100a3b793;  */

void FUN_100a3b774(void)

{
  func_0x000107c61168(&PTR_PTR_112980d68);
  return;
}



/* Entry: 100a3b794; end: 100a3c03b;  */

void FUN_100a3b794(long *param_1)

{
  func_0x0001009f5ff8();
                    /* WARNING: Could not recover jumptable at 0x000100a3b7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}



/* Entry: 100a3c03c; end: 100a3c043; +[SCNewInstallSetupEntryPoint context] */

undefined8 FUN_100a3c03c(void)

{
  return 1;
}



/* Entry: 100a3c044; end: 100a3c0f7;  */

void FUN_100a3c044(void)

{
  return;
}



/* Entry: 100a3c0f8; end: 100a3c1a3;  */

undefined8 * FUN_100a3c0f8(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x20;
    puVar4 = puVar1 + 1;
    puVar1[2] = 0;
    *puVar4 = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    if (param_2 < 0xfffffffffffffff8) {
      puVar2 = (ulong *)(param_2 + 8);
      func_0x000107c610a0();
      if (puVar2 != (ulong *)0x0) {
        puVar3 = puVar2 + 1;
        *puVar2 = param_2;
        puVar1[2] = puVar3;
LAB_100a3c170:
        puVar1[3] = param_2;
        *(undefined4 *)(puVar1 + 4) = 1;
        *param_1 = (long)puVar3;
        return puVar4;
      }
      puVar1[2] = 0;
      if (param_2 == 0) {
        puVar3 = (ulong *)0x0;
        goto LAB_100a3c170;
      }
    }
    else {
      puVar1[2] = 0;
    }
    FUN_1001e33e0(puVar4);
  }
  return (undefined8 *)0x0;
}



/* Entry: 100a3c1a4; end: 100a3c24b;  */

undefined8
FUN_100a3c1a4(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  puVar1 = &uStack_48;
  FUN_100a3c0f8(puVar1,param_3);
  puStack_50 = puVar1;
  if ((puVar1 == (undefined8 *)0x0) ||
     (lStack_58 = param_3, FUN_100a3c24c(param_5,param_4,&lStack_58,uStack_48),
     (int)param_5 != 1 || lStack_58 != param_3)) {
    uVar2 = 0;
  }
  else {
    puStack_50 = (undefined8 *)0x0;
    *param_2 = puVar1;
    uVar2 = 1;
  }
  func_0x000100204700(&puStack_50);
  return uVar2;
}



/* Entry: 100a3c24c; end: 100a3c453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3c24c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uStack_14c0;
  ulong uStack_14b8;
  undefined8 *puStack_14b0;
  undefined8 *puStack_14a8;
  undefined1 *puStack_14a0;
  code *pcStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined4 auStack_1458 [6];
  code *pcStack_1440;
  code *pcStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1420;
  undefined4 uStack_1414;
  undefined8 uStack_1410;
  undefined4 uStack_1408;
  undefined8 uStack_1404;
  undefined8 uStack_13fc;
  undefined4 uStack_13f4;
  undefined8 uStack_13f0;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1318;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined4 uStack_12e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined2 uStack_11d0;
  undefined4 uStack_11cc;
  undefined4 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined *puStack_11b0;
  undefined *puStack_11a8;
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c610bc(auStack_1458,0xaa,0x1410);
  uStack_1470 = 0;
  uStack_1488 = *param_3;
  pcStack_1440 = FUN_100a3dc94;
  pcStack_1438 = (code *)0x100a412c8;
  uStack_1430 = 0;
  uStack_13f4 = 0;
  auStack_1458[0] = 0x40;
  uStack_1460 = 0;
  uStack_1468 = 0;
  uStack_1420 = 0;
  uStack_11c8 = 0;
  uStack_13b8 = 0;
  uStack_13c0 = 0;
  uStack_13c8 = 0;
  uStack_13d0 = 0;
  uStack_13a0 = 0;
  uStack_13a8 = 0;
  uStack_1388 = 0;
  uStack_1390 = 0;
  uStack_12f0 = 0;
  uStack_12f8 = 0;
  uStack_11d8 = 0;
  uStack_11e0 = 0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11d0 = 0xaa90;
  uStack_11cc = 0;
  uStack_13fc = 0x40000000b;
  uStack_1404 = 0xf00000010;
  uStack_1408 = 0;
  uStack_1410 = 0;
  uStack_1414 = 0;
  uStack_1318 = 0;
  uStack_1378 = 0;
  uStack_1370 = 0;
  uStack_13f0 = 0;
  uStack_12e8 = 0x3f;
  puStack_11b0 = &UNK_110ce14e8;
  puStack_11a8 = &UNK_110ce1598;
  puVar1 = &uStack_1468;
  uStack_1490 = param_4;
  uStack_1480 = param_2;
  uStack_1478 = param_1;
  FUN_100a3c6d8(puVar1,&uStack_1478,&uStack_1480,&uStack_1488,&uStack_1490,&uStack_1470);
  *param_3 = uStack_1470;
  (*pcStack_1438)(uStack_1430,uStack_11b8);
  uStack_11b8 = 0;
  (*pcStack_1438)(uStack_1430,uStack_11c0);
  uStack_11c0 = 0;
  (*pcStack_1438)(uStack_1430,uStack_1318);
  uStack_1318 = 0;
  (*pcStack_1438)(uStack_1430,uStack_13c0);
  uStack_13c0 = 0;
  (*pcStack_1438)(uStack_1430,uStack_13a8);
  uStack_13a8 = 0;
  (*pcStack_1438)(uStack_1430,uStack_1390);
  uStack_1390 = 0;
  (*pcStack_1438)(uStack_1430,uStack_13f0);
  uStack_13f0 = 0;
  (*pcStack_1438)(uStack_1430,uStack_1378);
  uStack_14c0 = (ulong)((int)puVar1 == 1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_1498 = FUN_100a3c454;
  uVar2 = uStack_14c0;
  puStack_14b0 = puVar1;
  puStack_14a8 = param_3;
  puStack_14a0 = &stack0xfffffffffffffff0;
  func_0x000107c614f0();
  func_0x000107c61614(uStack_14c0 + _DAT_112d9f240,0);
  *(undefined8 *)(uStack_14c0 + _DAT_112d9f248) = 0;
  uStack_14b8 = uVar2;
  func_0x000107c61154(&uStack_14c0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a3c454; end: 100a3c4b3; -[SCSCSystemScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3c454(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d9f240,0);
  *(undefined8 *)(param_1 + _DAT_112d9f248) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a3c4b4; end: 100a3c67f; -[SCSCSystemScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a3c4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000100a3c560(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a3c680; end: 100a3c6d7; -[SCSCSystemScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3c680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9f240;
  func_0x000107c61428(param_1 + _DAT_112d9f240,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a3c6d8; end: 100a3da43;  */

long * FUN_100a3c6d8(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                    long *param_6)

{
  bool bVar1;
  uint *puVar2;
  long *plVar3;
  byte bVar4;
  uint uVar5;
  uint3 uVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  unkuint9 Var9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  long *plVar24;
  char cVar25;
  ulong uVar26;
  byte bVar62;
  char cVar63;
  char cVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  undefined1 auVar31 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  byte bVar68;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  ulong uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar78;
  int iVar79;
  undefined8 uVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_154;
  uint uStack_90;
  uint auStack_8c [3];
  undefined1 auVar32 [16];
  undefined1 auVar49 [16];
  undefined1 auVar33 [16];
  undefined1 auVar50 [16];
  undefined1 auVar34 [16];
  undefined1 auVar51 [16];
  undefined1 auVar35 [16];
  undefined1 auVar52 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar44 [16];
  undefined1 auVar61 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  
  if (param_6 != (long *)0x0) {
    *param_6 = param_1[0x2f];
  }
  if (*(int *)((long)param_1 + 0x74) < 0) {
    return (long *)0x0;
  }
  if (*param_4 == 0) {
    param_5 = (long *)0x0;
    iVar79 = (int)param_1[9];
  }
  else {
    if ((param_5 == (long *)0x0) || (*param_5 == 0)) {
      *(int *)((long)param_1 + 0x74) = -0x14;
      return (long *)0x0;
    }
    iVar79 = (int)param_1[9];
  }
  if (iVar79 == 0) {
    param_1[4] = *param_2;
    plVar13 = (long *)*param_3;
    plVar12 = (long *)0x1;
  }
  else {
    plVar13 = param_1 + 8;
    plVar12 = (long *)0x2;
  }
  plVar24 = param_1 + 0x5d;
  puVar2 = (uint *)((long)param_1 + 0x11c);
  param_1[3] = (long)plVar13;
  plVar13 = param_1 + 0x55;
  plVar3 = param_1 + 0x59;
  iStack_168 = 0xe;
  iStack_164 = 0xf;
  iStack_170 = 0xc;
  iStack_16c = 0xd;
LAB_100a3c8a8:
  if ((int)plVar12 != 1) {
    if ((int)plVar12 != 2) {
      if ((int)param_1[9] == 0) {
        uVar15 = 0x40 - (int)param_1[2];
        uVar18 = (ulong)(uVar15 >> 3);
        uVar15 = uVar15 & 0xfffffff8;
        lVar14 = param_1[4] + uVar18;
        param_1[3] = param_1[3] - uVar18;
        param_1[4] = lVar14;
        if (uVar15 == 0x40) {
          lVar19 = 0;
        }
        else {
          lVar19 = param_1[1] << ((ulong)uVar15 & 0x3f);
        }
        param_1[1] = lVar19;
        *(uint *)(param_1 + 2) = uVar15 + (int)param_1[2];
        *param_2 = lVar14;
        *param_3 = param_1[3];
      }
      else {
        *(int *)(param_1 + 9) = 0;
      }
      goto code_r0x000100a3da00;
    }
    if ((param_1[0xf] != 0) &&
       (plVar12 = param_1, FUN_100a412d0(param_1,param_4,param_5,param_6,1), (int)plVar12 < 0))
    goto code_r0x000100a3da00;
    if (*(uint *)(param_1 + 9) == 0) {
      *param_3 = param_1[3];
      lVar14 = param_1[4];
      *param_2 = lVar14;
      while (lVar14 != 0) {
        *(undefined1 *)((long)param_1 + (ulong)*(uint *)(param_1 + 9) + 0x40) =
             *(undefined1 *)*param_3;
        *(int *)(param_1 + 9) = (int)param_1[9] + 1;
        *param_3 = *param_3 + 1;
        lVar14 = *param_2 + -1;
        *param_2 = lVar14;
      }
LAB_100a3d998:
      plVar12 = (long *)0x2;
      goto code_r0x000100a3da00;
    }
    if (param_1[4] == 0) {
      *(int *)(param_1 + 9) = 0;
      param_1[4] = *param_2;
      param_1[3] = *param_3;
      plVar12 = (long *)0x1;
    }
    else {
      if (*param_2 == 0) goto LAB_100a3d998;
      *(undefined1 *)((long)param_1 + (ulong)*(uint *)(param_1 + 9) + 0x40) =
           *(undefined1 *)*param_3;
      uVar15 = (int)param_1[9] + 1;
      *(uint *)(param_1 + 9) = uVar15;
      param_1[4] = (ulong)uVar15;
      *param_3 = *param_3 + 1;
      *param_2 = *param_2 + -1;
      plVar12 = (long *)0x1;
    }
    goto LAB_100a3c8a8;
  }
  plVar11 = param_1 + 0x15;
  switch((int)*param_1) {
  case 0:
    uVar18 = (ulong)*(uint *)(param_1 + 2);
    if (*(uint *)(param_1 + 2) == 0x40) {
      plVar12 = (long *)0x2;
      if (param_1[4] == 0) goto LAB_100a3c8a8;
      uVar18 = param_1[1];
      param_1[1] = uVar18 >> 8;
      uVar26 = uVar18 >> 8 | (ulong)*(byte *)param_1[3] << 0x38;
      param_1[1] = uVar26;
      param_1[3] = (long)((byte *)param_1[3] + 1);
      param_1[4] = param_1[4] + -1;
      uVar18 = 0x38;
    }
    else {
      uVar26 = param_1[1];
    }
    uVar21 = *(ushort *)(param_1 + 0x53);
    *(ushort *)(param_1 + 0x53) = uVar21 & 0xffdf;
    iVar79 = (int)uVar18;
    *(uint *)(param_1 + 2) = iVar79 + 1U;
    if ((uVar26 >> (uVar18 & 0x3f) & 1) == 0) {
      uVar15 = 0x10;
    }
    else {
      uVar18 = uVar26 >> ((ulong)(iVar79 + 1U) & 0x3f);
      *(uint *)(param_1 + 2) = iVar79 + 4U;
      if ((uVar18 & 7) == 0) {
        uVar18 = uVar26 >> ((ulong)(iVar79 + 4U) & 0x3f);
        *(uint *)(param_1 + 2) = iVar79 + 7U;
        uVar15 = (uint)uVar18 & 7;
        if ((uVar18 & 7) == 0) {
          uVar15 = 0x11;
        }
        else {
          if (uVar15 == 1) {
            plVar12 = (long *)0xfffffff3;
            if (((uVar21 >> 5 & 1) != 0) &&
               (*(int *)(param_1 + 2) = iVar79 + 8,
               (uVar26 >> ((ulong)(iVar79 + 7U) & 0x3f) & 1) == 0)) {
              *(ushort *)(param_1 + 0x53) = uVar21;
              plVar12 = (long *)0x1;
              *(int *)param_1 = 1;
            }
            goto LAB_100a3c8a8;
          }
          uVar15 = uVar15 | 8;
        }
      }
      else {
        uVar15 = ((uint)uVar18 & 7) + 0x11;
      }
    }
    *(uint *)((long)param_1 + 0x29c) = uVar15;
    iVar79 = 2;
    break;
  case 1:
    uVar16 = *(uint *)(param_1 + 2);
    if (uVar16 - 0x3b < 6) {
      plVar12 = (long *)0x2;
      if (param_1[4] == 0) goto LAB_100a3c8a8;
      uVar18 = param_1[1];
      param_1[1] = uVar18 >> 8;
      uVar18 = uVar18 >> 8 | (ulong)*(byte *)param_1[3] << 0x38;
      param_1[1] = uVar18;
      uVar16 = uVar16 - 8;
      param_1[3] = (long)((byte *)param_1[3] + 1);
      param_1[4] = param_1[4] + -1;
    }
    else {
      uVar18 = param_1[1];
    }
    uVar15 = (uint)(uVar18 >> ((ulong)uVar16 & 0x3f)) & 0x3f;
    *(uint *)((long)param_1 + 0x29c) = uVar15;
    *(uint *)(param_1 + 2) = uVar16 + 6;
    plVar12 = (long *)0xfffffff3;
    if (0xffffffea < uVar15 - 0x1f) {
      *(int *)param_1 = 2;
      goto code_r0x000100a3cd38;
    }
    goto LAB_100a3c8a8;
  case 2:
    uVar15 = *(uint *)((long)param_1 + 0x29c);
code_r0x000100a3cd38:
    *(int *)(param_1 + 10) = (1 << (ulong)(uVar15 & 0x1f)) + -0x10;
    lVar14 = param_1[7];
    (*(code *)param_1[5])(lVar14,0x3030);
    param_1[0x1e] = lVar14;
    plVar12 = (long *)0xffffffe2;
    if (lVar14 == 0) goto LAB_100a3c8a8;
    param_1[0x1f] = lVar14 + 0x1da0;
code_r0x000100a3cd74:
    *(int *)(param_1 + 0x21) = 0;
    param_1[0x23] = (long)&UNK_101000000;
    param_1[0x22] = 0x100000001000000;
    param_1[0x25] = 1;
    param_1[0x24] = 0x100000001;
    param_1[0x27] = 1;
    param_1[0x26] = 1;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *plVar13 = 0;
    param_1[0x56] = 0;
    *(int *)param_1 = 4;
code_r0x000100a3cdb4:
    plVar12 = param_1;
    func_0x000100a3dc9c(param_1,param_1 + 1);
    if ((int)plVar12 != 1) goto LAB_100a3c8a8;
    if ((*(ushort *)(param_1 + 0x53) & 6) != 0) {
      uVar16 = *(uint *)(param_1 + 2);
      uVar15 = -uVar16 & 7;
      if (uVar15 != 0) {
        *(uint *)(param_1 + 2) = uVar15 + uVar16;
        plVar12 = (long *)0xfffffff2;
        if (((uint)((ulong)param_1[1] >> ((ulong)uVar16 & 0x3f)) &
            (-1 << (ulong)uVar15 ^ 0xffffffffU)) != 0) goto LAB_100a3c8a8;
      }
      if ((*(ushort *)(param_1 + 0x53) >> 2 & 1) != 0) {
        iVar79 = 0xc;
        break;
      }
    }
    if ((int)param_1[0x21] == 0) {
code_r0x000100a3d814:
      iVar79 = 0xe;
    }
    else {
      func_0x000100a3e1b0(param_1);
      if ((*(ushort *)(param_1 + 0x53) >> 1 & 1) == 0) {
code_r0x000100a3ce30:
        iVar79 = 0;
        param_1[0x72] = (long)(param_1 + 0x77);
        *plVar24 = 0;
        param_1[0x5e] = 0;
        *param_1 = 0x12;
code_r0x000100a3ce44:
        plVar12 = param_1;
        func_0x000100a3e21c(param_1,param_1 + 1,puVar2 + iVar79);
        if ((int)plVar12 == 1) {
          puVar2[*(int *)((long)param_1 + 4)] = puVar2[*(int *)((long)param_1 + 4)] + 1;
          iVar79 = *(int *)((long)param_1 + 4);
          if (puVar2[iVar79] < 2) {
            *(int *)((long)param_1 + 4) = iVar79 + 1;
            plVar12 = (long *)0x1;
          }
          else {
            *(int *)param_1 = 0x13;
code_r0x000100a3d43c:
            plVar12 = (long *)(ulong)(puVar2[iVar79] + 2);
            FUN_100a3e8b8(plVar12,puVar2[iVar79] + 2,param_1[0x1e] + (long)(iVar79 * 0x278) * 4,0,
                          param_1);
            if ((int)plVar12 == 1) {
              *(int *)param_1 = 0x14;
code_r0x000100a3d480:
              plVar12 = (long *)0x1a;
              FUN_100a3e8b8(0x1a,0x1a,param_1[0x1f] + (long)*(int *)((long)param_1 + 4) * 0x630,0,
                            param_1);
              if ((int)plVar12 == 1) {
                *(int *)param_1 = 0x15;
code_r0x000100a3d4bc:
                iVar79 = *(int *)((long)param_1 + 4);
                uStack_90 = 0xaaaaaaaa;
                if (*(int *)((long)param_1 + 0x294) == 0) {
                  lVar14 = param_1[0x1f] + (long)iVar79 * 0x630;
                  uVar18 = (ulong)*(uint *)(param_1 + 2);
                  if (*(uint *)(param_1 + 2) - 0x32 < 0xf) {
                    lVar19 = param_1[4];
                    do {
                      lVar19 = lVar19 + -1;
                      if (lVar19 == -1) {
                        FUN_100a4120c(lVar14,param_1 + 1,&uStack_90);
                        if ((int)lVar14 != 0) {
                          uVar18 = (ulong)uStack_90;
                          goto code_r0x000100a3d628;
                        }
                        plVar12 = (long *)0x2;
                        goto LAB_100a3c8a8;
                      }
                      uVar26 = param_1[1];
                      param_1[1] = uVar26 >> 8;
                      uVar26 = uVar26 >> 8 | (ulong)*(byte *)param_1[3] << 0x38;
                      param_1[1] = uVar26;
                      iVar81 = (int)uVar18;
                      uVar15 = iVar81 - 8;
                      uVar18 = (ulong)uVar15;
                      *(uint *)(param_1 + 2) = uVar15;
                      param_1[3] = (long)((byte *)param_1[3] + 1);
                      param_1[4] = lVar19;
                    } while (iVar81 - 0x3aU < 0xf);
                  }
                  else {
                    uVar26 = param_1[1];
                  }
                  iVar81 = (int)uVar18;
                  uVar26 = uVar26 >> (uVar18 & 0x3f);
                  pbVar17 = (byte *)(lVar14 + (uVar26 & 0xff) * 4);
                  bVar4 = *pbVar17;
                  if (8 < bVar4) {
                    iVar81 = iVar81 + 8;
                    *(int *)(param_1 + 2) = iVar81;
                    pbVar17 = pbVar17 + (ulong)(((uint)uVar26 >> 8 &
                                                 (-1 << (ulong)(bVar4 - 8 & 0x1f) ^ 0xffffffffU) &
                                                0x7f) + (uint)*(ushort *)(pbVar17 + 2)) * 4;
                    bVar4 = *pbVar17;
                  }
                  *(uint *)(param_1 + 2) = iVar81 + (uint)bVar4;
                  uVar18 = (ulong)*(ushort *)(pbVar17 + 2);
                }
                else {
                  uVar18 = (ulong)*(uint *)((long)param_1 + 0x10c);
                }
code_r0x000100a3d628:
                bVar4 = (&UNK_10e58ebc2)[uVar18 * 4];
                uVar21 = *(ushort *)(&UNK_10e58ebc0 + uVar18 * 4);
                uVar26 = (ulong)*(uint *)(param_1 + 2);
                uVar15 = 0x40 - *(uint *)(param_1 + 2);
                if (uVar15 < bVar4) {
                  lVar14 = param_1[4];
                  do {
                    lVar14 = lVar14 + -1;
                    if (lVar14 == -1) {
                      *(int *)((long)param_1 + 0x10c) = (int)uVar18;
                      *(int *)((long)param_1 + 0x294) = 1;
                      plVar12 = (long *)0x2;
                      goto LAB_100a3c8a8;
                    }
                    uVar69 = param_1[1];
                    param_1[1] = uVar69 >> 8;
                    uVar69 = uVar69 >> 8 | (ulong)*(byte *)param_1[3] << 0x38;
                    param_1[1] = uVar69;
                    uVar16 = (int)uVar26 - 8;
                    uVar26 = (ulong)uVar16;
                    *(uint *)(param_1 + 2) = uVar16;
                    param_1[3] = (long)((byte *)param_1[3] + 1);
                    param_1[4] = lVar14;
                    uVar15 = uVar15 + 8;
                  } while (uVar15 < bVar4);
                }
                else {
                  uVar69 = param_1[1];
                }
                *(uint *)(param_1 + 2) = (int)uVar26 + (uint)bVar4;
                *(uint *)((long)param_1 + (long)iVar79 * 4 + 0x110) =
                     ((uint)(uVar69 >> (uVar26 & 0x3f)) &
                     (-1 << (ulong)(bVar4 & 0x1f) ^ 0xffffffffU)) + (uint)uVar21;
                *(int *)((long)param_1 + 0x294) = 0;
                *(int *)param_1 = 0x12;
                *(int *)((long)param_1 + 4) = *(int *)((long)param_1 + 4) + 1;
                plVar12 = (long *)0x1;
              }
            }
          }
        }
        goto LAB_100a3c8a8;
      }
      iVar79 = 0xb;
    }
    break;
  case 3:
    goto code_r0x000100a3cd74;
  case 4:
    goto code_r0x000100a3cdb4;
  case 5:
    uVar15 = *(uint *)(param_1 + 2);
    if (uVar15 - 0x3b < 6) {
      plVar12 = (long *)0x2;
      if (param_1[4] == 0) goto LAB_100a3c8a8;
      uVar18 = param_1[1];
      param_1[1] = uVar18 >> 8;
      uVar18 = uVar18 >> 8 | (ulong)*(byte *)param_1[3] << 0x38;
      param_1[1] = uVar18;
      uVar15 = uVar15 - 8;
      param_1[3] = (long)((byte *)param_1[3] + 1);
      param_1[4] = param_1[4] + -1;
    }
    else {
      uVar18 = param_1[1];
    }
    *(uint *)(param_1 + 2) = uVar15 + 6;
    uVar16 = (uint)(uVar18 >> ((ulong)uVar15 & 0x3f));
    uVar15 = uVar16 & 3;
    *(uint *)(param_1 + 0x28) = uVar15;
    *(uint *)((long)param_1 + 0x144) = (uVar16 >> 2 & 0xf) << (ulong)uVar15;
    lVar14 = param_1[7];
    (*(code *)param_1[5])(lVar14,*(int *)((long)param_1 + 0x11c));
    param_1[0x56] = lVar14;
    plVar12 = (long *)0xffffffeb;
    if (lVar14 != 0) {
      iVar79 = 0;
      *param_1 = 6;
      uVar15 = *puVar2;
      if (0 < (int)uVar15) {
code_r0x000100a3cef8:
        lVar14 = (long)iVar79;
        do {
          uVar15 = *(uint *)(param_1 + 2);
          if (uVar15 - 0x3f < 2) {
            if (param_1[4] == 0) {
              *(int *)((long)param_1 + 4) = (int)lVar14;
              plVar12 = (long *)0x2;
              goto LAB_100a3c8a8;
            }
            uVar18 = param_1[1];
            param_1[1] = uVar18 >> 8;
            uVar18 = uVar18 >> 8 | (ulong)*(byte *)param_1[3] << 0x38;
            param_1[1] = uVar18;
            uVar15 = uVar15 - 8;
            param_1[3] = (long)((byte *)param_1[3] + 1);
            param_1[4] = param_1[4] + -1;
          }
          else {
            uVar18 = param_1[1];
          }
          *(uint *)(param_1 + 2) = uVar15 + 2;
          *(byte *)(param_1[0x56] + lVar14) = (byte)(uVar18 >> ((ulong)uVar15 & 0x3f)) & 3;
          lVar14 = lVar14 + 1;
          uVar15 = *(uint *)((long)param_1 + 0x11c);
        } while (lVar14 < (int)uVar15);
      }
      goto code_r0x000100a3cf70;
    }
    goto LAB_100a3c8a8;
  case 6:
    iVar79 = *(int *)((long)param_1 + 4);
    uVar15 = *puVar2;
    if (iVar79 < (int)uVar15) goto code_r0x000100a3cef8;
code_r0x000100a3cf70:
    *(int *)param_1 = 0x16;
code_r0x000100a3cf78:
    plVar12 = (long *)(ulong)(uVar15 << 6);
    FUN_100a3e404(plVar12,(int *)((long)param_1 + 0x2a4),plVar13,param_1);
    if ((int)plVar12 != 1) goto LAB_100a3c8a8;
    param_1[0x5a] = 0;
    *plVar3 = 0;
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    uVar15 = *puVar2;
    if (uVar15 != 0) {
      lVar14 = 0;
      uVar18 = 0;
      lVar19 = *plVar13;
      do {
        pbVar17 = (byte *)(lVar19 + lVar14);
        bVar4 = *pbVar17;
        auVar46._0_8_ =
             CONCAT17(-(pbVar17[0x37] == bVar4),
                      CONCAT16(-(pbVar17[0x36] == bVar4),
                               CONCAT15(-(pbVar17[0x35] == bVar4),
                                        CONCAT14(-(pbVar17[0x34] == bVar4),
                                                 CONCAT13(-(pbVar17[0x33] == bVar4),
                                                          CONCAT12(-(pbVar17[0x32] == bVar4),
                                                                   CONCAT11(-(pbVar17[0x31] == bVar4
                                                                             ),-(pbVar17[0x30] ==
                                                                                bVar4)))))))) &
             0x8040201008040201;
        auVar46[8] = -(pbVar17[0x38] == bVar4) & 1;
        auVar46[9] = -(pbVar17[0x39] == bVar4) & 2;
        auVar46[10] = -(pbVar17[0x3a] == bVar4) & 4;
        auVar46[0xb] = -(pbVar17[0x3b] == bVar4) & 8;
        auVar46[0xc] = -(pbVar17[0x3c] == bVar4) & 0x10;
        auVar46[0xd] = -(pbVar17[0x3d] == bVar4) & 0x20;
        auVar46[0xe] = -(pbVar17[0x3e] == bVar4) & 0x40;
        auVar46[0xf] = -(pbVar17[0x3f] == bVar4) & 0x80;
        auVar70 = NEON_ext(auVar46,auVar46,8,1);
        auVar7._1_13_ = auVar46._3_13_;
        auVar7[0] = -(pbVar17[0x31] == bVar4) & 2;
        auVar33._5_11_ = auVar46._5_11_;
        auVar33._0_5_ = CONCAT14(-(pbVar17[0x32] == bVar4),auVar7._0_4_ << 0x10) & 0x4ffffffff;
        auVar35._7_9_ = auVar46._7_9_;
        auVar35._0_7_ = CONCAT16(-(pbVar17[0x33] == bVar4),auVar33._0_6_) & 0x8ffffffffffff;
        auVar37._9_7_ = auVar46._9_7_;
        auVar37._0_8_ = auVar35._0_8_;
        auVar37[8] = -(pbVar17[0x34] == bVar4) & 0x10;
        auVar39._11_5_ = auVar46._11_5_;
        auVar39._0_10_ = auVar37._0_10_;
        auVar39[10] = -(pbVar17[0x35] == bVar4) & 0x20;
        auVar41._13_3_ = auVar46._13_3_;
        auVar41._0_12_ = auVar39._0_12_;
        auVar41[0xc] = -(pbVar17[0x36] == bVar4) & 0x40;
        auVar43._0_14_ = auVar41._0_14_;
        auVar43[0xe] = -(pbVar17[0x37] == bVar4) & 0x80;
        auVar43[0xf] = auVar46[0xf];
        auVar31._2_14_ = auVar43._2_14_;
        auVar31._0_2_ = CONCAT11(auVar70[0],-(pbVar17[0x30] == bVar4)) & 0xff01;
        auVar32._4_12_ = auVar43._4_12_;
        auVar32._0_4_ = CONCAT13(auVar70[1],auVar31._0_3_);
        auVar34._6_10_ = auVar43._6_10_;
        auVar34._0_6_ = CONCAT15(auVar70[2],auVar32._0_5_);
        auVar36._8_8_ = auVar43._8_8_;
        auVar36._0_8_ = CONCAT17(auVar70[3],auVar34._0_7_);
        auVar38._10_6_ = auVar43._10_6_;
        auVar38._0_10_ = CONCAT19(auVar70[4],auVar36._0_9_);
        auVar40._12_4_ = auVar43._12_4_;
        auVar27._0_11_ = auVar38._0_11_;
        auVar27[0xb] = auVar70[5];
        auVar40._0_12_ = auVar27;
        auVar42._14_2_ = auVar43._14_2_;
        auVar29._0_13_ = auVar40._0_13_;
        auVar29[0xd] = auVar70[6];
        auVar42._0_14_ = auVar29;
        auVar44._0_15_ = auVar42._0_15_;
        auVar44[0xf] = auVar70[7];
        Var9 = CONCAT18(-(pbVar17[0x1f] == bVar4),
                        CONCAT17(-(pbVar17[0x1e] == bVar4),
                                 CONCAT16(-(pbVar17[0x1d] == bVar4),
                                          CONCAT15(-(pbVar17[0x1c] == bVar4),
                                                   CONCAT14(-(pbVar17[0x1b] == bVar4),
                                                            CONCAT13(-(pbVar17[0x1a] == bVar4),
                                                                     CONCAT12(-(pbVar17[0x19] ==
                                                                               bVar4),CONCAT11(-(
                                                  pbVar17[0x18] == bVar4),-(pbVar17[0x17] == bVar4))
                                                  )))))));
        auVar70._9_7_ = 0;
        auVar70._0_9_ = Var9;
        auVar70 = auVar70 << 0x38;
        uVar80 = *(undefined8 *)(pbVar17 + 8);
        uVar78 = *(undefined4 *)(pbVar17 + 4);
        uVar6 = CONCAT12((char)((uint)uVar78 >> 8),(short)uVar78) & 0xff00ff;
        uVar21 = (ushort)bVar4;
        auVar45._0_8_ =
             CONCAT17(-(pbVar17[0x27] == bVar4) & -(pbVar17[0x17] == bVar4),
                      CONCAT16(-(pbVar17[0x26] == bVar4) & -(pbVar17[0x16] == bVar4),
                               CONCAT15(-(pbVar17[0x25] == bVar4) & -(pbVar17[0x15] == bVar4),
                                        CONCAT14(-(pbVar17[0x24] == bVar4) &
                                                 -(pbVar17[0x14] == bVar4),
                                                 CONCAT13(-(pbVar17[0x23] == bVar4) &
                                                          -(pbVar17[0x13] == bVar4),
                                                          CONCAT12(-(pbVar17[0x22] == bVar4) &
                                                                   -(pbVar17[0x12] == bVar4),
                                                                   CONCAT11(-(pbVar17[0x21] == bVar4
                                                                             ) & -(pbVar17[0x11] ==
                                                                                  bVar4),
                                                                            -(pbVar17[0x20] == bVar4
                                                                             ) & -(pbVar17[0x10] ==
                                                                                  bVar4))))))));
        auVar45[8] = -(pbVar17[0x28] == bVar4) & -(pbVar17[0x18] == bVar4);
        auVar45[9] = -(pbVar17[0x29] == bVar4) & -(pbVar17[0x19] == bVar4);
        auVar45[10] = -(pbVar17[0x2a] == bVar4) & -(pbVar17[0x1a] == bVar4);
        auVar45[0xb] = -(pbVar17[0x2b] == bVar4) & -(pbVar17[0x1b] == bVar4);
        auVar45[0xc] = -(pbVar17[0x2c] == bVar4) & -(pbVar17[0x1c] == bVar4);
        auVar45[0xd] = -(pbVar17[0x2d] == bVar4) & -(pbVar17[0x1d] == bVar4);
        auVar45[0xe] = -(pbVar17[0x2e] == bVar4) & -(pbVar17[0x1e] == bVar4);
        auVar45[0xf] = -(pbVar17[0x2f] == bVar4) & -(pbVar17[0x1f] == bVar4);
        uVar69 = auVar45._0_8_ &
                 CONCAT17(-((byte)((ulong)uVar80 >> 0x38) == bVar4),
                          CONCAT16(-((byte)((ulong)uVar80 >> 0x30) == bVar4),
                                   CONCAT15(-((byte)((ulong)uVar80 >> 0x28) == bVar4),
                                            CONCAT14(-((byte)((ulong)uVar80 >> 0x20) == bVar4),
                                                     CONCAT13(-((byte)((ulong)uVar80 >> 0x18) ==
                                                               bVar4),CONCAT12(-((byte)((ulong)
                                                  uVar80 >> 0x10) == bVar4),
                                                  CONCAT11(-((byte)((ulong)uVar80 >> 8) == bVar4),
                                                           -((byte)uVar80 == bVar4))))))));
        auVar46 = NEON_ext(auVar45,auVar45,8,1);
        auVar71._1_15_ = auVar70._1_15_;
        auVar71[0] = (char)uVar69;
        auVar73._3_13_ = auVar70._3_13_;
        auVar72._0_2_ = auVar71._0_2_;
        auVar73[2] = (char)(uVar69 >> 8);
        auVar73._0_2_ = auVar72._0_2_;
        auVar75._5_11_ = auVar70._5_11_;
        auVar75._0_4_ = auVar73._0_4_;
        auVar75[4] = (char)(uVar69 >> 0x10);
        auVar77._0_6_ = auVar75._0_6_;
        auVar77[6] = (char)(uVar69 >> 0x18);
        auVar77._7_9_ = Var9;
        auVar72._2_14_ = auVar77._2_14_;
        auVar74._4_12_ = auVar77._4_12_;
        auVar74._0_3_ = auVar72._0_3_;
        auVar74[3] = 0;
        auVar76._6_10_ = auVar77._6_10_;
        auVar76._0_5_ = auVar74._0_5_;
        auVar76[5] = 0;
        uVar26 = CONCAT17(auVar46[3],auVar76._0_7_) &
                 CONCAT26(-(ushort)((byte)((uint)uVar78 >> 0x18) == uVar21),
                          CONCAT24(-(ushort)((byte)((uint)uVar78 >> 0x10) == uVar21),
                                   CONCAT22(-(ushort)((byte)(uVar6 >> 0x10) == uVar21),
                                            -(ushort)((ushort)uVar6 == uVar21))));
        cVar25 = -((char)((char)uVar26 << 7) < '\0');
        bVar62 = -((char)((char)(uVar26 >> 0x10) << 7) < '\0');
        cVar63 = -((char)((char)(uVar26 >> 0x20) << 7) < '\0');
        cVar64 = -((char)((char)(uVar26 >> 0x30) << 7) < '\0');
        bVar65 = -((char)((char)(uVar69 >> 0x20) << 7) < '\0');
        bVar66 = -((char)((char)(uVar69 >> 0x28) << 7) < '\0');
        bVar67 = -((char)((char)(uVar69 >> 0x30) << 7) < '\0');
        bVar68 = -((char)((char)(uVar69 >> 0x38) << 7) < '\0');
        auVar47._0_8_ =
             CONCAT17(bVar68,CONCAT16(bVar67,CONCAT15(bVar66,CONCAT14(bVar65,CONCAT13(cVar64,
                                                  CONCAT12(cVar63,CONCAT11(bVar62,cVar25))))))) &
             0x8040201008040201;
        auVar47[8] = -((char)(auVar46[0] << 7) < '\0') & 1;
        auVar47[9] = -((char)(auVar46[1] << 7) < '\0') & 2;
        auVar47[10] = -((char)(auVar46[2] << 7) < '\0') & 4;
        auVar47[0xb] = -((char)(auVar46[3] << 7) < '\0') & 8;
        auVar47[0xc] = -((char)(auVar46[4] << 7) < '\0') & 0x10;
        auVar47[0xd] = -((char)(auVar46[5] << 7) < '\0') & 0x20;
        auVar47[0xe] = -((char)(auVar46[6] << 7) < '\0') & 0x40;
        auVar47[0xf] = -((char)(auVar46[7] << 7) < '\0') & 0x80;
        auVar70 = NEON_ext(auVar47,auVar47,8,1);
        auVar8._1_13_ = auVar47._3_13_;
        auVar8[0] = bVar62 & 2;
        auVar50._5_11_ = auVar47._5_11_;
        auVar50._0_5_ = CONCAT14(cVar63,auVar8._0_4_ << 0x10) & 0x4ffffffff;
        auVar52._7_9_ = auVar47._7_9_;
        auVar52._0_7_ = CONCAT16(cVar64,auVar50._0_6_) & 0x8ffffffffffff;
        auVar54._9_7_ = auVar47._9_7_;
        auVar54._0_8_ = auVar52._0_8_;
        auVar54[8] = bVar65 & 0x10;
        auVar56._11_5_ = auVar47._11_5_;
        auVar56._0_10_ = auVar54._0_10_;
        auVar56[10] = bVar66 & 0x20;
        auVar58._13_3_ = auVar47._13_3_;
        auVar58._0_12_ = auVar56._0_12_;
        auVar58[0xc] = bVar67 & 0x40;
        auVar60._0_14_ = auVar58._0_14_;
        auVar60[0xe] = bVar68 & 0x80;
        auVar60[0xf] = auVar47[0xf];
        auVar48._2_14_ = auVar60._2_14_;
        auVar48._0_2_ = CONCAT11(auVar70[0],cVar25) & 0xff01;
        auVar49._4_12_ = auVar60._4_12_;
        auVar49._0_4_ = CONCAT13(auVar70[1],auVar48._0_3_);
        auVar51._6_10_ = auVar60._6_10_;
        auVar51._0_6_ = CONCAT15(auVar70[2],auVar49._0_5_);
        auVar53._8_8_ = auVar60._8_8_;
        auVar53._0_8_ = CONCAT17(auVar70[3],auVar51._0_7_);
        auVar55._10_6_ = auVar60._10_6_;
        auVar55._0_10_ = CONCAT19(auVar70[4],auVar53._0_9_);
        auVar57._12_4_ = auVar60._12_4_;
        auVar28._0_11_ = auVar55._0_11_;
        auVar28[0xb] = auVar70[5];
        auVar57._0_12_ = auVar28;
        auVar59._14_2_ = auVar60._14_2_;
        auVar30._0_13_ = auVar57._0_13_;
        auVar30[0xd] = auVar70[6];
        auVar59._0_14_ = auVar30;
        auVar61._0_15_ = auVar59._0_15_;
        auVar61[0xf] = auVar70[7];
        if (((((ushort)(auVar31._0_2_ + (short)((uint)auVar32._0_4_ >> 0x10) +
                        (short)((uint6)auVar34._0_6_ >> 0x20) +
                        (short)((ulong)auVar36._0_8_ >> 0x30) +
                        (short)((unkuint10)auVar38._0_10_ >> 0x40) + auVar27._10_2_ + auVar29._12_2_
                        + auVar44._14_2_ &
                       auVar48._0_2_ + (short)((uint)auVar49._0_4_ >> 0x10) +
                       (short)((uint6)auVar51._0_6_ >> 0x20) + (short)((ulong)auVar53._0_8_ >> 0x30)
                       + (short)((unkuint10)auVar55._0_10_ >> 0x40) + auVar28._10_2_ +
                       auVar30._12_2_ + auVar61._14_2_) == 0xffff) && (pbVar17[1] == bVar4)) &&
            (pbVar17[2] == bVar4)) && (pbVar17[3] == bVar4)) {
          uVar26 = uVar18 >> 3 & 0x1ffffffffffffffc;
          *(uint *)((long)plVar3 + uVar26) =
               *(uint *)((long)plVar3 + uVar26) | 1 << (ulong)((uint)uVar18 & 0x1f);
        }
        uVar18 = uVar18 + 1;
        lVar14 = lVar14 + 0x40;
      } while ((ulong)uVar15 * 0x40 - lVar14 != 0);
    }
    *(int *)param_1 = 0x17;
code_r0x000100a3d0c8:
    uVar15 = *(uint *)(param_1 + 0x28);
    uVar16 = *(uint *)((long)param_1 + 0x144);
    iVar79 = uVar16 + 0x10;
    if ((*(ushort *)(param_1 + 0x53) >> 5 & 1) == 0) {
      iVar79 = iVar79 + (0x18 << (ulong)(uVar15 + 1 & 0x1f));
      iStack_154 = iVar79;
    }
    else {
      if (uVar16 < 0x7ffffffc) {
        uVar20 = (0x7ffffffc - uVar16 >> (ulong)(uVar15 & 0x1f)) + 4;
        uVar22 = 0xffffffff;
        iVar81 = -5;
        uVar23 = uVar20;
        do {
          uVar22 = uVar22 + 1;
          iVar81 = iVar81 + 2;
          bVar1 = 3 < uVar23;
          uVar23 = uVar23 >> 1;
        } while (bVar1);
        iVar81 = (uVar20 >> (ulong)(uVar22 & 0x1f) & 1) + iVar81;
        iStack_154 = iVar79;
        if (iVar81 != -1) {
          iStack_154 = uVar16 + (iVar81 << (ulong)(uVar15 & 0x1f) |
                                -1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU) + 0x11;
        }
      }
      else {
        iStack_154 = -0x7ffffff4;
      }
      iVar79 = iVar79 + (0x3e << (ulong)(uVar15 + 1 & 0x1f));
    }
    plVar12 = (long *)(ulong)(uint)(*(int *)((long)param_1 + 0x124) << 2);
    FUN_100a3e404(plVar12,param_1 + 0x29,param_1 + 0x2a,param_1);
    if ((int)plVar12 != 1) goto LAB_100a3c8a8;
    uVar15 = *(uint *)((long)param_1 + 0x2a4);
    lVar14 = param_1[7];
    (*(code *)param_1[5])(lVar14,(ulong)uVar15 * 0x9e8);
    *(int *)(param_1 + 0x17) = 0x1000100;
    *(short *)((long)param_1 + 0xbc) = (short)uVar15;
    param_1[0x15] = lVar14;
    param_1[0x16] = lVar14 + (ulong)uVar15 * 8;
    uVar15 = *(uint *)(param_1 + 0x24);
    lVar19 = param_1[7];
    (*(code *)param_1[5])(lVar19,(ulong)uVar15 * 0x10e8);
    *(int *)(param_1 + 0x1a) = 0x2c002c0;
    *(short *)((long)param_1 + 0xd4) = (short)uVar15;
    param_1[0x18] = lVar19;
    param_1[0x19] = lVar19 + (ulong)uVar15 * 8;
    uVar15 = *(uint *)(param_1 + 0x29);
    lVar10 = param_1[7];
    (*(code *)param_1[5])(lVar10,((ulong)(iStack_154 + 0x178) * 4 + 8) * (ulong)uVar15);
    *(short *)(param_1 + 0x1d) = (short)iVar79;
    *(short *)((long)param_1 + 0xea) = (short)iStack_154;
    *(short *)((long)param_1 + 0xec) = (short)uVar15;
    param_1[0x1b] = lVar10;
    param_1[0x1c] = lVar10 + (ulong)uVar15 * 8;
    if (((lVar14 == 0) || (lVar19 == 0)) || (lVar10 == 0)) {
      plVar12 = (long *)0xffffffea;
      goto code_r0x000100a3da00;
    }
    iVar79 = 0;
    *param_1 = 0x18;
    iVar81 = (int)*plVar24;
    goto joined_r0x000100a3d71c;
  case 7:
  case 8:
  case 9:
  case 10:
    plVar12 = param_1;
    FUN_100a3fbe0();
    iVar79 = (int)plVar12;
    goto joined_r0x000100a3c96c;
  case 0xb:
    plVar12 = param_4;
    func_0x000107c2f048(param_4,param_5,param_6,param_1);
    if ((int)plVar12 == 1) {
      *(int *)param_1 = 0xe;
    }
    goto LAB_100a3c8a8;
  case 0xc:
    if (0 < (int)param_1[0x21]) {
      iVar81 = (int)param_1[2];
      iVar79 = (int)param_1[0x21] + 1;
      do {
        if (iVar81 - 0x39U < 8) {
          if (param_1[4] == 0) {
            plVar12 = (long *)0x2;
            goto LAB_100a3c8a8;
          }
          uVar18 = param_1[1];
          param_1[1] = uVar18 >> 8;
          param_1[1] = uVar18 >> 8 | (ulong)*(byte *)param_1[3] << 0x38;
          iVar81 = iVar81 + -8;
          param_1[3] = (long)((byte *)param_1[3] + 1);
          param_1[4] = param_1[4] + -1;
        }
        iVar81 = iVar81 + 8;
        *(int *)(param_1 + 2) = iVar81;
        *(int *)(param_1 + 0x21) = iVar79 + -2;
        iVar79 = iVar79 + -1;
      } while (1 < iVar79);
    }
    goto code_r0x000100a3d814;
  case 0xd:
  case 0xf:
  case 0x10:
    plVar12 = param_1;
    FUN_100a412d0(param_1,param_4,param_5,param_6,0);
    if ((int)plVar12 != 1) goto LAB_100a3c8a8;
    func_0x000107c2f050(param_1);
    if ((int)param_1[0xb] == 1 << (ulong)(*(uint *)((long)param_1 + 0x29c) & 0x1f)) {
      *(int *)((long)param_1 + 0x54) = (int)param_1[10];
    }
    if ((int)*param_1 == 0x10) {
      iVar79 = 10;
code_r0x000100a3cca8:
      *(int *)param_1 = iVar79;
      plVar12 = (long *)0x1;
      goto LAB_100a3c8a8;
    }
    if ((int)*param_1 == 0xf) {
      if ((int)param_1[0x21] == 0) goto code_r0x000100a3d814;
      iVar79 = 7;
    }
    else if (*(int *)((long)param_1 + 4) == 0) {
      if ((int)param_1[0x21] == 0) goto code_r0x000100a3d814;
      iVar79 = 9;
    }
    else {
      iVar79 = 8;
    }
    break;
  case 0xe:
    plVar12 = (long *)0xfffffff6;
    if (-1 < (int)param_1[0x21]) {
      (*(code *)param_1[6])(param_1[7],param_1[0x56]);
      param_1[0x56] = 0;
      (*(code *)param_1[6])(param_1[7],param_1[0x55]);
      param_1[0x55] = 0;
      (*(code *)param_1[6])(param_1[7],param_1[0x2a]);
      param_1[0x2a] = 0;
      (*(code *)param_1[6])(param_1[7],param_1[0x15]);
      param_1[0x15] = 0;
      (*(code *)param_1[6])(param_1[7],param_1[0x18]);
      param_1[0x18] = 0;
      (*(code *)param_1[6])(param_1[7],param_1[0x1b]);
      param_1[0x1b] = 0;
      if ((*(ushort *)(param_1 + 0x53) & 1) == 0) {
        iVar79 = 3;
        goto code_r0x000100a3cca8;
      }
      uVar15 = *(uint *)(param_1 + 2);
      uVar18 = (ulong)uVar15;
      uVar16 = -uVar15 & 7;
      if (uVar16 != 0) {
        uVar15 = uVar16 + uVar15;
        *(uint *)(param_1 + 2) = uVar15;
        plVar12 = (long *)0xfffffff1;
        if (((uint)((ulong)param_1[1] >> (uVar18 & 0x3f)) & (-1 << (ulong)uVar16 ^ 0xffffffffU)) !=
            0) goto LAB_100a3c8a8;
      }
      if ((int)param_1[9] == 0) {
        uVar18 = (ulong)(0x40 - uVar15 >> 3);
        uVar16 = 0x40 - uVar15 & 0xfffffff8;
        lVar14 = param_1[4] + uVar18;
        param_1[3] = param_1[3] - uVar18;
        param_1[4] = lVar14;
        if (uVar16 == 0x40) {
          lVar19 = 0;
        }
        else {
          lVar19 = param_1[1] << ((ulong)uVar16 & 0x3f);
        }
        param_1[1] = lVar19;
        *(uint *)(param_1 + 2) = uVar16 + uVar15;
        *param_2 = lVar14;
        *param_3 = param_1[3];
      }
      *(int *)param_1 = 0x1a;
      goto code_r0x000100a3d900;
    }
    goto LAB_100a3c8a8;
  case 0x11:
    goto code_r0x000100a3ce30;
  case 0x12:
    iVar79 = *(int *)((long)param_1 + 4);
    if (2 < iVar79) {
      iVar79 = 5;
      break;
    }
    goto code_r0x000100a3ce44;
  case 0x13:
    iVar79 = *(int *)((long)param_1 + 4);
    goto code_r0x000100a3d43c;
  case 0x14:
    goto code_r0x000100a3d480;
  case 0x15:
    goto code_r0x000100a3d4bc;
  case 0x16:
    uVar15 = *puVar2;
    goto code_r0x000100a3cf78;
  case 0x17:
    goto code_r0x000100a3d0c8;
  case 0x18:
    iVar79 = *(int *)((long)param_1 + 4);
    if (iVar79 == 0) {
      iVar81 = (int)*plVar24;
    }
    else {
      if (iVar79 == 2) {
        iVar81 = (int)*plVar24;
        plVar11 = param_1 + 0x1b;
        goto joined_r0x000100a3d71c;
      }
      if (iVar79 != 1) {
        plVar12 = (long *)0xffffffe1;
        goto code_r0x000100a3da00;
      }
      iVar81 = (int)*plVar24;
      plVar11 = param_1 + 0x18;
    }
joined_r0x000100a3d71c:
    if (iVar81 == 1) {
      if ((int)(uint)*(ushort *)((long)plVar11 + 0x14) <= *(int *)((long)param_1 + 0x9ec))
      goto code_r0x000100a3cc88;
code_r0x000100a3d2a8:
      lVar14 = param_1[0x13e];
      do {
        auStack_8c[0] = 0xaaaaaaaa;
        plVar12 = (long *)(ulong)*(ushort *)(plVar11 + 2);
        FUN_100a3e8b8(plVar12,*(undefined2 *)((long)plVar11 + 0x12),lVar14,auStack_8c,param_1);
        if ((int)plVar12 != 1) goto LAB_100a3c8a8;
        lVar14 = param_1[0x13e];
        *(long *)(*plVar11 + (long)*(int *)((long)param_1 + 0x9ec) * 8) = lVar14;
        lVar14 = lVar14 + (ulong)auStack_8c[0] * 4;
        param_1[0x13e] = lVar14;
        iVar79 = *(int *)((long)param_1 + 0x9ec) + 1;
        *(int *)((long)param_1 + 0x9ec) = iVar79;
      } while (iVar79 < (int)(uint)*(ushort *)((long)plVar11 + 0x14));
      iVar79 = *(int *)((long)param_1 + 4);
      *(int *)(param_1 + 0x5d) = 0;
      *(int *)((long)param_1 + 4) = iVar79 + 1;
    }
    else {
      param_1[0x13e] = plVar11[1];
      *(int *)((long)param_1 + 0x9ec) = 0;
      *(int *)(param_1 + 0x5d) = 1;
      if (*(short *)((long)plVar11 + 0x14) != 0) goto code_r0x000100a3d2a8;
code_r0x000100a3cc88:
      *(int *)(param_1 + 0x5d) = 0;
      *(int *)((long)param_1 + 4) = iVar79 + 1;
    }
    plVar12 = (long *)0x1;
    if (1 < iVar79) {
      *(int *)param_1 = 0x19;
code_r0x000100a3d32c:
      uVar15 = *(uint *)((long)param_1 + 300);
      param_1[0x13] = param_1[0x55] + (ulong)(uVar15 << 6);
      *(uint *)(param_1 + 0x20) =
           *(uint *)((long)plVar3 + (ulong)(uVar15 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1;
      param_1[0x2b] =
           *(long *)(param_1[0x15] + (ulong)*(byte *)(param_1[0x55] + (ulong)(uVar15 << 6)) * 8);
      param_1[0x12] =
           (long)(&UNK_10e58ec28 + ((ulong)*(byte *)(param_1[0x56] + (ulong)uVar15) & 3) * 0x200);
      param_1[0x14] = param_1[0x2a];
      param_1[0x11] = *(long *)param_1[0x18];
      plVar11 = param_1;
      FUN_100a3fb28();
      plVar12 = (long *)0xffffffe5;
      if ((int)plVar11 != 0) {
        uVar15 = *(uint *)(param_1 + 0x28);
        uVar16 = *(uint *)((long)param_1 + 0x144);
        uVar21 = *(ushort *)((long)param_1 + 0xea);
        if (uVar16 == 0) {
          uVar18 = 0x10;
        }
        else {
          if ((uVar16 + 0xf < 0x2f) ||
             ((param_1 + 0x5f < (long *)((long)param_1 + (ulong)(uVar16 - 1) * 4 + 0x54c) &&
              (param_1 + 0xa9 < (long *)((long)param_1 + (ulong)(uVar16 - 1) + 0x2f9))))) {
            uVar20 = 0;
            uVar18 = 0x10;
          }
          else {
            uVar20 = uVar16 & 0xffffffe0;
            uVar18 = (ulong)(uVar20 | 0x10);
            iStack_1a0 = 0;
            iStack_19c = 1;
            iStack_198 = 2;
            iStack_194 = 3;
            iStack_190 = 4;
            iStack_18c = 5;
            iStack_188 = 6;
            iStack_184 = 7;
            iStack_180 = 8;
            iStack_17c = 9;
            iStack_178 = 10;
            iStack_174 = 0xb;
            plVar11 = param_1 + 0x5f;
            plVar12 = param_1 + 0xb1;
            uVar22 = uVar20;
            iVar79 = iStack_170;
            iVar81 = iStack_16c;
            iVar82 = iStack_168;
            iVar83 = iStack_164;
            do {
              plVar12[-7] = CONCAT44(iStack_194 + 1,iStack_198 + 1);
              plVar12[-8] = CONCAT44(iStack_19c + 1,iStack_1a0 + 1);
              plVar12[-5] = CONCAT44(iStack_184 + 1,iStack_188 + 1);
              plVar12[-6] = CONCAT44(iStack_18c + 1,iStack_190 + 1);
              plVar12[-3] = CONCAT44(iStack_174 + 1,iStack_178 + 1);
              plVar12[-4] = CONCAT44(iStack_17c + 1,iStack_180 + 1);
              plVar12[-1] = CONCAT44(iVar83 + 1,iVar82 + 1);
              plVar12[-2] = CONCAT26((short)((uint)(iVar81 + 1) >> 0x10),
                                     CONCAT24((short)(iVar81 + 1),iVar79 + 1));
              plVar12[1] = CONCAT44(iStack_194 + 0x11,iStack_198 + 0x11);
              *plVar12 = CONCAT44(iStack_19c + 0x11,iStack_1a0 + 0x11);
              plVar12[3] = CONCAT44(iStack_184 + 0x11,iStack_188 + 0x11);
              plVar12[2] = CONCAT26((short)((uint)(iStack_18c + 0x11) >> 0x10),
                                    CONCAT24((short)(iStack_18c + 0x11),iStack_190 + 0x11));
              plVar12[5] = CONCAT44(iStack_174 + 0x11,iStack_178 + 0x11);
              plVar12[4] = CONCAT44(iStack_17c + 0x11,iStack_180 + 0x11);
              plVar12[7] = CONCAT44(iVar83 + 0x11,iVar82 + 0x11);
              plVar12[6] = CONCAT44(iVar81 + 0x11,iVar79 + 0x11);
              iStack_1a0 = iStack_1a0 + 0x20;
              iStack_19c = iStack_19c + 0x20;
              iStack_198 = iStack_198 + 0x20;
              iStack_194 = iStack_194 + 0x20;
              iStack_190 = iStack_190 + 0x20;
              iStack_18c = iStack_18c + 0x20;
              iStack_188 = iStack_188 + 0x20;
              iStack_184 = iStack_184 + 0x20;
              iStack_180 = iStack_180 + 0x20;
              iStack_17c = iStack_17c + 0x20;
              iStack_178 = iStack_178 + 0x20;
              iStack_174 = iStack_174 + 0x20;
              iVar79 = iVar79 + 0x20;
              iVar81 = iVar81 + 0x20;
              iVar82 = iVar82 + 0x20;
              iVar83 = iVar83 + 0x20;
              plVar12 = plVar12 + 0x10;
              plVar11[1] = 0;
              *plVar11 = 0;
              plVar11[3] = 0;
              plVar11[2] = 0;
              uVar22 = uVar22 - 0x20;
              plVar11 = plVar11 + 4;
            } while (uVar22 != 0);
            if (uVar16 == uVar20) goto code_r0x000100a3d550;
          }
          iVar79 = uVar16 - uVar20;
          do {
            uVar20 = uVar20 + 1;
            *(undefined1 *)((long)plVar24 + uVar18) = 0;
            *(uint *)((long)param_1 + uVar18 * 4 + 0x508) = uVar20;
            uVar18 = (ulong)((int)uVar18 + 1);
            iVar79 = iVar79 + -1;
          } while (iVar79 != 0);
        }
code_r0x000100a3d550:
        if ((uint)uVar18 < (uint)uVar21) {
          uVar22 = 0;
          uVar20 = 1;
          do {
            uVar23 = 1;
            do {
              uVar5 = ((int)uVar18 + uVar23) - 1;
              *(char *)((long)plVar24 + (ulong)uVar5) = (char)uVar20;
              *(uint *)((long)param_1 + (ulong)uVar5 * 4 + 0x508) =
                   uVar16 + ((uVar22 + 2 << (ulong)(uVar20 & 0x1f)) + -4 << (ulong)(uVar15 & 0x1f))
                   + uVar23;
              uVar5 = uVar23 >> (ulong)(uVar15 & 0x1f);
              uVar23 = uVar23 + 1;
            } while (uVar5 == 0);
            uVar20 = uVar20 + uVar22;
            uVar22 = uVar22 ^ 1;
            uVar23 = ((int)uVar18 + uVar23) - 1;
            uVar18 = (ulong)uVar23;
          } while (uVar23 < uVar21);
        }
        *(int *)param_1 = 7;
        plVar12 = param_1;
        FUN_100a3fbe0();
        iVar79 = (int)plVar12;
joined_r0x000100a3c96c:
        if (iVar79 == 2) {
          plVar12 = param_1;
          func_0x000100a40674();
        }
      }
    }
    goto LAB_100a3c8a8;
  case 0x19:
    goto code_r0x000100a3d32c;
  case 0x1a:
    goto code_r0x000100a3d900;
  default:
    goto LAB_100a3c8a8;
  }
  *(int *)param_1 = iVar79;
  plVar12 = (long *)0x1;
  goto LAB_100a3c8a8;
code_r0x000100a3d900:
  if ((param_1[0xf] == 0) ||
     (plVar12 = param_1, FUN_100a412d0(param_1,param_4,param_5,param_6,1), (int)plVar12 == 1)) {
    plVar12 = (long *)0x1;
code_r0x000100a3da00:
    FUN_100a4146c(param_1,plVar12);
    return param_1;
  }
  goto LAB_100a3c8a8;
}



/* Entry: 100a3da44; end: 100a3da6b; -[SCSCSystemScopedServicesSaberEntryPoint begin] */

void FUN_100a3da44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a3da6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a3da6c; end: 100a3db43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3da6c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_100a3db8c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112d9e810) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    FUN_100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3db44);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112d9e818);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d9f248);
    *(long **)(unaff_x20 + _DAT_112d9f248) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 100a3db44; end: 100a3db8b; -[SCSCSystemScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3db44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9f240;
  func_0x000107c61428(param_1 + _DAT_112d9f240,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a3db8c; end: 100a3dbab;  */

void FUN_100a3db8c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d65b0);
  return;
}



/* Entry: 100a3dbac; end: 100a3dc93;  */

undefined1  [16] FUN_100a3dbac(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  iVar1 = (int)&uStack_70;
  func_0x000107c61428(0x1130925e0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  func_0x000107c614a8(&uStack_40);
  if (unaff_x20 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    uVar2 = 0x1130925e8;
    FUN_1000285a8(0x1130925e8,&UNK_10dd38248);
    func_0x000107c6147c(&uStack_70,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (iVar1 == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
    }
  }
  auVar3._8_8_ = uStack_68;
  auVar3._0_8_ = uStack_70;
  return auVar3;
}



/* Entry: 100a3dc94; end: 100a3e403;  */

void FUN_100a3dc94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(param_2);
  return;
}



/* Entry: 100a3e404; end: 100a3e8b7;  */

void FUN_100a3e404(ulong param_1,uint *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint uStack_64;
  
  iVar12 = *(int *)(param_4 + 0x2ec);
  if (iVar12 < 2) {
    if (iVar12 == 0) {
      lVar20 = param_4;
      func_0x000100a3e21c(param_4,param_4 + 8);
      if ((int)lVar20 != 1) {
        return;
      }
      *param_2 = *param_2 + 1;
      *(undefined4 *)(param_4 + 0x9f8) = 0;
      lVar20 = *(long *)(param_4 + 0x38);
      (**(code **)(param_4 + 0x28))(lVar20,param_1 & 0xffffffff);
      *param_3 = lVar20;
      if (lVar20 == 0) {
        return;
      }
      if (*param_2 < 2) {
        func_0x000107c60ee4();
        return;
      }
      *(undefined4 *)(param_4 + 0x2ec) = 1;
      uVar7 = *(uint *)(param_4 + 0x10);
      if (uVar7 - 0x3c < 5) goto LAB_100a3e47c;
LAB_100a3e540:
      uVar16 = *(ulong *)(param_4 + 8);
    }
    else {
      if (iVar12 != 1) {
        return;
      }
      uVar7 = *(uint *)(param_4 + 0x10);
      if (4 < uVar7 - 0x3c) goto LAB_100a3e540;
LAB_100a3e47c:
      if (*(long *)(param_4 + 0x20) == 0) {
        return;
      }
      uVar16 = *(ulong *)(param_4 + 8);
      *(ulong *)(param_4 + 8) = uVar16 >> 8;
      uVar16 = uVar16 >> 8 | (ulong)**(byte **)(param_4 + 0x18) << 0x38;
      *(ulong *)(param_4 + 8) = uVar16;
      uVar7 = uVar7 - 8;
      *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
      *(long *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) + -1;
    }
    uVar16 = uVar16 >> ((ulong)uVar7 & 0x3f);
    uVar11 = (uint)uVar16;
    uVar11 = -(uVar11 & 1) & (uVar11 >> 1 & 0xf) + 1;
    iVar12 = uVar7 + 5;
    if ((uVar16 & 1) == 0) {
      iVar12 = uVar7 + 1;
    }
    *(uint *)(param_4 + 0x9fc) = uVar11;
    *(int *)(param_4 + 0x10) = iVar12;
    *(undefined4 *)(param_4 + 0x2ec) = 2;
LAB_100a3e574:
    iVar12 = *param_2 + uVar11;
    FUN_100a3e8b8(iVar12,*param_2 + uVar11,param_4 + 0xa04,0,param_4);
    if (iVar12 != 1) {
      return;
    }
    uVar7 = 0xffff;
    *(undefined4 *)(param_4 + 0xa00) = 0xffff;
    *(undefined4 *)(param_4 + 0x2ec) = 3;
LAB_100a3e5a8:
    uVar11 = *(uint *)(param_4 + 0x9f8);
    uVar3 = *(uint *)(param_4 + 0x9fc);
    lVar20 = *param_3;
    bVar6 = uVar7 != 0xffff;
    uVar19 = (uint)param_1;
    uStack_64 = uVar7;
    if ((uVar11 < uVar19) || (uVar7 != 0xffff)) {
      lVar2 = param_4 + 0xa04;
      do {
        uVar13 = *(uint *)(param_4 + 0x10);
        uVar16 = (ulong)uVar13;
        if (bVar6) {
LAB_100a3e78c:
          uVar13 = 0x40 - (int)uVar16;
          if (uVar13 < uVar7) {
            lVar9 = *(long *)(param_4 + 0x20);
            do {
              lVar9 = lVar9 + -1;
              if (lVar9 == -1) {
LAB_100a3e88c:
                *(uint *)(param_4 + 0xa00) = uVar7;
                *(uint *)(param_4 + 0x9f8) = uVar11;
                return;
              }
              uVar15 = *(ulong *)(param_4 + 8);
              *(ulong *)(param_4 + 8) = uVar15 >> 8;
              uVar15 = uVar15 >> 8 | (ulong)**(byte **)(param_4 + 0x18) << 0x38;
              *(ulong *)(param_4 + 8) = uVar15;
              uVar5 = (int)uVar16 - 8;
              uVar16 = (ulong)uVar5;
              *(uint *)(param_4 + 0x10) = uVar5;
              *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
              *(long *)(param_4 + 0x20) = lVar9;
              uVar13 = uVar13 + 8;
            } while (uVar13 < uVar7);
          }
          else {
            uVar15 = *(ulong *)(param_4 + 8);
          }
          uVar5 = (uint)(uVar15 >> (uVar16 & 0x3f)) & (-1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
          *(uint *)(param_4 + 0x10) = (int)uVar16 + uVar7;
          iVar12 = 1 << (ulong)(uVar7 & 0x1f);
          uVar13 = uVar5 + iVar12;
          if (uVar19 < uVar13 + uVar11) {
            return;
          }
          uVar17 = uVar11;
          uVar14 = uVar13;
          if ((0x1f < uVar13) && (uVar11 <= -uVar5 - iVar12)) {
            uVar5 = uVar13 & 0xffffffe0;
            uVar14 = uVar13 & 0x1f;
            uVar17 = uVar11 + uVar5;
            uVar18 = uVar5;
            do {
              puVar1 = (undefined8 *)(lVar20 + (ulong)uVar11);
              puVar1[1] = 0;
              *puVar1 = 0;
              puVar1[3] = 0;
              puVar1[2] = 0;
              uVar11 = uVar11 + 0x20;
              uVar18 = uVar18 - 0x20;
            } while (uVar18 != 0);
            uVar11 = uVar17;
            if (uVar13 == uVar5) goto LAB_100a3e67c;
          }
          do {
            *(undefined1 *)(lVar20 + (ulong)uVar17) = 0;
            uVar11 = uVar17 + 1;
            uVar14 = uVar14 - 1;
            uVar17 = uVar11;
          } while (uVar14 != 0);
        }
        else {
          if (uVar13 - 0x32 < 0xf) {
            lVar9 = *(long *)(param_4 + 0x20);
            do {
              lVar9 = lVar9 + -1;
              if (lVar9 == -1) {
                lVar9 = lVar2;
                FUN_100a4120c(lVar2,param_4 + 8,&uStack_64);
                uVar7 = uStack_64;
                if ((int)lVar9 != 0) goto joined_r0x000100a3e77c;
                uVar7 = 0xffff;
                goto LAB_100a3e88c;
              }
              uVar15 = *(ulong *)(param_4 + 8);
              *(ulong *)(param_4 + 8) = uVar15 >> 8;
              uVar15 = uVar15 >> 8 | (ulong)**(byte **)(param_4 + 0x18) << 0x38;
              *(ulong *)(param_4 + 8) = uVar15;
              iVar12 = (int)uVar16;
              uVar13 = iVar12 - 8;
              uVar16 = (ulong)uVar13;
              *(uint *)(param_4 + 0x10) = uVar13;
              *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
              *(long *)(param_4 + 0x20) = lVar9;
            } while (iVar12 - 0x3aU < 0xf);
            uVar15 = uVar15 >> (uVar16 & 0x3f);
            pbVar10 = (byte *)(lVar2 + (uVar15 & 0xff) * 4);
            bVar4 = *pbVar10;
          }
          else {
            uVar15 = *(ulong *)(param_4 + 8) >> (uVar16 & 0x3f);
            pbVar10 = (byte *)(lVar2 + (uVar15 & 0xff) * 4);
            bVar4 = *pbVar10;
          }
          uVar7 = (uint)bVar4;
          if (8 < bVar4) {
            uVar13 = uVar13 + 8;
            pbVar10 = pbVar10 + (ulong)(((uint)(uVar15 >> 8) & 0xffffff &
                                         (-1 << (ulong)(uVar7 - 8 & 0x1f) ^ 0xffffffffU) & 0x7f) +
                                       (uint)*(ushort *)(pbVar10 + 2)) * 4;
            uVar7 = (uint)*pbVar10;
          }
          *(uint *)(param_4 + 0x10) = uVar13 + uVar7;
          uVar7 = (uint)*(ushort *)(pbVar10 + 2);
joined_r0x000100a3e77c:
          uStack_64 = uVar7;
          if (uVar7 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = uVar7 - uVar3;
            if (uVar7 < uVar3 || iVar12 == 0) {
              uVar16 = (ulong)*(uint *)(param_4 + 0x10);
              goto LAB_100a3e78c;
            }
          }
          *(char *)(lVar20 + (ulong)uVar11) = (char)iVar12;
          uVar11 = uVar11 + 1;
        }
LAB_100a3e67c:
        bVar6 = false;
      } while (uVar11 < uVar19);
    }
  }
  else {
    if (iVar12 == 2) {
      uVar11 = *(uint *)(param_4 + 0x9fc);
      goto LAB_100a3e574;
    }
    if (iVar12 != 4) {
      if (iVar12 != 3) {
        return;
      }
      uVar7 = *(uint *)(param_4 + 0xa00);
      goto LAB_100a3e5a8;
    }
  }
  uVar7 = *(uint *)(param_4 + 0x10);
  if (uVar7 == 0x40) {
    if (*(long *)(param_4 + 0x20) == 0) {
      uVar8 = 4;
      goto LAB_100a3e650;
    }
    uVar15 = *(ulong *)(param_4 + 8);
    *(ulong *)(param_4 + 8) = uVar15 >> 8;
    uVar16 = (ulong)**(byte **)(param_4 + 0x18) << 0x38;
    *(ulong *)(param_4 + 8) = uVar15 >> 8 | uVar16;
    *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
    *(long *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) + -1;
    *(undefined4 *)(param_4 + 0x10) = 0x39;
    uVar16 = uVar16 & 0x100000000000000;
  }
  else {
    *(uint *)(param_4 + 0x10) = uVar7 + 1;
    uVar16 = *(ulong *)(param_4 + 8) >> ((ulong)uVar7 & 0x3f) & 1;
  }
  if (uVar16 != 0) {
    func_0x000107c2f058(*param_3,param_1,param_4);
  }
  uVar8 = 0;
LAB_100a3e650:
  *(undefined4 *)(param_4 + 0x2ec) = uVar8;
  return;
}



/* Entry: 100a3e8b8; end: 100a3f33b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_100a3e8b8(int param_1,uint param_2,undefined8 param_3,undefined4 *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  
  iVar23 = *(int *)(param_5 + 0x2f0);
  puVar1 = (undefined8 *)(param_5 + 0x9ca);
  puVar2 = (undefined8 *)(param_5 + 0x9b8);
  if (iVar23 < 3) {
    if (iVar23 == 0) {
      uVar17 = *(uint *)(param_5 + 0x10);
      if (uVar17 - 0x3f < 2) {
        if (*(long *)(param_5 + 0x20) == 0) {
          return 2;
        }
        uVar21 = *(ulong *)(param_5 + 8);
        *(ulong *)(param_5 + 8) = uVar21 >> 8;
        uVar21 = uVar21 >> 8 | (ulong)**(byte **)(param_5 + 0x18) << 0x38;
        *(ulong *)(param_5 + 8) = uVar21;
        uVar17 = uVar17 - 8;
        *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
        *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
      }
      else {
        uVar21 = *(ulong *)(param_5 + 8);
      }
      uVar14 = (uint)(uVar21 >> ((ulong)uVar17 & 0x3f)) & 3;
      *(uint *)(param_5 + 0x2f4) = uVar14;
      uVar21 = (ulong)(uVar17 + 2);
      *(uint *)(param_5 + 0x10) = uVar17 + 2;
      if (uVar14 != 1) {
        iVar23 = 0;
        *(undefined8 *)(param_5 + 0x304) = 0x2000000000;
        *puVar1 = 0;
        *(undefined4 *)(param_5 + 0x9d2) = 0;
        *puVar2 = 0;
        *(undefined8 *)(param_5 + 0x9c0) = 0;
        *(undefined2 *)(param_5 + 0x9c8) = 0;
        *(undefined4 *)(param_5 + 0x2f0) = 4;
        iVar20 = 0x20;
LAB_100a3ec3c:
        uVar24 = (ulong)uVar14;
        do {
          bVar5 = (&UNK_10e58d58e)[uVar24];
          iVar12 = (int)uVar21;
          if (iVar12 - 0x3dU < 4) {
            if (*(long *)(param_5 + 0x20) != 0) {
              uVar21 = *(ulong *)(param_5 + 8);
              *(ulong *)(param_5 + 8) = uVar21 >> 8;
              uVar19 = uVar21 >> 8 | (ulong)**(byte **)(param_5 + 0x18) << 0x38;
              *(ulong *)(param_5 + 8) = uVar19;
              uVar21 = (ulong)(iVar12 - 8);
              *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
              *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
              goto LAB_100a3ecc4;
            }
            if (iVar12 == 0x40) {
LAB_100a3ed4c:
              *(int *)(param_5 + 0x2f4) = (int)uVar24;
              *(int *)(param_5 + 0x304) = iVar23;
              *(int *)(param_5 + 0x308) = iVar20;
              uVar11 = 4;
              goto LAB_100a3f2fc;
            }
            uVar19 = *(ulong *)(param_5 + 8) >> (uVar21 & 0x3f);
            bVar6 = (&UNK_10e58d5a0)[uVar19];
            if (0x40U - iVar12 < (uint)bVar6) goto LAB_100a3ed4c;
          }
          else {
            uVar19 = *(ulong *)(param_5 + 8);
LAB_100a3ecc4:
            iVar12 = (int)uVar21;
            uVar19 = uVar19 >> (uVar21 & 0x3f) & 0xf;
            bVar6 = (&UNK_10e58d5a0)[uVar19];
          }
          bVar7 = (&UNK_10e58d5b0)[uVar19];
          uVar21 = (ulong)(iVar12 + (uint)bVar6);
          *(uint *)(param_5 + 0x10) = iVar12 + (uint)bVar6;
          *(byte *)((long)puVar2 + (ulong)bVar5) = bVar7;
          if ((1L << (uVar19 & 0x3f) & 0x1111U) == 0) {
            iVar20 = iVar20 - (0x20U >> (ulong)(bVar7 & 0x1f));
            iVar23 = iVar23 + 1;
            *(short *)((long)puVar1 + (ulong)bVar7 * 2) =
                 *(short *)((long)puVar1 + (ulong)bVar7 * 2) + 1;
            if (iVar20 - 0x21U < 0xffffffe0) break;
          }
          uVar24 = uVar24 + 1;
        } while ((int)uVar24 != 0x12);
        goto LAB_100a3ed60;
      }
LAB_100a3ea6c:
      if ((int)uVar21 - 0x3fU < 2) {
        if (*(long *)(param_5 + 0x20) == 0) {
          uVar11 = 1;
          goto LAB_100a3f2fc;
        }
        uVar24 = *(ulong *)(param_5 + 8);
        *(ulong *)(param_5 + 8) = uVar24 >> 8;
        uVar24 = uVar24 >> 8 | (ulong)**(byte **)(param_5 + 0x18) << 0x38;
        *(ulong *)(param_5 + 8) = uVar24;
        uVar21 = (ulong)((int)uVar21 - 8);
        *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
        *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
      }
      else {
        uVar24 = *(ulong *)(param_5 + 8);
      }
      uVar19 = 0;
      uVar17 = (uint)(uVar24 >> (uVar21 & 0x3f)) & 3;
      *(uint *)(param_5 + 0x300) = uVar17;
      *(int *)(param_5 + 0x10) = (int)uVar21 + 2;
      *(undefined4 *)(param_5 + 0x2f4) = 0;
    }
    else {
      if (iVar23 == 1) {
        uVar21 = (ulong)*(uint *)(param_5 + 0x10);
        goto LAB_100a3ea6c;
      }
      if (iVar23 != 2) {
        return 0xffffffe1;
      }
      uVar19 = (ulong)*(uint *)(param_5 + 0x2f4);
      uVar17 = *(uint *)(param_5 + 0x300);
    }
    uVar14 = 0;
    if (param_1 + -1 != 0) {
      uVar14 = 0x20 - (int)LZCOUNT(param_1 + -1);
    }
    if ((uint)uVar19 <= uVar17) {
      uVar22 = *(uint *)(param_5 + 0x10);
      do {
        uVar21 = (ulong)uVar22;
        uVar22 = 0x40 - uVar22;
        if (uVar22 < uVar14) {
          lVar25 = *(long *)(param_5 + 0x20);
          do {
            lVar25 = lVar25 + -1;
            if (lVar25 == -1) {
              *(int *)(param_5 + 0x2f4) = (int)uVar19;
              *(undefined4 *)(param_5 + 0x2f0) = 2;
              return 2;
            }
            uVar24 = *(ulong *)(param_5 + 8);
            *(ulong *)(param_5 + 8) = uVar24 >> 8;
            uVar24 = uVar24 >> 8 | (ulong)**(byte **)(param_5 + 0x18) << 0x38;
            *(ulong *)(param_5 + 8) = uVar24;
            uVar26 = (int)uVar21 - 8;
            uVar21 = (ulong)uVar26;
            *(uint *)(param_5 + 0x10) = uVar26;
            *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
            *(long *)(param_5 + 0x20) = lVar25;
            uVar22 = uVar22 + 8;
          } while (uVar22 < uVar14);
        }
        else {
          uVar24 = *(ulong *)(param_5 + 8);
        }
        uVar26 = (uint)(uVar24 >> (uVar21 & 0x3f)) & ~(-1 << (ulong)(uVar14 & 0x1f));
        uVar22 = (int)uVar21 + uVar14;
        *(uint *)(param_5 + 0x10) = uVar22;
        if (param_2 <= uVar26) {
          return 0xfffffffc;
        }
        *(short *)(param_5 + 0x398 + uVar19 * 2) = (short)uVar26;
        uVar26 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar26;
      } while (uVar26 <= uVar17);
    }
    if (uVar17 != 0) {
      uVar21 = 0;
      do {
        lVar25 = uVar21 * 2;
        uVar21 = uVar21 + 1;
        uVar24 = uVar21;
        do {
          if (*(short *)(param_5 + 0x398 + lVar25) ==
              *(short *)(param_5 + 0x398 + (uVar24 & 0xffffffff) * 2)) {
            return 0xfffffffb;
          }
          uVar14 = (int)uVar24 + 1;
          uVar24 = (ulong)uVar14;
        } while (uVar14 <= uVar17);
      } while (uVar21 != uVar17);
      goto joined_r0x000100a3eb2c;
    }
  }
  else {
    if (iVar23 != 3) {
      if (iVar23 == 4) {
        iVar23 = *(int *)(param_5 + 0x304);
        iVar20 = *(int *)(param_5 + 0x308);
        uVar14 = *(uint *)(param_5 + 0x2f4);
        if (uVar14 < 0x12) {
          uVar21 = (ulong)*(uint *)(param_5 + 0x10);
          goto LAB_100a3ec3c;
        }
LAB_100a3ed60:
        if ((iVar23 != 1) && (iVar20 != 0)) {
          return 0xfffffffa;
        }
        FUN_100a3f33c(param_5 + 0x30c,puVar2,puVar1);
        uVar22 = 0;
        iVar23 = 0;
        uVar17 = 0;
        *(undefined8 *)(param_5 + 0x9d2) = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_5 + 0x9e2) = 0;
        *(undefined8 *)(param_5 + 0x9da) = 0;
        *(undefined4 *)(param_5 + 0x938) = 0xfffffff0;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0x20) = 0xffff;
        *(undefined4 *)(param_5 + 0x93c) = 0xfffffff1;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0x1e) = 0xffff;
        *(undefined4 *)(param_5 + 0x940) = 0xfffffff2;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0x1c) = 0xffff;
        *(undefined4 *)(param_5 + 0x944) = 0xfffffff3;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0x1a) = 0xffff;
        *(undefined4 *)(param_5 + 0x948) = 0xfffffff4;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0x18) = 0xffff;
        *(undefined4 *)(param_5 + 0x94c) = 0xfffffff5;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0x16) = 0xffff;
        *(undefined4 *)(param_5 + 0x950) = 0xfffffff6;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0x14) = 0xffff;
        *(undefined4 *)(param_5 + 0x954) = 0xfffffff7;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0x12) = 0xffff;
        *(undefined4 *)(param_5 + 0x958) = 0xfffffff8;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0x10) = 0xffff;
        *(undefined4 *)(param_5 + 0x95c) = 0xfffffff9;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0xe) = 0xffff;
        *(undefined4 *)(param_5 + 0x960) = 0xfffffffa;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -0xc) = 0xffff;
        *(undefined4 *)(param_5 + 0x964) = 0xfffffffb;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -10) = 0xffff;
        *(undefined4 *)(param_5 + 0x968) = 0xfffffffc;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -8) = 0xffff;
        *(undefined4 *)(param_5 + 0x96c) = 0xfffffffd;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -6) = 0xffff;
        *(undefined4 *)(param_5 + 0x970) = 0xfffffffe;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -4) = 0xffff;
        *(undefined4 *)(param_5 + 0x974) = 0xffffffff;
        *(undefined2 *)(*(long *)(param_5 + 0x390) + -2) = 0xffff;
        *(undefined8 *)(param_5 + 0x300) = 0;
        *(undefined8 *)(param_5 + 0x2f8) = 0x800000000;
        iVar20 = 0x8000;
        *(undefined4 *)(param_5 + 0x308) = 0x8000;
        *(undefined4 *)(param_5 + 0x2f0) = 5;
        uVar14 = 8;
        lVar25 = *(long *)(param_5 + 0x390);
        iVar12 = *(int *)(param_5 + 0x10);
      }
      else {
        if (iVar23 != 5) {
          return 0xffffffe1;
        }
        iVar20 = *(int *)(param_5 + 0x308);
        iVar23 = *(int *)(param_5 + 0x304);
        uVar17 = *(uint *)(param_5 + 0x300);
        uVar14 = *(uint *)(param_5 + 0x2fc);
        uVar22 = *(uint *)(param_5 + 0x2f8);
        lVar25 = *(long *)(param_5 + 0x390);
        iVar12 = *(int *)(param_5 + 0x10);
      }
      if (iVar12 == 0x40) {
        if (*(long *)(param_5 + 0x20) != 0) {
          uVar21 = *(ulong *)(param_5 + 8);
          *(ulong *)(param_5 + 8) = uVar21 >> 8;
          *(ulong *)(param_5 + 8) = uVar21 >> 8 | (ulong)**(byte **)(param_5 + 0x18) << 0x38;
          *(undefined4 *)(param_5 + 0x10) = 0x38;
          *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
          *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
          goto joined_r0x000100a3e98c;
        }
LAB_100a3f06c:
        lVar25 = param_5 + 0x938;
        if (uVar17 < param_2) {
          bVar10 = false;
          pbVar3 = (byte *)(param_5 + 0x30c);
          do {
            if (iVar20 == 0) goto LAB_100a3f2d8;
            if (bVar10) {
              if (*(long *)(param_5 + 0x20) == 0) {
                return 2;
              }
              uVar21 = *(ulong *)(param_5 + 8);
              *(ulong *)(param_5 + 8) = uVar21 >> 8;
              *(ulong *)(param_5 + 8) = uVar21 >> 8 | (ulong)**(byte **)(param_5 + 0x18) << 0x38;
              uVar14 = *(int *)(param_5 + 0x10) - 8;
              *(uint *)(param_5 + 0x10) = uVar14;
              *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
              *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
              if (uVar14 == 0x40) goto LAB_100a3f0e4;
LAB_100a3f110:
              uVar22 = 0x40 - uVar14;
              uVar26 = (uint)(*(ulong *)(param_5 + 8) >> ((ulong)uVar14 & 0x3f));
              bVar5 = pbVar3[(ulong)(uVar26 & 0x1f) * 4];
              pbVar13 = pbVar3 + (ulong)(uVar26 & 0x1f) * 4;
              if (bVar5 <= uVar22) goto LAB_100a3f130;
LAB_100a3f090:
              bVar10 = true;
            }
            else {
              uVar14 = *(uint *)(param_5 + 0x10);
              if (uVar14 != 0x40) goto LAB_100a3f110;
LAB_100a3f0e4:
              uVar26 = 0;
              uVar22 = 0x40 - uVar14;
              bVar5 = *pbVar3;
              pbVar13 = pbVar3;
              if (uVar22 < bVar5) goto LAB_100a3f090;
LAB_100a3f130:
              uVar8 = *(ushort *)(pbVar13 + 2);
              uVar15 = (uint)uVar8;
              if (uVar8 < 0x10) {
                *(uint *)(param_5 + 0x10) = uVar14 + bVar5;
                *(undefined4 *)(param_5 + 0x304) = 0;
                if (uVar15 != 0) {
                  *(short *)(*(long *)(param_5 + 0x390) +
                            (long)*(int *)(lVar25 + (ulong)uVar8 * 4) * 2) = (short)uVar17;
                  uVar17 = *(uint *)(param_5 + 0x300);
                  uVar14 = (uint)uVar8;
                  *(uint *)(lVar25 + (ulong)uVar8 * 4) = uVar17;
                  *(uint *)(param_5 + 0x2fc) = uVar14;
                  iVar20 = *(int *)(param_5 + 0x308) - (0x8000U >> (ulong)(uVar14 & 0x1f));
                  *(int *)(param_5 + 0x308) = iVar20;
                  *(short *)((long)puVar1 + (ulong)uVar14 * 2) =
                       *(short *)((long)puVar1 + (ulong)uVar14 * 2) + 1;
                }
                bVar10 = false;
                *(uint *)(param_5 + 0x300) = uVar17 + 1;
                uVar17 = uVar17 + 1;
              }
              else {
                uVar27 = (uVar15 - 0xe) + (uint)bVar5;
                if (uVar22 < uVar27) goto LAB_100a3f090;
                *(uint *)(param_5 + 0x10) = uVar27 + uVar14;
                if (uVar15 == 0x10) {
                  uVar21 = (ulong)*(uint *)(param_5 + 0x2fc);
                  lVar16 = 2;
                  if (*(uint *)(param_5 + 0x2f8) != uVar21) goto LAB_100a3f1c4;
LAB_100a3f1e8:
                  iVar23 = *(int *)(param_5 + 0x304);
                  if (iVar23 == 0) {
                    iVar12 = 0;
                  }
                  else {
                    iVar12 = iVar23 + -2 << lVar16;
                  }
                }
                else {
                  uVar21 = 0;
                  lVar16 = 3;
                  if (*(int *)(param_5 + 0x2f8) == 0) goto LAB_100a3f1e8;
LAB_100a3f1c4:
                  iVar12 = 0;
                  iVar23 = 0;
                  *(int *)(param_5 + 0x2f8) = (int)uVar21;
                }
                lVar16 = *(long *)(param_5 + 0x390);
                iVar12 = (uVar26 >> (ulong)(bVar5 & 0x1f) &
                         (-1 << (ulong)(uVar15 - 0xe & 0x1f) ^ 0xffffffffU)) + iVar12 + 3;
                *(int *)(param_5 + 0x304) = iVar12;
                iVar12 = iVar12 - iVar23;
                uVar14 = iVar12 + uVar17;
                if (param_2 < uVar14) {
                  *(uint *)(param_5 + 0x300) = param_2;
                  *(undefined4 *)(param_5 + 0x308) = 0xfffff;
                  return 0xfffffff9;
                }
                if (uVar21 == 0) {
                  *(uint *)(param_5 + 0x300) = uVar14;
                }
                else {
                  iVar23 = *(int *)(lVar25 + uVar21 * 4);
                  do {
                    *(short *)(lVar16 + (long)iVar23 * 2) = (short)uVar17;
                    iVar23 = *(int *)(param_5 + 0x300);
                    uVar17 = iVar23 + 1;
                    *(uint *)(param_5 + 0x300) = uVar17;
                  } while (uVar17 != uVar14);
                  uVar17 = *(uint *)(param_5 + 0x2f8);
                  uVar21 = (ulong)uVar17;
                  *(int *)(lVar25 + uVar21 * 4) = iVar23;
                  iVar20 = *(int *)(param_5 + 0x308) - (iVar12 << (ulong)(0xf - uVar17 & 0x1f));
                  *(int *)(param_5 + 0x308) = iVar20;
                  *(short *)((long)puVar1 + uVar21 * 2) =
                       *(short *)((long)puVar1 + uVar21 * 2) + (short)iVar12;
                }
                bVar10 = false;
                uVar17 = uVar14;
              }
            }
          } while (uVar17 < param_2);
        }
      }
      else {
joined_r0x000100a3e98c:
        if ((uVar17 < param_2) && (lVar16 = param_5 + 0x938, iVar20 != 0)) {
          do {
            if (*(ulong *)(param_5 + 0x20) < 4) {
              *(uint *)(param_5 + 0x300) = uVar17;
              *(int *)(param_5 + 0x304) = iVar23;
              *(uint *)(param_5 + 0x2fc) = uVar14;
              *(uint *)(param_5 + 0x2f8) = uVar22;
              *(int *)(param_5 + 0x308) = iVar20;
              goto LAB_100a3f06c;
            }
            uVar26 = *(uint *)(param_5 + 0x10);
            uVar21 = *(ulong *)(param_5 + 8);
            if (0x1f < uVar26) {
              *(ulong *)(param_5 + 8) = uVar21 >> 0x20;
              uVar26 = uVar26 ^ 0x20;
              *(uint *)(param_5 + 0x10) = uVar26;
              uVar21 = uVar21 >> 0x20 | (ulong)**(uint **)(param_5 + 0x18) << 0x20;
              *(ulong *)(param_5 + 8) = uVar21;
              *(uint **)(param_5 + 0x18) = *(uint **)(param_5 + 0x18) + 1;
              *(ulong *)(param_5 + 0x20) = *(ulong *)(param_5 + 0x20) - 4;
            }
            pbVar3 = (byte *)(param_5 + 0x30c + (uVar21 >> ((ulong)uVar26 & 0x3f) & 0x1f) * 4);
            uVar26 = uVar26 + *pbVar3;
            *(uint *)(param_5 + 0x10) = uVar26;
            uVar15 = (uint)*(ushort *)(pbVar3 + 2);
            if (uVar15 < 0x10) {
              if (uVar15 != 0) {
                *(short *)(lVar25 + (long)*(int *)(lVar16 + (ulong)uVar15 * 4) * 2) = (short)uVar17;
                *(uint *)(lVar16 + (ulong)uVar15 * 4) = uVar17;
                iVar20 = iVar20 - (0x8000U >> (ulong)(uVar15 & 0x1f));
                *(short *)((long)puVar1 + (ulong)uVar15 * 2) =
                     *(short *)((long)puVar1 + (ulong)uVar15 * 2) + 1;
                uVar14 = uVar15;
              }
              iVar23 = 0;
              uVar15 = uVar17 + 1;
            }
            else {
              uVar27 = 2;
              if (uVar15 != 0x10) {
                uVar27 = 3;
              }
              uVar18 = (uint)(uVar21 >> ((ulong)uVar26 & 0x3f)) &
                       (-1 << (ulong)uVar27 ^ 0xffffffffU);
              *(uint *)(param_5 + 0x10) = uVar27 + uVar26;
              uVar26 = uVar14;
              if (uVar15 != 0x10) {
                uVar26 = 0;
              }
              iVar12 = 0;
              if (iVar23 != 0) {
                iVar12 = iVar23;
              }
              iVar9 = 0;
              if (iVar23 != 0) {
                iVar9 = iVar23 + -2 << (ulong)uVar27;
              }
              bVar10 = uVar22 == uVar26;
              if (bVar10) {
                uVar26 = uVar22;
              }
              iVar4 = 0;
              if (bVar10) {
                iVar4 = iVar12;
              }
              iVar12 = 0;
              if (bVar10) {
                iVar12 = iVar9;
              }
              iVar23 = uVar18 + iVar12 + 3;
              iVar9 = iVar23 - iVar4;
              uVar15 = iVar9 + uVar17;
              if (param_2 < uVar15) {
                iVar20 = 0xfffff;
                break;
              }
              uVar22 = uVar26;
              if (uVar26 != 0) {
                iVar12 = ((iVar12 + uVar18) - iVar4) + 3;
                uVar27 = *(uint *)(lVar16 + (ulong)uVar26 * 4);
                do {
                  uVar18 = uVar17;
                  *(short *)(lVar25 + (long)(int)uVar27 * 2) = (short)uVar18;
                  iVar12 = iVar12 + -1;
                  uVar17 = uVar18 + 1;
                  uVar27 = uVar18;
                } while (iVar12 != 0);
                *(uint *)(lVar16 + (ulong)uVar26 * 4) = uVar18;
                iVar20 = iVar20 - (iVar9 << (ulong)(0xf - uVar26 & 0x1f));
                *(short *)((long)puVar1 + (ulong)uVar26 * 2) =
                     *(short *)((long)puVar1 + (ulong)uVar26 * 2) + (short)iVar9;
              }
            }
            uVar17 = uVar15;
            if ((param_2 <= uVar17) || (iVar20 == 0)) break;
          } while( true );
        }
        *(int *)(param_5 + 0x308) = iVar20;
      }
      if (iVar20 != 0) {
        return 0xfffffff9;
      }
LAB_100a3f2d8:
      FUN_100a3f84c(param_3,8,*(undefined8 *)(param_5 + 0x390),puVar1);
      uVar11 = (undefined4)param_3;
      goto joined_r0x000100a3f2bc;
    }
    uVar17 = *(uint *)(param_5 + 0x300);
joined_r0x000100a3eb2c:
    if (uVar17 == 3) {
      uVar21 = (ulong)*(uint *)(param_5 + 0x10);
      if (*(uint *)(param_5 + 0x10) == 0x40) {
        if (*(long *)(param_5 + 0x20) == 0) {
          uVar11 = 3;
LAB_100a3f2fc:
          *(undefined4 *)(param_5 + 0x2f0) = uVar11;
          return 2;
        }
        uVar21 = *(ulong *)(param_5 + 8);
        *(ulong *)(param_5 + 8) = uVar21 >> 8;
        uVar24 = uVar21 >> 8 | (ulong)**(byte **)(param_5 + 0x18) << 0x38;
        *(ulong *)(param_5 + 8) = uVar24;
        *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
        *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
        uVar21 = 0x38;
      }
      else {
        uVar24 = *(ulong *)(param_5 + 8);
      }
      *(int *)(param_5 + 0x10) = (int)uVar21 + 1;
      *(uint *)(param_5 + 0x300) = ((uint)(uVar24 >> (uVar21 & 0x3f)) & 1) + 3;
      func_0x000107c2f074(param_3,8,param_5 + 0x398);
      uVar11 = (undefined4)param_3;
      goto joined_r0x000100a3f2bc;
    }
  }
  func_0x000107c2f074(param_3,8,param_5 + 0x398);
  uVar11 = (undefined4)param_3;
joined_r0x000100a3f2bc:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar11;
  }
  *(undefined4 *)(param_5 + 0x2f0) = 0;
  return 1;
}



/* Entry: 100a3f33c; end: 100a3f84b;  */

undefined2 * FUN_100a3f33c(undefined2 *param_1,byte *param_2,short *param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  short *psVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  undefined2 *puVar22;
  uint uVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  long lVar26;
  long lVar27;
  undefined2 *puVar28;
  ulong uVar29;
  int aiStack_78 [4];
  int iStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = 0xaaaaaaaaaaaaaaaa;
  uStack_38 = 0xaaaaaaaaaaaaaaaa;
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  uStack_28 = 0xaaaaaaaaaaaaaaaa;
  uStack_30 = 0xaaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  aiStack_78[2] = ((ushort)param_3[1] - 1) + (uint)(ushort)param_3[2];
  aiStack_78[3] = aiStack_78[2] + (uint)(ushort)param_3[3];
  iStack_68 = aiStack_78[3] + (uint)(ushort)param_3[4];
  iStack_64 = iStack_68 + (uint)(ushort)param_3[5];
  aiStack_78[0] = 0x11;
  aiStack_78[1] = (ushort)param_3[1] - 1;
  iVar17 = aiStack_78[param_2[0x11]];
  aiStack_78[param_2[0x11]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 0x11;
  iVar17 = aiStack_78[param_2[0x10]];
  aiStack_78[param_2[0x10]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 0x10;
  iVar17 = aiStack_78[param_2[0xf]];
  aiStack_78[param_2[0xf]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 0xf;
  iVar17 = aiStack_78[param_2[0xe]];
  aiStack_78[param_2[0xe]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 0xe;
  iVar17 = aiStack_78[param_2[0xd]];
  aiStack_78[param_2[0xd]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 0xd;
  iVar17 = aiStack_78[param_2[0xc]];
  aiStack_78[param_2[0xc]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 0xc;
  iVar17 = aiStack_78[param_2[0xb]];
  aiStack_78[param_2[0xb]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 0xb;
  iVar17 = aiStack_78[param_2[10]];
  aiStack_78[param_2[10]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 10;
  iVar17 = aiStack_78[param_2[9]];
  aiStack_78[param_2[9]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 9;
  iVar17 = aiStack_78[param_2[8]];
  aiStack_78[param_2[8]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 8;
  iVar17 = aiStack_78[param_2[7]];
  aiStack_78[param_2[7]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 7;
  iVar17 = aiStack_78[param_2[6]];
  aiStack_78[param_2[6]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 6;
  iVar17 = aiStack_78[param_2[5]];
  aiStack_78[param_2[5]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 5;
  iVar17 = aiStack_78[param_2[4]];
  aiStack_78[param_2[4]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 4;
  iVar17 = aiStack_78[param_2[3]];
  aiStack_78[param_2[3]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 3;
  iVar17 = aiStack_78[param_2[2]];
  aiStack_78[param_2[2]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 2;
  iVar17 = aiStack_78[param_2[1]];
  aiStack_78[param_2[1]] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 1;
  iVar17 = aiStack_78[*param_2];
  aiStack_78[*param_2] = iVar17 + -1;
  *(undefined4 *)((long)&uStack_60 + (long)iVar17 * 4) = 0;
  if (aiStack_78[0] == 0) {
    *param_1 = 0xaa00;
    param_1[1] = (undefined2)uStack_60;
    param_1[2] = 0xaa00;
    param_1[3] = (undefined2)uStack_60;
    param_1[4] = 0xaa00;
    param_1[5] = (undefined2)uStack_60;
    param_1[6] = 0xaa00;
    param_1[7] = (undefined2)uStack_60;
    param_1[8] = 0xaa00;
    param_1[9] = (undefined2)uStack_60;
    param_1[10] = 0xaa00;
    param_1[0xb] = (undefined2)uStack_60;
    param_1[0xc] = 0xaa00;
    param_1[0xd] = (undefined2)uStack_60;
    param_1[0xe] = 0xaa00;
    param_1[0xf] = (undefined2)uStack_60;
    param_1[0x10] = 0xaa00;
    param_1[0x11] = (undefined2)uStack_60;
    param_1[0x12] = 0xaa00;
    param_1[0x13] = (undefined2)uStack_60;
    param_1[0x14] = 0xaa00;
    param_1[0x15] = (undefined2)uStack_60;
    param_1[0x16] = 0xaa00;
    param_1[0x17] = (undefined2)uStack_60;
    param_1[0x18] = 0xaa00;
    param_1[0x19] = (undefined2)uStack_60;
    param_1[0x1a] = 0xaa00;
    param_1[0x1b] = (undefined2)uStack_60;
    param_1[0x1c] = 0xaa00;
    param_1[0x1d] = (undefined2)uStack_60;
    param_1[0x1e] = 0xaa00;
    param_1[0x1f] = (undefined2)uStack_60;
    param_1[0x20] = 0xaa00;
    param_1[0x21] = (undefined2)uStack_60;
    param_1[0x22] = 0xaa00;
    param_1[0x23] = (undefined2)uStack_60;
    param_1[0x24] = 0xaa00;
    param_1[0x25] = (undefined2)uStack_60;
    param_1[0x26] = 0xaa00;
    param_1[0x27] = (undefined2)uStack_60;
    param_1[0x28] = 0xaa00;
    param_1[0x29] = (undefined2)uStack_60;
    param_1[0x2a] = 0xaa00;
    param_1[0x2b] = (undefined2)uStack_60;
    param_1[0x2c] = 0xaa00;
    param_1[0x2d] = (undefined2)uStack_60;
    param_1[0x2e] = 0xaa00;
    param_1[0x2f] = (undefined2)uStack_60;
    param_1[0x30] = 0xaa00;
    param_1[0x31] = (undefined2)uStack_60;
    param_1[0x32] = 0xaa00;
    param_1[0x33] = (undefined2)uStack_60;
    param_1[0x34] = 0xaa00;
    param_1[0x35] = (undefined2)uStack_60;
    param_1[0x36] = 0xaa00;
    param_1[0x37] = (undefined2)uStack_60;
    param_1[0x38] = 0xaa00;
    param_1[0x39] = (undefined2)uStack_60;
    param_1[0x3a] = 0xaa00;
    param_1[0x3b] = (undefined2)uStack_60;
    param_1[0x3c] = 0xaa00;
    param_1[0x3d] = (undefined2)uStack_60;
    param_1[0x3e] = 0xaa00;
    param_1[0x3f] = (undefined2)uStack_60;
    goto LAB_100a3f824;
  }
  uVar3 = param_3[1];
  if (uVar3 == 0) {
    lVar14 = 0;
    uVar12 = 0;
    uVar3 = param_3[2];
    if (uVar3 != 0) goto LAB_100a3f718;
LAB_100a3f5e0:
    uVar3 = param_3[3];
    if (uVar3 == 0) goto LAB_100a3f5e8;
LAB_100a3f770:
    uVar16 = (uint)uVar3;
    lVar14 = (long)(int)lVar14;
    do {
      uVar20 = *(int *)((long)&uStack_60 + lVar14 * 4) << 0x10 | 0xaa03;
      uVar29 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1;
      puVar1 = (uint *)(param_1 +
                       (((uVar29 & 0xcccccccccccccccc | (uVar12 & 0x5555555555555555) << 1) >> 2 |
                        uVar29 << 2) >> 0x3c) * 2);
      puVar1[0x18] = uVar20;
      puVar1[0x10] = uVar20;
      puVar1[8] = uVar20;
      *puVar1 = uVar20;
      lVar14 = lVar14 + 1;
      uVar12 = uVar12 + 0x2000000000000000;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    uVar3 = param_3[4];
    if (uVar3 != 0) goto LAB_100a3f7b8;
LAB_100a3f5f0:
    uVar3 = param_3[5];
  }
  else {
    uVar12 = 0;
    lVar14 = 0;
    do {
      uVar16 = *(int *)((long)&uStack_60 + lVar14 * 4) << 0x10 | 0xaa01;
      puVar1 = (uint *)(param_1 + ((long)uVar12 >> 0x3f) * -2);
      puVar1[0x1e] = uVar16;
      puVar1[0x1c] = uVar16;
      puVar1[0x1a] = uVar16;
      puVar1[0x18] = uVar16;
      puVar1[0x16] = uVar16;
      puVar1[0x14] = uVar16;
      puVar1[0x12] = uVar16;
      puVar1[0x10] = uVar16;
      puVar1[0xe] = uVar16;
      puVar1[0xc] = uVar16;
      puVar1[10] = uVar16;
      puVar1[8] = uVar16;
      puVar1[6] = uVar16;
      puVar1[4] = uVar16;
      puVar1[2] = uVar16;
      lVar14 = lVar14 + 1;
      uVar12 = uVar12 + 0x8000000000000000;
      *puVar1 = uVar16;
    } while ((uint)uVar3 != (uint)lVar14);
    uVar3 = param_3[2];
    if (uVar3 == 0) goto LAB_100a3f5e0;
LAB_100a3f718:
    uVar16 = (uint)uVar3;
    lVar14 = (long)(int)lVar14;
    do {
      uVar20 = *(int *)((long)&uStack_60 + lVar14 * 4) << 0x10 | 0xaa02;
      puVar1 = (uint *)(param_1 + (((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | uVar12 << 1) >> 0x3e) * 2);
      puVar1[0x1c] = uVar20;
      puVar1[0x18] = uVar20;
      puVar1[0x14] = uVar20;
      puVar1[0x10] = uVar20;
      puVar1[0xc] = uVar20;
      puVar1[8] = uVar20;
      puVar1[4] = uVar20;
      *puVar1 = uVar20;
      lVar14 = lVar14 + 1;
      uVar12 = uVar12 + 0x4000000000000000;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    uVar3 = param_3[3];
    if (uVar3 != 0) goto LAB_100a3f770;
LAB_100a3f5e8:
    uVar3 = param_3[4];
    if (uVar3 == 0) goto LAB_100a3f5f0;
LAB_100a3f7b8:
    uVar16 = (uint)uVar3;
    lVar14 = (long)(int)lVar14;
    do {
      uVar20 = *(int *)((long)&uStack_60 + lVar14 * 4) << 0x10 | 0xaa04;
      uVar29 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      *(uint *)((long)(param_1 + (((uVar29 & 0xcccccccccccccccc) >> 2 | uVar29 << 2) >> 0x3c) * 2) +
               0x40) = uVar20;
      *(uint *)(param_1 + (((uVar29 & 0xcccccccccccccccc) >> 2 | uVar29 << 2) >> 0x3c) * 2) = uVar20
      ;
      lVar14 = lVar14 + 1;
      uVar12 = uVar12 + 0x1000000000000000;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    uVar3 = param_3[5];
  }
  if (uVar3 != 0) {
    uVar16 = (uint)uVar3;
    piVar15 = (int *)((long)&uStack_60 + (long)(int)lVar14 * 4);
    do {
      uVar29 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar18 = (uVar29 & 0xcccccccccccccccc) >> 2;
      *(uint *)(param_1 +
               (((uVar18 & 0xf0f0f0f0f0f0f0f0 | (uVar29 & 0x3333333333333333) << 2) >> 4 |
                uVar18 << 4) >> 0x38) * 2) = *piVar15 << 0x10 | 0xaa05;
      uVar12 = uVar12 + 0x800000000000000;
      uVar16 = uVar16 - 1;
      piVar15 = piVar15 + 1;
    } while (uVar16 != 0);
  }
LAB_100a3f824:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return param_1;
  }
  func_0x000107c60e78();
  uVar16 = 0x10;
  psVar13 = param_3;
  do {
    psVar13 = psVar13 + -1;
    uVar16 = uVar16 - 1;
  } while (*psVar13 == -1);
  uVar12 = 0;
  lVar14 = 1;
  uVar23 = (uint)param_2;
  uVar4 = 1 << (ulong)(uVar23 & 0x1f);
  puVar24 = (undefined2 *)(ulong)uVar4;
  uVar20 = 1 << (ulong)(uVar16 & 0x1f);
  if ((int)uVar23 <= (int)uVar16) {
    uVar20 = uVar4;
  }
  uVar29 = (ulong)uVar20;
  lVar27 = (long)(int)uVar23;
  lVar26 = (long)(int)uVar16;
  lVar2 = lVar27;
  if (lVar26 <= lVar27) {
    lVar2 = lVar26;
  }
  if (lVar2 < 2) {
    lVar2 = 1;
  }
  iVar17 = 2;
  uVar18 = 0x8000000000000000;
  do {
    uVar3 = *(ushort *)(param_4 + lVar14 * 2);
    uVar20 = (uint)uVar3;
    if (uVar3 != 0) {
      uVar21 = (int)lVar14 - 0x10;
      do {
        uVar21 = (uint)(ushort)param_3[(int)uVar21];
        uVar19 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar29;
        do {
          iVar8 = (int)uVar9;
          uVar10 = iVar8 - iVar17;
          uVar9 = (ulong)uVar10;
          *(uint *)(param_1 + (uVar19 >> 0x20 | uVar19 << 0x20) * 2 + (long)(iVar8 - iVar17) * 2) =
               (int)lVar14 + 0xaa00 + uVar21 * 0x10000;
        } while (0 < (int)uVar10);
        uVar12 = uVar12 + uVar18;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    iVar17 = iVar17 << 1;
    uVar18 = uVar18 >> 1;
    bVar7 = lVar14 != lVar2;
    lVar14 = lVar14 + 1;
  } while (bVar7);
  for (; uVar4 != (uint)uVar29; uVar29 = (ulong)((uint)uVar29 << 1)) {
    func_0x000107c610b4((long)param_1 + (-(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2),
                        param_1);
  }
  puVar25 = puVar24;
  if ((int)uVar23 < (int)uVar16) {
    uVar29 = 0;
    uVar18 = 0x8000000000000000 >> ((ulong)(uVar23 - 1) & 0x3f);
    uVar16 = ~uVar23;
    lVar14 = param_4 + lVar27 * 2;
    uVar19 = 0x8000000000000000;
    iVar17 = 2;
    puVar22 = param_1;
    do {
      lVar14 = lVar14 + 2;
      lVar2 = lVar27 + 1;
      if (*(short *)(param_4 + lVar2 * 2) != 0) {
        uVar20 = (uint)lVar2 - uVar23;
        uVar4 = 1 << (ulong)(uVar20 & 0x1f);
        uVar21 = (int)lVar27 - 0xf;
        uVar20 = uVar20 & 0xff | 0xaa00;
        if (lVar27 < 0xe) {
          do {
            if (uVar29 == 0) {
              lVar11 = 0;
              puVar22 = puVar22 + (long)(int)puVar24 * 2;
              puVar24 = (undefined2 *)(ulong)uVar4;
              do {
                iVar8 = (int)puVar24 - (uint)*(ushort *)(lVar14 + lVar11 * 2);
                if (iVar8 < 1) {
                  uVar10 = (int)lVar11 - uVar16;
                  goto LAB_100a3fa18;
                }
                puVar24 = (undefined2 *)(ulong)(uint)(iVar8 * 2);
                lVar11 = lVar11 + 1;
              } while (lVar27 + lVar11 != 0xe);
              uVar10 = 0xf;
LAB_100a3fa18:
              uVar5 = 1 << (ulong)(uVar10 - uVar23 & 0x1f);
              puVar24 = (undefined2 *)(ulong)uVar5;
              puVar25 = (undefined2 *)(ulong)(uVar5 + (int)puVar25);
              uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar12 = uVar12 + uVar18;
              *(uint *)(param_1 + (uVar9 >> 0x20 | uVar9 << 0x20) * 2) =
                   uVar10 & 0xff |
                   (((uint)((int)puVar22 - (int)param_1) >> 2) - (int)(uVar9 >> 0x20)) * 0x10000 |
                   0xaa00;
            }
            uVar21 = (uint)(ushort)param_3[(int)uVar21];
            uVar9 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            puVar28 = puVar24;
            do {
              iVar8 = (int)puVar28;
              uVar10 = iVar8 - iVar17;
              puVar28 = (undefined2 *)(ulong)uVar10;
              *(uint *)(puVar22 + (uVar9 >> 0x20 | uVar9 << 0x20) * 2 + (long)(iVar8 - iVar17) * 2)
                   = uVar20 | uVar21 << 0x10;
            } while (0 < (int)uVar10);
            uVar29 = uVar29 + uVar19;
            sVar6 = *(short *)(param_4 + lVar2 * 2) + -1;
            *(short *)(param_4 + lVar2 * 2) = sVar6;
          } while (sVar6 != 0);
        }
        else {
          do {
            if (uVar29 == 0) {
              puVar22 = puVar22 + (long)(int)puVar24 * 2;
              puVar25 = (undefined2 *)(ulong)(uVar4 + (int)puVar25);
              uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar12 = uVar12 + uVar18;
              *(uint *)(param_1 + (uVar9 >> 0x20 | uVar9 << 0x20) * 2) =
                   (uint)lVar2 & 0xff | 0xaa00 |
                   (((uint)((int)puVar22 - (int)param_1) >> 2) - (int)(uVar9 >> 0x20)) * 0x10000;
              puVar24 = (undefined2 *)(ulong)uVar4;
            }
            uVar21 = (uint)(ushort)param_3[(int)uVar21];
            uVar9 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            puVar28 = puVar24;
            do {
              iVar8 = (int)puVar28;
              uVar10 = iVar8 - iVar17;
              puVar28 = (undefined2 *)(ulong)uVar10;
              *(uint *)(puVar22 + (uVar9 >> 0x20 | uVar9 << 0x20) * 2 + (long)(iVar8 - iVar17) * 2)
                   = uVar20 | uVar21 << 0x10;
            } while (0 < (int)uVar10);
            uVar29 = uVar29 + uVar19;
            sVar6 = *(short *)(param_4 + lVar2 * 2) + -1;
            *(short *)(param_4 + lVar2 * 2) = sVar6;
          } while (sVar6 != 0);
        }
      }
      iVar17 = iVar17 << 1;
      uVar19 = uVar19 >> 1;
      uVar16 = uVar16 - 1;
      lVar27 = lVar2;
    } while (lVar2 != lVar26);
  }
  return puVar25;
}



/* Entry: 100a3f84c; end: 100a3fb27;  */

uint FUN_100a3f84c(long param_1,uint param_2,short *param_3,long param_4)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  short *psVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  
  uVar23 = 0x10;
  psVar11 = param_3;
  do {
    psVar11 = psVar11 + -1;
    uVar23 = uVar23 - 1;
  } while (*psVar11 == -1);
  uVar20 = 0;
  lVar12 = 1;
  uVar19 = 1 << (ulong)(param_2 & 0x1f);
  uVar17 = 1 << (ulong)(uVar23 & 0x1f);
  if ((int)param_2 <= (int)uVar23) {
    uVar17 = uVar19;
  }
  uVar24 = (ulong)uVar17;
  lVar22 = (long)(int)param_2;
  lVar21 = (long)(int)uVar23;
  lVar15 = lVar22;
  if (lVar21 <= lVar22) {
    lVar15 = lVar21;
  }
  if (lVar15 < 2) {
    lVar15 = 1;
  }
  iVar13 = 2;
  uVar14 = 0x8000000000000000;
  do {
    uVar2 = *(ushort *)(param_4 + lVar12 * 2);
    uVar17 = (uint)uVar2;
    if (uVar2 != 0) {
      uVar18 = (int)lVar12 - 0x10;
      do {
        uVar18 = (uint)(ushort)param_3[(int)uVar18];
        uVar16 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar24;
        do {
          iVar6 = (int)uVar8;
          uVar4 = iVar6 - iVar13;
          uVar8 = (ulong)uVar4;
          *(uint *)(param_1 + (uVar16 >> 0x20 | uVar16 << 0x20) * 4 + (long)(iVar6 - iVar13) * 4) =
               (int)lVar12 + 0xaa00 + uVar18 * 0x10000;
        } while (0 < (int)uVar4);
        uVar20 = uVar20 + uVar14;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    iVar13 = iVar13 << 1;
    uVar14 = uVar14 >> 1;
    bVar5 = lVar12 != lVar15;
    lVar12 = lVar12 + 1;
  } while (bVar5);
  for (; uVar19 != (uint)uVar24; uVar24 = (ulong)((uint)uVar24 << 1)) {
    func_0x000107c610b4(param_1 + (-(uVar24 >> 0x1f) & 0xfffffffc00000000 | uVar24 << 2),param_1);
  }
  if ((int)param_2 < (int)uVar23) {
    uVar24 = 0;
    uVar14 = 0x8000000000000000 >> ((ulong)(param_2 - 1) & 0x3f);
    uVar17 = ~param_2;
    lVar15 = param_4 + lVar22 * 2;
    uVar16 = 0x8000000000000000;
    iVar13 = 2;
    lVar12 = param_1;
    uVar23 = uVar19;
    do {
      lVar15 = lVar15 + 2;
      lVar1 = lVar22 + 1;
      if (*(short *)(param_4 + lVar1 * 2) != 0) {
        uVar18 = (uint)lVar1 - param_2;
        uVar4 = 1 << (ulong)(uVar18 & 0x1f);
        uVar7 = (int)lVar22 - 0xf;
        uVar18 = uVar18 & 0xff | 0xaa00;
        if (lVar22 < 0xe) {
          do {
            if (uVar24 == 0) {
              lVar10 = 0;
              lVar12 = lVar12 + (long)(int)uVar23 * 4;
              uVar23 = uVar4;
              do {
                iVar6 = uVar23 - *(ushort *)(lVar15 + lVar10 * 2);
                if (iVar6 < 1) {
                  uVar9 = (int)lVar10 - uVar17;
                  goto LAB_100a3fa18;
                }
                uVar23 = iVar6 * 2;
                lVar10 = lVar10 + 1;
              } while (lVar22 + lVar10 != 0xe);
              uVar9 = 0xf;
LAB_100a3fa18:
              uVar23 = 1 << (ulong)(uVar9 - param_2 & 0x1f);
              uVar19 = uVar23 + uVar19;
              uVar8 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
              uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              uVar20 = uVar20 + uVar14;
              *(uint *)(param_1 + (uVar8 >> 0x20 | uVar8 << 0x20) * 4) =
                   uVar9 & 0xff |
                   (((uint)((int)lVar12 - (int)param_1) >> 2) - (int)(uVar8 >> 0x20)) * 0x10000 |
                   0xaa00;
            }
            uVar7 = (uint)(ushort)param_3[(int)uVar7];
            uVar8 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar23;
            do {
              iVar6 = uVar9 - iVar13;
              uVar9 = uVar9 - iVar13;
              *(uint *)(lVar12 + (uVar8 >> 0x20 | uVar8 << 0x20) * 4 + (long)iVar6 * 4) =
                   uVar18 | uVar7 << 0x10;
            } while (0 < (int)uVar9);
            uVar24 = uVar24 + uVar16;
            sVar3 = *(short *)(param_4 + lVar1 * 2) + -1;
            *(short *)(param_4 + lVar1 * 2) = sVar3;
          } while (sVar3 != 0);
        }
        else {
          do {
            if (uVar24 == 0) {
              lVar12 = lVar12 + (long)(int)uVar23 * 4;
              uVar19 = uVar4 + uVar19;
              uVar8 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
              uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              uVar20 = uVar20 + uVar14;
              *(uint *)(param_1 + (uVar8 >> 0x20 | uVar8 << 0x20) * 4) =
                   (uint)lVar1 & 0xff | 0xaa00 |
                   (((uint)((int)lVar12 - (int)param_1) >> 2) - (int)(uVar8 >> 0x20)) * 0x10000;
              uVar23 = uVar4;
            }
            uVar7 = (uint)(ushort)param_3[(int)uVar7];
            uVar8 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar23;
            do {
              iVar6 = uVar9 - iVar13;
              uVar9 = uVar9 - iVar13;
              *(uint *)(lVar12 + (uVar8 >> 0x20 | uVar8 << 0x20) * 4 + (long)iVar6 * 4) =
                   uVar18 | uVar7 << 0x10;
            } while (0 < (int)uVar9);
            uVar24 = uVar24 + uVar16;
            sVar3 = *(short *)(param_4 + lVar1 * 2) + -1;
            *(short *)(param_4 + lVar1 * 2) = sVar3;
          } while (sVar3 != 0);
        }
      }
      iVar13 = iVar13 << 1;
      uVar16 = uVar16 >> 1;
      uVar17 = uVar17 - 1;
      lVar22 = lVar1;
    } while (lVar1 != lVar21);
  }
  return uVar19;
}



/* Entry: 100a3fb28; end: 100a3fbdf;  */

undefined8 FUN_100a3fb28(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x2a0)) {
    return 1;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  lVar2 = *(long *)(param_1 + 0x38);
  (**(code **)(param_1 + 0x28))(lVar2,(long)*(int *)(param_1 + 0x2a0) + 0x2a);
  *(long *)(param_1 + 0x78) = lVar2;
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + *(int *)(param_1 + 0x2a0) + -2) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x78) + (long)*(int *)(param_1 + 0x2a0) + -1) = 0;
    if (lVar3 != 0) {
      func_0x000107c610b4(*(undefined8 *)(param_1 + 0x78),lVar3,(long)*(int *)(param_1 + 0x4c));
      (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),lVar3);
    }
    iVar1 = *(int *)(param_1 + 0x2a0);
    *(int *)(param_1 + 0x58) = iVar1;
    *(int *)(param_1 + 0x5c) = iVar1 + -1;
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78) + (long)iVar1;
    return 1;
  }
  *(long *)(param_1 + 0x78) = lVar3;
  return 0;
}



/* Entry: 100a3fbe0; end: 100a4120b;  */

undefined8 FUN_100a3fbe0(int *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  
  uVar11 = param_1[0x13];
  uVar23 = (ulong)uVar11;
  uVar16 = param_1[1];
  uVar22 = (ulong)uVar16;
  if (*(ulong *)(param_1 + 8) < 0x1c) {
LAB_100a4018c:
    uVar10 = 2;
LAB_100a40190:
    param_1[0x13] = uVar11;
    param_1[1] = uVar16;
  }
  else {
    if (param_1[4] == 0x40) {
      uVar13 = *(ulong *)(param_1 + 2);
      *(ulong *)(param_1 + 2) = uVar13 >> 8;
      *(ulong *)(param_1 + 2) = uVar13 >> 8 | (ulong)**(byte **)(param_1 + 6) << 0x38;
      param_1[4] = 0x38;
      *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
      *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) - 1;
    }
    iVar12 = *param_1;
    uVar10 = 0xffffffe1;
    if (iVar12 < 9) {
      if (iVar12 == 7) goto LAB_100a3fce8;
      if (iVar12 == 8) {
        iVar12 = param_1[0x40];
joined_r0x000100a3fc78:
        iVar18 = (int)uVar23;
        uVar16 = (uint)uVar22;
joined_r0x000100a3fc78:
        if (iVar12 != 0) {
          uVar23 = (ulong)(uint)param_1[4];
          uVar22 = *(ulong *)(param_1 + 2);
          if (0x37 < (uint)param_1[4]) {
            *(ulong *)(param_1 + 2) = uVar22 >> 0x38;
            uVar23 = uVar23 ^ 0x38;
            param_1[4] = (int)uVar23;
            uVar22 = uVar22 >> 0x38 | **(long **)(param_1 + 6) << 8;
            *(ulong *)(param_1 + 2) = uVar22;
            *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 7;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -7;
          }
          lVar24 = 0;
          pbVar15 = (byte *)(*(long *)(param_1 + 0x56) + (uVar22 >> (uVar23 & 0x3f) & 0xff) * 4);
          bVar5 = *pbVar15;
          uVar6 = *(ushort *)(pbVar15 + 2);
          lVar25 = (long)iVar18;
          do {
            uVar23 = (ulong)uVar6;
            uVar11 = (uint)bVar5;
            if (*(ulong *)(param_1 + 8) < 0x1c) goto LAB_100a4017c;
            if (param_1[0x44] == 0) {
              func_0x000107c2f068();
              uVar19 = param_1[4];
              uVar23 = *(ulong *)(param_1 + 2);
              if (0x37 < uVar19) {
                *(ulong *)(param_1 + 2) = uVar23 >> 0x38;
                uVar19 = uVar19 ^ 0x38;
                param_1[4] = uVar19;
                uVar23 = uVar23 >> 0x38 | **(long **)(param_1 + 6) << 8;
                *(ulong *)(param_1 + 2) = uVar23;
                *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 7;
                *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -7;
              }
              uVar22 = (ulong)uVar19;
              iVar12 = 0;
              if (param_1[0x40] == 0) goto LAB_100a4016c;
              lVar14 = *(long *)(param_1 + 0x56);
              pbVar15 = (byte *)(lVar14 + (uVar23 >> (uVar22 & 0x3f) & 0xff) * 4);
              bVar5 = *pbVar15;
              uVar9 = (uint)bVar5;
              uVar23 = (ulong)*(ushort *)(pbVar15 + 2);
              uVar11 = (uint)bVar5;
              if (uVar11 < 9) goto LAB_100a3fec0;
LAB_100a3ffb4:
              uVar13 = *(ulong *)(param_1 + 2);
              if (0x2f < (uint)uVar22) {
                *(ulong *)(param_1 + 2) = uVar13 >> 0x30;
                uVar11 = (uint)uVar22 ^ 0x30;
                uVar22 = (ulong)uVar11;
                param_1[4] = uVar11;
                uVar13 = uVar13 >> 0x30 | **(long **)(param_1 + 6) << 0x10;
                *(ulong *)(param_1 + 2) = uVar13;
                *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 6;
                *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -6;
              }
              uVar20 = uVar13 >> (uVar22 & 0x3f);
              iVar12 = (int)uVar22 + 8;
              param_1[4] = iVar12;
              pbVar15 = (byte *)(lVar14 + (uVar20 & 0xff) * 4 + uVar23 * 4 +
                                (ulong)((uint)uVar20 >> 8 &
                                       (-1 << (ulong)(uVar9 - 8 & 0x1f) ^ 0xffffffffU)) * 4);
              uVar19 = iVar12 + (uint)*pbVar15;
              param_1[4] = uVar19;
              bVar17 = pbVar15[2];
            }
            else {
              lVar14 = *(long *)(param_1 + 0x56);
              uVar19 = param_1[4];
              uVar22 = (ulong)uVar19;
              uVar9 = uVar11;
              if (8 < bVar5) goto LAB_100a3ffb4;
LAB_100a3fec0:
              uVar19 = uVar19 + uVar11;
              param_1[4] = uVar19;
              bVar17 = (byte)uVar23;
              uVar13 = *(ulong *)(param_1 + 2);
            }
            if (0x37 < uVar19) {
              *(ulong *)(param_1 + 2) = uVar13 >> 0x38;
              uVar19 = uVar19 ^ 0x38;
              param_1[4] = uVar19;
              uVar13 = uVar13 >> 0x38 | **(long **)(param_1 + 6) << 8;
              *(ulong *)(param_1 + 2) = uVar13;
              *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 7;
              *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -7;
            }
            pbVar15 = (byte *)(lVar14 + (uVar13 >> ((ulong)uVar19 & 0x3f) & 0xff) * 4);
            bVar5 = *pbVar15;
            uVar6 = *(ushort *)(pbVar15 + 2);
            *(byte *)(*(long *)(param_1 + 0x1e) + lVar25 + lVar24) = bVar17;
            param_1[0x44] = param_1[0x44] + -1;
            uVar11 = param_1[0x16];
            if (iVar18 + (int)lVar24 + 1U == uVar11) goto LAB_100a405bc;
            lVar24 = lVar24 + 1;
            if (uVar16 == (uint)lVar24) goto LAB_100a401bc;
          } while( true );
        }
        uVar16 = (uint)uVar22;
        lVar24 = 0;
        iVar18 = (int)uVar23;
        lVar25 = (long)iVar18;
        bVar5 = *(byte *)(*(long *)(param_1 + 0x1e) + ((long)param_1[0x17] & lVar25 - 1U));
        uVar23 = (ulong)*(byte *)(*(long *)(param_1 + 0x1e) + ((long)param_1[0x17] & lVar25 - 2U));
        do {
          uVar22 = (ulong)bVar5;
          if (*(ulong *)(param_1 + 8) < 0x1c) goto LAB_100a4017c;
          if (param_1[0x44] == 0) {
            func_0x000107c2f068();
            iVar12 = param_1[0x40];
            if (iVar12 != 0) goto LAB_100a4016c;
          }
          lVar14 = *(long *)(*(long *)(param_1 + 0x2a) +
                            (ulong)*(byte *)(*(long *)(param_1 + 0x26) +
                                            (ulong)(*(byte *)(*(long *)(param_1 + 0x24) + uVar23 +
                                                             0x100) |
                                                   *(byte *)(*(long *)(param_1 + 0x24) + uVar22))) *
                            8);
          uVar11 = param_1[4];
          uVar23 = *(ulong *)(param_1 + 2);
          if (0x2f < uVar11) {
            *(ulong *)(param_1 + 2) = uVar23 >> 0x30;
            uVar11 = uVar11 ^ 0x30;
            param_1[4] = uVar11;
            uVar23 = uVar23 >> 0x30 | **(long **)(param_1 + 6) << 0x10;
            *(ulong *)(param_1 + 2) = uVar23;
            *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 6;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -6;
          }
          uVar23 = uVar23 >> ((ulong)uVar11 & 0x3f);
          pbVar15 = (byte *)(lVar14 + (uVar23 & 0xff) * 4);
          bVar5 = *pbVar15;
          if (8 < bVar5) {
            uVar11 = uVar11 + 8;
            param_1[4] = uVar11;
            pbVar15 = pbVar15 + (ulong)(((uint)uVar23 >> 8 &
                                        (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)) +
                                       (uint)*(ushort *)(pbVar15 + 2)) * 4;
            bVar5 = *pbVar15;
          }
          param_1[4] = uVar11 + bVar5;
          bVar5 = pbVar15[2];
          *(byte *)(*(long *)(param_1 + 0x1e) + lVar25 + lVar24) = bVar5;
          param_1[0x44] = param_1[0x44] + -1;
          uVar11 = param_1[0x16];
          if (iVar18 + (int)lVar24 + 1U == uVar11) goto LAB_100a405bc;
          lVar24 = lVar24 + 1;
          uVar23 = uVar22;
          if (uVar16 == (uint)lVar24) goto LAB_100a401bc;
        } while( true );
      }
    }
    else {
      if (iVar12 == 9) goto LAB_100a401cc;
      if (iVar12 == 10) {
        lVar24 = (long)(int)uVar11;
        goto LAB_100a3fc94;
      }
    }
  }
  return uVar10;
LAB_100a4017c:
  uVar11 = iVar18 + (int)lVar24;
  *param_1 = 8;
  uVar16 = uVar16 - (int)lVar24;
  goto LAB_100a4018c;
LAB_100a4016c:
  uVar23 = lVar25 + lVar24;
  iVar18 = (int)uVar23;
  uVar16 = uVar16 - (int)lVar24;
  uVar22 = (ulong)uVar16;
  goto joined_r0x000100a3fc78;
LAB_100a405bc:
  *param_1 = 0xd;
  uVar16 = ~(uint)lVar24 + uVar16;
  goto LAB_100a405b4;
LAB_100a401bc:
  uVar11 = uVar16 + iVar18;
  uVar23 = (ulong)uVar11;
  if (param_1[0x42] < 1) {
    uVar16 = 0;
LAB_100a4046c:
    iVar12 = 0xe;
LAB_100a405b0:
    *param_1 = iVar12;
LAB_100a405b4:
    uVar10 = 1;
    goto LAB_100a40190;
  }
LAB_100a401cc:
  do {
    uVar11 = (uint)uVar23;
    iVar12 = param_1[0x5a];
    if (iVar12 < 0) {
      if (param_1[0x46] == 0) {
        func_0x000107c2f070();
      }
      lVar24 = *(long *)(*(long *)(param_1 + 0x36) + (ulong)*(byte *)(param_1 + 0x58) * 8);
      uVar16 = param_1[4];
      uVar23 = *(ulong *)(param_1 + 2);
      if (0x2f < uVar16) {
        *(ulong *)(param_1 + 2) = uVar23 >> 0x30;
        uVar16 = uVar16 ^ 0x30;
        param_1[4] = uVar16;
        uVar23 = uVar23 >> 0x30 | **(long **)(param_1 + 6) << 0x10;
        *(ulong *)(param_1 + 2) = uVar23;
        *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 6;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -6;
      }
      uVar22 = uVar23 >> ((ulong)uVar16 & 0x3f);
      pbVar15 = (byte *)(lVar24 + (uVar22 & 0xff) * 4);
      bVar5 = *pbVar15;
      if (8 < bVar5) {
        uVar16 = uVar16 + 8;
        param_1[4] = uVar16;
        pbVar15 = pbVar15 + (ulong)(((uint)uVar22 >> 8 &
                                    (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)) +
                                   (uint)*(ushort *)(pbVar15 + 2)) * 4;
        bVar5 = *pbVar15;
      }
      uVar16 = uVar16 + bVar5;
      param_1[4] = uVar16;
      uVar6 = *(ushort *)(pbVar15 + 2);
      param_1[0x46] = param_1[0x46] + -1;
      param_1[0x41] = 0;
      if (uVar6 < 0x10) {
        uVar16 = (uint)uVar6;
        param_1[0x5a] = uVar16;
        uVar19 = (uint)uVar6;
        if (uVar16 < 4) {
          uVar9 = 1 >> (ulong)(uVar19 & 0x1f);
          param_1[0x41] = uVar9;
          iVar12 = param_1[(ulong)((uVar19 - param_1[0x18] ^ 0xffffffff) & 3) + 0x19];
          param_1[0x5a] = iVar12;
          param_1[0x18] = param_1[0x18] - uVar9;
          uVar16 = param_1[0x14];
          uVar19 = param_1[0x15];
          uVar3 = uVar9;
          if (uVar19 != uVar16) {
LAB_100a4020c:
            uVar9 = uVar3;
            uVar19 = uVar11;
            if ((int)uVar16 <= (int)uVar11) {
              uVar19 = uVar16;
            }
            param_1[0x15] = uVar19;
          }
        }
        else {
          uVar9 = 0;
          iVar12 = -4;
          if (9 < uVar16) {
            iVar12 = -10;
          }
          iVar18 = 2;
          if (9 >= uVar16) {
            iVar18 = 3;
          }
          iVar18 = (0x605142U >> (ulong)((iVar12 + uVar19) * 4 & 0x1f) & 7) +
                   param_1[(ulong)(param_1[0x18] + iVar18 & 3) + 0x19] + -3;
          iVar12 = 0x7fffffff;
          if (0 < iVar18) {
            iVar12 = iVar18;
          }
          param_1[0x5a] = iVar12;
          uVar16 = param_1[0x14];
          uVar19 = param_1[0x15];
          uVar3 = 0;
          if (uVar19 != uVar16) goto LAB_100a4020c;
        }
      }
      else {
        bVar5 = *(byte *)((long)param_1 + (ulong)uVar6 + 0x2e8);
        if (0x1f < uVar16) {
          *(ulong *)(param_1 + 2) = uVar23 >> 0x20;
          uVar16 = uVar16 ^ 0x20;
          param_1[4] = uVar16;
          uVar23 = uVar23 >> 0x20 | (ulong)**(uint **)(param_1 + 6) << 0x20;
          *(ulong *)(param_1 + 2) = uVar23;
          *(uint **)(param_1 + 6) = *(uint **)(param_1 + 6) + 1;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -4;
        }
        uVar9 = 0;
        uVar19 = (uint)bVar5;
        param_1[4] = uVar16 + uVar19;
        iVar12 = (((uint)(uVar23 >> ((ulong)uVar16 & 0x3f)) &
                  (-1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU)) << (ulong)(param_1[0x50] & 0x1f)) +
                 param_1[(ulong)uVar6 + 0x142];
        param_1[0x5a] = iVar12;
        uVar16 = param_1[0x14];
        uVar19 = param_1[0x15];
        uVar3 = 0;
        if (uVar19 != uVar16) goto LAB_100a4020c;
      }
    }
    else {
      uVar9 = (uint)(iVar12 == 0);
      param_1[0x41] = (uint)(iVar12 == 0);
      iVar12 = param_1[0x18];
      param_1[0x18] = iVar12 - 1U;
      iVar12 = param_1[(ulong)(iVar12 - 1U & 3) + 0x19];
      param_1[0x5a] = iVar12;
      uVar16 = param_1[0x14];
      uVar19 = param_1[0x15];
      uVar3 = uVar9;
      if (uVar19 != uVar16) goto LAB_100a4020c;
    }
    uVar16 = param_1[0x59];
    uVar22 = (ulong)uVar16;
    if ((int)uVar19 < iVar12) {
      if (0x7ffffffc < iVar12) {
        return 0xfffffff0;
      }
      if (0x14 < uVar16 - 4) {
        return 0xfffffff4;
      }
      lVar24 = *(long *)(param_1 + 0xae);
      iVar18 = *(int *)(lVar24 + uVar22 * 4 + 0x20);
      bVar5 = *(byte *)(lVar24 + uVar22);
      param_1[0x18] = param_1[0x18] + uVar9;
      if (*(long *)(lVar24 + 0xa8) == 0) {
        return 0xffffffed;
      }
      iVar21 = (int)(iVar12 + ~uVar19) >> (bVar5 & 0x1f);
      if (*(int *)(*(long *)(param_1 + 0xb0) + 0x18) <= iVar21) {
        return 0xfffffff5;
      }
      lVar25 = *(long *)(param_1 + 0x1e) + (long)(int)uVar11;
      lVar24 = *(long *)(lVar24 + 0xa8) +
               (long)iVar18 +
               (long)(int)((~(-1 << (ulong)(bVar5 & 0x1f)) & (uVar19 - iVar12 ^ 0xffffffff)) *
                          uVar16);
      if (iVar21 == *(short *)(*(long *)(param_1 + 0xb0) + 0x30)) {
        func_0x000107c610b4(lVar25,lVar24,uVar22);
        uVar19 = uVar16;
      }
      else {
        func_0x000100c2ff70(lVar25,lVar24,uVar22);
        uVar19 = (uint)lVar25;
      }
      uVar11 = uVar19 + uVar11;
      uVar23 = (ulong)uVar11;
      param_1[0x42] = param_1[0x42] - uVar19;
      if (param_1[0x16] <= (int)uVar11) {
        iVar12 = 0xf;
        goto LAB_100a405b0;
      }
    }
    else {
      uVar3 = param_1[0x18];
      uVar9 = param_1[0x17] & uVar11 - iVar12;
      lVar24 = (long)(int)uVar11;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x1e) + lVar24);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x1e) + (long)(int)uVar9);
      uVar19 = uVar16 + uVar11;
      uVar23 = (ulong)uVar19;
      param_1[((ulong)uVar3 & 3) + 0x19] = iVar12;
      param_1[0x18] = uVar3 + 1;
      param_1[0x42] = param_1[0x42] - uVar16;
      uVar10 = *puVar1;
      puVar2[1] = puVar1[1];
      *puVar2 = uVar10;
      if (((int)uVar11 < (int)(uVar9 + uVar16) && (int)uVar9 < (int)uVar19) ||
         (param_1[0x16] <= (int)uVar19 || param_1[0x16] <= (int)(uVar9 + uVar16))) {
LAB_100a3fc94:
        iVar18 = -(int)lVar24;
        iVar12 = uVar11 - param_1[0x16];
        while( true ) {
          iVar21 = (int)uVar22;
          uVar16 = iVar21 - 1;
          uVar22 = (ulong)uVar16;
          if (iVar21 < 1) break;
          *(undefined1 *)(*(long *)(param_1 + 0x1e) + lVar24) =
               *(undefined1 *)
                (*(long *)(param_1 + 0x1e) + (long)((int)lVar24 - param_1[0x5a] & param_1[0x17]));
          lVar24 = lVar24 + 1;
          iVar18 = iVar18 + -1;
          bVar8 = iVar12 == -1;
          iVar12 = iVar12 + 1;
          if (bVar8) {
            uVar11 = -iVar18;
            iVar12 = 0x10;
            goto LAB_100a405b0;
          }
        }
        uVar23 = (ulong)(uint)-iVar18;
      }
      else if (0x10 < (int)uVar16) {
        if (uVar16 < 0x21) {
          uVar10 = puVar1[2];
          puVar2[3] = puVar1[3];
          puVar2[2] = uVar10;
        }
        else {
          func_0x000107c610b4(puVar2 + 2,puVar1 + 2,uVar16 - 0x10);
        }
      }
    }
    uVar11 = (uint)uVar23;
    if (param_1[0x42] < 1) goto LAB_100a4046c;
LAB_100a3fce8:
    uVar11 = (uint)uVar23;
    uVar22 = *(ulong *)(param_1 + 8);
    if (uVar22 < 0x1c) {
LAB_100a405f8:
      *param_1 = 7;
      goto LAB_100a4018c;
    }
    iVar12 = param_1[0x45];
    while (iVar12 == 0) {
      func_0x000107c2f060(param_1);
      uVar22 = *(ulong *)(param_1 + 8);
      if (uVar22 < 0x1c) goto LAB_100a405f8;
      iVar12 = param_1[0x45];
    }
    uVar11 = param_1[4];
    uVar13 = *(ulong *)(param_1 + 2);
    if (0x2f < uVar11) {
      *(ulong *)(param_1 + 2) = uVar13 >> 0x30;
      uVar11 = uVar11 ^ 0x30;
      param_1[4] = uVar11;
      uVar13 = uVar13 >> 0x30 | **(long **)(param_1 + 6) << 0x10;
      *(ulong *)(param_1 + 2) = uVar13;
      uVar22 = uVar22 - 6;
      *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 6;
      *(ulong *)(param_1 + 8) = uVar22;
    }
    uVar20 = uVar13 >> ((ulong)uVar11 & 0x3f);
    pbVar15 = (byte *)(*(long *)(param_1 + 0x22) + (uVar20 & 0xff) * 4);
    bVar5 = *pbVar15;
    if (8 < bVar5) {
      uVar11 = uVar11 + 8;
      param_1[4] = uVar11;
      pbVar15 = pbVar15 + (ulong)(((uint)uVar20 >> 8 &
                                  (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)) +
                                 (uint)*(ushort *)(pbVar15 + 2)) * 4;
      bVar5 = *pbVar15;
    }
    uVar11 = uVar11 + bVar5;
    uVar20 = (ulong)uVar11;
    param_1[4] = uVar11;
    lVar24 = (ulong)*(ushort *)(pbVar15 + 2) * 8;
    bVar5 = (&UNK_10e58d5c0)[lVar24];
    bVar17 = (&UNK_10e58d5c1)[lVar24];
    bVar4 = (&UNK_10e58d5c3)[lVar24];
    uVar6 = *(ushort *)(&UNK_10e58d5c4 + lVar24);
    uVar7 = *(ushort *)(&UNK_10e58d5c6 + lVar24);
    param_1[0x5a] = (int)(char)(&UNK_10e58d5c2)[lVar24];
    param_1[0x41] = (uint)bVar4;
    *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(*(long *)(param_1 + 0x28) + (ulong)bVar4);
    if (bVar5 == 0) {
      uVar16 = 0;
    }
    else {
      if (0x1f < uVar11) {
        *(ulong *)(param_1 + 2) = uVar13 >> 0x20;
        uVar20 = (ulong)(uVar11 ^ 0x20);
        param_1[4] = uVar11 ^ 0x20;
        uVar13 = uVar13 >> 0x20 | (ulong)**(uint **)(param_1 + 6) << 0x20;
        *(ulong *)(param_1 + 2) = uVar13;
        uVar22 = uVar22 - 4;
        *(uint **)(param_1 + 6) = *(uint **)(param_1 + 6) + 1;
        *(ulong *)(param_1 + 8) = uVar22;
      }
      uVar16 = (uint)(uVar13 >> (uVar20 & 0x3f)) & (-1 << (ulong)(bVar5 & 0x1f) ^ 0xffffffffU);
      uVar11 = (int)uVar20 + (uint)bVar5;
      uVar20 = (ulong)uVar11;
    }
    if (0x1f < uVar11) {
      *(ulong *)(param_1 + 2) = uVar13 >> 0x20;
      uVar20 = (ulong)(uVar11 ^ 0x20);
      param_1[4] = uVar11 ^ 0x20;
      uVar13 = uVar13 >> 0x20 | (ulong)**(uint **)(param_1 + 6) << 0x20;
      *(ulong *)(param_1 + 2) = uVar13;
      *(uint **)(param_1 + 6) = *(uint **)(param_1 + 6) + 1;
      *(ulong *)(param_1 + 8) = uVar22 - 4;
    }
    param_1[4] = (int)uVar20 + (uint)bVar17;
    param_1[0x59] =
         ((uint)(uVar13 >> (uVar20 & 0x3f)) & (-1 << (ulong)(bVar17 & 0x1f) ^ 0xffffffffU)) +
         (uint)uVar7;
    param_1[0x45] = iVar12 + -1;
    uVar16 = uVar16 + uVar6;
    uVar22 = (ulong)uVar16;
  } while (uVar16 == 0);
  param_1[0x42] = param_1[0x42] - uVar16;
  iVar12 = param_1[0x40];
  goto joined_r0x000100a3fc78;
}



/* Entry: 100a4120c; end: 100a412cf;  */

undefined8 FUN_100a4120c(char *param_1,ulong *param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = (uint)param_2[1];
  if (uVar2 == 0x40) {
    if (*param_1 == '\0') {
      *param_3 = (uint)*(ushort *)(param_1 + 2);
      return 1;
    }
  }
  else {
    uVar6 = *param_2 >> ((ulong)uVar2 & 0x3f);
    pbVar1 = (byte *)(param_1 + (uVar6 & 0xff) * 4);
    uVar4 = (uint)*pbVar1;
    if (*pbVar1 < 9) {
      if (uVar4 <= 0x40 - uVar2) {
        *(uint *)(param_2 + 1) = uVar2 + uVar4;
        *param_3 = (uint)*(ushort *)(pbVar1 + 2);
        return 1;
      }
    }
    else if (8 < 0x40 - uVar2) {
      uVar3 = *(ushort *)(pbVar1 + 2);
      uVar5 = (uint)pbVar1[(ulong)((uint)uVar3 +
                                  (((uint)uVar6 & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU)) >> 8)
                                  ) * 4];
      if (uVar5 <= 0x38 - uVar2) {
        *(uint *)(param_2 + 1) = uVar2 + uVar5 + 8;
        *param_3 = (uint)*(ushort *)
                          (pbVar1 + (ulong)((uint)uVar3 +
                                           (((uint)uVar6 &
                                            (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU)) >> 8)) * 4
                          + 2);
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 100a412d0; end: 100a4146b;  */

undefined4 FUN_100a412d0(long param_1,ulong *param_2,long *param_3,long *param_4,int param_5)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  
  iVar5 = *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x4c);
  if (iVar5 <= *(int *)(param_1 + 0x4c)) {
    iVar4 = iVar5;
  }
  uVar1 = (*(long *)(param_1 + 0x170) * (long)iVar5 - *(ulong *)(param_1 + 0x178)) + (long)iVar4;
  uVar8 = *param_2;
  uVar3 = uVar8;
  if (uVar1 <= uVar8) {
    uVar3 = uVar1;
  }
  if (*(int *)(param_1 + 0x108) < 0) {
    return 0xfffffff7;
  }
  if (param_3 == (long *)0x0) {
    *param_2 = uVar8 - uVar3;
    lVar7 = *(long *)(param_1 + 0x178) + uVar3;
    *(long *)(param_1 + 0x178) = lVar7;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x78) +
            (*(ulong *)(param_1 + 0x178) & (long)*(int *)(param_1 + 0x5c));
    if (*param_3 != 0) {
      func_0x000107c610b4(*param_3,lVar7,uVar3);
      lVar7 = *param_3 + uVar3;
    }
    *param_3 = lVar7;
    *param_2 = *param_2 - uVar3;
    lVar7 = *(long *)(param_1 + 0x178) + uVar3;
    *(long *)(param_1 + 0x178) = lVar7;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = lVar7;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  iVar5 = 1 << (ulong)(*(uint *)(param_1 + 0x29c) & 0x1f);
  if (uVar8 < uVar1) {
    uVar6 = 3;
    if (iVar4 != iVar5 && param_5 == 0) {
      uVar6 = 1;
    }
    return uVar6;
  }
  if (iVar4 == iVar5) {
    iVar5 = *(int *)(param_1 + 0x4c) - iVar4;
    if (iVar4 <= *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x4c) = iVar5;
      *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x170) + 1;
      uVar2 = 0;
      if (iVar5 != 0) {
        uVar2 = 8;
      }
      *(ushort *)(param_1 + 0x298) = *(ushort *)(param_1 + 0x298) & 0xfff7 | uVar2;
    }
  }
  return 1;
}



/* Entry: 100a4146c; end: 100a4147f;  */

int FUN_100a4146c(long param_1,int param_2)

{
  *(int *)(param_1 + 0x74) = param_2;
  if (2 < param_2 - 1U) {
    param_2 = 0;
  }
  return param_2;
}



/* Entry: 100a41480; end: 100a414af;  */

void FUN_100a41480(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_1001e33e0(*(undefined8 *)(param_1 + 8));
  }
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 100a414b0; end: 100a4302b;  */

void FUN_100a414b0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1009f07f0();
                    /* WARNING: Could not recover jumptable at 0x000100a414dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2);
  return;
}



/* Entry: 100a4302c; end: 100a43033; +[SCNetworkHealthBannerEntryPoint context] */

undefined8 FUN_100a4302c(void)

{
  return 1;
}



/* Entry: 100a43034; end: 100a4309f; -[SCSemcSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a43034(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305bf60,0);
  *(undefined8 *)(param_1 + _DAT_11305bf68) = 0;
  *(undefined8 *)(param_1 + _DAT_11305bf70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a430a0; end: 100a4314b; -[SCSemcSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a430a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a4314c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}


