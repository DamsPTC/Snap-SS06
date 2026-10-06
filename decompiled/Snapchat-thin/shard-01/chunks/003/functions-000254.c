/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f5b940; end: 100f5b95b;  */

void FUN_100f5b940(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f5b95c; end: 100f5b97b;  */

void FUN_100f5b95c(void)

{
  func_0x000107c61168(&PTR_PTR_112d4e698);
  return;
}



/* Entry: 100f5b97c; end: 100f5b9c3; -[SCCreativeToolItemReportingPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5b97c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e6f0;
  func_0x000107c61428(param_1 + _DAT_112d4e6f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5b9c4; end: 100f5ba1b; -[SCCreativeToolItemReportingPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5b9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e6f0;
  func_0x000107c61428(param_1 + _DAT_112d4e6f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5ba1c; end: 100f5bae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5ba1c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_100f5b95c();
    func_0x000107c613fc();
    lVar3 = lVar1;
    func_0x000107c4ea18(lVar1);
    func_0x000107c61180();
    uVar4 = 0;
    FUN_100f5b30c(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c4fba8(lVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d4e6f8);
    *(undefined8 *)(unaff_x20 + _DAT_112d4e6f8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4);
    return;
  }
  return;
}



/* Entry: 100f5bae4; end: 100f5bb0b; -[SCCreativeToolItemReportingPluginEntryPoint begin] */

void FUN_100f5bae4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f5ba1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f5bb0c; end: 100f5bb4f; -[SCCreativeToolItemReportingPluginEntryPoint end] */

void FUN_100f5bb0c(undefined8 param_1)

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



/* Entry: 100f5bb50; end: 100f5bc6f;  */

void FUN_100f5bb50(long param_1,long param_2,long param_3)

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
                        "CreativeToolItemReportingPlugin/SCCreativeToolItemReportingPluginEntryPoint.swift"
                        ,0x51,2,0x21,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5bc70);
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



/* Entry: 100f5bc70; end: 100f5bd1b; -[SCCreativeToolItemReportingPluginEntryPoint setValue:forIvarName:] */

void FUN_100f5bc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f5bb50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f5bd1c; end: 100f5bd7b; -[SCCreativeToolItemReportingPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5bd1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4e6f0,0);
  *(undefined8 *)(param_1 + _DAT_112d4e6f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f5bd7c; end: 100f5bdaf;  */

void FUN_100f5bd7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f5bdb0; end: 100f5bde7; -[SCCreativeToolItemReportingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5bdb0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4e6f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4e6f8));
  return;
}



/* Entry: 100f5bde8; end: 100f5be07;  */

void FUN_100f5bde8(void)

{
  func_0x000107c61168(&PTR_PTR_1127a4fc0);
  return;
}



/* Entry: 100f5be08; end: 100f5be67; -[_TtC24RemixCaptureStatusSenderP33_EA8D8E5989BF0EF3F76FE030AB017C8537RemixCaptureFetchConversationCallback onFetchConversationComplete:] */

/* WARNING: Possible PIC construction at 0x000100f5be50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5be54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5be08(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d4e728);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar1)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f5be68; end: 100f5bea7; -[_TtC24RemixCaptureStatusSenderP33_EA8D8E5989BF0EF3F76FE030AB017C8537RemixCaptureFetchConversationCallback onError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5be68(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d4e730);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f5bea8; end: 100f5bf07; -[_TtC24RemixCaptureStatusSenderP33_EA8D8E5989BF0EF3F76FE030AB017C8537RemixCaptureFetchConversationCallback init] */

void FUN_100f5bea8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemixCaptureStatusSender.RemixCaptureFetchConversationCallback",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5bed4);
  (*pcVar1)();
}



/* Entry: 100f5bf08; end: 100f5bf47; -[_TtC24RemixCaptureStatusSenderP33_EA8D8E5989BF0EF3F76FE030AB017C8537RemixCaptureFetchConversationCallback .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f5bf28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5bf2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5bf08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4e728 + 8));
  return;
}



/* Entry: 100f5bf48; end: 100f5bfaf;  */

