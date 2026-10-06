/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011fad10; end: 1011fb123;  */

/* WARNING: Possible PIC construction at 0x0001011faec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011faf08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fb008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fb028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fb038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fb048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fb0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fb0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fb0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fb084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fb094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fb074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fb098) */
/* WARNING: Removing unreachable block (ram,0x0001011fb088) */
/* WARNING: Removing unreachable block (ram,0x0001011fb0e4) */
/* WARNING: Removing unreachable block (ram,0x0001011fb0d4) */
/* WARNING: Removing unreachable block (ram,0x0001011fb0c4) */
/* WARNING: Removing unreachable block (ram,0x0001011fb04c) */
/* WARNING: Removing unreachable block (ram,0x0001011fb0ec) */
/* WARNING: Removing unreachable block (ram,0x0001011fb03c) */
/* WARNING: Removing unreachable block (ram,0x0001011fb02c) */
/* WARNING: Removing unreachable block (ram,0x0001011fb00c) */
/* WARNING: Removing unreachable block (ram,0x0001011faf0c) */
/* WARNING: Removing unreachable block (ram,0x0001011faec8) */
/* WARNING: Removing unreachable block (ram,0x0001011fb0bc) */
/* WARNING: Removing unreachable block (ram,0x0001011faecc) */
/* WARNING: Removing unreachable block (ram,0x0001011fb078) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fad10(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar4 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = unaff_x20;
  func_0x000107c498ac();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = unaff_x20;
    func_0x000107c44530();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c61170(lVar4);
      lVar4 = lVar5;
    }
    else {
      lVar7 = unaff_x20;
      func_0x000107c3f830();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x000107c61170(lVar4);
        lVar4 = lVar5;
      }
      else {
        func_0x000107c3f840();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar8 = 0;
          FUN_1011faa7c();
          lVar9 = lVar8;
          func_0x000107c610f8();
          lVar2 = _DAT_112d675e8;
          uVar10 = 0;
          func_0x0001005f60b4();
          func_0x000107c613fc();
          func_0x0001005f60d4();
          *(undefined8 *)(lVar9 + lVar2) = uVar10;
          *(undefined8 *)(lVar9 + _DAT_112d675f0) = 0;
          *(long *)(lVar9 + _DAT_112d675f8) = lVar4;
          func_0x000107c61174();
          func_0x000107c4456c();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1011fb124);
            (*pcVar3)();
          }
          *(long *)(lVar9 + _DAT_112d67600) = lVar6;
          *(long *)(lVar9 + _DAT_112d67608) = lVar7;
          *(long *)(lVar9 + _DAT_112d67610) = unaff_x20;
          puVar1 = PTR_s_init_1125d9248;
          lStack_70 = lVar9;
          lStack_68 = lVar8;
          func_0x000107c61174(unaff_x20);
          func_0x000107c61174(lVar7);
          plVar11 = &lStack_70;
          func_0x000107c61154(plVar11,puVar1);
          func_0x000107c61434(*(undefined8 *)
                               (*(long *)((long)plVar11 + _DAT_112d675f8) + _DAT_112d676b0 + 8));
          func_0x000107c406bc(lVar5);
          func_0x000107c61180();
          func_0x000107c5c734();
          func_0x000107c61180();
          lVar4 = lVar5;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1011fb124; end: 1011fb12b;  */

