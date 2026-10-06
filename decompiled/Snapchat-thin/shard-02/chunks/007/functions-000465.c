/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102057014; end: 1020571ab;  */

void FUN_102057014(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0fa2090)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f05df70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FriendsFeedScopeGraphBridge/SCSCLensFriendsFeedContextButtonScopeServicesSaberServiceProvider.swift"
                            ,99,2,0x66,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1020571ac);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54c84();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1020571ac; end: 102057257; -[SCSCLensFriendsFeedContextButtonScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1020571ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102057014(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102057258; end: 1020572cb; -[SCSCLensFriendsFeedContextButtonScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102057258(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e53d08,0);
  func_0x000107c61614(param_1 + _DAT_112e53d10,0);
  *(undefined8 *)(param_1 + _DAT_112e53d18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020572cc; end: 1020572ff;  */

void FUN_1020572cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102057300; end: 102057347; -[SCSCLensFriendsFeedContextButtonScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102057300(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e53d08);
  func_0x000107c61610(param_1 + _DAT_112e53d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e53d18));
  return;
}



/* Entry: 102057348; end: 102057367;  */

void FUN_102057348(void)

{
  func_0x000107c61168(&PTR_PTR_112e53d60);
  return;
}



/* Entry: 102057368; end: 102057373; -[SCSCLensFriendsFeedContextServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102057368(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e53dc8;
  func_0x000107c61428(param_1 + _DAT_112e53dc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102057374; end: 10205737f; -[SCSCLensFriendsFeedContextServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102057374(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e53dc8;
  func_0x000107c61428(param_1 + _DAT_112e53dc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102057380; end: 10205738b; -[SCSCLensFriendsFeedContextServicesSaberServiceProvider friendsFeedScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102057380(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e53dd0;
  func_0x000107c61428(param_1 + _DAT_112e53dd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10205738c; end: 1020573cf;  */

void FUN_10205738c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1020573d0; end: 1020573db; -[SCSCLensFriendsFeedContextServicesSaberServiceProvider setFriendsFeedScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020573d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e53dd0;
  func_0x000107c61428(param_1 + _DAT_112e53dd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1020573dc; end: 10205742f;  */

void FUN_1020573dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102057430; end: 102057643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102057430(void)

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
    func_0x000107c43ac4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010204c834();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e537a0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e53dd8);
      *(long *)(unaff_x20 + _DAT_112e53dd8) = lVar4;
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
                      "FriendsFeedScopeGraphBridge/SCSCLensFriendsFeedContextServicesSaberServiceProvider.swift"
                      ,0x58,2,0x51,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10205755c);
  (*pcVar1)();
}



/* Entry: 102057644; end: 102057677; -[SCSCLensFriendsFeedContextServicesSaberServiceProvider provide] */

void FUN_102057644(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102057430();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102057678; end: 1020576ab; -[SCSCLensFriendsFeedContextServicesSaberServiceProvider __safeProvide] */

void FUN_102057678(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010205755c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1020576ac; end: 1020576ef; -[SCSCLensFriendsFeedContextServicesSaberServiceProvider end] */

void FUN_1020576ac(undefined8 param_1)

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



/* Entry: 1020576f0; end: 102057887;  */

void FUN_1020576f0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0fa2090)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f05df70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FriendsFeedScopeGraphBridge/SCSCLensFriendsFeedContextServicesSaberServiceProvider.swift"
                            ,0x58,2,0x66,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102057888);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54c84();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102057888; end: 102057933; -[SCSCLensFriendsFeedContextServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102057888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1020576f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102057934; end: 1020579a7; -[SCSCLensFriendsFeedContextServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102057934(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e53dc8,0);
  func_0x000107c61614(param_1 + _DAT_112e53dd0,0);
  *(undefined8 *)(param_1 + _DAT_112e53dd8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020579a8; end: 1020579db;  */

void FUN_1020579a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020579dc; end: 102057a23; -[SCSCLensFriendsFeedContextServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020579dc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e53dc8);
  func_0x000107c61610(param_1 + _DAT_112e53dd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e53dd8));
  return;
}



/* Entry: 102057a24; end: 102057a43;  */

void FUN_102057a24(void)

{
  func_0x000107c61168(&PTR_PTR_112e53e20);
  return;
}



/* Entry: 102057a44; end: 102057a4f; -[SCSCSaturnFriendsFeedServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102057a44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e53e88;
  func_0x000107c61428(param_1 + _DAT_112e53e88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102057a50; end: 102057a5b; -[SCSCSaturnFriendsFeedServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102057a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e53e88;
  func_0x000107c61428(param_1 + _DAT_112e53e88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102057a5c; end: 102057a67; -[SCSCSaturnFriendsFeedServicesSaberServiceProvider friendsFeedScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102057a5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e53e90;
  func_0x000107c61428(param_1 + _DAT_112e53e90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102057a68; end: 102057aab;  */

void FUN_102057a68(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102057aac; end: 102057ab7; -[SCSCSaturnFriendsFeedServicesSaberServiceProvider setFriendsFeedScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102057aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e53e90;
  func_0x000107c61428(param_1 + _DAT_112e53e90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102057ab8; end: 102057b0b;  */

void FUN_102057ab8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102057b0c; end: 102057d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102057b0c(void)

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
    func_0x000107c43ac4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010204c960();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e537d8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e53e98);
      *(long *)(unaff_x20 + _DAT_112e53e98) = lVar4;
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
                      "FriendsFeedScopeGraphBridge/SCSCSaturnFriendsFeedServicesSaberServiceProvider.swift"
                      ,0x53,2,0x51,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102057c38);
  (*pcVar1)();
}



/* Entry: 102057d20; end: 102057d53; -[SCSCSaturnFriendsFeedServicesSaberServiceProvider provide] */

void FUN_102057d20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102057b0c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102057d54; end: 102057d87; -[SCSCSaturnFriendsFeedServicesSaberServiceProvider __safeProvide] */

void FUN_102057d54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102057c38();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102057d88; end: 102057dcb; -[SCSCSaturnFriendsFeedServicesSaberServiceProvider end] */

void FUN_102057d88(undefined8 param_1)

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



/* Entry: 102057dcc; end: 102057f63;  */

void FUN_102057dcc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0fa2090)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f05df70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FriendsFeedScopeGraphBridge/SCSCSaturnFriendsFeedServicesSaberServiceProvider.swift"
                            ,0x53,2,0x66,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102057f64);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54c84();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102057f64; end: 10205800f; -[SCSCSaturnFriendsFeedServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102057f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102057dcc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102058010; end: 102058083; -[SCSCSaturnFriendsFeedServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102058010(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e53e88,0);
  func_0x000107c61614(param_1 + _DAT_112e53e90,0);
  *(undefined8 *)(param_1 + _DAT_112e53e98) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102058084; end: 1020580b7;  */

void FUN_102058084(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020580b8; end: 1020580ff; -[SCSCSaturnFriendsFeedServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020580b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e53e88);
  func_0x000107c61610(param_1 + _DAT_112e53e90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e53e98));
  return;
}



/* Entry: 102058100; end: 10205811f;  */

void FUN_102058100(void)

{
  func_0x000107c61168(&PTR_PTR_112e53ee0);
  return;
}



/* Entry: 102058120; end: 102058167; -[SCSCFriendsFeedScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102058120(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e53f48;
  func_0x000107c61428(param_1 + _DAT_112e53f48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102058168; end: 1020581bf; -[SCSCFriendsFeedScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102058168(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e53f48;
  func_0x000107c61428(param_1 + _DAT_112e53f48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1020581c0; end: 102058297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020581c0(undefined8 param_1,long param_2)

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
    FUN_10204cc34();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e53648) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102058298);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e53650);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e53f50);
    *(long **)(unaff_x20 + _DAT_112e53f50) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102058298; end: 1020582bf; -[SCSCFriendsFeedScopedServicesSaberEntryPoint begin] */

void FUN_102058298(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020581c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020582c0; end: 102058437;  */

/* WARNING: Possible PIC construction at 0x000102058328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020583c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010205832c) */
/* WARNING: Removing unreachable block (ram,0x0001020583c4) */
/* WARNING: Removing unreachable block (ram,0x0001020583dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020582c0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e53f50);
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



/* Entry: 102058438; end: 10205843f;  */

void FUN_102058438(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102058440; end: 102058473; -[SCSCFriendsFeedScopedServicesSaberEntryPoint end] */

void FUN_102058440(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1020582c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102058474; end: 102058593;  */

void FUN_102058474(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "FriendsFeedScopeGraphBridge/SCSCFriendsFeedScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x5c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102058594);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102058594; end: 10205863f; -[SCSCFriendsFeedScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102058594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102058474(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102058640; end: 10205869f; -[SCSCFriendsFeedScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102058640(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e53f48,0);
  *(undefined8 *)(param_1 + _DAT_112e53f50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020586a0; end: 1020586d3;  */

void FUN_1020586a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020586d4; end: 10205870b; -[SCSCFriendsFeedScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020586d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e53f48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e53f50));
  return;
}



/* Entry: 10205870c; end: 10205872b;  */

void FUN_10205870c(void)

{
  func_0x000107c61168(&PTR_PTR_11281a840);
  return;
}



/* Entry: 10205872c; end: 102058807;  */

undefined1  [16] FUN_10205872c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  lVar1 = param_1;
  func_0x00010403f724();
  if (lVar1 < 1) {
    uStack_50 = 0xd00000000000002b;
    uStack_48 = 0x800000010efb4b60;
    uStack_40 = 1000;
    (**(code **)(param_2 + 8))
              (&uStack_38,&uStack_50,&UNK_110738448,&PTR_DAT_11304a4e0,param_1,param_2);
    if ((long)uStack_38 < 1) {
      dVar4 = 0.0;
      uVar3 = 1;
      goto LAB_1020587e8;
    }
    func_0x000107c61168(PTR_PTR_1126afec0);
    dVar4 = (double)uStack_38;
  }
  else {
    puVar2 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x00010403f724();
    dVar4 = (double)(long)puVar2;
  }
  func_0x000107c4cec4(dVar4);
  uVar3 = 0;
LAB_1020587e8:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 102058808; end: 10205886b;  */

undefined1 FUN_102058808(undefined8 param_1,long param_2)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  undefined1 uStack_11;
  
  uStack_28 = 0xd000000000000039;
  uStack_20 = 0x800000010f05e240;
  uStack_18 = 0;
  (**(code **)(param_2 + 8))
            (&uStack_11,&uStack_28,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  return uStack_11;
}



/* Entry: 10205886c; end: 102058a27;  */

undefined * FUN_10205886c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_170 [128];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(0x112e53fa0,&UNK_10da55480);
  puVar2 = puVar7;
  func_0x000107c60498();
  func_0x000107c6157c();
  uStack_a8 = *(ulong *)(param_1 + 0x68);
  uStack_b0 = *(ulong *)(param_1 + 0x60);
  uStack_98 = *(ulong *)(param_1 + 0x78);
  uStack_a0 = *(ulong *)(param_1 + 0x70);
  uStack_88 = *(ulong *)(param_1 + 0x88);
  uStack_90 = *(ulong *)(param_1 + 0x80);
  uStack_78 = *(ulong *)(param_1 + 0x98);
  uStack_80 = *(ulong *)(param_1 + 0x90);
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uStack_d8 = *(ulong *)(param_1 + 0x38);
  uStack_e0 = *(ulong *)(param_1 + 0x30);
  uStack_c8 = *(ulong *)(param_1 + 0x48);
  uStack_d0 = *(ulong *)(param_1 + 0x40);
  uStack_b8 = *(ulong *)(param_1 + 0x58);
  uStack_c0 = *(ulong *)(param_1 + 0x50);
  uStack_f0 = uVar8;
  uStack_e8 = uVar9;
  FUN_102058c44(&uStack_f0,auStack_170,0x112e53fa8,&UNK_10da55488);
  uVar3 = uVar8;
  uVar5 = uVar9;
  func_0x000100029284();
  if ((uVar5 & 1) == 0) {
    puVar4 = (ulong *)(param_1 + 0xa0);
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 0x10);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x70);
      puVar6[3] = uStack_c8;
      puVar6[2] = uStack_d0;
      puVar6[5] = uStack_b8;
      puVar6[4] = uStack_c0;
      puVar6[1] = uStack_d8;
      *puVar6 = uStack_e0;
      puVar6[0xb] = uStack_88;
      puVar6[10] = uStack_90;
      puVar6[0xd] = uStack_78;
      puVar6[0xc] = uStack_80;
      puVar6[7] = uStack_a8;
      puVar6[6] = uStack_b0;
      puVar6[9] = uStack_98;
      puVar6[8] = uStack_a0;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102058a28);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
        return puVar2;
      }
      uStack_a8 = puVar4[9];
      uStack_b0 = puVar4[8];
      uStack_98 = puVar4[0xb];
      uStack_a0 = puVar4[10];
      uStack_88 = puVar4[0xd];
      uStack_90 = puVar4[0xc];
      uStack_78 = puVar4[0xf];
      uStack_80 = puVar4[0xe];
      uVar9 = puVar4[1];
      uVar8 = *puVar4;
      uStack_d8 = puVar4[3];
      uStack_e0 = puVar4[2];
      uStack_c8 = puVar4[5];
      uStack_d0 = puVar4[4];
      uStack_b8 = puVar4[7];
      uStack_c0 = puVar4[6];
      uStack_f0 = uVar8;
      uStack_e8 = uVar9;
      FUN_102058c44(&uStack_f0,auStack_170,0x112e53fa8,&UNK_10da55488);
      uVar3 = uVar8;
      uVar5 = uVar9;
      func_0x000100029284();
      puVar4 = puVar4 + 0x10;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020589ec);
  (*pcVar1)();
}



/* Entry: 102058a28; end: 102058a4f;  */

undefined * FUN_102058a28(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e53f98,&UNK_10da55478);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102058b44);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102058b48);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102058a50; end: 102058c43;  */

undefined * FUN_102058a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102058b44);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102058b48);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102058c44; end: 102058c8b;  */

undefined8 FUN_102058c44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102058c8c; end: 102058d1f;  */

void FUN_102058c8c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e53fb0 != 0) {
    return;
  }
  puVar1 = &UNK_1104c2048;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e53fb0 = param_1;
  return;
}



/* Entry: 102058d20; end: 102058d37;  */

void FUN_102058d20(long param_1)

{
  long *unaff_x20;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c278890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*unaff_x20 + 0x10),PTR_s_trackSnapAd__11267bc48,param_1);
    return;
  }
  return;
}



