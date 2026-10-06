/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030d5f38; end: 1030d5f3b;  */

void FUN_1030d5f38(void)

{
  return;
}



/* Entry: 1030d5f3c; end: 1030d5f5b;  */

void FUN_1030d5f3c(void)

{
  FUN_1030d5dac();
  return;
}



/* Entry: 1030d5f5c; end: 1030d5f7b;  */

void FUN_1030d5f5c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b5f40);
  return;
}



/* Entry: 1030d5f7c; end: 1030d604b;  */

undefined8 FUN_1030d5f7c(void)

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
  
  func_0x000107c61428(0x112f3aeb0,&uStack_40,0x20,0);
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
    FUN_1030d604c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1030d604c; end: 1030d606b;  */

void FUN_1030d604c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6008);
  return;
}



/* Entry: 1030d606c; end: 1030d6087;  */

void FUN_1030d606c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f3aeb8,&UNK_10db87648);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1030d60f4,param_1);
  return;
}



/* Entry: 1030d6088; end: 1030d60f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6088(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1030d604c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f3aec0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1030d60f4; end: 1030d60fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d60f4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1030d604c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f3aec0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1030d60fc; end: 1030d6147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d60fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3aec0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030d6148; end: 1030d61a7; -[_TtC28CallFeedbackScopeGraphBridge36CallFeedbackScopeGraphBridgeServices init] */

void FUN_1030d6148(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallFeedbackScopeGraphBridge.CallFeedbackScopeGraphBridgeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d6174);
  (*pcVar1)();
}



/* Entry: 1030d61a8; end: 1030d61b7; -[_TtC28CallFeedbackScopeGraphBridge36CallFeedbackScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d61a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3aec0));
  return;
}



/* Entry: 1030d61b8; end: 1030d6243;  */

void FUN_1030d61b8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1030d61f8,0);
  return;
}



/* Entry: 1030d6244; end: 1030d625f;  */

void FUN_1030d6244(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1030d62b0,param_1);
  return;
}



/* Entry: 1030d6260; end: 1030d62af;  */

void FUN_1030d6260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1030d62b0; end: 1030d62e3;  */

void FUN_1030d62b0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1030d62e4; end: 1030d62eb;  */

undefined8 FUN_1030d62e4(void)

{
  return 0x1b;
}



/* Entry: 1030d62ec; end: 1030d6463;  */

void FUN_1030d62ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11060b110;
  func_0x000107c613fc(&UNK_11060b110,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1030d6464,puVar1);
  return;
}



/* Entry: 1030d6464; end: 1030d646b;  */

