/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ac41d0; end: 100ac41db; -[SCSCCreatorSettingsServiceSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac41d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5578;
  func_0x000107c61428(param_1 + _DAT_112fe5578,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac41dc; end: 100ac421f;  */

void FUN_100ac41dc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac4220; end: 100ac422b; -[SCSCCreatorSettingsServiceSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4220(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5580;
  func_0x000107c61428(param_1 + _DAT_112fe5580,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac422c; end: 100ac4273; -[SCSCCreatorSettingsServiceSaberEntryPoint sCCreatorSettingsServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac422c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5588;
  func_0x000107c61428(param_1 + _DAT_112fe5588,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac4274; end: 100ac4293;  */

void FUN_100ac4274(void)

{
  func_0x000107c61168(&PTR_PTR_112921a68);
  return;
}



/* Entry: 100ac4294; end: 100ac4313; -[SCSCDiscoverFeedDataServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4294(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe55c0,0);
  func_0x000107c61614(param_1 + _DAT_112fe55c8,0);
  *(undefined8 *)(param_1 + _DAT_112fe55d0) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe55d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac4314; end: 100ac43bf; -[SCSCDiscoverFeedDataServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac4314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac43c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac43c0; end: 100ac45c3;  */

void FUN_100ac43c0(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0e66610)) ||
       (func_0x000107c605b8(0xd00000000000002c,0x800000010f1999f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c599bc();
    }
    else {
      if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e66560)) {
        uVar2 = 0xd000000000000021;
        func_0x000107c605b8(0xd000000000000021,0x800000010f199aa0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCDiscoverFeedDataServicesSaberEntryPoint.swift"
                              ,0x56,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac45c4);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c582d0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac45c4; end: 100ac45cf; -[SCSCDiscoverFeedDataServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac45c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe55c0;
  func_0x000107c61428(param_1 + _DAT_112fe55c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac45d0; end: 100ac4623;  */

void FUN_100ac45d0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac4624; end: 100ac462f; -[SCSCDiscoverFeedDataServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe55c8;
  func_0x000107c61428(param_1 + _DAT_112fe55c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac4630; end: 100ac4693; -[SCSCDiscoverFeedDataServicesSaberEntryPoint setSCDiscoverFeedDataServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe55d0;
  func_0x000107c61428(param_1 + _DAT_112fe55d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac4694; end: 100ac46bb; -[SCSCDiscoverFeedDataServicesSaberEntryPoint begin] */

void FUN_100ac4694(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac46bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac46bc; end: 100ac483f;  */

/* WARNING: Possible PIC construction at 0x000100ac47bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac47cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac47e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac47c0) */
/* WARNING: Removing unreachable block (ram,0x000100ac47d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac46bc(void)

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
    func_0x000107c5c098();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50d28();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac48e4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe5410);
        *(undefined8 *)(lVar2 + _DAT_112fe42f8) = uVar6;
        *(long *)(lVar2 + _DAT_112fe4300) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe4300);
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



/* Entry: 100ac4840; end: 100ac484b; -[SCSCDiscoverFeedDataServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4840(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe55c0;
  func_0x000107c61428(param_1 + _DAT_112fe55c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac484c; end: 100ac488f;  */

void FUN_100ac484c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac4890; end: 100ac489b; -[SCSCDiscoverFeedDataServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4890(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe55c8;
  func_0x000107c61428(param_1 + _DAT_112fe55c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac489c; end: 100ac48e3; -[SCSCDiscoverFeedDataServicesSaberEntryPoint sCDiscoverFeedDataServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac489c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe55d0;
  func_0x000107c61428(param_1 + _DAT_112fe55d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac48e4; end: 100ac4903;  */

void FUN_100ac48e4(void)

{
  func_0x000107c61168(&PTR_PTR_112921b30);
  return;
}



/* Entry: 100ac4904; end: 100ac4983; -[SCSCDiscoverFeedLoggingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4904(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe5608,0);
  func_0x000107c61614(param_1 + _DAT_112fe5610,0);
  *(undefined8 *)(param_1 + _DAT_112fe5618) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe5620) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac4984; end: 100ac4a2f; -[SCSCDiscoverFeedLoggingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac4984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac4a30(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac4a30; end: 100ac4c33;  */

void FUN_100ac4a30(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e66610)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f1999f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e664d0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000024,0x800000010f199b30,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "StrActiveUserSessionScopeGraphBridge/SCSCDiscoverFeedLoggingServicesSaberEntryPoint.swift"
                                ,0x59,2,0x4e,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac4c34);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c582d8();
        goto LAB_100ac4abc;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599bc();
  }
LAB_100ac4abc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac4c34; end: 100ac4c3f; -[SCSCDiscoverFeedLoggingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5608;
  func_0x000107c61428(param_1 + _DAT_112fe5608,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac4c40; end: 100ac4c93;  */

void FUN_100ac4c40(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac4c94; end: 100ac4c9f; -[SCSCDiscoverFeedLoggingServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5610;
  func_0x000107c61428(param_1 + _DAT_112fe5610,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac4ca0; end: 100ac4d03; -[SCSCDiscoverFeedLoggingServicesSaberEntryPoint setSCDiscoverFeedLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5618;
  func_0x000107c61428(param_1 + _DAT_112fe5618,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac4d04; end: 100ac4d2b; -[SCSCDiscoverFeedLoggingServicesSaberEntryPoint begin] */

void FUN_100ac4d04(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac4d2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac4d2c; end: 100ac4eaf;  */

/* WARNING: Possible PIC construction at 0x000100ac4e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac4e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac4e58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac4e30) */
/* WARNING: Removing unreachable block (ram,0x000100ac4e40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4d2c(void)

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
    func_0x000107c5c098();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50d30();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac4f54();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe5418);
        *(undefined8 *)(lVar2 + _DAT_112fe4330) = uVar6;
        *(long *)(lVar2 + _DAT_112fe4338) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe4338);
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



/* Entry: 100ac4eb0; end: 100ac4ebb; -[SCSCDiscoverFeedLoggingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4eb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5608;
  func_0x000107c61428(param_1 + _DAT_112fe5608,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac4ebc; end: 100ac4eff;  */

void FUN_100ac4ebc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac4f00; end: 100ac4f0b; -[SCSCDiscoverFeedLoggingServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4f00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5610;
  func_0x000107c61428(param_1 + _DAT_112fe5610,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac4f0c; end: 100ac4f53; -[SCSCDiscoverFeedLoggingServicesSaberEntryPoint sCDiscoverFeedLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4f0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5618;
  func_0x000107c61428(param_1 + _DAT_112fe5618,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac4f54; end: 100ac4f73;  */

void FUN_100ac4f54(void)

{
  func_0x000107c61168(&PTR_PTR_112921bf8);
  return;
}



/* Entry: 100ac4f74; end: 100ac4ff3; -[SCSCDiscoverFeedNotificationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac4f74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe5650,0);
  func_0x000107c61614(param_1 + _DAT_112fe5658,0);
  *(undefined8 *)(param_1 + _DAT_112fe5660) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe5668) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac4ff4; end: 100ac509f; -[SCSCDiscoverFeedNotificationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac4ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac50a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac50a0; end: 100ac52a3;  */

void FUN_100ac50a0(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0e66610)) ||
       (func_0x000107c605b8(0xd00000000000002c,0x800000010f1999f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c599bc();
    }
    else {
      if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e66440)) {
        uVar2 = 0xd000000000000029;
        func_0x000107c605b8(0xd000000000000029,0x800000010f199bc0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCDiscoverFeedNotificationServicesSaberEntryPoint.swift"
                              ,0x5e,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac52a4);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c582e4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac52a4; end: 100ac52af; -[SCSCDiscoverFeedNotificationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac52a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5650;
  func_0x000107c61428(param_1 + _DAT_112fe5650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac52b0; end: 100ac5303;  */

void FUN_100ac52b0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac5304; end: 100ac530f; -[SCSCDiscoverFeedNotificationServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5304(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5658;
  func_0x000107c61428(param_1 + _DAT_112fe5658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac5310; end: 100ac5373; -[SCSCDiscoverFeedNotificationServicesSaberEntryPoint setSCDiscoverFeedNotificationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5310(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5660;
  func_0x000107c61428(param_1 + _DAT_112fe5660,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac5374; end: 100ac539b; -[SCSCDiscoverFeedNotificationServicesSaberEntryPoint begin] */

void FUN_100ac5374(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac539c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac539c; end: 100ac551f;  */

/* WARNING: Possible PIC construction at 0x000100ac549c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac54ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac54c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac54a0) */
/* WARNING: Removing unreachable block (ram,0x000100ac54b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac539c(void)

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
    func_0x000107c5c098();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50d3c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac55c4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe5420);
        *(undefined8 *)(lVar2 + _DAT_112fe4368) = uVar6;
        *(long *)(lVar2 + _DAT_112fe4370) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe4370);
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



/* Entry: 100ac5520; end: 100ac552b; -[SCSCDiscoverFeedNotificationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5520(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5650;
  func_0x000107c61428(param_1 + _DAT_112fe5650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac552c; end: 100ac556f;  */

void FUN_100ac552c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac5570; end: 100ac557b; -[SCSCDiscoverFeedNotificationServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5570(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5658;
  func_0x000107c61428(param_1 + _DAT_112fe5658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac557c; end: 100ac55c3; -[SCSCDiscoverFeedNotificationServicesSaberEntryPoint sCDiscoverFeedNotificationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac557c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5660;
  func_0x000107c61428(param_1 + _DAT_112fe5660,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac55c4; end: 100ac55e3;  */

void FUN_100ac55c4(void)

{
  func_0x000107c61168(&PTR_PTR_112921cc0);
  return;
}



/* Entry: 100ac55e4; end: 100ac5663; -[SCSCDiscoverFeedRankingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac55e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe5698,0);
  func_0x000107c61614(param_1 + _DAT_112fe56a0,0);
  *(undefined8 *)(param_1 + _DAT_112fe56a8) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe56b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac5664; end: 100ac570f; -[SCSCDiscoverFeedRankingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac5664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac5710(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac5710; end: 100ac5913;  */

void FUN_100ac5710(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e66610)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f1999f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e663b0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000024,0x800000010f199c50,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "StrActiveUserSessionScopeGraphBridge/SCSCDiscoverFeedRankingServicesSaberEntryPoint.swift"
                                ,0x59,2,0x4e,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac5914);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c582e8();
        goto LAB_100ac579c;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599bc();
  }
LAB_100ac579c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac5914; end: 100ac591f; -[SCSCDiscoverFeedRankingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5914(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5698;
  func_0x000107c61428(param_1 + _DAT_112fe5698,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac5920; end: 100ac5973;  */

void FUN_100ac5920(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac5974; end: 100ac597f; -[SCSCDiscoverFeedRankingServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5974(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe56a0;
  func_0x000107c61428(param_1 + _DAT_112fe56a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac5980; end: 100ac59e3; -[SCSCDiscoverFeedRankingServicesSaberEntryPoint setSCDiscoverFeedRankingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5980(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe56a8;
  func_0x000107c61428(param_1 + _DAT_112fe56a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac59e4; end: 100ac5a0b; -[SCSCDiscoverFeedRankingServicesSaberEntryPoint begin] */

void FUN_100ac59e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac5a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac5a0c; end: 100ac5b8f;  */

/* WARNING: Possible PIC construction at 0x000100ac5b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac5b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac5b38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac5b10) */
/* WARNING: Removing unreachable block (ram,0x000100ac5b20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5a0c(void)

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
    func_0x000107c5c098();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50d40();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac5c34();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe5428);
        *(undefined8 *)(lVar2 + _DAT_112fe43a0) = uVar6;
        *(long *)(lVar2 + _DAT_112fe43a8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe43a8);
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



/* Entry: 100ac5b90; end: 100ac5b9b; -[SCSCDiscoverFeedRankingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5b90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5698;
  func_0x000107c61428(param_1 + _DAT_112fe5698,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac5b9c; end: 100ac5bdf;  */

void FUN_100ac5b9c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac5be0; end: 100ac5beb; -[SCSCDiscoverFeedRankingServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5be0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe56a0;
  func_0x000107c61428(param_1 + _DAT_112fe56a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac5bec; end: 100ac5c33; -[SCSCDiscoverFeedRankingServicesSaberEntryPoint sCDiscoverFeedRankingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5bec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe56a8;
  func_0x000107c61428(param_1 + _DAT_112fe56a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac5c34; end: 100ac5c53;  */

void FUN_100ac5c34(void)

{
  func_0x000107c61168(&PTR_PTR_112921d88);
  return;
}



/* Entry: 100ac5c54; end: 100ac5cd3; -[SCSCLegacyStoriesServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5c54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe56e0,0);
  func_0x000107c61614(param_1 + _DAT_112fe56e8,0);
  *(undefined8 *)(param_1 + _DAT_112fe56f0) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe56f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac5cd4; end: 100ac5d7f; -[SCSCLegacyStoriesServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac5cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac5d80(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac5d80; end: 100ac5f83;  */

void FUN_100ac5d80(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0e66610)) ||
       (func_0x000107c605b8(0xd00000000000002c,0x800000010f1999f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c599bc();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0e66320)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001e,0x800000010f199ce0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCLegacyStoriesServicesSaberEntryPoint.swift"
                              ,0x53,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac5f84);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58400();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac5f84; end: 100ac5f8f; -[SCSCLegacyStoriesServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5f84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe56e0;
  func_0x000107c61428(param_1 + _DAT_112fe56e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac5f90; end: 100ac5fe3;  */

void FUN_100ac5f90(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac5fe4; end: 100ac5fef; -[SCSCLegacyStoriesServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe56e8;
  func_0x000107c61428(param_1 + _DAT_112fe56e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac5ff0; end: 100ac6053; -[SCSCLegacyStoriesServicesSaberEntryPoint setSCLegacyStoriesServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac5ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe56f0;
  func_0x000107c61428(param_1 + _DAT_112fe56f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac6054; end: 100ac607b; -[SCSCLegacyStoriesServicesSaberEntryPoint begin] */

void FUN_100ac6054(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac607c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac607c; end: 100ac61ff;  */

/* WARNING: Possible PIC construction at 0x000100ac617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac618c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac61a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac6180) */
/* WARNING: Removing unreachable block (ram,0x000100ac6190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac607c(void)

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
    func_0x000107c5c098();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e58();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac62a4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe5458);
        *(undefined8 *)(lVar2 + _DAT_112fe43d8) = uVar6;
        *(long *)(lVar2 + _DAT_112fe43e0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe43e0);
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



/* Entry: 100ac6200; end: 100ac620b; -[SCSCLegacyStoriesServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6200(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe56e0;
  func_0x000107c61428(param_1 + _DAT_112fe56e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac620c; end: 100ac624f;  */

void FUN_100ac620c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac6250; end: 100ac625b; -[SCSCLegacyStoriesServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6250(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe56e8;
  func_0x000107c61428(param_1 + _DAT_112fe56e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac625c; end: 100ac62a3; -[SCSCLegacyStoriesServicesSaberEntryPoint sCLegacyStoriesServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac625c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe56f0;
  func_0x000107c61428(param_1 + _DAT_112fe56f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac62a4; end: 100ac62c3;  */

void FUN_100ac62a4(void)

{
  func_0x000107c61168(&PTR_PTR_112921e50);
  return;
}



/* Entry: 100ac62c4; end: 100ac62cb;  */

void FUN_100ac62c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x1b0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100ac62cc; end: 100ac631f;  */

void FUN_100ac62cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x1b0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100ac6320; end: 100ac639f; -[SCSCMyStoriesServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6320(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe5728,0);
  func_0x000107c61614(param_1 + _DAT_112fe5730,0);
  *(undefined8 *)(param_1 + _DAT_112fe5738) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe5740) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac63a0; end: 100ac644b; -[SCSCMyStoriesServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac63a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac644c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac644c; end: 100ac664f;  */

void FUN_100ac644c(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0e66610)) ||
       (func_0x000107c605b8(0xd00000000000002c,0x800000010f1999f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c599bc();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0e662a0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001a,0x800000010f199d60,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCMyStoriesServicesSaberEntryPoint.swift"
                              ,0x4f,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac6650);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5868c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac6650; end: 100ac665b; -[SCSCMyStoriesServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6650(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5728;
  func_0x000107c61428(param_1 + _DAT_112fe5728,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac665c; end: 100ac66af;  */

void FUN_100ac665c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac66b0; end: 100ac66bb; -[SCSCMyStoriesServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac66b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5730;
  func_0x000107c61428(param_1 + _DAT_112fe5730,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac66bc; end: 100ac671f; -[SCSCMyStoriesServicesSaberEntryPoint setSCMyStoriesServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac66bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5738;
  func_0x000107c61428(param_1 + _DAT_112fe5738,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac6720; end: 100ac6747; -[SCSCMyStoriesServicesSaberEntryPoint begin] */

void FUN_100ac6720(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac6748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac6748; end: 100ac68cb;  */

/* WARNING: Possible PIC construction at 0x000100ac6848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac6858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac6874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac684c) */
/* WARNING: Removing unreachable block (ram,0x000100ac685c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6748(void)

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
    func_0x000107c5c098();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c510e4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac6970();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe5460);
        *(undefined8 *)(lVar2 + _DAT_112fe4410) = uVar6;
        *(long *)(lVar2 + _DAT_112fe4418) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe4418);
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



/* Entry: 100ac68cc; end: 100ac68d7; -[SCSCMyStoriesServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac68cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5728;
  func_0x000107c61428(param_1 + _DAT_112fe5728,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac68d8; end: 100ac691b;  */

void FUN_100ac68d8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac691c; end: 100ac6927; -[SCSCMyStoriesServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac691c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5730;
  func_0x000107c61428(param_1 + _DAT_112fe5730,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac6928; end: 100ac696f; -[SCSCMyStoriesServicesSaberEntryPoint sCMyStoriesServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6928(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5738;
  func_0x000107c61428(param_1 + _DAT_112fe5738,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac6970; end: 100ac698f;  */

void FUN_100ac6970(void)

{
  func_0x000107c61168(&PTR_PTR_112921f18);
  return;
}



/* Entry: 100ac6990; end: 100ac6a0f; -[SCSCOurStoriesServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6990(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe5770,0);
  func_0x000107c61614(param_1 + _DAT_112fe5778,0);
  *(undefined8 *)(param_1 + _DAT_112fe5780) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe5788) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac6a10; end: 100ac6abb; -[SCSCOurStoriesServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac6a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac6abc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac6abc; end: 100ac6cbf;  */

void FUN_100ac6abc(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0e66610)) ||
       (func_0x000107c605b8(0xd00000000000002c,0x800000010f1999f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c599bc();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef0e66230)) {
        uVar2 = 0xd00000000000001b;
        func_0x000107c605b8(0xd00000000000001b,0x800000010f199dd0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCOurStoriesServicesSaberEntryPoint.swift"
                              ,0x50,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac6cc0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c586e8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac6cc0; end: 100ac6ccb; -[SCSCOurStoriesServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5770;
  func_0x000107c61428(param_1 + _DAT_112fe5770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac6ccc; end: 100ac6d1f;  */

void FUN_100ac6ccc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac6d20; end: 100ac6d2b; -[SCSCOurStoriesServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5778;
  func_0x000107c61428(param_1 + _DAT_112fe5778,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac6d2c; end: 100ac6d8f; -[SCSCOurStoriesServicesSaberEntryPoint setSCOurStoriesServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5780;
  func_0x000107c61428(param_1 + _DAT_112fe5780,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac6d90; end: 100ac6db7; -[SCSCOurStoriesServicesSaberEntryPoint begin] */

void FUN_100ac6d90(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac6db8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac6db8; end: 100ac6f3b;  */

/* WARNING: Possible PIC construction at 0x000100ac6eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac6ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac6ee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac6ebc) */
/* WARNING: Removing unreachable block (ram,0x000100ac6ecc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6db8(void)

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
    func_0x000107c5c098();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51140();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac6fe0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe5468);
        *(undefined8 *)(lVar2 + _DAT_112fe4448) = uVar6;
        *(long *)(lVar2 + _DAT_112fe4450) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe4450);
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


