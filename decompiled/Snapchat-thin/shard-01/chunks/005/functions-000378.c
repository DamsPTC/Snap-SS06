/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011db040; end: 1011db077; -[SCBotResponseReportingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011db040(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d660a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d660b0));
  return;
}



/* Entry: 1011db078; end: 1011db097;  */

void FUN_1011db078(void)

{
  func_0x000107c61168(&PTR_PTR_1127b8388);
  return;
}



/* Entry: 1011db098; end: 1011db0f3; -[_TtC19PollReportingPlugin26PollMessageReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_1011db098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011db1a4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011db0f4; end: 1011db10b; -[_TtC19PollReportingPlugin26PollMessageReportingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001011db108) */

void FUN_1011db0f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1011db10c; end: 1011db113; -[_TtC19PollReportingPlugin26PollMessageReportingPlugin isReportableForMessage:] */

undefined8 FUN_1011db10c(void)

{
  return 1;
}



/* Entry: 1011db114; end: 1011db14f; -[_TtC19PollReportingPlugin26PollMessageReportingPlugin init] */

void FUN_1011db114(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011db150; end: 1011db1a3;  */

void FUN_1011db150(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011db1a4; end: 1011db4f7;  */

undefined * FUN_1011db1a4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long lVar14;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar10 = PTR_PTR_1126b2b98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar5 = param_1;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c4eb08();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      lVar5 = lVar6;
      func_0x000107c4f7a8();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011db4ec);
        (*pcVar3)();
      }
      lVar7 = lVar6;
      func_0x000107c4e024();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x000107c61170(lVar5);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011db4f8);
        (*pcVar3)();
      }
      lStack_108 = lVar7;
      lStack_100 = lVar14;
      lStack_f8 = param_1;
      lStack_f0 = lVar5;
      lStack_e8 = lVar6;
      puStack_e0 = puVar10;
      func_0x000107c600f4(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      FUN_100e15a08();
      func_0x000107c601c0(auStack_88,lVar4,lVar7);
      puVar13 = PTR___sypN_11034f1a8;
      puVar12 = PTR___sSSN_11034da80;
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while (lStack_70 != 0) {
        func_0x000100102924(auStack_88,auStack_a8);
        func_0x000100102924(auStack_a8,auStack_d8);
        puVar8 = &uStack_b8;
        func_0x000107c6147c(puVar8,auStack_d8,puVar13 + 8,puVar12,6);
        lVar5 = lStack_b0;
        uVar2 = uStack_b8;
        if ((((ulong)puVar8 & 1) != 0) && (lStack_b0 != 0)) {
          puVar9 = puVar10;
          func_0x000107c61558();
          puVar11 = puVar10;
          if (((ulong)puVar9 & 1) == 0) {
            puVar11 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
          }
          uVar1 = *(ulong *)(puVar11 + 0x10);
          puVar10 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
            func_0x0001000d182c(puVar10,uVar1 + 1,1,puVar11);
          }
          *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x20) = uVar2;
          *(long *)(puVar10 + uVar1 * 0x10 + 0x28) = lVar5;
        }
        func_0x000107c601c0(auStack_88,lVar4,lVar7);
      }
      func_0x000107c61170(lStack_108);
      (**(code **)(lStack_100 + 8))(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
      lVar5 = lStack_f8;
      func_0x000107c4ce20();
      func_0x000107c61180();
      lVar4 = lVar5;
      func_0x000107c4eb18();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c5ca04();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 != 0) {
          func_0x000107c4c0a8(lVar5);
          func_0x000107c61170(lVar5);
        }
      }
      puVar12 = PTR_PTR_1126a6578;
      func_0x000107c610f8(PTR_PTR_1126a6578);
      puVar13 = puVar10;
      func_0x000107c5fc48(puVar10,PTR___sSSN_11034da80);
      func_0x000107c6142c(puVar10);
      lVar5 = lStack_f0;
      func_0x000107c481fc(puVar12);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar13);
      puVar10 = puStack_e0;
      func_0x000107c575c4(puStack_e0);
      func_0x000107c61170(lStack_e8);
      func_0x000107c61170(puVar12);
    }
  }
  puVar12 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c451b0();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  return puVar12;
}



/* Entry: 1011db4f8; end: 1011db57f;  */