/* Entry: 102058d38; end: 102059133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102058d38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar10 = &puStack_90;
  func_0x0001000d224c(&puStack_90);
  puVar2 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    func_0x000107c5b840(puStack_90);
    puVar3 = puStack_90;
    func_0x000107c61180();
    puVar7 = &UNK_1104c2078;
    puVar4 = puVar7;
    func_0x000107c613fc(&UNK_1104c2078,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = (code *)0x10205d770;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x1020650f0;
    puStack_78 = &UNK_1104c2090;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    puVar4 = puVar3;
    func_0x000107c5c320(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c3e924(puVar4);
    func_0x000107c61170(puVar4);
    puVar3 = puVar2;
    func_0x000107c5b81c(puVar2);
    func_0x000107c61180();
    puVar4 = puVar7;
    func_0x000107c613fc(&UNK_1104c2078,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_70 = FUN_10205d7ac;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x10205f54c;
    puStack_78 = &UNK_1104c20b8;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    puVar4 = puVar3;
    func_0x000107c5c320(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c3e924(puVar4);
    func_0x000107c61170(puVar4);
    puVar3 = puVar2;
    func_0x000107c3d320(puVar2);
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_1104c2078,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_70 = (code *)0x10205d7cc;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x1020620fc;
    puStack_78 = &UNK_1104c20e0;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    puVar7 = puVar3;
    func_0x000107c5c320(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar3);
    func_0x000107c3e924(puVar7);
    func_0x000107c61170(puVar7);
    puVar7 = puVar2;
    func_0x000107c61150(puVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_adPlayableEventObservable_11259a8a8);
    if (((ulong)puVar7 & 1) != 0) {
      puVar3 = puVar2;
      func_0x000107c3d3a4(puVar2);
      func_0x000107c61180();
      puVar7 = &UNK_1104c2078;
      func_0x000107c613fc(&UNK_1104c2078,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      pcStack_70 = (code *)0x10205d80c;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      uStack_80 = 0x10205f548;
      puStack_78 = &UNK_1104c2130;
      puStack_68 = puVar7;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      puVar7 = puVar3;
      func_0x000107c5c320(puVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(puVar3);
      func_0x000107c3e924(puVar7);
      func_0x000107c61170(puVar7);
    }
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e54070);
    puVar7 = &UNK_1104c2078;
    func_0x000107c613fc(&UNK_1104c2078,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_70 = (code *)0x10205d7ec;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x10205f550;
    puStack_78 = &UNK_1104c2108;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c5c320(uVar11);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c3e924(uVar11);
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(uVar11);
  }
  return;
}



/* Entry: 102059134; end: 10205b6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102059134(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  undefined8 *puVar10;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auStack_190 [8];
  undefined1 *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  uint uStack_170;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = (undefined1 *)0x0;
  func_0x00010423cab0();
  puVar15 = puVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_10205beb8();
  uVar1 = (uint)puVar15;
  if ((uVar1 & 0xff) != 0xf) {
    plVar3 = (long *)(unaff_x20 + _DAT_112e54098);
    lVar7 = plVar3[3];
    func_0x0001000a8868(plVar3,lVar7);
    uVar11 = *(undefined8 *)(*plVar3 + 0x10);
    puVar4 = puVar15;
    func_0x000102065138(puVar15);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar7);
    func_0x000105b48658(uVar11,puVar4,1);
    func_0x000107c61170(puVar4);
  }
  func_0x0001000d224c(&uStack_e0);
  if (lStack_c8 == 0) {
    func_0x00010205f464(&uStack_e0,0x112e540d0,&UNK_10da55568);
    if ((uVar1 & 0xff) == 0xf) {
      return;
    }
    plVar3 = (long *)(unaff_x20 + _DAT_112e54098);
    func_0x0001000a8868(plVar3,plVar3[3]);
    uVar13 = *(undefined8 *)(*plVar3 + 0x10);
    uVar11 = 0x72745f64615f6f6e;
    uVar14 = 0xed000072656b6361;
    func_0x000107c5fadc(0x72745f64615f6f6e,0xed000072656b6361);
    func_0x000102065138(puVar15);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar14);
    func_0x000105b48940(uVar13,uVar11,puVar15,1);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar15);
    return;
  }
  puStack_188 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_180 = (long)(auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  FUN_10205f354(&uStack_e0,auStack_108);
  lVar7 = unaff_x20 + _DAT_112e54080;
  lVar5 = *(long *)(lVar7 + 0x18);
  uVar8 = *(ulong *)(lVar7 + 0x20);
  func_0x0001000a8868(lVar7,lVar5);
  (**(code **)(uVar8 + 8))();
  lVar17 = *(long *)(param_1 + _DAT_11308cb20);
  lVar7 = lVar17;
  func_0x000107c30adc();
  func_0x000107c61180();
  lVar6 = lVar7;
  func_0x000107c5faec();
  func_0x000107c61170(lVar7);
  if ((*(long *)(lVar5 + 0x10) == 0) || (uVar9 = uVar8, func_0x000100029284(), (uVar9 & 1) == 0)) {
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(uVar8);
    if ((uVar1 & 0xff) != 0xf) {
      plVar3 = (long *)(unaff_x20 + _DAT_112e54098);
      func_0x0001000a8868(plVar3,plVar3[3]);
      uVar13 = *(undefined8 *)(*plVar3 + 0x10);
      uVar11 = 0xd000000000000013;
      uVar14 = 0x800000010f05e2d0;
      func_0x000107c5fadc(0xd000000000000013,0x800000010f05e2d0);
      func_0x000102065138(puVar15);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar14);
      func_0x000105b48940(uVar13,uVar11,puVar15,1);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar15);
    }
    goto LAB_102059984;
  }
  puVar10 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar6 * 0x70);
  lStack_c8 = puVar10[3];
  uStack_d0 = puVar10[2];
  uStack_b8 = puVar10[5];
  uStack_c0 = puVar10[4];
  uStack_d8 = puVar10[1];
  uStack_e0 = *puVar10;
  uStack_a8 = puVar10[7];
  uStack_b0 = puVar10[6];
  uStack_98 = puVar10[9];
  uStack_a0 = puVar10[8];
  uStack_88 = puVar10[0xb];
  uStack_90 = puVar10[10];
  uStack_78 = puVar10[0xd];
  uStack_80 = puVar10[0xc];
  func_0x00010205f3b0(&uStack_e0,&uStack_178);
  func_0x000107c6142c(lVar5);
  func_0x000107c6142c(uVar8);
  func_0x000107c30ae4();
  func_0x000107c61180();
  if (lVar17 == 0) {
    if ((uVar1 & 0xff) == 0xf) goto LAB_102059704;
    plVar3 = (long *)(unaff_x20 + _DAT_112e54098);
    func_0x0001000a8868(plVar3,plVar3[3]);
    uVar14 = *(undefined8 *)(*plVar3 + 0x10);
    puVar2 = (undefined1 *)0x64695f64615f6f6e;
    uVar11 = 0xe800000000000000;
LAB_102059594:
    func_0x000107c5fadc(puVar2,uVar11);
    func_0x000102065138(puVar15);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar11);
    func_0x000105b48940(uVar14,puVar2,puVar15,1);
LAB_1020595cc:
    func_0x000107c61170(puVar2);
LAB_102059978:
    func_0x000107c61170(puVar15);
  }
  else {
    func_0x000107c61170();
    puVar12 = *(undefined1 **)(param_1 + _DAT_11308cb28);
    puVar4 = puVar12;
    func_0x000107c30ccc();
    if ((long)puVar4 < 5) {
      if (puVar4 == (undefined1 *)0x1) {
        uVar11 = 0x706d695f64656566;
        func_0x00010205e944();
        if (puVar4 == (undefined1 *)0x0) {
          plVar3 = (long *)(unaff_x20 + _DAT_112e54098);
          func_0x0001000a8868(plVar3,plVar3[3]);
          uVar14 = *(undefined8 *)(*plVar3 + 0x10);
          puVar2 = (undefined1 *)0xd000000000000011;
          func_0x000107c5fadc(0xd000000000000011,0x800000010f05e2f0);
          func_0x000107c5fadc(0x706d695f64656566,0xef6e6f6973736572);
          func_0x000105b48940(uVar14,puVar2,uVar11,1);
          puVar15 = (undefined1 *)0x0;
        }
        else {
          func_0x000107c61174();
          lVar7 = lStack_180;
          func_0x0001042b0824(lStack_180);
          puVar15 = puStack_188;
          *(undefined8 *)(lVar7 + *(int *)(puVar2 + 0x34)) = 0xb;
          func_0x00010205f420(lVar7,puStack_188,&SUB_10423cab0);
          func_0x0001042b18d4(0);
          func_0x000107c610f8();
          func_0x0001042b0f38(puVar15);
          func_0x000107c61170(puVar4);
          func_0x00010205f4a4(lVar7,&SUB_10423cab0);
          func_0x0001000a8868(auStack_108,uStack_f0);
          pcVar16 = *(code **)(lStack_e8 + 8);
          puVar2 = puVar15;
          func_0x000107c61174(puVar15);
          (*pcVar16)(puVar15,uStack_f0,lStack_e8);
          plVar3 = (long *)(unaff_x20 + _DAT_112e54098);
          func_0x0001000a8868(plVar3,plVar3[3]);
          uVar14 = *(undefined8 *)(*plVar3 + 0x10);
          func_0x000107c5fadc(0x706d695f64656566,0xef6e6f6973736572);
          func_0x000105b487cc(uVar14,uVar11,1);
          puVar15 = puVar2;
        }
        func_0x000107c61170(puVar2);
        func_0x000107c61170(uVar11);
        func_0x0001000d224c(&uStack_178);
        func_0x000107c614f0(uStack_178);
        FUN_10205872c();
        func_0x000107c615e8(uStack_178);
        if ((uStack_170 & 0xff) != 1) {
          func_0x0001000834e4(auStack_108);
          func_0x000107c61170(puVar15);
          goto LAB_10205970c;
        }
        FUN_10205bf3c(uStack_a8,uStack_a0);
        goto LAB_102059978;
      }
      if ((puVar4 != (undefined1 *)0x2) || ((uVar1 & 0xff) == 0xf)) {
LAB_102059704:
        func_0x0001000834e4(auStack_108);
LAB_10205970c:
        func_0x00010205f3ec(&uStack_e0);
        return;
      }
      func_0x000107c30ce0();
      if (puVar12 == (undefined1 *)0x3) {
        FUN_10205bfe4();
LAB_1020599d4:
        if (puVar12 == (undefined1 *)0x0) {
LAB_102059a7c:
          plVar3 = (long *)(unaff_x20 + _DAT_112e54098);
          func_0x0001000a8868(plVar3,plVar3[3]);
          uVar14 = *(undefined8 *)(*plVar3 + 0x10);
          uVar11 = 0x800000010f05e2f0;
          puVar2 = (undefined1 *)0xd000000000000011;
          goto LAB_102059594;
        }
      }
      else {
        if (puVar12 == (undefined1 *)0x5) {
          FUN_10205c1f0();
          goto LAB_1020599d4;
        }
        if (puVar12 != (undefined1 *)0x4) goto LAB_102059704;
        func_0x00010205e944();
        if (puVar12 == (undefined1 *)0x0) goto LAB_102059a7c;
        func_0x000107c61174();
        lVar7 = lStack_180;
        func_0x0001042b0824(lStack_180);
        puVar4 = puStack_188;
        *(undefined8 *)(lVar7 + *(int *)(puVar2 + 0x34)) = 5;
        func_0x00010205f420(lVar7,puStack_188,&SUB_10423cab0);
        func_0x0001042b18d4(0);
        func_0x000107c610f8();
        func_0x0001042b0f38(puVar4);
        func_0x000107c61170(puVar12);
        func_0x00010205f4a4(lVar7,&SUB_10423cab0);
        puVar12 = puVar4;
      }
      puVar2 = puVar12;
      func_0x000107c61174(puVar12);
      func_0x0001000a8868(auStack_108,uStack_f0);
      pcVar16 = *(code **)(lStack_e8 + 8);
      func_0x000107c61174(puVar2);
      (*pcVar16)(puVar12,uStack_f0,lStack_e8);
      plVar3 = (long *)(unaff_x20 + _DAT_112e54098);
      lVar7 = plVar3[3];
      func_0x0001000a8868(plVar3,lVar7);
      uVar11 = *(undefined8 *)(*plVar3 + 0x10);
      func_0x000102065138(puVar15);
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar7);
      func_0x000105b487cc(uVar11,puVar15,1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      goto LAB_1020595cc;
    }
    if (puVar4 != (undefined1 *)0x5) {
      if (puVar4 != (undefined1 *)0x7) goto LAB_102059704;
      func_0x00010205e944();
      if (puVar4 == (undefined1 *)0x0) {
        plVar3 = (long *)(unaff_x20 + _DAT_112e54098);
        func_0x0001000a8868(plVar3,plVar3[3]);
        uVar14 = *(undefined8 *)(*plVar3 + 0x10);
        uVar11 = 0xd000000000000011;
        func_0x000107c5fadc(0xd000000000000011,0x800000010f05e2f0);
        puVar15 = (undefined1 *)0xd00000000000001c;
        func_0x000107c5fadc(0xd00000000000001c,0x800000010f05e370);
        func_0x000105b48940(uVar14,uVar11,puVar15,1);
        func_0x000107c61170(uVar11);
      }
      else {
        func_0x000107c61174();
        lVar7 = lStack_180;
        func_0x0001042b0824(lStack_180);
        puVar15 = puStack_188;
        *(undefined8 *)(lVar7 + *(int *)(puVar2 + 0x34)) = 0xb;
        func_0x00010205f420(lVar7,puStack_188,&SUB_10423cab0);
        func_0x0001042b18d4(0);
        func_0x000107c610f8();
        func_0x0001042b0f38(puVar15);
        func_0x000107c61170(puVar4);
        func_0x00010205f4a4(lVar7,&SUB_10423cab0);
        func_0x0001000a8868(auStack_108,uStack_f0);
        pcVar16 = *(code **)(lStack_e8 + 8);
        puVar2 = puVar15;
        func_0x000107c61174(puVar15);
        (*pcVar16)(puVar15,uStack_f0,lStack_e8);
        plVar3 = (long *)(unaff_x20 + _DAT_112e54098);
        func_0x0001000a8868(plVar3,plVar3[3]);
        uVar11 = *(undefined8 *)(*plVar3 + 0x10);
        puVar15 = (undefined1 *)0xd00000000000001c;
        func_0x000107c5fadc(0xd00000000000001c,0x800000010f05e370);
        func_0x000105b487cc(uVar11,puVar15,1);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar2);
      }
      goto LAB_102059978;
    }
    FUN_10205bf3c(uStack_a8,uStack_a0);
  }
  func_0x00010205f3ec(&uStack_e0);
LAB_102059984:
  func_0x0001000834e4(auStack_108);
  return;
}



/* Entry: 10205b6f4; end: 10205b75f;  */

