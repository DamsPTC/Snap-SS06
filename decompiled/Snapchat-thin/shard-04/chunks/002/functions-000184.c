/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032a7390; end: 1032a76ef;  */

/* WARNING: Possible PIC construction at 0x0001032a75bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a75cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a75dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a75f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a7608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a7618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a7634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a76b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a76c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a7694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a7674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a7664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a7678) */
/* WARNING: Removing unreachable block (ram,0x0001032a7698) */
/* WARNING: Removing unreachable block (ram,0x0001032a76c8) */
/* WARNING: Removing unreachable block (ram,0x0001032a76b8) */
/* WARNING: Removing unreachable block (ram,0x0001032a761c) */
/* WARNING: Removing unreachable block (ram,0x0001032a760c) */
/* WARNING: Removing unreachable block (ram,0x0001032a75fc) */
/* WARNING: Removing unreachable block (ram,0x0001032a75e0) */
/* WARNING: Removing unreachable block (ram,0x0001032a75d0) */
/* WARNING: Removing unreachable block (ram,0x0001032a75c0) */
/* WARNING: Removing unreachable block (ram,0x0001032a7668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7390(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50b6c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50ba4();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c50d84();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c5e1d0();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          func_0x000107c43a2c();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar6 = 0;
            FUN_1032a65f4();
            lVar4 = lVar6;
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            lVar5 = lVar3;
            FUN_1032a686c();
            if (lVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1032a76f0);
              (*pcVar2)();
            }
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uStack_68);
            *(long *)(lVar4 + _DAT_112f51a90) = lVar5;
            *(long *)(lVar4 + _DAT_112f51a98) = unaff_x20;
            lStack_80 = lVar4;
            lStack_78 = lVar6;
            func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1032a76f0; end: 1032a7717; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032a76f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032a7390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032a7718; end: 1032a775b; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032a7718(undefined8 param_1)

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



/* Entry: 1032a775c; end: 1032a7aa3;  */

void FUN_1032a775c(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0fad6c0)) ||
       (func_0x000107c605b8(0xd000000000000018,0x800000010f052940,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58114();
    }
    else {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef0fad6a0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010f052960,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd00000000000001b;
          if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef0fac020)) ||
             (func_0x000107c605b8(0xd00000000000001b,0x800000010f053fe0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5832c();
          }
          else {
            uVar2 = 0xd000000000000017;
            if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ed990)) ||
               (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a68c();
            }
            else {
              uVar2 = 0xd000000000000035;
              if (((param_2 != -0x2fffffffffffffcb) || (param_3 != -0x7ffffffef0ec9de0)) &&
                 (func_0x000107c605b8(0xd000000000000035,0x800000010f136220,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "FriendingNearbyFriendsScopeGraphBridge/SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint.swift"
                                    ,100,2,0x43,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a7aa4);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c54c4c();
            }
          }
          goto LAB_1032a77e8;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5814c();
    }
  }
LAB_1032a77e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032a7aa4; end: 1032a7b4f; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032a7aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032a775c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032a7b50; end: 1032a7beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7b50(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f51b80,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f51b88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f51b90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f51b98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f51ba0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f51ba8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f51bb0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a7bec; end: 1032a7c0b; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032a7bec(void)

{
  FUN_1032a7b50();
  return;
}



/* Entry: 1032a7c0c; end: 1032a7c3f;  */

void FUN_1032a7c0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032a7c40; end: 1032a7cc7; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032a7c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a7c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a7cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a7c90) */
/* WARNING: Removing unreachable block (ram,0x0001032a7c70) */
/* WARNING: Removing unreachable block (ram,0x0001032a7cb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7c40(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f51b80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51b88));
  return;
}



/* Entry: 1032a7cc8; end: 1032a7ce7;  */

void FUN_1032a7cc8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c7fc8);
  return;
}



