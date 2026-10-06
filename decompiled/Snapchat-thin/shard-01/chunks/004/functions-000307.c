/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10106fbb4; end: 10106fbdf;  */

void FUN_10106fbb4(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 2;
  }
  (**(code **)(unaff_x20 + 0x10))(uVar1);
  return;
}



/* Entry: 10106fbe0; end: 10106fbfb;  */

void FUN_10106fbe0(long param_1,long param_2)

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



/* Entry: 10106fbfc; end: 10106fd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10106fbfc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  func_0x000107c613fc();
  uVar2 = *(undefined8 *)(param_2 + _DAT_1130221e8);
  func_0x000107c61174();
  lVar3 = param_3;
  func_0x000107c5b4b4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_10106f9c8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112d57ce8) = uVar2;
    *(long *)(lVar5 + _DAT_112d57cf0) = lVar3;
    lStack_60 = lVar5;
    lStack_58 = lVar4;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
    func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112d69b40));
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(plVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10106fd08);
  (*pcVar1)();
}



/* Entry: 10106fd08; end: 10106fd23;  */

void FUN_10106fd08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10106fd24; end: 10106fd43;  */

void FUN_10106fd24(void)

{
  func_0x000107c61168(&PTR_PTR_112d57d60);
  return;
}



/* Entry: 10106fd44; end: 10106fd4f; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106fd44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57db8;
  func_0x000107c61428(param_1 + _DAT_112d57db8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10106fd50; end: 10106fd5b; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106fd50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57db8;
  func_0x000107c61428(param_1 + _DAT_112d57db8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10106fd5c; end: 10106fd67; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint incomingFriendsSyncServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106fd5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57dc0;
  func_0x000107c61428(param_1 + _DAT_112d57dc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10106fd68; end: 10106fd73; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint setIncomingFriendsSyncServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106fd68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57dc0;
  func_0x000107c61428(param_1 + _DAT_112d57dc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10106fd74; end: 10106fd7f; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106fd74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57dc8;
  func_0x000107c61428(param_1 + _DAT_112d57dc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10106fd80; end: 10106fdc3;  */

void FUN_10106fd80(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10106fdc4; end: 10106fdcf; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106fdc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57dc8;
  func_0x000107c61428(param_1 + _DAT_112d57dc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10106fdd0; end: 10106fe23;  */

void FUN_10106fdd0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10106fe24; end: 10106ffab;  */

/* WARNING: Possible PIC construction at 0x00010106ff2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010106ff3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010106ff84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010106ff40) */
/* WARNING: Removing unreachable block (ram,0x00010106ff30) */
/* WARNING: Removing unreachable block (ram,0x00010106ff88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106fe24(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
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
  lVar3 = unaff_x20;
  func_0x000107c452fc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5b490();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      FUN_10106fd24(0);
      func_0x000107c613fc();
      uVar4 = *(undefined8 *)(lVar3 + _DAT_1130221e8);
      func_0x000107c61174();
      func_0x000107c5b4b4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10106ffac);
        (*pcVar1)();
      }
      lVar5 = 0;
      FUN_10106f9c8();
      lVar3 = lVar5;
      func_0x000107c610f8();
      *(undefined8 *)(lVar3 + _DAT_112d57ce8) = uVar4;
      *(long *)(lVar3 + _DAT_112d57cf0) = unaff_x20;
      lStack_60 = lVar3;
      lStack_58 = lVar5;
      func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
      func_0x000107c4fba8(*(undefined8 *)(lVar2 + _DAT_112d69b40));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10106ffac; end: 10106ffd3; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint begin] */

void FUN_10106ffac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10106fe24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10106ffd4; end: 101070017; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint end] */

void FUN_10106ffd4(undefined8 param_1)

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



/* Entry: 101070018; end: 101070217;  */

void FUN_101070018(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10ddac0)) {
      uVar2 = 0xd00000000000001b;
      func_0x000107c605b8(0xd00000000000001b,0x800000010ef22540,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "AddFriendsSDNPrefetchPluginImpl/SCAddFriendsSDNPrefetchPluginImplEntryPoint.swift"
                                ,0x51,2,0x2c,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101070218);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c594bc();
        goto LAB_1010700a4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5536c();
  }
LAB_1010700a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101070218; end: 1010702c3; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint setValue:forIvarName:] */