void FUN_10205b6f4(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    (*param_3)(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10205b760; end: 10205be6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10205b760(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 auStack_178 [112];
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0x112dbe3d8;
  func_0x0001000285a8(0x112dbe3d8,&UNK_10d979340);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)&uStack_1a0 - extraout_x8;
  lVar1 = 0;
  func_0x000103e07278();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  uVar19 = *(ulong *)(param_1 + _DAT_11308c458);
  uVar8 = uVar19;
  func_0x000107c30b74();
  if ((uVar8 & 0xfffffffe) != 6) {
    return;
  }
  uVar8 = uVar19;
  func_0x000107c30b94();
  if ((((int)uVar8 != 4) && (uVar8 = uVar19, func_0x000107c30b94(), (int)uVar8 != 0x17)) &&
     (uVar8 = uVar19, func_0x000107c30b94(), (int)uVar8 != 0x18)) {
    return;
  }
  uVar17 = 0x726f7065725f6461;
  plVar4 = (long *)(unaff_x20 + _DAT_112e54098);
  plVar2 = plVar4;
  lStack_190 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_188 = lVar1;
  func_0x0001000a8868(plVar4,plVar4[3]);
  uVar15 = *(undefined8 *)(*plVar2 + 0x10);
  uVar6 = uVar17;
  func_0x000107c5fadc(0x726f7065725f6461,0xe900000000000074);
  func_0x000105b48658(uVar15,uVar6,1);
  func_0x000107c61170(uVar6);
  func_0x0001000d224c(&uStack_e0);
  if (lStack_c8 == 0) {
    func_0x00010205f464(&uStack_e0,0x112e540d0,&UNK_10da55568);
    func_0x0001000a8868(plVar4,plVar4[3]);
    uVar15 = *(undefined8 *)(*plVar4 + 0x10);
    uVar6 = 0x72745f64615f6f6e;
    func_0x000107c5fadc(0x72745f64615f6f6e,0xed000072656b6361);
    func_0x000107c5fadc(0x726f7065725f6461,0xe900000000000074);
    func_0x000105b48940(uVar15,uVar6,uVar17,1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar17);
    return;
  }
  puVar9 = auStack_108;
  FUN_10205f354(&uStack_e0);
  uVar12 = *(ulong *)(param_1 + _DAT_11308c450);
  uVar8 = uVar12;
  func_0x000107c30ae4();
  func_0x000107c61180();
  if (uVar8 == 0) {
    func_0x0001000a8868(plVar4,plVar4[3]);
    uVar17 = *(undefined8 *)(*plVar4 + 0x10);
    uVar6 = 0x64695f64615f6f6e;
    func_0x000107c5fadc(0x64695f64615f6f6e,0xe800000000000000);
  }
  else {
    func_0x000107c61170();
    uStack_198 = uVar12;
    func_0x000107c30adc();
    func_0x000107c61180();
    uVar8 = uVar12;
    func_0x000107c5faec();
    func_0x000107c61170(uVar12);
    func_0x000107c30b94();
    lVar1 = unaff_x20 + _DAT_112e54080;
    lVar3 = *(long *)(lVar1 + 0x18);
    lVar5 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,lVar3);
    (**(code **)(lVar5 + 8))(lVar3,lVar5);
    if ((*(long *)(lVar3 + 0x10) != 0) &&
       (uVar12 = uVar8, puVar10 = puVar9, func_0x000100029284(), ((ulong)puVar10 & 1) != 0)) {
      puVar11 = (undefined8 *)(*(long *)(lVar3 + 0x38) + uVar12 * 0x70);
      lStack_c8 = puVar11[3];
      uStack_d0 = puVar11[2];
      uStack_b8 = puVar11[5];
      uStack_c0 = puVar11[4];
      lStack_d8 = puVar11[1];
      uStack_e0 = *puVar11;
      uStack_a8 = puVar11[7];
      uStack_b0 = puVar11[6];
      uStack_98 = puVar11[9];
      uStack_a0 = puVar11[8];
      uStack_88 = puVar11[0xb];
      uStack_90 = puVar11[10];
      uStack_78 = puVar11[0xd];
      uStack_80 = puVar11[0xc];
      func_0x00010205f3b0(&uStack_e0,auStack_178);
      func_0x000107c6142c(lVar3);
      func_0x000107c6142c(puVar9);
      FUN_10205c918();
      uVar17 = uStack_a0;
      uVar6 = uStack_a8;
      func_0x000107c61434(uStack_a0);
      func_0x000107c61174(uVar19);
      func_0x00010205f3ec(&uStack_e0);
      uVar15 = uStack_f0;
      lVar1 = lStack_e8;
joined_r0x00010205bd90:
      if (uVar19 == 0) {
        func_0x0001000a8868(plVar4,plVar4[3]);
        uVar16 = *(undefined8 *)(*plVar4 + 0x10);
        uVar8 = 0xd000000000000011;
        func_0x000107c5fadc(0xd000000000000011,0x800000010f05e2f0);
        uVar15 = 0x726f7065725f6461;
        func_0x000107c5fadc(0x726f7065725f6461,0xe900000000000074);
        func_0x000105b48940(uVar16,uVar8,uVar15,1);
        uVar19 = 0;
      }
      else {
        func_0x0001000a8868(auStack_108,uVar15);
        pcVar14 = *(code **)(lVar1 + 8);
        uVar8 = uVar19;
        func_0x000107c61174(uVar19);
        (*pcVar14)(uVar19,uVar15,lVar1);
        func_0x0001000a8868(plVar4,plVar4[3]);
        uVar16 = *(undefined8 *)(*plVar4 + 0x10);
        uVar15 = 0x726f7065725f6461;
        func_0x000107c5fadc(0x726f7065725f6461,0xe900000000000074);
        func_0x000105b487cc(uVar16,uVar15,1);
        func_0x000107c61170(uVar8);
        uVar19 = uVar8;
      }
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar15);
      FUN_10205bf3c(uVar6,uVar17);
      func_0x000107c61170(uVar19);
      func_0x000107c6142c(uVar17);
      goto LAB_10205be30;
    }
    func_0x000107c6142c(lVar3);
    if ((int)uVar19 == 0x18) {
      uStack_1a0 = uVar19;
      func_0x0001000d224c(&uStack_e0);
      lVar1 = lStack_d8;
      uVar6 = uStack_e0;
      func_0x000107c614f0(uStack_e0);
      (**(code **)(lVar1 + 8))(lVar18);
      func_0x000107c615e8(uVar6);
      lVar3 = lStack_188;
      lVar5 = lVar18;
      (**(code **)(lVar13 + 0x30))(lVar18,1,lStack_188);
      lVar1 = lStack_190;
      if ((int)lVar5 != 1) {
        func_0x00010205f36c(lVar18,lStack_190);
        uVar19 = lVar1 + *(int *)(lVar3 + 0x14);
        uVar12 = *(ulong *)(uVar19 + 0x28);
        if ((uVar12 == uVar8) && (*(undefined1 **)(uVar19 + 0x30) == puVar9)) {
          func_0x000107c6142c(puVar9);
        }
        else {
          func_0x000107c605b8(uVar12,*(undefined1 **)(uVar19 + 0x30),uVar8,puVar9,0);
          func_0x000107c6142c(puVar9);
          if ((uVar12 & 1) == 0) {
            func_0x00010205f4a4(lVar1,&SUB_103e07278);
            goto LAB_10205bc18;
          }
        }
        puVar7 = PTR_PTR_1126b9090;
        func_0x000107c610f8(PTR_PTR_1126b9090);
        uVar8 = uStack_198;
        func_0x000107c61174(uStack_198);
        func_0x000107c453e4(puVar7);
        uVar6 = 0;
        func_0x00010469e958(0);
        func_0x000107c610f8();
        func_0x00010469e564(uVar8,puVar7,uVar6);
        puVar11 = (undefined8 *)(lVar1 + *(int *)(lVar3 + 0x18));
        uVar6 = *puVar11;
        uVar17 = puVar11[1];
        func_0x000107c61434(uVar17);
        func_0x00010205cd98(uVar19,uStack_1a0,uVar6,uVar17);
        func_0x000107c61170(uVar8);
        func_0x000107c61174(uVar19);
        func_0x00010205f4a4(lVar1,&SUB_103e07278);
        uVar15 = uStack_f0;
        lVar1 = lStack_e8;
        goto joined_r0x00010205bd90;
      }
      func_0x000107c6142c(puVar9);
      func_0x00010205f464(lVar18,0x112dbe3d8,&UNK_10d979340);
    }
    else {
      func_0x000107c6142c(puVar9);
    }
LAB_10205bc18:
    func_0x0001000a8868(plVar4,plVar4[3]);
    uVar17 = *(undefined8 *)(*plVar4 + 0x10);
    uVar6 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f05e2d0);
  }
  uVar15 = 0x726f7065725f6461;
  func_0x000107c5fadc(0x726f7065725f6461,0xe900000000000074);
  func_0x000105b48940(uVar17,uVar6,uVar15,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
LAB_10205be30:
  func_0x0001000834e4(auStack_108);
  return;
}



/* Entry: 10205be6c; end: 10205beb7;  */

void FUN_10205be6c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10205beb8; end: 10205bf3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10205beb8(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_11308cb28);
  uVar1 = uVar2;
  func_0x000107c30ccc();
  if (uVar1 == 1) {
    uVar1 = 0;
  }
  else {
    if (uVar1 == 2) {
      func_0x000107c30ce0();
      if (uVar2 < 6) {
        return 0x502030f0f0f >> ((uVar2 & 7) << 3);
      }
    }
    else if (uVar1 == 7) {
      return 6;
    }
    uVar1 = 0xf;
  }
  return uVar1;
}



/* Entry: 10205bf3c; end: 10205bfe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10205bf3c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c43fb8();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      if (param_2 == 0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c4bc00(lVar1);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(param_1);
      }
    }
  }
  return;
}



/* Entry: 10205bfe4; end: 10205c1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10205bfe4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  long lVar5;
  undefined8 auStack_5f90 [3];
  undefined1 auStack_5f78 [6072];
  undefined1 auStack_47c0 [5904];
  undefined1 uStack_30b0;
  undefined1 auStack_2ff0 [6096];
  undefined1 auStack_1820 [6096];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x00010423cab0();
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)auStack_5f90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar4 - extraout_x12;
  func_0x00010205e944();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x0001042b0824(lVar5);
    *(undefined8 *)(lVar5 + *(int *)(lVar1 + 0x34)) = 5;
    func_0x00010205f420(lVar5,lVar4,&SUB_10423cab0);
    uVar3 = 0;
    func_0x0001042b18d4(0);
    func_0x000107c610f8();
    lVar1 = lVar4;
    func_0x0001042b0f38();
    func_0x000107c61170(lVar2);
    func_0x00010205f4a4(lVar5,&SUB_10423cab0);
    func_0x000107c61174();
    func_0x0001042b0824(lVar5);
    func_0x000107c61174(*(undefined8 *)(lVar1 + _DAT_11306b4f8));
    func_0x0001042ac4f4(auStack_47c0);
    uStack_30b0 = 1;
    func_0x000107c610b4(auStack_2ff0,auStack_47c0,0x17d0);
    func_0x000107c610b4(auStack_1820,lVar5 + 0x18,0x17d0);
    FUN_101897da8(auStack_2ff0,auStack_5f90);
    func_0x000101897de4(auStack_1820);
    func_0x000107c610b4(lVar5 + 0x18,auStack_2ff0,0x17d0);
    func_0x00010205f420(lVar5,lVar4,&SUB_10423cab0);
    func_0x000107c610f8(uVar3);
    func_0x0001042b0f38(lVar4);
    func_0x000107c61170(lVar1);
    func_0x000101897de4(auStack_47c0);
    func_0x00010205f4a4(lVar5,&SUB_10423cab0);
  }
  return lVar4;
}



/* Entry: 10205c1f0; end: 10205c6a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10205c1f0(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_77f0;
  undefined1 auStack_77e8 [16];
  undefined1 auStack_77d8 [6080];
  undefined *apuStack_6018 [3];
  long lStack_6000;
  undefined *puStack_4848;
  undefined8 uStack_4840;
  undefined1 auStack_3078 [40];
  undefined *puStack_3050;
  undefined1 auStack_3048 [24];
  undefined *puStack_3030;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  undefined8 uStack_19a8;
  undefined8 uStack_19a0;
  undefined8 uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined1 auStack_1838 [24];
  long lStack_1820;
  long lStack_68;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  func_0x00010423cab0();
  lVar7 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_77f0 + lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_00;
  func_0x00010205e944();
  if (lVar7 == 0) {
    return 0;
  }
  func_0x000107c61174();
  func_0x0001042b0824(lVar9);
  *(undefined8 *)(lVar9 + *(int *)(lVar3 + 0x34)) = 5;
  func_0x00010205f420(lVar9,lVar10,&SUB_10423cab0);
  uVar4 = 0;
  func_0x0001042b18d4(0);
  func_0x000107c610f8();
  func_0x0001042b0f38();
  func_0x000107c61170(lVar7);
  func_0x00010205f4a4(lVar9,&SUB_10423cab0);
  func_0x000107c61174();
  func_0x0001042b0824(lVar8);
  func_0x000107c61174(*(undefined8 *)(lVar10 + _DAT_11306b4f8));
  func_0x0001042ac4f4(auStack_1838);
  lStack_68 = lStack_1820;
  func_0x000107c610b4(auStack_3048,auStack_1838,0x17d0);
  func_0x00010205f4e0(&lStack_68,&puStack_4848,0x112dce260,&UNK_10d990480);
  FUN_10205ed00(&uStack_1878,1,5);
  func_0x00010205f464(&uStack_19c0,0x112dcd928,&UNK_10d9900a0);
  puVar2 = PTR___sypN_11034f1a8;
  uStack_19b8 = uStack_1870;
  uStack_19c0 = uStack_1878;
  uStack_19a8 = uStack_1860;
  uStack_19b0 = uStack_1868;
  uStack_1998 = uStack_1850;
  uStack_19a0 = uStack_1858;
  uStack_1988 = uStack_1840;
  uStack_1990 = uStack_1848;
  if (lStack_68 != 0) {
    puStack_4848 = (undefined *)0x0;
    func_0x000107c5f9e4(lStack_68,&puStack_4848,PTR___ss11AnyHashableVN_11034e448,
                        PTR___sypN_11034f1a8 + 8,PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x00010205f464(&lStack_68,0x112dce260,&UNK_10d990480);
    puVar5 = puStack_4848;
    if (puStack_4848 != (undefined *)0x0) goto LAB_10205c45c;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
LAB_10205c45c:
  puStack_4848 = (undefined *)0xd000000000000013;
  uStack_4840 = 0x800000010efbc8f0;
  puStack_3050 = puVar5;
  func_0x000107c602d4(auStack_3078,&puStack_4848,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  lVar7 = 0;
  func_0x0001002ed07c();
  apuStack_6018[0] = puVar6;
  lStack_6000 = lVar7;
  if (lVar7 == 0) {
    func_0x00010205f464(apuStack_6018,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&puStack_4848,auStack_3078);
    func_0x0001007bbff0(auStack_3078);
    func_0x00010205f464(&puStack_4848,0x112d387f8,&UNK_10d902650);
    puVar5 = puStack_3050;
  }
  else {
    func_0x000100102924(apuStack_6018,&puStack_4848);
    puVar6 = puVar5;
    func_0x000107c61558(puVar5);
    apuStack_6018[0] = puVar5;
    FUN_10192c094(&puStack_4848,auStack_3078,puVar6);
    func_0x0001007bbff0(auStack_3078);
    puVar5 = apuStack_6018[0];
  }
  puVar6 = puVar5;
  func_0x000107c5f9dc(puVar5,PTR___ss11AnyHashableVN_11034e448,puVar2 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x00010205f464(&lStack_68,0x112dce260,&UNK_10d990480);
  puStack_3030 = puVar6;
  func_0x000107c610b4(apuStack_6018,auStack_3048,0x17d0);
  func_0x000107c610b4(&puStack_4848,auStack_77d8 + lVar1,0x17d0);
  FUN_101897da8(apuStack_6018,auStack_77e8);
  func_0x000101897de4(&puStack_4848);
  func_0x000107c610b4(auStack_77d8 + lVar1,apuStack_6018,0x17d0);
  func_0x00010205f420(lVar8,lVar9,&SUB_10423cab0);
  func_0x000107c610f8(uVar4);
  func_0x0001042b0f38(lVar9);
  func_0x000107c6142c(puVar5);
  func_0x000107c61170(lVar10);
  func_0x000101897de4(auStack_3048);
  func_0x00010205f4a4(lVar8,&SUB_10423cab0);
  return lVar9;
}



/* Entry: 10205c6a4; end: 10205c703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10205c6a4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_11308caf0);
  func_0x000107c30d04();
  if ((lVar1 != 1) && (lVar1 == 2)) {
    func_0x000107c30d08();
  }
  return;
}



/* Entry: 10205c704; end: 10205c917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10205c704(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long lVar4;
  undefined8 auStack_5f90 [3];
  undefined1 auStack_5f78 [6072];
  undefined1 auStack_47c0 [5904];
  undefined1 uStack_30b0;
  undefined1 auStack_2ff0 [6096];
  undefined1 auStack_1820 [6096];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)auStack_5f90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar3 - extraout_x12;
  FUN_10205ede8();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x0001042b0824(lVar4);
    *(undefined8 *)(lVar4 + *(int *)(lVar1 + 0x34)) = 5;
    func_0x00010205f420(lVar4,lVar3,&SUB_10423cab0);
    uVar2 = 0;
    func_0x0001042b18d4(0);
    func_0x000107c610f8();
    lVar1 = lVar3;
    func_0x0001042b0f38();
    func_0x000107c61170(param_1);
    func_0x00010205f4a4(lVar4,&SUB_10423cab0);
    func_0x000107c61174();
    func_0x0001042b0824(lVar4);
    func_0x000107c61174(*(undefined8 *)(lVar1 + _DAT_11306b4f8));
    func_0x0001042ac4f4(auStack_47c0);
    uStack_30b0 = 1;
    func_0x000107c610b4(auStack_2ff0,auStack_47c0,0x17d0);
    func_0x000107c610b4(auStack_1820,lVar4 + 0x18,0x17d0);
    FUN_101897da8(auStack_2ff0,auStack_5f90);
    func_0x000101897de4(auStack_1820);
    func_0x000107c610b4(lVar4 + 0x18,auStack_2ff0,0x17d0);
    func_0x00010205f420(lVar4,lVar3,&SUB_10423cab0);
    func_0x000107c610f8(uVar2);
    func_0x0001042b0f38(lVar3);
    func_0x000107c61170(lVar1);
    func_0x000101897de4(auStack_47c0);
    func_0x00010205f4a4(lVar4,&SUB_10423cab0);
  }
  return lVar3;
}



/* Entry: 10205c918; end: 10205d647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10205c918(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 auStack_77f0 [3];
  undefined1 auStack_77d8 [6072];
  undefined *apuStack_6020 [3];
  long lStack_6008;
  undefined *puStack_4850;
  undefined8 uStack_4848;
  undefined1 auStack_3080 [40];
  undefined *puStack_3058;
  undefined1 auStack_3050 [24];
  undefined *puStack_3038;
  undefined8 uStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  undefined8 uStack_19a8;
  undefined8 uStack_19a0;
  undefined8 uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined1 auStack_1840 [24];
  undefined8 uStack_1828;
  undefined8 auStack_70 [2];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  func_0x00010423cab0();
  lVar5 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)auStack_77f0 + lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_00;
  func_0x00010205e944();
  if (lVar5 == 0) {
    return 0;
  }
  func_0x000107c61174();
  func_0x0001042b0824(lVar9);
  *(undefined8 *)(lVar9 + *(int *)(lVar3 + 0x34)) = 5;
  func_0x00010205f420(lVar9,lVar10,&SUB_10423cab0);
  uVar4 = 0;
  func_0x0001042b18d4(0);
  func_0x000107c610f8();
  func_0x0001042b0f38();
  func_0x000107c61170(lVar5);
  func_0x00010205f4a4(lVar9,&SUB_10423cab0);
  func_0x000107c61174();
  func_0x0001042b0824(lVar8);
  lVar5 = _DAT_11306b4f8;
  func_0x000107c61174(*(undefined8 *)(lVar10 + _DAT_11306b4f8));
  func_0x0001042ac4f4(auStack_1840);
  func_0x000107c610b4(auStack_3050,auStack_1840,0x17d0);
  FUN_10205ed00(&uStack_1880,0,0);
  func_0x00010205f464(&uStack_19c8,0x112dcd928,&UNK_10d9900a0);
  puVar2 = PTR___sypN_11034f1a8;
  uStack_19c0 = uStack_1878;
  uStack_19c8 = uStack_1880;
  uStack_19b0 = uStack_1868;
  uStack_19b8 = uStack_1870;
  uStack_19a0 = uStack_1858;
  uStack_19a8 = uStack_1860;
  uStack_1990 = uStack_1848;
  uStack_1998 = uStack_1850;
  lVar5 = *(long *)(*(long *)(lVar10 + lVar5) + _DAT_11306b3e0);
  if (lVar5 != 0) {
    puStack_4850 = (undefined *)0x0;
    func_0x000107c61174();
    func_0x000107c5f9e4();
    func_0x000107c61170(lVar5);
    puVar6 = puStack_4850;
    if (puStack_4850 != (undefined *)0x0) goto LAB_10205cb48;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
LAB_10205cb48:
  puStack_4850 = (undefined *)0xd000000000000013;
  uStack_4848 = 0x800000010efbc8f0;
  puStack_3058 = puVar6;
  func_0x000107c602d4(auStack_3080,&puStack_4850,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  lVar5 = 0;
  func_0x0001002ed07c();
  apuStack_6020[0] = puVar7;
  lStack_6008 = lVar5;
  if (lVar5 == 0) {
    func_0x00010205f464(apuStack_6020,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&puStack_4850,auStack_3080);
    func_0x0001007bbff0(auStack_3080);
    func_0x00010205f464(&puStack_4850,0x112d387f8,&UNK_10d902650);
    puVar6 = puStack_3058;
  }
  else {
    func_0x000100102924(apuStack_6020,&puStack_4850);
    puVar7 = puVar6;
    func_0x000107c61558(puVar6);
    apuStack_6020[0] = puVar6;
    FUN_10192c094(&puStack_4850,auStack_3080,puVar7);
    func_0x0001007bbff0(auStack_3080);
    puVar6 = apuStack_6020[0];
  }
  auStack_70[0] = uStack_1828;
  puVar7 = puVar6;
  func_0x000107c5f9dc(puVar6,PTR___ss11AnyHashableVN_11034e448,puVar2 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x00010205f464(auStack_70,0x112dce260,&UNK_10d990480);
  puStack_3038 = puVar7;
  func_0x000107c610b4(apuStack_6020,auStack_3050,0x17d0);
  func_0x000107c610b4(&puStack_4850,auStack_77d8 + lVar1,0x17d0);
  FUN_101897da8(apuStack_6020,auStack_77f0);
  func_0x000101897de4(&puStack_4850);
  func_0x000107c610b4(auStack_77d8 + lVar1,apuStack_6020,0x17d0);
  func_0x00010205f420(lVar8,lVar9,&SUB_10423cab0);
  func_0x000107c610f8(uVar4);
  func_0x0001042b0f38(lVar9);
  func_0x000107c6142c(puVar6);
  func_0x000107c61170(lVar10);
  func_0x000101897de4(auStack_3050);
  func_0x00010205f4a4(lVar8,&SUB_10423cab0);
  return lVar9;
}



/* Entry: 10205d648; end: 10205d6a7; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl27SponsoredSnapAdTrackHandler init] */

