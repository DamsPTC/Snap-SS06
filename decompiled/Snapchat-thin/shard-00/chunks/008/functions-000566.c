/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ac6f3c; end: 100ac6f47; -[SCSCOurStoriesServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6f3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5770;
  func_0x000107c61428(param_1 + _DAT_112fe5770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac6f48; end: 100ac6f8b;  */

void FUN_100ac6f48(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac6f8c; end: 100ac6f97; -[SCSCOurStoriesServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6f8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5778;
  func_0x000107c61428(param_1 + _DAT_112fe5778,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac6f98; end: 100ac6fdf; -[SCSCOurStoriesServicesSaberEntryPoint sCOurStoriesServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac6f98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5780;
  func_0x000107c61428(param_1 + _DAT_112fe5780,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac6fe0; end: 100ac6fff;  */

void FUN_100ac6fe0(void)

{
  func_0x000107c61168(&PTR_PTR_112921fe0);
  return;
}



/* Entry: 100ac7000; end: 100ac707f; -[SCSCStoriesBlizzardLoggingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7000(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe57b8,0);
  func_0x000107c61614(param_1 + _DAT_112fe57c0,0);
  *(undefined8 *)(param_1 + _DAT_112fe57c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe57d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac7080; end: 100ac712b; -[SCSCStoriesBlizzardLoggingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac7080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac712c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac712c; end: 100ac732f;  */

void FUN_100ac712c(long param_1,long param_2,long param_3)

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
      if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e661b0)) {
        uVar2 = 0xd000000000000027;
        func_0x000107c605b8(0xd000000000000027,0x800000010f199e50,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCStoriesBlizzardLoggingServicesSaberEntryPoint.swift"
                              ,0x5c,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac7330);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c589f8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac7330; end: 100ac733b; -[SCSCStoriesBlizzardLoggingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe57b8;
  func_0x000107c61428(param_1 + _DAT_112fe57b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac733c; end: 100ac738f;  */

void FUN_100ac733c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac7390; end: 100ac739b; -[SCSCStoriesBlizzardLoggingServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7390(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe57c0;
  func_0x000107c61428(param_1 + _DAT_112fe57c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac739c; end: 100ac73ff; -[SCSCStoriesBlizzardLoggingServicesSaberEntryPoint setSCStoriesBlizzardLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac739c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe57c8;
  func_0x000107c61428(param_1 + _DAT_112fe57c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac7400; end: 100ac7427; -[SCSCStoriesBlizzardLoggingServicesSaberEntryPoint begin] */

void FUN_100ac7400(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac7428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac7428; end: 100ac75ab;  */

/* WARNING: Possible PIC construction at 0x000100ac7528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac7538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac7554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac752c) */
/* WARNING: Removing unreachable block (ram,0x000100ac753c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7428(void)

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
      func_0x000107c51450();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac7650();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe5480);
        *(undefined8 *)(lVar2 + _DAT_112fe4480) = uVar6;
        *(long *)(lVar2 + _DAT_112fe4488) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe4488);
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



/* Entry: 100ac75ac; end: 100ac75b7; -[SCSCStoriesBlizzardLoggingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac75ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe57b8;
  func_0x000107c61428(param_1 + _DAT_112fe57b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac75b8; end: 100ac75fb;  */

void FUN_100ac75b8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac75fc; end: 100ac7607; -[SCSCStoriesBlizzardLoggingServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac75fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe57c0;
  func_0x000107c61428(param_1 + _DAT_112fe57c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac7608; end: 100ac764f; -[SCSCStoriesBlizzardLoggingServicesSaberEntryPoint sCStoriesBlizzardLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7608(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe57c8;
  func_0x000107c61428(param_1 + _DAT_112fe57c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac7650; end: 100ac766f;  */

void FUN_100ac7650(void)

{
  func_0x000107c61168(&PTR_PTR_1129220a8);
  return;
}



/* Entry: 100ac7670; end: 100ac76ef; -[SCSCStoriesMetricServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7670(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe5800,0);
  func_0x000107c61614(param_1 + _DAT_112fe5808,0);
  *(undefined8 *)(param_1 + _DAT_112fe5810) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe5818) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac76f0; end: 100ac779b; -[SCSCStoriesMetricServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac76f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac779c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac779c; end: 100ac799f;  */

void FUN_100ac779c(long param_1,long param_2,long param_3)

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
      if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0e66120)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001e,0x800000010f199ee0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCStoriesMetricServicesSaberEntryPoint.swift"
                              ,0x53,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac79a0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58a00();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac79a0; end: 100ac79ab; -[SCSCStoriesMetricServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac79a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5800;
  func_0x000107c61428(param_1 + _DAT_112fe5800,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac79ac; end: 100ac79ff;  */

void FUN_100ac79ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac7a00; end: 100ac7a0b; -[SCSCStoriesMetricServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5808;
  func_0x000107c61428(param_1 + _DAT_112fe5808,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac7a0c; end: 100ac7a6f; -[SCSCStoriesMetricServicesSaberEntryPoint setSCStoriesMetricServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5810;
  func_0x000107c61428(param_1 + _DAT_112fe5810,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac7a70; end: 100ac7a97; -[SCSCStoriesMetricServicesSaberEntryPoint begin] */

void FUN_100ac7a70(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac7a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac7a98; end: 100ac7c1b;  */

/* WARNING: Possible PIC construction at 0x000100ac7b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac7ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac7bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac7b9c) */
/* WARNING: Removing unreachable block (ram,0x000100ac7bac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7a98(void)

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
      func_0x000107c51458();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac7cc0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe5498);
        *(undefined8 *)(lVar2 + _DAT_112fe44b8) = uVar6;
        *(long *)(lVar2 + _DAT_112fe44c0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe44c0);
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



/* Entry: 100ac7c1c; end: 100ac7c27; -[SCSCStoriesMetricServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7c1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5800;
  func_0x000107c61428(param_1 + _DAT_112fe5800,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac7c28; end: 100ac7c6b;  */

void FUN_100ac7c28(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac7c6c; end: 100ac7c77; -[SCSCStoriesMetricServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7c6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5808;
  func_0x000107c61428(param_1 + _DAT_112fe5808,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac7c78; end: 100ac7cbf; -[SCSCStoriesMetricServicesSaberEntryPoint sCStoriesMetricServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7c78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5810;
  func_0x000107c61428(param_1 + _DAT_112fe5810,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac7cc0; end: 100ac7cdf;  */

void FUN_100ac7cc0(void)

{
  func_0x000107c61168(&PTR_PTR_112922170);
  return;
}



/* Entry: 100ac7ce0; end: 100ac7d5f; -[SCSCStoriesPreferencesServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac7ce0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe5848,0);
  func_0x000107c61614(param_1 + _DAT_112fe5850,0);
  *(undefined8 *)(param_1 + _DAT_112fe5858) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe5860) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac7d60; end: 100ac7e0b; -[SCSCStoriesPreferencesServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac7d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac7e0c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac7e0c; end: 100ac800f;  */

void FUN_100ac7e0c(long param_1,long param_2,long param_3)

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
      if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e660a0)) {
        uVar2 = 0xd000000000000023;
        func_0x000107c605b8(0xd000000000000023,0x800000010f199f60,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCStoriesPreferencesServicesSaberEntryPoint.swift"
                              ,0x58,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac8010);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58a04();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac8010; end: 100ac801b; -[SCSCStoriesPreferencesServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5848;
  func_0x000107c61428(param_1 + _DAT_112fe5848,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac801c; end: 100ac806f;  */

void FUN_100ac801c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac8070; end: 100ac807b; -[SCSCStoriesPreferencesServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5850;
  func_0x000107c61428(param_1 + _DAT_112fe5850,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac807c; end: 100ac80df; -[SCSCStoriesPreferencesServicesSaberEntryPoint setSCStoriesPreferencesServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac807c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5858;
  func_0x000107c61428(param_1 + _DAT_112fe5858,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac80e0; end: 100ac8107; -[SCSCStoriesPreferencesServicesSaberEntryPoint begin] */

void FUN_100ac80e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac8108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac8108; end: 100ac828b;  */

/* WARNING: Possible PIC construction at 0x000100ac8208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac8218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac8234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac820c) */
/* WARNING: Removing unreachable block (ram,0x000100ac821c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8108(void)

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
      func_0x000107c5145c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac8330();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe54b0);
        *(undefined8 *)(lVar2 + _DAT_112fe44f0) = uVar6;
        *(long *)(lVar2 + _DAT_112fe44f8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe44f8);
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



/* Entry: 100ac828c; end: 100ac8297; -[SCSCStoriesPreferencesServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac828c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5848;
  func_0x000107c61428(param_1 + _DAT_112fe5848,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac8298; end: 100ac82db;  */

void FUN_100ac8298(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac82dc; end: 100ac82e7; -[SCSCStoriesPreferencesServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac82dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5850;
  func_0x000107c61428(param_1 + _DAT_112fe5850,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac82e8; end: 100ac832f; -[SCSCStoriesPreferencesServicesSaberEntryPoint sCStoriesPreferencesServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac82e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5858;
  func_0x000107c61428(param_1 + _DAT_112fe5858,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac8330; end: 100ac834f;  */

void FUN_100ac8330(void)

{
  func_0x000107c61168(&PTR_PTR_112922238);
  return;
}



/* Entry: 100ac8350; end: 100ac83cf; -[SCSCStoriesServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8350(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe5890,0);
  func_0x000107c61614(param_1 + _DAT_112fe5898,0);
  *(undefined8 *)(param_1 + _DAT_112fe58a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe58a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac83d0; end: 100ac847b; -[SCSCStoriesServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac83d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac847c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac847c; end: 100ac867f;  */

void FUN_100ac847c(long param_1,long param_2,long param_3)

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
      if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0e66010)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000018,0x800000010f199ff0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCStoriesServicesSaberEntryPoint.swift"
                              ,0x4d,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac8680);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58a0c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac8680; end: 100ac868b; -[SCSCStoriesServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5890;
  func_0x000107c61428(param_1 + _DAT_112fe5890,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac868c; end: 100ac86df;  */

void FUN_100ac868c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac86e0; end: 100ac86eb; -[SCSCStoriesServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac86e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5898;
  func_0x000107c61428(param_1 + _DAT_112fe5898,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac86ec; end: 100ac874f; -[SCSCStoriesServicesSaberEntryPoint setSCStoriesServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac86ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe58a0;
  func_0x000107c61428(param_1 + _DAT_112fe58a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac8750; end: 100ac8777; -[SCSCStoriesServicesSaberEntryPoint begin] */

void FUN_100ac8750(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac8778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac8778; end: 100ac88fb;  */

/* WARNING: Possible PIC construction at 0x000100ac8878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac8888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac88a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac887c) */
/* WARNING: Removing unreachable block (ram,0x000100ac888c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8778(void)

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
      func_0x000107c51464();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac89a0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe54b8);
        *(undefined8 *)(lVar2 + _DAT_112fe4528) = uVar6;
        *(long *)(lVar2 + _DAT_112fe4530) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe4530);
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



/* Entry: 100ac88fc; end: 100ac8907; -[SCSCStoriesServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac88fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5890;
  func_0x000107c61428(param_1 + _DAT_112fe5890,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac8908; end: 100ac894b;  */

void FUN_100ac8908(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac894c; end: 100ac8957; -[SCSCStoriesServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac894c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5898;
  func_0x000107c61428(param_1 + _DAT_112fe5898,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac8958; end: 100ac899f; -[SCSCStoriesServicesSaberEntryPoint sCStoriesServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8958(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe58a0;
  func_0x000107c61428(param_1 + _DAT_112fe58a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac89a0; end: 100ac89bf;  */

void FUN_100ac89a0(void)

{
  func_0x000107c61168(&PTR_PTR_112922300);
  return;
}



/* Entry: 100ac89c0; end: 100ac8a3f; -[SCSCStoriesSnapReadReceiptServiceSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac89c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe58d8,0);
  func_0x000107c61614(param_1 + _DAT_112fe58e0,0);
  *(undefined8 *)(param_1 + _DAT_112fe58e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe58f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac8a40; end: 100ac8aeb; -[SCSCStoriesSnapReadReceiptServiceSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac8a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac8aec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac8aec; end: 100ac8cef;  */

void FUN_100ac8aec(long param_1,long param_2,long param_3)

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
      if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e65fa0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000026,0x800000010f19a060,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCStoriesSnapReadReceiptServiceSaberEntryPoint.swift"
                              ,0x5b,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac8cf0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58a10();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac8cf0; end: 100ac8cfb; -[SCSCStoriesSnapReadReceiptServiceSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe58d8;
  func_0x000107c61428(param_1 + _DAT_112fe58d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac8cfc; end: 100ac8d4f;  */

void FUN_100ac8cfc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac8d50; end: 100ac8d5b; -[SCSCStoriesSnapReadReceiptServiceSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe58e0;
  func_0x000107c61428(param_1 + _DAT_112fe58e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac8d5c; end: 100ac8dbf; -[SCSCStoriesSnapReadReceiptServiceSaberEntryPoint setSCStoriesSnapReadReceiptServiceExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe58e8;
  func_0x000107c61428(param_1 + _DAT_112fe58e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac8dc0; end: 100ac8de7; -[SCSCStoriesSnapReadReceiptServiceSaberEntryPoint begin] */

void FUN_100ac8dc0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac8de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac8de8; end: 100ac8f6b;  */

/* WARNING: Possible PIC construction at 0x000100ac8ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac8ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac8f14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac8eec) */
/* WARNING: Removing unreachable block (ram,0x000100ac8efc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8de8(void)

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
      func_0x000107c51468();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac9010();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe54c8);
        *(undefined8 *)(lVar2 + _DAT_112fe4560) = uVar6;
        *(long *)(lVar2 + _DAT_112fe4568) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe4568);
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



/* Entry: 100ac8f6c; end: 100ac8f77; -[SCSCStoriesSnapReadReceiptServiceSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8f6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe58d8;
  func_0x000107c61428(param_1 + _DAT_112fe58d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac8f78; end: 100ac8fbb;  */

void FUN_100ac8f78(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac8fbc; end: 100ac8fc7; -[SCSCStoriesSnapReadReceiptServiceSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8fbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe58e0;
  func_0x000107c61428(param_1 + _DAT_112fe58e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac8fc8; end: 100ac900f; -[SCSCStoriesSnapReadReceiptServiceSaberEntryPoint sCStoriesSnapReadReceiptServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac8fc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe58e8;
  func_0x000107c61428(param_1 + _DAT_112fe58e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac9010; end: 100ac902f;  */

void FUN_100ac9010(void)

{
  func_0x000107c61168(&PTR_PTR_1129223c8);
  return;
}



/* Entry: 100ac9030; end: 100ac90af; -[SCSCStoriesSnapchatterServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac9030(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe5920,0);
  func_0x000107c61614(param_1 + _DAT_112fe5928,0);
  *(undefined8 *)(param_1 + _DAT_112fe5930) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe5938) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac90b0; end: 100ac915b; -[SCSCStoriesSnapchatterServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac90b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac915c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac915c; end: 100ac935f;  */

void FUN_100ac915c(long param_1,long param_2,long param_3)

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
      if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e65f10)) {
        uVar2 = 0xd000000000000023;
        func_0x000107c605b8(0xd000000000000023,0x800000010f19a0f0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCStoriesSnapchatterServicesSaberEntryPoint.swift"
                              ,0x58,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac9360);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58a14();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac9360; end: 100ac936b; -[SCSCStoriesSnapchatterServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac9360(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5920;
  func_0x000107c61428(param_1 + _DAT_112fe5920,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac936c; end: 100ac93bf;  */

void FUN_100ac936c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac93c0; end: 100ac93cb; -[SCSCStoriesSnapchatterServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac93c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5928;
  func_0x000107c61428(param_1 + _DAT_112fe5928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac93cc; end: 100ac942f; -[SCSCStoriesSnapchatterServicesSaberEntryPoint setSCStoriesSnapchatterServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac93cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5930;
  func_0x000107c61428(param_1 + _DAT_112fe5930,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac9430; end: 100ac9457; -[SCSCStoriesSnapchatterServicesSaberEntryPoint begin] */

void FUN_100ac9430(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac9458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac9458; end: 100ac95db;  */

/* WARNING: Possible PIC construction at 0x000100ac9558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac9568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac9584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac955c) */
/* WARNING: Removing unreachable block (ram,0x000100ac956c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac9458(void)

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
      func_0x000107c5146c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac9680();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe54d0);
        *(undefined8 *)(lVar2 + _DAT_112fe4598) = uVar6;
        *(long *)(lVar2 + _DAT_112fe45a0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe45a0);
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



/* Entry: 100ac95dc; end: 100ac95e7; -[SCSCStoriesSnapchatterServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac95dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5920;
  func_0x000107c61428(param_1 + _DAT_112fe5920,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac95e8; end: 100ac962b;  */

void FUN_100ac95e8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac962c; end: 100ac9637; -[SCSCStoriesSnapchatterServicesSaberEntryPoint strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac962c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5928;
  func_0x000107c61428(param_1 + _DAT_112fe5928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac9638; end: 100ac967f; -[SCSCStoriesSnapchatterServicesSaberEntryPoint sCStoriesSnapchatterServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac9638(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5930;
  func_0x000107c61428(param_1 + _DAT_112fe5930,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac9680; end: 100ac969f;  */

void FUN_100ac9680(void)

{
  func_0x000107c61168(&PTR_PTR_112922490);
  return;
}



/* Entry: 100ac96a0; end: 100ac971f; -[SCSCStoryShareSendingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac96a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe5968,0);
  func_0x000107c61614(param_1 + _DAT_112fe5970,0);
  *(undefined8 *)(param_1 + _DAT_112fe5978) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe5980) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac9720; end: 100ac97cb; -[SCSCStoryShareSendingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac9720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac97cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac97cc; end: 100ac99cf;  */

void FUN_100ac97cc(long param_1,long param_2,long param_3)

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
      if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e65e80)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000022,0x800000010f19a180,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StrActiveUserSessionScopeGraphBridge/SCSCStoryShareSendingServicesSaberEntryPoint.swift"
                              ,0x57,2,0x4e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac99d0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58a28();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac99d0; end: 100ac99db; -[SCSCStoryShareSendingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac99d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5968;
  func_0x000107c61428(param_1 + _DAT_112fe5968,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac99dc; end: 100ac9a2f;  */

void FUN_100ac99dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac9a30; end: 100ac9a3b; -[SCSCStoryShareSendingServicesSaberEntryPoint setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac9a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5970;
  func_0x000107c61428(param_1 + _DAT_112fe5970,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac9a3c; end: 100ac9a9f; -[SCSCStoryShareSendingServicesSaberEntryPoint setSCStoryShareSendingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac9a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe5978;
  func_0x000107c61428(param_1 + _DAT_112fe5978,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac9aa0; end: 100ac9ac7; -[SCSCStoryShareSendingServicesSaberEntryPoint begin] */

void FUN_100ac9aa0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac9ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac9ac8; end: 100ac9c4b;  */

/* WARNING: Possible PIC construction at 0x000100ac9bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac9bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac9bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac9bcc) */
/* WARNING: Removing unreachable block (ram,0x000100ac9bdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac9ac8(void)

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
      func_0x000107c51480();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac9cf0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe54e0);
        *(undefined8 *)(lVar2 + _DAT_112fe45d0) = uVar6;
        *(long *)(lVar2 + _DAT_112fe45d8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe45d8);
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



/* Entry: 100ac9c4c; end: 100ac9c57; -[SCSCStoryShareSendingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac9c4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe5968;
  func_0x000107c61428(param_1 + _DAT_112fe5968,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac9c58; end: 100ac9c9b;  */

void FUN_100ac9c58(long param_1,undefined8 param_2,long *param_3)

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


