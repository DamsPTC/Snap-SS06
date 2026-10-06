/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10118145c; end: 101181477;  */

void FUN_10118145c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101181478,0,0);
  return;
}



/* Entry: 101181478; end: 101181573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101181478(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = uVar2;
  func_0x000107c5abe0();
  func_0x000107c615e8(uVar2);
  if ((int)uVar3 != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x28) + _DAT_113053888);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x0001000d224c(unaff_x22 + 0x10);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
      func_0x000107c4fbb8(lVar1,param_2,uVar3);
      func_0x000107c61170(uVar3);
      func_0x0001000d224c(unaff_x22 + 0x10);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
      func_0x000107c4fc5c(lVar1,param_2,uVar3);
      func_0x000107c61170(uVar3);
      func_0x0001000d224c(unaff_x22 + 0x10);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
      func_0x000107c4fc34(lVar1,param_2,uVar3);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101181570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101181574; end: 1011815df;  */

void FUN_101181574(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1011816a0;
  plVar3[5] = lVar2;
  plVar3[6] = lVar4;
  plVar3[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101181478,0,0);
  return;
}



/* Entry: 1011815e0; end: 101181673;  */

void FUN_1011815e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101181674; end: 10118167f;  */

void FUN_101181674(void)

{
  return;
}



/* Entry: 101181680; end: 10118169f;  */

void FUN_101181680(void)

{
  func_0x000107c61168(&PTR_PTR_112d62150);
  return;
}



/* Entry: 1011816a0; end: 1011816a3;  */

