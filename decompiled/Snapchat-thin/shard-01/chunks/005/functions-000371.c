/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011bc004; end: 1011bc00f; -[SCReportChatActionMenuPluginEntryPoint chatLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bc004(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64ca0;
  func_0x000107c61428(param_1 + _DAT_112d64ca0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011bc010; end: 1011bc01b; -[SCReportChatActionMenuPluginEntryPoint setChatLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bc010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64ca0;
  func_0x000107c61428(param_1 + _DAT_112d64ca0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011bc01c; end: 1011bc027; -[SCReportChatActionMenuPluginEntryPoint messagingReportingPluginServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bc01c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64ca8;
  func_0x000107c61428(param_1 + _DAT_112d64ca8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011bc028; end: 1011bc06b;  */

void FUN_1011bc028(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011bc06c; end: 1011bc077; -[SCReportChatActionMenuPluginEntryPoint setMessagingReportingPluginServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bc06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64ca8;
  func_0x000107c61428(param_1 + _DAT_112d64ca8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011bc078; end: 1011bc0cb;  */

void FUN_1011bc078(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011bc0cc; end: 1011bc113; -[SCReportChatActionMenuPluginEntryPoint safetyReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bc0cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64cb0;
  func_0x000107c61428(param_1 + _DAT_112d64cb0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011bc114; end: 1011bc177; -[SCReportChatActionMenuPluginEntryPoint setSafetyReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bc114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64cb0;
  func_0x000107c61428(param_1 + _DAT_112d64cb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011bc178; end: 1011bc50f;  */

/* WARNING: Possible PIC construction at 0x0001011bc284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc4dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bc44c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011bc460) */
/* WARNING: Removing unreachable block (ram,0x0001011bc480) */
/* WARNING: Removing unreachable block (ram,0x0001011bc4b0) */
/* WARNING: Removing unreachable block (ram,0x0001011bc4a0) */
/* WARNING: Removing unreachable block (ram,0x0001011bc4e0) */
/* WARNING: Removing unreachable block (ram,0x0001011bc4d0) */
/* WARNING: Removing unreachable block (ram,0x0001011bc4c0) */
/* WARNING: Removing unreachable block (ram,0x0001011bc400) */
/* WARNING: Removing unreachable block (ram,0x0001011bc3f0) */
/* WARNING: Removing unreachable block (ram,0x0001011bc3e0) */
/* WARNING: Removing unreachable block (ram,0x0001011bc3d0) */
/* WARNING: Removing unreachable block (ram,0x0001011bc288) */
/* WARNING: Removing unreachable block (ram,0x0001011bc504) */
/* WARNING: Removing unreachable block (ram,0x0001011bc29c) */
/* WARNING: Removing unreachable block (ram,0x0001011bc508) */
/* WARNING: Removing unreachable block (ram,0x0001011bc2bc) */
/* WARNING: Removing unreachable block (ram,0x0001011bc50c) */
/* WARNING: Removing unreachable block (ram,0x0001011bc2d4) */
/* WARNING: Removing unreachable block (ram,0x0001011bc450) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bc178(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c5da74();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c406cc();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c5b490();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar2 = unaff_x20;
        func_0x000107c3f89c();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar1;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c4ce10();
          func_0x000107c61180();
          if (lVar2 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar1;
          }
          else {
            func_0x000107c515c8();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_1011bbf84(0);
              func_0x000107c613fc();
              lVar3 = *(long *)(lVar1 + _DAT_113083f78);
              func_0x000107c5d984();
              func_0x000107c61180();
              func_0x000107c5faec();
            }
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



/* Entry: 1011bc510; end: 1011bc537; -[SCReportChatActionMenuPluginEntryPoint begin] */

void FUN_1011bc510(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011bc178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011bc538; end: 1011bc57b; -[SCReportChatActionMenuPluginEntryPoint end] */

void FUN_1011bc538(undefined8 param_1)

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



/* Entry: 1011bc57c; end: 1011bc92b;  */

void FUN_1011bc57c(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ef630)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a3f8();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10d4910)) ||
         (func_0x000107c605b8(0xd000000000000014,0x800000010ef2b6f0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5397c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10d48f0)) {
              uVar2 = 0xd000000000000013;
              func_0x000107c605b8(0xd000000000000013,0x800000010ef2b710,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10d48d0)) ||
                   (func_0x000107c605b8(0xd000000000000020,0x800000010ef2b730,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c56674();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef10d48a0)) &&
                     (func_0x000107c605b8(0xd000000000000018,0x800000010ef2b760,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "ReportChatActionMenuPlugin/SCReportChatActionMenuPluginEntryPoint.swift"
                                        ,0x47,2,0x3f,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011bc92c);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c58b54();
                }
                goto LAB_1011bc608;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5337c();
            goto LAB_1011bc608;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c594bc();
      }
    }
  }
LAB_1011bc608:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011bc92c; end: 1011bc9d7; -[SCReportChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011bc92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011bc57c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011bc9d8; end: 1011bcaa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bc9d8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d64c80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64c88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64c90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64c98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64ca0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64ca8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d64cb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d64cb8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011bcaa8; end: 1011bcac7; -[SCReportChatActionMenuPluginEntryPoint init] */

void FUN_1011bcaa8(void)

{
  FUN_1011bc9d8();
  return;
}



/* Entry: 1011bcac8; end: 1011bcafb;  */

void FUN_1011bcac8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011bcafc; end: 1011bcb93; -[SCReportChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bcafc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d64c80);
  func_0x000107c61610(param_1 + _DAT_112d64c88);
  func_0x000107c61610(param_1 + _DAT_112d64c90);
  func_0x000107c61610(param_1 + _DAT_112d64c98);
  func_0x000107c61610(param_1 + _DAT_112d64ca0);
  func_0x000107c61610(param_1 + _DAT_112d64ca8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d64cb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64cb8));
  return;
}



/* Entry: 1011bcb94; end: 1011bcbb3;  */

void FUN_1011bcb94(void)

{
  func_0x000107c61168(&PTR_PTR_1127b63e0);
  return;
}



/* Entry: 1011bcbb4; end: 1011bcc13; -[_TtC24SaveChatActionMenuPlugin24SaveChatActionMenuPlugin init] */

void FUN_1011bcbb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaveChatActionMenuPlugin.SaveChatActionMenuPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011bcbe0);
  (*pcVar1)();
}



/* Entry: 1011bcc14; end: 1011bcc4f; -[_TtC24SaveChatActionMenuPlugin24SaveChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bcc14(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d64ce8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d64cf0));
  return;
}



/* Entry: 1011bcc50; end: 1011bcc57; -[_TtC24SaveChatActionMenuPlugin24SaveChatActionMenuPlugin itemType] */

undefined8 FUN_1011bcc50(void)

{
  return 3;
}



/* Entry: 1011bcc58; end: 1011bcc5f; -[_TtC24SaveChatActionMenuPlugin24SaveChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011bcc58(void)

{
  return 0;
}



/* Entry: 1011bcc60; end: 1011bccd3; -[_TtC24SaveChatActionMenuPlugin24SaveChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011bcc60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011bf79c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011bccd4; end: 1011bd157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011bccd4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  int iStack_f4;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126a5e70;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return puVar4;
  }
  lVar5 = *(long *)(param_3 + _DAT_112d64ce8);
  lVar1 = ((long *)(param_3 + _DAT_112d64ce8))[1];
  lStack_108 = lVar12;
  lStack_100 = lVar3;
  func_0x000107c61434(lVar1);
  lVar3 = lVar1;
  func_0x000107c5fadc(lVar5,lVar1);
  func_0x000107c6142c(lVar1);
  uVar10 = param_1;
  func_0x000107c4a388();
  func_0x000107c61170();
  iStack_f4 = (int)uVar10;
  if (iStack_f4 == 0) {
    func_0x000107080e04();
    func_0x000107c61180();
    pcVar11 = "uPluginEntryPoint.swift";
    if (lVar5 == 0) {
      lVar12 = 0;
      uStack_110 = 0xd00000000000001c;
      goto LAB_1011bce64;
    }
    uStack_110 = 0xd00000000000001c;
  }
  else {
    func_0x000107080dec();
    func_0x000107c61180();
    uStack_110 = 0xd00000000000001e;
    pcVar11 = "chat_action_menu_unsave_button";
    if (lVar5 == 0) {
      lVar12 = 0;
      goto LAB_1011bce64;
    }
  }
  lVar12 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  func_0x000107c5fadc(lVar12,lVar3);
  func_0x000107c6142c(lVar3);
LAB_1011bce64:
  func_0x000107c59e18(puVar4);
  func_0x000107c61170(lVar12);
  uVar10 = param_1;
  FUN_1011bd158(param_1);
  if (param_2 == 0) {
    uVar10 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  lVar12 = lStack_100;
  func_0x000107c59a80(puVar4);
  func_0x000107c61170(uVar10);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar4);
  func_0x000107c61170(puVar6);
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2aad0);
  lVar3 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = 0x6d614e6567616d69;
  *(undefined8 *)(lVar3 + 0x28) = 0xe900000000000065;
  *(undefined8 *)(lVar3 + 0x30) = uStack_110;
  *(ulong *)(lVar3 + 0x38) = (ulong)pcVar11 | 0x8000000000000000;
  lVar5 = lVar3;
  func_0x0001001830b8();
  func_0x000107c61588(lVar3);
  func_0x000100ab5dc4((undefined8 *)(lVar3 + 0x20));
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  uVar10 = uVar7;
  lVar5 = lVar3;
  func_0x000108543d00(uVar7,lVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c5edb4(lVar13,uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar5);
  (**(code **)(lStack_108 + 8))(lVar13,lVar12);
  func_0x000107c55204(puVar4);
  func_0x000107c61170(uVar10);
  iVar2 = iStack_f4;
  uVar10 = 0xd00000000000001e;
  pcVar11 = "chat_action_menu_save_button";
  if (iStack_f4 == 0) {
    uVar10 = 0xd00000000000001c;
    pcVar11 = "Chat_Action_Menu_Save_Button";
  }
  func_0x000107c5fadc(uVar10,(ulong)pcVar11 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar11 | 0x8000000000000000);
  func_0x000107c520f0(puVar4);
  func_0x000107c61170(uVar10);
  puVar6 = &UNK_11038f498;
  func_0x000107c613fc(&UNK_11038f498,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,param_3);
  puVar8 = &UNK_11038f4e8;
  func_0x000107c613fc(&UNK_11038f4e8,0x21,7);
  *(undefined **)(puVar8 + 0x10) = puVar6;
  *(undefined8 *)(puVar8 + 0x18) = param_1;
  puVar8[0x20] = (char)iVar2;
  pcStack_d0 = FUN_1011bf97c;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000f6b44;
  puStack_d8 = &UNK_11038f500;
  ppuVar9 = &puStack_f0;
  puStack_c8 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar6 = puStack_c8;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c56ea0(puVar4);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(param_3);
  return puVar4;
}



/* Entry: 1011bd158; end: 1011bd71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1011bd158(undefined *param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  long unaff_x20;
  ulong uVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  func_0x000107c516d8();
  func_0x000107c61180();
  puVar18 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  puVar3 = puVar18;
  func_0x000107c61434();
  func_0x000100403a6c();
  func_0x000107c6142c(puVar18);
  if (((*(byte *)(param_2 + _DAT_112f14b90) & 1) == 0) && (*(long *)(puVar3 + 0x10) != 0)) {
    puStack_80 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_88 = (undefined *)0x0;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1011bf87c();
    uVar22 = *(undefined8 *)(param_2 + _DAT_112f14b88);
    puVar5 = &UNK_11038f538;
    puStack_90 = puVar4;
    func_0x000107c613fc(&UNK_11038f538,0x30,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    *(long *)(puVar5 + 0x18) = unaff_x20;
    *(undefined ***)(puVar5 + 0x20) = &puStack_80;
    *(undefined ***)(puVar5 + 0x28) = &puStack_90;
    puVar4 = &UNK_11038f560;
    func_0x000107c613fc(&UNK_11038f560,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_1011bf9e0;
    *(undefined **)(puVar4 + 0x18) = puVar5;
    puVar13 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a0 = FUN_1011bfa08;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_1011b6bc0;
    puStack_a8 = &UNK_11038f578;
    ppuVar6 = &puStack_c0;
    puStack_98 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_98;
    func_0x000107c61434(puVar3);
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_11038f5b0;
    func_0x000107c613fc(&UNK_11038f5b0,0x28,7);
    *(undefined ***)(puVar4 + 0x10) = &puStack_88;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined ***)(puVar4 + 0x20) = &puStack_80;
    puVar3 = &UNK_11038f5d8;
    puVar16 = (undefined *)0x20;
    func_0x000107c613fc(&UNK_11038f5d8,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_1011bfa28;
    *(undefined **)(puVar3 + 0x18) = puVar4;
    pcStack_a0 = (code *)0x1011bfa34;
    puStack_c0 = puVar13;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_1011ac670;
    puStack_a8 = &UNK_11038f5f0;
    ppuVar7 = &puStack_c0;
    puStack_98 = puVar3;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_98);
    func_0x000107c4c6d0(uVar22);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    if (puStack_78 == (undefined *)0x0) {
      uVar23 = *(ulong *)(puVar18 + 0x10);
      if (uVar23 == 0) {
        puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar19 = 0;
        puVar3 = *(undefined **)(unaff_x20 + _DAT_112d64ce8);
        puVar13 = (undefined *)((long *)(unaff_x20 + _DAT_112d64ce8))[1];
        puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          plVar21 = (long *)(puVar18 + uVar19 * 0x10 + 0x28);
          uVar20 = uVar19;
          while( true ) {
            if (*(ulong *)(puVar18 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1011bd71c);
              (*pcVar2)();
            }
            puVar12 = (undefined *)plVar21[-1];
            puVar10 = (undefined *)*plVar21;
            if ((puVar3 != puVar12 || puVar13 != puVar10) &&
               (puVar11 = puVar3, puVar16 = puVar13,
               func_0x000107c605b8(puVar3,puVar13,puVar12,puVar10,0), ((ulong)puVar11 & 1) == 0))
            break;
            puVar9 = puVar10;
            func_0x000107c61434();
            func_0x000107080d14();
            func_0x000107c61180();
            puVar17 = puVar16;
            if (puVar9 != (undefined *)0x0) goto LAB_1011bd4a8;
            uVar20 = uVar20 + 1;
            func_0x000107c6142c(puVar10);
            plVar21 = plVar21 + 2;
            if (uVar23 == uVar20) goto LAB_1011bd594;
          }
          func_0x000107c61434(puVar10);
          func_0x000107c5fadc(puVar12,puVar10);
          puVar11 = puStack_88;
          puVar16 = puStack_90;
          func_0x0001011bfa54(0,0x112d4ed88,&PTR_PTR_1126b15c8);
          func_0x000107c615f0(puVar11);
          puVar8 = puVar16;
          func_0x000107c61434(puVar16);
          func_0x000107c5f9dc();
          func_0x000107c6142c(puVar16);
          puVar9 = puVar12;
          puVar17 = puVar11;
          func_0x000108ef37e4(puVar12,puVar11,puVar8);
          func_0x000107c61180();
          func_0x000107c61170(puVar12);
          func_0x000107c615e8(puVar11);
          func_0x000107c61170(puVar8);
LAB_1011bd4a8:
          puVar12 = puVar9;
          func_0x000107c5faec();
          puVar16 = puVar17;
          func_0x000107c61170(puVar9);
          func_0x000107c6142c(puVar10);
          puVar10 = puStack_c8;
          func_0x000107c61558();
          if (((ulong)puVar10 & 1) == 0) {
            puVar16 = (undefined *)(*(long *)(puStack_c8 + 0x10) + 1);
            puStack_c8 = (undefined *)0x0;
            func_0x0001000d182c(0,puVar16,1);
          }
          uVar1 = *(ulong *)(puStack_c8 + 0x10);
          puVar10 = (undefined *)(uVar1 + 1);
          if (*(ulong *)(puStack_c8 + 0x18) >> 1 <= uVar1) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_c8 + 0x18));
            puVar16 = puVar10;
            func_0x0001000d182c(puVar11,puVar10,1,puStack_c8);
            puStack_c8 = puVar11;
          }
          uVar19 = uVar20 + 1;
          *(undefined **)(puStack_c8 + 0x10) = puVar10;
          *(undefined **)(puStack_c8 + uVar1 * 0x10 + 0x20) = puVar12;
          *(undefined **)(puStack_c8 + uVar1 * 0x10 + 0x28) = puVar17;
        } while (uVar23 - 1 != uVar20);
      }
LAB_1011bd594:
      func_0x000107c6142c(puVar18);
      puVar3 = puStack_c8;
      puVar13 = PTR___sSSN_11034da80;
      func_0x000107c5fc48();
      func_0x000107c6142c(puStack_c8);
      puVar18 = puVar3;
      func_0x000108ef5cac();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      if (puVar18 == (undefined *)0x0) {
        puStack_80 = (undefined *)0x0;
        puVar16 = puVar13;
        puVar18 = puStack_78;
        puStack_78 = (undefined *)0x0;
      }
      else {
        puVar3 = puVar18;
        func_0x000107c5faec();
        puVar16 = puVar13;
        func_0x000107c61170(puVar18);
        puVar18 = puStack_78;
        puStack_80 = puVar3;
        puStack_78 = puVar13;
      }
    }
    func_0x000107c6142c(puVar18);
    puVar18 = puStack_78;
    puVar3 = puStack_80;
    if (puStack_78 != (undefined *)0x0) {
      puVar13 = puStack_78;
      func_0x000107c61434();
      func_0x000107080dd4();
      func_0x000107c61180();
      if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011bd720);
        (*pcVar2)();
      }
      puVar12 = puVar13;
      func_0x000107c5faec();
      func_0x000107c61170(puVar13);
      lVar14 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar14 + 0x18) = 2;
      *(undefined8 *)(lVar14 + 0x10) = 1;
      *(undefined **)(lVar14 + 0x38) = PTR___sSSN_11034da80;
      lVar15 = lVar14;
      func_0x00010075bbf0();
      *(long *)(lVar14 + 0x40) = lVar15;
      *(undefined **)(lVar14 + 0x20) = puVar3;
      *(undefined **)(lVar14 + 0x28) = puVar18;
      puVar18 = puVar16;
      func_0x000107c5fb00(puVar12,puVar16,lVar14);
      func_0x000107c6142c(puVar16);
      func_0x000107c6142c(puStack_90);
      func_0x000107c615e8(puStack_88);
      puVar3 = puStack_78;
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c6142c(puVar3);
      goto LAB_1011bd564;
    }
    func_0x000107c6142c(puStack_90);
    func_0x000107c615e8(puStack_88);
    puVar3 = puStack_78;
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar5);
  }
  else {
    func_0x000107c6142c(puVar18);
  }
  func_0x000107c6142c(puVar3);
  puVar12 = (undefined *)0x0;
  puVar18 = (undefined *)0x0;
LAB_1011bd564:
  auVar24._8_8_ = puVar18;
  auVar24._0_8_ = puVar12;
  return auVar24;
}



/* Entry: 1011bd720; end: 1011bd8af;  */

void FUN_1011bd720(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001011bd790(param_2,param_3 & 1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1011bd8b0; end: 1011bda27; -[_TtC24SaveChatActionMenuPlugin24SaveChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011bd8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar5 = param_3;
  func_0x0001000b637c(param_3);
  func_0x0001000285a8(0x112d63e98,&UNK_10d9296d8);
  uVar1 = param_4;
  func_0x0001000b637c(param_4);
  uVar2 = uVar1;
  func_0x0001006c733c();
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_11038f498;
  func_0x000107c613fc(&UNK_11038f498,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  puVar4 = &UNK_11038f4c0;
  func_0x000107c613fc(&UNK_11038f4c0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1011be450;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uVar5 = 0;
  func_0x0001011bfa54(0,0x112d3bed0,&PTR_PTR_1126a5e70);
  pcVar6 = FUN_1011be458;
  func_0x0001000d5158(FUN_1011be458,puVar4,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1011bda28; end: 1011be42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bda28(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,ulong *param_8,undefined8 *param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1;
  func_0x0001000f66f0(param_1,param_2,param_6);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_7 + _DAT_112d64ce8);
    uVar7 = ((ulong *)(param_7 + _DAT_112d64ce8))[1];
    func_0x0001000f66f0(uVar1,uVar7,param_6);
    if ((uVar1 & 1) != 0) {
      func_0x000107080d2c();
      func_0x000107c61180();
      if (uVar1 == 0) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar6 = uVar1;
        func_0x000107c5faec();
        func_0x000107c61170(uVar1);
      }
      uVar1 = param_8[1];
      *param_8 = uVar6;
      param_8[1] = uVar7;
      func_0x000107c6142c(uVar1);
    }
  }
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61434(param_2);
    uVar2 = *param_9;
    func_0x000107c61558(uVar2);
    uVar4 = *param_9;
    *param_9 = 0x8000000000000000;
    FUN_1011bef6c(param_3,param_1,param_2,uVar2);
    func_0x000107c6142c(param_2);
    *param_9 = uVar4;
  }
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_7 + _DAT_112d64ce8);
    uVar4 = ((undefined8 *)(param_7 + _DAT_112d64ce8))[1];
    func_0x000107c61174(param_4);
    func_0x000107c61434(uVar4);
    uVar3 = *param_9;
    func_0x000107c61558(uVar3);
    uVar5 = *param_9;
    *param_9 = 0x8000000000000000;
    FUN_1011bef6c(param_4,uVar2,uVar4,uVar3);
    func_0x000107c6142c(uVar4);
    *param_9 = uVar5;
  }
  return;
}



/* Entry: 1011be430; end: 1011be44f;  */

void FUN_1011be430(void)

{
  func_0x000107c61168(&PTR_PTR_1127b64d0);
  return;
}



/* Entry: 1011be450; end: 1011be457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011be450(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long extraout_x8;
  undefined8 uVar11;
  long unaff_x20;
  char *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  int iStack_f4;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126a5e70;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    return puVar4;
  }
  lVar6 = *(long *)(lVar5 + _DAT_112d64ce8);
  lVar1 = ((long *)(lVar5 + _DAT_112d64ce8))[1];
  lStack_108 = lVar13;
  lStack_100 = lVar3;
  func_0x000107c61434(lVar1);
  lVar3 = lVar1;
  func_0x000107c5fadc(lVar6,lVar1);
  func_0x000107c6142c(lVar1);
  uVar11 = param_1;
  func_0x000107c4a388();
  func_0x000107c61170();
  iStack_f4 = (int)uVar11;
  if (iStack_f4 == 0) {
    func_0x000107080e04();
    func_0x000107c61180();
    pcVar12 = "uPluginEntryPoint.swift";
    if (lVar6 == 0) {
      lVar13 = 0;
      uStack_110 = 0xd00000000000001c;
      goto LAB_1011bce64;
    }
    uStack_110 = 0xd00000000000001c;
  }
  else {
    func_0x000107080dec();
    func_0x000107c61180();
    uStack_110 = 0xd00000000000001e;
    pcVar12 = "chat_action_menu_unsave_button";
    if (lVar6 == 0) {
      lVar13 = 0;
      goto LAB_1011bce64;
    }
  }
  lVar13 = lVar6;
  func_0x000107c5faec();
  func_0x000107c61170(lVar6);
  func_0x000107c5fadc(lVar13,lVar3);
  func_0x000107c6142c(lVar3);
LAB_1011bce64:
  func_0x000107c59e18(puVar4);
  func_0x000107c61170(lVar13);
  uVar11 = param_1;
  FUN_1011bd158(param_1);
  if (param_2 == 0) {
    uVar11 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  lVar13 = lStack_100;
  func_0x000107c59a80(puVar4);
  func_0x000107c61170(uVar11);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar4);
  func_0x000107c61170(puVar7);
  uVar8 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2aad0);
  lVar3 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = 0x6d614e6567616d69;
  *(undefined8 *)(lVar3 + 0x28) = 0xe900000000000065;
  *(undefined8 *)(lVar3 + 0x30) = uStack_110;
  *(ulong *)(lVar3 + 0x38) = (ulong)pcVar12 | 0x8000000000000000;
  lVar6 = lVar3;
  func_0x0001001830b8();
  func_0x000107c61588(lVar3);
  func_0x000100ab5dc4((undefined8 *)(lVar3 + 0x20));
  lVar3 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  uVar11 = uVar8;
  lVar6 = lVar3;
  func_0x000108543d00(uVar8,lVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar3);
  func_0x000107c5edb4(lVar14,uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar6);
  (**(code **)(lStack_108 + 8))(lVar14,lVar13);
  func_0x000107c55204(puVar4);
  func_0x000107c61170(uVar11);
  iVar2 = iStack_f4;
  uVar11 = 0xd00000000000001e;
  pcVar12 = "chat_action_menu_save_button";
  if (iStack_f4 == 0) {
    uVar11 = 0xd00000000000001c;
    pcVar12 = "Chat_Action_Menu_Save_Button";
  }
  func_0x000107c5fadc(uVar11,(ulong)pcVar12 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar12 | 0x8000000000000000);
  func_0x000107c520f0(puVar4);
  func_0x000107c61170(uVar11);
  puVar7 = &UNK_11038f498;
  func_0x000107c613fc(&UNK_11038f498,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,lVar5);
  puVar9 = &UNK_11038f4e8;
  func_0x000107c613fc(&UNK_11038f4e8,0x21,7);
  *(undefined **)(puVar9 + 0x10) = puVar7;
  *(undefined8 *)(puVar9 + 0x18) = param_1;
  puVar9[0x20] = (char)iVar2;
  pcStack_d0 = FUN_1011bf97c;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000f6b44;
  puStack_d8 = &UNK_11038f500;
  ppuVar10 = &puStack_f0;
  puStack_c8 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar7 = puStack_c8;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar7);
  func_0x000107c56ea0(puVar4);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(lVar5);
  return puVar4;
}



/* Entry: 1011be458; end: 1011be62b;  */

void FUN_1011be458(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1011be62c; end: 1011be7ab;  */

undefined8 FUN_1011be62c(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long alStack_a8 [9];
  
  lVar7 = *unaff_x20;
  func_0x000107c6068c(alStack_a8,*(undefined8 *)(lVar7 + 0x28));
  if (param_3 == 0) {
    plVar2 = (long *)0x0;
    func_0x000107c60694();
  }
  else {
    func_0x000107c60694(1);
    plVar2 = alStack_a8;
    func_0x000107c5fb58(plVar2,param_2,param_3);
  }
  func_0x000107c606a8();
  uVar5 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar6 = (ulong)plVar2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar7 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    lVar8 = *(long *)(lVar7 + 0x30);
    do {
      puVar1 = (ulong *)(lVar8 + uVar6 * 0x10);
      uVar4 = puVar1[1];
      if (uVar4 == 0) {
        if (param_3 == 0) goto LAB_1011be728;
      }
      else if ((param_3 != 0) &&
              ((uVar3 = *puVar1, uVar3 == param_2 && uVar4 == param_3 ||
               (func_0x000107c605b8(uVar3,uVar4,param_2,param_3,0), (uVar3 & 1) != 0)))) {
        func_0x000107c6142c(param_3);
LAB_1011be728:
        puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar6 * 0x10);
        uVar5 = puVar1[1];
        uVar6 = *puVar1;
        param_1[1] = puVar1[1];
        *param_1 = uVar6;
        func_0x000107c61434(uVar5);
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(lVar7 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar7 = *unaff_x20;
  func_0x000107c61558(lVar7);
  alStack_a8[0] = *unaff_x20;
  func_0x000107c61434(param_3);
  FUN_1011be7ac(param_2,param_3,uVar6,lVar7);
  *unaff_x20 = alStack_a8[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Entry: 1011be7ac; end: 1011be94b;  */

void FUN_1011be7ac(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auStack_98 [72];
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_4 & 1) == 0) {
      FUN_1011beb90();
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_1011be94c(uVar6 + 1);
    }
    else {
      FUN_1011becec();
    }
    lVar8 = *unaff_x20;
    func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar8 + 0x28));
    if (param_2 == 0) {
      puVar3 = (undefined1 *)0x0;
      func_0x000107c60694();
    }
    else {
      func_0x000107c60694(1);
      puVar3 = auStack_98;
      func_0x000107c5fb58(puVar3,param_1,param_2);
    }
    func_0x000107c606a8();
    uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    param_3 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      do {
        puVar1 = (ulong *)(lVar7 + param_3 * 0x10);
        uVar5 = puVar1[1];
        if (uVar5 == 0) {
          if (param_2 == 0) goto LAB_1011be8d4;
        }
        else if ((param_2 != 0) &&
                ((uVar4 = *puVar1, uVar4 == param_1 && uVar5 == param_2 ||
                 (func_0x000107c605b8(uVar4,uVar5,param_1,param_2,0), (uVar4 & 1) != 0)))) {
LAB_1011be8d4:
          func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
          func_0x000107c60620();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1011be8f0);
          (*pcVar2)();
        }
        param_3 = param_3 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
    }
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + (param_3 >> 6) * 8;
  *(ulong *)(lVar8 + 0x38) = *(ulong *)(lVar8 + 0x38) | 1L << (param_3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + param_3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011be94c);
  (*pcVar2)();
}



/* Entry: 1011be94c; end: 1011beb8f;  */

void FUN_1011be94c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112d64d28;
  func_0x0001000285a8(0x112d64d28,&UNK_10d929e30);
  lVar6 = lVar14;
  func_0x000107c602e0(lVar14,lVar1,0,uVar5);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_1011beb58:
    func_0x000107c61574(lVar14);
    *unaff_x20 = lVar6;
    return;
  }
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(lVar14 + 0x38);
  lVar1 = lVar6 + 0x38;
  lVar9 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1011beb8c);
          (*pcVar4)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar15) goto LAB_1011beb58;
        uVar16 = ((ulong *)(lVar14 + 0x38))[lVar15];
        lVar9 = lVar9 + 1;
      } while (uVar16 == 0);
      uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar9;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x30) + (LZCOUNT(uVar8) | lVar15 << 6) * 0x10);
    uVar5 = *puVar2;
    lVar9 = puVar2[1];
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    if (lVar9 == 0) {
      puVar7 = (undefined1 *)0x0;
      func_0x000107c60694();
    }
    else {
      func_0x000107c60694(1);
      func_0x000107c61434(lVar9);
      puVar7 = auStack_a8;
      func_0x000107c5fb58(puVar7,uVar5,lVar9);
    }
    func_0x000107c606a8();
    uVar13 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = (ulong)puVar7 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar12 >> 6;
    uVar8 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar3 = false;
      uVar8 = 0x3f - uVar13 >> 6;
      do {
        uVar12 = uVar10 + 1;
        if ((uVar12 == uVar8) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1011beb90);
          (*pcVar4)();
        }
        uVar10 = 0;
        if (uVar12 != uVar8) {
          uVar10 = uVar12;
        }
        bVar3 = (bool)(uVar12 == uVar8 | bVar3);
        uVar12 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *puVar2 = uVar5;
    puVar2[1] = lVar9;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar9 = lVar15;
  } while( true );
}



