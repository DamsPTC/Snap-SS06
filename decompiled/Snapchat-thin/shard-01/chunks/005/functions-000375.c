/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011cbe98; end: 1011cc173;  */

void FUN_1011cbe98(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10d3e20)) ||
           (func_0x000107c605b8(0xd000000000000020,0x800000010ef2c1e0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c536c0();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10d3df0)) ||
             (func_0x000107c605b8(0xd00000000000001c,0x800000010ef2c210,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c569a4();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ef610)) &&
               (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "GroupJoinPermissionScopeEntryPoint/SCGroupJoinPermissionScopeEntryPoint.swift"
                                  ,0x4d,2,0x38,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cc174);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a2fc();
          }
        }
        goto LAB_1011cbf24;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_1011cbf24:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011cc174; end: 1011cc21f; -[SCGroupJoinPermissionScopeEntryPoint setValue:forIvarName:] */

void FUN_1011cc174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011cbe98(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011cc220; end: 1011cc2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cc220(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d656b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d656b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d656c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d656c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d656d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d656d8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011cc2d0; end: 1011cc2ef; -[SCGroupJoinPermissionScopeEntryPoint init] */

void FUN_1011cc2d0(void)

{
  FUN_1011cc220();
  return;
}



/* Entry: 1011cc2f0; end: 1011cc323;  */

void FUN_1011cc2f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011cc324; end: 1011cc39b; -[SCGroupJoinPermissionScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cc324(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d656b0);
  func_0x000107c61610(param_1 + _DAT_112d656b8);
  func_0x000107c61610(param_1 + _DAT_112d656c0);
  func_0x000107c61610(param_1 + _DAT_112d656c8);
  func_0x000107c61610(param_1 + _DAT_112d656d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d656d8));
  return;
}



/* Entry: 1011cc39c; end: 1011cc3bb;  */

void FUN_1011cc39c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7358);
  return;
}



/* Entry: 1011cc3bc; end: 1011cc41f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cc3bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d65708) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d65710) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011cc420; end: 1011cc597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cc420(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112f484f0;
  lVar5 = *(long *)(unaff_x20 + _DAT_112d65708);
  lVar3 = *(long *)(lVar5 + _DAT_112f484e8);
  if (lVar3 != 0) {
    func_0x000107c61428(lVar5 + _DAT_112f484f0,auStack_58,0,0);
    lVar1 = lVar5 + lVar1;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d65710);
      func_0x000107c61174(lVar3);
      func_0x000107c5dbd4();
      func_0x000107c61180();
      lVar2 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar2 != 0) {
        lVar4 = lVar2;
        func_0x000107c509b4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        if (lVar4 != 0) {
          FUN_1011cd798(0);
          func_0x000107c610f8();
          func_0x000107c61174(lVar3);
          func_0x000107c615f0(lVar1);
          func_0x000107c615f0(lVar4);
          lVar2 = lVar3;
          FUN_1011ccc4c(lVar3,lVar1,lVar4);
          func_0x000107c3e2c0(*(undefined8 *)(lVar5 + _DAT_112f484e0));
          func_0x000107c61170(lVar3);
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(lVar2);
          return;
        }
      }
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1011cc598; end: 1011cc5f7; -[_TtC32SCChatCommandMenuScopeEntryPoint30ChatCommandMenuScopeEntryPoint init] */

void FUN_1011cc598(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatCommandMenuScopeEntryPoint.ChatCommandMenuScopeEntryPoint",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cc5c4);
  (*pcVar1)();
}



/* Entry: 1011cc5f8; end: 1011cc64f; -[_TtC32SCChatCommandMenuScopeEntryPoint30ChatCommandMenuScopeEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011cc614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011cc618) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cc5f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65708));
  return;
}



/* Entry: 1011cc650; end: 1011cc657;  */

undefined8 FUN_1011cc650(void)

{
  return 0;
}



/* Entry: 1011cc658; end: 1011cc677;  */

void FUN_1011cc658(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7438);
  return;
}



/* Entry: 1011cc678; end: 1011cc683; -[SCChatCommandMenuScopeEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cc678(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65740;
  func_0x000107c61428(param_1 + _DAT_112d65740,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011cc684; end: 1011cc68f; -[SCChatCommandMenuScopeEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cc684(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65740;
  func_0x000107c61428(param_1 + _DAT_112d65740,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011cc690; end: 1011cc69b; -[SCChatCommandMenuScopeEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cc690(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65748;
  func_0x000107c61428(param_1 + _DAT_112d65748,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011cc69c; end: 1011cc6df;  */

void FUN_1011cc69c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011cc6e0; end: 1011cc6eb; -[SCChatCommandMenuScopeEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cc6e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65748;
  func_0x000107c61428(param_1 + _DAT_112d65748,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011cc6ec; end: 1011cc73f;  */

void FUN_1011cc6ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011cc740; end: 1011cc843;  */

/* WARNING: Possible PIC construction at 0x0001011cc7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cc80c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011cc7f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cc740(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c40014();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1011cc658();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(long *)(lVar4 + _DAT_112d65708) = lVar2;
    *(long *)(lVar4 + _DAT_112d65710) = unaff_x20;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61174(lVar2);
    func_0x000107c61174(unaff_x20);
    func_0x000107c61154(&lStack_50,puVar1);
    FUN_1011cc420();
    lVar2 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011cc844; end: 1011cc86b; -[SCChatCommandMenuScopeEntryPoint begin] */

void FUN_1011cc844(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011cc740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011cc86c; end: 1011cc8af; -[SCChatCommandMenuScopeEntryPoint end] */

void FUN_1011cc86c(undefined8 param_1)

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



/* Entry: 1011cc8b0; end: 1011cca47;  */

void FUN_1011cc8b0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCChatCommandMenuScopeEntryPoint/SCChatCommandMenuScopeEntryPoint.swift"
                            ,0x47,2,0x29,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cca48);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011cca48; end: 1011ccaf3; -[SCChatCommandMenuScopeEntryPoint setValue:forIvarName:] */

void FUN_1011cca48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011cc8b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011ccaf4; end: 1011ccb67; -[SCChatCommandMenuScopeEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ccaf4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d65740,0);
  func_0x000107c61614(param_1 + _DAT_112d65748,0);
  *(undefined8 *)(param_1 + _DAT_112d65750) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011ccb68; end: 1011ccb9b;  */

void FUN_1011ccb68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011ccb9c; end: 1011ccbe3; -[SCChatCommandMenuScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ccb9c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d65740);
  func_0x000107c61610(param_1 + _DAT_112d65748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65750));
  return;
}