void FUN_10205d648(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapFeedImpressionTrackerServicesImpl.SponsoredSnapAdTrackHandler",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10205d674);
  (*pcVar1)();
}



/* Entry: 10205d6a8; end: 10205d74f; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl27SponsoredSnapAdTrackHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010205d6e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010205d6e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10205d6a8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e54060));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e54068));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e54070));
  return;
}



/* Entry: 10205d750; end: 10205d78f;  */

void FUN_10205d750(void)

{
  func_0x000107c61168(&PTR_PTR_11281a900);
  return;
}



/* Entry: 10205d790; end: 10205d7ab;  */

void FUN_10205d790(long param_1,long param_2)

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



/* Entry: 10205d7ac; end: 10205d82b;  */

void FUN_10205d7ac(void)

{
  FUN_10205b6f4();
  return;
}



/* Entry: 10205d82c; end: 10205ecff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10205d82c(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_a8c0;
  undefined1 auStack_a8b8 [8];
  long lStack_a8b0;
  undefined1 auStack_a8a8 [8];
  undefined8 auStack_a8a0 [3];
  undefined4 auStack_a888 [2];
  long alStack_a880 [6];
  undefined2 auStack_a850 [4];
  undefined8 auStack_a848 [2];
  undefined1 auStack_a838 [8];
  undefined8 uStack_a830;
  undefined2 auStack_a828 [4];
  long lStack_a820;
  undefined1 auStack_a818 [8];
  undefined8 auStack_a810 [6];
  undefined1 auStack_a7e0 [8];
  undefined8 uStack_a7d8;
  undefined1 auStack_a7d0 [8];
  undefined8 uStack_a7c8;
  undefined1 auStack_a7c0 [8];
  long alStack_a7b8 [5];
  undefined1 auStack_a790 [8];
  long alStack_a788 [5];
  long alStack_a760 [3];
  long alStack_a748 [2];
  undefined8 uStack_a738;
  undefined8 auStack_a730 [2];
  undefined8 uStack_a720;
  long alStack_a718 [2];
  undefined2 auStack_a708 [4];
  long alStack_a700 [3];
  long lStack_a6e8;
  undefined8 uStack_a6e0;
  undefined8 uStack_a6d8;
  undefined8 uStack_a6d0;
  undefined8 uStack_a6c8;
  undefined8 uStack_a6c0;
  undefined8 uStack_a6b8;
  undefined8 uStack_a6b0;
  undefined8 uStack_a6a8;
  undefined8 uStack_a6a0;
  undefined8 uStack_a698;
  undefined8 uStack_a690;
  undefined8 uStack_a688;
  undefined8 uStack_a680;
  undefined8 uStack_a660;
  undefined8 uStack_a650;
  undefined8 uStack_a648;
  undefined8 uStack_a640;
  undefined8 uStack_a638;
  undefined8 uStack_a630;
  undefined8 uStack_a628;
  undefined8 uStack_a620;
  undefined8 uStack_a618;
  undefined8 uStack_a610;
  undefined8 uStack_a608;
  undefined8 uStack_a600;
  undefined8 uStack_a5f8;
  undefined8 uStack_a5f0;
  undefined1 uStack_a5e8;
  undefined7 uStack_a5e7;
  undefined1 uStack_a5e0;
  undefined7 uStack_a5df;
  undefined1 uStack_a5d8;
  undefined7 uStack_a5d7;
  undefined1 uStack_a5d0;
  undefined8 uStack_a5c0;
  undefined8 uStack_a5b8;
  undefined8 uStack_a5b0;
  undefined8 uStack_a5a8;
  undefined8 uStack_a5a0;
  undefined8 uStack_a598;
  undefined8 uStack_a590;
  undefined8 uStack_a588;
  undefined8 uStack_a580;
  undefined8 uStack_a578;
  undefined8 uStack_a570;
  undefined8 uStack_a568;
  undefined8 uStack_a560;
  undefined1 uStack_a558;
  undefined8 uStack_a54f;
  undefined8 uStack_a540;
  undefined8 uStack_a538;
  undefined8 uStack_a530;
  undefined8 uStack_a528;
  undefined8 uStack_a520;
  undefined8 uStack_a518;
  undefined8 uStack_a510;
  undefined8 uStack_a508;
  undefined8 uStack_a500;
  undefined8 uStack_a4f8;
  undefined8 uStack_a4f0;
  undefined8 uStack_a4e8;
  undefined8 uStack_a4e0;
  undefined2 uStack_a4d8;
  undefined6 uStack_a4d6;
  undefined2 uStack_a4d0;
  undefined8 uStack_a4ce;
  undefined8 uStack_a4c0;
  undefined8 uStack_a4b8;
  undefined8 uStack_a4b0;
  undefined8 uStack_a4a8;
  undefined8 uStack_a4a0;
  undefined8 uStack_a498;
  undefined8 uStack_a490;
  undefined8 uStack_a488;
  undefined8 uStack_a480;
  undefined8 uStack_a478;
  undefined8 uStack_a470;
  undefined8 uStack_a468;
  undefined8 uStack_a460;
  undefined8 uStack_a458;
  undefined8 uStack_a450;
  undefined8 uStack_a448;
  undefined8 uStack_a440;
  undefined8 uStack_a1b0;
  undefined8 uStack_a1a8;
  undefined8 uStack_a1a0;
  undefined8 uStack_a198;
  undefined8 uStack_a190;
  undefined8 uStack_a188;
  undefined8 uStack_a180;
  undefined8 uStack_a178;
  undefined8 uStack_a170;
  undefined8 uStack_a168;
  undefined8 uStack_a160;
  undefined8 uStack_a158;
  undefined8 uStack_a150;
  undefined8 uStack_a148;
  undefined8 uStack_a140;
  undefined8 uStack_a138;
  undefined1 uStack_a130;
  undefined8 uStack_a128;
  undefined8 uStack_a120;
  undefined8 uStack_a118;
  undefined8 uStack_a110;
  undefined8 uStack_a0ff;
  undefined *puStack_a0e8;
  undefined *apuStack_a0e0 [3];
  long lStack_a0c8;
  undefined8 uStack_8910;
  long lStack_8908;
  undefined *puStack_7140;
  undefined8 uStack_7138;
  undefined1 uStack_7130;
  undefined1 auStack_5970 [24];
  undefined *puStack_5958;
  undefined1 auStack_4e98 [3184];
  undefined1 uStack_4228;
  undefined1 auStack_41a0 [24];
  undefined8 uStack_4188;
  undefined8 uStack_29d0;
  undefined8 uStack_29c8;
  undefined8 uStack_29c0;
  undefined8 uStack_29b8;
  undefined8 uStack_29b0;
  undefined8 uStack_29a8;
  undefined8 uStack_29a0;
  undefined8 uStack_2998;
  undefined8 uStack_2990;
  undefined8 uStack_2988;
  undefined8 uStack_2980;
  undefined8 uStack_2978;
  undefined8 uStack_2970;
  undefined8 uStack_2968;
  undefined8 uStack_2960;
  undefined8 uStack_2958;
  undefined8 uStack_2950;
  undefined8 uStack_2948;
  undefined8 uStack_2940;
  undefined8 uStack_2938;
  undefined8 uStack_2930;
  undefined8 uStack_291f;
  undefined1 auStack_2420 [2744];
  undefined8 uStack_1968;
  undefined8 uStack_1960;
  undefined8 uStack_1958;
  undefined8 uStack_1950;
  undefined8 uStack_1948;
  undefined8 uStack_1940;
  undefined1 auStack_1938 [1448];
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined1 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_126f;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_eff;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined2 uStack_df8;
  undefined6 uStack_df6;
  undefined2 uStack_df0;
  undefined6 uStack_dee;
  undefined2 uStack_de8;
  undefined6 uStack_de6;
  undefined1 uStack_de0;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined1 uStack_d68;
  undefined8 uStack_d5f;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined1 uStack_ce8;
  undefined1 uStack_ce7;
  undefined1 uStack_ce0;
  undefined1 uStack_cdf;
  undefined7 uStack_cde;
  undefined1 uStack_cd7;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined2 uStack_b80;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined2 uStack_b30;
  undefined1 auStack_b28 [2760];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = unaff_x20;
  alStack_a700[0] = param_4;
  lStack_a6e8 = param_2;
  func_0x000107c614f0();
  lVar2 = 0;
  alStack_a700[2] = lVar3;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = (long)alStack_a700 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar7 - extraout_x12;
  lVar11 = *(long *)(unaff_x20 + _DAT_11306b528);
  func_0x000107c61174();
  func_0x0001042b0824(lVar9);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b4f8);
  func_0x000107c61174();
  alStack_a700[1] = lVar3;
  func_0x0001042ac4f4(auStack_41a0);
  func_0x000107c610b4(auStack_5970,auStack_41a0,0x17d0);
  if ((param_1 & 1) != 0) {
    uStack_4228 = 1;
    *(undefined8 *)(lVar9 + *(int *)(lVar2 + 0x34)) = 1;
  }
  if (*(int *)(lVar11 + _DAT_113815200) == 0x16) {
    if ((lStack_a6e8 == 0) || (lVar3 = lStack_a6e8, func_0x000107c30c94(), (int)lVar3 != 0x1a)) {
      func_0x0001000d224c(&uStack_8910);
      lVar3 = lStack_8908;
      uVar8 = uStack_8910;
      uVar5 = uStack_8910;
      func_0x000107c614f0(uStack_8910);
      puStack_7140 = (undefined *)0xd000000000000045;
      uStack_7138 = 0x800000010efb4800;
      uStack_7130 = 0;
      (**(code **)(lVar3 + 8))
                (apuStack_a0e0,&puStack_7140,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar5,lVar3);
      uVar10 = (ulong)apuStack_a0e0[0] & 0xff;
      func_0x000107c615e8(uVar8);
    }
    else {
      uVar10 = 1;
    }
    func_0x000107c3d4b4();
    func_0x000107c61180();
    if (lVar11 == 0) {
      uVar8 = 0x17;
    }
    else {
      uVar8 = *(undefined8 *)(lVar11 + _DAT_11308f1e0);
      func_0x000107c61170();
    }
    FUN_101895cec(&uStack_a6e0);
    uStack_e90 = uStack_a680;
    uStack_e70 = uStack_a660;
    uStack_ec8 = uStack_a6b8;
    uStack_ed0 = uStack_a6c0;
    uStack_eb8 = uStack_a6a8;
    uStack_ec0 = uStack_a6b0;
    uStack_e98 = uStack_a688;
    uStack_ea0 = uStack_a690;
    uStack_ea8 = uStack_a698;
    uStack_eb0 = uStack_a6a0;
    uStack_ed8 = uStack_a6c8;
    uStack_ee0 = uStack_a6d0;
    uStack_ee8 = uStack_a6d8;
    uStack_ef0 = uStack_a6e0;
    func_0x000101895d08(&uStack_a650);
    uStack_df8 = (undefined2)CONCAT71(uStack_a5e7,uStack_a5e8);
    uStack_df6 = (undefined6)((uint7)uStack_a5e7 >> 8);
    uStack_e00 = uStack_a5f0;
    uStack_de8 = (undefined2)CONCAT71(uStack_a5d7,uStack_a5d8);
    uStack_de6 = (undefined6)((uint7)uStack_a5d7 >> 8);
    uStack_df0 = (undefined2)CONCAT71(uStack_a5df,uStack_a5e0);
    uStack_dee = (undefined6)((uint7)uStack_a5df >> 8);
    uStack_de0 = uStack_a5d0;
    uStack_e38 = uStack_a628;
    uStack_e40 = uStack_a630;
    uStack_e28 = uStack_a618;
    uStack_e30 = uStack_a620;
    uStack_e08 = uStack_a5f8;
    uStack_e10 = uStack_a600;
    uStack_e18 = uStack_a608;
    uStack_e20 = uStack_a610;
    uStack_e48 = uStack_a638;
    uStack_e50 = uStack_a640;
    uStack_e58 = uStack_a648;
    uStack_e60 = uStack_a650;
    func_0x0001018797b4(&uStack_a5c0);
    uStack_d88 = uStack_a578;
    uStack_d90 = uStack_a580;
    uStack_d78 = uStack_a568;
    uStack_d80 = uStack_a570;
    uStack_d68 = uStack_a558;
    uStack_d70 = uStack_a560;
    uStack_d5f = uStack_a54f;
    uStack_dc8 = uStack_a5b8;
    uStack_dd0 = uStack_a5c0;
    uStack_db8 = uStack_a5a8;
    uStack_dc0 = uStack_a5b0;
    uStack_da8 = uStack_a598;
    uStack_db0 = uStack_a5a0;
    uStack_d98 = uStack_a588;
    uStack_da0 = uStack_a590;
    func_0x000101895d28(&uStack_a540);
    uStack_d08 = uStack_a4f8;
    uStack_d10 = uStack_a500;
    uStack_cf8 = uStack_a4e8;
    uStack_d00 = uStack_a4f0;
    uStack_ce8 = (undefined1)uStack_a4d8;
    uStack_ce7 = (undefined1)((ushort)uStack_a4d8 >> 8);
    uStack_cf0 = uStack_a4e0;
    uStack_cde = (undefined7)uStack_a4ce;
    uStack_cd7 = (undefined1)((ulong)uStack_a4ce >> 0x38);
    uStack_ce0 = (undefined1)uStack_a4d0;
    uStack_cdf = (undefined1)((ushort)uStack_a4d0 >> 8);
    uStack_d48 = uStack_a538;
    uStack_d50 = uStack_a540;
    uStack_d38 = uStack_a528;
    uStack_d40 = uStack_a530;
    uStack_d28 = uStack_a518;
    uStack_d30 = uStack_a520;
    uStack_d18 = uStack_a508;
    uStack_d20 = uStack_a510;
    uStack_cd0 = 0;
    uStack_cc0 = 0;
    uStack_cc8 = 0;
    uStack_cb8 = 1;
    uStack_ca8 = 0;
    uStack_cb0 = 0;
    uStack_c90 = 0;
    uStack_c88 = 2;
    uStack_c98 = 0;
    uStack_ca0 = 0;
    uStack_c78 = 0;
    uStack_c80 = 0;
    uStack_c68 = 0;
    uStack_c70 = 0;
    uStack_c58 = 0;
    uStack_c60 = 0;
    uStack_c48 = 0;
    uStack_c50 = 0;
    uStack_c38 = 0;
    uStack_c40 = 0;
    uStack_c28 = 0;
    uStack_c30 = 0;
    uStack_c18 = 0;
    uStack_c20 = 0;
    uStack_c08 = 0;
    uStack_c10 = 0;
    uStack_bf8 = 0;
    uStack_c00 = 0;
    uStack_be8 = 0;
    uStack_bf0 = 0;
    uStack_bd8 = 0;
    uStack_be0 = 0;
    uStack_bc8 = 0;
    uStack_bd0 = 0;
    uStack_bb8 = 0;
    uStack_bc0 = 0;
    uStack_ba8 = 0;
    uStack_bb0 = 0;
    uStack_b98 = 0;
    uStack_ba0 = 0;
    uStack_b88 = 0;
    uStack_b90 = 1;
    uStack_b80 = 0;
    uStack_b68 = 0;
    uStack_b70 = 0;
    uStack_b58 = 0;
    uStack_b60 = 0;
    uStack_b48 = 0;
    uStack_b50 = 0;
    uStack_b38 = 0;
    uStack_b40 = 0;
    uStack_b30 = 0x100;
    uStack_1958 = 0;
    uStack_1960 = 0;
    uStack_1948 = 0;
    uStack_1950 = 0;
    uStack_1940 = 0;
    *(undefined1 *)(lVar9 + -0x30) = 0;
    *(undefined8 *)(lVar9 + -0x38) = 0;
    *(undefined8 *)(lVar9 + -0x40) = 0;
    *(undefined1 *)(lVar9 + -0x48) = 0;
    *(undefined1 *)(lVar9 + -0x60) = 1;
    *(undefined8 *)(lVar9 + -0x68) = 0;
    *(undefined8 *)(lVar9 + -0x70) = 0;
    *(undefined8 **)(lVar9 + -0x80) = &uStack_b70;
    *(undefined8 **)(lVar9 + -0x78) = &uStack_1960;
    *(undefined8 *)(lVar9 + -0x88) = 0;
    *(undefined1 *)(lVar9 + -0x90) = 0;
    *(undefined8 **)(lVar9 + -0x98) = &uStack_bf0;
    *(undefined8 **)(lVar9 + -0xa8) = &uStack_ca0;
    *(undefined8 **)(lVar9 + -0xa0) = &uStack_c40;
    *(undefined1 *)(lVar9 + -0xc0) = 1;
    *(undefined8 *)(lVar9 + -200) = 0;
    *(undefined1 *)(lVar9 + -0xd0) = 1;
    *(undefined8 *)(lVar9 + -0xd8) = 0;
    *(undefined1 *)(lVar9 + -0xe0) = 1;
    *(undefined8 *)(lVar9 + -0xf8) = 0;
    *(undefined8 *)(lVar9 + -0x100) = 0;
    *(undefined8 *)(lVar9 + -0xe8) = 0;
    *(undefined8 *)(lVar9 + -0xf0) = 0;
    *(undefined8 *)(lVar9 + -0x108) = 0;
    *(undefined8 *)(lVar9 + -0x110) = 0;
    *(undefined1 *)(lVar9 + -0x118) = 0;
    *(undefined8 **)(lVar9 + -0x120) = &uStack_cd0;
    *(undefined2 *)(lVar9 + -0x128) = 0;
    *(undefined8 *)(lVar9 + -0x130) = 0;
    *(undefined1 *)(lVar9 + -0x138) = 0;
    *(undefined8 *)(lVar9 + -0x140) = 0;
    *(undefined8 *)(lVar9 + -0x148) = 0;
    *(undefined2 *)(lVar9 + -0x150) = 0;
    *(undefined8 *)(lVar9 + -0x158) = 0;
    *(undefined8 *)(lVar9 + -0x160) = 0;
    *(undefined8 **)(lVar9 + -0x170) = &uStack_dd0;
    *(undefined8 **)(lVar9 + -0x168) = &uStack_d50;
    *(undefined8 *)(lVar9 + -0x180) = 3;
    *(undefined8 **)(lVar9 + -0x178) = &uStack_e60;
    *(undefined4 *)(lVar9 + -0x188) = 0;
    *(undefined8 *)(lVar9 + -400) = 0;
    *(undefined8 *)(lVar9 + -0x198) = 0;
    *(undefined8 *)(lVar9 + -0x1a0) = 0x30000000000;
    *(undefined1 *)(lVar9 + -0x1a8) = 0;
    *(undefined8 **)(lVar9 + -0x1b0) = &uStack_ef0;
    *(undefined1 *)(lVar9 + -0x1b8) = 0;
    *(undefined8 *)(lVar9 + -0x1c0) = 0;
    *(undefined8 *)(lVar9 + -0x10) = 0;
    *(undefined8 *)(lVar9 + -0x18) = 0;
    *(undefined8 *)(lVar9 + -0x20) = 0;
    *(undefined8 *)(lVar9 + -0x28) = 0;
    *(undefined8 *)(lVar9 + -0x50) = 0;
    *(undefined8 *)(lVar9 + -0x58) = 0;
    *(undefined8 *)(lVar9 + -0xb0) = 0;
    *(undefined8 *)(lVar9 + -0xb8) = 0;
    func_0x000104218d60(&uStack_29d0,0,0,0,0,0,0,0,0,uVar10,0,0,0,0,0);
    func_0x000107c610b4(apuStack_a0e0,&uStack_29d0,0x5a8);
    func_0x00010178e49c(apuStack_a0e0);
    func_0x000107c610b4(auStack_1938,apuStack_a0e0,0x5a8);
    uStack_1388 = 0;
    uStack_1390 = 0;
    uStack_1378 = 0;
    uStack_1380 = 0;
    uStack_1370 = 1;
    uStack_1360 = 0;
    uStack_1368 = 0;
    uStack_1350 = 0;
    uStack_1358 = 0;
    uStack_1340 = 0;
    uStack_1348 = 0;
    uStack_1330 = 0;
    uStack_1338 = 0;
    uStack_1328 = 0;
    func_0x00010178e4b4(&uStack_a4c0);
    func_0x000107c610b4(&uStack_1320,&uStack_a4c0,0x301);
    uStack_1010 = 1;
    uStack_1000 = 0;
    uStack_1008 = 0;
    uStack_ff0 = 0;
    uStack_ff8 = 0;
    uStack_fe0 = 0;
    uStack_fe8 = 0;
    uStack_fd0 = 0;
    uStack_fd8 = 0;
    uStack_fc0 = 0;
    uStack_fc8 = 0;
    uStack_fb8 = 0;
    func_0x00010178e4d4(&uStack_a1b0);
    uStack_f28 = uStack_a128;
    uStack_f18 = uStack_a118;
    uStack_f20 = uStack_a120;
    uStack_f10 = uStack_a110;
    uStack_eff = uStack_a0ff;
    uStack_f68 = uStack_a168;
    uStack_f70 = uStack_a170;
    uStack_f58 = uStack_a158;
    uStack_f60 = uStack_a160;
    uStack_f48 = uStack_a148;
    uStack_f50 = uStack_a150;
    uStack_f38 = uStack_a138;
    uStack_f40 = uStack_a140;
    uStack_fa8 = uStack_a1a8;
    uStack_fb0 = uStack_a1b0;
    uStack_f98 = uStack_a198;
    uStack_fa0 = uStack_a1a0;
    uStack_f88 = uStack_a188;
    uStack_f90 = uStack_a190;
    uStack_f78 = uStack_a178;
    uStack_f80 = uStack_a180;
    func_0x00010178e37c(&uStack_29d0,&puStack_7140);
    *(undefined8 *)(lVar9 + -0x30) = 0;
    *(undefined8 *)(lVar9 + -0x28) = 0;
    *(undefined2 *)(lVar9 + -8) = 0;
    *(undefined8 *)(lVar9 + -0x18) = 0;
    *(undefined8 *)(lVar9 + -0x10) = 3;
    *(undefined8 *)(lVar9 + -0x20) = 1;
    *(undefined1 *)(lVar9 + -0x38) = 0;
    *(undefined8 *)(lVar9 + -0x48) = 1;
    *(undefined8 *)(lVar9 + -0x40) = 0;
    *(undefined8 **)(lVar9 + -0x58) = &uStack_1010;
    *(undefined8 **)(lVar9 + -0x50) = &uStack_fb0;
    *(undefined2 *)(lVar9 + -0x60) = 0x202;
    func_0x000104220e6c(auStack_2420,uVar8,auStack_1938,&uStack_1390,&uStack_1320,1,0,1,0);
    lVar3 = 0x112dcbeb0;
    func_0x0001000285a8(0x112dcbeb0,&UNK_10d98e500);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    func_0x000107c610b4(lVar3 + 0x20,auStack_2420,0xab2);
    func_0x000101895c44(&uStack_8910);
    func_0x000107c610b4(auStack_b28,&uStack_8910,0xab2);
    FUN_101795250(auStack_2420,&puStack_7140);
    *(undefined8 *)(lVar9 + -0x60) = 0;
    *(undefined8 *)(lVar9 + -0x58) = 0;
    *(undefined8 *)(lVar9 + -0x18) = 0;
    *(undefined8 **)(lVar9 + -0x10) = &uStack_1960;
    *(undefined1 *)(lVar9 + -0x1e) = 0;
    *(undefined2 *)(lVar9 + -0x20) = 0;
    *(undefined8 *)(lVar9 + -0x28) = 0;
    *(undefined2 *)(lVar9 + -0x30) = 0x200;
    *(undefined1 **)(lVar9 + -0x40) = auStack_b28;
    *(undefined8 *)(lVar9 + -0x38) = 0;
    *(undefined1 *)(lVar9 + -0x48) = 0;
    *(long *)(lVar9 + -0x50) = lVar3;
    func_0x0001042687a4(&puStack_7140,0,0,0,0,0,0,0,0,0,0);
    func_0x00010178e3b8(&uStack_29d0);
    func_0x00010179528c(auStack_2420);
    func_0x00010178e4a8(&puStack_7140);
    func_0x00010205f464(auStack_4e98,0x112dcbc78,&UNK_10d98e350);
    func_0x000107c610b4(auStack_4e98,&puStack_7140,0xb78);
  }
  else if (*(int *)(lVar11 + _DAT_113815200) == 5) {
    func_0x0001000d224c(&puStack_7140);
    uVar8 = uStack_7138;
    puVar1 = puStack_7140;
    puVar4 = puStack_7140;
    func_0x000107c614f0(puStack_7140);
    uVar10 = 0xd000000000000023;
    func_0x00010403c628(0xd000000000000023,0x800000010efbca10,puVar4,uVar8);
    func_0x000107c615e8(puVar1);
    if ((uVar10 & 1) == 0) {
      func_0x0001018a91f0(&uStack_8910);
    }
    else {
      func_0x000107c3d4b4();
      func_0x000107c61180();
      if (lVar11 == 0) {
        uVar8 = 0x17;
      }
      else {
        uVar8 = *(undefined8 *)(lVar11 + _DAT_11308f1e0);
        func_0x000107c61170();
      }
      FUN_101895cec(&uStack_fb0);
      uStack_a458 = uStack_f48;
      uStack_a460 = uStack_f50;
      uStack_a448 = uStack_f38;
      uStack_a450 = uStack_f40;
      uStack_a440 = uStack_f30;
      uStack_a498 = uStack_f88;
      uStack_a4a0 = uStack_f90;
      uStack_a488 = uStack_f78;
      uStack_a490 = uStack_f80;
      uStack_a478 = uStack_f68;
      uStack_a480 = uStack_f70;
      uStack_a468 = uStack_f58;
      uStack_a470 = uStack_f60;
      uStack_a4b8 = uStack_fa8;
      uStack_a4c0 = uStack_fb0;
      uStack_a4a8 = uStack_f98;
      uStack_a4b0 = uStack_fa0;
      func_0x000101895d08(&uStack_ef0);
      uStack_a148 = uStack_e88;
      uStack_a150 = uStack_e90;
      uStack_a138 = uStack_e78;
      uStack_a140 = uStack_e80;
      uStack_a130 = (undefined1)uStack_e70;
      uStack_a188 = uStack_ec8;
      uStack_a190 = uStack_ed0;
      uStack_a178 = uStack_eb8;
      uStack_a180 = uStack_ec0;
      uStack_a158 = uStack_e98;
      uStack_a160 = uStack_ea0;
      uStack_a168 = uStack_ea8;
      uStack_a170 = uStack_eb0;
      uStack_a198 = uStack_ed8;
      uStack_a1a0 = uStack_ee0;
      uStack_a1a8 = uStack_ee8;
      uStack_a1b0 = uStack_ef0;
      func_0x0001018797b4(&uStack_d50);
      uStack_a608 = uStack_d08;
      uStack_a610 = uStack_d10;
      uStack_a5f8 = uStack_cf8;
      uStack_a600 = uStack_d00;
      uStack_a5f0 = uStack_cf0;
      uStack_a5df = (undefined7)CONCAT71(uStack_cde,uStack_cdf);
      uStack_a5d8 = (undefined1)((uint7)uStack_cde >> 0x30);
      uStack_a648 = uStack_d48;
      uStack_a650 = uStack_d50;
      uStack_a638 = uStack_d38;
      uStack_a640 = uStack_d40;
      uStack_a628 = uStack_d28;
      uStack_a630 = uStack_d30;
      uStack_a618 = uStack_d18;
      uStack_a620 = uStack_d20;
      func_0x000101895d28(&uStack_e60);
      uStack_a698 = uStack_e18;
      uStack_a6a0 = uStack_e20;
      uStack_a688 = uStack_e08;
      uStack_a690 = uStack_e10;
      uStack_a680 = uStack_e00;
      uStack_a6d8 = uStack_e58;
      uStack_a6e0 = uStack_e60;
      uStack_a6c8 = uStack_e48;
      uStack_a6d0 = uStack_e50;
      uStack_a6b8 = uStack_e38;
      uStack_a6c0 = uStack_e40;
      uStack_a6a8 = uStack_e28;
      uStack_a6b0 = uStack_e30;
      uStack_1010 = 0;
      uStack_1000 = 0;
      uStack_1008 = 0;
      uStack_ff8 = 1;
      uStack_fe8 = 0;
      uStack_ff0 = 0;
      uStack_a5b8 = 0;
      uStack_a5c0 = 0;
      uStack_a5b0 = 0;
      uStack_a5a8 = 2;
      uStack_a598 = 0;
      uStack_a5a0 = 0;
      uStack_a588 = 0;
      uStack_a590 = 0;
      uStack_a578 = 0;
      uStack_a580 = 0;
      uStack_a568 = 0;
      uStack_a570 = 0;
      uStack_1388 = 0;
      uStack_1390 = 0;
      uStack_1378 = 0;
      uStack_1380 = 0;
      uStack_1368 = 0;
      uStack_1370 = 0;
      uStack_1358 = 0;
      uStack_1360 = 0;
      uStack_1348 = 0;
      uStack_1350 = 0;
      uStack_a538 = 0;
      uStack_a540 = 0;
      uStack_a528 = 0;
      uStack_a530 = 0;
      uStack_a518 = 0;
      uStack_a520 = 0;
      uStack_a508 = 0;
      uStack_a510 = 0;
      uStack_a4f8 = 0;
      uStack_a500 = 0;
      uStack_a4e8 = 0;
      uStack_a4f0 = 0;
      uStack_a4d8 = 0;
      uStack_a4d6 = 0;
      uStack_a4e0 = 1;
      uStack_a4d0 = 0;
      uStack_c98 = 0;
      uStack_ca0 = 0;
      uStack_c88 = 0;
      uStack_c90 = 0;
      uStack_c78 = 0;
      uStack_c80 = 0;
      uStack_c68 = 0;
      uStack_c70 = 0;
      uStack_c60 = CONCAT62(uStack_c60._2_6_,0x100);
      uStack_c38 = 0;
      uStack_c40 = 0;
      uStack_c28 = 0;
      uStack_c30 = 0;
      uStack_c20 = 0;
      *(undefined1 *)(lVar9 + -0x30) = 0;
      *(undefined8 *)(lVar9 + -0x38) = 0;
      *(undefined8 *)(lVar9 + -0x40) = 0;
      *(undefined1 *)(lVar9 + -0x48) = 0;
      *(undefined1 *)(lVar9 + -0x60) = 1;
      *(undefined8 *)(lVar9 + -0x68) = 0;
      *(undefined8 *)(lVar9 + -0x70) = 0;
      *(undefined8 **)(lVar9 + -0x78) = &uStack_c40;
      *(undefined8 *)(lVar9 + -0x88) = 0;
      *(undefined8 **)(lVar9 + -0x80) = &uStack_ca0;
      *(undefined1 *)(lVar9 + -0x90) = 0;
      *(undefined8 **)(lVar9 + -0x98) = &uStack_a540;
      *(undefined8 **)(lVar9 + -0xa8) = &uStack_a5c0;
      *(undefined8 **)(lVar9 + -0xa0) = &uStack_1390;
      *(undefined1 *)(lVar9 + -0xc0) = 1;
      *(undefined8 *)(lVar9 + -200) = 0;
      *(undefined1 *)(lVar9 + -0xd0) = 1;
      *(undefined8 *)(lVar9 + -0xd8) = 0;
      *(undefined1 *)(lVar9 + -0xe0) = 1;
      *(undefined8 *)(lVar9 + -0xf8) = 0;
      *(undefined8 *)(lVar9 + -0x100) = 0;
      *(undefined8 *)(lVar9 + -0xe8) = 0;
      *(undefined8 *)(lVar9 + -0xf0) = 0;
      *(undefined8 *)(lVar9 + -0x108) = 0;
      *(undefined8 *)(lVar9 + -0x110) = 0;
      *(undefined1 *)(lVar9 + -0x118) = 0;
      *(undefined8 **)(lVar9 + -0x120) = &uStack_1010;
      *(undefined2 *)(lVar9 + -0x128) = 0;
      *(undefined8 *)(lVar9 + -0x130) = 0;
      *(undefined1 *)(lVar9 + -0x138) = 0;
      *(undefined8 *)(lVar9 + -0x140) = 0;
      *(undefined8 *)(lVar9 + -0x148) = 0;
      *(undefined2 *)(lVar9 + -0x150) = 0;
      *(undefined8 *)(lVar9 + -0x158) = 0;
      *(undefined8 *)(lVar9 + -0x160) = 0;
      *(undefined8 **)(lVar9 + -0x170) = &uStack_a650;
      *(undefined8 **)(lVar9 + -0x168) = &uStack_a6e0;
      *(undefined8 *)(lVar9 + -0x180) = 3;
      *(undefined8 **)(lVar9 + -0x178) = &uStack_a1b0;
      *(undefined4 *)(lVar9 + -0x188) = 0;
      *(undefined8 *)(lVar9 + -400) = 0;
      *(undefined8 *)(lVar9 + -0x198) = 0;
      *(undefined8 *)(lVar9 + -0x1a0) = 0x30000000000;
      *(undefined1 *)(lVar9 + -0x1a8) = 0;
      *(undefined8 **)(lVar9 + -0x1b0) = &uStack_a4c0;
      *(undefined1 *)(lVar9 + -0x1b8) = 0;
      *(undefined8 *)(lVar9 + -0x1c0) = 0;
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(undefined8 *)(lVar9 + -0x18) = 0;
      *(undefined8 *)(lVar9 + -0x20) = 0;
      *(undefined8 *)(lVar9 + -0x28) = 0;
      *(undefined8 *)(lVar9 + -0x50) = 0;
      *(undefined8 *)(lVar9 + -0x58) = 0;
      *(undefined8 *)(lVar9 + -0xb0) = 0;
      *(undefined8 *)(lVar9 + -0xb8) = 0;
      func_0x000104218d60(apuStack_a0e0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
      func_0x00010178e49c(apuStack_a0e0);
      func_0x000107c610b4(auStack_2420,apuStack_a0e0,0x5a8);
      uStack_dc8 = 0;
      uStack_dd0 = 0;
      uStack_db8 = 0;
      uStack_dc0 = 0;
      uStack_db0 = 1;
      uStack_da0 = 0;
      uStack_da8 = 0;
      uStack_d90 = 0;
      uStack_d98 = 0;
      uStack_d80 = 0;
      uStack_d88 = 0;
      uStack_d70 = 0;
      uStack_d78 = 0;
      uStack_d68 = 0;
      func_0x00010178e4b4(auStack_b28);
      func_0x000107c610b4(auStack_1938,auStack_b28,0x301);
      uStack_bf0 = 1;
      uStack_be0 = 0;
      uStack_be8 = 0;
      uStack_bd0 = 0;
      uStack_bd8 = 0;
      uStack_bc0 = 0;
      uStack_bc8 = 0;
      uStack_bb0 = 0;
      uStack_bb8 = 0;
      uStack_ba0 = 0;
      uStack_ba8 = 0;
      uStack_b98 = 0;
      func_0x00010178e4d4(&uStack_1320);
      uStack_2948 = uStack_1298;
      uStack_2950 = uStack_12a0;
      uStack_2938 = uStack_1288;
      uStack_2940 = uStack_1290;
      uStack_2930 = uStack_1280;
      uStack_291f = uStack_126f;
      uStack_2988 = uStack_12d8;
      uStack_2990 = uStack_12e0;
      uStack_2978 = uStack_12c8;
      uStack_2980 = uStack_12d0;
      uStack_2968 = uStack_12b8;
      uStack_2970 = uStack_12c0;
      uStack_2958 = uStack_12a8;
      uStack_2960 = uStack_12b0;
      uStack_29c8 = uStack_1318;
      uStack_29d0 = uStack_1320;
      uStack_29b8 = uStack_1308;
      uStack_29c0 = uStack_1310;
      uStack_29a8 = uStack_12f8;
      uStack_29b0 = uStack_1300;
      uStack_2998 = uStack_12e8;
      uStack_29a0 = uStack_12f0;
      *(undefined8 *)(lVar9 + -0x30) = 0;
      *(undefined8 *)(lVar9 + -0x28) = 0;
      *(undefined2 *)(lVar9 + -8) = 0;
      *(undefined8 *)(lVar9 + -0x18) = 0;
      *(undefined8 *)(lVar9 + -0x10) = 3;
      *(undefined8 *)(lVar9 + -0x20) = 1;
      *(undefined1 *)(lVar9 + -0x38) = 0;
      *(undefined8 *)(lVar9 + -0x48) = 1;
      *(undefined8 *)(lVar9 + -0x40) = 0;
      *(undefined8 **)(lVar9 + -0x58) = &uStack_bf0;
      *(undefined8 **)(lVar9 + -0x50) = &uStack_29d0;
      *(undefined2 *)(lVar9 + -0x60) = 0x202;
      func_0x000104220e6c(&puStack_7140,uVar8,auStack_2420,&uStack_dd0,auStack_1938,1,0,1,0);
      func_0x00010178e4a0(&puStack_7140);
      func_0x000107c610b4(&uStack_8910,&puStack_7140,0xab2);
    }
    func_0x000107c610b4(apuStack_a0e0,&uStack_8910,0xab2);
    func_0x00010178e4a4(apuStack_a0e0);
    func_0x000107c610b4(auStack_b28,apuStack_a0e0,0xab2);
    uStack_1318 = 0;
    uStack_1320 = 0;
    uStack_1308 = 0;
    uStack_1310 = 0;
    uStack_1300 = 0;
    *(undefined8 *)(lVar9 + -0x60) = 0;
    *(undefined8 *)(lVar9 + -0x58) = 0;
    *(undefined8 *)(lVar9 + -0x18) = 0;
    *(undefined8 **)(lVar9 + -0x10) = &uStack_1320;
    *(undefined1 *)(lVar9 + -0x1e) = 0;
    *(undefined2 *)(lVar9 + -0x20) = 0;
    *(undefined8 *)(lVar9 + -0x28) = 0;
    *(undefined2 *)(lVar9 + -0x30) = 0x200;
    *(undefined1 **)(lVar9 + -0x40) = auStack_b28;
    *(undefined8 *)(lVar9 + -0x38) = 0;
    *(undefined1 *)(lVar9 + -0x48) = 0;
    *(undefined8 *)(lVar9 + -0x50) = 0;
    func_0x0001042687a4(&puStack_7140,0,0,0,0,0,0,0,0,0,0);
    func_0x00010178e4a8(&puStack_7140);
    func_0x00010205f464(auStack_4e98,0x112dcbc78,&UNK_10d98e350);
    func_0x000107c610b4(auStack_4e98,&puStack_7140,0xb78);
  }
  if (lStack_a6e8 == 0) goto LAB_10205e87c;
  func_0x000107c30c94();
  puVar1 = PTR___sypN_11034f1a8;
  lVar3 = *(long *)(alStack_a700[1] + _DAT_11306b3e0);
  if (lVar3 == 0) {
LAB_10205e6c8:
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
  }
  else {
    puStack_7140 = (undefined *)0x0;
    func_0x000107c61174();
    func_0x000107c5f9e4();
    func_0x000107c61170(lVar3);
    puVar4 = puStack_7140;
    if (puStack_7140 == (undefined *)0x0) goto LAB_10205e6c8;
  }
  uStack_8910 = 0xd000000000000013;
  lStack_8908 = -0x7ffffffef1043710;
  puStack_a0e8 = puVar4;
  func_0x000107c602d4(&puStack_7140,&uStack_8910,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  lVar3 = 0;
  func_0x0001002ed07c();
  apuStack_a0e0[0] = puVar6;
  lStack_a0c8 = lVar3;
  if (lVar3 == 0) {
    func_0x00010205f464(apuStack_a0e0,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&uStack_8910,&puStack_7140);
    func_0x0001007bbff0(&puStack_7140);
    func_0x00010205f464(&uStack_8910,0x112d387f8,&UNK_10d902650);
    puVar4 = puStack_a0e8;
  }
  else {
    func_0x000100102924(apuStack_a0e0,&uStack_8910);
    puVar6 = puVar4;
    func_0x000107c61558(puVar4);
    apuStack_a0e0[0] = puVar4;
    FUN_10192c094(&uStack_8910,&puStack_7140,puVar6);
    func_0x0001007bbff0(&puStack_7140);
    puVar4 = apuStack_a0e0[0];
  }
  uStack_1968 = uStack_4188;
  puVar6 = puVar4;
  func_0x000107c5f9dc(puVar4,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(puVar4);
  func_0x00010205f464(&uStack_1968,0x112dce260,&UNK_10d990480);
  puStack_5958 = puVar6;
LAB_10205e87c:
  func_0x000107c610b4(&uStack_8910,auStack_5970,0x17d0);
  func_0x000107c610b4(&puStack_7140,lVar9 + 0x18,0x17d0);
  FUN_101897da8(&uStack_8910,apuStack_a0e0);
  func_0x000101897de4(&puStack_7140);
  func_0x000107c610b4(lVar9 + 0x18,&uStack_8910,0x17d0);
  func_0x00010205f420(lVar9,lVar7,&SUB_10423cab0);
  func_0x000107c610f8(alStack_a700[2]);
  func_0x0001042b0f38(lVar7);
  func_0x000101897de4(auStack_5970);
  func_0x00010205f4a4(lVar9,&SUB_10423cab0);
  return lVar7;
}



/* Entry: 10205ed00; end: 10205ede7;  */