void FUN_1011fb124(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1011f9d00(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011fb12c; end: 1011fb153; -[SCChatSnapReplyCameraEntryPoint begin] */

void FUN_1011fb12c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011fad10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011fb154; end: 1011fb197; -[SCChatSnapReplyCameraEntryPoint end] */

void FUN_1011fb154(undefined8 param_1)

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



/* Entry: 1011fb198; end: 1011fb47f;  */

void FUN_1011fb198(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10d4750)) ||
       (func_0x000107c605b8(0xd00000000000001c,0x800000010ef2b8b0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5549c();
    }
    else {
      uVar2 = 0x72655370756f7267;
      if (((param_2 == 0x72655370756f7267) && (param_3 == -0x12ffff8c9a9c968a)) ||
         (func_0x000107c605b8(0x72655370756f7267,0xed00007365636976,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c54f80();
      }
      else {
        uVar2 = 0xd000000000000017;
        if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10d8200)) ||
           (func_0x000107c605b8(0xd000000000000017,0x800000010ef27e00,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5334c();
        }
        else {
          if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10d7ec0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000016,0x800000010ef28140,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "ChatSnapReplyCameraImplementation/SCChatSnapReplyCameraEntryPoint.swift"
                                  ,0x47,2,0x3c,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fb480);
              (*pcVar1)();
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53340();
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011fb480; end: 1011fb52b; -[SCChatSnapReplyCameraEntryPoint setValue:forIvarName:] */

void FUN_1011fb480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011fb198(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011fb52c; end: 1011fb5d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb52c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d67658,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d67660,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d67668,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d67670,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d67678) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d67680) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011fb5d4; end: 1011fb5f3; -[SCChatSnapReplyCameraEntryPoint init] */

void FUN_1011fb5d4(void)

{
  FUN_1011fb52c();
  return;
}



/* Entry: 1011fb5f4; end: 1011fb627;  */

void FUN_1011fb5f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011fb628; end: 1011fb69f; -[SCChatSnapReplyCameraEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011fb684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fb688) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb628(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d67658);
  func_0x000107c61610(param_1 + _DAT_112d67660);
  func_0x000107c61610(param_1 + _DAT_112d67668);
  func_0x000107c61610(param_1 + _DAT_112d67670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d67678));
  return;
}



/* Entry: 1011fb6a0; end: 1011fb6bf;  */

void FUN_1011fb6a0(void)

{
  func_0x000107c61168(&PTR_PTR_1127ba3c0);
  return;
}



/* Entry: 1011fb6c0; end: 1011fb6cb; -[ChatSnapReplyCameraScope conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb6c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d676b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d676b0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1011fb6cc; end: 1011fb6d7; -[ChatSnapReplyCameraScope originalMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb6cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d676b8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d676b8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1011fb6d8; end: 1011fb71f;  */

void FUN_1011fb6d8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1011fb720; end: 1011fb73f; -[ChatSnapReplyCameraScope focusedMessageCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb720(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d676c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fb740; end: 1011fb74f; -[ChatSnapReplyCameraScope focusedMessageViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d676c8));
  return;
}



/* Entry: 1011fb750; end: 1011fb75f; -[ChatSnapReplyCameraScope focusedMessageContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d676d0));
  return;
}



/* Entry: 1011fb760; end: 1011fb76b; -[ChatSnapReplyCameraScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb760(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d676d8;
  func_0x000107c61428(param_1 + _DAT_112d676d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fb76c; end: 1011fb777; -[ChatSnapReplyCameraScope setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb76c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d676d8;
  func_0x000107c61428(param_1 + _DAT_112d676d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fb778; end: 1011fb783; -[ChatSnapReplyCameraScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb778(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d676e0;
  func_0x000107c61428(param_1 + _DAT_112d676e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fb784; end: 1011fb7c7;  */

void FUN_1011fb784(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011fb7c8; end: 1011fb7d3; -[ChatSnapReplyCameraScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fb7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d676e0;
  func_0x000107c61428(param_1 + _DAT_112d676e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fb7d4; end: 1011fb827;  */

void FUN_1011fb7d4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fb828; end: 1011fb9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1011fb828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112d676d8;
  func_0x000107c61614(unaff_x20 + _DAT_112d676d8,0);
  lVar4 = _DAT_112d676e0;
  func_0x000107c61614(unaff_x20 + _DAT_112d676e0,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d676b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d676b8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d676c0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d676c8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d676d0) = param_7;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_8);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_9);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar5 = auStack_a0;
  func_0x000107c61154(puVar5,puVar2);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c615e8(param_9);
  return puVar5;
}



/* Entry: 1011fb9c4; end: 1011fba3f;  */

undefined8 FUN_1011fb9c4(undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  FUN_1011fbc3c();
  func_0x000107c615e8(in_x4);
  func_0x000107c61170(in_x5);
  func_0x000107c61170(in_x6);
  func_0x000107c61170(in_x7);
  func_0x000107c615e8(in_stack_00000000);
  return param_1;
}



/* Entry: 1011fba40; end: 1011fbb4b; -[ChatSnapReplyCameraScope initWithConversationId:originalMessageId:focusedMessageCell:focusedMessageViewModel:focusedMessageContent:presentingViewController:delegate:] */

undefined8
FUN_1011fba40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_9);
  FUN_1011fbc3c(param_3,param_2,param_4,uVar1,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c615e8(param_9);
  return param_3;
}



/* Entry: 1011fbb4c; end: 1011fbbab; -[ChatSnapReplyCameraScope init] */

void FUN_1011fbb4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatSnapReplyCameraScope.ChatSnapReplyCameraScope",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fbb78);
  (*pcVar1)();
}



