/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102113ddc; end: 102113e1f; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint end] */

void FUN_102113ddc(undefined8 param_1)

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



/* Entry: 102113e20; end: 102114023;  */

void FUN_102113e20(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0fa21e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010f05de20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000033;
        if (((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0f9d230)) &&
           (func_0x000107c605b8(0xd000000000000033,0x800000010f062dd0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ClearMenuActionSheetScopeGraphBridge/SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x60,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102114024);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53434();
        goto LAB_102113eac;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c587e8();
  }
LAB_102113eac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102114024; end: 1021140cf; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102114024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102113e20(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021140d0; end: 102114147; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021140d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e59748,0);
  *(undefined8 *)(param_1 + _DAT_112e59750) = 0;
  *(undefined8 *)(param_1 + _DAT_112e59758) = 0;
  *(undefined8 *)(param_1 + _DAT_112e59760) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102114148; end: 10211417b;  */

void FUN_102114148(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10211417c; end: 1021141d3; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021141a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021141ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211417c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e59748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e59750));
  return;
}



/* Entry: 1021141d4; end: 1021141f3;  */

void FUN_1021141d4(void)

{
  func_0x000107c61168(&PTR_PTR_11281e9d0);
  return;
}



/* Entry: 1021141f4; end: 10211423b; -[SCSCClearMenuActionSheetScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021141f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e59790;
  func_0x000107c61428(param_1 + _DAT_112e59790,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10211423c; end: 102114293; -[SCSCClearMenuActionSheetScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211423c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e59790;
  func_0x000107c61428(param_1 + _DAT_112e59790,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102114294; end: 10211436b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102114294(undefined8 param_1,long param_2)

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
    FUN_10211346c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e596a8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10211436c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e596b0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e59798);
    *(long **)(unaff_x20 + _DAT_112e59798) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10211436c; end: 102114393; -[SCSCClearMenuActionSheetScopedServicesSaberEntryPoint begin] */

void FUN_10211436c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102114294();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102114394; end: 10211450b;  */

/* WARNING: Possible PIC construction at 0x0001021143fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102114494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102114400) */
/* WARNING: Removing unreachable block (ram,0x000102114498) */
/* WARNING: Removing unreachable block (ram,0x0001021144b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102114394(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e59798);
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



/* Entry: 10211450c; end: 102114513;  */

void FUN_10211450c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102114514; end: 102114547; -[SCSCClearMenuActionSheetScopedServicesSaberEntryPoint end] */

void FUN_102114514(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102114394();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102114548; end: 102114667;  */

void FUN_102114548(long param_1,long param_2,long param_3)

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
                        "ClearMenuActionSheetScopeGraphBridge/SCSCClearMenuActionSheetScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102114668);
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



/* Entry: 102114668; end: 102114713; -[SCSCClearMenuActionSheetScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102114668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102114548(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102114714; end: 102114773; -[SCSCClearMenuActionSheetScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102114714(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e59790,0);
  *(undefined8 *)(param_1 + _DAT_112e59798) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102114774; end: 1021147a7;  */

void FUN_102114774(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021147a8; end: 1021147df; -[SCSCClearMenuActionSheetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021147a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e59790);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e59798));
  return;
}



/* Entry: 1021147e0; end: 1021147ff;  */

void FUN_1021147e0(void)

{
  func_0x000107c61168(&PTR_PTR_11281eaa0);
  return;
}



/* Entry: 102114800; end: 10211484b;  */

void FUN_102114800(undefined8 param_1)

{
  func_0x0001000285a8(0x112e597c8,&UNK_10da5e430);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10211484c,param_1);
  return;
}



/* Entry: 10211484c; end: 1021148b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211484c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102114c0c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e597d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021148b4; end: 1021148ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021148b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e597d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102114900; end: 102114a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102114900(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126a9ea0;
  func_0x000107c610f8();
  func_0x0001006732c8(param_2,*(undefined8 *)(param_2 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c464cc();
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(apuStack_78[0]);
  return puVar1;
}



/* Entry: 102114a48; end: 102114bcb; -[_TtC32SCClearMenuActionSheetScopeProxy42SCClearMenuActionSheetScopeBuilderServices buildWithDelegate:reportPagePresenter:alertDialogUIContainer:identifier:conversationId:recipientSnapchatter:source:cellViewPosition:chatPageEnterSource:hasLowMutualFriends:isInMyContacts:] */

void FUN_102114a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_80,param_4);
  func_0x000107c615e8(param_4);
  uVar1 = param_6;
  func_0x000107c5faec(param_6);
  uVar4 = param_2;
  func_0x000107c61170(param_6);
  uVar2 = param_7;
  func_0x000107c5faec(param_7);
  func_0x000107c61170(param_7);
  uVar3 = param_3;
  FUN_102114900(param_3,auStack_80,param_5,uVar1,param_2,uVar2,uVar4,param_8,param_9,param_10,
                param_11,param_12);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar4);
  func_0x000100183ab8(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102114bcc; end: 102114bfb;  */

void FUN_102114bcc(void)

{
  FUN_102114c0c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102114bfc; end: 102114c0b; -[_TtC32SCClearMenuActionSheetScopeProxy42SCClearMenuActionSheetScopeBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102114bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e597d0));
  return;
}



/* Entry: 102114c0c; end: 102114c2b;  */

void FUN_102114c0c(void)

{
  func_0x000107c61168(&PTR_PTR_11281eb60);
  return;
}



/* Entry: 102114c2c; end: 102114c4b;  */

undefined1  [16] FUN_102114c2c(void)

{
  return ZEXT816(0x1104cc920);
}



/* Entry: 102114c4c; end: 102114ca7;  */

void FUN_102114c4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c(param_3);
  func_0x000107c61434();
  FUN_102117174();
  func_0x000107c61574(param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 102114ca8; end: 102114d23;  */

uint FUN_102114ca8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434(uVar3);
  func_0x0001000f66f0(uVar2,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  return ((uint)uVar2 ^ 0xffffffff) & 1;
}



/* Entry: 102114d24; end: 102115727;  */

void FUN_102114d24(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  undefined **ppuVar21;
  long lVar22;
  ulong uVar23;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined **ppuStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  ulong *puStack_120;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  
  ppuStack_178 = (undefined **)*unaff_x20;
  lVar4 = 0;
  uStack_150 = param_2;
  uStack_148 = param_3;
  func_0x000107c5f7fc();
  lVar22 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar20 = (long)&ppuStack_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_160 = lVar20;
  func_0x000107c5f824();
  lStack_138 = *(long *)(lVar5 + -8);
  lStack_130 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_138 + 0x40));
  lVar20 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_140 = lVar20;
  func_0x000107c5f804();
  uVar23 = *(ulong *)(lVar5 + -8);
  lStack_158 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar23 + 0x40));
  lStack_168 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_198 = unaff_x20[3];
  func_0x000100087bd4(0x1021173d4,&puStack_b0,PTR___sytN_11034f1b0 + 8);
  lStack_190 = 0;
  uVar1 = unaff_x20[6];
  uVar2 = unaff_x20[7];
  uVar6 = uVar1;
  func_0x0001000f66f0(uVar1,uVar2,param_1);
  uStack_170 = CONCAT44(uStack_170._4_4_,(int)uVar6);
  uStack_188 = uVar1;
  uStack_180 = uVar2;
  if ((uVar6 & 1) == 0) {
    puVar9 = param_1;
    func_0x000107c61434();
    puVar8 = param_1;
  }
  else {
    puVar7 = (ulong *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61534();
    puVar7[3] = 2;
    puVar7[2] = 1;
    puVar9 = puVar7 + 4;
    *puVar9 = uVar1;
    puVar7[5] = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c61434(param_1);
    puVar8 = puVar7;
    FUN_1021167e8(puVar7,param_1);
    func_0x000107c61588(puVar7);
    func_0x000107c61408(puVar9,puVar7[2],PTR___sSSN_11034da80);
  }
  func_0x000107c60f34();
  puVar10 = &UNK_1104cca10;
  puStack_120 = puVar9;
  func_0x000107c613fc(&UNK_1104cca10,0x18,7);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined **)(puVar10 + 0x10) = puVar11;
  puVar11 = &UNK_1104cca38;
  func_0x000107c613fc(&UNK_1104cca38,0x18,7);
  FUN_10211d5f0();
  *(undefined **)(puVar11 + 0x10) = puVar12;
  uVar13 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  uStack_128 = uVar13;
  if (puVar8[2] != 0) {
    lVar20 = unaff_x20[4];
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar5 = lStack_190;
    if (lVar20 != 0) {
      lStack_1a8 = lVar22;
      lStack_1a0 = lVar4;
      func_0x000107c60f38(puStack_120);
      ppuVar21 = (undefined **)puVar8[2];
      ppuVar14 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (ppuVar21 != (undefined **)0x0) {
        func_0x000107c61434(puVar8);
        ppuVar14 = ppuVar21;
        func_0x00010109b448(ppuVar21,0);
        ppuVar15 = &puStack_b0;
        func_0x00010109b930(ppuVar15,ppuVar14 + 4,ppuVar21,puVar8);
        func_0x00010109bac0(puStack_b0,uStack_a8,unaff_x20,param_1,uStack_90);
        if (ppuVar15 != ppuVar21) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102115034);
          (*pcVar3)();
        }
      }
      ppuVar21 = ppuVar14;
      func_0x000107c5fc48(ppuVar14,PTR___sSSN_11034da80);
      ppuStack_1b0 = ppuVar21;
      func_0x000107c61574(ppuVar14);
      puVar12 = &UNK_1104ccab0;
      func_0x000107c613fc(&UNK_1104ccab0,0x18,7);
      func_0x000107c61644(puVar12 + 0x10);
      puVar16 = &UNK_1104ccb78;
      func_0x000107c613fc(&UNK_1104ccb78,0x48,7);
      puVar9 = puStack_120;
      uVar13 = uStack_128;
      *(undefined **)(puVar16 + 0x10) = puVar12;
      *(ulong **)(puVar16 + 0x18) = puVar8;
      *(undefined8 *)(puVar16 + 0x20) = uStack_128;
      *(undefined **)(puVar16 + 0x28) = puVar11;
      *(undefined **)(puVar16 + 0x30) = puVar10;
      *(ulong **)(puVar16 + 0x38) = puStack_120;
      *(undefined ***)(puVar16 + 0x40) = ppuStack_178;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      ppuVar21 = &puStack_b0;
      func_0x000107c60bc4(ppuVar21);
      func_0x000107c61434(puVar8);
      func_0x000107c6157c(uVar13);
      func_0x000107c6157c(puVar11);
      func_0x000107c6157c(puVar10);
      func_0x000107c61174();
      func_0x000107c61574(puVar16);
      puVar12 = &UNK_1104ccab0;
      func_0x000107c613fc(&UNK_1104ccab0,0x18,7);
      func_0x000107c61644(puVar12 + 0x10);
      puVar16 = &UNK_1104ccbc8;
      func_0x000107c613fc(&UNK_1104ccbc8,0x28,7);
      *(undefined **)(puVar16 + 0x10) = puVar12;
      *(ulong **)(puVar16 + 0x18) = puVar8;
      *(ulong **)(puVar16 + 0x20) = puVar9;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      ppuVar15 = &puStack_b0;
      func_0x000107c60bc4(ppuVar15);
      func_0x000107c61174(puVar9);
      func_0x000107c61574(puVar16);
      ppuVar14 = ppuStack_1b0;
      func_0x000107c43f18(lVar20);
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c60bd0(ppuVar21);
      func_0x000107c615e8(lVar20);
      func_0x000107c61170(ppuVar14);
      lVar4 = lStack_1a0;
      lVar22 = lStack_1a8;
      goto LAB_102115260;
    }
    lStack_190 = lVar5;
    if (puVar8[2] != 0) {
      func_0x000100087bd4(0x1021173ec,&puStack_b0,PTR___sytN_11034f1b0 + 8);
      lStack_190 = lVar5;
    }
  }
  func_0x000107c6142c(puVar8);