undefined8 FUN_1011db4f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000107c4ea18(param_1);
  func_0x000107c61180();
  uVar2 = 0;
  func_0x0001011db184(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4fba8(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return unaff_x20;
}



/* Entry: 1011db580; end: 1011db59b;  */

void FUN_1011db580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011db59c; end: 1011db5bb;  */

void FUN_1011db59c(void)

{
  func_0x000107c61168(&PTR_PTR_112d66148);
  return;
}



/* Entry: 1011db5bc; end: 1011db603; -[SCPollReportingPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011db5bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d661a0;
  func_0x000107c61428(param_1 + _DAT_112d661a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011db604; end: 1011db65b; -[SCPollReportingPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011db604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d661a0;
  func_0x000107c61428(param_1 + _DAT_112d661a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011db65c; end: 1011db723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011db65c(void)

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
    FUN_1011db59c();
    func_0x000107c613fc();
    lVar3 = lVar1;
    func_0x000107c4ea18(lVar1);
    func_0x000107c61180();
    uVar4 = 0;
    func_0x0001011db184(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c4fba8(lVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d661a8);
    *(undefined8 *)(unaff_x20 + _DAT_112d661a8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1011db724; end: 1011db74b; -[SCPollReportingPluginEntryPoint begin] */

void FUN_1011db724(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011db65c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011db74c; end: 1011db78f; -[SCPollReportingPluginEntryPoint end] */

void FUN_1011db74c(undefined8 param_1)

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



/* Entry: 1011db790; end: 1011db8af;  */

void FUN_1011db790(long param_1,long param_2,long param_3)

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
                        "PollReportingPlugin/SCPollReportingPluginEntryPoint.swift",0x39,2,0x21,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011db8b0);
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



/* Entry: 1011db8b0; end: 1011db95b; -[SCPollReportingPluginEntryPoint setValue:forIvarName:] */

void FUN_1011db8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011db790(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011db95c; end: 1011db9bb; -[SCPollReportingPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011db95c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d661a0,0);
  *(undefined8 *)(param_1 + _DAT_112d661a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011db9bc; end: 1011db9ef;  */

void FUN_1011db9bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011db9f0; end: 1011dba27; -[SCPollReportingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011db9f0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d661a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d661a8));
  return;
}



/* Entry: 1011dba28; end: 1011dba47;  */

void FUN_1011dba28(void)

{
  func_0x000107c61168(&PTR_PTR_1127b84f8);
  return;
}



/* Entry: 1011dba48; end: 1011dbaa3; -[_TtC24VoiceNoteReportingPlugin24VoiceNoteReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_1011dba48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011dbb54(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011dbaa4; end: 1011dbabb; -[_TtC24VoiceNoteReportingPlugin24VoiceNoteReportingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001011dbab8) */

void FUN_1011dbaa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011dbabc; end: 1011dbac3; -[_TtC24VoiceNoteReportingPlugin24VoiceNoteReportingPlugin isReportableForMessage:] */

undefined8 FUN_1011dbabc(void)

{
  return 1;
}



/* Entry: 1011dbac4; end: 1011dbaff; -[_TtC24VoiceNoteReportingPlugin24VoiceNoteReportingPlugin init] */

void FUN_1011dbac4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011dbb00; end: 1011dbb53;  */

void FUN_1011dbb00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011dbb54; end: 1011dbc9f;  */

undefined * FUN_1011dbb54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b2b98;
  func_0x000107c610f8(PTR_PTR_1126b2b98);
  func_0x000107c453e4();
  func_0x000107c4c930(param_1);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000104f6781c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126a6580;
  func_0x000107c610f8(PTR_PTR_1126a6580);
  func_0x000107c49558();
  func_0x000107c5a5fc(puVar1,param_2,puVar3);
  puVar4 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c451b0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 1011dbca0; end: 1011dbcbb;  */

void FUN_1011dbca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011dbcbc; end: 1011dbcdb;  */

void FUN_1011dbcbc(void)

{
  func_0x000107c61168(&PTR_PTR_112d66240);
  return;
}



/* Entry: 1011dbcdc; end: 1011dbd23; -[SCVoiceNoteReportingPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dbcdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66298;
  func_0x000107c61428(param_1 + _DAT_112d66298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011dbd24; end: 1011dbd7b; -[SCVoiceNoteReportingPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dbd24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66298;
  func_0x000107c61428(param_1 + _DAT_112d66298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011dbd7c; end: 1011dbe43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dbd7c(void)

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
    FUN_1011dbcbc();
    func_0x000107c613fc();
    lVar3 = lVar1;
    func_0x000107c4ea18(lVar1);
    func_0x000107c61180();
    uVar4 = 0;
    func_0x0001011dbb34(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c4fba8(lVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d662a0);
    *(undefined8 *)(unaff_x20 + _DAT_112d662a0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1011dbe44; end: 1011dbe6b; -[SCVoiceNoteReportingPluginEntryPoint begin] */

void FUN_1011dbe44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011dbd7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011dbe6c; end: 1011dbeaf; -[SCVoiceNoteReportingPluginEntryPoint end] */

void FUN_1011dbe6c(undefined8 param_1)

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



/* Entry: 1011dbeb0; end: 1011dbfcf;  */

void FUN_1011dbeb0(long param_1,long param_2,long param_3)

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
                        "VoiceNoteReportingPlugin/SCVoiceNoteReportingPluginEntryPoint.swift",0x43,2
                        ,0x21,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011dbfd0);
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



/* Entry: 1011dbfd0; end: 1011dc07b; -[SCVoiceNoteReportingPluginEntryPoint setValue:forIvarName:] */

void FUN_1011dbfd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011dbeb0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011dc07c; end: 1011dc0db; -[SCVoiceNoteReportingPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dc07c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d66298,0);
  *(undefined8 *)(param_1 + _DAT_112d662a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011dc0dc; end: 1011dc10f;  */

void FUN_1011dc0dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011dc110; end: 1011dc147; -[SCVoiceNoteReportingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dc110(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d66298);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d662a0));
  return;
}



/* Entry: 1011dc148; end: 1011dc167;  */

void FUN_1011dc148(void)

{
  func_0x000107c61168(&PTR_PTR_1127b8668);
  return;
}



/* Entry: 1011dc168; end: 1011dc1c3; -[_TtC21ChatPageLaunchHandler21ChatPageLaunchHandler init] */

void FUN_1011dc168(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatPageLaunchHandler.ChatPageLaunchHandler",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011dc194);
  (*pcVar1)();
}