void FUN_100f5bf48(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100f5bfb0;
  plVar1[0xe] = param_4;
  plVar1[0xf] = param_2;
  plVar1[0xd] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5c124,0,0);
  return;
}



/* Entry: 100f5bfb0; end: 100f5bfff;  */

void FUN_100f5bfb0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5c000,0,0);
  return;
}



/* Entry: 100f5c000; end: 100f5c107;  */

void FUN_100f5c000(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x20);
  if (lVar6 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0x10);
    func_0x000100bc2654(0);
    lVar2 = *(long *)(lVar7 + 0x10);
    uVar1 = *(undefined8 *)(lVar7 + 0x18);
    func_0x000107c61434(uVar1);
    func_0x000103c1912c(lVar2,uVar1);
    if (lVar2 != 0) {
      lVar7 = lVar6;
      lVar5 = lVar2;
      func_0x000108606200(lVar6,lVar2);
      func_0x000107c61180();
      lVar3 = lVar6;
      func_0x000107c40674(lVar6);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
      func_0x000107c5faec(lVar4);
      func_0x000107c61170(lVar4);
      FUN_100f5c358(lVar3,lVar5,lVar7);
      func_0x000107c6142c(lVar5);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000100f5c104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f5c108; end: 100f5c123;  */

void FUN_100f5c108(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5c124,0,0);
  return;
}



/* Entry: 100f5c124; end: 100f5c2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5c124(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x68) & 0xffffffffffff;
  if ((*(ulong *)(unaff_x22 + 0x70) & 0x2000000000000000) != 0) {
    uVar2 = *(ulong *)(unaff_x22 + 0x70) >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x60);
    lVar9 = *(long *)(unaff_x22 + 0x60);
    if (lVar9 != 0) {
      lVar4 = lVar9;
      func_0x000107c44174();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x80) = lVar4;
      func_0x000107c615e8(lVar9);
      if (lVar4 != 0) {
        lVar9 = *(long *)(unaff_x22 + 0x68);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
        func_0x000100bc2654(0);
        func_0x000107c61434(uVar3);
        func_0x000103c1912c(lVar9,uVar3);
        *(long *)(unaff_x22 + 0x88) = lVar9;
        if (lVar9 != 0) {
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x60;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_100f5c2dc;
          lVar9 = unaff_x22 + 0x10;
          func_0x000107c61448(lVar9,0);
          puVar5 = &UNK_11036dc70;
          func_0x000107c613fc(&UNK_11036dc70,0x18,7);
          *(long *)(puVar5 + 0x10) = lVar9;
          puVar6 = &UNK_11036dc98;
          func_0x000107c613fc(&UNK_11036dc98,0x18,7);
          *(long *)(puVar6 + 0x10) = lVar9;
          lVar7 = 0;
          func_0x000100f5c5f8();
          lVar9 = lVar7;
          func_0x000107c610f8();
          puVar1 = (undefined8 *)(lVar9 + _DAT_112d4e728);
          *puVar1 = FUN_100f5c8dc;
          puVar1[1] = puVar5;
          puVar1 = (undefined8 *)(lVar9 + _DAT_112d4e730);
          *puVar1 = FUN_100f5c90c;
          puVar1[1] = puVar6;
          plVar8 = (long *)(unaff_x22 + 0x50);
          *plVar8 = lVar9;
          *(long *)(unaff_x22 + 0x58) = lVar7;
          func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
          func_0x000107c4304c(lVar4);
          func_0x000107c61170(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
        func_0x000107c61170(lVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100f5c2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 100f5c2dc; end: 100f5c357;  */

void FUN_100f5c2dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100f5c31c,0,0);
  return;
}



/* Entry: 100f5c358; end: 100f5c4bf;  */