void FUN_10205ed00(undefined8 *param_1,undefined1 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_118 [68];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined2 uStack_46;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  uStack_a0 = *(ulong *)(unaff_x20 + 0x18);
  uStack_98 = *(ulong *)(unaff_x20 + 0x20);
  if (-1 < (long)(uStack_98 | uStack_a0)) {
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_c8 = (undefined4)*(undefined8 *)(unaff_x20 + 0x40);
    uStack_c4 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x40) >> 0x20);
    uStack_d0 = (undefined4)*(undefined8 *)(unaff_x20 + 0x38);
    uStack_cc = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x38) >> 0x20);
    uStack_3c = CONCAT44(uStack_c8,uStack_cc);
    uStack_44 = CONCAT44(uStack_d0,uStack_d4);
    uStack_7c = uStack_cc;
    uStack_78 = uStack_c8;
    uStack_84 = uStack_d4;
    uStack_80 = uStack_d0;
    uStack_87 = *(undefined1 *)(unaff_x20 + 0x30);
    uStack_90 = 0;
    uStack_88 = 1;
    uStack_74 = uStack_c4;
    uStack_86 = 0x200;
    uStack_50 = 0;
    uStack_48 = 1;
    uStack_46 = 0x200;
    uStack_34 = uStack_c4;
    uStack_b0 = param_2;
    uStack_a8 = param_3;
    auStack_70[0] = param_2;
    uStack_68 = param_3;
    uStack_60 = uStack_a0;
    uStack_58 = uStack_98;
    uStack_47 = uStack_87;
    func_0x00010205f4e0(&uStack_c0,auStack_118,0x112d35ff8,&UNK_10d900cd0);
    FUN_10189a634(&uStack_b0,auStack_118);
    func_0x00010189a670(auStack_70);
    param_1[1] = uStack_a8;
    *param_1 = CONCAT71(uStack_af,uStack_b0);
    param_1[3] = uStack_98;
    param_1[2] = uStack_a0;
    param_1[5] = CONCAT44(uStack_84,CONCAT22(uStack_86,CONCAT11(uStack_87,uStack_88)));
    param_1[4] = uStack_90;
    param_1[7] = CONCAT44(uStack_74,uStack_78);
    param_1[6] = CONCAT44(uStack_7c,uStack_80);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10205ede8);
  (*pcVar1)();
}