/* Entry: 1011beb90; end: 1011beceb;  */

void FUN_1011beb90(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  func_0x0001000285a8(0x112d64d28,&UNK_10d929e30);
  lVar11 = *unaff_x20;
  lVar5 = lVar11;
  func_0x000107c602dc();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x38;
    uVar7 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar11 || lVar1 + uVar7 * 8 <= lVar5 + 0x38U) {
      func_0x000107c610b8(lVar5 + 0x38U,lVar1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar11 + 0x38);
    if (uVar7 == 0) goto LAB_1011bec6c;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar10);
        uVar6 = puVar2[1];
        uVar13 = *puVar2;
        puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x30) + lVar10);
        puVar3[1] = puVar2[1];
        *puVar3 = uVar13;
        func_0x000107c61434(uVar6);
        if (uVar7 != 0) break;
LAB_1011bec6c:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1011becec);
            (*pcVar4)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1011becc4;
          uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_1011becc4:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 1011becec; end: 1011bef6b;  */

void FUN_1011becec(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112d64d28;
  func_0x0001000285a8(0x112d64d28,&UNK_10d929e30);
  lVar6 = lVar14;
  func_0x000107c602e0(lVar14,lVar1,1,uVar5);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_1011bef38:
    func_0x000107c61574(lVar14);
    *unaff_x20 = lVar6;
    return;
  }
  puVar15 = (ulong *)(lVar14 + 0x38);
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *puVar15;
  lVar1 = lVar6 + 0x38;
  lVar9 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1011bef68);
          (*pcVar4)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar16) {
          uVar17 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
          if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
            *puVar15 = -1L << (uVar17 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar14 + 0x10) = 0;
          goto LAB_1011bef38;
        }
        uVar17 = puVar15[lVar16];
        lVar9 = lVar9 + 1;
      } while (uVar17 == 0);
      uVar8 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar8 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar9;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x30) + (LZCOUNT(uVar8) | lVar16 << 6) * 0x10);
    uVar5 = *puVar2;
    lVar9 = puVar2[1];
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    if (lVar9 == 0) {
      puVar7 = (undefined1 *)0x0;
      func_0x000107c60694();
    }
    else {
      func_0x000107c60694(1);
      puVar7 = auStack_a8;
      func_0x000107c5fb58(puVar7,uVar5,lVar9);
    }
    func_0x000107c606a8();
    uVar13 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = (ulong)puVar7 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar12 >> 6;
    uVar8 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar3 = false;
      uVar8 = 0x3f - uVar13 >> 6;
      do {
        uVar12 = uVar10 + 1;
        if ((uVar12 == uVar8) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1011bef6c);
          (*pcVar4)();
        }
        uVar10 = 0;
        if (uVar12 != uVar8) {
          uVar10 = uVar12;
        }
        bVar3 = (bool)(uVar12 == uVar8 | bVar3);
        uVar12 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *puVar2 = uVar5;
    puVar2[1] = lVar9;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar9 = lVar16;
  } while( true );
}