void FUN_100f5c358(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  FUN_100f5c6e0();
  if (param_3 != 0) {
    func_0x0001000d224c(&lStack_48);
    if (lStack_48 != 0) {
      lVar1 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x18) = 2;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(undefined8 *)(lVar1 + 0x20) = param_1;
      *(undefined8 *)(lVar1 + 0x28) = param_2;
      func_0x000107c61434(param_2);
      lVar2 = lVar1;
      func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar1);
      puVar3 = &UNK_11036dc20;
      func_0x000107c613fc(&UNK_11036dc20,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = param_1;
      *(undefined8 *)(puVar3 + 0x18) = param_2;
      pcStack_58 = FUN_100f5c8bc;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      uStack_68 = 0x100f5c588;
      puStack_60 = &UNK_11036dc38;
      ppuVar4 = &puStack_78;
      puStack_50 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_50;
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c51e10(lStack_48);
      func_0x000107c61170(param_3);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lStack_48);
      param_3 = lVar2;
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 100f5c4c0; end: 100f5c5c3; -[_TtC24RemixCaptureStatusSender24RemixCaptureStatusSender sendRemixCaptureStatusMessageTo:] */

/* WARNING: Possible PIC construction at 0x000100f5c55c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5c560) */

void FUN_100f5c4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c5faec();
  puVar1 = &UNK_11036dbf8;
  func_0x000107c613fc(&UNK_11036dbf8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c61580(param_1,2);
  func_0x000107c61434(param_2);
  func_0x0001001ca524(0,4,0x2c,4,0,0,&UNK_10d914a98,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100f5c5c4; end: 100f5c637;  */

void FUN_100f5c5c4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f5c638; end: 100f5c6a3;  */

void FUN_100f5c638(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100f5c6a4;
  plVar4[2] = lVar1;
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_100f5bfb0;
  plVar3[0xe] = lVar5;
  plVar3[0xf] = lVar1;
  plVar3[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5c124,0,0);
  return;
}



/* Entry: 100f5c6a4; end: 100f5c6df;  */

void FUN_100f5c6a4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f5c6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f5c6e0; end: 100f5c8bb;  */

undefined * FUN_100f5c6e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126be6c0;
  func_0x000107c610f8(PTR_PTR_1126be6c0);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a60c8;
  func_0x000107c610f8(PTR_PTR_1126a60c8);
  func_0x000107c453e4();
  func_0x000107c57ca4(puVar1);
  puVar3 = PTR_PTR_1126ba668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c59868();
  puVar8 = PTR_PTR_1126b28f8;
  func_0x000107c610f8(PTR_PTR_1126b28f8);
  func_0x000107c477a4();
  puVar4 = puVar8;
  func_0x000107c5e42c();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = puVar3;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar8;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar8);
    func_0x00010006c00c(puVar5,param_2);
    puVar8 = puVar4;
    func_0x000107c3ecc8(puVar4);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126be6d0;
    func_0x000107c610f8(PTR_PTR_1126be6d0);
    puVar7 = puVar5;
    func_0x000107c5ee20(puVar5,param_2);
    func_0x000107c46080(puVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x00010006c090(puVar5,param_2);
    puVar8 = puVar6;
    func_0x000107c3ecc8(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x00010006c090(puVar5,param_2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
  }
  return puVar8;
}



/* Entry: 100f5c8bc; end: 100f5c8db;  */

void FUN_100f5c8bc(void)

{
  return;
}



/* Entry: 100f5c8dc; end: 100f5c90b;  */

void FUN_100f5c8dc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 100f5c90c; end: 100f5c91f;  */

void FUN_100f5c90c(void)

{
  long unaff_x20;
  
  **(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x10) + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 100f5c920; end: 100f5c963;  */

void FUN_100f5c920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 100f5c964; end: 100f5ca93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5c964(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar5,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c407c0();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    func_0x0001000285a8(0x112d4e908,&UNK_10d914b00);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c4d48c();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar3);
    lVar4 = 0;
    func_0x000100f5c618();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined1 **)(lVar4 + 0x18) = puVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
  }
  return;
}



/* Entry: 100f5ca94; end: 100f5ca9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5ca94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c407c0();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    func_0x0001000285a8(0x112d4e908,&UNK_10d914b00);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    func_0x000107c4d48c();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar3);
    lVar4 = 0;
    func_0x000100f5c618();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined1 **)(lVar4 + 0x18) = puVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
  }
  return;
}



/* Entry: 100f5ca9c; end: 100f5cabf;  */

/* WARNING: Possible PIC construction at 0x000100f5caa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5caac) */

void FUN_100f5ca9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100f5cac0; end: 100f5cb13;  */

void FUN_100f5cac0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f5cb14; end: 100f5cb93;  */

void FUN_100f5cb14(undefined8 param_1)

{
  if (lRam0000000112d4e840 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61b5a8);
  return;
}



/* Entry: 100f5cb94; end: 100f5cbff;  */

void FUN_100f5cb94(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_11036dcc0;
  func_0x000107c613fc(&UNK_11036dcc0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  FUN_1013ce684(0);
  func_0x000107c610f8();
  pcVar2 = FUN_100f5cc00;
  func_0x0001013ce51c(FUN_100f5cc00,puVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 100f5cc00; end: 100f5cc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5cc00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c407c0();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    func_0x0001000285a8(0x112d4e908,&UNK_10d914b00);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    func_0x000107c4d48c();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar3);
    lVar4 = 0;
    func_0x000100f5c618();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined1 **)(lVar4 + 0x18) = puVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
  }
  return;
}