void FUN_1011816a0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010118164c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1011816a4; end: 1011816af; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011816a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d621b0;
  func_0x000107c61428(param_1 + _DAT_112d621b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011816b0; end: 1011816bb; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011816b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d621b0;
  func_0x000107c61428(param_1 + _DAT_112d621b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011816bc; end: 1011816c7; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint shakeToReportInfoProviderService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011816bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d621b8;
  func_0x000107c61428(param_1 + _DAT_112d621b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011816c8; end: 1011816d3; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint setShakeToReportInfoProviderService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011816c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d621b8;
  func_0x000107c61428(param_1 + _DAT_112d621b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011816d4; end: 1011816df; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011816d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d621c0;
  func_0x000107c61428(param_1 + _DAT_112d621c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011816e0; end: 101181723;  */

void FUN_1011816e0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101181724; end: 10118172f; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101181724(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d621c0;
  func_0x000107c61428(param_1 + _DAT_112d621c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101181730; end: 101181783;  */

void FUN_101181730(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101181784; end: 10118195b;  */

/* WARNING: Possible PIC construction at 0x0001011818c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011818d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011818e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011818d4) */
/* WARNING: Removing unreachable block (ram,0x0001011818c4) */
/* WARNING: Removing unreachable block (ram,0x0001011818e4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_101181784(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5a91c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4cb8c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = 0;
        FUN_101181680();
        func_0x000107c613fc();
        func_0x0001000285a8(0x112d62108,&UNK_10d928080);
        func_0x000107c613fc();
        pcVar4 = FUN_10118142c;
        func_0x0001000bdd8c(FUN_10118142c,0);
        *(code **)(lVar3 + 0x10) = pcVar4;
        puVar5 = &UNK_11038ab90;
        func_0x000107c613fc(&UNK_11038ab90,0x28,7);
        *(long *)(puVar5 + 0x10) = unaff_x20;
        *(long *)(puVar5 + 0x18) = lVar2;
        *(code **)(puVar5 + 0x20) = pcVar4;
        func_0x000107c6157c(pcVar4);
        func_0x000107c61174(unaff_x20);
        func_0x000107c61174(lVar2);
        func_0x0001009548b0(0x80,0,0x48,4,0,0,&UNK_10d928108,puVar5);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10118195c; end: 1011819c7;  */

void FUN_10118195c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1011819c8;
  plVar3[5] = lVar2;
  plVar3[6] = lVar4;
  plVar3[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101181478,0,0);
  return;
}



/* Entry: 1011819c8; end: 101181a03;  */

void FUN_1011819c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101181a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101181a04; end: 101181a2b; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint begin] */

void FUN_101181a04(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101181784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101181a2c; end: 101181a6f; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint end] */

void FUN_101181a2c(undefined8 param_1)

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



/* Entry: 101181a70; end: 101181c73;  */

void FUN_101181a70(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10d69b0)) ||
       (func_0x000107c605b8(0xd000000000000020,0x800000010ef29650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5904c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10e20c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001a,0x800000010ef1df40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MemoriesShakeToReportMetaInfoProvider/SCMemoriesShakeToReportMetaInfoProviderEntryPoint.swift"
                              ,0x5d,2,0x2d,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101181c74);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c56550();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101181c74; end: 101181d1f; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint setValue:forIvarName:] */

void FUN_101181c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101181a70(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101181d20; end: 101181da7; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101181d20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d621b0,0);
  func_0x000107c61614(param_1 + _DAT_112d621b8,0);
  func_0x000107c61614(param_1 + _DAT_112d621c0,0);
  *(undefined8 *)(param_1 + _DAT_112d621c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101181da8; end: 101181ddb;  */

void FUN_101181da8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101181ddc; end: 101181e33; -[SCMemoriesShakeToReportMetaInfoProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101181ddc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d621b0);
  func_0x000107c61610(param_1 + _DAT_112d621b8);
  func_0x000107c61610(param_1 + _DAT_112d621c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d621c8));
  return;
}



/* Entry: 101181e34; end: 101181e53;  */

void FUN_101181e34(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3390);
  return;
}



/* Entry: 101181e54; end: 101181eaf;  */

void FUN_101181e54(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101181eb0; end: 101181ec7;  */

void FUN_101181eb0(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_release_11034f4c0;
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101184eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101181ec8; end: 101181ee7;  */

void FUN_101181ec8(void)

{
  func_0x000107c61168(&PTR_PTR_112d622f0);
  return;
}



/* Entry: 101181ee8; end: 101181f13;  */

void FUN_101181ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_8;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = param_7;
  *(undefined4 *)(unaff_x22 + 0x118) = param_5;
  *(undefined1 *)(unaff_x22 + 0x11c) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101181f14,0,0);
  return;
}



/* Entry: 101181f14; end: 10118222b;  */

void FUN_101181f14(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long unaff_x22;
  long lVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x88);
  puVar2 = PTR_PTR_1126c3920;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0xa0) = puVar2;
  puVar3 = PTR_PTR_1126b3098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0xa8) = puVar3;
  func_0x000107c59fd0();
  func_0x000107c4161c(lVar9);
  func_0x000107c597bc(param_1 / 1000.0,puVar3);
  puVar4 = PTR_PTR_1126b30a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0xb0) = puVar4;
  func_0x000107c3e3d4();
  func_0x000107c61180();
  lVar5 = lVar9;
  func_0x000107c5d7e8();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar6 = param_3;
  if (lVar5 == 0) {
    lVar5 = 0;
    func_0x000107c5faec(0);
    uVar6 = param_3;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  lVar11 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c5a120(puVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c3e3d4();
  func_0x000107c61180();
  lVar9 = lVar11;
  func_0x000107c427c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar9 != 0) {
    lVar5 = lVar9;
    func_0x000107c4a8c4(lVar9);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    lVar11 = lVar5;
    func_0x000107c5ee30(lVar5);
    func_0x000107c61170(lVar5);
    lVar9 = lVar11;
    func_0x000107c5ee20(lVar11,uVar6);
    func_0x00010006c090(lVar11,uVar6);
  }
  lVar5 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c54580(puVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c3e3d4();
  func_0x000107c61180();
  lVar9 = lVar5;
  func_0x000107c427c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar9 != 0) {
    lVar5 = lVar9;
    func_0x000107c4a804();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      lVar11 = lVar5;
      func_0x000107c5ee30(lVar5);
      func_0x000107c61170(lVar5);
      lVar9 = lVar11;
      func_0x000107c5ee20(lVar11,uVar6);
      func_0x00010006c090(lVar11,uVar6);
    }
  }
  func_0x000107c5457c(puVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c57cd0(puVar3);
  func_0x000107c55cf8(puVar2);
  puVar3 = puVar2;
  func_0x000107c4d1e4();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    lVar9 = *(long *)(unaff_x22 + 0x90);
    func_0x000107c56814();
    func_0x000107c61170(puVar3);
    if (lVar9 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
      func_0x000107c61174(uVar6);
      puVar3 = puVar2;
      func_0x000107c4d1e4();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10118222c);
        (*pcVar1)();
      }
      func_0x000107c5681c();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar6);
    }
    plVar10 = *(long **)(*(long *)(unaff_x22 + 0x98) + 0x18);
    func_0x000107c61174(puVar2);
    plVar7 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10118222c;
    plVar7[5] = unaff_x22 + 0x38;
    plVar7[6] = (long)plVar10;
    lVar5 = *(long *)(*plVar10 + 0x50);
    plVar7[7] = lVar5;
    lVar9 = 0;
    __sSqMa(0,lVar5);
    plVar7[8] = lVar9;
    lVar9 = *(long *)(lVar9 + -8);
    plVar7[9] = lVar9;
    uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar7[10] = uVar8;
    lVar9 = *(long *)(lVar5 + -8);
    plVar7[0xb] = lVar9;
    uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar7[0xc] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101182228);
  (*pcVar1)();
}