/* Entry: 1011bef6c; end: 1011bf22b;  */

void FUN_1011bef6c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1011bf044);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1011bf22c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011bf00c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001011bf0bc();
    lVar6 = *unaff_x20;
    goto joined_r0x0001011bf058;
  }
  lVar6 = *unaff_x20;
joined_r0x0001011bf058:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1011bf0bc);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1011bf22c; end: 1011bf64f;  */

void FUN_1011bf22c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112d64d40;
  func_0x0001000285a8(0x112d64d40,&UNK_10da019d0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1011bf494:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1011bf4c4);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1011bf494;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1011bf4c8);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1011bf650; end: 1011bf66b;  */

void FUN_1011bf650(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1011bf66c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1011bf66c; end: 1011bf79b;  */

undefined * FUN_1011bf66c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011bf79c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d64d38;
    func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1011bf79c; end: 1011bf87b;  */

undefined * FUN_1011bf79c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x000104032608();
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x000107d6aa4c();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar1);
    uVar1 = uVar2;
    func_0x0001040328f4();
    func_0x000107c6142c(uVar2);
    if ((uVar1 & 1) != 0) {
      puVar3 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      goto LAB_1011bf830;
    }
  }
  puVar3 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c3f3a8(param_1);
LAB_1011bf830:
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 1011bf87c; end: 1011bf97b;  */