LAB_102115260:
  if ((uStack_170 & 1) != 0) {
    lVar5 = unaff_x20[5];
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar9 = puStack_120;
    if (lVar5 == 0) {
      lVar5 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(ulong *)(lVar5 + 0x20) = uStack_188;
      *(ulong *)(lVar5 + 0x28) = uStack_180;
      func_0x000107c61434();
      lVar20 = lVar5;
      func_0x000100111634();
      func_0x000107c61588(lVar5);
      func_0x000100bcb1dc((ulong *)(lVar5 + 0x20));
      func_0x000100087bd4(FUN_10211776c,&puStack_b0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(lVar20);
    }
    else {
      lStack_190 = lVar5;
      uStack_170 = uVar23;
      func_0x000107c60f38(puStack_120);
      puVar12 = &UNK_1104ccab0;
      func_0x000107c613fc(&UNK_1104ccab0,0x18,7);
      func_0x000107c61644(puVar12 + 0x10);
      puVar16 = &UNK_1104ccad8;
      func_0x000107c613fc(&UNK_1104ccad8,0x50,7);
      uVar13 = uStack_128;
      uVar2 = uStack_180;
      uVar1 = uStack_188;
      *(undefined **)(puVar16 + 0x10) = puVar12;
      *(ulong *)(puVar16 + 0x18) = uStack_188;
      *(ulong *)(puVar16 + 0x20) = uStack_180;
      *(undefined8 *)(puVar16 + 0x28) = uStack_128;
      *(undefined **)(puVar16 + 0x30) = puVar11;
      *(undefined **)(puVar16 + 0x38) = puVar10;
      *(ulong **)(puVar16 + 0x40) = puVar9;
      *(undefined ***)(puVar16 + 0x48) = ppuStack_178;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      ppuVar14 = &puStack_b0;
      func_0x000107c60bc4();
      ppuStack_178 = ppuVar14;
      func_0x000107c61438(uVar2,2);
      func_0x000107c6157c(uVar13);
      func_0x000107c6157c(puVar11);
      func_0x000107c6157c(puVar10);
      func_0x000107c61174();
      func_0x000107c61574(puVar16);
      puVar12 = &UNK_1104ccab0;
      func_0x000107c613fc(&UNK_1104ccab0,0x18,7);
      func_0x000107c61644(puVar12 + 0x10);
      puVar16 = &UNK_1104ccb28;
      func_0x000107c613fc(&UNK_1104ccb28,0x30,7);
      *(undefined **)(puVar16 + 0x10) = puVar12;
      *(ulong *)(puVar16 + 0x18) = uVar1;
      *(ulong *)(puVar16 + 0x20) = uVar2;
      *(ulong **)(puVar16 + 0x28) = puVar9;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      ppuVar21 = &puStack_b0;
      func_0x000107c60bc4(ppuVar21);
      uVar23 = uStack_170;
      func_0x000107c61174(puVar9);
      func_0x000107c61574(puVar16);
      ppuVar14 = ppuStack_178;
      lVar5 = lStack_190;
      func_0x000107c44160(lStack_190);
      func_0x000107c60bd0(ppuVar21);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c615e8(lVar5);
    }
  }
  func_0x00010211770c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  lVar20 = lStack_158;
  lVar5 = lStack_168;
  (**(code **)(uVar23 + 0x68))
            (lStack_168,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
             lStack_158);
  lVar17 = lVar5;
  func_0x000107c5fff0(lVar5);
  (**(code **)(uVar23 + 8))(lVar5,lVar20);
  puVar12 = &UNK_1104cca60;
  func_0x000107c613fc(&UNK_1104cca60,0x30,7);
  uVar13 = uStack_148;
  *(undefined8 *)(puVar12 + 0x10) = uStack_150;
  *(undefined8 *)(puVar12 + 0x18) = uStack_148;
  *(undefined **)(puVar12 + 0x20) = puVar10;
  *(undefined **)(puVar12 + 0x28) = puVar11;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  ppuVar14 = &puStack_b0;
  func_0x000107c60bc4(ppuVar14);
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(uVar13);
  lVar20 = lStack_140;
  func_0x000107c5f808(lStack_140);
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = 0x112d4af88;
  func_0x0001021176cc(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar18 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar19 = uVar18;
  func_0x0001001c7f30();
  lVar5 = lStack_160;
  func_0x000107c60264(lStack_160,&puStack_b8,uVar18,uVar19,lVar4,uVar13);
  puVar9 = puStack_120;
  func_0x000107c5ffb8(lVar20,lVar5,lVar17,ppuVar14);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c61574(uStack_128);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar17);
  (**(code **)(lVar22 + 8))(lVar5,lVar4);
  (**(code **)(lStack_138 + 8))(lVar20,lStack_130);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar12);
  return;
}



/* Entry: 102115728; end: 10211578b;  */

void FUN_102115728(long param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0x21,0);
  func_0x000107c61434(param_2);
  func_0x00010105ba6c();
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 10211578c; end: 1021158e3;  */

void FUN_10211578c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  uStack_e8 = param_9;
  uStack_e0 = param_5;
  uStack_d8 = param_8;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lStack_c0 = param_3;
    uStack_b8 = param_4;
    func_0x000100087bd4(0x102117794,auStack_d0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_3);
  }
  func_0x000107c5eea0(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar2 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  uStack_98 = uStack_e8;
  lStack_c0 = param_4;
  uStack_b8 = param_2;
  lStack_b0 = param_6 + 0x10;
  uStack_a8 = param_1;
  lStack_a0 = param_7 + 0x10;
  func_0x000100087bd4(FUN_1021174b8,auStack_d0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c60f3c(uStack_d8);
  return;
}



/* Entry: 1021158e4; end: 102115ec7;  */

void FUN_1021158e4(double param_1,long param_2,long param_3,ulong *param_4,ulong *param_5)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  double dVar21;
  undefined1 auStack_88 [24];
  
  uVar12 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)(param_2 + 0x38);
  func_0x000107c61434();
  lVar20 = 0;