/* Entry: 1011ccbe4; end: 1011ccc03;  */

void FUN_1011ccbe4(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7500);
  return;
}



/* Entry: 1011ccc04; end: 1011ccc4b;  */

void FUN_1011ccc04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_1011ccc4c(param_1,param_2,param_3);
  return;
}



/* Entry: 1011ccc4c; end: 1011cd0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1011ccc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar2 = &stack0xffffffffffffff50;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d65780) = 0;
  lVar1 = _DAT_112d65788;
  func_0x000107c61614(unaff_x20 + _DAT_112d65788,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d65790) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d65798) = param_1;
  func_0x000107c61604(unaff_x20 + lVar1,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112d657a0) = param_3;
  puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&stack0xffffffffffffff50,puVar6,0,0);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126a6530;
  func_0x000107c610f8(PTR_PTR_1126a6530);
  func_0x000107c453e4();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  uVar9 = *(undefined8 *)(puVar2 + _DAT_112d65798);
  pcStack_80 = FUN_1011cd5b0;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1011cd5f0;
  puStack_88 = &UNK_1103904e0;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_78);
  func_0x000107c4c280(uVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar8 = uVar9;
  func_0x000107c2bd00(uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c5a374(puVar3);
  func_0x000107c61170(uVar8);
  puVar6 = &UNK_110390518;
  puVar5 = puVar6;
  func_0x000107c613fc(&UNK_110390518,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar2);
  pcStack_80 = FUN_1011cd7d4;
  puStack_a0 = puVar7;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x1011cd208;
  puStack_88 = &UNK_110390530;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_78);
  func_0x000107c56c7c(puVar3);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar6;
  func_0x000107c613fc(&UNK_110390518,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar2);
  pcStack_80 = FUN_1011cdad0;
  puStack_a0 = puVar7;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_110390558;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_78);
  func_0x000107c56c80(puVar3);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar6;
  func_0x000107c613fc(&UNK_110390518,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar2);
  pcStack_80 = FUN_1011cdb40;
  puStack_a0 = puVar7;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_110390580;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_78);
  func_0x000107c56c88(puVar3);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar6;
  func_0x000107c613fc(&UNK_110390518,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar2);
  pcStack_80 = (code *)0x1011cdc5c;
  puStack_a0 = puVar7;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1103905a8;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56c84(puVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c613fc(&UNK_110390518,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,puVar2);
  pcStack_80 = FUN_1011cdd74;
  puStack_a0 = puVar7;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1011cd280;
  puStack_88 = &UNK_1103905d0;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56cac(puVar3);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126a6538;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61180();
  func_0x000107c550d8();
  puVar6 = puVar5;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar7 = puVar6;
  func_0x000107c40290(0);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c521e8(puVar7);
  func_0x000107c61170(puVar3);
  uVar8 = *(undefined8 *)(puVar2 + _DAT_112d65780);
  *(undefined **)(puVar2 + _DAT_112d65780) = puVar5;
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(puVar2 + _DAT_112d65790);
  *(undefined **)(puVar2 + _DAT_112d65790) = puVar7;
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar8);
  return puVar2;
}



/* Entry: 1011cd0f8; end: 1011cd153; -[SCChatCommandMenuViewController initWithTextInputObservable:chatCommandMenuDelegate:composerRuntime:] */

void FUN_1011cd0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  FUN_1011ccc4c(param_3,param_4,param_5);
  return;
}



/* Entry: 1011cd154; end: 1011cd177;  */

undefined8 FUN_1011cd154(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011cd178; end: 1011cd27f; -[SCChatCommandMenuViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011cd178(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112d65780;
  *(undefined8 *)(param_1 + _DAT_112d65780) = 0;
  lVar2 = _DAT_112d65788;
  func_0x000107c61614(param_1 + _DAT_112d65788,0);
  lVar3 = _DAT_112d65790;
  *(undefined8 *)(param_1 + _DAT_112d65790) = 0;
  func_0x000107c61170(*(undefined8 *)(param_1 + lVar1));
  FUN_1011cd154(param_1 + lVar2);
  func_0x000107c61170(*(undefined8 *)(param_1 + lVar3));
  func_0x000107c61464(param_1,lVar4,0x30,7);
  return 0;
}



/* Entry: 1011cd280; end: 1011cd2eb;  */

void FUN_1011cd280(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_1011ce728(0,0x112d657d0,&PTR_PTR_1126a6540);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1011cd2ec; end: 1011cd5af;  */

undefined * FUN_1011cd2ec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined1 auStack_c0 [80];
  
  puVar9 = auStack_c0;
  if (param_1 == 0) {
    lVar10 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar10 + 0x18) = 2;
    *(undefined8 *)(lVar10 + 0x10) = 1;
    uVar1 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar10 + 0x20) = uVar1;
    puVar3 = PTR___sSSN_11034da80;
    *(undefined **)(lVar10 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar10 + 0x28) = puVar9;
    *(undefined8 *)(lVar10 + 0x30) = 0xd00000000000001b;
    *(undefined8 *)(lVar10 + 0x38) = 0x800000010ef2c350;
    lVar11 = lVar10;
    func_0x000100214a84(lVar10);
    func_0x000107c61588(lVar10);
    FUN_100f15a0c((undefined8 *)(lVar10 + 0x20));
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar1 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010d92a4f0);
    lVar10 = lVar11;
    func_0x000107c5f9dc(lVar11,puVar3,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar11);
    func_0x000107c466bc(puVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar10);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c61174(puVar2);
    puVar4 = puVar2;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar2);
    func_0x000107c42d78(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
  }
  else {
    func_0x000107c61174();
    lVar10 = param_1;
    func_0x000107c5d6f4();
    func_0x000107c61180();
    if (lVar10 == 0) {
      lVar11 = 0;
      lVar10 = -0x2000000000000000;
      lVar8 = param_2;
    }
    else {
      lVar11 = lVar10;
      func_0x000107c5faec();
      lVar8 = param_2;
      func_0x000107c61170(lVar10);
      lVar10 = param_2;
    }
    lVar5 = param_1;
    func_0x000107c3f7d8(param_1);
    func_0x000107c3f7d8(param_1);
    lVar6 = param_1;
    func_0x000107c3d970();
    func_0x000107c61180();
    if (lVar6 == 0) {
      dVar12 = 0.0;
    }
    else {
      lVar7 = lVar6;
      func_0x000107c4adac();
      func_0x000107c61170(lVar6);
      dVar12 = (double)lVar7;
    }
    puVar2 = PTR_PTR_1126a6550;
    func_0x000107c610f8(PTR_PTR_1126a6550);
    func_0x000107c5fadc(lVar11,lVar10);
    func_0x000107c6142c(lVar10);
    func_0x000107c48ca4((double)lVar5,(double)lVar8,dVar12,puVar2);
    func_0x000107c61170(lVar11);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c5c3c8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar2);
  }
  return puVar3;
}