/* Entry: 1011dc1c4; end: 1011dc20f; -[_TtC21ChatPageLaunchHandler21ChatPageLaunchHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dc1c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d662d0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d662d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d662e0 + 8))
  ;
  return;
}



/* Entry: 1011dc210; end: 1011dc223;  */

bool FUN_1011dc210(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1011dc224; end: 1011dc2cf;  */

void FUN_1011dc224(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1011dc2d0; end: 1011dc2df;  */

void FUN_1011dc2d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1011dc2e0; end: 1011dc2e7; -[_TtC21ChatPageLaunchHandler21ChatPageLaunchHandler screen] */

undefined8 FUN_1011dc2e0(void)

{
  return 0x23;
}



/* Entry: 1011dc2e8; end: 1011dc467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dc2e8(undefined1 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  puVar2 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined1 *)0x0) {
    if ((param_2 == 0) && (param_1 != (undefined1 *)0x0)) {
      uVar4 = *(undefined8 *)(puVar2 + _DAT_112d662e0);
      uVar1 = *(undefined8 *)((long)(puVar2 + _DAT_112d662e0) + 8);
      func_0x000107c61434(uVar1);
      func_0x000107c615f0(param_1);
      uVar7 = uVar1;
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c6142c(uVar1);
      puVar5 = param_1;
      func_0x000107c4fa6c();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = puVar5;
        func_0x000107c5faec();
        func_0x000107c61170(puVar5);
        func_0x000104522c9c(0);
        func_0x00010452281c(puVar6,uVar7);
        func_0x000107c6142c(uVar7);
        puStack_60 = puVar6;
        func_0x000100b60084(&puStack_60);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(param_1);
        func_0x000107c61170(puVar2);
        return;
      }
      func_0x000107c61170(puVar2);
      func_0x000107c615e8();
      puVar2 = param_1;
    }
    else {
      func_0x000107c61170();
    }
  }
  FUN_1011dca80();
  puVar3 = &UNK_110391508;
  func_0x000107c613f8(&UNK_110391508,puVar2,0,0);
  *puVar2 = 1;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar3);
  return;
}



/* Entry: 1011dc468; end: 1011dc51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dc468(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (*(char *)(param_1 + 8) != '\x01') {
    param_4 = param_4 + _DAT_112d662d0;
    func_0x000107c61618();
    if (param_4 != 0) {
      lVar1 = param_4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(param_4);
      if (lVar1 != 0) {
        func_0x000107c5ae64(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  (*param_2)();
  return;
}



/* Entry: 1011dc520; end: 1011dc5af; -[_TtC21ChatPageLaunchHandler21ChatPageLaunchHandler launchWithCommand:uiContainer:completion:] */

/* WARNING: Possible PIC construction at 0x0001011dc590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011dc594) */

void FUN_1011dc520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1011dc5d0(param_3,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011dc5b0; end: 1011dc5cf;  */

void FUN_1011dc5b0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b8728);
  return;
}



/* Entry: 1011dc5d0; end: 1011dca77;  */

/* WARNING: Possible PIC construction at 0x0001011dc880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dc980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dca0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dca1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dca30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dca40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dc960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dc7e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dca70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dc77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dc78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dc704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011dc790) */
/* WARNING: Removing unreachable block (ram,0x0001011dc780) */
/* WARNING: Removing unreachable block (ram,0x0001011dca74) */
/* WARNING: Removing unreachable block (ram,0x0001011dc7e8) */
/* WARNING: Removing unreachable block (ram,0x0001011dc7f4) */
/* WARNING: Removing unreachable block (ram,0x0001011dc964) */
/* WARNING: Removing unreachable block (ram,0x0001011dca44) */
/* WARNING: Removing unreachable block (ram,0x0001011dca34) */
/* WARNING: Removing unreachable block (ram,0x0001011dca20) */
/* WARNING: Removing unreachable block (ram,0x0001011dca10) */
/* WARNING: Removing unreachable block (ram,0x0001011dc984) */
/* WARNING: Removing unreachable block (ram,0x0001011dc884) */
/* WARNING: Removing unreachable block (ram,0x0001011dc97c) */
/* WARNING: Removing unreachable block (ram,0x0001011dc708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dc5d0(undefined1 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar2 = &UNK_1103913b0;
  uVar8 = 0x18;
  func_0x000107c613fc(&UNK_1103913b0,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  puVar3 = param_1;
  func_0x000107c519e4();
  if ((int)puVar3 == 0x23) {
    puVar4 = param_1;
    func_0x000107c3f940();
    func_0x000107c61180();
    puVar3 = (undefined1 *)0x0;
    if (puVar4 != (undefined1 *)0x0) {
      func_0x000107c40674();
      func_0x000107c61180();
      if (puVar4 != (undefined1 *)0x0) {
        puVar5 = puVar4;
        func_0x000107c40674();
        func_0x000107c61180();
        if (puVar5 != (undefined1 *)0x0) {
          func_0x000107c5faec();
          puVar3 = param_1;
          func_0x000107c5b658();
          iVar1 = (int)puVar3;
          if (iVar1 == 6) {
            func_0x000107c4d790();
            func_0x000107c61180();
            if (param_1 == (undefined1 *)0x0) {
              func_0x000107c60bd0(param_3);
            }
            else {
              func_0x000107c49eec();
              puVar5 = param_1;
            }
          }
          else {
            if ((iVar1 != 7) && (iVar1 == 8)) {
              func_0x000107c42e38();
            }
            func_0x0001000285a8(0x112d66318,&UNK_10d92ab78);
            func_0x000107c613fc();
            uVar6 = 0;
            func_0x00010095c380();
            func_0x000107c49e9c();
            if ((int)puVar4 == 0) {
              func_0x000107c6142c(uVar8);
              puVar2 = &UNK_1103913d8;
              func_0x000107c613fc(&UNK_1103913d8,0x18,7);
              func_0x000107c61614(puVar2 + 0x10,param_2);
              puVar7 = &UNK_110391400;
              func_0x000107c613fc(&UNK_110391400,0x20,7);
              *(undefined **)(puVar7 + 0x10) = puVar2;
              *(undefined8 *)(puVar7 + 0x18) = uVar6;
              pcStack_70 = FUN_1011dcac0;
              puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_88 = 0x42000000;
              pcStack_80 = FUN_1011d0004;
              puStack_78 = &UNK_110391418;
              puStack_68 = puVar7;
              func_0x000107c60bc4(&puStack_90);
              puVar2 = puStack_68;
              func_0x000107c6157c(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_release_11034f4c0)(puVar2);
              return;
            }
          }
          goto code_r0x000107c61170;
        }
        func_0x000107c61170();
      }
      FUN_1011dca80();
      puVar5 = &UNK_110391508;
      func_0x000107c613f8(&UNK_110391508,puVar4,0,0);
      *puVar4 = 0;
      func_0x000107c5ed2c();
      (**(code **)(param_3 + 0x10))(param_3,puVar5);
      goto code_r0x000107c61170;
    }
  }
  FUN_1011dca80();
  puVar5 = &UNK_110391508;
  func_0x000107c613f8(&UNK_110391508,puVar3,0,0);
  *puVar3 = 0;
  func_0x000107c5ed2c();
  (**(code **)(param_3 + 0x10))(param_3,puVar5);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1011dca78; end: 1011dca7f;  */

void FUN_1011dca78(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011dca80; end: 1011dcabf;  */

void FUN_1011dca80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d66310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92ac1c;
  func_0x000107c61520(&UNK_10d92ac1c,&UNK_110391508);
  puRam0000000112d66310 = puVar1;
  return;
}



/* Entry: 1011dcac0; end: 1011dcb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dcac0(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  puVar3 = (undefined1 *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (undefined1 *)0x0) {
    if ((param_2 == 0) && (param_1 != (undefined1 *)0x0)) {
      uVar5 = *(undefined8 *)(puVar3 + _DAT_112d662e0);
      uVar2 = *(undefined8 *)((long)(puVar3 + _DAT_112d662e0) + 8);
      func_0x000107c61434(uVar2);
      func_0x000107c615f0(param_1);
      uVar8 = uVar2;
      func_0x000107c5fadc(uVar5,uVar2);
      func_0x000107c6142c(uVar2);
      puVar6 = param_1;
      func_0x000107c4fa6c();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (puVar6 != (undefined1 *)0x0) {
        puVar7 = puVar6;
        func_0x000107c5faec();
        func_0x000107c61170(puVar6);
        func_0x000104522c9c(0);
        func_0x00010452281c(puVar7,uVar8);
        func_0x000107c6142c(uVar8);
        puStack_60 = puVar7;
        func_0x000100b60084(&puStack_60);
        func_0x000107c61170(puVar7);
        func_0x000107c615e8(param_1);
        func_0x000107c61170(puVar3);
        return;
      }
      func_0x000107c61170(puVar3);
      func_0x000107c615e8();
      puVar3 = param_1;
    }
    else {
      func_0x000107c61170();
    }
  }
  FUN_1011dca80();
  puVar4 = &UNK_110391508;
  func_0x000107c613f8(&UNK_110391508,puVar3,0,0);
  *puVar3 = 1;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar4);
  return;
}



/* Entry: 1011dcb08; end: 1011dcb4b;  */

void FUN_1011dcb08(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1011dcb4c; end: 1011dccb3;  */

int FUN_1011dcb4c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1011dcbc8;
        goto LAB_1011dcbac;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1011dcbac:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1011dcbc8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1011dccb4; end: 1011dccf3;  */

void FUN_1011dccb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d66328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92abf4;
  func_0x000107c61520(&UNK_10d92abf4,&UNK_110391508);
  puRam0000000112d66328 = puVar1;
  return;
}



/* Entry: 1011dccf4; end: 1011dcf47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011dccf4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 unaff_x20;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar15 = 0x10;
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  uVar4 = param_2;
  func_0x000107c3f8cc(param_2);
  func_0x000107c61180();
  lVar5 = param_3;
  func_0x000107c406a0();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1011dcf44);
    (*pcVar3)();
  }
  lVar6 = lVar5;
  func_0x000107c3cfbc();
  func_0x000107c61180();
  func_0x000107c615e8(lVar5);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(param_4 + _DAT_113091ad8);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    lVar9 = 0;
    FUN_1011dd0a0();
    lVar10 = lVar9;
    func_0x000107c610f8();
    lVar11 = 0;
    FUN_1011dc5b0();
    lVar12 = lVar11;
    func_0x000107c610f8();
    lVar5 = _DAT_112d662d0;
    func_0x000107c61614(lVar12 + _DAT_112d662d0,0);
    func_0x000107c61604(lVar12 + lVar5,uVar4);
    *(long *)(lVar12 + _DAT_112d662d8) = lVar6;
    puVar1 = (undefined8 *)(lVar12 + _DAT_112d662e0);
    *puVar1 = uVar8;
    puVar1[1] = uVar15;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar12;
    lStack_68 = lVar11;
    func_0x000107c615f0(lVar6);
    plVar13 = &lStack_70;
    func_0x000107c61154(plVar13,puVar2);
    plVar14 = plVar13;
    FUN_100f27668();
    func_0x000107c613fc();
    plVar14[3] = 3;
    plVar14[2] = 1;
    plVar14[4] = (long)plVar13;
    *(long **)(lVar10 + _DAT_112d663c8) = plVar14;
    plVar13 = &lStack_80;
    lStack_80 = lVar10;
    lStack_78 = lVar9;
    func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar6);
    uVar4 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(plVar13);
    func_0x000107c61170(uVar4);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1011dcf48);
  (*pcVar3)();
}



/* Entry: 1011dcf48; end: 1011dcf63;  */

void FUN_1011dcf48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011dcf64; end: 1011dcf83;  */

void FUN_1011dcf64(void)

{
  func_0x000107c61168(&PTR_PTR_112d66370);
  return;
}



/* Entry: 1011dcf84; end: 1011dcfdf; -[_TtC21ChatPageLaunchHandler22ChatPageLauncherPlugin handlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dcf84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d663c8);
  func_0x000107c61434(uVar3);
  uVar1 = 0x112d4c360;
  func_0x0001000285a8(0x112d4c360,&UNK_10d912dc0);
  uVar2 = uVar3;
  func_0x000107c5fc48(uVar3,uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1011dcfe0; end: 1011dd033; -[_TtC21ChatPageLaunchHandler22ChatPageLauncherPlugin setHandlers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dcfe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d4c360;
  func_0x0001000285a8(0x112d4c360,&UNK_10d912dc0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d663c8);
  *(undefined8 *)(param_1 + _DAT_112d663c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1011dd034; end: 1011dd08f; -[_TtC21ChatPageLaunchHandler22ChatPageLauncherPlugin init] */

void FUN_1011dd034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatPageLaunchHandler.ChatPageLauncherPlugin",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011dd060);
  (*pcVar1)();
}