joined_r0x000102115980:
  do {
    while (uVar19 == 0) {
      bVar5 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102115ea4);
        (*pcVar4)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar20) {
        func_0x000107c61574(param_2);
        return;
      }
      uVar19 = ((ulong *)(param_2 + 0x38))[lVar20];
    }
    uVar14 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    puVar2 = (ulong *)(*(long *)(param_2 + 0x30) + LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) * 0x10 +
                      lVar20 * 0x400);
    uVar14 = *puVar2;
    puVar3 = (undefined *)puVar2[1];
    lVar18 = *(long *)(param_3 + 0x10);
    func_0x000107c61434(puVar3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar18 != 0) {
      func_0x000107c61434(param_3);
      uVar8 = uVar14;
      puVar16 = puVar3;
      func_0x000100029284();
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (((ulong)puVar16 & 1) != 0) {
        puVar6 = *(undefined **)(*(long *)(param_3 + 0x38) + uVar8 * 8);
        func_0x000107c61434();
      }
      func_0x000107c6142c(param_3);
    }
    func_0x000107c61428(param_4,auStack_88,0x21,0);
    func_0x000107c61434(puVar6);
    uVar7 = *param_4;
    func_0x000107c61558();
    uVar15 = *param_4;
    *param_4 = 0x8000000000000000;
    uVar8 = uVar14;
    puVar16 = puVar3;
    func_0x000100029284();
    uVar13 = (ulong)~(uint)puVar16 & 1;
    lVar18 = *(long *)(uVar15 + 0x10) + uVar13;
    if (SCARRY8(*(long *)(uVar15 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102115eac);
      (*pcVar4)();
    }
    if (*(long *)(uVar15 + 0x18) < lVar18) {
      FUN_10211f374(lVar18,uVar7);
      uVar8 = uVar14;
      puVar9 = puVar3;
      func_0x000100029284();
      if (((uint)puVar16 & 1) != ((uint)puVar9 & 1)) {
LAB_102115eb8:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102115ec8);
        (*pcVar4)();
      }
LAB_102115acc:
      if (((ulong)puVar16 & 1) == 0) goto LAB_102115b08;
LAB_102115ad4:
      uVar11 = *(undefined8 *)(*(long *)(uVar15 + 0x38) + uVar8 * 8);
      *(undefined **)(*(long *)(uVar15 + 0x38) + uVar8 * 8) = puVar6;
      func_0x000107c6142c(uVar11);
    }
    else {
      puVar9 = puVar16;
      if ((uVar7 & 1) != 0) goto LAB_102115acc;
      FUN_10211f070();
      if (((ulong)puVar16 & 1) != 0) goto LAB_102115ad4;
LAB_102115b08:
      lVar18 = uVar15 + (uVar8 >> 6) * 8;
      *(ulong *)(lVar18 + 0x40) = *(ulong *)(lVar18 + 0x40) | 1L << (uVar8 & 0x3f);
      puVar2 = (ulong *)(*(long *)(uVar15 + 0x30) + uVar8 * 0x10);
      *puVar2 = uVar14;
      puVar2[1] = (ulong)puVar3;
      *(undefined **)(*(long *)(uVar15 + 0x38) + uVar8 * 8) = puVar6;
      if (SCARRY8(*(long *)(uVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102115eb0);
        (*pcVar4)();
      }
      *(long *)(uVar15 + 0x10) = *(long *)(uVar15 + 0x10) + 1;
      func_0x000107c61434(puVar3);
    }
    uVar8 = *param_4;
    *param_4 = uVar15;
    func_0x000107c6142c(uVar8);
    func_0x000107c614a8(auStack_88);
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar16 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar16 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar16 = puVar6;
      }
      func_0x000107c60480();
    }
    uVar19 = uVar19 - 1 & uVar19;
    if (puVar16 == (undefined *)0x0) {
      func_0x000107c6142c(puVar3);
      func_0x000107c6142c(puVar6);
    }
    else {
      uVar8 = 0;
      do {
        if (((ulong)puVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102115ea8);
            (*pcVar4)();
          }
          uVar7 = *(ulong *)(puVar6 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
          puVar10 = puVar9;
        }
        else {
          uVar7 = uVar8;
          puVar10 = puVar6;
          FUN_10211662c(uVar8,puVar6,&PTR_PTR_1126b4a30,0x112d6c340);
        }
        puVar1 = (undefined *)(uVar8 + 1);
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102115ea0);
          (*pcVar4)();
        }
        uVar13 = uVar7;
        func_0x000107c5bbec();
        uVar15 = uVar7;
        func_0x000107c4237c();
        dVar21 = (double)(long)uVar13 + (double)(long)uVar15;
        bVar5 = false;
        if (((double)(long)uVar13 <= param_1) && (bVar5 = false, !NAN(param_1) && !NAN(dVar21))) {
          bVar5 = param_1 < dVar21;
        }
        puVar9 = puVar10;
        if (bVar5) {
          uVar13 = uVar7;
          func_0x000107c424f8();
          func_0x000107c61180();
          uVar15 = uVar13;
          func_0x000107c5faec();
          puVar9 = puVar10;
          func_0x000107c61170(uVar13);
          func_0x000107c6142c(puVar10);
          uVar13 = uVar15 & 0xffffffffffff;
          if (((ulong)puVar10 & 0x2000000000000000) != 0) {
            uVar13 = (ulong)puVar10 >> 0x38 & 0xf;
          }
          if (uVar13 != 0) {
            uVar8 = uVar7;
            func_0x000107c424f8();
            func_0x000107c61180();
            uVar13 = uVar8;
            func_0x000107c5faec();
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar7);
            func_0x000107c6142c(puVar6);
            func_0x000107c61428(param_5,auStack_88,0x21,0);
            uVar7 = *param_5;
            func_0x000107c61558();
            uVar17 = *param_5;
            *param_5 = 0x8000000000000000;
            uVar8 = uVar14;
            puVar6 = puVar3;
            func_0x000100029284();
            uVar15 = (ulong)~(uint)puVar6 & 1;
            lVar18 = *(long *)(uVar17 + 0x10) + uVar15;
            if (SCARRY8(*(long *)(uVar17 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102115eb4);
              (*pcVar4)();
            }
            if (*(long *)(uVar17 + 0x18) < lVar18) {
              func_0x0001001833c8(lVar18,uVar7);
              uVar8 = uVar14;
              puVar16 = puVar3;
              func_0x000100029284();
              if (((uint)puVar6 & 1) != ((uint)puVar16 & 1)) goto LAB_102115eb8;
            }
            else if ((uVar7 & 1) == 0) {
              func_0x000100184498();
            }
            if (((ulong)puVar6 & 1) == 0) {
              lVar18 = uVar17 + (uVar8 >> 6) * 8;
              *(ulong *)(lVar18 + 0x40) = *(ulong *)(lVar18 + 0x40) | 1L << (uVar8 & 0x3f);
              puVar2 = (ulong *)(*(long *)(uVar17 + 0x30) + uVar8 * 0x10);
              *puVar2 = uVar14;
              puVar2[1] = (ulong)puVar3;
              puVar2 = (ulong *)(*(long *)(uVar17 + 0x38) + uVar8 * 0x10);
              *puVar2 = uVar13;
              puVar2[1] = (ulong)puVar9;
              if (SCARRY8(*(long *)(uVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102115eb8);
                (*pcVar4)();
              }
              *(long *)(uVar17 + 0x10) = *(long *)(uVar17 + 0x10) + 1;
            }
            else {
              puVar2 = (ulong *)(*(long *)(uVar17 + 0x38) + uVar8 * 0x10);
              uVar14 = puVar2[1];
              *puVar2 = uVar13;
              puVar2[1] = (ulong)puVar9;
              func_0x000107c6142c(puVar3);
              func_0x000107c6142c(uVar14);
            }
            uVar14 = *param_5;
            *param_5 = uVar17;
            func_0x000107c6142c(uVar14);
            func_0x000107c614a8(auStack_88);
            goto joined_r0x000102115980;
          }
        }
        func_0x000107c61170(uVar7);
        uVar8 = uVar8 + 1;
      } while (puVar1 != puVar16);
      func_0x000107c6142c(puVar3);
      func_0x000107c6142c(puVar6);
    }
  } while( true );
}



/* Entry: 102115ec8; end: 102115fd3;  */

void FUN_102115ec8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0x112e598d8;
  func_0x0001000285a8(0x112e598d8,&UNK_10da5e608);
  func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102115fd4; end: 1021161fb;  */

void FUN_102115fd4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_140 [8];
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_90 [32];
  
  uStack_128 = param_10;
  lVar1 = 0;
  uStack_130 = param_2;
  uStack_120 = param_6;
  uStack_118 = param_9;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61534();
    param_1 = 1;
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_4;
    *(undefined8 *)(lVar2 + 0x28) = param_5;
    func_0x000107c61434(param_5);
    lVar3 = lVar2;
    func_0x000100111634();
    lStack_138 = lVar4;
    func_0x000107c61588(lVar2);
    func_0x000100bcb1dc((undefined8 *)(lVar2 + 0x20));
    lStack_100 = param_3;
    lStack_f8 = lVar3;
    func_0x000100087bd4(0x1021177bc,auStack_110,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_3);
    lVar4 = lStack_138;
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c5eea0(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar4 + 8))(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  uStack_e8 = uStack_130;
  uStack_d0 = uStack_128;
  lStack_100 = param_7 + 0x10;
  lStack_f8 = param_4;
  uStack_f0 = param_5;
  uStack_e0 = param_1;
  lStack_d8 = param_8 + 0x10;
  func_0x000100087bd4(0x1021174dc,auStack_110,PTR___sytN_11034f1b0 + 8);
  func_0x000107c60f3c(uStack_118);
  return;
}



/* Entry: 1021161fc; end: 10211633f;  */

void FUN_1021161fc(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2,auStack_78,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_5);
  uVar1 = *param_2;
  func_0x000107c61558(uVar1);
  uVar3 = *param_2;
  *param_2 = 0x8000000000000000;
  lVar2 = param_3;
  FUN_102116ccc(param_5,param_3,param_4,uVar1);
  func_0x000107c6142c(param_4);
  *param_2 = uVar3;
  func_0x000107c614a8(auStack_78);
  FUN_102117500(param_1,param_5);
  if (lVar2 != 0) {
    func_0x000107c61428(param_6,auStack_78,0x21,0);
    func_0x000107c61434(param_4);
    uVar1 = *param_6;
    func_0x000107c61558(uVar1);
    uVar3 = *param_6;
    *param_6 = 0x8000000000000000;
    func_0x00010018433c(param_5,lVar2,param_3,param_4,uVar1);
    func_0x000107c6142c(param_4);
    *param_6 = uVar3;
    func_0x000107c614a8(auStack_78);
  }
  return;
}



/* Entry: 102116340; end: 102116447;  */

void FUN_102116340(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_4;
    func_0x000107c61434(param_4);
    lVar2 = lVar1;
    func_0x000100111634();
    func_0x000107c61588(lVar1);
    func_0x000100bcb1dc((undefined8 *)(lVar1 + 0x20));
    lStack_b0 = param_2;
    lStack_a8 = lVar2;
    func_0x000100087bd4(0x1021177a8,auStack_c0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c60f3c(param_5);
  return;
}



/* Entry: 102116448; end: 1021164e7;  */

void FUN_102116448(code *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c61428(param_4 + 0x10,auStack_70,0,0);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  (*param_1)(uVar2,uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1021164e8; end: 102116547;  */

void FUN_1021164e8(long param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0x21,0);
  func_0x0001012eef50(param_2);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 102116548; end: 1021165ab;  */

void FUN_102116548(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021165ac; end: 102116613;  */

undefined8 FUN_1021165ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uVar1 = 0x112d5d480;
  uStack_50 = param_1;
  func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
  func_0x000100087bd4(&uStack_38,FUN_102116614,auStack_60,uVar1);
  return uStack_38;
}



/* Entry: 102116614; end: 10211662b;  */

void FUN_102116614(void)

{
  long unaff_x20;
  
  FUN_102114c4c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10211662c; end: 1021167e7;  */

ulong FUN_10211662c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102116710);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102116714);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010211770c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021167e8);
  (*pcVar2)();
}