/* Entry: 1011fbbac; end: 1011fbc3b; -[ChatSnapReplyCameraScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011fbbac(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d676b0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d676b8 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d676c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d676c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d676d0));
  func_0x000107c61610(param_1 + _DAT_112d676d8);
  param_1 = param_1 + _DAT_112d676e0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011fbc3c; end: 1011fbd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fbc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112d676d8;
  func_0x000107c61614(unaff_x20 + _DAT_112d676d8,0);
  lVar4 = _DAT_112d676e0;
  func_0x000107c61614(unaff_x20 + _DAT_112d676e0,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d676b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d676b8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d676c0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d676c8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d676d0) = param_7;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_8);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_9);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61154(&stack0xffffffffffffff60,puVar2);
  return;
}



/* Entry: 1011fbd94; end: 1011fbdb7;  */

undefined8 FUN_1011fbd94(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011fbdb8; end: 1011fbdd7;  */

void FUN_1011fbdb8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ba4a0);
  return;
}



/* Entry: 1011fbdd8; end: 1011fbe37; -[_TtC40FriendshipDayPromoBillboardActionHandler40FriendshipDayPromoBillboardActionHandler init] */

void FUN_1011fbdd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendshipDayPromoBillboardActionHandler.FriendshipDayPromoBillboardActionHandler"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fbe04);
  (*pcVar1)();
}



/* Entry: 1011fbe38; end: 1011fbe6f; -[_TtC40FriendshipDayPromoBillboardActionHandler40FriendshipDayPromoBillboardActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011fbe54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fbe58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fbe38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d67710));
  return;
}



/* Entry: 1011fbe70; end: 1011fbe77; -[_TtC40FriendshipDayPromoBillboardActionHandler40FriendshipDayPromoBillboardActionHandler actionHandlerType] */

undefined8 FUN_1011fbe70(void)

{
  return 0x20;
}



/* Entry: 1011fbe78; end: 1011fbf1f;  */

/* WARNING: Possible PIC construction at 0x0001011fbe9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fbea0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fbe78(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d67718);
  *(undefined8 *)(unaff_x20 + _DAT_112d67718) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1011fbf20; end: 1011fbf6f; -[_TtC40FriendshipDayPromoBillboardActionHandler40FriendshipDayPromoBillboardActionHandler handleOnTapActionWithContext:] */

/* WARNING: Possible PIC construction at 0x0001011fbf58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fbf5c) */

