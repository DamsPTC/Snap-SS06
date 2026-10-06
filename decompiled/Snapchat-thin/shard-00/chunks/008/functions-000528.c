/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a25bfc; end: 100a25c3f;  */

void FUN_100a25bfc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a25c40; end: 100a25c4b; -[SCSCAudioSessionServicesSaberEntryPoint meSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a25c40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a010;
  func_0x000107c61428(param_1 + _DAT_11305a010,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a25c4c; end: 100a25c93; -[SCSCAudioSessionServicesSaberEntryPoint sCAudioSessionServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a25c4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a018;
  func_0x000107c61428(param_1 + _DAT_11305a018,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a25c94; end: 100a25cb3;  */

void FUN_100a25c94(void)

{
  func_0x000107c61168(&PTR_PTR_112987fd0);
  return;
}



/* Entry: 100a25cb4; end: 100a25cbb; +[SCAudioSessionEntryPoint context] */

undefined8 FUN_100a25cb4(void)

{
  return 1;
}



/* Entry: 100a25cbc; end: 100a25d3b; -[SCSCBackgroundExecutionServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a25cbc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113054a98,0);
  func_0x000107c61614(param_1 + _DAT_113054aa0,0);
  *(undefined8 *)(param_1 + _DAT_113054aa8) = 0;
  *(undefined8 *)(param_1 + _DAT_113054ab0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a25d3c; end: 100a25de7; -[SCSCBackgroundExecutionServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a25d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a25de8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a25de8; end: 100a25feb;  */

void FUN_100a25de8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e19eb0)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1e6150,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e19e80)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000024,0x800000010f1e6180,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ClientresSystemScopeGraphBridge/SCSCBackgroundExecutionServicesSaberEntryPoint.swift"
                                ,0x54,2,0x33,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100a25fec);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58018();
        goto LAB_100a25e74;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c534a0();
  }