void FUN_101070218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101070018(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010702c4; end: 10107034b; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010702c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d57db8,0);
  func_0x000107c61614(param_1 + _DAT_112d57dc0,0);
  func_0x000107c61614(param_1 + _DAT_112d57dc8,0);
  *(undefined8 *)(param_1 + _DAT_112d57dd0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10107034c; end: 10107037f;  */

void FUN_10107034c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101070380; end: 1010703d7; -[SCAddFriendsSDNPrefetchPluginImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101070380(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d57db8);
  func_0x000107c61610(param_1 + _DAT_112d57dc0);
  func_0x000107c61610(param_1 + _DAT_112d57dc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d57dd0));
  return;
}



/* Entry: 1010703d8; end: 1010703f7;  */

void FUN_1010703d8(void)

{
  func_0x000107c61168(&PTR_PTR_1127abe20);
  return;
}



/* Entry: 1010703f8; end: 1010705cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1010703f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar7 = &lStack_70;
  func_0x000107c613fc();
  uVar3 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c43b5c();
  func_0x000107c61180();
  lVar5 = 0;
  FUN_101072458();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d57f78) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d57f80);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + _DAT_112d57f88) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d57f90);
  *puVar1 = 0xd000000000000025;
  puVar1[1] = 0x800000010ef225c0;
  *(undefined8 *)(lVar6 + _DAT_112d57f50) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112d57f58) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112d57f60) = param_4;
  *(undefined8 *)(lVar6 + _DAT_112d57f68) = param_5;
  *(undefined8 *)(lVar6 + _DAT_112d57f70) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_70,puVar2);
  uVar3 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 1010705cc; end: 1010705e7;  */

void FUN_1010705cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010705e8; end: 101070607;  */

void FUN_1010705e8(void)

{
  func_0x000107c61168(&PTR_PTR_112d57e40);
  return;
}



/* Entry: 101070608; end: 10107061b;  */

bool FUN_101070608(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10107061c; end: 1010706a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10107061c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d57ec8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d57ec8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d57ee0);
    func_0x0001033939d0();
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000103393490();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1010706a4; end: 10107084b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1010706a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20 + _DAT_112d57e98;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d57ea0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d57ea8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d57eb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d57eb8) = 0x407f400000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112d57ec0) = 0x4038000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112d57ec8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d57ed0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d57ed8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d57ee0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d57ee8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d57ef0) = param_5;
  *(undefined8 *)(lVar2 + 8) = param_7;
  func_0x000107c61604();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(auStack_70,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  return puVar3;
}



/* Entry: 10107084c; end: 101070a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107084c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  puVar2 = &UNK_11037bfb8;
  func_0x000107c613fc(&UNK_11037bfb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  lVar7 = *(long *)(unaff_x20 + _DAT_112d57ee8);
  func_0x000107c6157c(puVar2);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101070a1c);
    (*pcVar1)();
  }
  lVar3 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar3 == 0) {
    func_0x000107c61428(puVar2 + 0x10,&puStack_70,0,0);
    puVar4 = puVar2 + 0x10;
    func_0x000107c61618();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c61578(puVar2,2);
      return;
    }
    FUN_101070a94(0,0);
    func_0x000107c61578(puVar2,2);
  }
  else {
    puVar4 = (undefined *)0x0;
    func_0x000101071e9c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar5 = &UNK_11037bfe0;
    func_0x000107c613fc(&UNK_11037bfe0,0x28,7);
    *(code **)(puVar5 + 0x10) = FUN_101070a8c;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    *(long *)(puVar5 + 0x20) = lVar3;
    pcStack_50 = FUN_1010716e0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100f6151c;
    puStack_58 = &UNK_11037bff8;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c6157c(puVar2);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c4f8a4(lVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101070a1c; end: 101070a8b;  */