void FUN_1030d6464(undefined8 *param_1)

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
  func_0x000107c61428(0x112f3aeb0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f3aeb0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11060b1e8;
  func_0x000107c613fc(&UNK_11060b1e8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1030d6538;
  func_0x00010058fa64(0x1030d6538,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030d646c; end: 1030d64c7;  */

void FUN_1030d646c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f3aeb0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f3aeb0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1030d64c8; end: 1030d653f;  */

undefined ** FUN_1030d64c8(void)

{
  return &PTR_DAT_113066508;
}



/* Entry: 1030d6540; end: 1030d6587; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6540(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3af18;
  func_0x000107c61428(param_1 + _DAT_112f3af18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030d6588; end: 1030d65df; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3af18;
  func_0x000107c61428(param_1 + _DAT_112f3af18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030d65e0; end: 1030d6627; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint sCShakeToReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d65e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3af20;
  func_0x000107c61428(param_1 + _DAT_112f3af20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030d6628; end: 1030d6633; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint setSCShakeToReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6628(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3af20;
  func_0x000107c61428(param_1 + _DAT_112f3af20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030d6634; end: 1030d667b; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint callFeedbackScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6634(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3af28;
  func_0x000107c61428(param_1 + _DAT_112f3af28,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030d667c; end: 1030d6687; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint setCallFeedbackScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d667c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3af28;
  func_0x000107c61428(param_1 + _DAT_112f3af28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030d6688; end: 1030d66e7;  */

void FUN_1030d6688(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1030d66e8; end: 1030d68a3;  */

/* WARNING: Possible PIC construction at 0x0001030d6800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d6824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d6834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d6878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d6838) */
/* WARNING: Removing unreachable block (ram,0x0001030d6828) */
/* WARNING: Removing unreachable block (ram,0x0001030d6804) */
/* WARNING: Removing unreachable block (ram,0x0001030d687c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d66e8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c512bc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3efa0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1030d5d04();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1030d5f7c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d68a4);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f3ae40) = lVar5;
      *(long *)(lVar3 + _DAT_112f3ae48) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1030d68a4; end: 1030d68cb; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1030d68a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030d66e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030d68cc; end: 1030d690f; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint end] */

void FUN_1030d68cc(undefined8 param_1)

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



/* Entry: 1030d6910; end: 1030d6b13;  */

void FUN_1030d6910(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef104ea40)) {
      uVar2 = 0xd00000000000001b;
      func_0x000107c605b8(0xd00000000000001b,0x800000010efb15c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002b;
        if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0edfd50)) &&
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f1202b0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CallFeedbackScopeGraphBridge/SCCallFeedbackScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x50,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d6b14);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52f34();
        goto LAB_1030d699c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58864();
  }
LAB_1030d699c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030d6b14; end: 1030d6bbf; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1030d6b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030d6910(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030d6bc0; end: 1030d6c37; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6bc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3af18,0);
  *(undefined8 *)(param_1 + _DAT_112f3af20) = 0;
  *(undefined8 *)(param_1 + _DAT_112f3af28) = 0;
  *(undefined8 *)(param_1 + _DAT_112f3af30) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030d6c38; end: 1030d6c6b;  */

void FUN_1030d6c38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030d6c6c; end: 1030d6cc3; -[SCCallFeedbackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030d6c98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d6c9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6c6c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3af18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3af20));
  return;
}



/* Entry: 1030d6cc4; end: 1030d6ce3;  */

void FUN_1030d6cc4(void)

{
  func_0x000107c61168(&PTR_PTR_1128b60c8);
  return;
}



/* Entry: 1030d6ce4; end: 1030d6d2b; -[SCCallFeedbackScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6ce4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3af60;
  func_0x000107c61428(param_1 + _DAT_112f3af60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030d6d2c; end: 1030d6d83; -[SCCallFeedbackScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3af60;
  func_0x000107c61428(param_1 + _DAT_112f3af60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030d6d84; end: 1030d6e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6d84(undefined8 param_1,long param_2)

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
    FUN_1030d5f5c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f3ae78) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030d6e5c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f3ae80);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f3af68);
    *(long **)(unaff_x20 + _DAT_112f3af68) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1030d6e5c; end: 1030d6e83; -[SCCallFeedbackScopedServicesSaberEntryPoint begin] */

void FUN_1030d6e5c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030d6d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030d6e84; end: 1030d6ffb;  */

/* WARNING: Possible PIC construction at 0x0001030d6eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d6f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d6ef0) */
/* WARNING: Removing unreachable block (ram,0x0001030d6f88) */
/* WARNING: Removing unreachable block (ram,0x0001030d6fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d6e84(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f3af68);
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



/* Entry: 1030d6ffc; end: 1030d7003;  */

void FUN_1030d6ffc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030d7004; end: 1030d7037; -[SCCallFeedbackScopedServicesSaberEntryPoint end] */

void FUN_1030d7004(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030d6e84();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030d7038; end: 1030d7157;  */

void FUN_1030d7038(long param_1,long param_2,long param_3)

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
                        "CallFeedbackScopeGraphBridge/SCCallFeedbackScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d7158);
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



/* Entry: 1030d7158; end: 1030d7203; -[SCCallFeedbackScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1030d7158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030d7038(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030d7204; end: 1030d7263; -[SCCallFeedbackScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d7204(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3af60,0);
  *(undefined8 *)(param_1 + _DAT_112f3af68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030d7264; end: 1030d7297;  */

void FUN_1030d7264(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030d7298; end: 1030d72cf; -[SCCallFeedbackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d7298(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3af60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3af68));
  return;
}



/* Entry: 1030d72d0; end: 1030d72ef;  */

void FUN_1030d72d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6198);
  return;
}