/* Entry: 1011cd5b0; end: 1011cd5ef;  */

void FUN_1011cd5b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1011cd2ec();
  uVar1 = 0x112d657e8;
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 1011cd5f0; end: 1011cd673;  */

void FUN_1011cd5f0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1011cd674; end: 1011cd683; -[SCChatCommandMenuViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cd674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112d65780));
  return;
}



/* Entry: 1011cd684; end: 1011cd6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cd684(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_112d65780) != 0) {
    func_0x000107c550d8(*(long *)(param_1 + _DAT_112d65780),param_2,1);
  }
  if (*(long *)(param_1 + _DAT_112d65790) != 0) {
    func_0x000107c5378c(0);
  }
  param_1 = param_1 + _DAT_112d65788;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c41c0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1011cd6fc; end: 1011cd72f;  */

void FUN_1011cd6fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011cd730; end: 1011cd797; -[SCChatCommandMenuViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011cd74c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cd76c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011cd750) */
/* WARNING: Removing unreachable block (ram,0x0001011cd770) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cd730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65780));
  return;
}



/* Entry: 1011cd798; end: 1011cd7b7;  */

void FUN_1011cd798(void)

{
  func_0x000107c61168(&PTR_PTR_1127b75c8);
  return;
}



/* Entry: 1011cd7b8; end: 1011cd7d3;  */

void FUN_1011cd7b8(long param_1,long param_2)

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



/* Entry: 1011cd7d4; end: 1011cdacf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cd7d4(double param_1,undefined *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  double dVar12;
  double dVar13;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar8 = auStack_a8;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c614f0();
  puVar4 = PTR_PTR_1130bc520;
  func_0x000107c5faec();
  puVar5 = param_2;
  puVar9 = puVar8;
  func_0x000107c5faec();
  puVar10 = puVar8;
  if (puVar4 == puVar5 && puVar8 == puVar9) {
LAB_1011cd894:
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar10);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar8);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR_PTR_1130bc528;
      func_0x000107c5faec();
      puVar9 = puVar10;
      func_0x000107c5faec();
      if (puVar4 == param_2 && puVar10 == puVar9) goto LAB_1011cd894;
      func_0x000107c605b8(puVar4,puVar10,param_2,puVar9,0);
      func_0x000107c6142c(puVar9);
      func_0x000107c6142c(puVar10);
      if (((ulong)puVar4 & 1) == 0) goto LAB_1011cda20;
    }
  }
  func_0x000107c5ba38(param_3);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cdabc);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cdac0);
    (*pcVar1)();
  }
  dVar12 = 9.223372036854776e+18;
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cdac4);
    (*pcVar1)();
  }
  func_0x000107c427dc(param_3);
  dVar13 = dVar12;
  func_0x000107c5ba38(param_3);
  dVar12 = dVar12 - dVar13;
  if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cdac8);
    (*pcVar1)();
  }
  if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cdacc);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cdad0);
    (*pcVar1)();
  }
  lVar6 = lVar2 + _DAT_112d65788;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c41cf8();
    func_0x000107c615e8(lVar6);
  }
  uVar11 = 0;
  func_0x000107c60714(lVar3,0);
  puVar4 = &UNK_1103906f8;
  func_0x000107c613fc(&UNK_1103906f8,0x18,7);
  *(long *)(puVar4 + 0x10) = lVar2;
  uStack_70 = 0x1011ce920;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110390710;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  puVar4 = puStack_68;
  func_0x000107c61174(lVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c5fb28(lVar3,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x0001000d76cc(lVar3 + 0x20,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(lVar3);
LAB_1011cda20:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1011cdad0; end: 1011cdb3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cdad0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d65788;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c41b08();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011cdb40; end: 1011cdd73;  */