void FUN_101070a1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_101070a94(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 101070a8c; end: 101070a93;  */

void FUN_101070a8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101070a94(param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101070a94; end: 101070bff;  */

/* WARNING: Possible PIC construction at 0x000101070ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101070b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101070bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101070bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101070bbc) */
/* WARNING: Removing unreachable block (ram,0x000101070b3c) */
/* WARNING: Removing unreachable block (ram,0x000101070ad4) */
/* WARNING: Removing unreachable block (ram,0x000101070bd8) */
/* WARNING: Removing unreachable block (ram,0x000101070ae8) */
/* WARNING: Removing unreachable block (ram,0x000101070be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101070a94(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_101070c00();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d57eb0);
    *(long *)(unaff_x20 + _DAT_112d57eb0) = param_1;
    func_0x000107c61174();
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 101070c00; end: 10107108b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101070c00(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d57ed8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126a62e8;
      func_0x000107c610f8(PTR_PTR_1126a62e8);
      func_0x000107c453e4();
      uVar7 = 0;
      if (param_2 != 0) {
        func_0x000107c5fadc(param_1,param_2);
        uVar7 = param_1;
      }
      func_0x000107c54c3c(puVar3);
      func_0x000107c61170(uVar7);
      puVar6 = &UNK_11037bfb8;
      puVar4 = puVar6;
      func_0x000107c613fc(&UNK_11037bfb8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = puVar6;
      func_0x000107c613fc(&UNK_11037bfb8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      func_0x000107c613fc(&UNK_11037bfb8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      func_0x000107c610f8(PTR_PTR_1126a62f0);
      uVar7 = 0x101071f20;
      FUN_101071bbc(0x101071f20,puVar4,0x101071f28,puVar5,0x101071f30,puVar6);
      puVar6 = PTR_PTR_1126a62f8;
      func_0x000107c610f8(PTR_PTR_1126a62f8);
      func_0x000107c61174(puVar3);
      func_0x000107c61174(uVar7);
      func_0x000107c49520(puVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar7);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10107108c; end: 10107112f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107108c(long param_1,long param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      if (param_2 == *(long *)(param_1 + _DAT_112d57eb0)) {
        func_0x000101070dc0(param_2);
      }
      func_0x000107c61170(param_1);
      param_1 = param_2;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101071130; end: 10107139f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101071130(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar1 = "dismissTakeover()";
    func_0x0001000c10c0("dismissTakeover()");
    func_0x000107c61180();
    puVar2 = &UNK_11037c210;
    func_0x000107c613fc(&UNK_11037c210,0x18,7);
    *(long *)(puVar2 + 0x10) = param_1;
    uStack_58 = 0x101071fa0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11037c228;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c61174();
    func_0x000107c61574(puVar2);
    func_0x000107c4e590(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(pcVar1);
    lVar5 = param_1 + _DAT_112d57e98;
    lVar4 = lVar5;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar5 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar5 + 0x10))();
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1010713a0; end: 101071527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010713a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c5edd0(puVar5,param_1,param_2);
    puVar2 = puVar5;
    (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
    if ((int)puVar2 == 1) {
      func_0x000107c61170(param_3);
      func_0x0001000293e4(puVar5);
    }
    else {
      lVar3 = lVar6;
      (**(code **)(lVar8 + 0x20))(lVar6,puVar5,lVar1);
      FUN_10107061c();
      uVar7 = *(undefined8 *)(param_3 + _DAT_112d57ea8);
      uVar4 = uVar7;
      func_0x000107c61174(uVar7);
      func_0x0001033934dc(lVar6,uVar7);
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar4);
      (**(code **)(lVar8 + 8))(lVar6,lVar1);
    }
  }
  return;
}



/* Entry: 101071528; end: 1010716df;  */

void FUN_101071528(ulong param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  if (param_1 != 0) {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = param_1;
      if (-1 < (long)param_1) {
        uVar7 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010716e0);
          (*pcVar1)();
        }
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
        param_1 = param_2;
      }
      else {
        lVar2 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar3 = lVar2;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        lVar2 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        (*param_3)(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
        return;
      }
    }
  }
  uVar4 = 0;
  func_0x000101071e9c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar5 = &UNK_11037c030;
  func_0x000107c613fc(&UNK_11037c030,0x20,7);
  *(code **)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  pcStack_50 = FUN_101071edc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100f6151c;
  puStack_58 = &UNK_11037c048;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar5);
  func_0x000107c4fa04(param_5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1010716e0; end: 1010716eb;  */

void FUN_1010716e0(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar7 = &puStack_70;
  if (param_1 != 0) {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar9 = param_1;
      if (-1 < (long)param_1) {
        uVar9 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar9 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010716e0);
          (*pcVar2)();
        }
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
        param_1 = param_2;
      }
      else {
        lVar3 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar4 = lVar3;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        lVar3 = lVar4;
        func_0x000107c5faec(lVar4);
        func_0x000107c61170(lVar4);
        (*pcVar2)(lVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
        return;
      }
    }
  }
  uVar5 = 0;
  func_0x000101071e9c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar6 = &UNK_11037c030;
  func_0x000107c613fc(&UNK_11037c030,0x20,7);
  *(code **)(puVar6 + 0x10) = pcVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  pcStack_50 = FUN_101071edc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100f6151c;
  puStack_58 = &UNK_11037c048;
  puStack_48 = puVar6;
  func_0x000107c60bc4(&puStack_70);
  puVar6 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar6);
  func_0x000107c4fa04(uVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1010716ec; end: 1010717cb;  */

void FUN_1010716ec(ulong param_1,ulong param_2,code *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1 != 0) {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar2 = param_1;
      if (-1 < (long)param_1) {
        uVar2 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar2 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010717cc);
          (*pcVar1)();
        }
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
        param_1 = param_2;
      }
      else {
        lVar3 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar4 = lVar3;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        func_0x000107c5faec(lVar4);
        func_0x000107c61170(lVar4);
        goto LAB_101071784;
      }
    }
    param_1 = 0;
  }