/* Entry: 10118222c; end: 101182273;  */

void FUN_10118222c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101182274,0,0);
  return;
}



/* Entry: 101182274; end: 101182313;  */

void FUN_101182274(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x38);
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x98) + 0x10);
  uVar1 = 0x112d62360;
  func_0x0001000285a8(0x112d62360,&UNK_10da149e0);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101182314;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x50;
  plVar2[9] = unaff_x22 + 0x48;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x40;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_FUN_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101182314; end: 10118236b;  */

void FUN_101182314(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10118236c;
  }
  else {
    pcVar1 = FUN_1011824c8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10118236c; end: 1011824c7;  */

void FUN_10118236c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar4;
  if (*(char *)(unaff_x22 + 0x11c) == '\x01') {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d8();
  }
  *(undefined **)(unaff_x22 + 0xe0) = puVar7;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000285a8(0x112d62368,&UNK_10d928280);
  puVar1 = &UNK_11038ad40;
  func_0x000107c613fc(&UNK_11038ad40,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  *(undefined **)(puVar1 + 0x20) = puVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  func_0x000107c61174(puVar7);
  func_0x000107c615f4(uVar3,2);
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar4);
  func_0x000107c61434(uVar6);
  uVar4 = uVar3;
  func_0x0001048897a0(uVar3,1,0,0x1011850c0,puVar1);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar4;
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(uVar3);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101182554;
                    /* WARNING: Could not recover jumptable at 0x0001011824c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101184aec();
  return;
}



/* Entry: 1011824c8; end: 101182553;  */

void FUN_1011824c8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar4;
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101182550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101182554; end: 1011825a7;  */

void FUN_101182554(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xf8) = param_1;
  *(undefined1 *)(lVar1 + 0x11d) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011825a8,0,0);
  return;
}



/* Entry: 1011825a8; end: 101182727;  */

void FUN_1011825a8(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(char *)(unaff_x22 + 0x11d) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xf8);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x58,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x000107c61170(uVar12);
    func_0x000107c615e8(uVar11);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101182688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar4 = *(long *)(unaff_x22 + 0x98);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c615e8(uVar10);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  plVar7 = *(long **)(lVar4 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101182728;
  plVar3[5] = unaff_x22 + 0x10;
  plVar3[6] = (long)plVar7;
  lVar8 = *(long *)(*plVar7 + 0x50);
  plVar3[7] = lVar8;
  lVar4 = 0;
  __sSqMa(0,lVar8);
  plVar3[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[9] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[10] = uVar5;
  lVar4 = *(long *)(lVar8 + -8);
  plVar3[0xb] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101182728; end: 10118276f;  */

void FUN_101182728(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101182770,0,0);
  return;
}



/* Entry: 101182770; end: 10118281b;  */

void FUN_101182770(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10118281c;
                    /* WARNING: Could not recover jumptable at 0x000101182818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x68),uVar6,
             "generateCollageSnapDocAndClaim(with:lensId:lensDurationMs:musicTrackId:musicPickerTrack:musicBeatSyncData:)"
             ,0x6b,0x7000000000000002,0x38,unaff_x22 + 0x60,uVar2,lVar3);
  return;
}



/* Entry: 10118281c; end: 10118287b;  */

void FUN_10118281c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1011828f4;
  }
  else {
    *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(lVar2 + 0x60);
    pcVar1 = FUN_10118287c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10118287c; end: 1011828f3;  */

void FUN_10118287c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x11d);
  FUN_100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar3;
  func_0x000101184e08(uVar2,uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001011828f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011828f4; end: 101182933;  */

void FUN_1011828f4(void)

{
  long unaff_x22;
  
  func_0x000101184e08(*(undefined8 *)(unaff_x22 + 0xf8),*(undefined1 *)(unaff_x22 + 0x11d));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101182930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101182934; end: 10118295f;  */

void FUN_101182934(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xcd) = param_8;
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined4 *)(unaff_x22 + 200) = param_4;
  *(undefined1 *)(unaff_x22 + 0xcc) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101182960,0,0);
  return;
}



/* Entry: 101182960; end: 101182c77;  */