void FUN_1011cdb40(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar6 = 0;
    lVar3 = lVar2;
    func_0x000107c60714();
    puVar4 = &UNK_110390658;
    func_0x000107c613fc(&UNK_110390658,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(long *)(puVar4 + 0x18) = lVar2;
    pcStack_50 = FUN_1011ce770;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110390670;
    ppuVar5 = &puStack_70;
    puStack_48 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_48;
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c5fb28(lVar3,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x0001000d76cc(lVar3 + 0x20,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(lVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011cdd74; end: 1011ce237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cdd74(double param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long unaff_x20;
  undefined *puVar16;
  double dVar17;
  undefined *puStack_b0;
  undefined auStack_98 [24];
  
  puVar9 = auStack_98;
  func_0x000107c61428(unaff_x20 + 0x10,puVar9,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar16 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar16 = param_2;
    }
    func_0x000107c60480();
  }
  if (puVar16 == (undefined *)0x0) {
    lVar12 = lVar4 + _DAT_112d65788;
    func_0x000107c61618();
    if (lVar12 != 0) {
      func_0x000107c3fa98();
      func_0x000107c615e8(lVar12);
    }
  }
  else {
    puVar10 = (undefined *)0x0;
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce1a8);
            (*pcVar3)();
          }
          puVar5 = *(undefined **)(param_2 + (long)puVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar10;
          puVar9 = param_2;
          FUN_1011ce564();
        }
        puVar1 = puVar10 + 1;
        if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce1a4);
          (*pcVar3)();
        }
        puVar6 = puVar5;
        func_0x000107c5d0f0();
        func_0x000107c61180();
        puVar7 = PTR_PTR_1130bc520;
        func_0x000107c5faec();
        puVar8 = puVar6;
        puVar13 = puVar9;
        func_0x000107c5faec();
        puVar14 = puVar9;
        if (puVar7 == puVar8 && puVar9 == puVar13) break;
        func_0x000107c605b8(puVar7,puVar9,puVar8,puVar13,0);
        func_0x000107c6142c(puVar9);
        func_0x000107c6142c(puVar13);
        puVar9 = puVar14;
        if (((ulong)puVar7 & 1) != 0) goto LAB_1011cdeb4;
        puVar7 = PTR_PTR_1130bc528;
        func_0x000107c5faec();
        puVar8 = puVar6;
        puVar13 = puVar14;
        func_0x000107c5faec();
        if (puVar7 == puVar8 && puVar14 == puVar13) break;
        puVar9 = puVar14;
        func_0x000107c605b8(puVar7,puVar14,puVar8,puVar13,0);
        func_0x000107c61170(puVar6);
        func_0x000107c6142c(puVar14);
        func_0x000107c6142c(puVar13);
        if (((ulong)puVar7 & 1) != 0) goto LAB_1011cdebc;
        func_0x000107c61170(puVar5);
LAB_1011cdfd0:
        puVar10 = puVar10 + 1;
        if (puVar1 == puVar16) goto LAB_1011ce120;
      }
      puVar9 = puVar13;
      func_0x000107c6142c(puVar14);
      func_0x000107c6142c(puVar13);
LAB_1011cdeb4:
      func_0x000107c61170(puVar6);
LAB_1011cdebc:
      puVar6 = puVar5;
      func_0x000107c4f888(puVar5);
      func_0x000107c61180();
      func_0x000107c5ba38();
      func_0x000107c61170(puVar6);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce1ac);
        (*pcVar3)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce1b0);
        (*pcVar3)();
      }
      dVar17 = 9.223372036854776e+18;
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce1b4);
        (*pcVar3)();
      }
      puVar6 = puVar5;
      func_0x000107c4f888(puVar5);
      func_0x000107c61180();
      func_0x000107c427dc();
      param_1 = dVar17;
      func_0x000107c61170(puVar6);
      puVar6 = puVar5;
      func_0x000107c4f888(puVar5);
      func_0x000107c61180();
      func_0x000107c5ba38();
      func_0x000107c61170(puVar6);
      param_1 = dVar17 - param_1;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce1b8);
        (*pcVar3)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce1bc);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce1c0);
        (*pcVar3)();
      }
      puVar6 = PTR_PTR_1126a6548;
      func_0x000107c610f8();
      func_0x000107c48ee8();
      func_0x000107c61170(puVar5);
      if (puVar6 == (undefined *)0x0) goto LAB_1011cdfd0;
      puVar10 = puStack_b0;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_b0 < 0)) ||
         (puVar10 = puStack_b0, ((ulong)puStack_b0 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_b0 >> 0x3e == 0) {
          puVar9 = *(undefined **)(((ulong)puStack_b0 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar9 = (undefined *)((ulong)puStack_b0 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_b0) {
            puVar9 = puStack_b0;
          }
          func_0x000107c60480();
        }
        puVar9 = puVar9 + 1;
        puVar10 = (undefined *)0x0;
        FUN_1011ce238(0,puVar9,1,puStack_b0);
      }
      uVar15 = (ulong)puVar10 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar15 + 0x10);
      puVar5 = (undefined *)(uVar2 + 1);
      puStack_b0 = puVar10;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar2) {
        puStack_b0 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        puVar9 = puVar5;
        FUN_1011ce238(puStack_b0,puVar5,1,puVar10);
        uVar15 = (ulong)puStack_b0 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar15 + 0x10) = puVar5;
      *(undefined **)(uVar15 + uVar2 * 8 + 0x20) = puVar6;
      puVar10 = puVar1;
    } while (puVar1 != puVar16);
LAB_1011ce120:
    lVar12 = lVar4 + _DAT_112d65788;
    func_0x000107c61618();
    if (lVar12 == 0) {
      func_0x000107c6142c(puStack_b0);
    }
    else {
      uVar11 = 0;
      FUN_1011ce728(0,0x112d657d8,&PTR_PTR_1126a6548);
      puVar9 = puStack_b0;
      func_0x000107c5fc48(puStack_b0,uVar11);
      func_0x000107c6142c(puStack_b0);
      func_0x000107c5c228(lVar12);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(puVar9);
    }
  }
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1011ce238; end: 1011ce35f;  */

ulong FUN_1011ce238(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ce360);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1011ce360(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ce35c);
      (*pcVar1)();
    }
    FUN_1011ce3e0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1011ce360; end: 1011ce3df;  */

undefined * FUN_1011ce360(undefined *param_1,undefined *param_2)

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
    FUN_1011ce4f8();
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



/* Entry: 1011ce3e0; end: 1011ce4f7;  */