LAB_101071784:
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 1010717cc; end: 1010717e7;  */

void FUN_1010717cc(long param_1,long param_2)

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



/* Entry: 1010717e8; end: 101071813; -[_TtC25MutualFriendsBillboardFST34MutualFriendsBillboardFSTPresenter init] */

void FUN_1010717e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsBillboardFST.MutualFriendsBillboardFSTPresenter",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101071814);
  (*pcVar1)();
}



/* Entry: 101071814; end: 1010718cb; -[_TtC25MutualFriendsBillboardFST34MutualFriendsBillboardFSTPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101071840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101071860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101071890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010718b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101071894) */
/* WARNING: Removing unreachable block (ram,0x000101071864) */
/* WARNING: Removing unreachable block (ram,0x000101071844) */
/* WARNING: Removing unreachable block (ram,0x0001010718b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101071814(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d57ed0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d57ed8));
  return;
}



/* Entry: 1010718cc; end: 1010718cf; -[_TtC25MutualFriendsBillboardFST34MutualFriendsBillboardFSTPresenter tray:positionDidChange:] */

void FUN_1010718cc(void)

{
  return;
}



/* Entry: 1010718d0; end: 10107195f; -[_TtC25MutualFriendsBillboardFST34MutualFriendsBillboardFSTPresenter trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010718d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = param_1 + _DAT_112d57e98;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar3 + 0x20);
    func_0x000107c61174(param_1);
    (*pcVar4)(lVar2,lVar3);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 101071960; end: 1010719c7; -[_TtC25MutualFriendsBillboardFST34MutualFriendsBillboardFSTPresenter tray:heightForPosition:] */

undefined8
FUN_101071960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_101071ce4(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1010719c8; end: 1010719d7; -[_TtC25MutualFriendsBillboardFST49MututalFriendsBillboardFSTContainerViewController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1010719c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d57f20);
}



/* Entry: 1010719d8; end: 101071a27; -[_TtC25MutualFriendsBillboardFST49MututalFriendsBillboardFSTContainerViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010719d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112d57f20) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 101071a28; end: 101071af7; -[_TtC25MutualFriendsBillboardFST49MututalFriendsBillboardFSTContainerViewController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101071a28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  
  plVar2 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + _DAT_112d57f20) = 0;
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    *(undefined1 *)(param_1 + _DAT_112d57f20) = 0;
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)plVar2;
}



/* Entry: 101071af8; end: 101071b83; -[_TtC25MutualFriendsBillboardFST49MututalFriendsBillboardFSTContainerViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101071af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112d57f20) = 0;
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 101071b84; end: 101071b87;  */

void FUN_101071b84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101071b88; end: 101071bbb;  */

void FUN_101071b88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101071bbc; end: 101071ce3;  */

undefined8
FUN_101071bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11037c138;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_11037c160;
  ppuVar3 = &puStack_c0;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  func_0x000107c60bc4(ppuVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_100c75f50;
  puStack_d8 = &UNK_11037c188;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  func_0x000107c60bc4(&puStack_f0);
  func_0x000107c47c2c();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return unaff_x20;
}



/* Entry: 101071ce4; end: 101071e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101071ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  
  dVar6 = -1.0;
  if (param_5 != 8) {
    return -1.0;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d57eb0);
  if (lVar2 == 0) {
    return -1.0;
  }
  func_0x000107c61174(0xbff0000000000000);
  lVar3 = lVar2;
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c447b4();
    func_0x000107c615e8(lVar3);
    if ((int)lVar4 != 0) {
      puVar5 = *(undefined **)(unaff_x20 + _DAT_112d57ea8);
      if (puVar5 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
      }
      else {
        func_0x000107c5de64();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101071d70);
          (*pcVar1)();
        }
      }
      func_0x000107c3ec60();
      func_0x000107c61170(puVar5);
      func_0x000107c609cc(dVar6,param_2,param_3,param_4);
      dVar7 = 1.79769313486232e+308;
      func_0x000107c5b098(lVar2);
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c517d0();
      func_0x000107c61170(lVar2);
      dVar7 = dVar7 + dVar6;
      goto LAB_101071e18;
    }
  }
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c517d0();
  func_0x000107c61170(lVar2);
  dVar7 = dVar6 + 500.0;
LAB_101071e18:
  return dVar7 + 24.0;
}



/* Entry: 101071e38; end: 101071e77;  */