/* Entry: 100f5cc04; end: 100f5cc0f; -[SCRemixCaptureStatusSenderServiceProvider coreMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5cc04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e910;
  func_0x000107c61428(param_1 + _DAT_112d4e910,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5cc10; end: 100f5cc1b; -[SCRemixCaptureStatusSenderServiceProvider setCoreMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5cc10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e910;
  func_0x000107c61428(param_1 + _DAT_112d4e910,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5cc1c; end: 100f5cc27; -[SCRemixCaptureStatusSenderServiceProvider nativeMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5cc1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e918;
  func_0x000107c61428(param_1 + _DAT_112d4e918,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5cc28; end: 100f5cc33; -[SCRemixCaptureStatusSenderServiceProvider setNativeMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5cc28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e918;
  func_0x000107c61428(param_1 + _DAT_112d4e918,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5cc34; end: 100f5cc3f; -[SCRemixCaptureStatusSenderServiceProvider userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5cc34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e920;
  func_0x000107c61428(param_1 + _DAT_112d4e920,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5cc40; end: 100f5cc83;  */

void FUN_100f5cc40(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f5cc84; end: 100f5cc8f; -[SCRemixCaptureStatusSenderServiceProvider setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5cc84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e920;
  func_0x000107c61428(param_1 + _DAT_112d4e920,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5cc90; end: 100f5cce3;  */

void FUN_100f5cc90(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5cce4; end: 100f5ce47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5cce4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c407c4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d478();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5da74();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = 0;
        FUN_100f5cb14();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x10) = lVar1;
        *(long *)(lVar4 + 0x18) = lVar2;
        *(long *)(lVar4 + 0x20) = lVar3;
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d4e928);
        *(long *)(unaff_x20 + _DAT_112d4e928) = lVar4;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(uVar6);
        puVar5 = &UNK_11036dd00;
        func_0x000107c613fc(&UNK_11036dd00,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,lVar4);
        uVar6 = 0;
        FUN_1013ce684(0);
        func_0x000107c610f8();
        func_0x0001013ce51c(FUN_100f5ce48,puVar5,uVar6);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(lVar4);
        return;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100f5ce48; end: 100f5ce4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5ce48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c407c0();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    func_0x0001000285a8(0x112d4e908,&UNK_10d914b00);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    func_0x000107c4d48c();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar3);
    lVar4 = 0;
    func_0x000100f5c618();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined1 **)(lVar4 + 0x18) = puVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
  }
  return;
}



/* Entry: 100f5ce50; end: 100f5cedb; -[SCRemixCaptureStatusSenderServiceProvider provide] */

void FUN_100f5ce50(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100f5cce4();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "RemixCaptureStatusSender/SCRemixCaptureStatusSenderServiceProvider.swift",
                      0x48,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5cedc);
  (*pcVar1)();
}



/* Entry: 100f5cedc; end: 100f5cf0f; -[SCRemixCaptureStatusSenderServiceProvider __safeProvide] */