/* Entry: 10205ede8; end: 10205f353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10205ede8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long alStack_8dd0 [14];
  long alStack_8d60 [2];
  undefined *apuStack_8d50 [3];
  long lStack_8d38;
  undefined8 uStack_7580;
  long alStack_7578 [761];
  undefined1 auStack_5db0 [40];
  undefined *puStack_5d88;
  undefined8 uStack_5d80;
  undefined8 uStack_5d78;
  undefined *puStack_5d68;
  undefined1 auStack_45b0 [24];
  undefined8 uStack_4598;
  undefined8 uStack_2de0;
  undefined1 auStack_2dd8 [2744];
  undefined1 auStack_2320 [2936];
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined1 auStack_16a0 [2744];
  undefined1 auStack_be8 [2952];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  alStack_8d60[1] = param_1;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar11 = (long)alStack_8d60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)(lVar11 - extraout_x12);
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar14 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar12 = (undefined8 *)((long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eec4(puVar12);
  func_0x000107c5eeac();
  puVar4 = puVar12;
  alStack_8d60[0] = lVar3;
  (**(code **)(lVar14 + 8))(puVar12,lVar2);
  func_0x00010420d12c();
  plVar5 = (long *)*puVar4;
  func_0x000107c61174();
  plVar6 = plVar5;
  func_0x00010420d1dc();
  lVar2 = *plVar6;
  func_0x000107c61174();
  lVar3 = lVar2;
  func_0x00010420d350();
  func_0x000107c61170(plVar5);
  func_0x000107c61170(lVar2);
  func_0x0001018a91f0(auStack_16a0);
  func_0x000107c610b4(auStack_2dd8,auStack_16a0,0xab2);
  FUN_10189b438(auStack_be8);
  func_0x000107c610b4(auStack_2320,auStack_be8,0xb78);
  uStack_17a0 = 0;
  uStack_17a8 = 0;
  uStack_1798 = 1;
  uStack_1788 = 0;
  uStack_1790 = 0;
  uStack_1778 = 0;
  uStack_1780 = 0;
  uStack_1768 = 0;
  uStack_1770 = 0;
  uStack_1758 = 0;
  uStack_1760 = 0;
  uStack_1750 = 0;
  uStack_1748 = 1;
  uStack_1738 = 0;
  uStack_1740 = 0;
  uStack_1728 = 0;
  uStack_1730 = 0;
  uStack_1718 = 0;
  uStack_1720 = 0;
  uStack_1708 = 0;
  uStack_1710 = 0;
  uStack_16f8 = 0;
  uStack_1700 = 0;
  uStack_16e8 = 0;
  uStack_16f0 = 0;
  uStack_16e0 = 1;
  uStack_16c8 = 0;
  uStack_16d0 = 0;
  uStack_16c0 = 0;
  uStack_16b8 = 1;
  uStack_16a8 = 0;
  uStack_16b0 = 0;
  puVar12[-1] = &uStack_16d0;
  puVar12[-2] = 0;
  puVar12[-3] = 0;
  *(undefined1 *)(puVar12 + -4) = 0;
  puVar12[-5] = &uStack_1710;
  *(undefined1 *)(puVar12 + -6) = 0;
  puVar12[-7] = &uStack_1740;
  *(undefined2 *)(puVar12 + -8) = 0;
  puVar12[-10] = 0;
  puVar12[-9] = 1;
  puVar12[-0xb] = 0;
  puVar12[-0xc] = 0;
  puVar12[-0xe] = 0;
  puVar12[-0xd] = &uStack_1780;
  func_0x00010422af04(auStack_45b0,0,0,0,0,0,0x17,10,0,0,auStack_2dd8,auStack_2320,&uStack_17a8,2);
  func_0x000107c610b4(&uStack_5d80,auStack_45b0,0x17d0);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_11308cae8);
  uVar7 = uVar15;
  func_0x000107c30b00();
  uStack_5d78 = 0x16;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_5d80 = uVar7;
  func_0x000100dfa3f0();
  uStack_7580 = 0xd000000000000013;
  alStack_7578[0] = 0x800000010efbc8f0;
  puStack_5d88 = puVar8;
  func_0x000107c602d4(auStack_5db0,&uStack_7580,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  lVar2 = 0;
  func_0x0001002ed07c();
  apuStack_8d50[0] = puVar9;
  lStack_8d38 = lVar2;
  if (lVar2 == 0) {
    func_0x00010205f464(apuStack_8d50,0x112d387f8,&UNK_10d902650);
    FUN_10192bcf8(&uStack_7580,auStack_5db0);
    func_0x0001007bbff0(auStack_5db0);
    func_0x00010205f464(&uStack_7580,0x112d387f8,&UNK_10d902650);
    puVar9 = puStack_5d88;
  }
  else {
    func_0x000100102924(apuStack_8d50,&uStack_7580);
    puVar9 = puVar8;
    func_0x000107c61558(puVar8);
    apuStack_8d50[0] = puVar8;
    FUN_10192c094(&uStack_7580,auStack_5db0,puVar9);
    func_0x0001007bbff0(auStack_5db0);
    puVar9 = apuStack_8d50[0];
  }
  uStack_2de0 = uStack_4598;
  puVar8 = puVar9;
  func_0x000107c5f9dc(puVar9,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  uVar7 = 0x112dce260;
  func_0x00010205f464(&uStack_2de0,0x112dce260,&UNK_10d990480);
  puStack_5d68 = puVar8;
  func_0x000107c30adc();
  func_0x000107c61180();
  uVar10 = uVar15;
  func_0x000107c5faec();
  func_0x000107c61170(uVar15);
  func_0x000107c610b4(&uStack_7580,&uStack_5d80,0x17d0);
  func_0x00010205f420(alStack_8d60[1],(long)puVar13 + (long)*(int *)(lVar1 + 0x30),&SUB_100b91d00);
  uVar15 = *(undefined8 *)(lVar3 + _DAT_113069750);
  *puVar13 = uVar10;
  puVar13[1] = uVar7;
  *(undefined1 *)(puVar13 + 2) = 0;
  func_0x000107c610b4(puVar13 + 3,&uStack_5d80,0x17d0);
  puVar13[0x2fd] = alStack_8d60[0];
  puVar13[0x2fe] = param_2;
  puVar13[0x2ff] = 0;
  puVar13[0x301] = 0;
  puVar13[0x300] = 0;
  *(undefined1 *)(puVar13 + 0x302) = 1;
  *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar1 + 0x34)) = 0;
  *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar1 + 0x38)) = uVar15;
  func_0x00010205f420(puVar13,lVar11,&SUB_10423cab0);
  func_0x0001042b18d4(0);
  func_0x000107c610f8();
  FUN_101897da8(&uStack_7580,apuStack_8d50);
  func_0x0001042b0f38(lVar11);
  func_0x000107c61170(lVar3);
  func_0x00010205f4a4(puVar13,&SUB_10423cab0);
  func_0x000107c6142c(puVar9);
  func_0x000101897de4(&uStack_5d80);
  return lVar11;
}



/* Entry: 10205f354; end: 10205f36b;  */