void FUN_101071e38(void)

{
  func_0x000107c61168(&PTR_PTR_1127abef0);
  return;
}



/* Entry: 101071e78; end: 101071edb;  */

undefined8 FUN_101071e78(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101071edc; end: 101071eeb;  */

void FUN_101071edc(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar2 = param_1;
      if (-1 < (long)param_1) {
        uVar2 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar2 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010717cc);
          (*pcVar1)();
        }
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
        param_1 = param_2;
      }
      else {
        lVar3 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar4 = lVar3;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        func_0x000107c5faec(lVar4);
        func_0x000107c61170(lVar4);
        goto LAB_101071784;
      }
    }
    param_1 = 0;
  }
LAB_101071784:
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 101071eec; end: 101071f17;  */

void FUN_101071eec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101071f18; end: 101071fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101071f18(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_50,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      if (lVar2 == *(long *)(lVar1 + _DAT_112d57eb0)) {
        func_0x000101070dc0(lVar2);
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101071fa4; end: 101072017; -[_TtC25MutualFriendsBillboardFST33MutualFriendsBillboardFSTProvider canShowCampaign:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101071fa4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if (param_3 == *(long *)(param_1 + _DAT_112d57f90) &&
        param_2 == ((long *)(param_1 + _DAT_112d57f90))[1]) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)param_3;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 101072018; end: 10107227f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101072018(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d57f78);
    *(long *)(unaff_x20 + _DAT_112d57f78) = param_1;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100b64c10(param_3,param_4);
    func_0x000107c615f0(param_2);
    func_0x000107c61170(uVar6);
    plVar4 = (long *)(unaff_x20 + _DAT_112d57f80);
    lVar5 = *plVar4;
    lVar3 = plVar4[1];
    *plVar4 = param_3;
    plVar4[1] = param_4;
    func_0x000107c6157c(param_4);
    func_0x00010058d43c(lVar5,lVar3);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d57f50);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d57f60);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d57f68);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d57f70);
    lVar2 = 0;
    FUN_101071e38();
    lVar3 = lVar2;
    func_0x000107c610f8();
    lVar5 = lVar3 + _DAT_112d57e98;
    *(undefined8 *)(lVar5 + 8) = 0;
    func_0x000107c61614(lVar5,0);
    *(undefined8 *)(lVar3 + _DAT_112d57ea0) = 0;
    *(undefined8 *)(lVar3 + _DAT_112d57ea8) = 0;
    *(undefined8 *)(lVar3 + _DAT_112d57eb0) = 0;
    *(undefined8 *)(lVar3 + _DAT_112d57eb8) = 0x407f400000000000;
    *(undefined8 *)(lVar3 + _DAT_112d57ec0) = 0x4038000000000000;
    *(undefined8 *)(lVar3 + _DAT_112d57ec8) = 0;
    *(long *)(lVar3 + _DAT_112d57ed0) = param_2;
    *(undefined8 *)(lVar3 + _DAT_112d57ed8) = uVar9;
    *(undefined8 *)(lVar3 + _DAT_112d57ee0) = uVar8;
    *(undefined8 *)(lVar3 + _DAT_112d57ee8) = uVar7;
    *(undefined8 *)(lVar3 + _DAT_112d57ef0) = uVar6;
    *(undefined ***)(lVar5 + 8) = &PTR_DAT_11037c250;
    func_0x000107c61604();
    puVar1 = PTR_s_init_1125d9248;
    lStack_70 = lVar3;
    lStack_68 = lVar2;
    func_0x000107c615f0(param_2);
    func_0x000107c61174(uVar9);
    func_0x000107c61174(uVar8);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar6);
    plVar4 = &lStack_70;
    func_0x000107c61154(plVar4,puVar1);
    lVar5 = _DAT_112d57f88;
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d57f88);
    *(long **)(unaff_x20 + _DAT_112d57f88) = plVar4;
    func_0x000107c61170(uVar6);
    lVar5 = *(long *)(unaff_x20 + lVar5);
    if (lVar5 == 0) {
      func_0x000107c615e8(param_2);
      func_0x000107c61170(param_1);
      func_0x00010058d43c(param_3,param_4);
    }
    else {
      func_0x000107c61174();
      FUN_10107084c();
      func_0x000107c615e8(param_2);
      func_0x000107c61170(param_1);
      func_0x00010058d43c(param_3,param_4);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 101072280; end: 101072347; -[_TtC25MutualFriendsBillboardFST33MutualFriendsBillboardFSTProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x000101072324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101072328) */

void FUN_101072280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_11037c288;
    func_0x000107c613fc(&UNK_11037c288,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x10107278c;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_101072018(param_3,param_4,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101072348; end: 1010723a7; -[_TtC25MutualFriendsBillboardFST33MutualFriendsBillboardFSTProvider init] */

void FUN_101072348(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsBillboardFST.MutualFriendsBillboardFSTProvider",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101072374);
  (*pcVar1)();
}



/* Entry: 1010723a8; end: 101072457; -[_TtC25MutualFriendsBillboardFST33MutualFriendsBillboardFSTProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010723a8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57f50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57f58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57f60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57f68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57f70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57f78));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112d57f80),
                      ((undefined8 *)(param_1 + _DAT_112d57f80))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57f88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d57f90 + 8))
  ;
  return;
}



/* Entry: 101072458; end: 101072477;  */

void FUN_101072458(void)

{
  func_0x000107c61168(&PTR_PTR_1127ac0c0);
  return;
}



/* Entry: 101072478; end: 101072543;  */

/* WARNING: Possible PIC construction at 0x00010107251c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101072478(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d57f78);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d57f58);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4bc(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101072544; end: 101072783;  */

/* WARNING: Possible PIC construction at 0x0001010725ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101072618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010107261c) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101072544(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d57f78);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d57f58);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    pcVar4 = *(code **)(unaff_x20 + _DAT_112d57f80);
    if (pcVar4 != (code *)0x0) {
      func_0x000107c6157c(((undefined8 *)(unaff_x20 + _DAT_112d57f80))[1]);
      (*pcVar4)();
    }
  }
  else {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4c0(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101072784; end: 10107279f;  */

/* WARNING: Possible PIC construction at 0x00010107251c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101072784(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d57f78);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d57f58);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4bc(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1010727a0; end: 1010727ab; -[SCMutualFriendsBillboardFSTEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010727a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57fc0;
  func_0x000107c61428(param_1 + _DAT_112d57fc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010727ac; end: 1010727b7; -[SCMutualFriendsBillboardFSTEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010727ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57fc0;
  func_0x000107c61428(param_1 + _DAT_112d57fc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010727b8; end: 1010727c3; -[SCMutualFriendsBillboardFSTEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010727b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57fc8;
  func_0x000107c61428(param_1 + _DAT_112d57fc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010727c4; end: 1010727cf; -[SCMutualFriendsBillboardFSTEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010727c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57fc8;
  func_0x000107c61428(param_1 + _DAT_112d57fc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010727d0; end: 1010727db; -[SCMutualFriendsBillboardFSTEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010727d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57fd0;
  func_0x000107c61428(param_1 + _DAT_112d57fd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010727dc; end: 1010727e7; -[SCMutualFriendsBillboardFSTEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010727dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57fd0;
  func_0x000107c61428(param_1 + _DAT_112d57fd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010727e8; end: 1010727f3; -[SCMutualFriendsBillboardFSTEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010727e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57fd8;
  func_0x000107c61428(param_1 + _DAT_112d57fd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010727f4; end: 1010727ff; -[SCMutualFriendsBillboardFSTEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010727f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57fd8;
  func_0x000107c61428(param_1 + _DAT_112d57fd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101072800; end: 10107280b; -[SCMutualFriendsBillboardFSTEntryPoint friendingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101072800(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57fe0;
  func_0x000107c61428(param_1 + _DAT_112d57fe0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10107280c; end: 10107284f;  */

void FUN_10107280c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101072850; end: 10107285b; -[SCMutualFriendsBillboardFSTEntryPoint setFriendingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101072850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57fe0;
  func_0x000107c61428(param_1 + _DAT_112d57fe0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10107285c; end: 1010728af;  */

void FUN_10107285c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010728b0; end: 1010728f7; -[SCMutualFriendsBillboardFSTEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010728b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57fe8;
  func_0x000107c61428(param_1 + _DAT_112d57fe8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1010728f8; end: 10107295b; -[SCMutualFriendsBillboardFSTEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010728f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57fe8;
  func_0x000107c61428(param_1 + _DAT_112d57fe8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10107295c; end: 101072c4f;  */

/* WARNING: Possible PIC construction at 0x000101072b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101072b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101072b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101072b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101072c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101072c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101072bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101072c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101072be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101072c04) */
/* WARNING: Removing unreachable block (ram,0x000101072bf4) */
/* WARNING: Removing unreachable block (ram,0x000101072c24) */
/* WARNING: Removing unreachable block (ram,0x000101072c14) */
/* WARNING: Removing unreachable block (ram,0x000101072b7c) */
/* WARNING: Removing unreachable block (ram,0x000101072b6c) */
/* WARNING: Removing unreachable block (ram,0x000101072b5c) */
/* WARNING: Removing unreachable block (ram,0x000101072b4c) */
/* WARNING: Removing unreachable block (ram,0x000101072be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107295c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c3e8cc();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = unaff_x20;
        func_0x000107c5e1d0();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar7 = unaff_x20;
          func_0x000107c5b490();
          func_0x000107c61180();
          if (lVar7 != 0) {
            func_0x000107c43a20();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_1010705e8();
              func_0x000107c613fc();
              func_0x000107c5dbd4();
              func_0x000107c61180();
              func_0x000107c43b5c();
              func_0x000107c61180();
              lVar8 = 0;
              FUN_101072458();
              lVar9 = lVar8;
              func_0x000107c610f8();
              *(undefined8 *)(lVar9 + _DAT_112d57f78) = 0;
              puVar1 = (undefined8 *)(lVar9 + _DAT_112d57f80);
              *puVar1 = 0;
              puVar1[1] = 0;
              *(undefined8 *)(lVar9 + _DAT_112d57f88) = 0;
              puVar1 = (undefined8 *)(lVar9 + _DAT_112d57f90);
              *puVar1 = 0xd000000000000025;
              puVar1[1] = 0x800000010ef225c0;
              *(long *)(lVar9 + _DAT_112d57f50) = lVar4;
              *(long *)(lVar9 + _DAT_112d57f58) = lVar5;
              *(long *)(lVar9 + _DAT_112d57f60) = lVar6;
              *(long *)(lVar9 + _DAT_112d57f68) = lVar7;
              *(long *)(lVar9 + _DAT_112d57f70) = unaff_x20;
              puVar2 = PTR_s_init_1125d9248;
              lStack_70 = lVar9;
              lStack_68 = lVar8;
              func_0x000107c61174(lVar6);
              func_0x000107c61174(lVar7);
              func_0x000107c61174(unaff_x20);
              func_0x000107c61154(&lStack_70,puVar2);
              func_0x000107c4e9e4(lVar3);
              func_0x000107c61180();
              func_0x000107c4fba8();
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
  return;
}



/* Entry: 101072c50; end: 101072c77; -[SCMutualFriendsBillboardFSTEntryPoint begin] */

void FUN_101072c50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10107295c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101072c78; end: 101072cbb; -[SCMutualFriendsBillboardFSTEntryPoint end] */

void FUN_101072c78(undefined8 param_1)

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



/* Entry: 101072cbc; end: 101072fff;  */

void FUN_101072cbc(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c536e0();
    }
    else {
      uVar2 = 0xd000000000000019;
      if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10eeea0)) ||
         (func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52c50();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd00000000000001b;
            if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10dd950)) ||
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef226b0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c54c48();
            }
            else {
              uVar2 = 0xd000000000000017;
              if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) &&
                 (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "MutualFriendsBillboardFST/SCMutualFriendsBillboardFSTEntryPoint.swift"
                                    ,0x45,2,0x3b,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101073000);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a68c();
            }
            goto LAB_101072d48;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c594bc();
      }
    }
  }
LAB_101072d48:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101073000; end: 1010730ab; -[SCMutualFriendsBillboardFSTEntryPoint setValue:forIvarName:] */

void FUN_101073000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101072cbc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010730ac; end: 101073167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010730ac(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d57fc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57fc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57fd0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57fd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57fe0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d57fe8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d57ff0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101073168; end: 101073187; -[SCMutualFriendsBillboardFSTEntryPoint init] */

void FUN_101073168(void)

{
  FUN_1010730ac();
  return;
}



/* Entry: 101073188; end: 1010731bb;  */

void FUN_101073188(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010731bc; end: 101073243; -[SCMutualFriendsBillboardFSTEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010731bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d57fc0);
  func_0x000107c61610(param_1 + _DAT_112d57fc8);
  func_0x000107c61610(param_1 + _DAT_112d57fd0);
  func_0x000107c61610(param_1 + _DAT_112d57fd8);
  func_0x000107c61610(param_1 + _DAT_112d57fe0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57fe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d57ff0));
  return;
}



/* Entry: 101073244; end: 101073263;  */

void FUN_101073244(void)

{
  func_0x000107c61168(&PTR_PTR_1127ac1c0);
  return;
}



/* Entry: 101073264; end: 101073413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101073264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar7 = &lStack_70;
  func_0x000107c613fc();
  uVar3 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c43b5c();
  func_0x000107c61180();
  lVar5 = 0;
  FUN_101074dfc();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d58180) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d58188);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + _DAT_112d58190) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d58198);
  *puVar1 = 0xd000000000000031;
  puVar1[1] = 0x800000010ef22720;
  *(undefined8 *)(lVar6 + _DAT_112d58160) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112d58168) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112d58170) = param_4;
  *(undefined8 *)(lVar6 + _DAT_112d58178) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_70,puVar2);
  uVar3 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 101073414; end: 10107342f;  */

void FUN_101073414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101073430; end: 10107344f;  */

void FUN_101073430(void)

{
  func_0x000107c61168(&PTR_PTR_112d58060);
  return;
}



/* Entry: 101073450; end: 1010734f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101073450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112d580c8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d580c8);
  uVar5 = 0;
  if (lVar3 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010734f4);
      (*pcVar2)();
    }
    lVar4 = lVar3;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      lVar4 = *(long *)(unaff_x20 + lVar1);
      if (lVar4 == 0) {
        return 0;
      }
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010734f8);
        (*pcVar2)();
      }
    }
    func_0x000107c515a0(lVar4);
    func_0x000107c61170(lVar4);
    uVar5 = param_3;
  }
  return uVar5;
}



/* Entry: 1010734f8; end: 101073667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1010734f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar2 = unaff_x20 + _DAT_112d580b8;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d580c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d580c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d580d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d580d8) = 0x407f400000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112d580e0) = 0x4038000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112d580e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d580f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d580f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d58100) = param_4;
  *(undefined8 *)(lVar2 + 8) = param_6;
  func_0x000107c61604();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(auStack_60,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return puVar3;
}



/* Entry: 101073668; end: 101073837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101073668(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  puVar2 = &UNK_11037c358;
  func_0x000107c613fc(&UNK_11037c358,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  lVar7 = *(long *)(unaff_x20 + _DAT_112d580f8);
  func_0x000107c6157c(puVar2);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101073838);
    (*pcVar1)();
  }
  lVar3 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar3 == 0) {
    func_0x000107c61428(puVar2 + 0x10,&puStack_70,0,0);
    puVar4 = puVar2 + 0x10;
    func_0x000107c61618();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c61578(puVar2,2);
      return;
    }
    FUN_1010738b0(0,0);
    func_0x000107c61578(puVar2,2);
  }
  else {
    puVar4 = (undefined *)0x0;
    func_0x0001010748ac(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar5 = &UNK_11037c380;
    func_0x000107c613fc(&UNK_11037c380,0x28,7);
    *(code **)(puVar5 + 0x10) = FUN_1010738a8;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    *(long *)(puVar5 + 0x20) = lVar3;
    pcStack_50 = FUN_10107424c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100f6151c;
    puStack_58 = &UNK_11037c398;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c6157c(puVar2);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c4f8a4(lVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101073838; end: 1010738a7;  */

void FUN_101073838(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1010738b0(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1010738a8; end: 1010738af;  */

void FUN_1010738a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1010738b0(param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1010738b0; end: 101073a1b;  */

/* WARNING: Possible PIC construction at 0x0001010738ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101073954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010739d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010739f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010739d8) */
/* WARNING: Removing unreachable block (ram,0x000101073958) */
/* WARNING: Removing unreachable block (ram,0x0001010738f0) */
/* WARNING: Removing unreachable block (ram,0x0001010739f4) */
/* WARNING: Removing unreachable block (ram,0x000101073904) */
/* WARNING: Removing unreachable block (ram,0x0001010739fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010738b0(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_101073a1c();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d580d0);
    *(long *)(unaff_x20 + _DAT_112d580d0) = param_1;
    func_0x000107c61174();
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}