/* Entry: 1030d72f0; end: 1030d735f;  */

void FUN_1030d72f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c610f8();
  FUN_1030d7360(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1030d7360; end: 1030d79a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1030d7360(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  long *plVar18;
  long unaff_x20;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f3af98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3afa0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3afa8) = 0;
  *(long *)(unaff_x20 + _DAT_112f3afb0) = param_1;
  puVar8 = PTR_s_init_1125d9248;
  func_0x000107c61174();
  puVar5 = &stack0xffffffffffffff78;
  func_0x000107c61154(puVar5,puVar8);
  lVar6 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar17 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = param_2;
  lVar19 = param_3;
  if (lVar17 != 0) {
    lVar7 = lVar17;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar17);
    if (lVar7 != 0) {
      lVar6 = param_3;
      func_0x000107c4d814();
      func_0x000107c61180();
      lVar17 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar17 != 0) {
        lVar6 = lVar17;
        func_0x000107c4c1dc();
        func_0x000107c61180();
        func_0x000107c615e8(lVar17);
        puVar8 = PTR_PTR_1126aead8;
        func_0x000107c610f8();
        func_0x000107c4807c();
        uVar20 = *(undefined8 *)(puVar5 + _DAT_112f3afa0);
        *(undefined **)(puVar5 + _DAT_112f3afa0) = puVar8;
        func_0x000107c61174();
        func_0x000107c61170(uVar20);
        if (puVar8 != (undefined *)0x0) {
          puVar9 = &UNK_11060b2c8;
          func_0x000107c613fc(&UNK_11060b2c8,0x18,7);
          func_0x000107c61614(puVar9 + 0x10,puVar5);
          puVar10 = &UNK_11060b2f0;
          func_0x000107c613fc(&UNK_11060b2f0,0x20,7);
          *(undefined **)(puVar10 + 0x10) = puVar9;
          *(long *)(puVar10 + 0x18) = lVar4;
          puVar11 = &UNK_11060b318;
          func_0x000107c613fc(&UNK_11060b318,0x28,7);
          *(long *)(puVar11 + 0x10) = param_1;
          *(long *)(puVar11 + 0x18) = param_6;
          *(long *)(puVar11 + 0x20) = param_4;
          puVar12 = &UNK_11060b340;
          func_0x000107c613fc(&UNK_11060b340,0x18,7);
          *(long *)(puVar12 + 0x10) = param_5;
          puVar13 = PTR_PTR_1126acc18;
          func_0x000107c610f8();
          puVar3 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_98 = FUN_1030d7a7c;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_1000f6b44;
          puStack_a0 = &UNK_11060b358;
          ppuVar14 = &puStack_b8;
          puStack_90 = puVar10;
          func_0x000107c60bc4(ppuVar14);
          pcStack_c8 = FUN_1030d7ba4;
          puStack_e8 = puVar3;
          uStack_e0 = 0x42000000;
          puStack_d8 = &UNK_1000f6b44;
          puStack_d0 = &UNK_11060b380;
          ppuVar15 = &puStack_e8;
          puStack_c0 = puVar11;
          func_0x000107c60bc4(ppuVar15);
          pcStack_f8 = FUN_1030d7c98;
          puStack_118 = puVar3;
          uStack_110 = 0x42000000;
          puStack_108 = &UNK_100f26cb8;
          puStack_100 = &UNK_11060b3a8;
          ppuVar16 = &puStack_118;
          puStack_f0 = puVar12;
          func_0x000107c60bc4(ppuVar16);
          lVar4 = param_1;
          func_0x000107c61174();
          func_0x000107c6157c(puVar9);
          func_0x000107c61174(param_6);
          func_0x000107c61174(param_4);
          func_0x000107c61174(param_5);
          func_0x000107c615f0(lVar6);
          func_0x000107c47c00();
          func_0x000107c60bd0(ppuVar16);
          func_0x000107c60bd0(ppuVar15);
          func_0x000107c60bd0(ppuVar14);
          func_0x000107c615e8(lVar6);
          func_0x000107c61574(puStack_f0);
          func_0x000107c61574(puStack_c0);
          puVar10 = puStack_90;
          func_0x000107c61574(puVar9);
          func_0x000107c61574(puVar10);
          puVar1 = (undefined8 *)(lVar4 + _DAT_11307b3d8);
          func_0x000107c61428(puVar1,&puStack_b8,0,0);
          uVar20 = *puVar1;
          uVar2 = puVar1[1];
          uVar21 = *(undefined8 *)(lVar4 + _DAT_11307b3e8);
          puVar10 = PTR_PTR_1126acc20;
          func_0x000107c610f8(PTR_PTR_1126acc20);
          func_0x000107c61434(uVar2);
          func_0x000107c61174(uVar21);
          func_0x000107c5fadc(uVar20,uVar2);
          func_0x000107c6142c(uVar2);
          func_0x000107c45b5c(puVar10);
          func_0x000107c61170(uVar21);
          func_0x000107c61170(uVar20);
          puVar11 = PTR_PTR_1126acc28;
          func_0x000107c610f8();
          func_0x000107c49520();
          lVar17 = 0;
          FUN_1030d85a4();
          lVar4 = lVar17;
          func_0x000107c610f8();
          func_0x000107c61614(lVar4 + _DAT_112f3afe8,0);
          *(undefined **)(lVar4 + _DAT_112f3afe0) = puVar11;
          puVar9 = PTR_s_initWithNibName_bundle__1125e9850;
          lStack_128 = lVar4;
          lStack_120 = lVar17;
          func_0x000107c61174();
          plVar18 = &lStack_128;
          func_0x000107c61154(plVar18,puVar9,0,0);
          uVar20 = *(undefined8 *)(puVar5 + _DAT_112f3afa8);
          *(long **)(puVar5 + _DAT_112f3afa8) = plVar18;
          func_0x000107c61174();
          func_0x000107c61170(uVar20);
          puVar9 = PTR_PTR_1126b0a08;
          func_0x000107c610f8();
          func_0x000107c48e88();
          uVar20 = *(undefined8 *)(puVar5 + _DAT_112f3af98);
          *(undefined **)(puVar5 + _DAT_112f3af98) = puVar9;
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61170(uVar20);
          func_0x000107c61604((long)plVar18 + _DAT_112f3afe8,puVar9);
          func_0x000107c61170(puVar9);
          func_0x000107c52684(puVar9);
          func_0x000107c5a070(puVar9);
          func_0x000107c5921c(puVar9);
          func_0x000107c5a074(puVar9);
          func_0x000107c61174();
          func_0x000107c4ef3c(0x3fe0000000000000,puVar9);
          func_0x000107c615e8(lVar7);
          func_0x000107c615e8(lVar6);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(plVar18);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar8);
          lVar6 = param_5;
          lVar19 = param_6;
          param_5 = param_4;
          param_6 = param_2;
          param_4 = param_3;
          goto LAB_1030d7950;
        }
        func_0x000107c615e8(lVar7);
        lVar7 = lVar6;
      }
      func_0x000107c615e8(lVar7);
      lVar6 = param_5;
      lVar19 = param_6;
      param_5 = param_4;
      param_6 = param_2;
      param_4 = param_3;
    }
  }