/* Entry: 1021167e8; end: 102116aeb;  */

/* WARNING: Removing unreachable block (ram,0x000102116a98) */
/* WARNING: Removing unreachable block (ram,0x000102116aa8) */

undefined * FUN_1021167e8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined *puStack_a0;
  ulong uStack_98;
  long *plStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x10) == 0) {
    func_0x000107c61574(param_2);
    puVar8 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x10);
    lStack_c8 = param_1;
    func_0x000107c61434();
    if (lVar13 != 0) {
      lVar14 = 0;
      puVar1 = param_2 + 0x38;
      do {
        puVar2 = (ulong *)(param_1 + 0x20 + lVar14 * 0x10);
        uVar9 = *puVar2;
        uVar12 = puVar2[1];
        lVar14 = lVar14 + 1;
        lStack_c0 = lVar14;
        func_0x000107c6068c(auStack_b0,*(undefined8 *)(param_2 + 0x28));
        func_0x000107c61434(uVar12);
        puVar6 = auStack_b0;
        func_0x000107c5fb58(puVar6,uVar9,uVar12);
        func_0x000107c606a8();
        uVar10 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
        uVar11 = (ulong)puVar6 & (uVar10 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
          do {
            puVar2 = (ulong *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
            uVar7 = *puVar2;
            uVar3 = puVar2[1];
            if ((uVar7 == uVar9 && uVar3 == uVar12) ||
               (func_0x000107c605b8(uVar7,uVar3,uVar9,uVar12,0), (uVar7 & 1) != 0)) {
              func_0x000107c6142c(uVar12);
              uVar12 = (1L << ((ulong)(byte)param_2[0x20] & 0x3f)) + 0x3fU >> 6;
              plStack_90 = &lStack_c8;
              uVar9 = uVar12 << 3;
              puStack_a0 = param_2;
              uStack_98 = uVar11;
              if ((param_2[0x20] & 0x3f) < 0xe) {
LAB_102116950:
                (*(code *)PTR____chkstk_darwin_11034bd40)();
                puVar8 = auStack_d0 + -(uVar9 + 0xf & 0x1ffffffffffffff0);
                func_0x000107c610b4(puVar8,puVar1);
                FUN_102116aec(puVar8,uVar12,param_2,uVar11,&lStack_c8);
              }
              else {
                iVar5 = 2;
                func_0x000100029b9c(2,0xf,4,0);
                if ((iVar5 != 0) &&
                   (uVar10 = uVar9, func_0x000107c61594(uVar9,8), (uVar10 & 1) != 0))
                goto LAB_102116950;
                func_0x000107c6158c(uVar9,0xffffffffffffffff);
                if (uVar9 == 0) goto LAB_102116a94;
                func_0x000107c610b4();
                FUN_102117488(&puStack_b8,uVar9,uVar12);
                func_0x000107c61590(uVar9,0xffffffffffffffff,0xffffffffffffffff);
                puVar8 = puStack_b8;
              }
              func_0x000107c61574(param_2);
              func_0x000107c6142c(lStack_c8);
              goto LAB_1021169cc;
            }
            uVar11 = uVar11 + 1 & ~uVar10;
          } while ((*(ulong *)(puVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
        }
        func_0x000107c6142c(uVar12);
      } while (lVar14 != lVar13);
    }
    func_0x000107c6142c(param_1);
    puVar8 = param_2;
  }
LAB_1021169cc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  func_0x000107c60e78();
LAB_102116a94:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102116a98);
  (*pcVar4)();
}



/* Entry: 102116aec; end: 102116ccb;  */

void FUN_102116aec(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_a8 [72];
  
  lVar9 = *(long *)(param_3 + 0x10);
  uVar10 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar10) = *(ulong *)(param_1 + uVar10) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar9 = lVar9 + -1;
  do {
    while( true ) {
      uVar10 = param_5[1];
      uVar11 = *(ulong *)(*param_5 + 0x10);
      if (uVar10 == uVar11) {
        func_0x000107c6157c(param_3);
        func_0x0001010aeef0(param_1,param_2,lVar9,param_3);
        return;
      }
      if (uVar11 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102116cc8);
        (*pcVar4)();
      }
      lVar1 = *param_5 + uVar10 * 0x10;
      uVar11 = *(ulong *)(lVar1 + 0x20);
      uVar3 = *(ulong *)(lVar1 + 0x28);
      param_5[1] = uVar10 + 1;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_3 + 0x28));
      func_0x000107c61434(uVar3);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar3);
      func_0x000107c606a8();
      uVar10 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar14 = (ulong)puVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar13 = uVar14 >> 6;
      uVar12 = 1L << (uVar14 & 0x3f);
      if ((uVar12 & *(ulong *)(param_3 + 0x38 + uVar13 * 8)) != 0) break;
LAB_102116c5c:
      func_0x000107c6142c(uVar3);
    }
    puVar2 = (ulong *)(*(long *)(param_3 + 0x30) + uVar14 * 0x10);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    if (uVar7 != uVar11 || uVar8 != uVar3) {
      do {
        func_0x000107c605b8(uVar7,uVar8,uVar11,uVar3,0);
        if ((uVar7 & 1) != 0) break;
        uVar14 = uVar14 + 1 & ~uVar10;
        uVar13 = uVar14 >> 6;
        uVar12 = 1L << (uVar14 & 0x3f);
        if ((uVar12 & *(ulong *)(param_3 + 0x38 + uVar13 * 8)) == 0) goto LAB_102116c5c;
        puVar2 = (ulong *)(*(long *)(param_3 + 0x30) + uVar14 * 0x10);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
      } while ((uVar7 != uVar11) || (uVar8 != uVar3));
    }
    func_0x000107c6142c(uVar3);
    uVar10 = *(ulong *)(param_1 + uVar13 * 8);
    *(ulong *)(param_1 + uVar13 * 8) = uVar10 & (uVar12 ^ 0xffffffffffffffff);
    if ((uVar10 & uVar12) != 0) {
      bVar5 = SBORROW8(lVar9,1);
      lVar9 = lVar9 + -1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102116ccc);
        (*pcVar4)();
      }
      if (lVar9 == 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 102116ccc; end: 102116de7;  */

void FUN_102116ccc(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102116da4);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    FUN_10211f374(lVar4,param_4 & 1);
    uVar7 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102116d6c);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10211f070();
    lVar4 = *unaff_x20;
    goto joined_r0x000102116db8;
  }
  lVar4 = *unaff_x20;
joined_r0x000102116db8:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  FUN_10211efc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102116de8; end: 102116f37;  */

void FUN_102116de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,uint param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar2 = param_4;
  uVar4 = param_5;
  func_0x000100029284();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102116ee4);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar5) {
    func_0x00010211f610(lVar5,param_6 & 1);
    uVar8 = param_5;
    func_0x000100029284();
    lVar2 = param_4;
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102116e94);
      (*pcVar1)();
    }
  }
  else if ((param_6 & 1) == 0) {
    func_0x00010211f1e0();
    lVar5 = *unaff_x20;
    goto joined_r0x000102116ef8;
  }
  lVar5 = *unaff_x20;
joined_r0x000102116ef8:
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 0x18);
    uVar3 = puVar7[1];
    *puVar7 = param_1;
    puVar7[1] = param_2;
    *(byte *)(puVar7 + 2) = (byte)param_3 & 1;
    *(byte *)((long)puVar7 + 0x11) = (byte)((ulong)param_3 >> 8) & 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  func_0x00010211f010();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_5);
  return;
}



/* Entry: 102116f38; end: 102117173;  */

void FUN_102116f38(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  uVar13 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_3 + 0x38);
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  lVar12 = 0;
  lVar9 = 0;
LAB_102116fd4:
  do {
    if (uVar14 == 0) {
      do {
        lVar15 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102117174);
          (*pcVar4)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) {
          func_0x000107c6157c(param_3);
          func_0x0001010aeef0(param_1,param_2,lVar12,param_3);
          return;
        }
        uVar14 = ((ulong *)(param_3 + 0x38))[lVar15];
        lVar9 = lVar9 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar15 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8);
    lVar17 = *(long *)(param_4 + 0x10);
    lVar9 = lVar15;
    if (*(long *)(lVar17 + 0x10) != 0) {
      puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + (uVar8 | lVar15 << 6) * 0x10);
      uVar11 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c6068c(auStack_c0,*(undefined8 *)(lVar17 + 0x28));
      func_0x000107c61434(uVar2);
      func_0x000107c61434(lVar17);
      puVar6 = auStack_c0;
      func_0x000107c5fb58(puVar6,uVar11,uVar2);
      func_0x000107c606a8();
      uVar10 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
      uVar16 = (ulong)puVar6 & (uVar10 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
        do {
          puVar1 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar16 * 0x10);
          uVar7 = *puVar1;
          uVar3 = puVar1[1];
          if ((uVar7 == uVar11 && uVar3 == uVar2) ||
             (func_0x000107c605b8(uVar7,uVar3,uVar11,uVar2,0), (uVar7 & 1) != 0)) {
            func_0x000107c6142c(uVar2);
            func_0x000107c6142c(lVar17);
            goto LAB_102116fd4;
          }
          uVar16 = uVar16 + 1 & ~uVar10;
        } while ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
      }
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(lVar17);
    }
    uVar11 = (uVar8 & 0xffffffffffffffc0 | lVar15 << 6) >> 3;
    *(ulong *)(param_1 + uVar11) = *(ulong *)(param_1 + uVar11) | 1L << (uVar8 & 0x3f);
    bVar5 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102117130);
      (*pcVar4)();
    }
  } while( true );
}



/* Entry: 102117174; end: 1021173b7;  */