void FUN_101182960(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long unaff_x22;
  long lVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x50);
  puVar2 = PTR_PTR_1126c3920;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x68) = puVar2;
  puVar3 = PTR_PTR_1126b3098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x70) = puVar3;
  func_0x000107c59fd0();
  func_0x000107c4161c(lVar9);
  func_0x000107c597bc(param_1 / 1000.0,puVar3);
  puVar4 = PTR_PTR_1126b30a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x78) = puVar4;
  func_0x000107c3e3d4();
  func_0x000107c61180();
  lVar5 = lVar9;
  func_0x000107c5d7e8();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar6 = param_3;
  if (lVar5 == 0) {
    lVar5 = 0;
    func_0x000107c5faec(0);
    uVar6 = param_3;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  lVar11 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c5a120(puVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c3e3d4();
  func_0x000107c61180();
  lVar9 = lVar11;
  func_0x000107c427c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar9 != 0) {
    lVar5 = lVar9;
    func_0x000107c4a8c4(lVar9);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    lVar11 = lVar5;
    func_0x000107c5ee30(lVar5);
    func_0x000107c61170(lVar5);
    lVar9 = lVar11;
    func_0x000107c5ee20(lVar11,uVar6);
    func_0x00010006c090(lVar11,uVar6);
  }
  lVar5 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c54580(puVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c3e3d4();
  func_0x000107c61180();
  lVar9 = lVar5;
  func_0x000107c427c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar9 != 0) {
    lVar5 = lVar9;
    func_0x000107c4a804();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      lVar11 = lVar5;
      func_0x000107c5ee30(lVar5);
      func_0x000107c61170(lVar5);
      lVar9 = lVar11;
      func_0x000107c5ee20(lVar11,uVar6);
      func_0x00010006c090(lVar11,uVar6);
    }
  }
  func_0x000107c5457c(puVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c57cd0(puVar3);
  func_0x000107c55cf8(puVar2);
  puVar3 = puVar2;
  func_0x000107c4d1e4();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    lVar9 = *(long *)(unaff_x22 + 0x58);
    func_0x000107c56814();
    func_0x000107c61170(puVar3);
    if (lVar9 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
      func_0x000107c61174(uVar6);
      puVar3 = puVar2;
      func_0x000107c4d1e4();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101182c78);
        (*pcVar1)();
      }
      func_0x000107c5681c();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar6);
    }
    plVar10 = *(long **)(*(long *)(unaff_x22 + 0x60) + 0x18);
    func_0x000107c61174(puVar2);
    plVar7 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101182c78;
    plVar7[5] = unaff_x22 + 0x10;
    plVar7[6] = (long)plVar10;
    lVar5 = *(long *)(*plVar10 + 0x50);
    plVar7[7] = lVar5;
    lVar9 = 0;
    __sSqMa(0,lVar5);
    plVar7[8] = lVar9;
    lVar9 = *(long *)(lVar9 + -8);
    plVar7[9] = lVar9;
    uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar7[10] = uVar8;
    lVar9 = *(long *)(lVar5 + -8);
    plVar7[0xb] = lVar9;
    uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar7[0xc] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101182c74);
  (*pcVar1)();
}



/* Entry: 101182c78; end: 101182cbf;  */

void FUN_101182c78(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101182cc0,0,0);
  return;
}



/* Entry: 101182cc0; end: 101182d5f;  */

void FUN_101182cc0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x10);
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x60) + 0x10);
  uVar1 = 0x112d62360;
  func_0x0001000285a8(0x112d62360,&UNK_10da149e0);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101182d60;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x28;
  plVar2[9] = unaff_x22 + 0x20;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x18;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_FUN_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101182d60; end: 101182db7;  */

void FUN_101182d60(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101182db8;
  }
  else {
    pcVar1 = FUN_101182f30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101182db8; end: 101182f2f;  */

void FUN_101182db8(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined *puVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar5;
  if (*(char *)(unaff_x22 + 0xcc) == '\x01') {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d8();
  }
  *(undefined **)(unaff_x22 + 0xa8) = puVar8;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(char *)(unaff_x22 + 0xcd) == '\0') {
    uVar3 = 0;
  }
  func_0x0001000285a8(0x112d62368,&UNK_10d928280);
  puVar1 = &UNK_11038acc8;
  func_0x000107c613fc(&UNK_11038acc8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined **)(puVar1 + 0x20) = puVar8;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  *(undefined8 *)(puVar1 + 0x40) = uVar4;
  func_0x000107c61174(uVar3);
  func_0x000107c615f4(uVar4,2);
  func_0x000107c61174(uVar6);
  func_0x000107c615f0(uVar5);
  func_0x000107c61434(uVar7);
  func_0x000107c61174(puVar8);
  uVar5 = uVar4;
  func_0x0001048897a0(uVar4,1,0,FUN_101184aec,puVar1);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(uVar4);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101182fbc;
                    /* WARNING: Could not recover jumptable at 0x000101182f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101184aec();
  return;
}



/* Entry: 101182f30; end: 101182fbb;  */

void FUN_101182f30(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar4;
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101182fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101182fbc; end: 10118300f;  */

void FUN_101182fbc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xc0) = param_1;
  *(undefined1 *)(lVar1 + 0xce) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101183010,0,0);
  return;
}