LAB_100a25e74:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a25fec; end: 100a25ff7; -[SCSCBackgroundExecutionServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a25fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113054a98;
  func_0x000107c61428(param_1 + _DAT_113054a98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a25ff8; end: 100a2604b;  */

void FUN_100a25ff8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a2604c; end: 100a26057; -[SCSCBackgroundExecutionServicesSaberEntryPoint setClientresSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a2604c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113054aa0;
  func_0x000107c61428(param_1 + _DAT_113054aa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a26058; end: 100a260bb; -[SCSCBackgroundExecutionServicesSaberEntryPoint setSCBackgroundExecutionServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a26058(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113054aa8;
  func_0x000107c61428(param_1 + _DAT_113054aa8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a260bc; end: 100a260e3; -[SCSCBackgroundExecutionServicesSaberEntryPoint begin] */

void FUN_100a260bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a260e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a260e4; end: 100a26267;  */

/* WARNING: Possible PIC construction at 0x000100a261e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a261f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a26210: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a261e8) */
/* WARNING: Removing unreachable block (ram,0x000100a261f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a260e4(void)

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
    func_0x000107c3fbf4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50a70();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a2630c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_1130549e8);
        *(undefined8 *)(lVar2 + _DAT_1130546f0) = uVar6;
        *(long *)(lVar2 + _DAT_1130546f8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_1130546f8);
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



/* Entry: 100a26268; end: 100a26273; -[SCSCBackgroundExecutionServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a26268(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054a98;
  func_0x000107c61428(param_1 + _DAT_113054a98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a26274; end: 100a262b7;  */

void FUN_100a26274(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a262b8; end: 100a262c3; -[SCSCBackgroundExecutionServicesSaberEntryPoint clientresSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a262b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054aa0;
  func_0x000107c61428(param_1 + _DAT_113054aa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a262c4; end: 100a2630b; -[SCSCBackgroundExecutionServicesSaberEntryPoint sCBackgroundExecutionServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a262c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054aa8;
  func_0x000107c61428(param_1 + _DAT_113054aa8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a2630c; end: 100a2632b;  */

void FUN_100a2630c(void)

{
  func_0x000107c61168(&PTR_PTR_112984398);
  return;
}



/* Entry: 100a2632c; end: 100a263ab; -[SCSCBatteryLoggingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a2632c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113054ae0,0);
  func_0x000107c61614(param_1 + _DAT_113054ae8,0);
  *(undefined8 *)(param_1 + _DAT_113054af0) = 0;
  *(undefined8 *)(param_1 + _DAT_113054af8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a263ac; end: 100a26457; -[SCSCBatteryLoggingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a263ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a26458(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a26458; end: 100a2665b;  */

void FUN_100a26458(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000027;
    if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef0e19eb0)) ||
       (func_0x000107c605b8(0xd000000000000027,0x800000010f1e6150,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c534a0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0e19df0)) {
        uVar2 = 0xd00000000000001f;
        func_0x000107c605b8(0xd00000000000001f,0x800000010f1e6210,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ClientresSystemScopeGraphBridge/SCSCBatteryLoggingServicesSaberEntryPoint.swift"
                              ,0x4f,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a2665c);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5801c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a2665c; end: 100a26667; -[SCSCBatteryLoggingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a2665c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113054ae0;
  func_0x000107c61428(param_1 + _DAT_113054ae0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a26668; end: 100a266bb;  */

void FUN_100a26668(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a266bc; end: 100a266c7; -[SCSCBatteryLoggingServicesSaberEntryPoint setClientresSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a266bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113054ae8;
  func_0x000107c61428(param_1 + _DAT_113054ae8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a266c8; end: 100a2672b; -[SCSCBatteryLoggingServicesSaberEntryPoint setSCBatteryLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a266c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113054af0;
  func_0x000107c61428(param_1 + _DAT_113054af0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a2672c; end: 100a26753; -[SCSCBatteryLoggingServicesSaberEntryPoint begin] */

void FUN_100a2672c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a26754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a26754; end: 100a268d7;  */

/* WARNING: Possible PIC construction at 0x000100a26854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a26864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a26880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a26858) */
/* WARNING: Removing unreachable block (ram,0x000100a26868) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a26754(void)

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
    func_0x000107c3fbf4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50a74();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a2697c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_1130549f0);
        *(undefined8 *)(lVar2 + _DAT_113054728) = uVar6;
        *(long *)(lVar2 + _DAT_113054730) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113054730);
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



/* Entry: 100a268d8; end: 100a268e3; -[SCSCBatteryLoggingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a268d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054ae0;
  func_0x000107c61428(param_1 + _DAT_113054ae0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a268e4; end: 100a26927;  */

void FUN_100a268e4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a26928; end: 100a26933; -[SCSCBatteryLoggingServicesSaberEntryPoint clientresSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a26928(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054ae8;
  func_0x000107c61428(param_1 + _DAT_113054ae8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a26934; end: 100a2697b; -[SCSCBatteryLoggingServicesSaberEntryPoint sCBatteryLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a26934(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054af0;
  func_0x000107c61428(param_1 + _DAT_113054af0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a2697c; end: 100a2699b;  */

void FUN_100a2697c(void)

{
  func_0x000107c61168(&PTR_PTR_112984460);
  return;
}



/* Entry: 100a2699c; end: 100a26b0f;  */

void FUN_100a2699c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if ((*(long *)(lVar3 + 0x230) != 0) &&
     (lVar1 = lVar3,
     func_0x0001009eac88(lVar3,*(undefined8 *)(lVar3 + 0x200),*(undefined4 *)(lVar3 + 0x208),
                         *(undefined8 *)(lVar3 + 0x210)), (int)lVar1 != -1)) {
    func_0x0001001f347c(lVar3 + 0x200);
    *(undefined4 *)(lVar3 + 0x208) = 0;
    *(undefined8 *)(lVar3 + 0x210) = 0;
    FUN_1001e0b5c(lVar3 + 0x70);
    lVar2 = *(long *)(lVar3 + 0x230);
    *(long *)(lVar3 + 0x230) = 0;
    (**(code **)(lVar2 + 8))(lVar2,lVar1);
    func_0x000100140e00(&stack0xffffffffffffffe8);
    return;
  }
  return;
}



/* Entry: 100a26b10; end: 100a26b8f; -[SCSCCompositeConfigValueProviderServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a26b10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113056e90,0);
  func_0x000107c61614(param_1 + _DAT_113056e98,0);
  *(undefined8 *)(param_1 + _DAT_113056ea0) = 0;
  *(undefined8 *)(param_1 + _DAT_113056ea8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a26b90; end: 100a26c3b; -[SCSCCompositeConfigValueProviderServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a26b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a26c3c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a26c3c; end: 100a26e3f;  */

void FUN_100a26c3c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e18ae0)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f1e7520,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002d;
        if (((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e18a20)) &&
           (func_0x000107c605b8(0xd00000000000002d,0x800000010f1e75e0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CofSystemScopeGraphBridge/SCSCCompositeConfigValueProviderServicesSaberEntryPoint.swift"
                              ,0x57,2,0x39,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a26e40);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c581dc();
        goto LAB_100a26cc8;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53550();
  }
LAB_100a26cc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a26e40; end: 100a26e4b; -[SCSCCompositeConfigValueProviderServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a26e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113056e90;
  func_0x000107c61428(param_1 + _DAT_113056e90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a26e4c; end: 100a26e9f;  */

void FUN_100a26e4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a26ea0; end: 100a26eab; -[SCSCCompositeConfigValueProviderServicesSaberEntryPoint setCofSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a26ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113056e98;
  func_0x000107c61428(param_1 + _DAT_113056e98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a26eac; end: 100a26f0f; -[SCSCCompositeConfigValueProviderServicesSaberEntryPoint setSCCompositeConfigValueProviderServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a26eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113056ea0;
  func_0x000107c61428(param_1 + _DAT_113056ea0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a26f10; end: 100a26f37; -[SCSCCompositeConfigValueProviderServicesSaberEntryPoint begin] */

void FUN_100a26f10(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a26f38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a26f38; end: 100a270bb;  */

/* WARNING: Possible PIC construction at 0x000100a27038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a27048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a27064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a2703c) */
/* WARNING: Removing unreachable block (ram,0x000100a2704c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a26f38(void)

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
    func_0x000107c3fd28();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50c34();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a27d2c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113056d80);
        *(undefined8 *)(lVar2 + _DAT_113056660) = uVar6;
        *(long *)(lVar2 + _DAT_113056668) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113056668);
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



/* Entry: 100a270bc; end: 100a270c7; -[SCSCCompositeConfigValueProviderServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a270bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113056e90;
  func_0x000107c61428(param_1 + _DAT_113056e90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a270c8; end: 100a2710b;  */

void FUN_100a270c8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a2710c; end: 100a27117; -[SCSCCompositeConfigValueProviderServicesSaberEntryPoint cofSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a2710c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113056e98;
  func_0x000107c61428(param_1 + _DAT_113056e98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a27118; end: 100a27ce3;  */

bool FUN_100a27118(long *param_1)

{
  if ((*param_1 != 0) && (*(char *)(*param_1 + 4) == '\0')) {
    return param_1[1] != 0;
  }
  return false;
}



/* Entry: 100a27ce4; end: 100a27d2b; -[SCSCCompositeConfigValueProviderServicesSaberEntryPoint sCCompositeConfigValueProviderServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a27ce4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113056ea0;
  func_0x000107c61428(param_1 + _DAT_113056ea0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a27d2c; end: 100a27d4b;  */

void FUN_100a27d2c(void)

{
  func_0x000107c61168(&PTR_PTR_112985568);
  return;
}



/* Entry: 100a27d4c; end: 100a2b927;  */

undefined4 FUN_100a27d4c(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1;
  func_0x0001001db428();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
    if (*(char *)(param_1 + 0x10) != '\x10') {
      uVar2 = 0;
    }
    if (*(char *)(param_1 + 0x10) == '\x04') {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 100a2b928; end: 100a2b94f;  */

void FUN_100a2b928(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c60e20(param_2);
  return;
}



/* Entry: 100a2b950; end: 100a2b987;  */

void FUN_100a2b950(long *param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 < 0) {
    func_0x000107c2cca0();
  }
  else {
    plVar1 = param_1;
    FUN_100a2b928();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2;
  }
  return;
}



/* Entry: 100a2b988; end: 100a2b993;  */

void FUN_100a2b988(void)

{
  return;
}



/* Entry: 100a2b994; end: 100a2b9b3;  */

void FUN_100a2b994(void)

{
  FUN_100a2b988();
  FUN_100a2b9c0();
  func_0x000100a2b9f0();
  return;
}



/* Entry: 100a2b9b4; end: 100a2b9bf;  */

undefined8 FUN_100a2b9b4(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 100a2b9c0; end: 100a2b9e7;  */

void FUN_100a2b9c0(long param_1)

{
  long unaff_x19;
  
  FUN_100a2b9b4();
  if (param_1 != 0) {
    *(long *)(unaff_x19 + 8) = param_1;
    func_0x000107c60e14();
    func_0x000107346b50();
  }
  return;
}



/* Entry: 100a2b9e8; end: 100a2ba0b;  */

void FUN_100a2b9e8(void)

{
  return;
}



/* Entry: 100a2ba0c; end: 100a33143;  */

void FUN_100a2ba0c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 100a33144; end: 100a33217;  */

void FUN_100a33144(ulong param_1,int param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar2 = 0x42;
    uVar3 = 0x326;
  }
  else if (*(int *)(*(long *)(param_1 + 0x30) + 0xc0) == param_2) {
    puVar4 = *(ulong **)(*(long *)(param_1 + 0x30) + 0xd8);
    uVar5 = 0;
    if (puVar4 != (ulong *)0x0) {
      uVar5 = *puVar4;
    }
    if ((!CARRY8(uVar5,param_4)) && (uVar1 = param_1, FUN_100a33218(), uVar5 + param_4 <= uVar1)) {
      FUN_1001fa2c8(param_1,param_3,param_4);
      return;
    }
    uVar2 = 0x96;
    uVar3 = 0x332;
  }
  else {
    uVar2 = 299;
    uVar3 = 0x32b;
  }
  FUN_1004d2c58(0x10,0,uVar2,&UNK_10f6d0a17,uVar3);
  return;
}



/* Entry: 100a33218; end: 100a3326f;  */

uint FUN_100a33218(long param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x4000;
  }
  if (param_2 == 3) {
    return 0x4000;
  }
  if (param_2 != 2) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
    uVar1 = *(int *)(param_1 + 0x88) << 1;
  }
  else {
    if ((*(byte *)(*(long *)(param_1 + 8) + 0xe8) & 1) == 0) {
      return 0x4000;
    }
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  if (uVar1 < 0x4001) {
    return 0x4000;
  }
  return uVar1;
}



/* Entry: 100a33270; end: 100a33277;  */

void FUN_100a33270(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100a33274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100a33278; end: 100a332f7; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a33278(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305a370,0);
  func_0x000107c61614(param_1 + _DAT_11305a378,0);
  *(undefined8 *)(param_1 + _DAT_11305a380) = 0;
  *(undefined8 *)(param_1 + _DAT_11305a388) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a332f8; end: 100a333a3; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a332f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a333a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a333a4; end: 100a335a7;  */

void FUN_100a333a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e165a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f1e9a60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e16570)) &&
           (func_0x000107c605b8(0xd00000000000002a,0x800000010f1e9a90,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MetricSystemScopeGraphBridge/SCSCGraphenePerformanceLoggerServicesSaberEntryPoint.swift"
                              ,0x57,2,0x2f,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a335a8);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58380();
        goto LAB_100a33430;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56698();
  }
LAB_100a33430:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a335a8; end: 100a335b3; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a335a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a370;
  func_0x000107c61428(param_1 + _DAT_11305a370,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a335b4; end: 100a33607;  */

void FUN_100a335b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a33608; end: 100a33613; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint setMetricSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a33608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a378;
  func_0x000107c61428(param_1 + _DAT_11305a378,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a33614; end: 100a33677; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint setSCGraphenePerformanceLoggerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a33614(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a380;
  func_0x000107c61428(param_1 + _DAT_11305a380,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a33678; end: 100a3369f; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint begin] */

void FUN_100a33678(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a336a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a336a0; end: 100a33823;  */

/* WARNING: Possible PIC construction at 0x000100a337a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a337b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a337cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a337a4) */
/* WARNING: Removing unreachable block (ram,0x000100a337b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a336a0(void)

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
    func_0x000107c4ce78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50dd8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a338c8();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11305a2d0);
        *(undefined8 *)(lVar2 + _DAT_11305a250) = uVar6;
        *(long *)(lVar2 + _DAT_11305a258) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11305a258);
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



/* Entry: 100a33824; end: 100a3382f; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a33824(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a370;
  func_0x000107c61428(param_1 + _DAT_11305a370,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a33830; end: 100a33873;  */

void FUN_100a33830(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a33874; end: 100a3387f; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint metricSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a33874(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a378;
  func_0x000107c61428(param_1 + _DAT_11305a378,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a33880; end: 100a338c7; -[SCSCGraphenePerformanceLoggerServicesSaberEntryPoint sCGraphenePerformanceLoggerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a33880(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a380;
  func_0x000107c61428(param_1 + _DAT_11305a380,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a338c8; end: 100a338e7;  */

void FUN_100a338c8(void)

{
  func_0x000107c61168(&PTR_PTR_1129885f8);
  return;
}



/* Entry: 100a338e8; end: 100a338ef;  */

void FUN_100a338e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a338f0; end: 100a33943;  */

void FUN_100a338f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a33944; end: 100a3394b;  */

void FUN_100a33944(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10009835c();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100a339d4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a3394c; end: 100a339d3;  */

void FUN_100a3394c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10009835c();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100a339d4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a339d4; end: 100a33b93;  */

void FUN_100a339d4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7348;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef85b60);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a33b94);
  (*pcVar1)();
}



/* Entry: 100a33b94; end: 100a33c0f; -[SCGraphenePerformanceLoggerEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100a33bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a33bfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a33b94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110878b50);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126b74b8;
  func_0x000107c610f4(PTR_PTR_1126b74b8);
  func_0x000107c46bb0();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112721670),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100a33c10; end: 100a33c83; -[SCGraphenePerformanceLoggerServices initWithGraphenePerformanceLoggerProvider:] */

undefined1 * FUN_100a33c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270e418;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a33c84; end: 100a33caf;  */

void FUN_100a33c84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a33cb0; end: 100a33d2f; -[SCSCGrapheneServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a33cb0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305a3b8,0);
  func_0x000107c61614(param_1 + _DAT_11305a3c0,0);
  *(undefined8 *)(param_1 + _DAT_11305a3c8) = 0;
  *(undefined8 *)(param_1 + _DAT_11305a3d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a33d30; end: 100a33ddb; -[SCSCGrapheneServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a33d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a33ddc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a33ddc; end: 100a33fdf;  */

void FUN_100a33ddc(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef0e165a0)) ||
       (func_0x000107c605b8(0xd000000000000024,0x800000010f1e9a60,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c56698();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef0e164e0)) {
        uVar2 = 0xd000000000000019;
        func_0x000107c605b8(0xd000000000000019,0x800000010f1e9b20,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MetricSystemScopeGraphBridge/SCSCGrapheneServicesSaberEntryPoint.swift"
                              ,0x46,2,0x2f,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a33fe0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58388();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a33fe0; end: 100a33feb; -[SCSCGrapheneServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a33fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a3b8;
  func_0x000107c61428(param_1 + _DAT_11305a3b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a33fec; end: 100a3403f;  */

void FUN_100a33fec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a34040; end: 100a3404b; -[SCSCGrapheneServicesSaberEntryPoint setMetricSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a3c0;
  func_0x000107c61428(param_1 + _DAT_11305a3c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a3404c; end: 100a340af; -[SCSCGrapheneServicesSaberEntryPoint setSCGrapheneServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3404c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305a3c8;
  func_0x000107c61428(param_1 + _DAT_11305a3c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a340b0; end: 100a340d7; -[SCSCGrapheneServicesSaberEntryPoint begin] */

void FUN_100a340b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a340d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a340d8; end: 100a3425b;  */

/* WARNING: Possible PIC construction at 0x000100a341d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a341e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a34204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a341dc) */
/* WARNING: Removing unreachable block (ram,0x000100a341ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a340d8(void)

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
    func_0x000107c4ce78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50de0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a34300();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11305a2d8);
        *(undefined8 *)(lVar2 + _DAT_11305a288) = uVar6;
        *(long *)(lVar2 + _DAT_11305a290) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11305a290);
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



/* Entry: 100a3425c; end: 100a34267; -[SCSCGrapheneServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3425c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a3b8;
  func_0x000107c61428(param_1 + _DAT_11305a3b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a34268; end: 100a342ab;  */

void FUN_100a34268(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a342ac; end: 100a342b7; -[SCSCGrapheneServicesSaberEntryPoint metricSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a342ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a3c0;
  func_0x000107c61428(param_1 + _DAT_11305a3c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a342b8; end: 100a342ff; -[SCSCGrapheneServicesSaberEntryPoint sCGrapheneServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a342b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305a3c8;
  func_0x000107c61428(param_1 + _DAT_11305a3c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a34300; end: 100a3431f;  */

void FUN_100a34300(void)

{
  func_0x000107c61168(&PTR_PTR_1129886c0);
  return;
}



/* Entry: 100a34320; end: 100a34327; +[SCInitializeTrackingFacilitiesEntryPoint context] */

undefined8 FUN_100a34320(void)

{
  return 1;
}



/* Entry: 100a34328; end: 100a343a7; -[SCSCLegacyBlizzardServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34328(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113058378,0);
  func_0x000107c61614(param_1 + _DAT_113058380,0);
  *(undefined8 *)(param_1 + _DAT_113058388) = 0;
  *(undefined8 *)(param_1 + _DAT_113058390) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a343a8; end: 100a34453; -[SCSCLegacyBlizzardServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a343a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a34454(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}