undefined8 * FUN_10205f354(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10205f36c; end: 10205f527;  */

undefined8 FUN_10205f36c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103e07278();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10205f528; end: 10205f553;  */

void FUN_10205f528(long param_1,long param_2)

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



/* Entry: 10205f554; end: 10205f5cb;  */

long FUN_10205f554(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_40 = 0xd000000000000037;
  uStack_38 = 0x800000010f05e460;
  uStack_30 = 2;
  (**(code **)(param_2 + 8))
            (&lStack_28,&uStack_40,&UNK_110738448,&PTR_DAT_11304a4e0,param_1,param_2);
  lVar1 = 2;
  if (-1 < lStack_28) {
    lVar1 = lStack_28;
  }
  return lVar1;
}



/* Entry: 10205f5cc; end: 10205f747;  */

void FUN_10205f5cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar4 = &UNK_1104c2188;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_1104c2188,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_102061858;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101218f4c;
  puStack_68 = &UNK_1104c2218;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c3e924(param_1);
  func_0x000107c61170(param_1);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c613fc(&UNK_1104c2188,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_60 = (code *)0x102061860;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100c1de60;
  puStack_68 = &UNK_1104c2240;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c5c320(uVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c3e924(uVar6);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 10205f748; end: 10205f7e3;  */

void FUN_10205f748(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_48 [3];
  
  alStack_48[0] = 0;
  uVar2 = 0;
  FUN_1020618e4(0);
  func_0x000107c5fc50(param_1,alStack_48,uVar2);
  lVar1 = alStack_48[0];
  if (alStack_48[0] != 0) {
    func_0x000107c61428(param_2 + 0x10,alStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      func_0x000107c6142c(lVar1);
    }
    else {
      FUN_10205f7e4(lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c61574(param_2);
    }
  }
  return;
}



/* Entry: 10205f7e4; end: 10205fe17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10205f7e4(double param_1,ulong param_2)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 *puVar20;
  ulong uVar21;
  double dVar22;
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  
  lVar3 = 0x112e541b8;
  func_0x0001000285a8(0x112e541b8,&UNK_10da55628);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = auStack_c0 + -extraout_x8;
  lVar3 = 0;
  func_0x000100b92084();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar20 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c614f0(uVar15);
  uVar4 = 0xd000000000000027;
  func_0x00010403c628(0xd000000000000027,0x800000010f05e3d0,uVar15,uVar16);
  if ((uVar4 & 1) != 0) {
    if (param_2 >> 0x3e == 0) {
      uVar4 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar4 = param_2;
      }
      func_0x000107c60480();
    }
    if (uVar4 != 0) {
      if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10205fe18);
        (*pcVar2)();
      }
      uVar21 = 0;
      uStack_b8 = *(undefined8 *)(unaff_x20 + 0x70);
      lVar19 = lVar14;
      lStack_b0 = lVar14;
      puStack_a8 = puVar20;
      do {
        if ((param_2 & 0xc000000000000001) == 0) {
          uVar5 = *(ulong *)(param_2 + uVar21 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar21;
          FUN_102061928(uVar21,param_2);
        }
        uVar6 = uVar5;
        func_0x000107c3d458();
        func_0x000107c61180();
        if (uVar6 == 0) {
LAB_10205f920:
          func_0x000107c61170(uVar5);
        }
        else {
          uVar18 = *(ulong *)(uVar6 + _DAT_113815208);
          if (uVar18 == 0) {
            func_0x000107c61170(uVar6);
            goto LAB_10205f920;
          }
          uVar17 = uVar18 & 0xffffffffffffff8;
          if (uVar18 >> 0x3e == 0) {
            if (*(long *)(uVar17 + 0x10) == 0) goto LAB_10205fd98;
LAB_10205f994:
            if ((uVar18 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar17 + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10205fdd8);
                (*pcVar2)();
              }
              uVar15 = *(undefined8 *)(uVar18 + 0x20);
              func_0x000107c61174();
            }
            else {
              func_0x000107c61434(uVar18);
              uVar15 = 0;
              func_0x000100e471e4(0,uVar18);
              func_0x000107c6142c(uVar18);
            }
            func_0x0001030be898(puVar20,uVar6,uVar15,5);
            puVar7 = puVar20;
            (**(code **)(lVar12 + 0x30))(puVar20,1,lVar3);
            if ((int)puVar7 == 1) {
              func_0x000107c61170(uVar6);
              func_0x000107c61170(uVar5);
              func_0x000107c61170(uVar15);
              FUN_102061730(puVar20);
            }
            else {
              func_0x000102061778(puVar20,lVar19);
              uVar18 = uVar5;
              func_0x000107c3f740();
              func_0x000107c61180();
              dVar22 = param_1;
              if (uVar18 == 0) {
LAB_10205fc38:
                if (*(long *)(unaff_x20 + 0x68) != 0) {
                  uVar18 = *(ulong *)(uVar6 + _DAT_11308f130);
                  puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x68) + _DAT_11308f130);
                  if (((uVar18 == *puVar1) && (((ulong *)(uVar6 + _DAT_11308f130))[1] == puVar1[1]))
                     || (func_0x000107c605b8(), (uVar18 & 1) != 0)) {
                    func_0x000107c61170(uVar15);
                    func_0x000107c61170(uVar5);
                    uVar5 = uVar6;
                    goto LAB_10205fd74;
                  }
                }
                puVar9 = &UNK_1104c2188;
                func_0x000107c613fc(&UNK_1104c2188,0x18,7);
                func_0x000107c61644(puVar9 + 0x10,unaff_x20);
                func_0x0001018eb36c(lVar19,lVar13);
                uVar18 = (ulong)*(byte *)(lVar12 + 0x50);
                uVar17 = uVar18 + 0x18 & (uVar18 ^ 0xffffffffffffffff);
                puVar10 = &UNK_1104c22a0;
                func_0x000107c613fc(&UNK_1104c22a0,uVar17 + extraout_x13,uVar18 | 7);
                lVar19 = lStack_b0;
                *(undefined **)(puVar10 + 0x10) = puVar9;
                func_0x000102061778(lVar13,puVar10 + uVar17);
                uVar16 = 0x112d518a8;
                func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
                *(undefined8 *)(lVar14 + -0x10) = uVar16;
                uVar16 = 0;
                func_0x0001001ca524(0,0,8,4,0,0,&UNK_10da55660,puVar10);
                func_0x000107c61170(uVar6);
                func_0x000107c61170(uVar15);
                puVar20 = puStack_a8;
                func_0x000107c61574(puVar10);
                func_0x000107c61574(uVar16);
              }
              else {
                func_0x000107c4223c();
                dVar22 = param_1;
                func_0x000107c61170(uVar18);
                if (param_1 <= 0.0) goto LAB_10205fc38;
                puVar9 = &UNK_1104c2188;
                func_0x000107c613fc(&UNK_1104c2188,0x18,7);
                func_0x000107c61644(puVar9 + 0x10,unaff_x20);
                func_0x0001018eb36c(lVar19,lVar13);
                uVar18 = (ulong)*(byte *)(lVar12 + 0x50);
                uVar17 = uVar18 + 0x18 & (uVar18 ^ 0xffffffffffffffff);
                puVar10 = &UNK_1104c22c8;
                func_0x000107c613fc(&UNK_1104c22c8,uVar17 + extraout_x13,uVar18 | 7);
                *(undefined **)(puVar10 + 0x10) = puVar9;
                func_0x000102061778(lVar13,puVar10 + uVar17);
                uVar16 = 0x112d518a8;
                func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
                *(undefined8 *)(lVar14 + -0x10) = uVar16;
                uVar8 = 0;
                func_0x0001001ca524(0,0,8,4,0,0,&UNK_10da55670,puVar10);
                func_0x000107c61574(puVar10);
                func_0x000107c61574(uVar8);
                lVar19 = *(long *)(unaff_x20 + 0x68);
                if (lVar19 != 0) {
                  puVar1 = (ulong *)(uVar6 + _DAT_11308f130);
                  uVar18 = *puVar1;
                  if (((uVar18 == *(ulong *)(lVar19 + _DAT_11308f130)) &&
                      (puVar1[1] == ((ulong *)(lVar19 + _DAT_11308f130))[1])) ||
                     (func_0x000107c605b8(), (uVar18 & 1) != 0)) {
                    *(undefined8 *)(unaff_x20 + 0x68) = 0;
                    func_0x000107c61170(lVar19);
                    uVar18 = *puVar1;
                    func_0x000107c5fadc(uVar18,puVar1[1]);
                    func_0x000107c4ff88(uStack_b8);
                    func_0x000107c61170(uVar18);
                  }
                }
                puVar9 = &UNK_1104c2188;
                func_0x000107c613fc(&UNK_1104c2188,0x18,7);
                func_0x000107c61644(puVar9 + 0x10,unaff_x20);
                puVar10 = &UNK_1104c22f0;
                func_0x000107c613fc(&UNK_1104c22f0,0x28,7);
                *(undefined **)(puVar10 + 0x10) = puVar9;
                *(ulong *)(puVar10 + 0x18) = uVar6;
                *(undefined8 *)(puVar10 + 0x20) = uVar15;
                func_0x000107c61174(uVar6);
                func_0x000107c61174(uVar15);
                *(undefined8 *)(lVar14 + -0x10) = uVar16;
                uVar16 = 0xc;
                func_0x0001001ca524(0xc,0,8,4,0,0,&UNK_10da55680,puVar10);
                func_0x000107c61170(uVar6);
                func_0x000107c61170(uVar15);
                func_0x000107c61574(puVar10);
                func_0x000107c61574(uVar16);
                lVar19 = lStack_b0;
                puVar20 = puStack_a8;
              }
LAB_10205fd74:
              func_0x000107c61170(uVar5);
              FUN_1018f25e0(lVar19);
              param_1 = dVar22;
            }
          }
          else {
            uVar11 = uVar18;
            if (-1 < (long)uVar18) {
              uVar11 = uVar17;
            }
            func_0x000107c60480();
            if (uVar11 != 0) goto LAB_10205f994;
LAB_10205fd98:
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar5);
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar4 != uVar21);
    }
  }
  return;
}



/* Entry: 10205fe18; end: 10205fe6b;  */

void FUN_10205fe18(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10205fe6c();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10205fe6c; end: 10206010b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10205fe6c(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 auStack_70 [2];
  
  lVar2 = 0x112e541b8;
  func_0x0001000285a8(0x112e541b8,&UNK_10da55628);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = 0;
  func_0x000100b92084();
  lVar15 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar12 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - extraout_x12;
  func_0x000107c4fe7c(*(undefined8 *)(unaff_x20 + 0x70));
  lVar9 = *(long *)(unaff_x20 + 0x68);
  if ((lVar9 != 0) && (uVar13 = *(ulong *)(lVar9 + _DAT_113815208), uVar13 != 0)) {
    uVar16 = uVar13 & 0xffffffffffffff8;
    if (uVar13 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar3 = uVar13;
      if (-1 < (long)uVar13) {
        uVar3 = uVar16;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar16 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10206010c);
          (*pcVar1)();
        }
        uVar14 = *(undefined8 *)(uVar13 + 0x20);
        func_0x000107c61174(lVar9);
        func_0x000107c61174(uVar14);
      }
      else {
        func_0x000107c61174(lVar9);
        func_0x000107c61434(uVar13);
        uVar14 = 0;
        func_0x000100e471e4(0,uVar13);
        func_0x000107c6142c(uVar13);
      }
      func_0x0001030be898(puVar12,lVar9,uVar14,5);
      puVar4 = puVar12;
      (**(code **)(lVar15 + 0x30))(puVar12,1,lVar2);
      if ((int)puVar4 == 1) {
        func_0x000107c61170(lVar9);
        func_0x000107c61170(uVar14);
        FUN_102061730(puVar12);
      }
      else {
        func_0x000102061778(puVar12,lVar8);
        puVar5 = &UNK_1104c2188;
        func_0x000107c613fc(&UNK_1104c2188,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        func_0x0001018eb36c(lVar8,lVar10);
        uVar13 = (ulong)*(byte *)(lVar15 + 0x50);
        uVar16 = uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff);
        puVar6 = &UNK_1104c2278;
        func_0x000107c613fc(&UNK_1104c2278,uVar16 + lVar11,uVar13 | 7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        func_0x000102061778(lVar10,puVar6 + uVar16);
        uVar7 = 0x112d518a8;
        func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
        *(undefined8 *)(lVar8 + -0x10) = uVar7;
        uVar7 = 0;
        func_0x0001001ca524(0,0,8,4,0,0,&UNK_10da55650,puVar6);
        func_0x000107c61170(lVar9);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(uVar7);
        func_0x000107c61170(uVar14);
        FUN_1018f25e0(lVar8);
      }
    }
  }
  return;
}



/* Entry: 10206010c; end: 102060157;  */

void FUN_10206010c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102060158; end: 102060173;  */

void FUN_102060158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102060174,0,0);
  return;
}



/* Entry: 102060174; end: 10206026b;  */

void FUN_102060174(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x0001003ffe10(lVar2 + 0x10,unaff_x22 + 0x10);
    func_0x000107c61574(lVar2);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x28);
    *(long *)(unaff_x22 + 0x70) = lVar2;
    puVar1 = (undefined8 *)(unaff_x22 + 0x10);
    func_0x0001000a8868();
    *(undefined8 **)(unaff_x22 + 0x78) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(lVar2 + 8);
    func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x102060224,*puVar1,0);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x50) = 1;
                    /* WARNING: Could not recover jumptable at 0x000102060220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10206026c; end: 102060287;  */