void FUN_1011fbf20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011fbe78(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011fbf70; end: 1011fbffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fbf70(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d67710);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112d67718);
  if (lVar1 != 0) {
    func_0x000107c4db74();
    func_0x000107c61180();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Block_release_11034bcf0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1011fbffc; end: 1011fbfff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fbffc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d67710);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112d67718);
  if (lVar1 != 0) {
    func_0x000107c4db74();
    func_0x000107c61180();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Block_release_11034bcf0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1011fc000; end: 1011fc01f;  */

void FUN_1011fc000(void)

{
  func_0x000107c61168(&PTR_PTR_1127ba590);
  return;
}



/* Entry: 1011fc020; end: 1011fc073;  */

undefined8 FUN_1011fc020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1011fc074(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1011fc074; end: 1011fc1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fc074(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  uVar2 = param_3;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x000107c4a548();
    func_0x000107c615e8(uVar3);
    if ((uVar2 & 1) != 0) {
      lVar4 = 0;
      FUN_1011fc000();
      lVar5 = lVar4;
      func_0x000107c610f8();
      *(undefined8 *)(lVar5 + _DAT_112d67718) = 0;
      *(undefined8 *)(lVar5 + _DAT_112d67710) = param_2;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar5;
      lStack_48 = lVar4;
      func_0x000107c61174(param_2);
      func_0x000107c61154(&lStack_50,puVar1);
      uVar7 = param_1;
      func_0x000107c4e9e4(param_1);
      func_0x000107c61180();
      func_0x000107c61174(plVar6);
      func_0x000107c4fba8(uVar7);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(plVar6);
      func_0x000107c61170(plVar6);
      func_0x000107c61170(param_1);
      param_1 = param_2;
      goto LAB_1011fc190;
    }
  }
  func_0x000107c61170(param_2);
LAB_1011fc190:
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1011fc1b8; end: 1011fc1d3;  */

void FUN_1011fc1b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011fc1d4; end: 1011fc1f3;  */

void FUN_1011fc1d4(void)

{
  func_0x000107c61168(&PTR_PTR_112d67788);
  return;
}



/* Entry: 1011fc1f4; end: 1011fc1ff; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fc1f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d677e0;
  func_0x000107c61428(param_1 + _DAT_112d677e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fc200; end: 1011fc20b; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fc200(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d677e0;
  func_0x000107c61428(param_1 + _DAT_112d677e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fc20c; end: 1011fc217; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fc20c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d677e8;
  func_0x000107c61428(param_1 + _DAT_112d677e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fc218; end: 1011fc25b;  */

void FUN_1011fc218(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011fc25c; end: 1011fc267; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fc25c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d677e8;
  func_0x000107c61428(param_1 + _DAT_112d677e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fc268; end: 1011fc2bb;  */

void FUN_1011fc268(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fc2bc; end: 1011fc303; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint streakRestorePromoScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fc2bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d677f0;
  func_0x000107c61428(param_1 + _DAT_112d677f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011fc304; end: 1011fc447; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint setStreakRestorePromoScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fc304(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d677f0;
  func_0x000107c61428(param_1 + _DAT_112d677f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011fc448; end: 1011fc46f; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint begin] */

void FUN_1011fc448(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001011fc368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011fc470; end: 1011fc4b3; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint end] */

void FUN_1011fc470(undefined8 param_1)

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



/* Entry: 1011fc4b4; end: 1011fc6b7;  */

void FUN_1011fc4b4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10d6a90)) {
      uVar2 = 0xd00000000000001b;
      func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef10d2180)) &&
           (func_0x000107c605b8(0xd00000000000001e,0x800000010ef2de80,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "FriendshipDayPromoBillboardActionHandler/SCFriendshipDayPromoBillboardActionHandlerEntryPoint.swift"
                              ,99,2,0x2b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fc6b8);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c599f0();
        goto LAB_1011fc540;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5666c();
  }
LAB_1011fc540:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011fc6b8; end: 1011fc763; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint setValue:forIvarName:] */

void FUN_1011fc6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011fc4b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011fc764; end: 1011fc7e3; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fc764(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d677e0,0);
  func_0x000107c61614(param_1 + _DAT_112d677e8,0);
  *(undefined8 *)(param_1 + _DAT_112d677f0) = 0;
  *(undefined8 *)(param_1 + _DAT_112d677f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011fc7e4; end: 1011fc817;  */

void FUN_1011fc7e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011fc818; end: 1011fc86f; -[SCFriendshipDayPromoBillboardActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fc818(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d677e0);
  func_0x000107c61610(param_1 + _DAT_112d677e8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d677f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d677f8));
  return;
}



/* Entry: 1011fc870; end: 1011fc88f;  */

void FUN_1011fc870(void)

{
  func_0x000107c61168(&PTR_PTR_1127ba658);
  return;
}



/* Entry: 1011fc890; end: 1011fc8ef; -[_TtC35FriendshipDayPromoFHPSignalProvider35FriendshipDayPromoFHPSignalProvider init] */

void FUN_1011fc890(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendshipDayPromoFHPSignalProvider.FriendshipDayPromoFHPSignalProvider",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fc8bc);
  (*pcVar1)();
}



/* Entry: 1011fc8f0; end: 1011fc937; -[_TtC35FriendshipDayPromoFHPSignalProvider35FriendshipDayPromoFHPSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011fc90c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fc910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fc8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d67828));
  return;
}



/* Entry: 1011fc938; end: 1011fc93f; -[_TtC35FriendshipDayPromoFHPSignalProvider35FriendshipDayPromoFHPSignalProvider preCheckSource] */

undefined8 FUN_1011fc938(void)

{
  return 0x1f;
}



/* Entry: 1011fc940; end: 1011fc9bb;  */

void FUN_1011fc940(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (((param_1 & 1) != 0) && (param_2 >> 0x3e != 0)) {
    func_0x000107c60480();
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1011fc9bc; end: 1011fca33;  */

void FUN_1011fc9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_1011fcdd8(0,0x112d67868,&PTR_PTR_1126daa00);
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1011fca34; end: 1011fca67; -[_TtC35FriendshipDayPromoFHPSignalProvider35FriendshipDayPromoFHPSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_1011fca34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1011fca88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011fca68; end: 1011fca87;  */

void FUN_1011fca68(void)

{
  func_0x000107c61168(&PTR_PTR_1127ba728);
  return;
}



/* Entry: 1011fca88; end: 1011fcdb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011fca88(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar10 = &puStack_90;
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112d67828);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112d67830);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar2 == 0) {
      func_0x000107c61170(uVar1);
    }
    else {
      uVar3 = *(ulong *)(unaff_x20 + _DAT_112d67838);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar3 == 0) {
        func_0x000107c61170(uVar1);
      }
      else {
        uVar4 = uVar3;
        func_0x000107c4a548();
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar1;
          func_0x000107c43af8();
          uVar5 = uVar3;
          func_0x000107c5c0f0();
          if ((long)uVar5 < 1 || uVar5 <= uVar4) {
            puVar6 = PTR_PTR_1126ae558;
            func_0x000107c61168(PTR_PTR_1126ae558);
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c45a48();
            func_0x000107c451b0(puVar6);
            func_0x000107c61180();
            func_0x000107c61170(uVar1);
            func_0x000107c615e8(uVar2);
            func_0x000107c615e8(uVar3);
          }
          else {
            func_0x000107c5c0e8(uVar3);
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c46ed0();
            uVar4 = uVar3;
            func_0x000107c5c0ec(uVar3);
            func_0x000107c61180();
            puVar8 = PTR_PTR_1126ae560;
            func_0x000107c610f8();
            func_0x000107c453e4();
            FUN_1011fcdd8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar9 = 1;
            func_0x000107c60110(1);
            puVar6 = &UNK_110393230;
            func_0x000107c613fc(&UNK_110393230,0x18,7);
            *(undefined **)(puVar6 + 0x10) = puVar8;
            pcStack_70 = FUN_1011fcdb4;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            pcStack_80 = FUN_1011fc9bc;
            puStack_78 = &UNK_110393248;
            puStack_68 = puVar6;
            func_0x000107c60bc4(&puStack_90);
            puVar6 = puStack_68;
            func_0x000107c61174(puVar7);
            func_0x000107c61174(uVar4);
            func_0x000107c61174(puVar8);
            func_0x000107c61574(puVar6);
            func_0x000107c4309c(uVar2);
            func_0x000107c60bd0(ppuVar10);
            func_0x000107c61170(uVar9);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(uVar4);
            puVar6 = puVar8;
            func_0x000107c43bf4(puVar8);
            func_0x000107c61180();
            func_0x000107c61170(uVar1);
            func_0x000107c615e8(uVar2);
            func_0x000107c615e8(uVar3);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(uVar4);
          }
          func_0x000107c61170(puVar8);
          return puVar6;
        }
        func_0x000107c61170(uVar1);
        func_0x000107c615e8(uVar2);
        uVar2 = uVar3;
      }
      func_0x000107c615e8(uVar2);
    }
  }
  puVar6 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 1011fcdb4; end: 1011fcdd7;  */

void FUN_1011fcdb4(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (((param_1 & 1) != 0) && (param_2 >> 0x3e != 0)) {
    func_0x000107c60480();
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1011fcdd8; end: 1011fce17;  */

void FUN_1011fcdd8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1011fce18; end: 1011fce7b;  */

undefined8
FUN_1011fce18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1011fce7c(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 1011fce7c; end: 1011fd0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fce7c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar9 = &puStack_a0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar2 = param_4;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x000107c4a548();
    func_0x000107c615e8(uVar3);
    if ((uVar2 & 1) != 0) {
      lVar4 = param_2;
      func_0x000107c42eac();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fd0b4);
        (*pcVar1)();
      }
      uVar11 = param_3;
      func_0x000107c4d460();
      func_0x000107c61180();
      uVar2 = param_4;
      func_0x000107c4cdb8();
      func_0x000107c61180();
      lVar5 = 0;
      FUN_1011fca68();
      lVar6 = lVar5;
      func_0x000107c610f8();
      *(long *)(lVar6 + _DAT_112d67828) = lVar4;
      *(undefined8 *)(lVar6 + _DAT_112d67830) = uVar11;
      *(ulong *)(lVar6 + _DAT_112d67838) = uVar2;
      plVar7 = &lStack_70;
      lStack_70 = lVar6;
      lStack_68 = lVar5;
      func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
      uVar11 = param_1;
      func_0x000107c4e9e4(param_1);
      func_0x000107c61180();
      func_0x000107c4fba8();
      func_0x000107c61170(uVar11);
      lVar4 = param_2;
      func_0x000107c42eac();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c61170(plVar7);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        puVar8 = &UNK_110393280;
        func_0x000107c613fc(&UNK_110393280,0x18,7);
        *(long *)(puVar8 + 0x10) = lVar4;
        pcStack_80 = FUN_1011fd0fc;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_110393298;
        puStack_78 = puVar8;
        func_0x000107c60bc4();
        puVar10 = (undefined1 *)ppuVar9;
        func_0x000107c60bc4();
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61574(puStack_78);
        uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
        *(undefined1 **)(unaff_x20 + 0x10) = puVar10;
        func_0x000107c60bd0(uVar11);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fd0b8);
      (*pcVar1)();
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1011fd0b8; end: 1011fd0fb;  */

void FUN_1011fd0b8(long param_1)

{
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c54ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1011fd0fc; end: 1011fd11f;  */

void FUN_1011fd0fc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c54ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011fd120; end: 1011fd143;  */

void FUN_1011fd120(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011fd144; end: 1011fd14f;  */

void FUN_1011fd144(void)

{
  return;
}



/* Entry: 1011fd150; end: 1011fd16f;  */

void FUN_1011fd150(void)

{
  func_0x000107c61168(&PTR_PTR_112d678b0);
  return;
}



/* Entry: 1011fd170; end: 1011fd17b; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd170(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67910;
  func_0x000107c61428(param_1 + _DAT_112d67910,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fd17c; end: 1011fd187; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67910;
  func_0x000107c61428(param_1 + _DAT_112d67910,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fd188; end: 1011fd193; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd188(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67918;
  func_0x000107c61428(param_1 + _DAT_112d67918,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fd194; end: 1011fd19f; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd194(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67918;
  func_0x000107c61428(param_1 + _DAT_112d67918,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fd1a0; end: 1011fd1ab; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint nativeMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd1a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67920;
  func_0x000107c61428(param_1 + _DAT_112d67920,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fd1ac; end: 1011fd1b7; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint setNativeMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67920;
  func_0x000107c61428(param_1 + _DAT_112d67920,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fd1b8; end: 1011fd1c3; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd1b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67928;
  func_0x000107c61428(param_1 + _DAT_112d67928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011fd1c4; end: 1011fd207;  */

void FUN_1011fd1c4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011fd208; end: 1011fd213; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd208(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67928;
  func_0x000107c61428(param_1 + _DAT_112d67928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fd214; end: 1011fd267;  */

void FUN_1011fd214(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011fd268; end: 1011fd38b;  */

/* WARNING: Possible PIC construction at 0x0001011fd368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011fd358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fd36c) */
/* WARNING: Removing unreachable block (ram,0x0001011fd35c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd268(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c42eb0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4d478();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4cdfc();
      func_0x000107c61180();
      if (lVar4 != 0) {
        uVar5 = 0;
        FUN_1011fd150(0);
        func_0x000107c613fc();
        FUN_1011fce7c(lVar1,lVar2,lVar3,lVar4,uVar5);
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d67930);
        *(long *)(unaff_x20 + _DAT_112d67930) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar5);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1011fd38c; end: 1011fd3b3; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint begin] */

void FUN_1011fd38c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011fd268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011fd3b4; end: 1011fd3f7; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint end] */

void FUN_1011fd3b4(undefined8 param_1)

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



/* Entry: 1011fd3f8; end: 1011fd667;  */

void FUN_1011fd3f8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef230)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ecb20)) {
          uVar2 = 0xd000000000000017;
          func_0x000107c605b8(0xd000000000000017,0x800000010ef134e0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd00000000000001b;
            if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10d6a90)) &&
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "FriendshipDayPromoFHPSignalProvider/SCFriendshipDayPromoFHPSignalProviderEntryPoint.swift"
                                  ,0x59,2,0x32,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fd668);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5666c();
            goto LAB_1011fd484;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5698c();
        goto LAB_1011fd484;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5491c();
  }
LAB_1011fd484:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011fd668; end: 1011fd713; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_1011fd668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011fd3f8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011fd714; end: 1011fd7af; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd714(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d67910,0);
  func_0x000107c61614(param_1 + _DAT_112d67918,0);
  func_0x000107c61614(param_1 + _DAT_112d67920,0);
  func_0x000107c61614(param_1 + _DAT_112d67928,0);
  *(undefined8 *)(param_1 + _DAT_112d67930) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011fd7b0; end: 1011fd7e3;  */

void FUN_1011fd7b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011fd7e4; end: 1011fd84b; -[SCFriendshipDayPromoFHPSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd7e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d67910);
  func_0x000107c61610(param_1 + _DAT_112d67918);
  func_0x000107c61610(param_1 + _DAT_112d67920);
  func_0x000107c61610(param_1 + _DAT_112d67928);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d67930));
  return;
}



/* Entry: 1011fd84c; end: 1011fd86b;  */

void FUN_1011fd84c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ba7f8);
  return;
}



/* Entry: 1011fd86c; end: 1011fd8cb; -[_TtC40ResurrectedRestoreBillboardActionHandler40ResurrectedRestoreBillboardActionHandler init] */

void FUN_1011fd86c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ResurrectedRestoreBillboardActionHandler.ResurrectedRestoreBillboardActionHandler"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011fd898);
  (*pcVar1)();
}



/* Entry: 1011fd8cc; end: 1011fd903; -[_TtC40ResurrectedRestoreBillboardActionHandler40ResurrectedRestoreBillboardActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011fd8e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fd8ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d67960));
  return;
}



/* Entry: 1011fd904; end: 1011fd90b; -[_TtC40ResurrectedRestoreBillboardActionHandler40ResurrectedRestoreBillboardActionHandler actionHandlerType] */

undefined8 FUN_1011fd904(void)

{
  return 0x1d;
}



/* Entry: 1011fd90c; end: 1011fd9b3;  */

/* WARNING: Possible PIC construction at 0x0001011fd930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fd934) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd90c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d67968);
  *(undefined8 *)(unaff_x20 + _DAT_112d67968) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1011fd9b4; end: 1011fda03; -[_TtC40ResurrectedRestoreBillboardActionHandler40ResurrectedRestoreBillboardActionHandler handleOnTapActionWithContext:] */

/* WARNING: Possible PIC construction at 0x0001011fd9ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011fd9f0) */

void FUN_1011fd9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011fd90c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