void FUN_100f5cedc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100f5cce4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f5cf10; end: 100f5cf53; -[SCRemixCaptureStatusSenderServiceProvider end] */

void FUN_100f5cf10(undefined8 param_1)

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



/* Entry: 100f5cf54; end: 100f5d15b;  */

void FUN_100f5cf54(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e3960)) {
    uVar2 = 0xd000000000000015;
    func_0x000107c605b8(0xd000000000000015,0x800000010ef1c6a0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000017;
      if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ecb20)) ||
         (func_0x000107c605b8(0xd000000000000017,0x800000010ef134e0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5698c();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "RemixCaptureStatusSender/SCRemixCaptureStatusSenderServiceProvider.swift"
                                ,0x48,2,0x33,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5d15c);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a3f8();
      }
      goto LAB_100f5cfec;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c539c8();
LAB_100f5cfec:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f5d15c; end: 100f5d207; -[SCRemixCaptureStatusSenderServiceProvider setValue:forIvarName:] */

void FUN_100f5d15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f5cf54(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f5d208; end: 100f5d28f; -[SCRemixCaptureStatusSenderServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5d208(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4e910,0);
  func_0x000107c61614(param_1 + _DAT_112d4e918,0);
  func_0x000107c61614(param_1 + _DAT_112d4e920,0);
  *(undefined8 *)(param_1 + _DAT_112d4e928) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f5d290; end: 100f5d2c3;  */

void FUN_100f5d290(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f5d2c4; end: 100f5d31b; -[SCRemixCaptureStatusSenderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5d2c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4e910);
  func_0x000107c61610(param_1 + _DAT_112d4e918);
  func_0x000107c61610(param_1 + _DAT_112d4e920);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4e928));
  return;
}



/* Entry: 100f5d31c; end: 100f5d33b;  */

void FUN_100f5d31c(void)

{
  func_0x000107c61168(&PTR_PTR_112d4e970);
  return;
}



/* Entry: 100f5d33c; end: 100f5d39b; -[_TtC40StickerCutoutStatusSenderServiceProviderP33_1CB7D5C3E671AFC304BE49F2609A034A38StickerCutoutFetchConversationCallback onFetchConversationComplete:] */

/* WARNING: Possible PIC construction at 0x000100f5d384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5d388) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5d33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d4e9e0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar1)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f5d39c; end: 100f5d3db; -[_TtC40StickerCutoutStatusSenderServiceProviderP33_1CB7D5C3E671AFC304BE49F2609A034A38StickerCutoutFetchConversationCallback onError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5d39c(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d4e9e8);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f5d3dc; end: 100f5d43b; -[_TtC40StickerCutoutStatusSenderServiceProviderP33_1CB7D5C3E671AFC304BE49F2609A034A38StickerCutoutFetchConversationCallback init] */

void FUN_100f5d3dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StickerCutoutStatusSenderServiceProvider.StickerCutoutFetchConversationCallback"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5d408);
  (*pcVar1)();
}



/* Entry: 100f5d43c; end: 100f5d47b; -[_TtC40StickerCutoutStatusSenderServiceProviderP33_1CB7D5C3E671AFC304BE49F2609A034A38StickerCutoutFetchConversationCallback .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f5d45c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5d460) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5d43c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4e9e0 + 8));
  return;
}



/* Entry: 100f5d47c; end: 100f5d4e3;  */

void FUN_100f5d47c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100f5d4e4;
  plVar1[0xe] = param_4;
  plVar1[0xf] = param_2;
  plVar1[0xd] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5d658,0,0);
  return;
}



/* Entry: 100f5d4e4; end: 100f5d533;  */

void FUN_100f5d4e4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5d534,0,0);
  return;
}



/* Entry: 100f5d534; end: 100f5d63b;  */