/* Entry: 1011dd090; end: 1011dd09f; -[_TtC21ChatPageLaunchHandler22ChatPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d663c8));
  return;
}



/* Entry: 1011dd0a0; end: 1011dd0bf;  */

void FUN_1011dd0a0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b8810);
  return;
}



/* Entry: 1011dd0c0; end: 1011dd0cb; -[SCChatPageLaunchHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd0c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d663f8;
  func_0x000107c61428(param_1 + _DAT_112d663f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011dd0cc; end: 1011dd0d7; -[SCChatPageLaunchHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d663f8;
  func_0x000107c61428(param_1 + _DAT_112d663f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011dd0d8; end: 1011dd0e3; -[SCChatPageLaunchHandlerEntryPoint mainTabNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd0d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66400;
  func_0x000107c61428(param_1 + _DAT_112d66400,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011dd0e4; end: 1011dd0ef; -[SCChatPageLaunchHandlerEntryPoint setMainTabNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66400;
  func_0x000107c61428(param_1 + _DAT_112d66400,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011dd0f0; end: 1011dd0fb; -[SCChatPageLaunchHandlerEntryPoint conversationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd0f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66408;
  func_0x000107c61428(param_1 + _DAT_112d66408,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011dd0fc; end: 1011dd107; -[SCChatPageLaunchHandlerEntryPoint setConversationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66408;
  func_0x000107c61428(param_1 + _DAT_112d66408,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011dd108; end: 1011dd113; -[SCChatPageLaunchHandlerEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd108(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66410;
  func_0x000107c61428(param_1 + _DAT_112d66410,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011dd114; end: 1011dd157;  */