LAB_1030d7950:
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar19);
  return puVar5;
}



/* Entry: 1030d79a8; end: 1030d7a7b;  */

void FUN_1030d79a8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = 0;
  func_0x000107c60714(param_2,0);
  uStack_50 = 0x1030d8020;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11060b410;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c5fb28(param_2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001000d76cc(param_2 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 1030d7a7c; end: 1030d7a83;  */

void FUN_1030d7a7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  uVar5 = 0;
  func_0x000107c60714(lVar3,0);
  uStack_50 = 0x1030d8020;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11060b410;
  uStack_48 = uVar1;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = uStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c5fb28(lVar3,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x0001000d76cc(lVar3 + 0x20,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(lVar3);
  return;
}



/* Entry: 1030d7a84; end: 1030d7b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d7a84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112f3af98);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c42018(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1030d7b04; end: 1030d7ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d7b04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307b3f0);
  func_0x000107c4d06c(uVar1,param_2,1);
  func_0x000107c61180();
  FUN_1030d8aec(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x0001030d86e4(param_2,param_3,uVar1);
  FUN_1030d87e8();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1030d7ba4; end: 1030d7baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d7ba4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307b3f0);
  func_0x000107c4d06c(uVar1,uVar2,1);
  func_0x000107c61180();
  FUN_1030d8aec(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x0001030d86e4(uVar2,uVar3,uVar1);
  FUN_1030d87e8();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1030d7bb0; end: 1030d7c97;  */

/* WARNING: Possible PIC construction at 0x0001030d7c60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d7c64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d7bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_5 + _DAT_112fac928);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(0xd000000000000013,0x800000010f1203c0);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c40b34(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1030d7c98; end: 1030d7cbb;  */

/* WARNING: Possible PIC construction at 0x0001030d7c60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d7c64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d7c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fac928);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(0xd000000000000013,0x800000010f1203c0);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c40b34(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1030d7cbc; end: 1030d7d1b; -[_TtC16CallFeedbackImpl22CallFeedbackEntryPoint init] */

void FUN_1030d7cbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallFeedbackImpl.CallFeedbackEntryPoint",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d7ce8);
  (*pcVar1)();
}



/* Entry: 1030d7d1c; end: 1030d7d73; -[_TtC16CallFeedbackImpl22CallFeedbackEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030d7d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d7d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d7d3c) */
/* WARNING: Removing unreachable block (ram,0x0001030d7d5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d7d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3afb0));
  return;
}



/* Entry: 1030d7d74; end: 1030d7d7f;  */

void FUN_1030d7d74(void)

{
  return;
}



/* Entry: 1030d7d80; end: 1030d7e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d7d80(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112f3afa0) != 0) {
      func_0x000107c41864();
    }
    lVar1 = _DAT_11307b3f8;
    lVar2 = *(long *)(param_1 + _DAT_112f3afb0);
    func_0x000107c61428(lVar2 + _DAT_11307b3f8,auStack_60,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c3ef98();
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1030d7e48; end: 1030d7e9b; -[_TtC16CallFeedbackImpl22CallFeedbackEntryPoint tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x0001030d7e84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d7e88) */

void FUN_1030d7e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1030d7f0c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030d7e9c; end: 1030d7f0b; -[_TtC16CallFeedbackImpl22CallFeedbackEntryPoint tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030d7e9c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + _DAT_112f3afa8);
  if (lVar1 == 0) {
    param_1 = 0xbff0000000000000;
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174(lVar1);
    FUN_1030d80d8();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
  }
  return param_1;
}



/* Entry: 1030d7f0c; end: 1030d7ff7;  */

void FUN_1030d7f0c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  if (param_1 == 2) {
    func_0x000107c614f0();
    uVar3 = 0;
    func_0x000107c60714();
    puVar1 = &UNK_11060b2c8;
    func_0x000107c613fc(&UNK_11060b2c8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcStack_40 = FUN_1030d8018;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11060b3e8;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c5fb28(unaff_x20,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x0001000d76cc(unaff_x20 + 0x20,ppuVar2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(unaff_x20);
  }
  return;
}



/* Entry: 1030d7ff8; end: 1030d8017;  */

void FUN_1030d7ff8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6258);
  return;
}



/* Entry: 1030d8018; end: 1030d8047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d8018(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112f3afa0) != 0) {
      func_0x000107c41864();
    }
    lVar1 = _DAT_11307b3f8;
    lVar3 = *(long *)(lVar2 + _DAT_112f3afb0);
    func_0x000107c61428(lVar3 + _DAT_11307b3f8,auStack_60,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c3ef98();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1030d8048; end: 1030d809b; -[_TtC16CallFeedbackImpl30CallFeedbackTrayViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030d8048(long param_1)

{
  long lVar1;
  
  lVar1 = _DAT_112f3afe8;
  func_0x000107c61614(param_1 + _DAT_112f3afe8,0);
  lVar1 = param_1 + lVar1;
  func_0x000107c61610(lVar1);
  FUN_1030d85a4();
  func_0x000107c61464(param_1,lVar1,0x18,7);
  return 0;
}



/* Entry: 1030d809c; end: 1030d80d7; -[_TtC16CallFeedbackImpl30CallFeedbackTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d809c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000107c5a568();
  FUN_1030d81a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030d80d8; end: 1030d819f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1030d80d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f3afe0);
  lVar2 = lVar3;
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5e07c();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar4 = 1.79769313486232e+308;
    func_0x000107c5b098(lVar3);
    return dVar4 + 50.0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d81a0);
  (*pcVar1)();
}



/* Entry: 1030d81a0; end: 1030d832b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d81a0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f3afe0);
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_11060b450;
    func_0x000107c613fc(&UNK_11060b450,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_1030d8608;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11060b468;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4dc58(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1030d832c; end: 1030d850f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d832c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112f3afe8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = param_1;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d8510);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x000107c5e3f8();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        func_0x000107c61170(lVar4);
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar6 = &UNK_11060b4c8;
        func_0x000107c613fc(&UNK_11060b4c8,0x18,7);
        *(long *)(puVar6 + 0x10) = lVar2;
        puVar7 = &UNK_11060b4f0;
        func_0x000107c613fc(&UNK_11060b4f0,0x20,7);
        *(undefined8 *)(puVar7 + 0x10) = 0x1030d8634;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        pcStack_78 = FUN_1030d8640;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_10006eb60;
        puStack_80 = &UNK_11060b508;
        ppuVar8 = &puStack_98;
        puStack_70 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        puVar9 = puStack_70;
        func_0x000107c61174(lVar2);
        func_0x000107c6157c(puVar7);
        func_0x000107c61574(puVar9);
        func_0x000107c4e5fc(puVar5);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar2);
        func_0x000107c60bd0(ppuVar8);
        puVar9 = puVar7;
        func_0x000107c61544(puVar7,"",0x59,0x2e,0x30,1);
        func_0x000107c61574(puVar7);
        func_0x000107c61574(puVar6);
        if (((ulong)puVar9 & 1) == 0) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d84d8);
        (*pcVar1)();
      }
      func_0x000107c61170(param_1);
      param_1 = lVar2;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1030d8510; end: 1030d856b; -[_TtC16CallFeedbackImpl30CallFeedbackTrayViewController initWithNibName:bundle:] */

void FUN_1030d8510(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallFeedbackImpl.CallFeedbackTrayViewController",0x2f,"init(nibName:bundle:)"
                      ,0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d853c);
  (*pcVar1)();
}