long FUN_1011ce3e0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce4f4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce4f8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1011ce728(0,0x112d657d8,&PTR_PTR_1126a6548);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1011ce728(0,0x112d657d8,&PTR_PTR_1126a6548);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1011ce4f0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1011ce4f8; end: 1011ce563;  */

void FUN_1011ce4f8(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1011ce728(0,0x112d657d8,&PTR_PTR_1126a6548);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d657e0;
  plVar5 = (long *)&UNK_10d92a530;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1011ce564; end: 1011ce727;  */

ulong FUN_1011ce564(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011ce648);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011ce64c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a6540;
    func_0x000107c61168(PTR_PTR_1126a6540);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a6540;
    func_0x000107c61168(PTR_PTR_1126a6540);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1011ce728(0,0x112d657d0,&PTR_PTR_1126a6540);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011ce728);
  (*pcVar2)();
}



/* Entry: 1011ce728; end: 1011ce767;  */

void FUN_1011ce728(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011ce768; end: 1011ce76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ce768(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar1 + _DAT_112d65780) != 0) {
    func_0x000107c550d8(*(long *)(lVar1 + _DAT_112d65780),param_2,1);
  }
  if (*(long *)(lVar1 + _DAT_112d65790) != 0) {
    func_0x000107c5378c(0);
  }
  lVar1 = lVar1 + _DAT_112d65788;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c41c0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011ce770; end: 1011ce89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ce770(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = lVar1 + _DAT_112d65788;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c5e3ac();
    func_0x000107c615e8(lVar6);
  }
  lVar6 = *(long *)(lVar1 + _DAT_112d65780);
  if (lVar6 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_1103906a8;
    func_0x000107c613fc(&UNK_1103906a8,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(long *)(puVar4 + 0x18) = lVar6;
    *(undefined8 *)(puVar4 + 0x20) = uVar2;
    pcStack_50 = FUN_1011ce89c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1103906c0;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61174(lVar6);
    func_0x000107c61174();
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c5cf68(0x3fd999999999999a,puVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1011ce89c; end: 1011ce8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ce89c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d65790) != 0) {
    func_0x000107c5378c(0x4049000000000000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 1011ce8dc; end: 1011ce927;  */

void FUN_1011ce8dc(long param_1,long param_2)

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



/* Entry: 1011ce928; end: 1011ceb0b;  */

/* WARNING: Possible PIC construction at 0x0001011ce994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cea14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cea70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ceac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011cea74) */
/* WARNING: Removing unreachable block (ram,0x0001011cea18) */
/* WARNING: Removing unreachable block (ram,0x0001011ceb08) */
/* WARNING: Removing unreachable block (ram,0x0001011cea5c) */
/* WARNING: Removing unreachable block (ram,0x0001011ce998) */
/* WARNING: Removing unreachable block (ram,0x0001011ce9ac) */
/* WARNING: Removing unreachable block (ram,0x0001011ce9b4) */
/* WARNING: Removing unreachable block (ram,0x0001011ce9dc) */
/* WARNING: Removing unreachable block (ram,0x0001011ceb04) */
/* WARNING: Removing unreachable block (ram,0x0001011ce9f4) */
/* WARNING: Removing unreachable block (ram,0x0001011ceac4) */
/* WARNING: Removing unreachable block (ram,0x0001011ceacc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ce928(ulong param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if ((param_1 != *(ulong *)(unaff_x20 + _DAT_112d657f8) ||
       param_2 != ((ulong *)(unaff_x20 + _DAT_112d657f8))[1]) &&
     (func_0x000107c605b8(), (param_1 & 1) == 0)) {
    return;
  }
  func_0x000107c5c890();
  func_0x000107c61180();
  if (param_3 != 0) {
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ceb04);
  (*pcVar1)();
}



/* Entry: 1011ceb0c; end: 1011ceb7f; -[_TtC35TextReplyNotificationCategoryPlugin35TextReplyNotificationCategoryPlugin userDidAction:notification:] */

void FUN_1011ceb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1011ce928(param_3,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1011ceb80; end: 1011cebdf; -[_TtC35TextReplyNotificationCategoryPlugin35TextReplyNotificationCategoryPlugin init] */

void FUN_1011ceb80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TextReplyNotificationCategoryPlugin.TextReplyNotificationCategoryPlugin",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cebac);
  (*pcVar1)();
}



/* Entry: 1011cebe0; end: 1011cec2b; -[_TtC35TextReplyNotificationCategoryPlugin35TextReplyNotificationCategoryPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011cec10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011cec14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cebe0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d657f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d657f8 + 8))
  ;
  return;
}



/* Entry: 1011cec2c; end: 1011cf03f;  */

undefined * FUN_1011cec2c(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_80 [48];
  
  lVar2 = 0x112d64d38;
  func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
  puVar11 = auStack_80;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = param_1;
  func_0x000107c3e190();
  func_0x000107c61180();
  if (uVar3 == 0) {
    uVar13 = 0;
    puVar15 = (undefined1 *)0x0;
    puVar12 = puVar11;
  }
  else {
    uVar13 = uVar3;
    func_0x000107c5faec();
    puVar12 = puVar11;
    func_0x000107c61170(uVar3);
    puVar15 = puVar11;
  }
  *(ulong *)(lVar2 + 0x20) = uVar13;
  *(undefined1 **)(lVar2 + 0x28) = puVar15;
  uVar3 = param_1;
  func_0x000107c444e4();
  func_0x000107c61180();
  puVar11 = puVar12;
  if (uVar3 != 0) {
    uVar13 = uVar3;
    func_0x000107c5faec();
    puVar11 = puVar12;
    func_0x000107c61170(uVar3);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar3 = uVar13 & 0xffffffffffff;
    if (((ulong)puVar12 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)puVar12 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      puVar4 = (undefined *)0x0;
      func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar3 = *(ulong *)(puVar4 + 0x10);
      lVar16 = uVar3 + 1;
      puVar14 = puVar10;
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar3) {
        puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        func_0x0001000d182c(puVar4,lVar16,1);
        puVar5 = puVar4;
      }
      goto LAB_1011cedfc;
    }
    func_0x000107c6142c(puVar12);
  }
  uVar3 = param_1;
  func_0x000107c3e190();
  func_0x000107c61180();
  if (uVar3 == 0) {
    func_0x000107c61574(lVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cf034);
    (*pcVar1)();
  }
  uVar13 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  puVar5 = (undefined *)0x0;
  puVar12 = (undefined1 *)0x1;
  func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = *(ulong *)(puVar5 + 0x10);
  puVar15 = (undefined1 *)(uVar3 + 1);
  puVar10 = puVar5;
  if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
    puVar12 = puVar15;
    func_0x0001000d182c(puVar10,puVar15,1,puVar5);
  }
  *(undefined1 **)(puVar10 + 0x10) = puVar15;
  *(ulong *)(puVar10 + uVar3 * 0x10 + 0x20) = uVar13;
  *(undefined1 **)(puVar10 + uVar3 * 0x10 + 0x28) = puVar11;
  func_0x000107c51f08();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61574(lVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cf040);
    (*pcVar1)();
  }
  uVar13 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = (undefined *)0x0;
  func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = *(ulong *)(puVar4 + 0x10);
  lVar16 = uVar3 + 1;
  puVar14 = puVar4;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar3) {
    puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
    func_0x0001000d182c(puVar4,lVar16,1);
    puVar14 = puVar4;
  }
