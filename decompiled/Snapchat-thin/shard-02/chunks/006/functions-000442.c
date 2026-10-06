/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ff26cc; end: 101ff26d3;  */

undefined8 FUN_101ff26cc(void)

{
  return 0x1b;
}



/* Entry: 101ff26d4; end: 101ff284b;  */

void FUN_101ff26d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b8868;
  func_0x000107c613fc(&UNK_1104b8868,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101ff284c,puVar1);
  return;
}



/* Entry: 101ff284c; end: 101ff2853;  */

void FUN_101ff284c(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4e2c8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4e2c8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b8900;
  func_0x000107c613fc(&UNK_1104b8900,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101ff2900;
  func_0x00010058fa64(0x101ff2900,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ff2854; end: 101ff28af;  */

void FUN_101ff2854(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4e2c8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4e2c8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101ff28b0; end: 101ff2907;  */

undefined ** FUN_101ff28b0(void)

{
  return &PTR_DAT_112f20e38;
}



/* Entry: 101ff2908; end: 101ff294f; -[SCCustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2908(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e328;
  func_0x000107c61428(param_1 + _DAT_112e4e328,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ff2950; end: 101ff29a7; -[SCCustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2950(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e328;
  func_0x000107c61428(param_1 + _DAT_112e4e328,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ff29a8; end: 101ff29ef; -[SCCustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint customStoryMemberActionSheetScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff29a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e330;
  func_0x000107c61428(param_1 + _DAT_112e4e330,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101ff29f0; end: 101ff2a53; -[SCCustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint setCustomStoryMemberActionSheetScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff29f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e330;
  func_0x000107c61428(param_1 + _DAT_112e4e330,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101ff2a54; end: 101ff2b87;  */

/* WARNING: Possible PIC construction at 0x000101ff2b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ff2b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ff2b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ff2b10) */
/* WARNING: Removing unreachable block (ram,0x000101ff2b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2a54(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  func_0x000107c41120();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101ff2288();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101ff2500();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff2b88);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e4e258) = lVar5;
    *(long *)(lVar4 + _DAT_112e4e260) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101ff2b88; end: 101ff2baf; -[SCCustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101ff2b88(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ff2a54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ff2bb0; end: 101ff2bf3; -[SCCustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint end] */

void FUN_101ff2bb0(undefined8 param_1)

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



/* Entry: 101ff2bf4; end: 101ff2d8b;  */

void FUN_101ff2bf4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc5) || (param_3 != -0x7ffffffef0fac720)) {
      uVar2 = 0xd00000000000003b;
      func_0x000107c605b8(0xd00000000000003b,0x800000010f0538e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CustomStoryMemberActionSheetScopeGraphBridge/SCCustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x70,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff2d8c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53d50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101ff2d8c; end: 101ff2e37; -[SCCustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101ff2d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ff2bf4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ff2e38; end: 101ff2ea3; -[SCCustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2e38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4e328,0);
  *(undefined8 *)(param_1 + _DAT_112e4e330) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4e338) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ff2ea4; end: 101ff2ed7;  */

void FUN_101ff2ea4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ff2ed8; end: 101ff2f1f; -[SCCustomStoryMemberActionSheetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ff2f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ff2f08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2ed8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4e328);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4e330));
  return;
}



/* Entry: 101ff2f20; end: 101ff2f3f;  */

void FUN_101ff2f20(void)

{
  func_0x000107c61168(&PTR_PTR_1128147b0);
  return;
}



/* Entry: 101ff2f40; end: 101ff2f87; -[SCSCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2f40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e368;
  func_0x000107c61428(param_1 + _DAT_112e4e368,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ff2f88; end: 101ff2fdf; -[SCSCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e368;
  func_0x000107c61428(param_1 + _DAT_112e4e368,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ff2fe0; end: 101ff30b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff2fe0(undefined8 param_1,long param_2)

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
    FUN_101ff24e0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4e290) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ff30b8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4e298);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4e370);
    *(long **)(unaff_x20 + _DAT_112e4e370) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101ff30b8; end: 101ff30df; -[SCSCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint begin] */

void FUN_101ff30b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ff2fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ff30e0; end: 101ff3257;  */

/* WARNING: Possible PIC construction at 0x000101ff3148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ff31e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ff314c) */
/* WARNING: Removing unreachable block (ram,0x000101ff31e4) */
/* WARNING: Removing unreachable block (ram,0x000101ff31fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff30e0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4e370);
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



/* Entry: 101ff3258; end: 101ff325f;  */

void FUN_101ff3258(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ff3260; end: 101ff3293; -[SCSCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint end] */

void FUN_101ff3260(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ff30e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ff3294; end: 101ff33b3;  */

void FUN_101ff3294(long param_1,long param_2,long param_3)

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
                        "CustomStoryMemberActionSheetScopeGraphBridge/SCSCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint.swift"
                        ,0x70,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff33b4);
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



/* Entry: 101ff33b4; end: 101ff345f; -[SCSCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101ff33b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ff3294(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ff3460; end: 101ff34bf; -[SCSCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff3460(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4e368,0);
  *(undefined8 *)(param_1 + _DAT_112e4e370) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ff34c0; end: 101ff34f3;  */

void FUN_101ff34c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ff34f4; end: 101ff352b; -[SCSCCustomStoryMemberActionSheetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff34f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4e368);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4e370));
  return;
}