/* Entry: 1030d856c; end: 1030d85a3; -[_TtC16CallFeedbackImpl30CallFeedbackTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d856c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3afe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f3afe8);
  return;
}



/* Entry: 1030d85a4; end: 1030d85c3;  */

void FUN_1030d85a4(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6330);
  return;
}



/* Entry: 1030d85c4; end: 1030d8607; -[_TtC16CallFeedbackImpl30CallFeedbackTrayViewController defaultProjectNameV2] */

void FUN_1030d85c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fe70();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030d8608; end: 1030d863f;  */

void FUN_1030d8608(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  ppuVar2 = &puStack_60;
  pcVar1 = "setupValdiLayoutObserver()";
  func_0x0001000c10c0("setupValdiLayoutObserver()");
  func_0x000107c61180();
  uStack_40 = 0x1030d862c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11060b490;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4e524(pcVar1,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1030d8640; end: 1030d865f;  */

void FUN_1030d8640(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1030d8660; end: 1030d866f;  */

void FUN_1030d8660(long param_1,long param_2)

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



/* Entry: 1030d8670; end: 1030d8757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d8670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3b018) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f3b020) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f3b028) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030d8758; end: 1030d87e7; -[_TtC30CallFeedbackReportPageLauncher30CallFeedbackReportPageLauncher initWithShakeToReportScopeExposer:shakeToReportScopeServices:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d8758(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f3b018) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f3b020) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f3b028) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1030d87e8; end: 1030d89c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d87e8(void)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_130 [112];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong *puStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  puVar1 = (ulong *)0x0;
  func_0x0001045285b8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x198))
            (0x676e696c6c6143,0xe700000000000000);
  lVar2 = 0x112ea51c8;
  func_0x0001000285a8(0x112ea51c8,&UNK_10dab84a0);
  uVar5 = 0x50;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  lVar3 = lVar2;
  func_0x000106ac1634();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar6 = 0;
    uVar5 = 0;
  }
  else {
    lVar6 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  *(undefined8 *)(lVar2 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar2 + 0x28) = 0x800000010f1203c0;
  *(long *)(lVar2 + 0x30) = lVar6;
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uStack_b8 = 1;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_80 = 0xb;
  uStack_88 = 1;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f3b028);
  puStack_98 = puVar1;
  lStack_68 = lVar2;
  func_0x00010452bbe4(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  func_0x000102556fb0(&uStack_c0,auStack_130);
  puVar4 = &uStack_c0;
  func_0x00010452aea4(puVar4);
  func_0x00010452a1d8(uVar5,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f3b018));
  func_0x000107c61170(uVar5);
  func_0x000102556fec(&uStack_c0);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1030d89c4; end: 1030d89eb; -[_TtC30CallFeedbackReportPageLauncher30CallFeedbackReportPageLauncher launch] */

void FUN_1030d89c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030d87e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030d89ec; end: 1030d8a6f; -[_TtC30CallFeedbackReportPageLauncher30CallFeedbackReportPageLauncher shakeReportDidComplete] */

/* WARNING: Possible PIC construction at 0x0001030d8a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d8a44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d8a2c) */
/* WARNING: Removing unreachable block (ram,0x0001030d8a48) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d89ec(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1030d8a70; end: 1030d8aa3;  */

void FUN_1030d8a70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030d8aa4; end: 1030d8aeb; -[_TtC30CallFeedbackReportPageLauncher30CallFeedbackReportPageLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d8aa4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3b018));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3b020));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f3b028));
  return;
}