void FUN_1011dd114(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011dd158; end: 1011dd163; -[SCChatPageLaunchHandlerEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd158(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66410;
  func_0x000107c61428(param_1 + _DAT_112d66410,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011dd164; end: 1011dd1b7;  */

void FUN_1011dd164(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011dd1b8; end: 1011dd4bb;  */

/* WARNING: Possible PIC construction at 0x0001011dd2d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dd3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dd3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dd40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dd41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dd42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dd484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011dd474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011dd488) */
/* WARNING: Removing unreachable block (ram,0x0001011dd430) */
/* WARNING: Removing unreachable block (ram,0x0001011dd420) */
/* WARNING: Removing unreachable block (ram,0x0001011dd410) */
/* WARNING: Removing unreachable block (ram,0x0001011dd400) */
/* WARNING: Removing unreachable block (ram,0x0001011dd3d0) */
/* WARNING: Removing unreachable block (ram,0x0001011dd2d8) */
/* WARNING: Removing unreachable block (ram,0x0001011dd478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd1b8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4c19c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c406cc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5da74();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_1011dcf64();
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x000107c3f8cc(lVar2);
        func_0x000107c61180();
        func_0x000107c406a0();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011dd4b8);
          (*pcVar1)();
        }
        lVar4 = lVar3;
        func_0x000107c3cfbc();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011dd4bc);
          (*pcVar1)();
        }
        lVar4 = *(long *)(unaff_x20 + _DAT_113091ad8);
        func_0x000107c5d984();
        func_0x000107c61180();
        func_0x000107c5faec();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1011dd4bc; end: 1011dd4e3; -[SCChatPageLaunchHandlerEntryPoint begin] */

void FUN_1011dd4bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011dd1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011dd4e4; end: 1011dd527; -[SCChatPageLaunchHandlerEntryPoint end] */

void FUN_1011dd4e4(undefined8 param_1)

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



/* Entry: 1011dd528; end: 1011dd79b;  */

void FUN_1011dd528(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10e1f90)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010ef1e070,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10d4910)) ||
           (func_0x000107c605b8(0xd000000000000014,0x800000010ef2b6f0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5397c();
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
                                  "ChatPageLaunchHandler/SCChatPageLaunchHandlerEntryPoint.swift",
                                  0x3d,2,0x31,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1011dd79c);
              (*pcVar1)();
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a3f8();
        }
        goto LAB_1011dd5b4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c561b0();
  }
LAB_1011dd5b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011dd79c; end: 1011dd847; -[SCChatPageLaunchHandlerEntryPoint setValue:forIvarName:] */

void FUN_1011dd79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011dd528(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011dd848; end: 1011dd8e3; -[SCChatPageLaunchHandlerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd848(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d663f8,0);
  func_0x000107c61614(param_1 + _DAT_112d66400,0);
  func_0x000107c61614(param_1 + _DAT_112d66408,0);
  func_0x000107c61614(param_1 + _DAT_112d66410,0);
  *(undefined8 *)(param_1 + _DAT_112d66418) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011dd8e4; end: 1011dd917;  */

void FUN_1011dd8e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011dd918; end: 1011dd97f; -[SCChatPageLaunchHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd918(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d663f8);
  func_0x000107c61610(param_1 + _DAT_112d66400);
  func_0x000107c61610(param_1 + _DAT_112d66408);
  func_0x000107c61610(param_1 + _DAT_112d66410);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d66418));
  return;
}



/* Entry: 1011dd980; end: 1011dd99f;  */

void FUN_1011dd980(void)

{
  func_0x000107c61168(&PTR_PTR_1127b88e8);
  return;
}



/* Entry: 1011dd9a0; end: 1011dda2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dd9a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112d66448;
  puVar2 = PTR_PTR_1126a6588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d66450) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d66458) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011dda2c; end: 1011ddf3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011dda2c(uint param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(0xe000000000000000);
    bVar3 = (param_1 & 1) == 0;
    uVar1 = 0x65757274;
    if (bVar3) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar3) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(0x800000010ef2cd00);
    func_0x000107c4ba40(*(undefined8 *)(param_2 + _DAT_112d66448));
    func_0x000107c61170(param_2);
  }
  (*param_3)(param_1 & 1);
  return;
}



/* Entry: 1011ddf3c; end: 1011ddf9b; -[_TtC31EelNotificationProcessingPlugin31EelNotificationProcessingPlugin init] */

void FUN_1011ddf3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EelNotificationProcessingPlugin.EelNotificationProcessingPlugin",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ddf68);
  (*pcVar1)();
}



/* Entry: 1011ddf9c; end: 1011ddfe3; -[_TtC31EelNotificationProcessingPlugin31EelNotificationProcessingPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ddf9c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d66450));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d66458));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d66448));
  return;
}



/* Entry: 1011ddfe4; end: 1011de07b; -[_TtC31EelNotificationProcessingPlugin31EelNotificationProcessingPlugin didReceivePushNotificationRequest:backgroundFetchResultCallback:processingCallback:] */

/* WARNING: Possible PIC construction at 0x0001011de05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011de060) */

void FUN_1011ddfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1011de72c(param_3,param_5,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011de07c; end: 1011de0c3; -[_TtC31EelNotificationProcessingPlugin31EelNotificationProcessingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001011de0c0) */

void FUN_1011de07c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e125f8;
  func_0x000107c5fb14();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1011de0c4; end: 1011de70b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011de0c4(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte **ppbVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte **ppbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  byte *pbStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  byte *pbStack_70;
  ulong uStack_68;
  
  ppbVar9 = &pbStack_a0;
  puVar3 = &UNK_110391628;
  func_0x000107c613fc(&UNK_110391628,0x18,7);
  *(long *)(puVar3 + 0x10) = param_3;
  puVar4 = &UNK_110391650;
  func_0x000107c613fc(&UNK_110391650,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1011de99c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  lVar17 = *(long *)(param_1 + 0x10);
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4(param_3);
  func_0x000107c6157c(puVar3);
  puVar7 = PTR___sypN_11034f1a8;
  if (lVar17 == 0) {
LAB_1011de5ec:
    pbStack_a0 = (byte *)0x0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(uStack_98);
    pbStack_a0 = (byte *)0xd000000000000027;
    uStack_98 = 0x800000010ef2ccd0;
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c5f9ec(param_1,PTR___sSSN_11034da80,puVar7 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(uStack_98);
    func_0x000107c4bdfc(*(undefined8 *)(param_2 + _DAT_112d66448));
  }
  else {
    func_0x000107c61434(param_1);
    lVar17 = 0x5f79656b5f77656e;
    uVar12 = 0;
    func_0x000100029284(0x5f79656b5f77656e);
    uVar10 = param_1;
    if ((uVar12 & 1) == 0) {
LAB_1011de5e8:
      func_0x000107c6142c(uVar10);
      goto LAB_1011de5ec;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar17 * 0x20,&pbStack_a0);
    func_0x000107c6142c(param_1);
    ppbVar5 = &pbStack_70;
    func_0x000107c6147c(ppbVar5,&pbStack_a0,puVar7 + 8,PTR___sSSN_11034da80,6);
    uVar12 = uStack_68;
    if (((ulong)ppbVar5 & 1) == 0) goto LAB_1011de5ec;
    uVar11 = (ulong)pbStack_70 & 0xffffffffffff;
    uVar14 = uStack_68 >> 0x38 & 0xf;
    uVar1 = uVar11;
    if ((uStack_68 & 0x2000000000000000) != 0) {
      uVar1 = uVar14;
    }
    uVar10 = uStack_68;
    if (uVar1 == 0) goto LAB_1011de5e8;
    if ((uStack_68 >> 0x3c & 1) == 0) {
      if ((uStack_68 >> 0x3d & 1) == 0) {
        if (((ulong)pbStack_70 >> 0x3c & 1) == 0) {
          pbVar13 = pbStack_70;
          uVar11 = uStack_68;
          func_0x000107c60358();
        }
        else {
          pbVar13 = (byte *)((uStack_68 & 0xfffffffffffffff) + 0x20);
        }
        if (*pbVar13 == 0x2b) {
          if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1011de708);
            (*pcVar2)();
          }
          lVar17 = uVar11 - 1;
          if (lVar17 == 0) goto LAB_1011de418;
          lVar18 = 0;
          do {
            pbVar13 = pbVar13 + 1;
            if (((9 < *pbVar13 - 0x30) ||
                (lVar15 = lVar18 * 10, SUB168(SEXT816(lVar18) * SEXT816(10),8) != lVar15 >> 0x3f))
               || (uVar10 = (ulong)(byte)(*pbVar13 - 0x30), lVar18 = lVar15 + uVar10,
                  SCARRY8(lVar15,uVar10))) goto LAB_1011de418;
            uVar16 = 0;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        else if (*pbVar13 == 0x2d) {
          if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1011de700);
            (*pcVar2)();
          }
          lVar17 = uVar11 - 1;
          if (lVar17 == 0) {
LAB_1011de418:
            uVar16 = 1;
          }
          else {
            lVar18 = 0;
            do {
              pbVar13 = pbVar13 + 1;
              if (((9 < *pbVar13 - 0x30) ||
                  (lVar15 = lVar18 * 10, SUB168(SEXT816(lVar18) * SEXT816(10),8) != lVar15 >> 0x3f))
                 || (uVar10 = (ulong)(byte)(*pbVar13 - 0x30), lVar18 = lVar15 - uVar10,
                    SBORROW8(lVar15,uVar10))) goto LAB_1011de418;
              uVar16 = 0;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
          }
        }
        else {
          if (uVar11 == 0) goto LAB_1011de418;
          lVar17 = 0;
          if (pbVar13 == (byte *)0x0) {
            uVar16 = 0;
          }
          else {
            do {
              if (((9 < *pbVar13 - 0x30) ||
                  (lVar18 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar18 >> 0x3f))
                 || (uVar10 = (ulong)(byte)(*pbVar13 - 0x30), lVar17 = lVar18 + uVar10,
                    SCARRY8(lVar18,uVar10))) goto LAB_1011de418;
              uVar16 = 0;
              uVar11 = uVar11 - 1;
              pbVar13 = pbVar13 + 1;
            } while (uVar11 != 0);
          }
        }
      }
      else {
        pbStack_a0 = pbStack_70;
        uStack_98 = uStack_68 & 0xffffffffffffff;
        uVar16 = (uint)pbStack_70 & 0xff;
        if (uVar16 == 0x2b) {
          if (uVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1011de70c);
            (*pcVar2)();
          }
          lVar17 = uVar14 - 1;
          if (lVar17 == 0) goto LAB_1011de418;
          lVar18 = 0;
          pbVar13 = (byte *)((ulong)&pbStack_a0 | 1);
          do {
            if (((9 < *pbVar13 - 0x30) ||
                (lVar15 = lVar18 * 10, SUB168(SEXT816(lVar18) * SEXT816(10),8) != lVar15 >> 0x3f))
               || (uVar10 = (ulong)(byte)(*pbVar13 - 0x30), lVar18 = lVar15 + uVar10,
                  SCARRY8(lVar15,uVar10))) goto LAB_1011de418;
            uVar16 = 0;
            lVar17 = lVar17 + -1;
            pbVar13 = pbVar13 + 1;
          } while (lVar17 != 0);
        }
        else if (uVar16 == 0x2d) {
          if (uVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1011de704);
            (*pcVar2)();
          }
          lVar17 = uVar14 - 1;
          if (lVar17 == 0) goto LAB_1011de418;
          lVar18 = 0;
          pbVar13 = (byte *)((ulong)&pbStack_a0 | 1);
          do {
            if (((9 < *pbVar13 - 0x30) ||
                (lVar15 = lVar18 * 10, SUB168(SEXT816(lVar18) * SEXT816(10),8) != lVar15 >> 0x3f))
               || (uVar10 = (ulong)(byte)(*pbVar13 - 0x30), lVar18 = lVar15 - uVar10,
                  SBORROW8(lVar15,uVar10))) goto LAB_1011de418;
            uVar16 = 0;
            lVar17 = lVar17 + -1;
            pbVar13 = pbVar13 + 1;
          } while (lVar17 != 0);
        }
        else {
          if (uVar14 == 0) goto LAB_1011de418;
          lVar17 = 0;
          ppbVar5 = &pbStack_a0;
          do {
            if (((9 < *(byte *)ppbVar5 - 0x30) ||
                (lVar18 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar18 >> 0x3f))
               || (uVar10 = (ulong)(byte)(*(byte *)ppbVar5 - 0x30), lVar17 = lVar18 + uVar10,
                  SCARRY8(lVar18,uVar10))) goto LAB_1011de418;
            uVar16 = 0;
            uVar14 = uVar14 - 1;
            ppbVar5 = (byte **)((long)ppbVar5 + 1);
          } while (uVar14 != 0);
        }
      }
    }
    else {
      FUN_100edba6c(pbStack_70,uStack_68,10);
      uVar16 = (uint)uVar10;
    }
    func_0x000107c6142c(uVar12);
    if (((uVar16 & 0xff) == 1) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_1011de5ec;
    func_0x000107c61434(param_1);
    lVar17 = 0x6c6275705f77656e;
    uVar12 = 0xee0079656b5f6369;
    func_0x000100029284(0x6c6275705f77656e);
    uVar10 = param_1;
    if ((uVar12 & 1) == 0) goto LAB_1011de5e8;
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar17 * 0x20,&pbStack_a0);
    func_0x000107c6142c(param_1);
    ppbVar5 = &pbStack_70;
    func_0x000107c6147c(ppbVar5,&pbStack_a0,puVar7 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)ppbVar5 & 1) == 0) goto LAB_1011de5ec;
    pbVar13 = pbStack_70;
    uVar12 = uStack_68;
    func_0x000107c5ee08(pbStack_70,uStack_68,0);
    func_0x000107c6142c(uStack_68);
    if (uVar12 >> 0x3c < 0xf) {
      func_0x0001000d224c(&pbStack_70);
      pbVar6 = pbVar13;
      func_0x000107c5ee20(pbVar13,uVar12);
      puVar7 = &UNK_110391678;
      func_0x000107c613fc(&UNK_110391678,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_2);
      puVar8 = &UNK_1103916a0;
      func_0x000107c613fc(&UNK_1103916a0,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(code **)(puVar8 + 0x18) = FUN_1011de9ac;
      *(undefined **)(puVar8 + 0x20) = puVar4;
      pcStack_80 = FUN_1011de9d8;
      pbStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100ab47f8;
      puStack_88 = &UNK_1103916b8;
      puStack_78 = puVar8;
      func_0x000107c60bc4(&pbStack_a0);
      puVar7 = puStack_78;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar7);
      func_0x000107c3ebf8(pbStack_70);
      func_0x0001000b44c0(pbVar13,uVar12);
      func_0x000107c60bd0(ppbVar9);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c615e8(pbStack_70);
      func_0x000107c61170(pbVar6);
      goto LAB_1011de68c;
    }
  }
  (**(code **)(param_3 + 0x10))(param_3,2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
LAB_1011de68c:
  func_0x000107c60bd0(param_3);
  return;
}