void FUN_100f5d534(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x20);
  if (lVar6 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0x10);
    func_0x000100bc2654(0);
    lVar2 = *(long *)(lVar7 + 0x10);
    uVar1 = *(undefined8 *)(lVar7 + 0x18);
    func_0x000107c61434(uVar1);
    func_0x000103c1912c(lVar2,uVar1);
    if (lVar2 != 0) {
      lVar7 = lVar6;
      lVar5 = lVar2;
      func_0x000108606200(lVar6,lVar2);
      func_0x000107c61180();
      lVar3 = lVar6;
      func_0x000107c40674(lVar6);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
      func_0x000107c5faec(lVar4);
      func_0x000107c61170(lVar4);
      FUN_100f5d88c(lVar3,lVar5,lVar7);
      func_0x000107c6142c(lVar5);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000100f5d638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f5d63c; end: 100f5d657;  */

void FUN_100f5d63c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5d658,0,0);
  return;
}



/* Entry: 100f5d658; end: 100f5d80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5d658(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x68) & 0xffffffffffff;
  if ((*(ulong *)(unaff_x22 + 0x70) & 0x2000000000000000) != 0) {
    uVar2 = *(ulong *)(unaff_x22 + 0x70) >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x60);
    lVar9 = *(long *)(unaff_x22 + 0x60);
    if (lVar9 != 0) {
      lVar4 = lVar9;
      func_0x000107c44174();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x80) = lVar4;
      func_0x000107c615e8(lVar9);
      if (lVar4 != 0) {
        lVar9 = *(long *)(unaff_x22 + 0x68);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
        func_0x000100bc2654(0);
        func_0x000107c61434(uVar3);
        func_0x000103c1912c(lVar9,uVar3);
        *(long *)(unaff_x22 + 0x88) = lVar9;
        if (lVar9 != 0) {
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x60;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_100f5d810;
          lVar9 = unaff_x22 + 0x10;
          func_0x000107c61448(lVar9,0);
          puVar5 = &UNK_11036de20;
          func_0x000107c613fc(&UNK_11036de20,0x18,7);
          *(long *)(puVar5 + 0x10) = lVar9;
          puVar6 = &UNK_11036de48;
          func_0x000107c613fc(&UNK_11036de48,0x18,7);
          *(long *)(puVar6 + 0x10) = lVar9;
          lVar7 = 0;
          func_0x000100f5dafc();
          lVar9 = lVar7;
          func_0x000107c610f8();
          puVar1 = (undefined8 *)(lVar9 + _DAT_112d4e9e0);
          *puVar1 = FUN_100f5dde0;
          puVar1[1] = puVar5;
          puVar1 = (undefined8 *)(lVar9 + _DAT_112d4e9e8);
          *puVar1 = FUN_100f5de10;
          puVar1[1] = puVar6;
          plVar8 = (long *)(unaff_x22 + 0x50);
          *plVar8 = lVar9;
          *(long *)(unaff_x22 + 0x58) = lVar7;
          func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
          func_0x000107c4304c(lVar4);
          func_0x000107c61170(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
        func_0x000107c61170(lVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100f5d80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 100f5d810; end: 100f5d88b;  */

void FUN_100f5d810(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100f5d850,0,0);
  return;
}



/* Entry: 100f5d88c; end: 100f5d9f3;  */

void FUN_100f5d88c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  FUN_100f5dbe4();
  if (param_3 != 0) {
    func_0x0001000d224c(&lStack_48);
    if (lStack_48 != 0) {
      lVar1 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x18) = 2;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(undefined8 *)(lVar1 + 0x20) = param_1;
      *(undefined8 *)(lVar1 + 0x28) = param_2;
      func_0x000107c61434(param_2);
      lVar2 = lVar1;
      func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar1);
      puVar3 = &UNK_11036ddd0;
      func_0x000107c613fc(&UNK_11036ddd0,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = param_1;
      *(undefined8 *)(puVar3 + 0x18) = param_2;
      pcStack_58 = FUN_100f5ddc0;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      uStack_68 = 0x100f5c588;
      puStack_60 = &UNK_11036dde8;
      ppuVar4 = &puStack_78;
      puStack_50 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_50;
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c51e10(lStack_48);
      func_0x000107c61170(param_3);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lStack_48);
      param_3 = lVar2;
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 100f5d9f4; end: 100f5dac7; -[_TtC40StickerCutoutStatusSenderServiceProvider25StickerCutoutStatusSender sendStickerCutoutStatusMessageTo:presentingPage:] */