/* Entry: 1032a7ce8; end: 1032a7d2f; -[SCSCFriendingNearbyFriendsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7ce8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51be0;
  func_0x000107c61428(param_1 + _DAT_112f51be0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032a7d30; end: 1032a7d87; -[SCSCFriendingNearbyFriendsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51be0;
  func_0x000107c61428(param_1 + _DAT_112f51be0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032a7d88; end: 1032a7e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7d88(undefined8 param_1,long param_2)

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
    FUN_1032a684c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f51ac8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032a7e60);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f51ad0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f51be8);
    *(long **)(unaff_x20 + _DAT_112f51be8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1032a7e60; end: 1032a7e87; -[SCSCFriendingNearbyFriendsScopedServicesSaberEntryPoint begin] */

void FUN_1032a7e60(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032a7d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032a7e88; end: 1032a7fff;  */

/* WARNING: Possible PIC construction at 0x0001032a7ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a7f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a7ef4) */
/* WARNING: Removing unreachable block (ram,0x0001032a7f8c) */
/* WARNING: Removing unreachable block (ram,0x0001032a7fa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7e88(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f51be8);
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



/* Entry: 1032a8000; end: 1032a8007;  */

void FUN_1032a8000(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032a8008; end: 1032a803b; -[SCSCFriendingNearbyFriendsScopedServicesSaberEntryPoint end] */

void FUN_1032a8008(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032a7e88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032a803c; end: 1032a815b;  */

void FUN_1032a803c(long param_1,long param_2,long param_3)

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
                        "FriendingNearbyFriendsScopeGraphBridge/SCSCFriendingNearbyFriendsScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a815c);
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



/* Entry: 1032a815c; end: 1032a8207; -[SCSCFriendingNearbyFriendsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032a815c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032a803c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032a8208; end: 1032a8267; -[SCSCFriendingNearbyFriendsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a8208(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f51be0,0);
  *(undefined8 *)(param_1 + _DAT_112f51be8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a8268; end: 1032a829b;  */

void FUN_1032a8268(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032a829c; end: 1032a82d3; -[SCSCFriendingNearbyFriendsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a829c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f51be0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51be8));
  return;
}



/* Entry: 1032a82d4; end: 1032a82f3;  */

void FUN_1032a82d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c80b0);
  return;
}



/* Entry: 1032a82f4; end: 1032a835b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a82f4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100387d24();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f51c20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1032a835c; end: 1032a83a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a835c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f51c20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a83a8; end: 1032a8477; -[_TtC34SCFriendingNearbyFriendsScopeProxy37SCFriendingNearbyFriendsScopeServices buildWithUiContainer:scopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a83a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *apuStack_58 [2];
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126acf98;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c49058(puVar1,param_2,param_3,param_4);
  apuStack_58[0] = puVar1;
  func_0x00010008a7c8(&uStack_48,apuStack_58);
  func_0x000100083b20(apuStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_58[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1032a8478; end: 1032a84ab;  */

void FUN_1032a8478(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032a84ac; end: 1032a84db; -[_TtC34SCFriendingNearbyFriendsScopeProxy37SCFriendingNearbyFriendsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a84ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f51c20));
  return;
}



/* Entry: 1032a84dc; end: 1032a85c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a84dc(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032a892c();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f51c70) = uStack_38;
  *(undefined8 *)(lVar2 + _DAT_112f51c78) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar2;
  lStack_40 = param_2;
  func_0x000107c6157c(param_3);
  plVar3 = &lStack_48;
  func_0x000107c61154(plVar3,puVar1);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1032a85c8; end: 1032a85e7;  */

void FUN_1032a85c8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032a85e8; end: 1032a8647; -[_TtC49GamesExplorerDeeplinkScopedFactoryServiceProvider35GamesExplorerDeeplinkScopedServices init] */

void FUN_1032a85e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerDeeplinkScopedFactoryServiceProvider.GamesExplorerDeeplinkScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a8614);
  (*pcVar1)();
}