/* Entry: 101ff352c; end: 101ff354b;  */

void FUN_101ff352c(void)

{
  func_0x000107c61168(&PTR_PTR_112814878);
  return;
}



/* Entry: 101ff354c; end: 101ff35b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff354c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101ff3940();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4e3a8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101ff35b8; end: 101ff3623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff35b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4e3a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ff3624; end: 101ff3683; -[_TtC46CustomStoryMembersScopedFactoryServiceProvider34SCCustomStoryMembersScopedServices init] */

void FUN_101ff3624(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMembersScopedFactoryServiceProvider.SCCustomStoryMembersScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff3650);
  (*pcVar1)();
}



/* Entry: 101ff3684; end: 101ff3693; -[_TtC46CustomStoryMembersScopedFactoryServiceProvider34SCCustomStoryMembersScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff3684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4e3a8));
  return;
}



/* Entry: 101ff3694; end: 101ff36ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff3694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b8b18;
  func_0x000107c613fc(&UNK_1104b8b18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101ff39d8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101ff3700; end: 101ff379b;  */

void FUN_101ff3700(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104b8a28;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b8a28;
  return;
}



/* Entry: 101ff379c; end: 101ff37d3;  */

void FUN_101ff379c(long *param_1)

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



/* Entry: 101ff37d4; end: 101ff37db;  */

undefined8 FUN_101ff37d4(void)

{
  return 0x1b;
}



/* Entry: 101ff37dc; end: 101ff390f;  */