undefined * FUN_1011bf87c(long param_1)

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
    func_0x0001000285a8(0x112d64d40,&UNK_10da019d0);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1011bf978);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1011bf97c);
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



/* Entry: 1011bf97c; end: 1011bf9a3;  */

void FUN_1011bf97c(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x0001011bd790(uVar1,bVar2 & 1);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1011bf9a4; end: 1011bf9df;  */

void FUN_1011bf9a4(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011bf9e0; end: 1011bfa07;  */

void FUN_1011bf9e0(void)

{
  FUN_1011bda28();
  return;
}



/* Entry: 1011bfa08; end: 1011bfa27;  */

void FUN_1011bfa08(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011bfa28; end: 1011bfa33;  */

/* WARNING: Possible PIC construction at 0x0001011bde14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bde28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bde48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bdd54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011bde4c) */
/* WARNING: Removing unreachable block (ram,0x0001011bde84) */
/* WARNING: Removing unreachable block (ram,0x0001011bde58) */
/* WARNING: Removing unreachable block (ram,0x0001011bdea4) */
/* WARNING: Removing unreachable block (ram,0x0001011bde68) */
/* WARNING: Removing unreachable block (ram,0x0001011bdeac) */
/* WARNING: Removing unreachable block (ram,0x0001011bde2c) */
/* WARNING: Removing unreachable block (ram,0x0001011bdd58) */
/* WARNING: Removing unreachable block (ram,0x0001011bde18) */

void FUN_1011bfa28(undefined *param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  
  puVar1 = *(ulong **)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *puVar1;
  *puVar1 = (ulong)param_1;
  func_0x000107c615f0(param_1,puVar1,uVar8,uVar9);
  func_0x000107c615e8(uVar10);
  func_0x000107c4e04c();
  func_0x000107c61180();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    uVar8 = 0x112d64d20;
    func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
    puVar4 = param_1;
    func_0x000107c5fc54(param_1,uVar8);
    func_0x000107c61170(param_1);
  }
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar11 = puVar4;
    }
    func_0x000107c60480();
  }
  if (puVar11 != (undefined *)0x0) {
    FUN_1011bf650(0,(ulong)puVar11 & ((long)puVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1011bded8);
      (*pcVar3)();
    }
    if (((ulong)puVar4 & 0xc000000000000001) == 0) {
      plVar17 = (long *)(puVar4 + 0x20);
      do {
        lVar16 = *plVar17;
        uVar8 = 2;
        lVar7 = lVar16;
        func_0x000107c615f4();
        func_0x000107c5d984();
        func_0x000107c61180();
        if (lVar7 == 0) {
          func_0x000107c615ec(lVar16,2);
          lVar13 = 0;
          uVar8 = 0;
        }
        else {
          lVar13 = lVar7;
          func_0x000107c5faec();
          func_0x000107c615ec(lVar16,2);
          func_0x000107c61170(lVar7);
        }
        uVar10 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar10) {
          FUN_1011bf650(1 < *(ulong *)(puVar2 + 0x18),uVar10 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar10 + 1;
        *(long *)(puVar2 + uVar10 * 0x10 + 0x20) = lVar13;
        *(undefined8 *)(puVar2 + uVar10 * 0x10 + 0x28) = uVar8;
        puVar11 = puVar11 + -1;
        plVar17 = plVar17 + 1;
      } while (puVar11 != (undefined *)0x0);
    }
    else {
      puVar12 = (undefined *)0x0;
      do {
        puVar5 = puVar12;
        puVar15 = puVar4;
        func_0x0001011be488();
        puVar6 = puVar5;
        func_0x000107c615f0();
        func_0x000107c5d984();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          func_0x000107c615ec(puVar5,2);
          puVar14 = (undefined *)0x0;
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar6;
          func_0x000107c5faec();
          func_0x000107c615ec(puVar5,2);
          func_0x000107c61170(puVar6);
        }
        uVar10 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar10) {
          FUN_1011bf650(1 < *(ulong *)(puVar2 + 0x18),uVar10 + 1,1);
        }
        puVar12 = puVar12 + 1;
        *(ulong *)(puVar2 + 0x10) = uVar10 + 1;
        *(undefined **)(puVar2 + uVar10 * 0x10 + 0x20) = puVar14;
        *(undefined **)(puVar2 + uVar10 * 0x10 + 0x28) = puVar15;
      } while (puVar11 != puVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar4);
  return;
}



/* Entry: 1011bfa34; end: 1011bfa93;  */

void FUN_1011bfa34(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011bfa94; end: 1011bfb3b;  */

void FUN_1011bfa94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  uVar2 = uVar1;
  FUN_1011bfb3c();
  lVar3 = lVar4;
  func_0x000107c5fe14(lVar4,uVar1,uVar2);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    lStack_48 = lVar3;
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      func_0x000107c61434(uVar2);
      FUN_1011be62c(auStack_58,uVar1,uVar2);
      func_0x000107c6142c(uStack_50);
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 1011bfb3c; end: 1011bfba3;  */

void FUN_1011bfb3c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112d64d30 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d35ff8;
  func_0x00010002969c(0x112d35ff8,&UNK_10d900cd0);
  puStack_18 = PTR___sSSSHsWP_11034da90;
  puVar2 = PTR___sxSgSHsSHRzlMc_11034f188;
  func_0x000107c61520(PTR___sxSgSHsSHRzlMc_11034f188,uVar1,&puStack_18);
  puRam0000000112d64d30 = puVar2;
  return;
}



/* Entry: 1011bfba4; end: 1011bfbb3;  */

void FUN_1011bfba4(long param_1,long param_2)

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



/* Entry: 1011bfbb4; end: 1011bfc23;  */

undefined8 FUN_1011bfbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1011bfc40(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1011bfc24; end: 1011bfc3f;  */

void FUN_1011bfc24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011bfc40; end: 1011bfd27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bfc40(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  uVar2 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c498a0();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_1011be430();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d64ce8);
  *puVar1 = uVar3;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_112d64cf0) = param_3;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(plVar6);
  return;
}