ulong FUN_102117174(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong unaff_x21;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_70;
  ulong auStack_68 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar6 = uVar5 * 8;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar4 = uVar6, func_0x000107c61594(uVar6,8), (uVar4 & 1) == 0)) {
      func_0x000107c6158c(uVar6,0xffffffffffffffff);
      func_0x0001010af89c(auStack_68);
      uVar4 = auStack_68[0];
      if (unaff_x21 != 0) {
        uVar4 = uStack_70;
      }
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x000102117364;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = (long)auStack_68 + (-8 - (uVar6 + 0xf & 0x1ffffffffffffff0));
  func_0x000107c60ee4(uVar4,uVar6);
  func_0x000107c6157c(param_2);
  FUN_102116f38(uVar4,uVar5,param_1,param_2);
  if (unaff_x21 != 0) {
    uVar4 = unaff_x21;
  }
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
joined_r0x000102117364:
  if (unaff_x21 == 0) {
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_1);
    uVar2 = (uint)param_1;
  }
  else {
    iVar1 = 2;
    uStack_70 = uVar4;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&uStack_70,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    uVar2 = (uint)param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    FUN_102114ca8();
    return (ulong)(uVar2 & 1);
  }
  return uVar4;
}



/* Entry: 1021173b8; end: 102117403;  */

uint FUN_1021173b8(uint param_1)

{
  FUN_102114ca8();
  return param_1 & 1;
}



/* Entry: 102117404; end: 10211742b;  */

void FUN_102117404(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_70,0,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar4);
  (*pcVar1)(uVar5,uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 10211742c; end: 10211745b;  */

void FUN_10211742c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102115fd4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10211745c; end: 102117487;  */

void FUN_10211745c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    lVar5 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined8 *)(lVar5 + 0x20) = uVar2;
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    func_0x000107c61434(uVar1);
    lVar6 = lVar5;
    func_0x000100111634();
    func_0x000107c61588(lVar5);
    func_0x000100bcb1dc((undefined8 *)(lVar5 + 0x20));
    lStack_b0 = lVar4;
    lStack_a8 = lVar6;
    func_0x000100087bd4(0x1021177a8,auStack_c0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(lVar4);
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c60f3c(uVar3);
  return;
}



/* Entry: 102117488; end: 1021174b7;  */

void FUN_102117488(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_102116aec(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1021174b8; end: 1021174ff;  */

void FUN_1021174b8(void)

{
  long unaff_x20;
  
  FUN_1021158e4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 102117500; end: 1021176cb;  */

undefined1  [16] FUN_102117500(double param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  if (param_2 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar9 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    uVar8 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102117688);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_2 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
        uVar7 = param_3;
      }
      else {
        uVar4 = uVar8;
        uVar7 = param_2;
        FUN_10211662c(uVar8,param_2,&PTR_PTR_1126b4a30,0x112d6c340);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102117684);
        (*pcVar2)();
      }
      uVar5 = uVar4;
      func_0x000107c5bbec();
      uVar6 = uVar4;
      func_0x000107c4237c();
      dVar10 = (double)(long)uVar5 + (double)(long)uVar6;
      bVar3 = false;
      if (((double)(long)uVar5 <= param_1) && (bVar3 = false, !NAN(param_1) && !NAN(dVar10))) {
        bVar3 = param_1 < dVar10;
      }
      param_3 = uVar7;
      if (bVar3) {
        uVar5 = uVar4;
        func_0x000107c424f8();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5faec();
        param_3 = uVar7;
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar7);
        uVar5 = uVar6 & 0xffffffffffff;
        if ((uVar7 & 0x2000000000000000) != 0) {
          uVar5 = uVar7 >> 0x38 & 0xf;
        }
        if (uVar5 != 0) {
          uVar9 = uVar4;
          func_0x000107c424f8(uVar4);
          func_0x000107c61180();
          uVar8 = uVar9;
          func_0x000107c5faec();
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar4);
          goto LAB_1021176a8;
        }
      }
      func_0x000107c61170(uVar4);
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar9);
  }
  uVar8 = 0;
  param_3 = 0;
LAB_1021176a8:
  auVar11._8_8_ = param_3;
  auVar11._0_8_ = uVar8;
  return auVar11;
}



/* Entry: 1021176cc; end: 10211774b;  */