void FUN_101ff37dc(undefined8 *param_1)

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
  puVar1 = &UNK_1104b8b40;
  func_0x000107c613fc(&UNK_1104b8b40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ff39b0;
  func_0x00010058fa64(FUN_101ff39b0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ff3910; end: 101ff393f;  */

undefined ** FUN_101ff3910(void)

{
  return &PTR_DAT_112ff5b30;
}



/* Entry: 101ff3940; end: 101ff395f;  */

void FUN_101ff3940(void)

{
  func_0x000107c61168(&PTR_PTR_112814938);
  return;
}



/* Entry: 101ff3960; end: 101ff39af;  */

undefined1  [16] FUN_101ff3960(void)

{
  return ZEXT816(0x1104b8a78);
}



/* Entry: 101ff39b0; end: 101ff39d7;  */

void FUN_101ff39b0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101ff39d8; end: 101ff39eb;  */

void FUN_101ff39d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ff39ec; end: 101ff3edf;  */

void FUN_101ff39ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_70 [2];
  
  uVar14 = *param_2;
  func_0x0001000285a8(0x112e4e420,&UNK_10da49ee0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000101ff5fc0();
  pcVar3 = "SCCustomStoryMemberActionSheetScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCustomStoryMemberActionSheetScopeExposerSubjectServiceProvider",0x40,2);
  FUN_101ff600c();
  pcVar4 = "SCFriendProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendProfileScopeExposerSubjectServiceProvider",0x31,2);
  func_0x000101ff608c();
  func_0x000100082720("SCRecipientPickerScopeExposerSubjectServiceProvider",0x33,2);
  puVar5 = puVar2;
  FUN_101ff6000();
  func_0x000100082720("SCCustomStoryMemberActionSheetScopeExposerObservableServiceProvider",0x43,2);
  pcVar6 = pcVar3;
  FUN_101ff604c();
  func_0x000100082720("SCFriendProfileScopeExposerObservableServiceProvider",0x34,2);
  pcVar7 = pcVar4;
  FUN_101ff6118();
  func_0x000100082720("SCRecipientPickerScopeExposerObservableServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_101ff379c;
  func_0x0001000823a8(FUN_101ff379c,0);
  func_0x000100082720("SCCustomStoryMembersScopedServicesCleanupRelayServiceProvider",0x3d,2);
  puVar9 = puVar2;
  FUN_101ff5d5c(puVar2,pcVar3,pcVar4);
  func_0x000100082720("CustomStoryMembersScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e4e428,&UNK_10da49ef0);
  puVar10 = &UNK_1104b8bf0;
  func_0x000107c613fc(&UNK_1104b8bf0,0x88,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  *(undefined8 *)(puVar10 + 0x20) = param_4;
  *(undefined8 *)(puVar10 + 0x28) = param_5;
  *(undefined8 *)(puVar10 + 0x30) = param_6;
  *(undefined8 *)(puVar10 + 0x38) = param_7;
  *(undefined8 *)(puVar10 + 0x40) = param_8;
  *(undefined8 *)(puVar10 + 0x48) = param_9;
  *(undefined8 *)(puVar10 + 0x50) = param_10;
  *(undefined8 *)(puVar10 + 0x58) = param_11;
  *(undefined8 *)(puVar10 + 0x60) = param_12;
  *(undefined8 *)(puVar10 + 0x68) = param_13;
  *(char **)(puVar10 + 0x70) = pcVar7;
  *(char **)(puVar10 + 0x78) = pcVar6;
  *(undefined8 **)(puVar10 + 0x80) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(puVar5);
  uVar14 = 0x101ff3f1c;
  func_0x0001000823a8(0x101ff3f1c,puVar10);
  func_0x000100082720("SCCustomStoryMembersListEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e4e430,&UNK_10da49ef8);
  puVar10 = &UNK_1104b8c18;
  func_0x000107c613fc(&UNK_1104b8c18,0x30,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 **)(puVar10 + 0x18) = puVar9;
  *(undefined8 *)(puVar10 + 0x20) = uVar14;
  *(code **)(puVar10 + 0x28) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(pcVar8);
  pcVar11 = FUN_101ff3f60;
  func_0x0001000823a8(FUN_101ff3f60,puVar10);
  func_0x000100082720("SCCustomStoryMembersScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e4e3b0,&UNK_10da49c70);
  func_0x000107c6157c(pcVar11);
  uVar12 = 0x101ff3f6c;
  func_0x0001000823a8(0x101ff3f6c,pcVar11);
  func_0x000100082720("SCCustomStoryMembersScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4e3a0,&UNK_10da49c60);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x101ff3f74;
  func_0x0001000823a8(0x101ff3f74,uVar12);
  func_0x000100082720("SCCustomStoryMembersScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_1104b8c40;
  func_0x000107c613fc(&UNK_1104b8c40,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar13;
  *(code **)(puVar10 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar13 = 0x101ff3f7c;
  func_0x0001000823a8(0x101ff3f7c,puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCCustomStoryMembersScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 101ff3ee0; end: 101ff3f5f;  */

void FUN_101ff3ee0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101ff39ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101ff3f60; end: 101ff3f83;  */

void FUN_101ff3f60(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101ff5444(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCCustomStoryMembersScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 101ff3f84; end: 101ff51db;  */

void FUN_101ff3f84(long *param_1,long param_2)

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
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  FUN_101ff5394();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  func_0x0001000285a8(0x112e4de18,&UNK_10db46090);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar12;
  func_0x0001000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar14 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  func_0x0001003b3b80();
  puVar12 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x20) = puVar12;
  func_0x0001000285a8(0x112e4e438,&UNK_10db591f0);
  func_0x000107c610f8();
  uVar14 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x28) = puVar12;
  puVar12 = PTR_PTR_1126a9d80;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f053c40);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f053c60);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2e280);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f053c90);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f052f60);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f052f80);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f053cb0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61574(uStack_d0);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61574(uStack_e0);
  *param_1 = param_2;
  return;
}



/* Entry: 101ff51dc; end: 101ff5287;  */

void FUN_101ff51dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 101ff5288; end: 101ff528f;  */

undefined8 FUN_101ff5288(void)

{
  return 0x1b;
}



/* Entry: 101ff5290; end: 101ff5313;  */

void FUN_101ff5290(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101ff53d4,param_2,FUN_101ff53d8,param_2,FUN_101ff5400,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101ff5314; end: 101ff5363;  */

undefined8 FUN_101ff5314(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101ff5364; end: 101ff5393;  */

undefined ** FUN_101ff5364(void)

{
  return &PTR_DAT_112ff5b30;
}



/* Entry: 101ff5394; end: 101ff53b3;  */

void FUN_101ff5394(void)

{
  func_0x000107c61168(&PTR_PTR_112e4e4a8);
  return;
}



/* Entry: 101ff53b4; end: 101ff53d7;  */

undefined1  [16] FUN_101ff53b4(void)

{
  return ZEXT816(0x1104b8c98);
}



/* Entry: 101ff53d8; end: 101ff53ff;  */

void FUN_101ff53d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ff5400; end: 101ff5407;  */

undefined8 FUN_101ff5400(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101ff5408; end: 101ff5443;  */

void FUN_101ff5408(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ff5444();
  func_0x0001000a7f38("SCCustomStoryMembersScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = param_2;
  return;
}



/* Entry: 101ff5444; end: 101ff562f;  */

void FUN_101ff5444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106e50f0;
  ppuVar4 = &PTR_DAT_112ff5b30;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104b8ce8;
  func_0x000107c613fc(&UNK_1104b8ce8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e4e578;
  func_0x0001000285a8(0x112e4e578,&UNK_10da4a0c0);
  func_0x0001000a6ee8(&UNK_1104b8f90,
                      "CustomStoryMembersScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_101ff5630,puVar2,uVar3,&UNK_1104b8f90,&PTR_DAT_112e4e620);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104b8c98,
                      "SCCustomStoryMembersListEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_101ff56e4,param_3,uVar3,&UNK_1104b8c98,&PTR_DAT_112e4e440);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104b8d10;
  func_0x000107c613fc(&UNK_1104b8d10,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104b8ab8,
                      "SCCustomStoryMembersScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_101ff5794,puVar2,uVar3,&UNK_1104b8ab8,&PTR_DAT_112e4e3b8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4e580;
  func_0x0001000285a8(0x112e4e580,&UNK_10da4a0c8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101ff5630; end: 101ff566f;  */

void FUN_101ff5630(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101ff6184(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CustomStoryMembersScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ff5670; end: 101ff56e3;  */

void FUN_101ff5670(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101ff57d0;
  func_0x0001000823a8(0x101ff57d0,param_3);
  func_0x000100082720("SCCustomStoryMembersListEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ff56e4; end: 101ff56eb;  */

void FUN_101ff56e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101ff57d0;
  func_0x0001000823a8();
  func_0x000100082720("SCCustomStoryMembersListEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ff56ec; end: 101ff5793;  */

void FUN_101ff56ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b8d38;
  func_0x000107c613fc(&UNK_1104b8d38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101ff57c8;
  func_0x0001000823a8(FUN_101ff57c8,puVar1);
  func_0x000100082720("SCCustomStoryMembersScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101ff5794; end: 101ff579b;  */

void FUN_101ff5794(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b8d38;
  func_0x000107c613fc(&UNK_1104b8d38,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101ff57c8;
  func_0x0001000823a8(FUN_101ff57c8,puVar3);
  func_0x000100082720("SCCustomStoryMembersScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101ff579c; end: 101ff57c7;  */

void FUN_101ff579c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ff57c8; end: 101ff57d7;  */

void FUN_101ff57c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104b8b40;
  func_0x000107c613fc(&UNK_1104b8b40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ff39b0;
  func_0x00010058fa64(FUN_101ff39b0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ff57d8; end: 101ff5933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101ff57d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_101ff5c6c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e4e588) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e4e590) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ff5934);
  (*pcVar2)();
}



/* Entry: 101ff5934; end: 101ff5993; -[_TtC34CustomStoryMembersScopeGraphBridge49CustomStoryMembersScopeGraphBridgeSaberEntryPoint init] */

void FUN_101ff5934(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMembersScopeGraphBridge.CustomStoryMembersScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff5960);
  (*pcVar1)();
}



/* Entry: 101ff5994; end: 101ff59cb; -[_TtC34CustomStoryMembersScopeGraphBridge49CustomStoryMembersScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ff59b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ff59b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff5994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4e588));
  return;
}



/* Entry: 101ff59cc; end: 101ff59f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff59cc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4e590),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4e588));
  return;
}



/* Entry: 101ff59f4; end: 101ff5a13;  */

void FUN_101ff59f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128149f8);
  return;
}



/* Entry: 101ff5a14; end: 101ff5a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ff5a14(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4e5c0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4e5c8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ff5a9c);
  (*pcVar2)();
}



/* Entry: 101ff5a9c; end: 101ff5b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ff5a9c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4e5c0);
  *(undefined **)(unaff_x20 + _DAT_112e4e5c0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4e5c8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4e5c8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b8e08;
  func_0x000107c613fc(&UNK_1104b8e08,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101ff5b88,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101ff5b84; end: 101ff5b8f;  */

void FUN_101ff5b84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ff5b90; end: 101ff5bef; -[_TtC34CustomStoryMembersScopeGraphBridge49SCCustomStoryMembersScopedServicesSaberEntryPoint init] */

void FUN_101ff5b90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMembersScopeGraphBridge.SCCustomStoryMembersScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff5bbc);
  (*pcVar1)();
}



/* Entry: 101ff5bf0; end: 101ff5c27; -[_TtC34CustomStoryMembersScopeGraphBridge49SCCustomStoryMembersScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff5bf0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4e5c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4e5c0));
  return;
}



/* Entry: 101ff5c28; end: 101ff5c2b;  */

void FUN_101ff5c28(void)

{
  return;
}



/* Entry: 101ff5c2c; end: 101ff5c4b;  */

void FUN_101ff5c2c(void)

{
  FUN_101ff5a9c();
  return;
}



/* Entry: 101ff5c4c; end: 101ff5c6b;  */

void FUN_101ff5c4c(void)

{
  func_0x000107c61168(&PTR_PTR_112814ac0);
  return;
}



/* Entry: 101ff5c6c; end: 101ff5d3b;  */

undefined8 FUN_101ff5c6c(void)

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
  
  func_0x000107c61428(0x112e4e5f8,&uStack_40,0x20,0);
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
    FUN_101ff5d3c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101ff5d3c; end: 101ff5d5b;  */

void FUN_101ff5d3c(void)

{
  func_0x000107c61168(&PTR_PTR_112814b88);
  return;
}



/* Entry: 101ff5d5c; end: 101ff5e97;  */

void FUN_101ff5d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4e600,&UNK_10da4a198);
  puVar1 = &UNK_1104b8e50;
  func_0x000107c613fc(&UNK_1104b8e50,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_101ff5e98,puVar1);
  return;
}



/* Entry: 101ff5e98; end: 101ff5ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff5e98(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_101ff5d3c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e4e608) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e4e610) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e4e618) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 101ff5ea4; end: 101ff5f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff5ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4e608) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e4e610) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e4e618) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ff5f18; end: 101ff5f77; -[_TtC34CustomStoryMembersScopeGraphBridge42CustomStoryMembersScopeGraphBridgeServices init] */

void FUN_101ff5f18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMembersScopeGraphBridge.CustomStoryMembersScopeGraphBridgeServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ff5f44);
  (*pcVar1)();
}



/* Entry: 101ff5f78; end: 101ff5fff; -[_TtC34CustomStoryMembersScopeGraphBridge42CustomStoryMembersScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ff5f94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ff5f98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff5f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4e608));
  return;
}



/* Entry: 101ff6000; end: 101ff600b;  */

void FUN_101ff6000(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101ff6418,param_1);
  return;
}



/* Entry: 101ff600c; end: 101ff604b;  */

void FUN_101ff600c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101ff6424,0);
  return;
}



/* Entry: 101ff604c; end: 101ff6057;  */

void FUN_101ff604c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101ff6058,param_1);
  return;
}



/* Entry: 101ff6058; end: 101ff6117;  */

void FUN_101ff6058(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101ff6118; end: 101ff6123;  */

void FUN_101ff6118(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101ff641c,param_1);
  return;
}



/* Entry: 101ff6124; end: 101ff617b;  */

void FUN_101ff6124(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 101ff617c; end: 101ff6183;  */

undefined8 FUN_101ff617c(void)

{
  return 0x1b;
}



/* Entry: 101ff6184; end: 101ff62fb;  */

void FUN_101ff6184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b8e78;
  func_0x000107c613fc(&UNK_1104b8e78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101ff62fc,puVar1);
  return;
}



/* Entry: 101ff62fc; end: 101ff6303;  */

void FUN_101ff62fc(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4e5f8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4e5f8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b8fd0;
  func_0x000107c613fc(&UNK_1104b8fd0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101ff6410;
  func_0x00010058fa64(0x101ff6410,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ff6304; end: 101ff635f;  */

void FUN_101ff6304(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4e5f8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4e5f8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101ff6360; end: 101ff642b;  */

undefined ** FUN_101ff6360(void)

{
  return &PTR_DAT_112ff5b30;
}



/* Entry: 101ff642c; end: 101ff6473; -[SCCustomStoryMembersScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff642c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e670;
  func_0x000107c61428(param_1 + _DAT_112e4e670,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ff6474; end: 101ff64cb; -[SCCustomStoryMembersScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ff6474(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e670;
  func_0x000107c61428(param_1 + _DAT_112e4e670,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