void FUN_10206026c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102060288,0,0);
  return;
}



/* Entry: 102060288; end: 102060337;  */

void FUN_102060288(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x48) = lVar3;
  if (lVar3 != 0) {
    uVar1 = 0;
    func_0x000107c5fcec();
    uVar2 = uVar1;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102060338,uVar1,uVar2);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x000102060334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102060338; end: 102060393;  */

void FUN_102060338(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  FUN_1020603a4(uVar2,uVar3);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102060394,0,0);
  return;
}



/* Entry: 102060394; end: 1020603a3;  */

void FUN_102060394(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001020603a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020603a4; end: 10206064b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020603a4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  char cStack_61;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar8 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c614f0(uVar7);
  puStack_98 = (undefined *)0xd000000000000034;
  uStack_90 = 0x800000010f05e400;
  puStack_88 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff00);
  (**(code **)(lVar8 + 8))(&cStack_61,&puStack_98,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar7,lVar8);
  if ((cStack_61 == '\x01') &&
     (*(int *)(param_2 + _DAT_11308f1e0) == 6 || *(int *)(param_2 + _DAT_11308f1e0) == 1)) {
    lVar8 = *(long *)(unaff_x20 + 0x70);
    uVar7 = *(undefined8 *)(param_1 + _DAT_11308f130);
    func_0x000107c5fadc(uVar7,((undefined8 *)(param_1 + _DAT_11308f130))[1]);
    func_0x000107c4d9d8();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    if (lVar8 == 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
      func_0x000107c3e2e8(uVar7);
      func_0x000107c61180();
      puVar5 = &UNK_1104c2188;
      puVar2 = puVar5;
      func_0x000107c613fc(&UNK_1104c2188,0x18,7);
      func_0x000107c61644(puVar2 + 0x10);
      puVar3 = &UNK_1104c2318;
      func_0x000107c613fc(&UNK_1104c2318,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(long *)(puVar3 + 0x18) = param_1;
      puVar2 = &UNK_1104c2340;
      func_0x000107c613fc(&UNK_1104c2340,0x20,7);
      *(code **)(puVar2 + 0x10) = FUN_102061ea8;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_78 = FUN_102061eb0;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = (undefined *)0x102062118;
      puStack_80 = &UNK_1104c2358;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar4);
      puVar2 = puStack_70;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar2);
      func_0x000107c613fc(&UNK_1104c2188,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      puVar2 = &UNK_1104c2390;
      func_0x000107c613fc(&UNK_1104c2390,0x20,7);
      *(code **)(puVar2 + 0x10) = FUN_102061ed0;
      *(undefined **)(puVar2 + 0x18) = puVar5;
      pcStack_78 = (code *)0x1020620f0;
      puStack_98 = puVar1;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100e27b38;
      puStack_80 = &UNK_1104c23a8;
      ppuVar6 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_70);
      func_0x000107c4c754(uVar7);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(uVar7);
    }
    else {
      func_0x000107c615e8(lVar8);
    }
  }
  return;
}



/* Entry: 10206064c; end: 102060667;  */

void FUN_10206064c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102060668,0,0);
  return;
}



/* Entry: 102060668; end: 102060797;  */

void FUN_102060668(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x0001003ffe10(lVar2 + 0x10,unaff_x22 + 0x10);
    func_0x000107c61574(lVar2);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x28);
    *(long *)(unaff_x22 + 0x70) = lVar2;
    puVar1 = (undefined8 *)(unaff_x22 + 0x10);
    func_0x0001000a8868();
    *(undefined8 **)(unaff_x22 + 0x78) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(lVar2 + 0x10);
    func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x102060718,*puVar1,0);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x50) = 1;
                    /* WARNING: Could not recover jumptable at 0x000102060714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102060798; end: 1020609d7;  */

void FUN_102060798(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  ppuVar5 = &puStack_b0;
  ppuVar6 = &puStack_b0;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174();
      lVar2 = param_1;
      func_0x000104191a9c();
      if ((int)lVar2 == 9) {
        func_0x000107c61574(param_2);
        lVar2 = param_1;
      }
      else {
        func_0x0001000d224c(&lStack_80);
        lVar2 = lStack_80;
        func_0x000107c4ed74(lStack_80);
        func_0x000107c61180();
        func_0x000107c615e8(lStack_80);
        puVar3 = &UNK_1104c2188;
        func_0x000107c613fc(&UNK_1104c2188,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,param_2);
        puVar4 = &UNK_1104c23e0;
        func_0x000107c613fc(&UNK_1104c23e0,0x20,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined8 *)(puVar4 + 0x18) = param_3;
        puVar3 = &UNK_1104c2408;
        func_0x000107c613fc(&UNK_1104c2408,0x20,7);
        *(code **)(puVar3 + 0x10) = FUN_102061f04;
        *(undefined **)(puVar3 + 0x18) = puVar4;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x1020620f4;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        pcStack_a0 = FUN_102060ab0;
        puStack_98 = &UNK_1104c2420;
        puStack_88 = puVar3;
        func_0x000107c60bc4(&puStack_b0);
        puVar3 = puStack_88;
        func_0x000107c61174(param_3);
        func_0x000107c61574(puVar3);
        puVar3 = &UNK_1104c2458;
        func_0x000107c613fc(&UNK_1104c2458,0x20,7);
        *(undefined8 *)(puVar3 + 0x10) = 0x102061f0c;
        *(long *)(puVar3 + 0x18) = param_2;
        uStack_90 = 0x1020620f8;
        puStack_b0 = puVar1;
        uStack_a8 = 0x42000000;
        pcStack_a0 = (code *)&UNK_100e27b38;
        puStack_98 = &UNK_1104c2470;
        puStack_88 = puVar3;
        func_0x000107c60bc4(&puStack_b0);
        puVar3 = puStack_88;
        func_0x000107c6157c(param_2);
        func_0x000107c61574(puVar3);
        func_0x000107c4c754(lVar2);
        func_0x000107c61574(param_2);
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61574(param_2);
        func_0x000107c61574(puVar4);
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1020609d8; end: 102060aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020609d8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x70);
      uVar2 = *(undefined8 *)(param_3 + _DAT_11308f130);
      uVar1 = ((undefined8 *)(param_3 + _DAT_11308f130))[1];
      func_0x000107c615f0(param_1);
      func_0x000107c61174(uVar3);
      func_0x000107c5fadc(uVar2,uVar1);
      func_0x000107c56bcc(uVar3);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}