void FUN_1021176cc(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10211774c; end: 10211776b;  */

void FUN_10211774c(long param_1,long param_2)

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



/* Entry: 10211776c; end: 1021177cf;  */

void FUN_10211776c(void)

{
  func_0x0001021173ec();
  return;
}



/* Entry: 1021177d0; end: 1021178b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021177d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112e598f0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e598f8;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112e59900) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e59908) = 0;
  lVar1 = _DAT_112e59910;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10211d6ec();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e598e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e598e8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021178b8; end: 102117aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021178b8(undefined8 *param_1,undefined **param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb81f8;
  lVar2 = param_3;
  func_0x000107c5faec();
  if (ppuVar1 == param_2 && lVar2 == param_3) {
    func_0x000107c6142c(lVar2);
LAB_1021179e0:
    func_0x000102117ab0();
  }
  else {
    lVar3 = lVar2;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar2);
    if (((ulong)ppuVar1 & 1) != 0) goto LAB_1021179e0;
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb8218;
    func_0x000107c5faec();
    if (ppuVar1 == param_2 && lVar3 == param_3) {
      func_0x000107c6142c(lVar3);
LAB_102117a18:
      *(undefined1 *)(param_4 + _DAT_112e59900) = 0;
      *(undefined1 *)(param_4 + _DAT_112e59908) = 0;
      lVar2 = _DAT_112e59910;
      func_0x000107c61428(param_4 + _DAT_112e59910,auStack_68,1,0);
      param_5 = *(undefined8 *)(param_4 + lVar2);
      *(undefined **)(param_4 + lVar2) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000107c6142c();
    }
    else {
      lVar2 = lVar3;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar3);
      if (((ulong)ppuVar1 & 1) != 0) goto LAB_102117a18;
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb8178;
      func_0x000107c5faec();
      if (ppuVar1 == param_2 && lVar2 == param_3) {
        func_0x000107c6142c(lVar2);
LAB_102117a6c:
        func_0x000102117ec4();
      }
      else {
        lVar3 = lVar2;
        func_0x000107c605b8();
        func_0x000107c6142c(lVar2);
        if (((ulong)ppuVar1 & 1) != 0) goto LAB_102117a6c;
        ppuVar1 = &PTR____CFConstantStringClassReference_110eb8198;
        func_0x000107c5faec();
        if ((ppuVar1 == param_2) && (lVar3 == param_3)) {
          func_0x000107c6142c(lVar3);
        }
        else {
          func_0x000107c605b8();
          func_0x000107c6142c(lVar3);
          if (((ulong)ppuVar1 & 1) == 0) {
            param_5 = 0;
            goto LAB_1021179ec;
          }
        }
        FUN_10211822c();
      }
    }
  }
  FUN_102118404();
LAB_1021179ec:
  *param_1 = param_5;
  return;
}



/* Entry: 102117ab0; end: 10211822b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102117ab0(undefined1 *param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long unaff_x20;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  long lVar24;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  byte bStack_af;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar3 = _DAT_112e59900;
  if ((*(byte *)(unaff_x20 + _DAT_112e59900) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e59908) = 0;
  }
  *(undefined1 *)(unaff_x20 + lVar3) = 1;
  lVar3 = _DAT_112e59910;
  puVar15 = auStack_80;
  func_0x000107c61428(unaff_x20 + _DAT_112e59910,puVar15,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar10);
  if (param_1 == (undefined1 *)0x0) {
    puStack_98 = (undefined1 *)0x0;
    ppuStack_a0 = (undefined **)0x0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    ppuVar11 = &PTR____CFConstantStringClassReference_110eb82b8;
    func_0x000107c5faec();
    ppuStack_a0 = ppuVar11;
    puStack_98 = puVar15;
    func_0x000107c61434(puVar15);
    puVar16 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_d0,&ppuStack_a0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_102117bc0:
      puStack_98 = (undefined1 *)0x0;
      ppuStack_a0 = (undefined **)0x0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x000107c61434(param_1);
      ppuVar11 = &puStack_d0;
      func_0x000100df95d0(ppuVar11);
      if (((ulong)puVar16 & 1) == 0) {
        func_0x000107c6142c(param_1);
        goto LAB_102117bc0;
      }
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)ppuVar11 * 0x20,&ppuStack_a0);
      func_0x000107c6142c(puVar15);
      puVar15 = param_1;
    }
    func_0x000107c6142c(puVar15);
    func_0x0001007bbff0(&puStack_d0);
    if (lStack_88 != 0) {
      uVar10 = 0x112e590c8;
      func_0x0001000285a8(0x112e590c8,&UNK_10da5e650);
      ppuVar11 = &puStack_d0;
      func_0x000107c6147c(ppuVar11,&ppuStack_a0,PTR___sypN_11034f1a8 + 8,uVar10,6);
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (((ulong)ppuVar11 & 1) != 0) {
        puVar16 = puStack_d0;
      }
      goto joined_r0x000102117c54;
    }
  }
  func_0x00010006e7f4(&ppuStack_a0);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x000102117c54:
  if ((ulong)puVar16 >> 0x3e == 0) {
    puVar22 = *(undefined **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar22 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar16) {
      puVar22 = puVar16;
    }
    func_0x000107c60480();
  }
  if (puVar22 != (undefined *)0x0) {
    uVar23 = 0;
    do {
      if (((ulong)puVar16 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x102117eac);
          (*pcVar9)();
        }
        uVar12 = *(ulong *)(puVar16 + uVar23 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar12 = uVar23;
        func_0x00010210c758(uVar23,puVar16);
      }
      puVar1 = (undefined *)(uVar23 + 1);
      if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102117ea8);
        (*pcVar9)();
      }
      FUN_102118cfc(&puStack_d0,uVar12);
      bVar8 = bStack_af;
      bVar7 = bStack_b0;
      uVar6 = uStack_b8;
      uVar10 = uStack_c0;
      uVar5 = uStack_c8;
      puVar4 = puStack_d0;
      if (uStack_c8 != 0) {
        func_0x000107c61428(unaff_x20 + lVar3,&ppuStack_a0,0x21,0);
        uVar13 = *(ulong *)(unaff_x20 + lVar3);
        func_0x000107c61558();
        lVar21 = *(long *)(unaff_x20 + lVar3);
        *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
        puVar14 = puVar4;
        uVar17 = uVar5;
        lStack_a8 = lVar21;
        func_0x000100029284();
        uVar19 = (ulong)~(uint)uVar17 & 1;
        lVar24 = *(long *)(lVar21 + 0x10) + uVar19;
        if (SCARRY8(*(long *)(lVar21 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x102117eb0);
          (*pcVar9)();
        }
        if (*(long *)(lVar21 + 0x18) < lVar24) {
          func_0x00010211f610(lVar24,uVar13);
          puVar14 = puVar4;
          uVar13 = uVar5;
          func_0x000100029284();
          if (((uint)uVar17 & 1) != ((uint)uVar13 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x102117ec4);
            (*pcVar9)();
          }
LAB_102117de8:
          if ((uVar17 & 1) == 0) goto LAB_102117df0;
LAB_102117c80:
          lVar24 = lStack_a8;
          puVar18 = (undefined8 *)(*(long *)(lStack_a8 + 0x38) + (long)puVar14 * 0x18);
          uVar20 = puVar18[1];
          *puVar18 = uVar10;
          puVar18[1] = uVar6;
          *(byte *)(puVar18 + 2) = bVar7 & 1;
          *(byte *)((long)puVar18 + 0x11) = bVar8 & 1;
          func_0x000107c6142c(uVar5);
          func_0x000107c6142c(uVar20);
        }
        else {
          if ((uVar13 & 1) != 0) goto LAB_102117de8;
          func_0x00010211f1e0();
          if ((uVar17 & 1) != 0) goto LAB_102117c80;
LAB_102117df0:
          lVar24 = lStack_a8 + ((ulong)puVar14 >> 6) * 8;
          *(ulong *)(lVar24 + 0x40) = *(ulong *)(lVar24 + 0x40) | 1L << ((ulong)puVar14 & 0x3f);
          puVar2 = (ulong *)(*(long *)(lStack_a8 + 0x30) + (long)puVar14 * 0x10);
          *puVar2 = (ulong)puVar4;
          puVar2[1] = uVar5;
          puVar18 = (undefined8 *)(*(long *)(lStack_a8 + 0x38) + (long)puVar14 * 0x18);
          *puVar18 = uVar10;
          puVar18[1] = uVar6;
          *(byte *)(puVar18 + 2) = bVar7 & 1;
          *(byte *)((long)puVar18 + 0x11) = bVar8 & 1;
          if (SCARRY8(*(long *)(lStack_a8 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x102117eb4);
            (*pcVar9)();
          }
          *(long *)(lStack_a8 + 0x10) = *(long *)(lStack_a8 + 0x10) + 1;
          lVar24 = lStack_a8;
        }
        *(long *)(unaff_x20 + lVar3) = lVar24;
        func_0x000107c614a8(&ppuStack_a0);
      }
      func_0x000107c61170(uVar12);
      uVar23 = uVar23 + 1;
    } while (puVar1 != puVar22);
  }
  func_0x000107c6142c(puVar16);
  return;
}



/* Entry: 10211822c; end: 102118403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211822c(long param_1,long param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined **ppuStack_98;
  long lStack_90;
  long alStack_88 [5];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (*(char *)(unaff_x20 + _DAT_112e59900) == '\x01') {
    if (param_1 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb82d8;
      func_0x000107c5faec();
      ppuStack_98 = ppuVar1;
      lStack_90 = param_2;
      func_0x000107c61434(param_2);
      puVar6 = PTR___sSSN_11034da80;
      func_0x000107c602d4(alStack_88,&ppuStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      if (*(long *)(param_1 + 0x10) == 0) {
        uStack_58 = 0;
        uStack_60 = 0;
        lStack_48 = 0;
        uStack_50 = 0;
      }
      else {
        func_0x000107c61434(param_1);
        plVar2 = alStack_88;
        func_0x000100df95d0(plVar2);
        if (((ulong)puVar6 & 1) == 0) {
          func_0x000107c6142c(param_1);
          uStack_58 = 0;
          uStack_60 = 0;
          lStack_48 = 0;
          uStack_50 = 0;
        }
        else {
          func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)plVar2 * 0x20,&uStack_60);
          func_0x000107c6142c(param_2);
          param_2 = param_1;
        }
      }
      func_0x000107c6142c(param_2);
      func_0x0001007bbff0(alStack_88);
      if (lStack_48 != 0) {
        uVar3 = 0;
        FUN_102109cc8(0);
        plVar2 = alStack_88;
        puVar7 = &uStack_60;
        func_0x000107c6147c(plVar2,puVar7,PTR___sypN_11034f1a8 + 8,uVar3,6);
        if (((ulong)plVar2 & 1) == 0) {
          return;
        }
        lVar4 = alStack_88[0];
        func_0x000107c3f734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x000107c5faec();
          func_0x000107c61170(lVar4);
          uVar3 = 0x21;
          func_0x000107c61428(unaff_x20 + _DAT_112e59910,alStack_88,0x21,0);
          puVar8 = puVar7;
          FUN_102119244(lVar5,puVar7);
          func_0x000107c614a8(alStack_88);
          func_0x0001021195b0(lVar5,puVar8,uVar3);
          func_0x000107c6142c(puVar7);
        }
        func_0x000107c61170(alStack_88[0]);
        return;
      }
    }
    func_0x00010006e7f4(&uStack_60);
  }
  return;
}



/* Entry: 102118404; end: 102118823;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102118404(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_78 [24];
  
  lVar16 = _DAT_112e59910;
  lVar13 = _DAT_112e59908;
  if ((*(char *)(unaff_x20 + _DAT_112e59900) == '\x01') &&
     ((*(byte *)(unaff_x20 + _DAT_112e59908) & 1) == 0)) {
    func_0x000107c61428(unaff_x20 + _DAT_112e59910,auStack_78,0,0);
    lVar11 = *(long *)(unaff_x20 + lVar16);
    puVar12 = (ulong *)(lVar11 + 0x40);
    uVar18 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar17 = 0xffffffffffffffff;
    if (-uVar18 < 0x40) {
      uVar17 = ~(-1L << (-uVar18 & 0x3f));
    }
    uVar17 = uVar17 & *puVar12;
    func_0x000107c61438(lVar11,2);
    lVar14 = 0;
    lVar2 = lVar14;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while( true ) {
      while (uVar17 != 0) {
        uVar1 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 - 1 & uVar17;
        puVar9 = (undefined8 *)
                 (*(long *)(lVar11 + 0x38) +
                 (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) | lVar14 << 6) * 0x18);
        lVar15 = puVar9[1];
        lVar2 = lVar14;
        if (*(char *)((long)puVar9 + 0x11) == '\x01' && lVar15 != 0) {
          uVar10 = *puVar9;
          func_0x000107c61434(lVar15);
          puVar5 = puVar8;
          func_0x000107c61558();
          puVar6 = puVar8;
          if (((ulong)puVar5 & 1) == 0) {
            puVar6 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar1 = *(ulong *)(puVar6 + 0x10);
          puVar8 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar6);
          }
          *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = uVar10;
          *(long *)(puVar8 + uVar1 * 0x10 + 0x28) = lVar15;
        }
      }
      bVar4 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102118820);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar18 >> 6) <= lVar14) break;
      uVar17 = puVar12[lVar14];
    }
    func_0x000107c6142c(lVar11);
    func_0x0001021195c4(lVar11,puVar12,~uVar18,lVar2,0);
    puVar5 = puVar8;
    func_0x000100403a6c();
    func_0x000107c6142c(puVar8);
    if (*(long *)(puVar5 + 0x10) != 0) {
      *(undefined1 *)(unaff_x20 + lVar13) = 1;
      lVar13 = *(long *)(unaff_x20 + lVar16);
      puVar12 = (ulong *)(lVar13 + 0x40);
      uVar18 = -1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
      uVar17 = 0xffffffffffffffff;
      if (-uVar18 < 0x40) {
        uVar17 = ~(-1L << (-uVar18 & 0x3f));
      }
      uVar17 = uVar17 & *puVar12;
      func_0x000107c61438(lVar13,2);
      lVar16 = 0;
      lVar11 = lVar16;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while( true ) {
        while (uVar17 != 0) {
          uVar1 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
          uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          uVar17 = uVar17 - 1 & uVar17;
          puVar9 = (undefined8 *)
                   (*(long *)(lVar13 + 0x38) +
                   (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) | lVar16 << 6) * 0x18);
          lVar14 = puVar9[1];
          lVar11 = lVar16;
          if (*(char *)(puVar9 + 2) == '\x01' && lVar14 != 0) {
            uVar10 = *puVar9;
            func_0x000107c61434(lVar14);
            puVar6 = puVar8;
            func_0x000107c61558();
            puVar7 = puVar8;
            if (((ulong)puVar6 & 1) == 0) {
              puVar7 = (undefined *)0x0;
              func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
            }
            uVar1 = *(ulong *)(puVar7 + 0x10);
            puVar8 = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
              func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
            }
            *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
            *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = uVar10;
            *(long *)(puVar8 + uVar1 * 0x10 + 0x28) = lVar14;
          }
        }
        bVar4 = SCARRY8(lVar16,1);
        lVar16 = lVar16 + 1;
        if (bVar4) break;
        if ((long)(0x3f - uVar18 >> 6) <= lVar16) {
          func_0x000107c6142c(lVar13);
          func_0x0001021195c4(lVar13,puVar12,~uVar18,lVar11,0);
          puVar6 = puVar8;
          func_0x000100403a6c();
          func_0x000107c6142c(puVar8);
          puVar8 = PTR_PTR_1126a9eb0;
          func_0x000107c610f8(PTR_PTR_1126a9eb0);
          func_0x000107c453e4();
          func_0x000107c5a5d4();
          func_0x000107c6142c(puVar5);
          func_0x000107c5a5d8(puVar8);
          func_0x000107c6142c(puVar6);
          func_0x000107c54430(puVar8);
          return puVar8;
        }
        uVar17 = puVar12[lVar16];
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102118824);
      (*pcVar3)();
    }
    func_0x000107c6142c(puVar5);
  }
  return (undefined *)0x0;
}



/* Entry: 102118824; end: 1021188ef; -[_TtC29SaturnFriendsFeedServicesImpl34SaturnFriendsFeedImpressionTracker didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Possible PIC construction at 0x0001021188bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021188c0) */

void FUN_102118824(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
    uVar2 = param_2;
  }
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c61174(param_1);
  FUN_10211933c(param_3,uVar1,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1021188f0; end: 102118a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021188f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1104ccca0;
  func_0x000107c613fc(&UNK_1104ccca0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_40 = 0x102119220;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1008561f0;
  puStack_48 = &UNK_1104cccb8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c3e924(param_1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102118a70; end: 102118cab;  */

/* WARNING: Possible PIC construction at 0x000102118abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102118ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102118c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102118c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102118c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102118c94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102118c88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102118c98) */
/* WARNING: Removing unreachable block (ram,0x000102118c50) */
/* WARNING: Removing unreachable block (ram,0x000102118c2c) */
/* WARNING: Removing unreachable block (ram,0x000102118c34) */
/* WARNING: Removing unreachable block (ram,0x000102118c04) */
/* WARNING: Removing unreachable block (ram,0x000102118c3c) */
/* WARNING: Removing unreachable block (ram,0x000102118c18) */
/* WARNING: Removing unreachable block (ram,0x000102118ae8) */
/* WARNING: Removing unreachable block (ram,0x000102118aec) */
/* WARNING: Removing unreachable block (ram,0x000102118af0) */
/* WARNING: Removing unreachable block (ram,0x000102118b3c) */
/* WARNING: Removing unreachable block (ram,0x000102118af4) */
/* WARNING: Removing unreachable block (ram,0x000102118b4c) */
/* WARNING: Removing unreachable block (ram,0x000102118b68) */
/* WARNING: Removing unreachable block (ram,0x000102118b74) */
/* WARNING: Removing unreachable block (ram,0x000102118c60) */
/* WARNING: Removing unreachable block (ram,0x000102118b88) */
/* WARNING: Removing unreachable block (ram,0x000102118ba0) */
/* WARNING: Removing unreachable block (ram,0x000102118c7c) */
/* WARNING: Removing unreachable block (ram,0x000102118ba8) */
/* WARNING: Removing unreachable block (ram,0x000102118c90) */
/* WARNING: Removing unreachable block (ram,0x000102118bc4) */
/* WARNING: Removing unreachable block (ram,0x000102118b24) */
/* WARNING: Removing unreachable block (ram,0x000102118ac0) */
/* WARNING: Removing unreachable block (ram,0x000102118c8c) */
/* WARNING: Removing unreachable block (ram,0x000102118ca0) */
/* WARNING: Removing unreachable block (ram,0x000102118c64) */
/* WARNING: Removing unreachable block (ram,0x000102118ca8) */

void FUN_102118a70(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb8538;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110eb8538);
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110eb8538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 102118cac; end: 102118cfb; -[_TtC29SaturnFriendsFeedServicesImpl34SaturnFriendsFeedImpressionTracker beginObservationWithFriendsFeedCellInteractionEventsObservable:] */

/* WARNING: Possible PIC construction at 0x000102118ce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102118ce8) */

void FUN_102118cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021188f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102118cfc; end: 102118f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102118cfc(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort uVar13;
  
  uVar1 = param_2;
  func_0x000107c3f734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar7 = uVar1;
    func_0x000107c5faec();
    uVar11 = param_3;
    func_0x000107c61170(uVar1);
    uVar1 = param_2;
    func_0x000107c42924();
    func_0x000107c61180();
    uVar12 = uVar1;
    if (uVar1 == 0) {
      FUN_102119470();
      if (uVar12 == 0) {
        uVar12 = param_2;
        func_0x000107c4fa64();
        func_0x000107c61180();
        if (uVar12 == 0) {
          uVar12 = 0;
LAB_102118f28:
          uVar9 = 0;
          uVar13 = 0;
          uVar10 = 0;
          uVar11 = 0;
        }
        else {
          uVar10 = uVar12;
          func_0x000107c5faec();
          func_0x000107c61170(uVar12);
          uVar9 = 0;
          uVar12 = 0;
          uVar13 = 0;
        }
      }
      else {
LAB_102118e1c:
        uVar3 = uVar12;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (uVar3 == 0) {
          uVar10 = 0;
          uVar5 = uVar11;
          uVar11 = 0;
        }
        else {
          uVar10 = uVar3;
          func_0x000107c5faec();
          uVar5 = uVar11;
          func_0x000107c61170(uVar3);
        }
        uVar3 = uVar12;
        func_0x000107c51628();
        func_0x000107c61180();
        if (uVar3 == 0) {
LAB_102118f08:
          uVar13 = 0;
        }
        else {
          uVar4 = uVar3;
          func_0x000107c51624();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar4 == 0) goto LAB_102118f08;
          uVar3 = uVar4;
          func_0x000107c5faec();
          func_0x000107c61170(uVar4);
          func_0x000107c6142c(uVar5);
          uVar3 = uVar3 & 0xffffffffffff;
          if ((uVar5 & 0x2000000000000000) != 0) {
            uVar3 = uVar5 >> 0x38 & 0xf;
          }
          uVar13 = (ushort)(uVar3 != 0);
        }
        uVar9 = 1;
      }
      func_0x000107c44ac0();
      func_0x000107c61170(uVar12);
      uVar6 = 0x100;
      if (((uVar9 != 0) || ((uint)param_2 == 0)) || (uVar1 != 0)) {
        uVar6 = 0x100;
        if ((uVar9 & (uint)param_2) == 0) {
          uVar6 = 0;
        }
        func_0x000107c61170(uVar1);
      }
      uVar6 = uVar6 | uVar13;
      goto LAB_102118f70;
    }
    lVar8 = *(long *)(unaff_x20 + _DAT_112e598e8);
    uVar10 = uVar1;
    func_0x000107c61174(uVar1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 == 0) {
      func_0x000107c6142c(param_3);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar10);
    }
    else {
      lVar2 = lVar8;
      func_0x000107c4a4b8();
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(uVar10);
      if ((int)lVar2 == 0) {
        FUN_102119470();
        if (uVar12 == 0) goto LAB_102118f28;
        goto LAB_102118e1c;
      }
      func_0x000107c61170(uVar10);
      func_0x000107c6142c(param_3);
    }
  }
  uVar7 = 0;
  param_3 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar6 = 0;
LAB_102118f70:
  *param_1 = uVar7;
  param_1[1] = param_3;
  param_1[2] = uVar10;
  param_1[3] = uVar11;
  *(ushort *)(param_1 + 4) = uVar6;
  return;
}



/* Entry: 102118f9c; end: 102118ffb; -[_TtC29SaturnFriendsFeedServicesImpl34SaturnFriendsFeedImpressionTracker init] */

void FUN_102118f9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnFriendsFeedServicesImpl.SaturnFriendsFeedImpressionTracker",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102118fc8);
  (*pcVar1)();
}



