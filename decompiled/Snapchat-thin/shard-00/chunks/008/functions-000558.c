/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100aaa874; end: 100aaa893;  */

void FUN_100aaa874(void)

{
  func_0x000107c61168(&PTR_PTR_11290eb18);
  return;
}



/* Entry: 100aaa894; end: 100aaa89b;  */

void FUN_100aaa894(undefined8 *param_1)

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



/* Entry: 100aaa89c; end: 100aaa8ef;  */

void FUN_100aaa89c(undefined8 *param_1)

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



/* Entry: 100aaa8f0; end: 100aaa8f7;  */

void FUN_100aaa8f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_100299fb0();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100aaa980(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100aaa8f8; end: 100aaa97f;  */

void FUN_100aaa8f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_100299fb0();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100aaa980(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100aaa980; end: 100aaab37;  */

void FUN_100aaa980(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8f18;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar6 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f009fc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100aaab38);
  (*pcVar1)();
}



/* Entry: 100aaab38; end: 100aaabbf; -[SCContextPostStoryDataEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100aaaba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100aaaba4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aaab38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108b2be8);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126be610;
  func_0x000107c610f4(PTR_PTR_1126be610);
  func_0x000107c47fbc();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112729bf8);
  }
  func_0x000107c42c20(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100aaabc0; end: 100aaac17; -[SCContextPostStoryDataServices initWithPostStoryDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aaabc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fee608) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100aaac18; end: 100aaac43;  */

void FUN_100aaac18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100aaac44; end: 100aaacc3; -[SCSCConversationDestinationParsingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aaac44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc34a0,0);
  func_0x000107c61614(param_1 + _DAT_112fc34a8,0);
  *(undefined8 *)(param_1 + _DAT_112fc34b0) = 0;
  *(undefined8 *)(param_1 + _DAT_112fc34b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100aaacc4; end: 100aaad6f; -[SCSCConversationDestinationParsingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100aaacc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100aaad70(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100aaad70; end: 100aaaf73;  */

void FUN_100aaad70(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e7baf0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f184510,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002f;
        if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0e7ba20)) &&
           (func_0x000107c605b8(0xd00000000000002f,0x800000010f1845e0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ConvoActiveUserSessionScopeGraphBridge/SCSCConversationDestinationParsingServicesSaberEntryPoint.swift"
                              ,0x66,2,0x46,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100aaaf74);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5824c();
        goto LAB_100aaadfc;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5398c();
  }
LAB_100aaadfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100aaaf74; end: 100aaaf7f; -[SCSCConversationDestinationParsingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aaaf74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc34a0;
  func_0x000107c61428(param_1 + _DAT_112fc34a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aaaf80; end: 100aaafd3;  */

void FUN_100aaaf80(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aaafd4; end: 100aaafdf; -[SCSCConversationDestinationParsingServicesSaberEntryPoint setConvoActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aaafd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc34a8;
  func_0x000107c61428(param_1 + _DAT_112fc34a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aaafe0; end: 100aab043; -[SCSCConversationDestinationParsingServicesSaberEntryPoint setSCConversationDestinationParsingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aaafe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc34b0;
  func_0x000107c61428(param_1 + _DAT_112fc34b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aab044; end: 100aab06b; -[SCSCConversationDestinationParsingServicesSaberEntryPoint begin] */

void FUN_100aab044(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100aab06c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100aab06c; end: 100aab1ef;  */

/* WARNING: Possible PIC construction at 0x000100aab16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aab17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aab198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100aab170) */
/* WARNING: Removing unreachable block (ram,0x000100aab180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab06c(void)

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
    func_0x000107c40750();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50ca4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100aab294();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fc3360);
        *(undefined8 *)(lVar2 + _DAT_112fc21d0) = uVar6;
        *(long *)(lVar2 + _DAT_112fc21d8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fc21d8);
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



/* Entry: 100aab1f0; end: 100aab1fb; -[SCSCConversationDestinationParsingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab1f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc34a0;
  func_0x000107c61428(param_1 + _DAT_112fc34a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aab1fc; end: 100aab23f;  */

void FUN_100aab1fc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100aab240; end: 100aab24b; -[SCSCConversationDestinationParsingServicesSaberEntryPoint convoActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab240(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc34a8;
  func_0x000107c61428(param_1 + _DAT_112fc34a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aab24c; end: 100aab293; -[SCSCConversationDestinationParsingServicesSaberEntryPoint sCConversationDestinationParsingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab24c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc34b0;
  func_0x000107c61428(param_1 + _DAT_112fc34b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100aab294; end: 100aab2b3;  */

void FUN_100aab294(void)

{
  func_0x000107c61168(&PTR_PTR_11290f558);
  return;
}



/* Entry: 100aab2b4; end: 100aab333; -[SCSCCustomVolumeServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab2b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fce618,0);
  func_0x000107c61614(param_1 + _DAT_112fce620,0);
  *(undefined8 *)(param_1 + _DAT_112fce628) = 0;
  *(undefined8 *)(param_1 + _DAT_112fce630) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100aab334; end: 100aab3df; -[SCSCCustomVolumeServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100aab334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100aab3e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100aab3e0; end: 100aab5e3;  */

void FUN_100aab3e0(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd00000000000002b;
    if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0e75510)) ||
       (func_0x000107c605b8(0xd00000000000002b,0x800000010f18aaf0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c563c0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0e754e0)) {
        uVar2 = 0xd00000000000001d;
        func_0x000107c605b8(0xd00000000000001d,0x800000010f18ab20,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MeActiveUserSessionScopeGraphBridge/SCSCCustomVolumeServicesSaberEntryPoint.swift"
                              ,0x51,2,0x3d,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100aab5e4);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58294();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100aab5e4; end: 100aab5ef; -[SCSCCustomVolumeServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fce618;
  func_0x000107c61428(param_1 + _DAT_112fce618,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aab5f0; end: 100aab643;  */

void FUN_100aab5f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aab644; end: 100aab64f; -[SCSCCustomVolumeServicesSaberEntryPoint setMeActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab644(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fce620;
  func_0x000107c61428(param_1 + _DAT_112fce620,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aab650; end: 100aab6b3; -[SCSCCustomVolumeServicesSaberEntryPoint setSCCustomVolumeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab650(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fce628;
  func_0x000107c61428(param_1 + _DAT_112fce628,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aab6b4; end: 100aab6db; -[SCSCCustomVolumeServicesSaberEntryPoint begin] */

void FUN_100aab6b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100aab6dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100aab6dc; end: 100aab85f;  */

/* WARNING: Possible PIC construction at 0x000100aab7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aab7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aab808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100aab7e0) */
/* WARNING: Removing unreachable block (ram,0x000100aab7f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab6dc(void)

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
    func_0x000107c4c910();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50cec();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100aab904();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fce510);
        *(undefined8 *)(lVar2 + _DAT_112fcd778) = uVar6;
        *(long *)(lVar2 + _DAT_112fcd780) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fcd780);
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



/* Entry: 100aab860; end: 100aab86b; -[SCSCCustomVolumeServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab860(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fce618;
  func_0x000107c61428(param_1 + _DAT_112fce618,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aab86c; end: 100aab8af;  */

void FUN_100aab86c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100aab8b0; end: 100aab8bb; -[SCSCCustomVolumeServicesSaberEntryPoint meActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab8b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fce620;
  func_0x000107c61428(param_1 + _DAT_112fce620,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aab8bc; end: 100aab903; -[SCSCCustomVolumeServicesSaberEntryPoint sCCustomVolumeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab8bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fce628;
  func_0x000107c61428(param_1 + _DAT_112fce628,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100aab904; end: 100aab923;  */

void FUN_100aab904(void)

{
  func_0x000107c61168(&PTR_PTR_112915548);
  return;
}



/* Entry: 100aab924; end: 100aab9a3; -[SCSCFriendsFeedMessagingStoryReplayingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aab924(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc34e8,0);
  func_0x000107c61614(param_1 + _DAT_112fc34f0,0);
  *(undefined8 *)(param_1 + _DAT_112fc34f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112fc3500) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100aab9a4; end: 100aaba4f; -[SCSCFriendsFeedMessagingStoryReplayingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100aab9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100aaba50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100aaba50; end: 100aabc53;  */

void FUN_100aaba50(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e7baf0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f184510,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000033;
        if (((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0e7b980)) &&
           (func_0x000107c605b8(0xd000000000000033,0x800000010f184680,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ConvoActiveUserSessionScopeGraphBridge/SCSCFriendsFeedMessagingStoryReplayingServicesSaberEntryPoint.swift"
                              ,0x6a,2,0x46,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100aabc54);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58348();
        goto LAB_100aabadc;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5398c();
  }
LAB_100aabadc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100aabc54; end: 100aabc5f; -[SCSCFriendsFeedMessagingStoryReplayingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aabc54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc34e8;
  func_0x000107c61428(param_1 + _DAT_112fc34e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aabc60; end: 100aabcb3;  */

void FUN_100aabc60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aabcb4; end: 100aabcbf; -[SCSCFriendsFeedMessagingStoryReplayingServicesSaberEntryPoint setConvoActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aabcb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc34f0;
  func_0x000107c61428(param_1 + _DAT_112fc34f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aabcc0; end: 100aabd23; -[SCSCFriendsFeedMessagingStoryReplayingServicesSaberEntryPoint setSCFriendsFeedMessagingStoryReplayingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aabcc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc34f8;
  func_0x000107c61428(param_1 + _DAT_112fc34f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aabd24; end: 100aabd4b; -[SCSCFriendsFeedMessagingStoryReplayingServicesSaberEntryPoint begin] */

void FUN_100aabd24(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100aabd4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100aabd4c; end: 100aabecf;  */

/* WARNING: Possible PIC construction at 0x000100aabe4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aabe5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aabe78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100aabe50) */
/* WARNING: Removing unreachable block (ram,0x000100aabe60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aabd4c(void)

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
    func_0x000107c40750();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50da0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100aabf74();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fc3380);
        *(undefined8 *)(lVar2 + _DAT_112fc2208) = uVar6;
        *(long *)(lVar2 + _DAT_112fc2210) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fc2210);
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



/* Entry: 100aabed0; end: 100aabedb; -[SCSCFriendsFeedMessagingStoryReplayingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aabed0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc34e8;
  func_0x000107c61428(param_1 + _DAT_112fc34e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aabedc; end: 100aabf1f;  */

void FUN_100aabedc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100aabf20; end: 100aabf2b; -[SCSCFriendsFeedMessagingStoryReplayingServicesSaberEntryPoint convoActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aabf20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc34f0;
  func_0x000107c61428(param_1 + _DAT_112fc34f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aabf2c; end: 100aabf73; -[SCSCFriendsFeedMessagingStoryReplayingServicesSaberEntryPoint sCFriendsFeedMessagingStoryReplayingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aabf2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc34f8;
  func_0x000107c61428(param_1 + _DAT_112fc34f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100aabf74; end: 100aabfb3;  */

void FUN_100aabf74(void)

{
  func_0x000107c61168(&PTR_PTR_11290f620);
  return;
}



/* Entry: 100aabfb4; end: 100aabfbb; -[SCStoriesSnapPlaybackInfo serverId] */

undefined8 FUN_100aabfb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100aabfbc; end: 100aac27b;  */

void FUN_100aabfbc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined4 uStack_12c;
  undefined4 *puStack_128;
  undefined4 *puStack_120;
  undefined8 uStack_118;
  undefined4 auStack_110 [7];
  undefined1 uStack_f1;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_a8 [6];
  long *plStack_90;
  long *plStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  lVar2 = param_2;
  func_0x000107c40808();
  if (lVar2 == 0) {
    func_0x000107c61158(PTR_PTR_1126d9eb8);
    if (param_1 == 0) {
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      ppuStack_f0 = (undefined **)0x0;
    }
    else {
      func_0x000107c430a4(&ppuStack_f0,param_1);
    }
    ppuStack_80 = (undefined **)0x0;
    ppuStack_78 = (undefined **)0x0;
    uStack_70 = 0;
    auStack_110[0] = 0;
    pppuVar4 = &ppuStack_f0;
    func_0x00010054c81c(pppuVar4,&ppuStack_80,auStack_110);
    func_0x000107c61180();
    pppuVar5 = pppuVar4;
    func_0x000107c3e1b8();
    func_0x000107c61180();
    func_0x000107c61170(pppuVar4);
    if (ppuStack_80 != (undefined **)0x0) {
      ppuStack_78 = ppuStack_80;
      func_0x000107c60e14();
    }
    FUN_1000e76e0(&uStack_c8);
    func_0x000107c61170(uStack_d8);
    uVar6 = uStack_e0;
  }
  else {
    func_0x000107c61158(PTR_PTR_1126d9eb8);
    if (param_1 == 0) {
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      ppuStack_78 = (undefined **)0x0;
      ppuStack_80 = (undefined **)0x0;
    }
    else {
      func_0x000107c430a4(&ppuStack_80,param_1);
    }
    puVar3 = &uStack_f1;
    FUN_100aac2dc(puVar3);
    FUN_100aac340(auStack_110,param_2);
    FUN_1004c2e3c(&ppuStack_f0,0xc,puVar3,auStack_110);
    puStack_128 = (undefined4 *)0x0;
    puStack_120 = (undefined4 *)0x0;
    uStack_118 = 0;
    uStack_12c = 0;
    pppuVar4 = &ppuStack_80;
    FUN_1000e77a0(pppuVar4,&ppuStack_f0,&puStack_128,&uStack_12c);
    func_0x000107c61180();
    pppuVar5 = pppuVar4;
    func_0x000107c3e1b8();
    func_0x000107c61180();
    func_0x000107c61170(pppuVar4);
    if (puStack_128 != (undefined4 *)0x0) {
      puStack_120 = puStack_128;
      func_0x000107c60e14();
    }
    plVar1 = plStack_88;
    ppuStack_f0 = &PTR_DAT_110862700;
    plStack_88 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_90;
    plStack_90 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_128 = auStack_a8;
    FUN_100105004(&puStack_128);
    puStack_128 = auStack_110;
    FUN_100105004(&puStack_128);
    FUN_1000e76e0(&uStack_58);
    func_0x000107c61170(uStack_68);
    uVar6 = uStack_70;
  }
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar5);
  return;
}



/* Entry: 100aac27c; end: 100aac2db;  */

void FUN_100aac27c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_100aabfbc();
  func_0x000107c61180();
  uVar1 = param_1;
  FUN_10050471c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100aac2dc; end: 100aac33f;  */

undefined ** FUN_100aac2dc(void)

{
  int iVar1;
  
  if ((bRam00000001138278a8 & 1) == 0) {
    iVar1 = 0x138278a8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_113261ff8,0x100000000);
      func_0x000107c60e4c(0x1138278a8);
    }
  }
  return &PTR_PTR_113261ff8;
}



/* Entry: 100aac340; end: 100aac4a3;  */

undefined * FUN_100aac340(undefined8 *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = param_2;
  func_0x000107c40808();
  iVar3 = (int)puVar2;
  FUN_1004c2bb4(param_1);
  func_0x000107c61174(param_2);
  puVar2 = param_2;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_2);
      }
      uVar4 = *(undefined8 *)((long)puVar5 * 8);
      func_0x000107c61174(uVar4);
      iVar3 = (int)auStack_e0;
      auStack_e0[0] = uVar4;
      FUN_1004c2d3c(param_1);
      func_0x000107c61170(auStack_e0[0]);
      puVar5 = puVar5 + 1;
    } while (puVar2 != puVar5);
    puVar2 = param_2;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  func_0x000107c60e78();
  if (iVar3 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  return &UNK_10f4a00f7;
}



/* Entry: 100aac4a4; end: 100aac4af; +[SCStoriesSnapReadReceiptViewState table] */

undefined * FUN_100aac4a4(void)

{
  return &UNK_10f4a00f7;
}



/* Entry: 100aac4b0; end: 100aac52f; -[SCSCFriendsFeedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aac4b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc3530,0);
  func_0x000107c61614(param_1 + _DAT_112fc3538,0);
  *(undefined8 *)(param_1 + _DAT_112fc3540) = 0;
  *(undefined8 *)(param_1 + _DAT_112fc3548) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100aac530; end: 100aac5db; -[SCSCFriendsFeedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100aac530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100aac5dc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100aac5dc; end: 100aac7df;  */

void FUN_100aac5dc(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd2) && (param_3 == -0x7ffffffef0e7baf0)) ||
       (func_0x000107c605b8(0xd00000000000002e,0x800000010f184510,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5398c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0e7b8d0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001c,0x800000010f184730,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ConvoActiveUserSessionScopeGraphBridge/SCSCFriendsFeedServicesSaberEntryPoint.swift"
                              ,0x53,2,0x46,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100aac7e0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58358();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100aac7e0; end: 100aac7eb; -[SCSCFriendsFeedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aac7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc3530;
  func_0x000107c61428(param_1 + _DAT_112fc3530,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aac7ec; end: 100aac83f;  */

void FUN_100aac7ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aac840; end: 100aac84b; -[SCSCFriendsFeedServicesSaberEntryPoint setConvoActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aac840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc3538;
  func_0x000107c61428(param_1 + _DAT_112fc3538,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aac84c; end: 100aac8a3;  */

void FUN_100aac84c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcea0;
  func_0x000107c610f4();
  func_0x000107c488cc();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100aac8a4; end: 100aac907; -[SCSCFriendsFeedServicesSaberEntryPoint setSCFriendsFeedServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aac8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc3540;
  func_0x000107c61428(param_1 + _DAT_112fc3540,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aac908; end: 100aac92f; -[SCSCFriendsFeedServicesSaberEntryPoint begin] */

void FUN_100aac908(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100aac930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100aac930; end: 100aacab3;  */

/* WARNING: Possible PIC construction at 0x000100aaca30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aaca40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aaca5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100aaca34) */
/* WARNING: Removing unreachable block (ram,0x000100aaca44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aac930(void)

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
    func_0x000107c40750();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50db0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100aacb58();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fc3388);
        *(undefined8 *)(lVar2 + _DAT_112fc2240) = uVar6;
        *(long *)(lVar2 + _DAT_112fc2248) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fc2248);
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



/* Entry: 100aacab4; end: 100aacabf; -[SCSCFriendsFeedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aacab4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc3530;
  func_0x000107c61428(param_1 + _DAT_112fc3530,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aacac0; end: 100aacb03;  */

void FUN_100aacac0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100aacb04; end: 100aacb0f; -[SCSCFriendsFeedServicesSaberEntryPoint convoActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aacb04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc3538;
  func_0x000107c61428(param_1 + _DAT_112fc3538,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aacb10; end: 100aacb57; -[SCSCFriendsFeedServicesSaberEntryPoint sCFriendsFeedServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aacb10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc3540;
  func_0x000107c61428(param_1 + _DAT_112fc3540,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100aacb58; end: 100aacb77;  */

void FUN_100aacb58(void)

{
  func_0x000107c61168(&PTR_PTR_11290f6e8);
  return;
}



/* Entry: 100aacb78; end: 100aacc17; -[SCSnapchattersFetchDataRequestFetchFriends initWithSource:triggerType:] */

void FUN_100aacb78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112707400;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 100aacc18; end: 100aacc1f; -[SCSnapchattersFetchDataRequestFetchFriends source] */

undefined8 FUN_100aacc18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100aacc20; end: 100aacc27; -[SCStoriesSnapPlaybackInfo timeInfo] */

undefined8 FUN_100aacc20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100aacc28; end: 100aacc2f; -[SCStoriesSnapTimeInfo timestamp] */

undefined8 FUN_100aacc28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100aacc30; end: 100aacef7; -[SCStoryContextBadgeHint parsePlaybackInfoForFirstContextBadge:] */

ulong FUN_100aacc30(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar13 = param_3;
  func_0x000107c40590();
  func_0x000107c61180();
  lVar1 = lVar13;
  func_0x000107c4f8e4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4adac();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar13);
  if (lVar2 == 0) {
    uVar10 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126b2378;
    func_0x000107c610f4();
    lVar13 = param_3;
    func_0x000107c40590(param_3);
    func_0x000107c61180();
    lVar1 = lVar13;
    func_0x000107c4f8e4();
    func_0x000107c61180();
    func_0x000107c4636c(puVar3,param_2,lVar1,0);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar13);
    puVar4 = puVar3;
    func_0x000107c5d20c();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c44b94();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c61170(puVar4);
      uVar10 = 0;
    }
    else {
      puVar5 = puVar4;
      func_0x000107c5c730();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c4246c();
      func_0x000107c61180();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      func_0x000107c61174();
      puVar7 = puVar6;
      func_0x000107c4080c(puVar6,param_2,&uStack_130,auStack_f0,0x10);
      if (puVar7 == (undefined *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        lVar13 = *plStack_120;
        do {
          puVar9 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar13) {
              func_0x000107c61128(puVar6);
            }
            uVar12 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
            uVar8 = uVar12;
            func_0x000107c446c8();
            if ((int)uVar8 != 0) {
              func_0x000107c3cf80();
              func_0x000107c61180();
              uVar8 = uVar12;
              func_0x000107c3f63c();
              func_0x000107c61170(uVar12);
              iVar11 = (int)uVar8;
              if (iVar11 < 0x1a) {
                if (iVar11 != 2) {
                  if (iVar11 != 5) {
                    if (iVar11 != 1) goto LAB_100aace24;
                    uVar10 = 5;
                    goto LAB_100aace84;
                  }
                  uVar10 = 4;
                }
                if (uVar10 < 4) {
                  uVar10 = 3;
                }
LAB_100aace14:
                if (uVar10 < 3) {
                  uVar10 = 2;
                }
              }
              else if (iVar11 != 0x1a) {
                if (iVar11 != 0x23) goto LAB_100aace24;
                goto LAB_100aace14;
              }
              if (uVar10 < 2) {
                uVar10 = 1;
              }
            }
LAB_100aace24:
            puVar9 = puVar9 + 1;
          } while (puVar7 != puVar9);
          puVar7 = puVar6;
          func_0x000107c4080c(puVar6,param_2,&uStack_130,auStack_f0,0x10);
        } while (puVar7 != (undefined *)0x0);
      }
LAB_100aace84:
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    return *(ulong *)(param_3 + 0x78);
  }
  return uVar10;
}



/* Entry: 100aacef8; end: 100aaceff; -[SCStoriesSnapPlaybackInfo contextHintInfo] */

undefined8 FUN_100aacef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 100aacf00; end: 100aad28f; -[SCStoryContextBadgeHint parsePlaybackInfoForHighestPriorityContextBadge:] */

ulong FUN_100aacf00(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  int iVar20;
  undefined8 uVar21;
  ulong uStack_210;
  ulong uStack_1f8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  uStack_1f8 = param_3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  if (uStack_1f8 == 0) {
    uStack_210 = 0;
  }
  else {
    uVar15 = 0;
    do {
      uVar14 = 0;
      uStack_210 = param_2;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_3);
        }
        lVar17 = *(long *)(uVar14 * 8);
        lVar3 = lVar17;
        func_0x000107c40590();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c4f8e4();
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c4adac();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        if (lVar5 != 0) {
          puVar16 = PTR_PTR_1126b2378;
          func_0x000107c610f4();
          func_0x000107c40590();
          func_0x000107c61180();
          lVar3 = lVar17;
          func_0x000107c4f8e4();
          func_0x000107c61180();
          func_0x000107c4636c();
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar17);
          puVar19 = puVar16;
          func_0x000107c5d20c();
          func_0x000107c61180();
          puVar6 = puVar19;
          func_0x000107c44b94();
          if (((ulong)puVar6 & 1) == 0) {
            func_0x000107c61170(puVar19);
            func_0x000107c61170(puVar16);
          }
          else {
            puVar7 = puVar19;
            func_0x000107c5c730();
            func_0x000107c61180();
            puVar8 = puVar7;
            func_0x000107c4246c();
            func_0x000107c61180();
            func_0x000107c61174();
            puVar6 = puVar8;
            func_0x000107c4080c();
            lVar3 = lRam0000000000000000;
            while (puVar6 != (undefined *)0x0) {
              puVar18 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar3) {
                  func_0x000107c61128(puVar8);
                }
                uVar21 = *(undefined8 *)((long)puVar18 * 8);
                uVar9 = uVar21;
                func_0x000107c446c8();
                if ((int)uVar9 != 0) {
                  func_0x000107c3cf80();
                  func_0x000107c61180();
                  uVar9 = uVar21;
                  func_0x000107c3f63c();
                  func_0x000107c61170(uVar21);
                  iVar20 = (int)uVar9;
                  if (iVar20 < 0x1a) {
                    if (iVar20 != 2) {
                      if (iVar20 != 5) {
                        if (iVar20 != 1) goto LAB_100aad15c;
                        func_0x000107c61170(puVar8);
                        bVar2 = false;
                        uStack_210 = 5;
                        goto LAB_100aad1d4;
                      }
                      uVar15 = 4;
                    }
                    if (uVar15 < 4) {
                      uVar15 = 3;
                    }
LAB_100aad14c:
                    if (uVar15 < 3) {
                      uVar15 = 2;
                    }
                  }
                  else if (iVar20 != 0x1a) {
                    if (iVar20 != 0x23) goto LAB_100aad15c;
                    goto LAB_100aad14c;
                  }
                  if (uVar15 < 2) {
                    uVar15 = 1;
                  }
                }
LAB_100aad15c:
                puVar18 = puVar18 + 1;
              } while (puVar6 != puVar18);
              puVar6 = puVar8;
              func_0x000107c4080c();
            }
            func_0x000107c61170(puVar8);
            bVar2 = uVar15 == 0;
            if (!bVar2) {
              uStack_210 = uVar15;
            }
LAB_100aad1d4:
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar19);
            func_0x000107c61170(puVar16);
            if (!bVar2) goto LAB_100aad23c;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uStack_1f8);
      uStack_1f8 = param_3;
      func_0x000107c4080c();
      param_2 = uStack_210;
      uStack_210 = uVar15;
    } while (uStack_1f8 != 0);
  }
LAB_100aad23c:
  func_0x000107c61170(param_3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return uStack_210;
  }
  func_0x000107c60e78();
  func_0x000107c61174();
  uVar15 = param_3;
  func_0x000107c3e51c();
  func_0x000107c61180();
  uVar14 = uVar15;
  func_0x000107c5dcc0();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  uVar15 = uVar14;
  func_0x000107c4adac();
  if (uVar15 == 0) {
    uVar15 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    uVar15 = param_3;
    func_0x000107c40590();
    func_0x000107c61180();
    uVar10 = uVar15;
    func_0x000107c4f8e4();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c4adac();
    puVar16 = PTR_PTR_1126b2378;
    if (uVar11 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      uVar11 = param_3;
      func_0x000107c40590(param_3);
      func_0x000107c61180();
      uVar12 = uVar11;
      func_0x000107c4f8e4();
      func_0x000107c61180();
      func_0x000107c4e380();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar11);
    }
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar15);
    puVar19 = puVar16;
    func_0x000107c5d20c();
    func_0x000107c61180();
    puVar6 = puVar19;
    func_0x000107c44a98();
    func_0x000107c61170(puVar19);
    uVar15 = uVar14;
    if ((int)puVar6 != 0) {
      puVar19 = puVar16;
      func_0x000107c5d20c();
      func_0x000107c61180();
      puVar6 = puVar19;
      func_0x000107c502f4();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar19);
      puVar19 = puVar7;
      func_0x000107c4adac();
      if (puVar19 == (undefined *)0x0) {
        puVar19 = (undefined *)0x0;
      }
      else {
        puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c610f4();
        func_0x000107c46368();
      }
      puVar6 = puVar19;
      func_0x000107c4adac();
      if (puVar6 != (undefined *)0x0) {
        uVar10 = param_3;
        func_0x000107c40d14();
        func_0x000107c61180();
        uVar11 = uVar10;
        func_0x000107c4adac();
        if (uVar11 != 0) {
          uVar11 = param_3;
          func_0x000107c40d14(param_3);
          func_0x000107c61180();
          puVar6 = puVar19;
          func_0x000107c3f6dc();
          func_0x000107c61170(uVar11);
          if (puVar6 != (undefined *)0x0) {
            uVar15 = 0;
          }
        }
        func_0x000107c61170(uVar10);
      }
      func_0x000107c61170(puVar19);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(puVar16);
    func_0x000107c61170(param_3);
    func_0x000107c61174(uVar15);
  }
  func_0x000107c61170(uVar14);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar15);
  return uVar15;
}



/* Entry: 100aad290; end: 100aad4f3;  */

void FUN_100aad290(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  func_0x000107c61174();
  lVar9 = param_1;
  func_0x000107c3e51c();
  func_0x000107c61180();
  lVar1 = lVar9;
  func_0x000107c5dcc0();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = lVar1;
  func_0x000107c4adac();
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    func_0x000107c61174(param_1);
    lVar9 = param_1;
    func_0x000107c40590();
    func_0x000107c61180();
    lVar2 = lVar9;
    func_0x000107c4f8e4();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4adac();
    puVar7 = PTR_PTR_1126b2378;
    if (lVar3 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar3 = param_1;
      func_0x000107c40590(param_1);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c4f8e4();
      func_0x000107c61180();
      func_0x000107c4e380(puVar7,param_2,lVar4,0);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar9);
    puVar8 = puVar7;
    func_0x000107c5d20c();
    func_0x000107c61180();
    puVar5 = puVar8;
    func_0x000107c44a98();
    func_0x000107c61170(puVar8);
    lVar9 = lVar1;
    if ((int)puVar5 != 0) {
      puVar8 = puVar7;
      func_0x000107c5d20c();
      func_0x000107c61180();
      puVar5 = puVar8;
      func_0x000107c502f4();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar8);
      puVar8 = puVar6;
      func_0x000107c4adac();
      if (puVar8 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c610f4();
        func_0x000107c46368();
      }
      puVar5 = puVar8;
      func_0x000107c4adac();
      if (puVar5 != (undefined *)0x0) {
        lVar2 = param_1;
        func_0x000107c40d14();
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x000107c4adac();
        if (lVar3 != 0) {
          lVar3 = param_1;
          func_0x000107c40d14(param_1);
          func_0x000107c61180();
          puVar5 = puVar8;
          func_0x000107c3f6dc(puVar8,param_2,lVar3);
          func_0x000107c61170(lVar3);
          if (puVar5 != (undefined *)0x0) {
            lVar9 = 0;
          }
        }
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar7);
    func_0x000107c61170(param_1);
    func_0x000107c61174(lVar9);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 100aad4f4; end: 100aad4fb; -[SCStoriesSnapPlaybackInfo auxIds] */

undefined8 FUN_100aad4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100aad4fc; end: 100aad503; -[SCStoriesSnapIdentifiers venueId] */

undefined8 FUN_100aad4fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100aad504; end: 100aad577;  */

void FUN_100aad504(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61168(param_1);
  lVar1 = param_2;
  FUN_100aad578();
  func_0x000107c61180();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100aad578; end: 100aadb5f;  */

void FUN_100aad578(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  func_0x000107c61174();
  if (param_2 != (undefined *)0x0) {
    puVar16 = param_2;
    func_0x000107c50940();
    if ((long)puVar16 < 0) {
      puVar16 = param_2;
      func_0x000107c5bfec();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar16 != (undefined *)0x0) {
        puVar16 = PTR_PTR_1126b04a8;
        func_0x000107c421f0();
        func_0x000107c61180();
        puVar1 = puVar16;
        func_0x000107c41220();
        func_0x000107c61170(puVar16);
        FUN_1001b9e08(puVar1,&UNK_10f4a26a0);
        puVar16 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_100aada78;
        puVar16 = param_2;
        func_0x000107c5bfec(param_2);
        func_0x000107c61180();
        func_0x000107c61174();
        puVar2 = puVar16;
        func_0x000107c61178(puVar16);
        func_0x000107c3ac4c();
        func_0x000107c61338(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar16);
        puVar16 = puVar1;
        func_0x000107c613a8();
        if ((int)puVar16 == 100) {
          puVar2 = puVar1;
          func_0x000107c61358(puVar1,0);
          puVar16 = PTR_PTR_1126b04a8;
          func_0x000107c421f0();
          func_0x000107c61180();
          func_0x000107c61158(PTR_PTR_1126d5360);
          func_0x000107c6134c(puVar1,1);
          func_0x000107c61350(puVar1,1);
          puVar3 = puVar16;
          func_0x000107c4d9b8();
          func_0x000107c61180();
          func_0x000107c61170(param_2);
          func_0x000107c61170(puVar16);
          func_0x000107c613a4(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_100aada70;
          puVar16 = PTR_PTR_1126d9eb0;
          func_0x000107c610f4();
          puVar1 = puVar3;
          func_0x000107c5bfec();
          func_0x000107c61180();
          puVar4 = puVar3;
          func_0x000107c5d0f0();
          puVar5 = puVar3;
          func_0x000107c5c910();
          func_0x000107c61180();
          func_0x000107c42bcc(puVar3);
          puVar6 = puVar3;
          uVar17 = param_1;
          func_0x000107c4d8c0();
          puVar7 = puVar3;
          func_0x000107c44c00();
          func_0x000107c4d124(puVar3);
          uVar18 = uVar17;
          func_0x000107c4d128(puVar3);
          uVar19 = uVar18;
          func_0x000107c4d130(puVar3);
          puVar8 = puVar3;
          uVar20 = uVar19;
          func_0x000107c5bfc8(puVar3);
          puVar9 = puVar3;
          func_0x000107c4d8e8();
          puVar10 = puVar3;
          func_0x000107c3f53c();
          func_0x000107c61180();
          puVar11 = puVar3;
          func_0x000107c40550();
          puVar12 = puVar3;
          func_0x000107c40554();
          puVar13 = puVar3;
          func_0x000107c5bff0();
          func_0x000107c519c8(puVar3);
          puVar14 = puVar3;
          func_0x000107c446f8();
          puVar15 = puVar3;
          func_0x000107c4e7f0();
          func_0x000107c61180();
          FUN_100aadc9c(param_1,uVar17,uVar18,uVar19,uVar20,puVar16,puVar2,puVar1,puVar4,puVar5,
                        puVar6,(ulong)puVar7 & 0xffffffff,puVar8,puVar9,puVar10,puVar11,puVar12,
                        puVar13,(char)puVar14);
          goto LAB_100aad78c;
        }
      }
    }
    else {
      puVar2 = param_2;
      func_0x000107c50940(param_2);
      puVar16 = PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      func_0x000107c61158(PTR_PTR_1126d5360);
      puVar3 = puVar16;
      func_0x000107c4d9b8();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c61170(puVar16);
      if (puVar3 != (undefined *)0x0) {
        puVar16 = PTR_PTR_1126d9eb0;
        func_0x000107c610f4();
        puVar1 = puVar3;
        func_0x000107c5bfec();
        func_0x000107c61180();
        puVar4 = puVar3;
        func_0x000107c5d0f0();
        puVar5 = puVar3;
        func_0x000107c5c910();
        func_0x000107c61180();
        func_0x000107c42bcc(puVar3);
        puVar6 = puVar3;
        uVar17 = param_1;
        func_0x000107c4d8c0();
        puVar7 = puVar3;
        func_0x000107c44c00();
        func_0x000107c4d124(puVar3);
        uVar18 = uVar17;
        func_0x000107c4d128(puVar3);
        uVar19 = uVar18;
        func_0x000107c4d130(puVar3);
        puVar8 = puVar3;
        uVar20 = uVar19;
        func_0x000107c5bfc8(puVar3);
        puVar9 = puVar3;
        func_0x000107c4d8e8();
        puVar10 = puVar3;
        func_0x000107c3f53c();
        func_0x000107c61180();
        puVar11 = puVar3;
        func_0x000107c40550();
        puVar12 = puVar3;
        func_0x000107c40554();
        puVar13 = puVar3;
        func_0x000107c5bff0();
        func_0x000107c519c8(puVar3);
        puVar14 = puVar3;
        func_0x000107c446f8();
        puVar15 = puVar3;
        func_0x000107c4e7f0();
        func_0x000107c61180();
        FUN_100aadc9c(param_1,uVar17,uVar18,uVar19,uVar20,puVar16,puVar2,puVar1,puVar4,puVar5,puVar6
                      ,(ulong)puVar7 & 0xffffffff,puVar8,puVar9,puVar10,puVar11,puVar12,puVar13,
                      (char)puVar14);
LAB_100aad78c:
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar1);
        param_2 = puVar3;
        goto LAB_100aada78;
      }
LAB_100aada70:
      param_2 = (undefined *)0x0;
    }
  }
  puVar16 = (undefined *)0x0;
LAB_100aada78:
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 100aadb60; end: 100aadb6f; -[SCStoriesSummaryInfo type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadb60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd24);
}



/* Entry: 100aadb70; end: 100aadb7f; -[SCStoriesSummaryInfo thumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadb70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd28);
}



/* Entry: 100aadb80; end: 100aadb8f; -[SCStoriesSummaryInfo expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadb80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd2c);
}



/* Entry: 100aadb90; end: 100aadb9f; -[SCStoriesSummaryInfo numActiveStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadb90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd30);
}



/* Entry: 100aadba0; end: 100aadbaf; -[SCStoriesSummaryInfo hasUnviewedStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100aadba0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278fd34);
}



/* Entry: 100aadbb0; end: 100aadbbf; -[SCStoriesSummaryInfo mostRecentStoryTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadbb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd38);
}



/* Entry: 100aadbc0; end: 100aadbcf; -[SCStoriesSummaryInfo mostRecentUnviewedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadbc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd3c);
}



/* Entry: 100aadbd0; end: 100aadbdf; -[SCStoriesSummaryInfo mostRecentViewedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadbd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd40);
}



/* Entry: 100aadbe0; end: 100aadbef; -[SCStoriesSummaryInfo storyContentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadbe0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd44);
}



/* Entry: 100aadbf0; end: 100aadbff; -[SCStoriesSummaryInfo numOfUnviewedStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadbf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd48);
}



/* Entry: 100aadc00; end: 100aadc17; -[SCStoriesSummaryInfo caption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadc00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd4c);
}



/* Entry: 100aadc18; end: 100aadc3b;  */

void FUN_100aadc18(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100aadc3c; end: 100aadc4b; -[SCStoriesSummaryInfo contextBadgeHintFirst] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadc3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd50);
}



/* Entry: 100aadc4c; end: 100aadc5b; -[SCStoriesSummaryInfo contextBadgeHintHighestPriority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadc4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd54);
}



/* Entry: 100aadc5c; end: 100aadc6b; -[SCStoriesSummaryInfo storyIdFp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadc5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd58);
}



/* Entry: 100aadc6c; end: 100aadc7b; -[SCStoriesSummaryInfo score] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100aadc6c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11278fd5c);
}