/* Entry: 1011de70c; end: 1011de72b;  */

void FUN_1011de70c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b89c0);
  return;
}



/* Entry: 1011de72c; end: 1011de99b;  */

/* WARNING: Possible PIC construction at 0x0001011de948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011de94c) */

void FUN_1011de72c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  uVar2 = param_2;
  func_0x000107c60bc4(param_4);
  func_0x000107c602fc(0x19);
  func_0x000107c6142c(0xe000000000000000);
  lVar7 = param_1;
  func_0x000107c417f0(param_1);
  func_0x000107c61180();
  lVar1 = lVar7;
  func_0x000107c5faec();
  func_0x000107c61170(lVar7);
  func_0x000107c5fb78(lVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(0x800000010ef2ccb0);
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  lVar7 = param_1;
  func_0x000107c5d9a4();
  func_0x000107c61180();
  puVar6 = PTR___sypN_11034f1a8;
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar1 = lVar7;
    func_0x000107c5f9e8();
    func_0x000107c61170(lVar7);
    lVar7 = lVar1;
    func_0x000107c5f9dc(lVar1,PTR___ss11AnyHashableVN_11034e448,puVar6 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar1);
  }
  puVar6 = PTR_PTR_1126b2c50;
  func_0x000107c61168(PTR_PTR_1126b2c50);
  func_0x000107c4d84c(param_1);
  func_0x000107c4525c(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  func_0x000107c4dbec(param_2);
  func_0x0001011ddb3c();
  if (param_1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
    func_0x000107c61170(puVar6);
  }
  else {
    func_0x000107c60bc4(param_4);
    FUN_1011de0c4(param_1,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_4);
  return;
}



/* Entry: 1011de99c; end: 1011de9ab;  */

void FUN_1011de99c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001011de9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1011de9ac; end: 1011de9d7;  */

void FUN_1011de9ac(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if ((param_1 & 1) == 0) {
    uVar1 = 2;
  }
  (**(code **)(unaff_x20 + 0x10))(uVar1);
  return;
}



/* Entry: 1011de9d8; end: 1011de9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011de9d8(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(0xe000000000000000);
    bVar4 = (param_1 & 1) == 0;
    uVar1 = 0x65757274;
    if (bVar4) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar4) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(0x800000010ef2cd00);
    func_0x000107c4ba40(*(undefined8 *)(lVar5 + _DAT_112d66448));
    func_0x000107c61170(lVar5);
  }
  (*pcVar3)(param_1 & 1);
  return;
}



/* Entry: 1011dea00; end: 1011dea2b;  */

void FUN_1011dea00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011dea2c; end: 1011deaf3;  */

undefined8 FUN_1011dea2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1011deb10(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1011deaf4; end: 1011deb0f;  */

void FUN_1011deaf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