/* Entry: 101183010; end: 10118316b;  */

void FUN_101183010(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  if (*(char *)(unaff_x22 + 0xce) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x30,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(uVar5);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001011830f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(uVar6);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101183168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 10118316c; end: 1011831eb;  */

void FUN_10118316c(undefined8 param_1,long param_2,long param_3,undefined1 param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(long *)(unaff_x22 + 0x48) = unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1011831ec;
  plVar1[10] = param_6;
  plVar1[0xb] = unaff_x20;
  plVar1[8] = param_3;
  plVar1[9] = param_5;
  *(undefined1 *)(plVar1 + 0x15) = param_4;
  plVar1[7] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011834c4,0,0);
  return;
}



/* Entry: 1011831ec; end: 1011832f3;  */

void FUN_1011831ec(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101183230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101183254,0,0);
  return;
}



/* Entry: 1011832f4; end: 101183393;  */

void FUN_1011832f4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101183394;
                    /* WARNING: Could not recover jumptable at 0x000101183390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x58),
             "generateCollageSnapDocAndClaim(with:lensId:collageCreativeTools:aiSnapsLensContext:)",
             0x54,0x7000000000000002,0x4b,unaff_x22 + 0x38,uVar2,lVar3);
  return;
}



/* Entry: 101183394; end: 1011833f3;  */

void FUN_101183394(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101183464;
  }
  else {
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 0x38);
    pcVar1 = FUN_1011833f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1011833f4; end: 101183463;  */

void FUN_1011833f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101183460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101183464; end: 10118349f;  */

void FUN_101183464(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010118349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011834a0; end: 1011834c3;  */

void FUN_1011834a0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011834c4,0,0);
  return;
}



/* Entry: 1011834c4; end: 101183563;  */

void FUN_1011834c4(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x58) + 0x18);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10118351c;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101183564; end: 101183603;  */

void FUN_101183564(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x10);
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x58) + 0x10);
  uVar1 = 0x112d62360;
  func_0x0001000285a8(0x112d62360,&UNK_10da149e0);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x78) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101183604;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x28;
  plVar2[9] = unaff_x22 + 0x20;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x18;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_FUN_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101183604; end: 10118365b;  */