LAB_1011cedfc:
  *(long *)(puVar4 + 0x10) = lVar16;
  *(ulong *)(puVar4 + uVar3 * 0x10 + 0x20) = uVar13;
  *(undefined1 **)(puVar4 + uVar3 * 0x10 + 0x28) = puVar12;
  func_0x000107c61574(lVar2);
  puVar6 = PTR_PTR_1126b5be8;
  func_0x000107c610f8(PTR_PTR_1126b5be8);
  puVar4 = PTR___sSSN_11034da80;
  puVar7 = puVar5;
  func_0x000107c5fc48(puVar5,PTR___sSSN_11034da80);
  puVar8 = puVar14;
  func_0x000107c5fc48(puVar14,puVar4);
  puVar9 = puVar10;
  func_0x000107c5fc48(puVar10,puVar4);
  func_0x000107c45794(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  puVar7 = PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61174(puVar6);
  puVar8 = puVar7;
  func_0x000107c5e500();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
  }
  puVar4 = puVar7;
  func_0x000107c5e870(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c5e5d4(puVar7);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e7ec(puVar7);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar4 = puVar7;
  func_0x000107c3ecc8(puVar7);
  func_0x000107c61180();
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(puVar14);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  return puVar4;
}



/* Entry: 1011cf040; end: 1011cf14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011cf040(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  func_0x000107c613fc();
  uVar2 = param_2;
  func_0x000107c5c894();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_100bf8d9c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d657f8);
  *puVar1 = 0x7865745f646e6573;
  puVar1[1] = 0xef796c7065725f74;
  *(undefined8 *)(lVar4 + _DAT_112d65800) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d657f0) = uVar2;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  uVar2 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(uVar2);
  return unaff_x20;
}



/* Entry: 1011cf150; end: 1011cf17b;  */

void FUN_1011cf150(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011cf17c; end: 1011cf1bf; -[SCTextReplyNotificationCategoryPluginEntryPoint end] */

void FUN_1011cf17c(undefined8 param_1)

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



/* Entry: 1011cf1c0; end: 1011cf1f3;  */

void FUN_1011cf1c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011cf1f4; end: 1011cf23b; -[SCTextReplyNotificationCategoryPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf1f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d658d8);
  func_0x000107c61610(param_1 + _DAT_112d658e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d658e8));
  return;
}



/* Entry: 1011cf23c; end: 1011cf25b;  */

void FUN_1011cf23c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7778);
  return;
}



/* Entry: 1011cf25c; end: 1011cf26b; -[_TtC25MessageForwardingServices25MessageForwardingServices messageForwarder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf25c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d65918));
  return;
}



/* Entry: 1011cf26c; end: 1011cf2b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf26c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d65918) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011cf2b8; end: 1011cf30f; -[_TtC25MessageForwardingServices25MessageForwardingServices initWithMessageForwarder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf2b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d65918) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1011cf310; end: 1011cf36f; -[_TtC25MessageForwardingServices25MessageForwardingServices init] */

void FUN_1011cf310(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MessageForwardingServices.MessageForwardingServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cf33c);
  (*pcVar1)();
}



/* Entry: 1011cf370; end: 1011cf37f; -[_TtC25MessageForwardingServices25MessageForwardingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65918));
  return;
}



/* Entry: 1011cf380; end: 1011cf39f;  */

void FUN_1011cf380(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7840);
  return;
}