/* Entry: 1032a8648; end: 1032a867f; -[_TtC49GamesExplorerDeeplinkScopedFactoryServiceProvider35GamesExplorerDeeplinkScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032a8664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a8668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a8648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f51c70));
  return;
}



/* Entry: 1032a8680; end: 1032a86eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a8680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110633850;
  func_0x000107c613fc(&UNK_110633850,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032a89c4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032a86ec; end: 1032a8787;  */

void FUN_1032a86ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110633760;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110633760;
  return;
}



/* Entry: 1032a8788; end: 1032a87bf;  */

void FUN_1032a8788(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032a87c0; end: 1032a87c7;  */

undefined8 FUN_1032a87c0(void)

{
  return 0x1b;
}



/* Entry: 1032a87c8; end: 1032a88fb;  */

void FUN_1032a87c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110633878;
  func_0x000107c613fc(&UNK_110633878,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032a899c;
  func_0x00010058fa64(FUN_1032a899c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032a88fc; end: 1032a892b;  */

undefined ** FUN_1032a88fc(void)

{
  return &PTR_DAT_113066628;
}



/* Entry: 1032a892c; end: 1032a894b;  */

void FUN_1032a892c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8230);
  return;
}



/* Entry: 1032a894c; end: 1032a899b;  */

undefined1  [16] FUN_1032a894c(void)

{
  return ZEXT816(0x1106337b0);
}



/* Entry: 1032a899c; end: 1032a89c3;  */

void FUN_1032a899c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032a89c4; end: 1032a89d7;  */

void FUN_1032a89c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032a89d8; end: 1032a8cbf;  */

void FUN_1032a89d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112f51cf0,&UNK_10dba7930);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  FUN_1032a9014(param_3,param_4,param_5,param_6);
  func_0x000100082720("GamesExplorerDeeplinkScopedLensExplorerSessionLoggingServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_1032a8788;
  func_0x0001000823a8(FUN_1032a8788,0);
  func_0x000100082720("GamesExplorerDeeplinkScopedServicesCleanupRelayServiceProvider",0x3e,2);
  uVar3 = param_3;
  FUN_1032a97a4();
  func_0x000100082720("GamesExplorerDeeplinkScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f51cf8,&UNK_10dba7940);
  puVar4 = &UNK_110633928;
  func_0x000107c613fc(&UNK_110633928,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(code **)(puVar4 + 0x20) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar2);
  uVar8 = 0x1032a8ccc;
  func_0x0001000823a8(0x1032a8ccc,puVar4);
  func_0x000100082720("GamesExplorerDeeplinkScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f51c80,&UNK_10dba76b0);
  func_0x000107c6157c(uVar8);
  uVar5 = 0x1032a8cd8;
  func_0x0001000823a8(0x1032a8cd8,uVar8);
  func_0x000100082720("GamesExplorerDeeplinkScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f51c68,&UNK_10dba76a0);
  puVar4 = &UNK_110633950;
  func_0x000107c613fc(&UNK_110633950,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(param_3);
  uVar6 = 0x1032a8ce0;
  func_0x0001000823a8(0x1032a8ce0,puVar4);
  func_0x000100082720("GamesExplorerDeeplinkScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_110633978;
  func_0x000107c613fc(&UNK_110633978,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(code **)(puVar4 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  pcVar7 = FUN_1032a8d14;
  func_0x0001000823a8(FUN_1032a8d14,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar5);
  func_0x000100082720("GamesExplorerDeeplinkScopeEntryPointProvider",0x2c,2);
  *param_1 = pcVar7;
  return;
}



/* Entry: 1032a8cc0; end: 1032a8ce7;  */

void FUN_1032a8cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f51cf0,&UNK_10dba7930);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  FUN_1032a9014(uVar2,uVar6,uVar5,uVar7);
  func_0x000100082720("GamesExplorerDeeplinkScopedLensExplorerSessionLoggingServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_1032a8788;
  func_0x0001000823a8(FUN_1032a8788,0);
  func_0x000100082720("GamesExplorerDeeplinkScopedServicesCleanupRelayServiceProvider",0x3e,2);
  uVar9 = uVar2;
  FUN_1032a97a4();
  func_0x000100082720("GamesExplorerDeeplinkScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f51cf8,&UNK_10dba7940);
  puVar4 = &UNK_110633928;
  func_0x000107c613fc(&UNK_110633928,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  *(code **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  uVar5 = 0x1032a8ccc;
  func_0x0001000823a8(0x1032a8ccc,puVar4);
  func_0x000100082720("GamesExplorerDeeplinkScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f51c80,&UNK_10dba76b0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1032a8cd8;
  func_0x0001000823a8(0x1032a8cd8,uVar5);
  func_0x000100082720("GamesExplorerDeeplinkScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f51c68,&UNK_10dba76a0);
  puVar4 = &UNK_110633950;
  func_0x000107c613fc(&UNK_110633950,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar2);
  uVar7 = 0x1032a8ce0;
  func_0x0001000823a8(0x1032a8ce0,puVar4);
  func_0x000100082720("GamesExplorerDeeplinkScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_110633978;
  func_0x000107c613fc(&UNK_110633978,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(code **)(puVar4 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar8 = FUN_1032a8d14;
  func_0x0001000823a8(FUN_1032a8d14,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("GamesExplorerDeeplinkScopeEntryPointProvider",0x2c,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1032a8ce8; end: 1032a8d13;  */

void FUN_1032a8ce8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032a8d14; end: 1032a8d1b;  */

void FUN_1032a8d14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110633760;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110633760;
  return;
}



/* Entry: 1032a8d1c; end: 1032a8d57;  */

void FUN_1032a8d1c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1032a8d58();
  func_0x0001000a7f38("GamesExplorerDeeplinkScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 1032a8d58; end: 1032a8eef;  */

void FUN_1032a8d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074ccb8;
  ppuVar4 = &PTR_DAT_113066628;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1106339a0;
  func_0x000107c613fc(&UNK_1106339a0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f51d00;
  func_0x0001000285a8(0x112f51d00,&UNK_10dba7948);
  func_0x0001000a6ee8(&UNK_110633cb8,
                      "GamesExplorerDeeplinkScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_1032a8ef0,puVar2,uVar3,&UNK_110633cb8,&PTR_DAT_112f51e70);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106339c8;
  func_0x000107c613fc(&UNK_1106339c8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106337f0,
                      "GamesExplorerDeeplinkScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_1032a8fd8,puVar2,uVar3,&UNK_1106337f0,&PTR_DAT_112f51c88);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f51d08;
  func_0x0001000285a8(0x112f51d08,&UNK_10dba7950);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1032a8ef0; end: 1032a8f2f;  */

void FUN_1032a8ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032a9928(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("GamesExplorerDeeplinkScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032a8f30; end: 1032a8fd7;  */

void FUN_1032a8f30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106339f0;
  func_0x000107c613fc(&UNK_1106339f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032a900c;
  func_0x0001000823a8(FUN_1032a900c,puVar1);
  func_0x000100082720("GamesExplorerDeeplinkScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032a8fd8; end: 1032a8fdf;  */

void FUN_1032a8fd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106339f0;
  func_0x000107c613fc(&UNK_1106339f0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032a900c;
  func_0x0001000823a8(FUN_1032a900c,puVar3);
  func_0x000100082720("GamesExplorerDeeplinkScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032a8fe0; end: 1032a900b;  */

void FUN_1032a8fe0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032a900c; end: 1032a9013;  */

void FUN_1032a900c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110633878;
  func_0x000107c613fc(&UNK_110633878,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032a899c;
  func_0x00010058fa64(FUN_1032a899c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032a9014; end: 1032a90b7;  */

void FUN_1032a9014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f51d10,&UNK_10dba7960);
  puVar1 = &UNK_110633ac0;
  func_0x000107c613fc(&UNK_110633ac0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1032a90b8,puVar1);
  return;
}



/* Entry: 1032a90b8; end: 1032a91b7;  */

void FUN_1032a90b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126acfa8;
  func_0x000107c61168(PTR_PTR_1126acfa8);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000107c52080(puVar1,param_3,uStack_58,uStack_60,uStack_68,uStack_70,0xb);
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_58);
  puVar2 = PTR_PTR_1126acfb0;
  func_0x000107c610f8();
  func_0x000107c48638();
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1032a91b8; end: 1032a91c7;  */

undefined1  [16] FUN_1032a91b8(void)

{
  return ZEXT816(0x110633ae8);
}



/* Entry: 1032a91c8; end: 1032a924f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032a91c8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1032a96b4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f51d18) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f51d20) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a9250);
  (*pcVar1)();
}



/* Entry: 1032a9250; end: 1032a92af; -[_TtC37GamesExplorerDeeplinkScopeGraphBridge52GamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032a9250(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerDeeplinkScopeGraphBridge.GamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a927c);
  (*pcVar1)();
}



/* Entry: 1032a92b0; end: 1032a92e7; -[_TtC37GamesExplorerDeeplinkScopeGraphBridge52GamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032a92cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a92d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a92b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51d18));
  return;
}



/* Entry: 1032a92e8; end: 1032a930f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a92e8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f51d20),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f51d18));
  return;
}



/* Entry: 1032a9310; end: 1032a932f;  */

void FUN_1032a9310(void)

{
  func_0x000107c61168(&PTR_PTR_1128c82f8);
  return;
}



/* Entry: 1032a9330; end: 1032a9393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032a9330(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f51e68);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032a9394; end: 1032a939b;  */

void FUN_1032a9394(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032a939c; end: 1032a943b;  */

void FUN_1032a939c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032a943c; end: 1032a945b;  */

void FUN_1032a943c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032a945c; end: 1032a94e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032a945c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f51e20) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f51e28);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032a94e4);
  (*pcVar2)();
}



/* Entry: 1032a94e4; end: 1032a95cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032a94e4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f51e20);
  *(undefined **)(unaff_x20 + _DAT_112f51e20) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f51e28);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f51e28))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110633c18;
  func_0x000107c613fc(&UNK_110633c18,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1032a95d0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1032a95cc; end: 1032a95d7;  */

void FUN_1032a95cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032a95d8; end: 1032a9637; -[_TtC37GamesExplorerDeeplinkScopeGraphBridge50GamesExplorerDeeplinkScopedServicesSaberEntryPoint init] */

void FUN_1032a95d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerDeeplinkScopeGraphBridge.GamesExplorerDeeplinkScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a9604);
  (*pcVar1)();
}



/* Entry: 1032a9638; end: 1032a966f; -[_TtC37GamesExplorerDeeplinkScopeGraphBridge50GamesExplorerDeeplinkScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a9638(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f51e28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51e20));
  return;
}



/* Entry: 1032a9670; end: 1032a9673;  */

void FUN_1032a9670(void)

{
  return;
}



/* Entry: 1032a9674; end: 1032a9693;  */

void FUN_1032a9674(void)

{
  FUN_1032a94e4();
  return;
}



/* Entry: 1032a9694; end: 1032a96b3;  */

void FUN_1032a9694(void)

{
  func_0x000107c61168(&PTR_PTR_1128c83c0);
  return;
}



/* Entry: 1032a96b4; end: 1032a9783;  */

undefined8 FUN_1032a96b4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f51e58,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1032a9784();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1032a9784; end: 1032a97a3;  */

void FUN_1032a9784(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8488);
  return;
}



/* Entry: 1032a97a4; end: 1032a97ef;  */

void FUN_1032a97a4(undefined8 param_1)

{
  func_0x0001000285a8(0x112f51e60,&UNK_10dba7b38);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1032a985c,param_1);
  return;
}



/* Entry: 1032a97f0; end: 1032a985b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a97f0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1032a9784();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f51e68) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1032a985c; end: 1032a9863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a985c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1032a9784();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f51e68) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1032a9864; end: 1032a98af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a9864(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f51e68) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a98b0; end: 1032a990f; -[_TtC37GamesExplorerDeeplinkScopeGraphBridge45GamesExplorerDeeplinkScopeGraphBridgeServices init] */

void FUN_1032a98b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerDeeplinkScopeGraphBridge.GamesExplorerDeeplinkScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a98dc);
  (*pcVar1)();
}



/* Entry: 1032a9910; end: 1032a9927; -[_TtC37GamesExplorerDeeplinkScopeGraphBridge45GamesExplorerDeeplinkScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a9910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f51e68));
  return;
}



/* Entry: 1032a9928; end: 1032a9a9f;  */

void FUN_1032a9928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110633c60;
  func_0x000107c613fc(&UNK_110633c60,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032a9aa0,puVar1);
  return;
}



/* Entry: 1032a9aa0; end: 1032a9aa7;  */

void FUN_1032a9aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f51e58,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f51e58,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110633cf8;
  func_0x000107c613fc(&UNK_110633cf8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1032a9b54;
  func_0x00010058fa64(0x1032a9b54,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032a9aa8; end: 1032a9b03;  */

void FUN_1032a9aa8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f51e58,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f51e58,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1032a9b04; end: 1032a9b5b;  */

undefined ** FUN_1032a9b04(void)

{
  return &PTR_DAT_113066628;
}



/* Entry: 1032a9b5c; end: 1032a9ba3; -[SCGamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a9b5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51ec0;
  func_0x000107c61428(param_1 + _DAT_112f51ec0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032a9ba4; end: 1032a9bfb; -[SCGamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a9ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51ec0;
  func_0x000107c61428(param_1 + _DAT_112f51ec0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032a9bfc; end: 1032a9c43; -[SCGamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint gamesExplorerDeeplinkScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a9bfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51ec8;
  func_0x000107c61428(param_1 + _DAT_112f51ec8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032a9c44; end: 1032a9ca7; -[SCGamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint setGamesExplorerDeeplinkScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a9c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51ec8;
  func_0x000107c61428(param_1 + _DAT_112f51ec8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032a9ca8; end: 1032a9ddb;  */

/* WARNING: Possible PIC construction at 0x0001032a9d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a9d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a9d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a9d64) */
/* WARNING: Removing unreachable block (ram,0x0001032a9d80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a9ca8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c43cec();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1032a9310();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1032a96b4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a9ddc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f51d18) = lVar5;
    *(long *)(lVar4 + _DAT_112f51d20) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032a9ddc; end: 1032a9e03; -[SCGamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032a9ddc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032a9ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032a9e04; end: 1032a9e47; -[SCGamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032a9e04(undefined8 param_1)

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



/* Entry: 1032a9e48; end: 1032a9fdf;  */

void FUN_1032a9e48(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0ec9770)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000034,0x800000010f136890,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "GamesExplorerDeeplinkScopeGraphBridge/SCGamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x62,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a9fe0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54d9c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032a9fe0; end: 1032aa08b; -[SCGamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032a9fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032a9e48(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032aa08c; end: 1032aa0f7; -[SCGamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa08c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f51ec0,0);
  *(undefined8 *)(param_1 + _DAT_112f51ec8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f51ed0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032aa0f8; end: 1032aa12b;  */

void FUN_1032aa0f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032aa12c; end: 1032aa173; -[SCGamesExplorerDeeplinkScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032aa158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032aa15c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa12c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f51ec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51ec8));
  return;
}



/* Entry: 1032aa174; end: 1032aa193;  */

void FUN_1032aa174(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8548);
  return;
}



/* Entry: 1032aa194; end: 1032aa19f; -[SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa194(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51f00;
  func_0x000107c61428(param_1 + _DAT_112f51f00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032aa1a0; end: 1032aa1ab; -[SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa1a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51f00;
  func_0x000107c61428(param_1 + _DAT_112f51f00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