/* WARNING: Possible PIC construction at 0x000100f5da98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5da9c) */

void FUN_100f5d9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c5faec();
  puVar1 = &UNK_11036dda8;
  func_0x000107c613fc(&UNK_11036dda8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c61580(param_1,2);
  func_0x000107c61434(param_2);
  func_0x0001001ca524(param_4,1,0x2c,4,0,0,&UNK_10d914bd8,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100f5dac8; end: 100f5db3b;  */

void FUN_100f5dac8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f5db3c; end: 100f5dba7;  */

void FUN_100f5db3c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100f5dba8;
  plVar4[2] = lVar1;
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_100f5d4e4;
  plVar3[0xe] = lVar5;
  plVar3[0xf] = lVar1;
  plVar3[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5d658,0,0);
  return;
}



/* Entry: 100f5dba8; end: 100f5dbe3;  */

void FUN_100f5dba8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f5dbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f5dbe4; end: 100f5ddbf;  */

undefined * FUN_100f5dbe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126be6c0;
  func_0x000107c610f8(PTR_PTR_1126be6c0);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a60d0;
  func_0x000107c610f8(PTR_PTR_1126a60d0);
  func_0x000107c453e4();
  func_0x000107c59894(puVar1);
  puVar3 = PTR_PTR_1126ba668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c59868();
  puVar8 = PTR_PTR_1126b28f8;
  func_0x000107c610f8(PTR_PTR_1126b28f8);
  func_0x000107c477a4();
  puVar4 = puVar8;
  func_0x000107c5e42c();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = puVar3;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar8;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar8);
    func_0x00010006c00c(puVar5,param_2);
    puVar8 = puVar4;
    func_0x000107c3ecc8(puVar4);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126be6d0;
    func_0x000107c610f8(PTR_PTR_1126be6d0);
    puVar7 = puVar5;
    func_0x000107c5ee20(puVar5,param_2);
    func_0x000107c46080(puVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x00010006c090(puVar5,param_2);
    puVar8 = puVar6;
    func_0x000107c3ecc8(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x00010006c090(puVar5,param_2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
  }
  return puVar8;
}



/* Entry: 100f5ddc0; end: 100f5dddf;  */

void FUN_100f5ddc0(void)

{
  return;
}



/* Entry: 100f5dde0; end: 100f5de0f;  */

void FUN_100f5dde0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 100f5de10; end: 100f5de23;  */

void FUN_100f5de10(void)

{
  long unaff_x20;
  
  **(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x10) + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 100f5de24; end: 100f5de67;  */

void FUN_100f5de24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 100f5de68; end: 100f5df97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5de68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar5,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c407c0();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    func_0x0001000285a8(0x112d4e908,&UNK_10d914b00);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c4d48c();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar3);
    lVar4 = 0;
    func_0x000100f5db1c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined1 **)(lVar4 + 0x18) = puVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
  }
  return;
}



/* Entry: 100f5df98; end: 100f5df9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5df98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c407c0();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    func_0x0001000285a8(0x112d4e908,&UNK_10d914b00);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    func_0x000107c4d48c();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar3);
    lVar4 = 0;
    func_0x000100f5db1c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined1 **)(lVar4 + 0x18) = puVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
  }
  return;
}



/* Entry: 100f5dfa0; end: 100f5dfc3;  */

/* WARNING: Possible PIC construction at 0x000100f5dfac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5dfb0) */

void FUN_100f5dfa0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100f5dfc4; end: 100f5e017;  */

void FUN_100f5dfc4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f5e018; end: 100f5e097;  */

void FUN_100f5e018(undefined8 param_1)

{
  if (lRam0000000112d4eaf0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61b6c4);
  return;
}



/* Entry: 100f5e098; end: 100f5e103;  */

void FUN_100f5e098(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_11036de70;
  func_0x000107c613fc(&UNK_11036de70,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  FUN_100f9918c(0);
  func_0x000107c610f8();
  pcVar2 = FUN_100f5e104;
  func_0x000100f99024(FUN_100f5e104,puVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 100f5e104; end: 100f5e107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e104(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c407c0();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    func_0x0001000285a8(0x112d4e908,&UNK_10d914b00);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    func_0x000107c4d48c();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar3);
    lVar4 = 0;
    func_0x000100f5db1c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined1 **)(lVar4 + 0x18) = puVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
  }
  return;
}