/* Entry: 1030d8aec; end: 1030d8b0b;  */

void FUN_1030d8aec(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6420);
  return;
}



/* Entry: 1030d8b0c; end: 1030d8b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d8b0c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1030d8f00();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f3b060) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1030d8b78; end: 1030d8be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d8b78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3b060) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030d8be4; end: 1030d8c43; -[_TtC34CallUIScopedFactoryServiceProvider20CallUIScopedServices init] */

void FUN_1030d8be4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUIScopedFactoryServiceProvider.CallUIScopedServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d8c10);
  (*pcVar1)();
}



/* Entry: 1030d8c44; end: 1030d8c53; -[_TtC34CallUIScopedFactoryServiceProvider20CallUIScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d8c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3b060));
  return;
}



/* Entry: 1030d8c54; end: 1030d8cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d8c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11060b780;
  func_0x000107c613fc(&UNK_11060b780,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1030d8f98,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030d8cc0; end: 1030d8d5b;  */

void FUN_1030d8cc0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11060b690;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11060b690;
  return;
}



/* Entry: 1030d8d5c; end: 1030d8d93;  */

void FUN_1030d8d5c(long *param_1)

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



/* Entry: 1030d8d94; end: 1030d8d9b;  */

undefined8 FUN_1030d8d94(void)

{
  return 0x1b;
}



/* Entry: 1030d8d9c; end: 1030d8ecf;  */

void FUN_1030d8d9c(undefined8 *param_1)

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
  puVar1 = &UNK_11060b7a8;
  func_0x000107c613fc(&UNK_11060b7a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1030d8f70;
  func_0x00010058fa64(FUN_1030d8f70,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030d8ed0; end: 1030d8eff;  */

undefined ** FUN_1030d8ed0(void)

{
  return &PTR_DAT_113066550;
}



/* Entry: 1030d8f00; end: 1030d8f1f;  */

void FUN_1030d8f00(void)

{
  func_0x000107c61168(&PTR_PTR_1128b64f0);
  return;
}



/* Entry: 1030d8f20; end: 1030d8f6f;  */

undefined1  [16] FUN_1030d8f20(void)

{
  return ZEXT816(0x11060b6e0);
}



/* Entry: 1030d8f70; end: 1030d8f97;  */

void FUN_1030d8f70(void)

{
  func_0x00010058fc80(0,0);
  return;
}