/* Entry: 1011cf3a0; end: 1011cf3e3; -[SCStreakReminderGroupActionProvider position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011cf3a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65948;
  func_0x000107c61428(param_1 + _DAT_112d65948,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1011cf3e4; end: 1011cf433; -[SCStreakReminderGroupActionProvider setPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65948;
  func_0x000107c61428(param_1 + _DAT_112d65948,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1011cf434; end: 1011cf47b; -[SCStreakReminderGroupActionProvider actionSheetCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf434(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65950;
  func_0x000107c61428(param_1 + _DAT_112d65950,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011cf47c; end: 1011cf4df; -[SCStreakReminderGroupActionProvider setActionSheetCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65950;
  func_0x000107c61428(param_1 + _DAT_112d65950,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011cf4e0; end: 1011cf527; -[SCStreakReminderGroupActionProvider prominentActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf4e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65958;
  func_0x000107c61428(param_1 + _DAT_112d65958,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011cf528; end: 1011cf58b; -[SCStreakReminderGroupActionProvider setProminentActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf528(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65958;
  func_0x000107c61428(param_1 + _DAT_112d65958,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011cf58c; end: 1011cf933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1011cf58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d65948) = 0xe;
  *(undefined8 *)(unaff_x20 + _DAT_112d65958) = 0;
  lVar4 = unaff_x20;
  func_0x000104f626a8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126b10a0;
    func_0x000107c61168();
    func_0x000107c5c514();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    *(undefined **)(unaff_x20 + _DAT_112d65950) = puVar5;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d65960);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined8 *)(unaff_x20 + _DAT_112d65968) = param_3;
    *(undefined8 *)(unaff_x20 + _DAT_112d65970) = param_4;
    *(undefined8 *)(unaff_x20 + _DAT_112d65978) = param_5;
    *(undefined8 *)(unaff_x20 + _DAT_112d65980) = param_6;
    *(undefined8 *)(unaff_x20 + _DAT_112d65988) = param_7;
    puVar2 = PTR_s_init_1125d9248;
    func_0x000107c61174(puVar5);
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    puVar6 = auStack_70;
    func_0x000107c61154(puVar6,puVar2);
    func_0x000107c61180();
    FUN_1011cf934(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(puVar5);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1011cf760);
  (*pcVar3)();
}



/* Entry: 1011cf934; end: 1011cfb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cf934(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar9 = &puStack_80;
  uVar2 = param_1;
  func_0x000104f626c0();
  func_0x000107c61180();
  func_0x000107c5405c(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c54514(param_1);
  puVar3 = &UNK_110390928;
  func_0x000107c613fc(&UNK_110390928,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110390950;
  func_0x000107c613fc(&UNK_110390950,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1011d0194;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101054b14;
  puStack_68 = &UNK_110390968;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  func_0x000107c3eae8(param_1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar5);
  lVar6 = *(long *)(unaff_x20 + _DAT_112d65970);
  func_0x000107c406a0();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cfb5c);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c3cfbc();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  if (lVar7 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d65960);
    func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112d65960))[1]);
    puVar4 = &UNK_110390928;
    func_0x000107c613fc(&UNK_110390928,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar8 = &UNK_1103909a0;
    func_0x000107c613fc(&UNK_1103909a0,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar4;
    *(undefined8 *)(puVar8 + 0x18) = param_1;
    pcStack_60 = FUN_1011d06e4;
    puStack_80 = puVar3;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1011d0004;
    puStack_68 = &UNK_1103909b8;
    puStack_58 = puVar8;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c43050(lVar7);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cfb60);
  (*pcVar1)();
}



/* Entry: 1011cfb60; end: 1011cfc0f; -[SCStreakReminderGroupActionProvider initWithGroupId:context:conversationServices:notificationServices:notificationPermissionServices:userBlizzard:] */