/* Entry: 100f5e108; end: 100f5e113; -[SCStickerCutoutStatusSenderServiceProvider coreMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e108(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4ebb0;
  func_0x000107c61428(param_1 + _DAT_112d4ebb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5e114; end: 100f5e11f; -[SCStickerCutoutStatusSenderServiceProvider setCoreMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4ebb0;
  func_0x000107c61428(param_1 + _DAT_112d4ebb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5e120; end: 100f5e12b; -[SCStickerCutoutStatusSenderServiceProvider nativeMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e120(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4ebb8;
  func_0x000107c61428(param_1 + _DAT_112d4ebb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5e12c; end: 100f5e137; -[SCStickerCutoutStatusSenderServiceProvider setNativeMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e12c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4ebb8;
  func_0x000107c61428(param_1 + _DAT_112d4ebb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5e138; end: 100f5e143; -[SCStickerCutoutStatusSenderServiceProvider userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e138(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4ebc0;
  func_0x000107c61428(param_1 + _DAT_112d4ebc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5e144; end: 100f5e187;  */

void FUN_100f5e144(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f5e188; end: 100f5e193; -[SCStickerCutoutStatusSenderServiceProvider setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e188(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4ebc0;
  func_0x000107c61428(param_1 + _DAT_112d4ebc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5e194; end: 100f5e1e7;  */

void FUN_100f5e194(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f5e1e8; end: 100f5e34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e1e8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c407c4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d478();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5da74();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = 0;
        FUN_100f5e018();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x10) = lVar1;
        *(long *)(lVar4 + 0x18) = lVar2;
        *(long *)(lVar4 + 0x20) = lVar3;
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d4ebc8);
        *(long *)(unaff_x20 + _DAT_112d4ebc8) = lVar4;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(uVar6);
        puVar5 = &UNK_11036deb0;
        func_0x000107c613fc(&UNK_11036deb0,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,lVar4);
        uVar6 = 0;
        FUN_100f9918c(0);
        func_0x000107c610f8();
        func_0x000100f99024(FUN_100f5e34c,puVar5,uVar6);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(lVar4);
        return;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100f5e34c; end: 100f5e353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e34c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c407c0();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    func_0x0001000285a8(0x112d4e908,&UNK_10d914b00);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    func_0x000107c4d48c();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar3);
    lVar4 = 0;
    func_0x000100f5db1c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined1 **)(lVar4 + 0x18) = puVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
  }
  return;
}



/* Entry: 100f5e354; end: 100f5e3df; -[SCStickerCutoutStatusSenderServiceProvider provide] */

void FUN_100f5e354(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100f5e1e8();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "StickerCutoutStatusSenderServiceProvider/SCStickerCutoutStatusSenderServiceProvider.swift"
                      ,0x59,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5e3e0);
  (*pcVar1)();
}



/* Entry: 100f5e3e0; end: 100f5e413; -[SCStickerCutoutStatusSenderServiceProvider __safeProvide] */

void FUN_100f5e3e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100f5e1e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f5e414; end: 100f5e457; -[SCStickerCutoutStatusSenderServiceProvider end] */

void FUN_100f5e414(undefined8 param_1)

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



/* Entry: 100f5e458; end: 100f5e65f;  */

void FUN_100f5e458(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e3960)) {
    uVar2 = 0xd000000000000015;
    func_0x000107c605b8(0xd000000000000015,0x800000010ef1c6a0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000017;
      if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ecb20)) ||
         (func_0x000107c605b8(0xd000000000000017,0x800000010ef134e0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5698c();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "StickerCutoutStatusSenderServiceProvider/SCStickerCutoutStatusSenderServiceProvider.swift"
                                ,0x59,2,0x33,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5e660);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a3f8();
      }
      goto LAB_100f5e4f0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c539c8();
LAB_100f5e4f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