void FUN_101183604(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10118365c;
  }
  else {
    pcVar1 = FUN_1011837c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10118365c; end: 1011837c3;  */

void FUN_10118365c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined *puVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
  if (*(char *)(unaff_x22 + 0xa8) == '\x01') {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d8();
  }
  *(undefined **)(unaff_x22 + 0x88) = puVar8;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000285a8(0x112d62368,&UNK_10d928280);
  puVar3 = &UNK_11038ad18;
  func_0x000107c613fc(&UNK_11038ad18,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  *(undefined **)(puVar3 + 0x20) = puVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar1;
  *(undefined8 *)(puVar3 + 0x30) = uVar2;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  func_0x000107c61174(uVar2);
  func_0x000107c615f4(uVar5,2);
  func_0x000107c615f0(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(uVar1);
  uVar6 = uVar5;
  func_0x0001048897a0(uVar5,1,0,0x1011850bc,puVar3);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar6;
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(uVar5);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101183828;
                    /* WARNING: Could not recover jumptable at 0x0001011837c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101184aec();
  return;
}



/* Entry: 1011837c4; end: 101183827;  */

void FUN_1011837c4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101183824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101183828; end: 10118387b;  */

void FUN_101183828(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xa0) = param_1;
  *(undefined1 *)(lVar1 + 0xa9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10118387c,0,0);
  return;
}



/* Entry: 10118387c; end: 10118396f;  */

void FUN_10118387c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  if (*(char *)(unaff_x22 + 0xa9) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x30,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
    func_0x000107c615e8(uVar4);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101183924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615e8(uVar5);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010118396c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 101183970; end: 101183a93;  */

/* WARNING: Possible PIC construction at 0x000101183a54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101183a58) */

void FUN_101183970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101185068(0,0x112d50c78,&PTR_PTR_1126b25c0);
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c43dac(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x0001000285a8(0x112d62368,&UNK_10d928280);
  func_0x000100759c94(param_2,0);
  func_0x000100775264(0,1,FUN_101183a94,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 101183a94; end: 101183b4f;  */

void FUN_101183a94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x21;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puVar1 = (undefined8 *)0x112d62370;
  func_0x0001000285a8(0x112d62370,&UNK_10d9daed0);
  puVar2 = puVar1;
  FUN_101184d60();
  func_0x0001048da008(param_1,FUN_101183b50,0,puVar1,&UNK_11038b4c0,puVar2,&uStack_58);
  if (unaff_x21 != 0) {
    func_0x000107c613f8(&UNK_11038b4c0,puVar2,0,0);
    *puVar2 = uStack_58;
    puVar2[1] = uStack_50;
    *(undefined1 *)(puVar2 + 2) = uStack_48;
  }
  return;
}



/* Entry: 101183b50; end: 101183b7b;  */

void FUN_101183b50(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 101183b7c; end: 101183c5b;  */

void FUN_101183b7c(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  puVar5 = *(undefined8 **)(unaff_x22 + 0x48);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar1 = *(undefined8 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar1 = (undefined8 *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar5) {
      puVar1 = puVar5;
    }
    func_0x000107c60480();
  }
  if (puVar1 != (undefined8 *)0x0) {
    plVar6 = *(long **)(*(long *)(unaff_x22 + 0x58) + 0x18);
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101183c5c;
    plVar2[5] = unaff_x22 + 0x10;
    plVar2[6] = (long)plVar6;
    lVar7 = *(long *)(*plVar6 + 0x50);
    plVar2[7] = lVar7;
    lVar3 = 0;
    __sSqMa(0,lVar7);
    plVar2[8] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar2[9] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[10] = uVar4;
    lVar3 = *(long *)(lVar7 + -8);
    plVar2[0xb] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  FUN_101184d60();
  func_0x000107c613f8(&UNK_11038b4c0,puVar1,0,0);
  puVar1[1] = 0;
  *puVar1 = 1;
  *(undefined1 *)(puVar1 + 2) = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101183c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101183c5c; end: 101183ca3;  */

void FUN_101183c5c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101183ca4,0,0);
  return;
}



/* Entry: 101183ca4; end: 101183d43;  */

void FUN_101183ca4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x10);
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x58) + 0x10);
  uVar1 = 0x112d62360;
  func_0x0001000285a8(0x112d62360,&UNK_10da149e0);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x78) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101183d44;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x28;
  plVar2[9] = unaff_x22 + 0x20;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x18;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_FUN_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101183d44; end: 101183d9b;  */

void FUN_101183d44(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101183d9c;
  }
  else {
    pcVar1 = (code *)0x1011850b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101183d9c; end: 101183f67;  */

void FUN_101183d9c(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
  lVar2 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  uVar3 = lVar12 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  (**(code **)(lVar11 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar13 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar4 = &UNK_11038ad68;
  func_0x000107c613fc(&UNK_11038ad68,uVar13 + lVar12,uVar8 | 7);
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar13,uVar3,lVar2);
  func_0x000107c615c0(uVar3);
  uVar5 = 0x112d62380;
  func_0x0001000285a8(0x112d62380,&UNK_10d990b80);
  func_0x000107c613fc();
  pcVar6 = FUN_101184e1c;
  func_0x0001000bdd8c(FUN_101184e1c,puVar4,uVar5);
  *(code **)(unaff_x22 + 0x88) = pcVar6;
  func_0x0001000285a8(0x112d62388,&UNK_10d9282b0);
  puVar4 = &UNK_11038ad90;
  func_0x000107c613fc(&UNK_11038ad90,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  *(code **)(puVar4 + 0x20) = pcVar6;
  func_0x000107c615f0(uVar9);
  func_0x000107c615f0(uVar10);
  func_0x000107c61434(uVar1);
  func_0x000107c6157c(pcVar6);
  uVar5 = uVar9;
  func_0x0001048897a0(uVar9,1,0,FUN_101184ef0,puVar4);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar5;
  func_0x000107c61574(puVar4);
  func_0x000107c615e8(uVar9);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101183f68;
                    /* WARNING: Could not recover jumptable at 0x000101183f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101184c10();
  return;
}



/* Entry: 101183f68; end: 101183fbb;  */

void FUN_101183f68(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xa0) = param_1;
  *(undefined1 *)(lVar1 + 200) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101183fbc,0,0);
  return;
}



/* Entry: 101183fbc; end: 101184283;  */

void FUN_101183fbc(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  long *plVar16;
  
  uVar10 = *(ulong *)(unaff_x22 + 0xa0);
  if (*(char *)(unaff_x22 + 200) == '\x01') {
    *(ulong *)(unaff_x22 + 0x30) = uVar10;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x30,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
    func_0x000107c615e8(uVar15);
    func_0x000107c615e8(uVar11);
    func_0x000107c61574(uVar3);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
    if (uVar10 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar10;
      if (-1 < *(long *)(unaff_x22 + 0xa0)) {
        uVar9 = uVar10 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    uVar8 = *(ulong *)(unaff_x22 + 0x48);
    if (uVar8 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uVar8 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar8) {
        uVar12 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar9 == uVar12) {
      lVar13 = *(long *)(unaff_x22 + 0x58);
      *(ulong *)(unaff_x22 + 0x38) = uVar10;
      lVar5 = 0x112d453c8;
      func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
      uVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0xa8) = uVar10;
      lVar5 = 0;
      func_0x000107c5fd0c();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar10,1,1,lVar5);
      lVar14 = *(long *)(lVar13 + 0x20);
      *(long *)(unaff_x22 + 0xb0) = lVar14;
      plVar16 = (long *)0xe0;
      func_0x000107c6157c(lVar14);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb8) = plVar16;
      lVar5 = 0x112d50c68;
      func_0x0001000285a8(0x112d50c68,&UNK_10d9175e8);
      lVar13 = 0x112d515e8;
      func_0x0001000285a8(0x112d515e8,&UNK_10d9282e0);
      lVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      lVar7 = lVar6;
      func_0x000100fb28f4();
      *plVar16 = unaff_x22;
      plVar16[1] = (long)FUN_101184284;
      puVar1 = PTR___ss5ErrorWS_11034ee10;
      plVar16[0x16] = unaff_x22 + 0x38;
      plVar16[0x17] = unaff_x22 + 0x40;
      plVar16[0x14] = lVar7;
      plVar16[0x15] = (long)puVar1;
      plVar16[0x12] = lVar13;
      plVar16[0x13] = lVar6;
      plVar16[0x10] = lVar14;
      plVar16[0x11] = lVar5;
      plVar16[0xe] = uVar10;
      plVar16[0xf] = (long)&UNK_10d9282d0;
      lVar5 = *(long *)(lVar6 + -8);
      plVar16[0x18] = lVar5;
      uVar10 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar16[0x19] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
      return;
    }
    puVar4 = *(ulong **)(unaff_x22 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000101184efc(puVar4,*(undefined1 *)(unaff_x22 + 200));
    FUN_101184d60();
    func_0x000107c613f8(&UNK_11038b4c0,puVar4,0,0);
    *puVar4 = uVar12;
    puVar4[1] = uVar9;
    *(undefined1 *)(puVar4 + 2) = 0;
    func_0x000107c61654();
    func_0x000107c61574(uVar11);
    func_0x000107c615e8(uVar3);
    func_0x000107c615e8(uVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x000101184110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101184284; end: 10118432b;  */

void FUN_101184284(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xb8));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar6 + 0xa8);
    uVar2 = *(undefined8 *)(lVar6 + 0xb0);
    uVar5 = *(undefined8 *)(lVar6 + 0xa0);
    *(undefined8 *)(lVar6 + 0xc0) = param_1;
    uVar3 = *(undefined1 *)(lVar6 + 200);
    func_0x0001000abe54(uVar1);
    func_0x000107c61574(uVar2);
    func_0x000101184efc(uVar5,uVar3);
    func_0x000107c615c0(uVar1);
    pcVar4 = FUN_10118432c;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar6 + 0xb0));
    pcVar4 = FUN_101184378;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 10118432c; end: 101184377;  */

void FUN_10118432c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101184374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 101184378; end: 1011843f3;  */

void FUN_101184378(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined1 *)(unaff_x22 + 200);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar5);
  func_0x0001000abe54(uVar3);
  func_0x000101184efc(uVar1,uVar4);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001011843f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011843f4; end: 1011844eb;  */

void FUN_1011843f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  FUN_101185068(0,0x112d62390,&PTR_PTR_1126aff40);
  func_0x000107c5fc48(param_3,uVar1);
  func_0x0001000d224c(&uStack_48);
  pcStack_58 = FUN_101185028;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  pcStack_68 = FUN_1011844ec;
  puStack_60 = &UNK_11038add0;
  ppuVar2 = &puStack_78;
  uStack_50 = param_1;
  func_0x000107c60bc4(ppuVar2);
  uVar1 = uStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c442d4(param_2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(uStack_48);
  return;
}



/* Entry: 1011844ec; end: 101184557;  */

void FUN_1011844ec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_101185068(0,0x112d50c78,&PTR_PTR_1126b25c0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101184558; end: 1011845ff;  */

void FUN_101184558(undefined8 param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = *param_2;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1011845b8;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)param_3;
  lVar4 = *(long *)(*param_3 + 0x50);
  plVar1[7] = lVar4;
  lVar2 = 0;
  __sSqMa(0,lVar4);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar4 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101184600; end: 10118469f;  */

void FUN_101184600(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1011846a0;
                    /* WARNING: Could not recover jumptable at 0x00010118469c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x50),
             "generateMashupCompatibleSnapDocs(fromPHAssetMediaSegments:factoryQoS:)",0x46,
             0x7000000000000002,0xc3,unaff_x22 + 0x38,uVar2,lVar3);
  return;
}



/* Entry: 1011846a0; end: 1011846ff;  */

void FUN_1011846a0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10118476c;
  }
  else {
    *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar2 + 0x38);
    pcVar1 = FUN_101184700;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101184700; end: 10118476b;  */

void FUN_101184700(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x48);
  FUN_100fb85f0();
  puVar1 = &UNK_11072cd20;
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar2;
  func_0x0001000834e4(unaff_x22 + 0x10);
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000101184768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10118476c; end: 10118479f;  */

void FUN_10118476c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010118479c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011847a0; end: 101184833;  */

void FUN_1011847a0(long param_1,long param_2,long param_3,undefined1 param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1011850a8;
  plVar2[8] = param_1;
  plVar2[9] = lVar3;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  plVar2[10] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_1011831ec;
  plVar1[10] = param_6;
  plVar1[0xb] = lVar3;
  plVar1[8] = param_3;
  plVar1[9] = param_5;
  *(undefined1 *)(plVar1 + 0x15) = param_4;
  plVar1[7] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011834c4,0,0);
  return;
}



/* Entry: 101184834; end: 101184893;  */

void FUN_101184834(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1011850ac;
  plVar1[10] = param_2;
  plVar1[0xb] = lVar2;
  plVar1[9] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101183b7c,0,0);
  return;
}