/* Entry: 1011bfd28; end: 1011bfd47;  */

void FUN_1011bfd28(void)

{
  func_0x000107c61168(&PTR_PTR_112d64d88);
  return;
}



/* Entry: 1011bfd48; end: 1011bfd53; -[SCSaveChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bfd48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64de0;
  func_0x000107c61428(param_1 + _DAT_112d64de0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011bfd54; end: 1011bfd5f; -[SCSaveChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bfd54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64de0;
  func_0x000107c61428(param_1 + _DAT_112d64de0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011bfd60; end: 1011bfd6b; -[SCSaveChatActionMenuPluginEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bfd60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64de8;
  func_0x000107c61428(param_1 + _DAT_112d64de8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011bfd6c; end: 1011bfd77; -[SCSaveChatActionMenuPluginEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bfd6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64de8;
  func_0x000107c61428(param_1 + _DAT_112d64de8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011bfd78; end: 1011bfd83; -[SCSaveChatActionMenuPluginEntryPoint internalConversationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bfd78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64df0;
  func_0x000107c61428(param_1 + _DAT_112d64df0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011bfd84; end: 1011bfdc7;  */

void FUN_1011bfd84(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011bfdc8; end: 1011bfdd3; -[SCSaveChatActionMenuPluginEntryPoint setInternalConversationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011bfdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64df0;
  func_0x000107c61428(param_1 + _DAT_112d64df0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011bfdd4; end: 1011bfe27;  */

void FUN_1011bfdd4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011bfe28; end: 1011bff2b;  */

/* WARNING: Possible PIC construction at 0x0001011bfeb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011bfec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011bfebc) */
/* WARNING: Removing unreachable block (ram,0x0001011bfecc) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1011bfe28(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3d1c4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c498ac();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_1011bfd28(0);
        func_0x000107c613fc();
        FUN_1011bfc40(lVar1,lVar2,unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011bff2c; end: 1011bff53; -[SCSaveChatActionMenuPluginEntryPoint begin] */

void FUN_1011bff2c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011bfe28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011bff54; end: 1011bff97; -[SCSaveChatActionMenuPluginEntryPoint end] */

void FUN_1011bff54(undefined8 param_1)

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



/* Entry: 1011bff98; end: 1011c019b;  */

void FUN_1011bff98(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef1d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10d4750)) &&
           (func_0x000107c605b8(0xd00000000000001c,0x800000010ef2b8b0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SaveChatActionMenuPlugin/SCSaveChatActionMenuPluginEntryPoint.swift",
                              0x43,2,0x2b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c019c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5549c();
        goto LAB_1011c0024;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52228();
  }
LAB_1011c0024:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011c019c; end: 1011c0247; -[SCSaveChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011c019c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011bff98(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011c0248; end: 1011c02cf; -[SCSaveChatActionMenuPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c0248(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d64de0,0);
  func_0x000107c61614(param_1 + _DAT_112d64de8,0);
  func_0x000107c61614(param_1 + _DAT_112d64df0,0);
  *(undefined8 *)(param_1 + _DAT_112d64df8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011c02d0; end: 1011c0303;  */

void FUN_1011c02d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011c0304; end: 1011c035b; -[SCSaveChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c0304(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d64de0);
  func_0x000107c61610(param_1 + _DAT_112d64de8);
  func_0x000107c61610(param_1 + _DAT_112d64df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64df8));
  return;
}



/* Entry: 1011c035c; end: 1011c037b;  */

void FUN_1011c035c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6598);
  return;
}



/* Entry: 1011c037c; end: 1011c03db; -[_TtC36SaveToCameraRollChatActionMenuPlugin36SaveToCameraRollChatActionMenuPlugin init] */

void FUN_1011c037c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaveToCameraRollChatActionMenuPlugin.SaveToCameraRollChatActionMenuPlugin",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c03a8);
  (*pcVar1)();
}



/* Entry: 1011c03dc; end: 1011c0413; -[_TtC36SaveToCameraRollChatActionMenuPlugin36SaveToCameraRollChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011c03f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c03fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c03dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64e28));
  return;
}



/* Entry: 1011c0414; end: 1011c041b; -[_TtC36SaveToCameraRollChatActionMenuPlugin36SaveToCameraRollChatActionMenuPlugin itemType] */

undefined8 FUN_1011c0414(void)

{
  return 5;
}



/* Entry: 1011c041c; end: 1011c0423; -[_TtC36SaveToCameraRollChatActionMenuPlugin36SaveToCameraRollChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011c041c(void)

{
  return 1;
}



/* Entry: 1011c0424; end: 1011c078f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011c0424(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112d64e30,*(undefined8 *)(unaff_x20 + _DAT_112d64e30 + 0x18))
  ;
  uVar2 = param_1;
  FUN_1011c155c();
  if ((uVar2 == 0) && (FUN_1011c1640(), uVar2 = param_1, param_1 == 0)) {
LAB_1011c0724:
    puVar9 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar9);
  }
  else {
    if (uVar2 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      if (uVar12 == 0) {
LAB_1011c071c:
        func_0x000107c6142c(uVar2);
        goto LAB_1011c0724;
      }
LAB_1011c04c0:
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001011c18b4(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c0790);
        (*pcVar1)();
      }
      func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
      uVar13 = 0;
      do {
        if ((uVar2 & 0xc000000000000001) == 0) {
          uVar14 = *(ulong *)(uVar2 + uVar13 * 8 + 0x20);
          func_0x000107c615f0(uVar14);
        }
        else {
          uVar14 = uVar13;
          FUN_1011c1e80(uVar13,uVar2);
        }
        uVar3 = uVar14;
        func_0x000107c431ac();
        func_0x000107c61180();
        uVar4 = uVar3;
        func_0x0001000b637c();
        func_0x000107c615e8(uVar14);
        func_0x000107c61170(uVar3);
        uVar14 = *(ulong *)(puVar9 + 0x10);
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar14) {
          func_0x0001011c18b4(1 < *(ulong *)(puVar9 + 0x18),uVar14 + 1,1);
        }
        uVar13 = uVar13 + 1;
        *(ulong *)(puVar9 + 0x10) = uVar14 + 1;
        *(ulong *)(puVar9 + uVar14 * 8 + 0x20) = uVar4;
      } while (uVar12 != uVar13);
      func_0x000107c6142c(uVar2);
    }
    else {
      uVar12 = uVar2;
      if (-1 < (long)uVar2) {
        uVar12 = uVar2 & 0xffffffffffffff8;
      }
      uVar13 = uVar12;
      func_0x000107c60480();
      if (uVar13 == 0) goto LAB_1011c071c;
      func_0x000107c60480();
      if (uVar12 != 0) goto LAB_1011c04c0;
      func_0x000107c6142c(uVar2);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    puVar10 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    puVar5 = puVar9;
    func_0x000100b658a4(puVar9);
    func_0x000107c6142c(puVar9);
    uVar6 = 1;
    func_0x00010061b458(1);
    func_0x000107c61574(puVar5);
    uVar7 = 0;
    func_0x0001011c0c48(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    pcVar1 = FUN_1011c0b50;
    func_0x0001000bfde0(FUN_1011c0b50,0,uVar7);
    func_0x000107c61574(uVar6);
    puVar9 = &UNK_11038f798;
    func_0x000107c613fc(&UNK_11038f798,0x18,7);
    *(undefined **)(puVar9 + 0x10) = puVar10;
    pcVar11 = *(code **)(*(long *)pcVar1 + 0x60);
    func_0x000107c61174(puVar10);
    pcVar8 = FUN_1011c0c88;
    puVar5 = puVar9;
    (*pcVar11)(FUN_1011c0c88);
    func_0x000107c61574(pcVar1);
    func_0x000107c61574(puVar9);
    pcVar1 = pcVar8;
    func_0x000107c614f0(pcVar8);
    (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d64e28),pcVar1,puVar5);
    func_0x000107c615e8(pcVar8);
    puVar9 = puVar10;
    func_0x000107c43bf4(puVar10);
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  return puVar9;
}



/* Entry: 1011c0790; end: 1011c07eb; -[_TtC36SaveToCameraRollChatActionMenuPlugin36SaveToCameraRollChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011c0790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011c0424(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011c07ec; end: 1011c0987;  */

void FUN_1011c07ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar6 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = param_3;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000107080dbc();
  func_0x000107c61180();
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11038f720;
  func_0x000107c613fc(&UNK_11038f720,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  puVar3 = &UNK_11038f748;
  func_0x000107c613fc(&UNK_11038f748,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  uStack_50 = 0x1011c0be0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038f760;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 1011c0988; end: 1011c0a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c0988(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = auStack_e0;
  func_0x000107c61428(param_1 + 0x10,auStack_b8,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1011c0c04(param_1 + _DAT_112d64e30,auStack_e0);
    func_0x000107c61170(param_1);
    func_0x0001000a8868(auStack_e0,uStack_c8);
    uStack_58 = puVar1[9];
    uStack_60 = puVar1[8];
    uStack_48 = puVar1[0xb];
    uStack_50 = puVar1[10];
    uStack_38 = puVar1[0xd];
    uStack_40 = puVar1[0xc];
    uStack_30 = puVar1[0xe];
    uStack_98 = puVar1[1];
    uStack_a0 = *puVar1;
    uStack_88 = puVar1[3];
    uStack_90 = puVar1[2];
    uStack_78 = puVar1[5];
    uStack_80 = puVar1[4];
    uStack_68 = puVar1[7];
    uStack_70 = puVar1[6];
    FUN_1011c1180(param_2);
    func_0x0001000834e4(auStack_e0);
  }
  return;
}



/* Entry: 1011c0a38; end: 1011c0b4f; -[_TtC36SaveToCameraRollChatActionMenuPlugin36SaveToCameraRollChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011c0a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x0001000b637c(param_3);
  puVar1 = &UNK_11038f6f8;
  func_0x000107c613fc(&UNK_11038f6f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  uVar2 = 0;
  func_0x0001011c0c48(0,0x112d3bed0,&PTR_PTR_1126a5e70);
  func_0x000107c61174(param_1);
  pcVar3 = FUN_1011c0bd8;
  func_0x0001000bfde0(FUN_1011c0bd8,puVar1,uVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar1);
  uVar4 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(pcVar3);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 1011c0b50; end: 1011c0bb7;  */

void FUN_1011c0b50(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  FUN_1010345b0();
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 1011c0bb8; end: 1011c0bd7;  */

void FUN_1011c0bb8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6668);
  return;
}



/* Entry: 1011c0bd8; end: 1011c0c03;  */

void FUN_1011c0bd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_70;
  uVar7 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = uVar6;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000107080dbc();
  func_0x000107c61180();
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11038f720;
  func_0x000107c613fc(&UNK_11038f720,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar6);
  puVar3 = &UNK_11038f748;
  func_0x000107c613fc(&UNK_11038f748,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  uStack_50 = 0x1011c0be0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038f760;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 1011c0c04; end: 1011c0c87;  */

long FUN_1011c0c04(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1011c0c88; end: 1011c0c97;  */

void FUN_1011c0c88(undefined8 *param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_completeWithValue__1125ae900,*param_1);
  return;
}



/* Entry: 1011c0c98; end: 1011c0d4b;  */

long FUN_1011c0c98(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1011c0d4c; end: 1011c0e47;  */

undefined8 * FUN_1011c0d4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  uVar1 = param_2[4];
  uVar8 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar8;
  uVar2 = param_2[6];
  uVar9 = param_2[7];
  param_1[6] = uVar2;
  param_1[7] = uVar9;
  uVar3 = param_2[8];
  uVar10 = param_2[9];
  param_1[8] = uVar3;
  param_1[9] = uVar10;
  uVar4 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar11;
  uVar13 = param_2[0xc];
  uVar5 = param_2[0xd];
  uVar12 = param_2[0xe];
  param_1[0xc] = uVar13;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar12;
  func_0x000107c61434();
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c615f0(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar12);
  return param_1;
}



/* Entry: 1011c0e48; end: 1011c0fcb;  */

undefined8 * FUN_1011c0e48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1011c0fcc; end: 1011c0ff7;  */

void FUN_1011c0fcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 1011c0ff8; end: 1011c10cb;  */

undefined8 * FUN_1011c0ff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(param_1[5]);
  uVar1 = param_1[6];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_1[7]);
  uVar1 = param_1[8];
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_1[9]);
  uVar1 = param_1[10];
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[0xb]);
  uVar1 = param_1[0xc];
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[0xd]);
  uVar1 = param_1[0xe];
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1011c10cc; end: 1011c117f;  */

int FUN_1011c10cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1011c1180; end: 1011c1557;  */

void FUN_1011c1180(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 *unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_100;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  
  lVar1 = param_1;
  FUN_1011c155c();
  if ((lVar1 != 0) || (lVar1 = param_1, FUN_1011c1640(), lVar1 != 0)) {
    func_0x000107c49e7c();
    lVar2 = param_1;
    func_0x000107c4cde0();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    uVar3 = unaff_x20[0xd];
    func_0x000107c5e14c();
    func_0x000107c61180();
    lVar13 = param_1;
    func_0x000107c4cda8();
    func_0x000107c61180();
    if (lVar13 == 0) {
      lStack_100 = 0;
    }
    else {
      lStack_100 = lVar13;
      func_0x000107c404fc();
      func_0x000107c61170(lVar13);
    }
    lVar13 = param_1;
    func_0x000107c4ca8c();
    func_0x000107c61180();
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      uVar4 = 0;
      func_0x0001011c242c(0,0x112d64e68,&PTR_PTR_1126b4628);
      lVar5 = lVar13;
      func_0x000107c5fc54(lVar13,uVar4);
      func_0x000107c61170(lVar13);
      func_0x0001011c23cc();
      lVar13 = lVar5;
      func_0x000107c61434();
      FUN_1011c220c();
      func_0x000107c61430(lVar5,2);
      func_0x0001011c2400();
    }
    uVar4 = 0x112d64e60;
    func_0x0001000285a8(0x112d64e60,&UNK_10d929f68);
    lVar5 = lVar1;
    func_0x000107c5fc48(lVar1,uVar4);
    func_0x000107c6142c(lVar1);
    lVar1 = param_1;
    func_0x000107c51f08();
    func_0x000107c61180();
    lVar6 = lVar1;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    uVar4 = *unaff_x20;
    uVar10 = unaff_x20[1];
    func_0x000107c5fadc(uVar4,uVar10);
    lVar1 = param_1;
    func_0x000107c40674();
    func_0x000107c61180();
    uVar14 = uVar10;
    if (lVar1 == 0) {
      func_0x000107c5faec();
      uVar14 = uVar10;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar10);
    }
    lVar7 = param_1;
    func_0x000107c40258();
    func_0x000107c61180();
    uVar10 = uVar14;
    if (lVar7 == 0) {
      func_0x000107c5faec();
      uVar10 = uVar14;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar14);
    }
    lVar8 = param_1;
    func_0x000107c4cde0();
    func_0x000107c61180();
    if (lVar8 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar10);
    }
    lVar9 = param_1;
    func_0x000107c5d0f0();
    if (lVar13 == 0) {
      lVar12 = 0;
    }
    else {
      uVar10 = 0;
      func_0x0001011c242c(0,0x112d64e68,&PTR_PTR_1126b4628);
      lVar12 = lVar13;
      func_0x000107c5fc48(lVar13,uVar10);
      func_0x000107c6142c(lVar13);
    }
    lVar13 = param_1;
    func_0x000107c4ca5c();
    uVar19 = unaff_x20[4];
    uVar18 = unaff_x20[3];
    uVar16 = unaff_x20[6];
    uVar14 = unaff_x20[5];
    uVar17 = unaff_x20[8];
    uVar15 = unaff_x20[7];
    uVar10 = unaff_x20[0xc];
    func_0x000107c4a71c();
    pcStack_c0 = FUN_1011c1558;
    uStack_b8 = 0;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_1000f6b44;
    puStack_c8 = &UNK_11038f878;
    ppuVar11 = &puStack_e0;
    func_0x000107c60bc4();
    func_0x000107c61174();
    func_0x00010506f47c(lVar5,lVar6,uVar4,lVar1,lVar7,lVar8,lVar2,lVar9,lVar12,lVar13,lStack_100,0,
                        uVar18,uVar19,uVar14,uVar16,uVar15,uVar17,uVar10,(char)param_1);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1011c1558; end: 1011c155b;  */