/* Entry: 102118ffc; end: 102119063; -[_TtC29SaturnFriendsFeedServicesImpl34SaturnFriendsFeedImpressionTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102118ffc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e598e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e598e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e598f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e598f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e59910));
  return;
}



/* Entry: 102119064; end: 102119083;  */

void FUN_102119064(void)

{
  func_0x000107c61168(&PTR_PTR_11281ec20);
  return;
}



/* Entry: 102119084; end: 10211908b;  */

void FUN_102119084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10211908c; end: 1021190bf;  */

undefined8 * FUN_10211908c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1021190c0; end: 10211911b;  */

undefined8 * FUN_1021190c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 10211911c; end: 10211915f;  */

undefined8 * FUN_10211911c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 102119160; end: 102119243;  */

int FUN_102119160(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102119244; end: 10211933b;  */

undefined8 FUN_102119244(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x00010211f1e0();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x18);
    func_0x00010211f8dc(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 10211933c; end: 10211943f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211933c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_80 [16];
  long lStack_48;
  
  if (param_2 != 0) {
    uVar1 = 0x112e59940;
    func_0x0001000285a8(0x112e59940,&UNK_10da5e640);
    func_0x000100087bd4(&lStack_48,FUN_102119440,auStack_80,uVar1);
    if (lStack_48 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112e598e0);
      lVar2 = lStack_48;
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar2);
        func_0x000100087bd4(FUN_10211945c,auStack_80,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61170(lVar2);
      }
      else {
        func_0x000107c4bfb0();
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(lVar3);
      }
    }
  }
  return;
}



/* Entry: 102119440; end: 10211945b;  */

void FUN_102119440(void)

{
  long unaff_x20;
  
  FUN_1021178b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 10211945c; end: 10211946f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211945c(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e59908) = 0;
  return;
}



/* Entry: 102119470; end: 10211956b;  */

undefined8 FUN_102119470(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (param_1 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1104cccf0;
    func_0x000107c613fc(&UNK_1104cccf0,0x18,7);
    *(undefined8 **)(puVar4 + 0x10) = &uStack_38;
    puVar2 = &UNK_1104ccd18;
    func_0x000107c613fc(&UNK_1104ccd18,0x20,7);
    pcVar5 = FUN_10211957c;
    *(code **)(puVar2 + 0x10) = FUN_10211957c;
    *(undefined **)(puVar2 + 0x18) = puVar4;
    pcStack_48 = FUN_1021195a8;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_10117dba4;
    puStack_50 = &UNK_1104ccd30;
    ppuVar3 = &puStack_68;
    puStack_40 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_40);
    func_0x000107c4c728(param_1);
    func_0x000107c60bd0(ppuVar3);
  }
  uVar1 = uStack_38;
  FUN_10211956c(pcVar5,puVar4);
  return uVar1;
}