/* Entry: 101184894; end: 10118493f;  */

void FUN_101184894(long param_1,long param_2,long param_3,undefined1 param_4,undefined4 param_5,
                  long param_6,long param_7,long param_8)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101184940;
  plVar1[0x12] = param_8;
  plVar1[0x13] = lVar2;
  plVar1[0x10] = param_6;
  plVar1[0x11] = param_7;
  *(undefined4 *)(plVar1 + 0x23) = param_5;
  *(undefined1 *)((long)plVar1 + 0x11c) = param_4;
  plVar1[0xe] = param_2;
  plVar1[0xf] = param_3;
  plVar1[0xd] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101181f14,0,0);
  return;
}



/* Entry: 101184940; end: 10118497b;  */

void FUN_101184940(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101184978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10118497c; end: 1011849fb;  */

void FUN_10118497c(long param_1,long param_2,undefined1 param_3,long param_4,long param_5)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1011850b0;
  plVar1[10] = param_5;
  plVar1[0xb] = lVar2;
  plVar1[8] = param_2;
  plVar1[9] = param_4;
  *(undefined1 *)(plVar1 + 0x15) = param_3;
  plVar1[7] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011834c4,0,0);
  return;
}



/* Entry: 1011849fc; end: 101184aa3;  */

void FUN_1011849fc(long param_1,long param_2,undefined1 param_3,undefined4 param_4,long param_5,
                  long param_6,long param_7,undefined1 param_8)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101184aa4;
  *(undefined1 *)((long)plVar1 + 0xcd) = param_8;
  plVar1[0xb] = param_7;
  plVar1[0xc] = lVar2;
  plVar1[9] = param_5;
  plVar1[10] = param_6;
  *(undefined4 *)(plVar1 + 0x19) = param_4;
  *(undefined1 *)((long)plVar1 + 0xcc) = param_3;
  plVar1[7] = param_1;
  plVar1[8] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101182960,0,0);
  return;
}