void FUN_1011c1558(void)

{
  return;
}



/* Entry: 1011c155c; end: 1011c163f;  */

void FUN_1011c155c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ea08();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puStack_38 = PTR_DAT_11269dc28;
      lVar1 = lVar2;
      func_0x000107c61494(lVar2,1,&puStack_38);
      if (lVar1 != 0) {
        func_0x000107c51660();
        func_0x000107c61180();
        if (lVar1 != 0) {
          uVar3 = 0x112d64e60;
          func_0x0001000285a8(0x112d64e60,&UNK_10d929f68);
          func_0x000107c5fc54(lVar1,uVar3);
          func_0x000107c61170(lVar1);
          func_0x000107c615e8(lVar2);
          return;
        }
      }
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1011c1640; end: 1011c187b;  */

undefined * FUN_1011c1640(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar14 = param_1;
  func_0x000107c4a71c();
  if ((uVar14 & 1) == 0) {
    iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x48);
    func_0x000107c49b44();
    if (iVar3 == 0) {
      return (undefined *)0x0;
    }
  }
  func_0x000107c4ca8c();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar4 = 0;
    func_0x0001011c242c(0,0x112d64e68,&PTR_PTR_1126b4628);
    uVar14 = param_1;
    func_0x000107c5fc54(param_1,uVar4);
    func_0x000107c61170(param_1);
    lVar5 = *(long *)(unaff_x20 + 0x50);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      uVar6 = uVar14;
      FUN_1011c220c();
      func_0x000107c6142c(uVar14);
      uVar14 = uVar6 & 0xffffffffffffff8;
      if (uVar6 >> 0x3e == 0) {
        uVar12 = *(ulong *)(uVar14 + 0x10);
      }
      else {
        uVar12 = uVar14;
        if (0x7fffffffffffffff < uVar6) {
          uVar12 = uVar6;
        }
        func_0x000107c60480();
      }
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar13 = 0;
      while( true ) {
        if (uVar12 == uVar13) {
          func_0x000107c615e8(lVar5);
          func_0x000107c6142c(uVar6);
          return puVar11;
        }
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c1868);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(uVar6 + uVar13 * 8 + 0x20);
          func_0x000107c61174(uVar7);
        }
        else {
          uVar7 = uVar13;
          FUN_1011c2024(uVar13,uVar6,&PTR_PTR_1126b4628,0x112d64e68);
        }
        uVar1 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) break;
        lVar8 = lVar5;
        func_0x000107c516d0();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        uVar13 = uVar13 + 1;
        if (lVar8 != 0) {
          puVar10 = puVar11;
          func_0x000107c61550();
          if ((((int)puVar10 == 0) || ((long)puVar11 < 0)) ||
             (puVar10 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar11 >> 0x3e == 0) {
              puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar11) {
                puVar9 = puVar11;
              }
              func_0x000107c60480(puVar9);
            }
            puVar10 = (undefined *)0x0;
            FUN_1011c1c34(0,puVar9 + 1,1,puVar11);
          }
          uVar7 = (ulong)puVar10 & 0xffffffffffffff8;
          uVar13 = *(ulong *)(uVar7 + 0x10);
          puVar11 = puVar10;
          if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar13) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
            FUN_1011c1c34(puVar11,uVar13 + 1,1,puVar10);
            uVar7 = (ulong)puVar11 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar7 + 0x10) = uVar13 + 1;
          *(long *)(uVar7 + uVar13 * 8 + 0x20) = lVar8;
          uVar13 = uVar1;
        }
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c1864);
      (*pcVar2)();
    }
    func_0x000107c6142c(uVar14);
  }
  return (undefined *)0x0;
}



/* Entry: 1011c187c; end: 1011c1897;  */

void FUN_1011c187c(long param_1,long param_2)

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



/* Entry: 1011c1898; end: 1011c18cf;  */

void FUN_1011c1898(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1011c18d0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1011c18d0; end: 1011c1b33;  */

undefined * FUN_1011c18d0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011c1a04);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1011c1bb4();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x0001011c242c(0,0x112d64e68,&PTR_PTR_1126b4628);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1011c1b34; end: 1011c1bb3;  */

undefined * FUN_1011c1b34(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1011c1c20();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}