void FUN_1011cfb60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c5faec(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x0001011cf760(param_3,param_2,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 1011cfc10; end: 1011cfccb;  */

void FUN_1011cfc10(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  uStack_30 = 0x1011cfc90;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_1000f6b44;
  puStack_38 = &UNK_110390ad0;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c420a8(param_1,param_2,1,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  return;
}



/* Entry: 1011cfccc; end: 1011cfcd7;  */

void FUN_1011cfccc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1011cfcd8; end: 1011cfd4b;  */

void FUN_1011cfcd8(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x29) = param_3;
  *(undefined1 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011cfd4c,uVar1,uVar2);
  return;
}



/* Entry: 1011cfd4c; end: 1011cfeff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cfd4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  cVar2 = *(char *)(unaff_x22 + 0x29);
  cVar3 = *(char *)(unaff_x22 + 0x28);
  lVar10 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c54514(uVar1,param_2,1);
  if (cVar3 == '\x01') {
    func_0x000107c54514(uVar1,param_2,1);
    func_0x000107c58ddc(uVar1,param_2,cVar2,1);
    if (cVar2 != '\0') {
      puVar5 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168();
      func_0x000107c5af98();
      func_0x000107c61180();
      func_0x000107c451b0(puVar5,param_2,puVar6);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000104f62678();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1011cfefc);
        (*pcVar4)();
      }
      puVar7 = puVar6;
      func_0x000104f626d8();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1011cff00);
        (*pcVar4)();
      }
      puVar8 = PTR_PTR_1126b0ae0;
      func_0x000107c61168(PTR_PTR_1126b0ae0);
      func_0x000107c40b0c();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      lVar9 = *(long *)(lVar10 + _DAT_112d65978);
      func_0x000107c4d80c();
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      puVar6 = puVar8;
      if (lVar10 != 0) {
        func_0x000107c5c2e0(lVar10,param_2,puVar8);
        func_0x000107c615e8(lVar10);
        puVar6 = puVar5;
        puVar5 = puVar8;
      }
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001011cfef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011cff00; end: 1011cff3b;  */

void FUN_1011cff00(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001011cff38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1011cff3c; end: 1011cffa7;  */

void FUN_1011cff3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011cffa8,uVar1,uVar2);
  return;
}



/* Entry: 1011cffa8; end: 1011d0003;  */

void FUN_1011cffa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c5c0e4(uVar1);
  func_0x000107c54514(uVar2,param_2,1);
  func_0x000107c58ddc(uVar2,param_2,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0001011d0000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011d0004; end: 1011d0053;  */

void FUN_1011d0004(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1011d0054; end: 1011d0087;  */

void FUN_1011d0054(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011d0088; end: 1011d0123; -[SCStreakReminderGroupActionProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011d00a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d00e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d0108: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011d00ec) */
/* WARNING: Removing unreachable block (ram,0x0001011d00a8) */
/* WARNING: Removing unreachable block (ram,0x0001011d010c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d0088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65950));
  return;
}



/* Entry: 1011d0124; end: 1011d0193;  */

void FUN_1011d0124(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7900);
  return;
}



/* Entry: 1011d0194; end: 1011d069b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d0194(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  if (param_1 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  puVar11 = auStack_b8;
  func_0x000107c61428(lVar3 + 0x10,puVar11,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c61174(param_1);
  uVar4 = uVar1;
  func_0x000107c4a3b4();
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(lVar3 + _DAT_112d65980);
    func_0x000107c4d7f4();
    func_0x000107c61180();
    lVar10 = lVar5;
    func_0x000107c4a194();
    func_0x000107c615e8();
    if ((int)lVar10 != 0) {
      func_0x000104f62720();
      func_0x000107c61180();
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d0698);
        (*pcVar2)();
      }
      pcStack_80 = FUN_1011cfc10;
      puStack_78 = (undefined *)0x0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_100de205c;
      puStack_88 = &UNK_110390a80;
      ppuVar6 = &puStack_a0;
      func_0x000107c60bc4(ppuVar6);
      puVar7 = PTR_PTR_1126aed70;
      func_0x000107c61168();
      puVar8 = puVar7;
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar5);
      puVar15 = puStack_78;
      func_0x000107c61574();
      func_0x000104f62738();
      func_0x000107c61180();
      if (puVar15 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d069c);
        (*pcVar2)();
      }
      pcStack_80 = FUN_1011cfccc;
      puStack_78 = (undefined *)0x0;
      puStack_a0 = puVar9;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_100de205c;
      puStack_88 = &UNK_110390aa8;
      ppuVar6 = &puStack_a0;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar15);
      puVar9 = puStack_78;
      func_0x000107c61574();
      func_0x000104f62630();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
        puStack_c0 = (undefined *)0x0;
        puVar12 = (undefined1 *)0x0;
        puVar16 = puVar11;
      }
      else {
        puStack_c0 = puVar9;
        func_0x000107c5faec();
        puVar16 = puVar11;
        func_0x000107c61170();
        puVar12 = puVar11;
      }
      func_0x000104f62618();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        puVar16 = (undefined1 *)0x0;
      }
      else {
        puVar15 = puVar9;
        func_0x000107c5faec();
        func_0x000107c61170();
      }
      FUN_100de9c28();
      func_0x000107c613fc();
      *(undefined8 *)(puVar9 + 0x18) = 5;
      *(undefined8 *)(puVar9 + 0x10) = 2;
      *(undefined **)(puVar9 + 0x20) = puVar8;
      *(undefined **)(puVar9 + 0x28) = puVar7;
      func_0x000107c610f8(PTR_PTR_1126aed78);
      func_0x000107c61174(puVar8);
      func_0x000107c61174(puVar7);
      FUN_100fe8774(puStack_c0,puVar12,puVar15,puVar16,puVar9);
      func_0x000107c4f018(param_1);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar7);
      goto LAB_1011d0650;
    }
    uVar13 = 0xe200000000000000;
    uVar14 = 0x4e4f;
  }
  else {
    uVar13 = 0xe300000000000000;
    uVar14 = 0x46464f;
  }
  func_0x000107c54514(uVar1);
  puVar9 = PTR_PTR_1126b2a48;
  func_0x000107c610f8(PTR_PTR_1126b2a48);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c5fadc(uVar14,uVar13);
  func_0x000107c6142c(uVar13);
  func_0x000107c5590c(puVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c5592c(puVar9);
  func_0x000107c571f8(puVar9);
  uVar14 = *(undefined8 *)(lVar3 + _DAT_112d65960);
  func_0x000107c5fadc(uVar14,((undefined8 *)(lVar3 + _DAT_112d65960))[1]);
  func_0x000107c539e0(puVar9);
  func_0x000107c61170(uVar14);
  lVar10 = *(long *)(lVar3 + _DAT_112d65988);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar10);
  }
  func_0x000107c61170(puVar9);
  lVar10 = *(long *)(lVar3 + _DAT_112d65970);
  func_0x000107c406a0();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d0690);
    (*pcVar2)();
  }
  lVar5 = lVar10;
  func_0x000107c3cfbc();
  func_0x000107c61180();
  func_0x000107c615e8(lVar10);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d0694);
    (*pcVar2)();
  }
  puStack_c0 = *(undefined **)(lVar3 + _DAT_112d65960);
  func_0x000107c5fadc(puStack_c0,((undefined8 *)(lVar3 + _DAT_112d65960))[1]);
  puVar9 = &UNK_110390928;
  func_0x000107c613fc(&UNK_110390928,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,lVar3);
  puVar7 = &UNK_110390a40;
  func_0x000107c613fc(&UNK_110390a40,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar9;
  puVar7[0x18] = (byte)uVar4 ^ 1;
  *(ulong *)(puVar7 + 0x20) = uVar1;
  pcStack_80 = FUN_1011d08f4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100ab47f8;
  puStack_88 = &UNK_110390a58;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar6);
  puVar9 = puStack_78;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar9);
  func_0x000107c4d0c8(lVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(lVar5);
LAB_1011d0650:
  func_0x000107c61170(puStack_c0);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1011d069c; end: 1011d06b7;  */

void FUN_1011d069c(long param_1,long param_2)

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



/* Entry: 1011d06b8; end: 1011d06e3;  */

void FUN_1011d06b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011d06e4; end: 1011d07f7;  */

void FUN_1011d06e4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 != 0) {
      puVar3 = &UNK_1103909f0;
      func_0x000107c613fc(&UNK_1103909f0,0x28,7);
      *(long *)(puVar3 + 0x10) = lVar2;
      *(undefined8 *)(puVar3 + 0x18) = uVar1;
      *(long *)(puVar3 + 0x20) = param_1;
      puVar4 = &UNK_110390a18;
      func_0x000107c613fc(&UNK_110390a18,0x20,7);
      *(undefined **)(puVar4 + 0x10) = &UNK_10d92a6a0;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      func_0x000107c615f4(param_1,2);
      func_0x000107c61174(lVar2);
      func_0x000107c61174(uVar1);
      func_0x0001001ca524(0xe,0,0x28,3,0,0,&UNK_10d92a6b0,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574();
      func_0x000107c61574(puVar4);
      func_0x000107c615e8(param_1);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1011d07f8; end: 1011d0847;  */

void FUN_1011d07f8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1011d0848;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011cffa8,lVar1,lVar2);
  return;
}



/* Entry: 1011d0848; end: 1011d0883;  */

void FUN_1011d0848(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001011d0880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