/* Entry: 101184aa4; end: 101184aeb;  */

void FUN_101184aa4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101184ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101184aec; end: 101184b07;  */

/* WARNING: Possible PIC construction at 0x000101183a54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101183a58) */

void FUN_101184aec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = 0;
  FUN_101185068(0,0x112d50c78,&PTR_PTR_1126b25c0);
  func_0x000107c5fc48(uVar2,uVar1);
  func_0x000107c43dac(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112d62368,&UNK_10d928280);
  func_0x000100759c94(uVar3,0);
  func_0x000100775264(0,1,FUN_101183a94,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 101184b08; end: 101184bcf;  */

void FUN_101184b08(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101184b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101184bd0;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11038acf0;
  func_0x000107c613fc(&UNK_11038acf0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101184d40,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101184bd0; end: 101184c0f;  */

void FUN_101184bd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1011850b4,0,0);
  return;
}



/* Entry: 101184c10; end: 101184c27;  */

void FUN_101184c10(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101184c28,0,0);
  return;
}



/* Entry: 101184c28; end: 101184cef;  */

void FUN_101184c28(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101184c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101184cf0;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11038adb8;
  func_0x000107c613fc(&UNK_11038adb8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101184fb8,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101184cf0; end: 101184d2f;  */

void FUN_101184cf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101184d30,0,0);
  return;
}



/* Entry: 101184d30; end: 101184d5f;  */

void FUN_101184d30(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101184d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}