/* Entry: 10211956c; end: 10211957b;  */

void FUN_10211956c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 10211957c; end: 1021195a7;  */

void FUN_10211957c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1021195a8; end: 1021195db;  */

void FUN_1021195a8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1021195dc; end: 10211970f;  */

undefined8 FUN_1021195dc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fe14(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  uStack_68 = uVar7;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      func_0x000107c61434(uVar3);
      func_0x000100403b00(auStack_78,uVar7,uVar3);
      func_0x000107c6142c(uStack_70);
      lVar9 = lVar1;
    }
    bVar6 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      func_0x000100ce41a4(param_1,puVar8,~uVar10,lVar9,0);
      return uStack_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102119710);
  (*pcVar5)();
}



/* Entry: 102119710; end: 10211972f;  */

void FUN_102119710(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  return;
}



/* Entry: 102119730; end: 10211974f; -[_TtC29SaturnFriendsFeedServicesImpl24SaturnFriendsFeedManager delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102119730(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112e59948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102119750; end: 102119763; -[_TtC29SaturnFriendsFeedServicesImpl24SaturnFriendsFeedManager setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102119750(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e59948,param_3);
  return;
}



/* Entry: 102119764; end: 1021198c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102119764(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  func_0x000107c614f0();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e59990);
  uVar1 = uVar5;
  func_0x000107c61174(uVar5);
  pcVar2 = "deinit";
  func_0x0001000c10c0("deinit");
  func_0x000107c61180();
  puVar3 = &UNK_1104cd2e0;
  func_0x000107c613fc(&UNK_1104cd2e0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  ppuVar4 = &puStack_80;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar2);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e599d0);
  func_0x000107c6157c(uVar5);
  func_0x000100087bd4(FUN_10211db2c,&puStack_80,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61154(&stack0xffffffffffffff68,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021198c8; end: 102119973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021198c8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = _DAT_112e59998;
  uVar2 = 0;
  if (*(long *)(param_1 + _DAT_112e59998) != 0) {
    func_0x000107c4218c();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
  }
  *(undefined8 *)(param_1 + lVar4) = 0;
  func_0x000107c61170(uVar2);
  plVar1 = (long *)(param_1 + _DAT_112e599b0);
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar5 = plVar1[1];
    lVar3 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar6 = *(code **)(lVar5 + 8);
    func_0x000107c615f0(lVar4);
    (*pcVar6)(lVar3,lVar5);
    func_0x000107c615e8(lVar4);
    lVar4 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar4);
  return;
}



/* Entry: 102119974; end: 102119997; -[_TtC29SaturnFriendsFeedServicesImpl24SaturnFriendsFeedManager dealloc] */

void FUN_102119974(void)

{
  func_0x000107c61174();
  FUN_102119764();
  return;
}



/* Entry: 102119998; end: 102119aaf; -[_TtC29SaturnFriendsFeedServicesImpl24SaturnFriendsFeedManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021199c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021199e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102119a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102119a44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102119a08) */
/* WARNING: Removing unreachable block (ram,0x0001021199e8) */
/* WARNING: Removing unreachable block (ram,0x0001021199c8) */
/* WARNING: Removing unreachable block (ram,0x000102119a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102119998(long param_1)

{
  FUN_10211db00(param_1 + _DAT_112e59948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e59950));
  return;
}



/* Entry: 102119ab0; end: 102119c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_102119ab0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long unaff_x20;
  undefined *apuStack_50 [2];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e59970);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4a370();
    func_0x000107c615e8(lVar1);
    if ((int)lVar2 != 0) {
      func_0x000100087bd4(*(undefined8 *)(unaff_x20 + _DAT_112e599d0),0x10211d59c,apuStack_50,
                          PTR___sytN_11034f1b0 + 8);
      uVar3 = 0;
      FUN_10211d97c(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
      ppuVar5 = (undefined **)0x10211db48;
      func_0x0001000bfde0(0x10211db48,0,uVar3);
      pcVar6 = (code *)ppuVar5;
      goto LAB_102119bec;
    }
  }
  func_0x0001000285a8(0x112e59a08,&UNK_10da5e680);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  ppuVar5 = apuStack_50;
  apuStack_50[0] = puVar4;
  func_0x000100854cb0(ppuVar5);
  func_0x000107c6142c(puVar4);
  uVar3 = 0;
  FUN_10211d97c(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  pcVar6 = FUN_10211db44;
  func_0x0001000bfde0(FUN_10211db44,0,uVar3);
  func_0x000107c61574(ppuVar5);
LAB_102119bec:
  func_0x0001004575f0();
  func_0x000107c61574(pcVar6);
  return ppuVar5;
}



/* Entry: 102119c14; end: 102119c47; -[_TtC29SaturnFriendsFeedServicesImpl24SaturnFriendsFeedManager userIdToSaturnEmojiSCObservable] */

void FUN_102119c14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102119ab0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102119c48; end: 102119d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102119c48(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = _DAT_112e599b8;
  if (((param_1 & 1) != 0) && ((*(byte *)(param_2 + _DAT_112e599b8) & 1) == 0)) {
    lVar2 = *(long *)(param_2 + _DAT_112e59970);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c51638();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        func_0x000107c42c04();
        lVar4 = lVar3;
        func_0x000107c5dc0c();
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c3ebcc();
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar3);
        *(char *)(param_2 + _DAT_112e599c0) = (char)lVar5;
        *(undefined1 *)(param_2 + lVar1) = 1;
      }
    }
  }
  return;
}



/* Entry: 102119d28; end: 10211a043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102119d28(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  undefined *puVar13;
  
  plVar1 = (long *)(param_1 + _DAT_112e599b0);
  if (*plVar1 != 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + _DAT_112e59958);
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c5deec();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
LAB_10211a01c:
    func_0x000107c615e8(lVar2);
  }
  else {
    func_0x0001000285a8(0x112e53058,&UNK_10da53920);
    lVar3 = lVar4;
    func_0x0001000b637c(lVar4);
    pcVar5 = FUN_10211a4c4;
    func_0x0001000d5158(FUN_10211a4c4,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar3);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112e599d8);
    func_0x000104880bc0(0x4014000000000000,uVar6);
    func_0x000107c61574(pcVar5);
    puVar7 = PTR___sSbSQsWP_11034dd50;
    func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
    func_0x000107c61574(uVar6);
    pcVar5 = (code *)&UNK_1104ccd68;
    func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
    func_0x000107c61614(pcVar5 + 0x10,param_1);
    pcVar8 = FUN_10211d5b4;
    func_0x00010487e4e0(FUN_10211d5b4,pcVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c61574();
    FUN_10211a044();
    if (pcVar5 != (code *)0x0) {
      pcVar9 = pcVar5;
      func_0x00010211a20c();
      if (pcVar9 != (code *)0x0) {
        pcVar10 = pcVar9;
        func_0x00010211d534();
        func_0x000107c613fc();
        *(undefined8 *)(pcVar10 + 0x18) = 5;
        *(undefined8 *)(pcVar10 + 0x10) = 2;
        *(code **)(pcVar10 + 0x20) = pcVar9;
        *(code **)(pcVar10 + 0x28) = pcVar5;
        func_0x0001000285a8(0x112e59a10,&UNK_10da5e690);
        func_0x000107c6157c(pcVar9);
        func_0x000107c6157c(pcVar5);
        pcVar11 = pcVar10;
        func_0x0001000c19f0();
        func_0x000107c61574(pcVar10);
        pcVar12 = pcVar11;
        func_0x0001006c733c(pcVar11);
        pcVar10 = FUN_10211a378;
        func_0x0001000c0ebc(FUN_10211a378,0);
        func_0x000107c61574(pcVar12);
        puVar7 = &UNK_1104ccd68;
        func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
        func_0x000107c61614(puVar7 + 0x10,param_1);
        puVar13 = &UNK_1104ccd90;
        func_0x000107c613fc(&UNK_1104ccd90,0x20,7);
        *(undefined8 *)(puVar13 + 0x10) = 0x10211d5bc;
        *(undefined **)(puVar13 + 0x18) = puVar7;
        pcVar12 = FUN_10211d5c4;
        puVar7 = puVar13;
        (**(code **)(*(long *)pcVar10 + 0x60))();
        func_0x000107c61574(pcVar10);
        func_0x000107c61574(puVar13);
        func_0x000107c61574(pcVar11);
        func_0x000107c61574(pcVar9);
        func_0x000107c61574(pcVar5);
        func_0x000107c61574(pcVar8);
        lVar2 = *plVar1;
        *plVar1 = (long)pcVar12;
        plVar1[1] = (long)puVar7;
        goto LAB_10211a01c;
      }
      func_0x000107c61574(pcVar8);
      pcVar8 = pcVar5;
    }
    func_0x000107c61574(pcVar8);
  }
  return;
}



/* Entry: 10211a044; end: 10211a377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211a044(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112e59948;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112e59950);
    if (lVar8 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
        lVar2 = lVar1;
        func_0x000107c43ad8(lVar1);
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x0001000b637c();
        func_0x000107c61170(lVar2);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e599d8);
        func_0x000104880bc0(0x3ff0000000000000,uVar4);
        func_0x000107c61574(lVar3);
        puVar7 = &UNK_1104ccd68;
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        pcVar6 = FUN_10211d8c8;
        func_0x00010487e4e0(FUN_10211d8c8,puVar5);
        func_0x000107c61574(uVar4);
        func_0x000107c61574(puVar5);
        func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        puVar5 = &UNK_1104ccde0;
        func_0x000107c613fc(&UNK_1104ccde0,0x20,7);
        *(long *)(puVar5 + 0x10) = lVar8;
        *(undefined **)(puVar5 + 0x18) = puVar7;
        func_0x000107c615f0(lVar8);
        uVar4 = 0x112d5d480;
        func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
        func_0x0001000d5158(0x10211d8d0,puVar5,uVar4);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar8);
        func_0x000107c61574(pcVar6);
        func_0x000107c61574(puVar5);
        return;
      }
    }
    func_0x000107c615e8();
  }
  return;
}


