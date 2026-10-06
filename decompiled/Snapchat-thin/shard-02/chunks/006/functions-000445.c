/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ffcfb8; end: 101ffd14f;  */

void FUN_101ffcfb8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc0) || (param_3 != -0x7ffffffef0faafd0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000040,0x800000010f055030,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "RecipientPickerSectionSaberPluginScopeGraphBridge/SCRecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x7a,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffd150);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57be4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101ffd150; end: 101ffd1fb; -[SCRecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101ffd150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ffcfb8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ffd1fc; end: 101ffd267; -[SCRecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffd1fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4ebc0,0);
  *(undefined8 *)(param_1 + _DAT_112e4ebc8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4ebd0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ffd268; end: 101ffd29b;  */

void FUN_101ffd268(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ffd29c; end: 101ffd2e3; -[SCRecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ffd2c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ffd2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffd29c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4ebc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4ebc8));
  return;
}



/* Entry: 101ffd2e4; end: 101ffd303;  */

void FUN_101ffd2e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128155b0);
  return;
}



/* Entry: 101ffd304; end: 101ffd34b; -[SCRecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffd304(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4ec00;
  func_0x000107c61428(param_1 + _DAT_112e4ec00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ffd34c; end: 101ffd3a3; -[SCRecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffd34c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4ec00;
  func_0x000107c61428(param_1 + _DAT_112e4ec00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ffd3a4; end: 101ffd47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffd3a4(undefined8 param_1,long param_2)

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
    FUN_101ffc8a4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4eb28) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ffd47c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4eb30);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4ec08);
    *(long **)(unaff_x20 + _DAT_112e4ec08) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101ffd47c; end: 101ffd4a3; -[SCRecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint begin] */

void FUN_101ffd47c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ffd3a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ffd4a4; end: 101ffd61b;  */

/* WARNING: Possible PIC construction at 0x000101ffd50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffd5a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ffd510) */
/* WARNING: Removing unreachable block (ram,0x000101ffd5a8) */
/* WARNING: Removing unreachable block (ram,0x000101ffd5c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffd4a4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4ec08);
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



/* Entry: 101ffd61c; end: 101ffd623;  */

void FUN_101ffd61c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ffd624; end: 101ffd657; -[SCRecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint end] */

void FUN_101ffd624(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ffd4a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ffd658; end: 101ffd777;  */

void FUN_101ffd658(long param_1,long param_2,long param_3)

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
                        "RecipientPickerSectionSaberPluginScopeGraphBridge/SCRecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint.swift"
                        ,0x78,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffd778);
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



/* Entry: 101ffd778; end: 101ffd823; -[SCRecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101ffd778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ffd658(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ffd824; end: 101ffd883; -[SCRecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffd824(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4ec00,0);
  *(undefined8 *)(param_1 + _DAT_112e4ec08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ffd884; end: 101ffd8b7;  */

void FUN_101ffd884(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ffd8b8; end: 101ffd8ef; -[SCRecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffd8b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4ec00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4ec08));
  return;
}



/* Entry: 101ffd8f0; end: 101ffd90f;  */

void FUN_101ffd8f0(void)

{
  func_0x000107c61168(&PTR_PTR_112815678);
  return;
}



/* Entry: 101ffd910; end: 101ffdd4f;  */

void FUN_101ffd910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4ec38,&UNK_10da4b2c0);
  puVar1 = &UNK_1104b9d20;
  func_0x000107c613fc(&UNK_1104b9d20,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x101ffd9fc,puVar1);
  return;
}



/* Entry: 101ffdd50; end: 101ffdd5f;  */

undefined1  [16] FUN_101ffdd50(void)

{
  return ZEXT816(0x1104b9d48);
}



/* Entry: 101ffdd60; end: 101ffe43f;  */

void FUN_101ffdd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4ec38,&UNK_10da4b2c0);
  puVar1 = &UNK_1104b9e10;
  func_0x000107c613fc(&UNK_1104b9e10,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_10;
  *(undefined8 *)(puVar1 + 0x28) = param_11;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_4;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  *(undefined8 *)(puVar1 + 0x60) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x101ffde8c,puVar1);
  return;
}



/* Entry: 101ffe440; end: 101ffe44f;  */

undefined1  [16] FUN_101ffe440(void)

{
  return ZEXT816(0x1104b9e38);
}



/* Entry: 101ffe450; end: 101ffe5ff;  */

undefined * FUN_101ffe450(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5bfec();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  lVar3 = lVar4;
  func_0x000107c410f8();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(lVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffe5c4);
    (*pcVar1)();
  }
  func_0x000107c41100();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(lVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffe5d0);
    (*pcVar1)();
  }
  lVar5 = lVar8;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar8;
    func_0x000107c5b484();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c61170(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffe5e8);
      (*pcVar1)();
    }
    lVar7 = lVar8;
    func_0x000107c3eb1c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c5b4bc();
      func_0x000107c61180();
      if (lVar8 != 0) {
        puVar9 = PTR_PTR_1126c2630;
        func_0x000107c610f8(PTR_PTR_1126c2630);
        func_0x000107c481d4();
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        return puVar9;
      }
      func_0x000107c61170(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffe600);
      (*pcVar1)();
    }
    func_0x000107c61170(lVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffe5f4);
    (*pcVar1)();
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffe5dc);
  (*pcVar1)();
}



/* Entry: 101ffe600; end: 101ffe637;  */

void FUN_101ffe600(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101ffe638; end: 101ffe653;  */

void FUN_101ffe638(long param_1,long param_2)

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



/* Entry: 101ffe654; end: 101ffe6d3;  */

void FUN_101ffe654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4ec38,&UNK_10da4b2c0);
  puVar1 = &UNK_1104b9f30;
  func_0x000107c613fc(&UNK_1104b9f30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101ffe6d4,puVar1);
  return;
}



/* Entry: 101ffe6d4; end: 101ffe857;  */

/* WARNING: Removing unreachable block (ram,0x000101ffe854) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffe6d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  ppuVar6 = &PTR____CFConstantStringClassReference_110f488f8;
  func_0x000107c5faec();
  uVar7 = *(undefined8 *)(lVar1 + _DAT_1130738a8);
  func_0x000107c61434(uVar7);
  uVar4 = param_3;
  func_0x0001000f66f0(ppuVar6,param_3,uVar7);
  func_0x000107c6142c(uVar7);
  if ((((ulong)ppuVar6 & 1) == 0) || (lVar2 = *(long *)(lVar1 + _DAT_1130738d8), lVar2 == 0)) {
    func_0x000107c6142c(param_3);
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f488f8);
    func_0x000107c61170(lVar1);
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c417f8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar4);
    }
    func_0x000100083b20(&lStack_58);
    lVar3 = lStack_58;
    func_0x000107c40110(lStack_58);
    func_0x000107c61180();
    func_0x000107c6142c(param_3);
    func_0x000107c61170(lStack_58);
    puVar5 = PTR_PTR_1126a9da8;
    func_0x000107c610f8();
    func_0x000107c48548();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f488f8);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar1);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 101ffe858; end: 101ffe867;  */

undefined1  [16] FUN_101ffe858(void)

{
  return ZEXT816(0x1104b9f58);
}



/* Entry: 101ffe868; end: 101ffed77;  */

void FUN_101ffe868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4ec38,&UNK_10da4b2c0);
  puVar1 = &UNK_1104ba020;
  func_0x000107c613fc(&UNK_1104ba020,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_8;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(0x101ffe96c,puVar1);
  return;
}



/* Entry: 101ffed78; end: 101ffed87;  */

undefined1  [16] FUN_101ffed78(void)

{
  return ZEXT816(0x1104ba048);
}



/* Entry: 101ffed88; end: 101ffedcf;  */

undefined8 FUN_101ffed88(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e02fe8;
  func_0x0001000285a8(0x112e02fe8,&UNK_10d9d55b0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101ffedd0; end: 101fff577;  */

void FUN_101ffedd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4ec38,&UNK_10da4b2c0);
  puVar1 = &UNK_1104ba110;
  func_0x000107c613fc(&UNK_1104ba110,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_9;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_4;
  *(undefined8 *)(puVar1 + 0x50) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x101ffeed4,puVar1);
  return;
}



/* Entry: 101fff578; end: 101fff587;  */

undefined1  [16] FUN_101fff578(void)

{
  return ZEXT816(0x1104ba138);
}



/* Entry: 101fff588; end: 101fff723;  */

void FUN_101fff588(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  long lStack_98;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lStack_98 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uStack_80 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uStack_80 = ~(-1L << (uVar7 & 0x3f));
  }
  uStack_80 = uStack_80 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  do {
    if (uStack_80 == 0) {
      do {
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101fff724);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar10) {
          FUN_101fff724(param_1,param_2,lStack_98,param_3);
          return;
        }
        uStack_80 = ((ulong *)(param_3 + 0x40))[lVar10];
        lVar6 = lVar6 + 1;
      } while (uStack_80 == 0);
      uVar5 = (uStack_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_80 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_80 = uStack_80 - 1 & uStack_80;
    }
    else {
      uVar5 = (uStack_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_80 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_80 = uStack_80 - 1 & uStack_80;
      lVar10 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar8 = uVar5 | lVar10 << 6;
    puVar4 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10);
    uStack_70 = *puVar4;
    uVar1 = puVar4[1];
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar8 * 8);
    uStack_68 = uVar1;
    uStack_58 = uVar9;
    func_0x000107c61434(uVar1);
    func_0x000107c61174(uVar9);
    puVar4 = &uStack_70;
    (*param_4)(puVar4,&uStack_58);
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar9);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar10;
    if (((ulong)puVar4 & 1) != 0) {
      uVar8 = (uVar5 & 0xffffffffffffffc0 | lVar10 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(lStack_98,1);
      lStack_98 = lStack_98 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101fff6ec);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 101fff724; end: 101fff963;  */

undefined * FUN_101fff724(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar6 = param_4;
    }
    else {
      func_0x0001000285a8(0x112e02f90,&UNK_10d9d5580);
      puVar6 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = *param_1;
      }
      lVar9 = 0;
      do {
        if (uVar13 == 0) {
          do {
            lVar15 = lVar9 + 1;
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101fff95c);
              (*pcVar4)();
            }
            if (param_2 <= lVar15) {
              return puVar6;
            }
            uVar13 = param_1[lVar15];
            lVar9 = lVar9 + 1;
          } while (uVar13 == 0);
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
        }
        else {
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
          lVar15 = lVar9;
        }
        uVar8 = LZCOUNT(uVar8) | lVar15 << 6;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar8 * 0x10);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar8 * 8);
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar6 + 0x28));
        func_0x000107c61434(uVar3);
        func_0x000107c61174();
        puVar7 = auStack_a8;
        func_0x000107c5fb58(puVar7,uVar2,uVar3);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar10 = uVar11 >> 6;
        uVar8 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar8 == 0) {
          bVar5 = false;
          uVar8 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar10 + 1;
            if ((uVar11 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101fff960);
              (*pcVar4)();
            }
            uVar10 = 0;
            if (uVar11 != uVar8) {
              uVar10 = uVar11;
            }
            bVar5 = (bool)(uVar11 == uVar8 | bVar5);
          } while (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar8 = ~*(ulong *)(puVar6 + uVar10 * 8 + 0x40);
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
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
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar6 + uVar10 + 0x40) =
             1L << (uVar8 & 0x3f) | *(ulong *)(puVar6 + uVar10 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar8 * 8) = uVar14;
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        bVar5 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101fff964);
          (*pcVar4)();
        }
        lVar9 = lVar15;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar6;
}



/* Entry: 101fff964; end: 101fffa2f;  */

void FUN_101fff964(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101fffa30);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_101fff588(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fffa2c);
  (*pcVar1)();
}



/* Entry: 101fffa30; end: 101fffc5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fffa30(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lStack_d0;
  undefined1 auStack_a8 [72];
  
  lVar5 = _DAT_1130738a8;
  lStack_d0 = 0;
  uVar12 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_3 + 0x40);
  lVar11 = 0;
LAB_101fffac0:
  do {
    do {
      if (uVar13 == 0) {
        do {
          lVar18 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101fffc60);
            (*pcVar6)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
            FUN_101fff724(param_1,param_2,lStack_d0,param_3);
            return;
          }
          uVar13 = ((ulong *)(param_3 + 0x40))[lVar18];
          lVar11 = lVar11 + 1;
        } while (uVar13 == 0);
        uVar10 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
      }
      else {
        uVar10 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
        lVar18 = lVar11;
      }
      uVar10 = LZCOUNT(uVar10);
      uVar14 = uVar10 | lVar18 << 6;
      lVar17 = *(long *)(param_4 + lVar5);
      lVar11 = lVar18;
    } while (*(long *)(lVar17 + 0x10) == 0);
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar14 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar14 * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar17 + 0x28));
    func_0x000107c61434(uVar3);
    func_0x000107c61174();
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar2,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
    uVar16 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar16 * 0x10);
        uVar9 = *puVar1;
        uVar4 = puVar1[1];
        if ((uVar9 == uVar2 && uVar4 == uVar3) ||
           (func_0x000107c605b8(uVar9,uVar4,uVar2,uVar3,0), (uVar9 & 1) != 0)) {
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(uVar15);
          uVar14 = (uVar10 & 0xffffffffffffffc0 | lVar18 << 6) >> 3;
          *(ulong *)(param_1 + uVar14) = *(ulong *)(param_1 + uVar14) | 1L << (uVar10 & 0x3f);
          bVar7 = SCARRY8(lStack_d0,1);
          lStack_d0 = lStack_d0 + 1;
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101fffc28);
            (*pcVar6)();
          }
          goto LAB_101fffac0;
        }
        uVar16 = uVar16 + 1 & ~uVar14;
      } while ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
    }
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(uVar15);
  } while( true );
}



/* Entry: 101fffc60; end: 101fffeaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fffc60(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *unaff_x21;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 *apuStack_80 [2];
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f)) + 0x3fU >> 6;
  uVar7 = uVar6 * 8;
  puStack_60 = param_2;
  if ((*(byte *)(param_1 + 4) & 0x3f) < 0xe) {
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar5 = uVar7, func_0x000107c61594(uVar7,8), (uVar5 & 1) == 0)) {
      func_0x000107c6158c(uVar7,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_101fff964(apuStack_80,uVar7,uVar6,param_1,FUN_101fffeb0,auStack_70,&puStack_88);
      puVar3 = apuStack_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar3 = puStack_88;
      }
      func_0x000107c61590(uVar7,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x000101fffe5c;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = auStack_90 + -(uVar7 + 0xf & 0x3ffffffffffffff0);
  func_0x000107c60ee4(puVar3,uVar7);
  puVar2 = param_2;
  func_0x000107c61174(param_2);
  FUN_101fffa30(puVar3,uVar6,param_1,puVar2);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar3 = unaff_x21;
  }
  func_0x000107c61170(puVar2);
joined_r0x000101fffe5c:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c61170(param_2);
    param_2 = param_1;
    func_0x000107c61574();
  }
  else {
    iVar1 = 2;
    puStack_88 = puVar3;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_88,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    uVar4 = *param_2;
    func_0x0001000f66f0(uVar4,param_2[1],*(undefined8 *)(param_1[2] + _DAT_1130738a8));
    return (undefined1 *)(ulong)((uint)uVar4 & 1);
  }
  return puVar3;
}



/* Entry: 101fffeb0; end: 101fffef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101fffeb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_1;
  func_0x0001000f66f0(uVar1,param_1[1],*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130738a8)
                     );
  return (uint)uVar1 & 1;
}



/* Entry: 101fffef4; end: 10200061f;  */

void FUN_101fffef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4ec38,&UNK_10da4b2c0);
  puVar1 = &UNK_1104ba1e0;
  func_0x000107c613fc(&UNK_1104ba1e0,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_10;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_9;
  *(undefined8 *)(puVar1 + 0x30) = param_8;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_5;
  *(undefined8 *)(puVar1 + 0x58) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x10200000c,puVar1);
  return;
}



/* Entry: 102000620; end: 10200062f;  */

undefined1  [16] FUN_102000620(void)

{
  return ZEXT816(0x1104ba208);
}



/* Entry: 102000630; end: 10200085f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102000630(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lStack_d0;
  undefined1 auStack_a8 [72];
  
  lVar5 = _DAT_1130738a8;
  lStack_d0 = 0;
  uVar12 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_3 + 0x40);
  lVar11 = 0;
LAB_1020006c0:
  do {
    do {
      if (uVar13 == 0) {
        do {
          lVar18 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102000860);
            (*pcVar6)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
            FUN_101fff724(param_1,param_2,lStack_d0,param_3);
            return;
          }
          uVar13 = ((ulong *)(param_3 + 0x40))[lVar18];
          lVar11 = lVar11 + 1;
        } while (uVar13 == 0);
        uVar10 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
      }
      else {
        uVar10 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
        lVar18 = lVar11;
      }
      uVar10 = LZCOUNT(uVar10);
      uVar14 = uVar10 | lVar18 << 6;
      lVar17 = *(long *)(param_4 + lVar5);
      lVar11 = lVar18;
    } while (*(long *)(lVar17 + 0x10) == 0);
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar14 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar14 * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar17 + 0x28));
    func_0x000107c61434(uVar3);
    func_0x000107c61174();
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar2,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
    uVar16 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar16 * 0x10);
        uVar9 = *puVar1;
        uVar4 = puVar1[1];
        if ((uVar9 == uVar2 && uVar4 == uVar3) ||
           (func_0x000107c605b8(uVar9,uVar4,uVar2,uVar3,0), (uVar9 & 1) != 0)) {
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(uVar15);
          uVar14 = (uVar10 & 0xffffffffffffffc0 | lVar18 << 6) >> 3;
          *(ulong *)(param_1 + uVar14) = *(ulong *)(param_1 + uVar14) | 1L << (uVar10 & 0x3f);
          bVar7 = SCARRY8(lStack_d0,1);
          lStack_d0 = lStack_d0 + 1;
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102000828);
            (*pcVar6)();
          }
          goto LAB_1020006c0;
        }
        uVar16 = uVar16 + 1 & ~uVar14;
      } while ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
    }
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(uVar15);
  } while( true );
}



/* Entry: 102000860; end: 102000aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102000860(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *unaff_x21;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 *apuStack_80 [2];
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f)) + 0x3fU >> 6;
  uVar7 = uVar6 * 8;
  puStack_60 = param_2;
  if ((*(byte *)(param_1 + 4) & 0x3f) < 0xe) {
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar5 = uVar7, func_0x000107c61594(uVar7,8), (uVar5 & 1) == 0)) {
      func_0x000107c6158c(uVar7,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_101fff964(apuStack_80,uVar7,uVar6,param_1,FUN_102000ab0,auStack_70,&puStack_88);
      puVar3 = apuStack_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar3 = puStack_88;
      }
      func_0x000107c61590(uVar7,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x000102000a5c;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = auStack_90 + -(uVar7 + 0xf & 0x3ffffffffffffff0);
  func_0x000107c60ee4(puVar3,uVar7);
  puVar2 = param_2;
  func_0x000107c61174(param_2);
  FUN_102000630(puVar3,uVar6,param_1,puVar2);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar3 = unaff_x21;
  }
  func_0x000107c61170(puVar2);
joined_r0x000102000a5c:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c61170(param_2);
    param_2 = param_1;
    func_0x000107c61574();
  }
  else {
    iVar1 = 2;
    puStack_88 = puVar3;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_88,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    uVar4 = *param_2;
    func_0x0001000f66f0(uVar4,param_2[1],*(undefined8 *)(param_1[2] + _DAT_1130738a8));
    return (undefined1 *)(ulong)((uint)uVar4 & 1);
  }
  return puVar3;
}



/* Entry: 102000ab0; end: 102000af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102000ab0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_1;
  func_0x0001000f66f0(uVar1,param_1[1],*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130738a8)
                     );
  return (uint)uVar1 & 1;
}



/* Entry: 102000af4; end: 1020010d3;  */

void FUN_102000af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4ec38,&UNK_10da4b2c0);
  puVar1 = &UNK_1104ba2b0;
  func_0x000107c613fc(&UNK_1104ba2b0,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x102000be0,puVar1);
  return;
}



/* Entry: 1020010d4; end: 1020010e3;  */

undefined1  [16] FUN_1020010d4(void)

{
  return ZEXT816(0x1104ba2d8);
}



/* Entry: 1020010e4; end: 102001127;  */

void FUN_1020010e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4ec40 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c27a8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e4ec40 = puVar1;
  return;
}



/* Entry: 102001128; end: 10200147f;  */

void FUN_102001128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4ec38,&UNK_10da4b2c0);
  puVar1 = &UNK_1104ba380;
  func_0x000107c613fc(&UNK_1104ba380,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(0x102001208,puVar1);
  return;
}



/* Entry: 102001480; end: 10200148f;  */

undefined1  [16] FUN_102001480(void)

{
  return ZEXT816(0x1104ba3a8);
}



/* Entry: 102001490; end: 1020014ab;  */

void FUN_102001490(void)

{
  func_0x000102002e68(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1020014ac; end: 10200155b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020014ac(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0;
  FUN_102001710();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e4ec78) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112e4ec80) = param_2;
  *(undefined1 *)(lVar3 + _DAT_112e4ec88) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112e4ec90) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 10200155c; end: 1020015bb; -[_TtC24SelectionContactsSection31SelectionContactsSectionCreator init] */

void FUN_10200155c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelectionContactsSection.SelectionContactsSectionCreator",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102001588);
  (*pcVar1)();
}



/* Entry: 1020015bc; end: 1020015cb; -[_TtC24SelectionContactsSection31SelectionContactsSectionCreator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020015bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e4ec48));
  return;
}



/* Entry: 1020015cc; end: 102001647; -[_TtC24SelectionContactsSection31SelectionContactsSectionCreator sectionForDescriptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020015cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112e4ec48);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c51b64(lVar2,param_2,param_3);
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102001648);
  (*pcVar1)();
}



/* Entry: 102001648; end: 102001667;  */

void FUN_102001648(void)

{
  func_0x000107c61168(&PTR_PTR_112815738);
  return;
}



/* Entry: 102001668; end: 1020016c7; -[_TtC24SelectionContactsSection34SelectionContactsSectionDataSource init] */

void FUN_102001668(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelectionContactsSection.SelectionContactsSectionDataSource",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102001694);
  (*pcVar1)();
}



/* Entry: 1020016c8; end: 10200170f; -[_TtC24SelectionContactsSection34SelectionContactsSectionDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020016c8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e4ec78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e4ec80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e4ec90));
  return;
}



/* Entry: 102001710; end: 10200172f;  */

void FUN_102001710(void)

{
  func_0x000107c61168(&PTR_PTR_1128157f8);
  return;
}



/* Entry: 102001730; end: 102001853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102001730(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lStack_50 = 0;
    uVar1 = 0;
    FUN_102001e64(0,0x112e4ecd8,&PTR_PTR_1126bb3f0);
    func_0x000107c5fc50(param_1,&lStack_50,uVar1);
    lVar3 = lStack_50;
    if (lStack_50 != 0) {
      lVar2 = lStack_50;
      func_0x000107c5fc48(lStack_50,uVar1);
      func_0x000107c6142c(lVar3);
      lVar3 = lVar2;
      func_0x0001064e555c(lVar2,param_2,*(undefined1 *)(param_3 + _DAT_112e4ec88),1,
                          *(undefined8 *)(param_3 + _DAT_112e4ec90));
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
        func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c453e4();
      }
      func_0x000107c61170(param_3);
      return;
    }
    func_0x000107c61170(param_3);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c453e4();
  return;
}



/* Entry: 102001854; end: 102001973; -[_TtC24SelectionContactsSection34SelectionContactsSectionDataSource snapchattersContactNonSnapchatterObservableForSectionIdentifier:query:] */

void FUN_102001854(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  func_0x000102001b2c();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102001974; end: 102001a67;  */

void FUN_102001974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "contactPhotosObservable()";
  func_0x0001000c10c0("contactPhotosObservable()");
  func_0x000107c61180();
  puVar2 = &UNK_1104ba4f0;
  func_0x000107c613fc(&UNK_1104ba4f0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  uStack_50 = 0x102001e58;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104ba508;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c614b0(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102001a68; end: 102001ab3;  */

void FUN_102001a68(long param_1,long param_2)

{
  long lStack_28;
  
  if ((param_1 == 0) && (param_2 != 0)) {
    lStack_28 = param_2;
    func_0x000107c61174(param_2);
    func_0x000100087f6c(&lStack_28);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102001ab4; end: 102001d9f;  */

/* WARNING: Possible PIC construction at 0x000102001b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102001b14) */

void FUN_102001ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102001da0; end: 102001da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102001da0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lStack_50 = 0;
    uVar2 = 0;
    FUN_102001e64(0,0x112e4ecd8,&PTR_PTR_1126bb3f0);
    func_0x000107c5fc50(param_1,&lStack_50,uVar2);
    lVar4 = lStack_50;
    if (lStack_50 != 0) {
      lVar3 = lStack_50;
      func_0x000107c5fc48(lStack_50,uVar2);
      func_0x000107c6142c(lVar4);
      lVar4 = lVar3;
      func_0x0001064e555c(lVar3,param_2,*(undefined1 *)(lVar1 + _DAT_112e4ec88),1,
                          *(undefined8 *)(lVar1 + _DAT_112e4ec90));
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 == 0) {
        func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c453e4();
      }
      func_0x000107c61170(lVar1);
      return;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c453e4();
  return;
}



/* Entry: 102001da8; end: 102001dd7;  */

void FUN_102001da8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 102001dd8; end: 102001e2b;  */

void FUN_102001dd8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e4ecc8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_102001e64(0xff,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112e4ecc8 = puVar2;
  return;
}



/* Entry: 102001e2c; end: 102001e63;  */

void FUN_102001e2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  uStack_40 = 0x102001e34;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102001ab4;
  puStack_48 = &UNK_1104ba4b8;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4b71c(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 102001e64; end: 102001ea3;  */

void FUN_102001e64(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102001ea4; end: 102001eab;  */

void FUN_102001ea4(long param_1,long param_2)

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



/* Entry: 102001eac; end: 102001f33; -[_TtC24SelectionContactsSection34SelectionContactsSectionDescriptor sectionDescriptorForIdentifier:query:] */

void FUN_102001eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102001fc4(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102001f34; end: 102001f6f; -[_TtC24SelectionContactsSection34SelectionContactsSectionDescriptor init] */

void FUN_102001f34(undefined8 param_1)

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



/* Entry: 102001f70; end: 102001fc3;  */

void FUN_102001f70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102001fc4; end: 102002113;  */

undefined * FUN_102001fc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_102002eac();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  uVar2 = uVar1;
  func_0x000106c9d38c(uVar1,0,1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000106c9c838();
  func_0x000107c61180();
  func_0x000107c5fadc(param_1,param_2);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c4f78c();
    func_0x000107c61180();
    lVar3 = param_3;
    if (param_3 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(param_3);
      goto LAB_102002080;
    }
  }
  param_2 = 0xe000000000000000;
LAB_102002080:
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  uVar4 = param_1;
  func_0x000106c9c378(param_1,lVar3,uVar2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  return puVar5;
}



/* Entry: 102002114; end: 10200214b;  */

void FUN_102002114(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10200214c; end: 10200216b; -[_TtC24SelectionContactsSection33SelectionContactsSectionExtension sectionDescriptor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200214c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e4ed08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10200216c; end: 10200218b; -[_TtC24SelectionContactsSection33SelectionContactsSectionExtension sectionIndexer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200216c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e4ed10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10200218c; end: 1020021db; -[_TtC24SelectionContactsSection33SelectionContactsSectionExtension sectionIdentifiers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200218c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e4ed18);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fe08();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1020021dc; end: 102002253; -[_TtC24SelectionContactsSection33SelectionContactsSectionExtension sectionCreator] */

void FUN_1020021dc(void)

{
  func_0x0001020021fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102002254; end: 102002287; -[_TtC24SelectionContactsSection33SelectionContactsSectionExtension setSectionCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102002254(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e4ed20);
  *(undefined8 *)(param_1 + _DAT_112e4ed20) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102002288; end: 102002ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102002288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  
  func_0x000107c610f8();
  lVar3 = _DAT_112e4ed08;
  uVar1 = 0;
  func_0x000102001fa4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar1;
  lVar3 = _DAT_112e4ed10;
  puVar2 = PTR_PTR_1126b2810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e4ed20) = 0;
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = param_2;
  *(undefined8 *)(lVar3 + 0x28) = param_3;
  lVar4 = lVar3;
  func_0x000100403a6c();
  func_0x000107c61588(lVar3);
  func_0x000100bcb1dc((undefined8 *)(lVar3 + 0x20));
  *(long *)(unaff_x20 + _DAT_112e4ed18) = lVar4;
  lVar4 = 0;
  FUN_102001648();
  lVar3 = lVar4;
  func_0x000107c610f8();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_b8 = FUN_102001490;
  puStack_b0 = (undefined *)0x0;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0x42000000;
  uStack_c8 = 0x102002c18;
  puStack_c0 = &UNK_1104ba530;
  ppuVar6 = &puStack_d8;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_9);
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_1104ba568;
  func_0x000107c613fc(&UNK_1104ba568,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  puVar2[0x20] = param_8;
  *(undefined8 *)(puVar2 + 0x28) = param_9;
  pcStack_b8 = (code *)0x102002b98;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0x42000000;
  uStack_c8 = 0x102002c1c;
  puStack_c0 = &UNK_1104ba580;
  ppuVar6 = &puStack_d8;
  puStack_b0 = puVar2;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_b0;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_9);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar2 = PTR_PTR_1126b51c0;
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c454dc();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar5);
  *(undefined **)(lVar3 + _DAT_112e4ec48) = puVar2;
  plVar8 = &lStack_e8;
  lStack_e8 = lVar3;
  lStack_e0 = lVar4;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_10);
  *(long **)(unaff_x20 + _DAT_112e4ed28) = plVar8;
  puVar9 = auStack_f8;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_10);
  return puVar9;
}



/* Entry: 102002ab4; end: 102002b13; -[_TtC24SelectionContactsSection33SelectionContactsSectionExtension init] */

void FUN_102002ab4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelectionContactsSection.SelectionContactsSectionExtension",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102002ae0);
  (*pcVar1)();
}



/* Entry: 102002b14; end: 102002b7b; -[_TtC24SelectionContactsSection33SelectionContactsSectionExtension .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102002b40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102002b44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102002b14(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e4ed28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e4ed08));
  return;
}



/* Entry: 102002b7c; end: 102002ba7;  */

void FUN_102002b7c(long param_1,long param_2)

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



/* Entry: 102002ba8; end: 102002bfb;  */

void FUN_102002ba8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102002bfc; end: 102002c1f;  */

void FUN_102002bfc(long param_1,long param_2)

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



/* Entry: 102002c20; end: 102002cd3;  */

undefined8
FUN_102002c20(undefined8 param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f8a4d8;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f8a4d8);
  func_0x000107c5fadc(param_6,param_7);
  func_0x000105e53d54(param_1,param_4,ppuVar1,param_5,param_6,param_2 & 1,param_3 & 1,1);
  func_0x000107c61180();
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(param_6);
  return param_1;
}



/* Entry: 102002cd4; end: 102002d6b; -[_TtC24SelectionContactsSection39SelectionContactsSectionViewModelSource contactNonSnapchatterViewModelGeneratorForSectionIdentifier:] */

void FUN_102002cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  
  ppuVar2 = &puStack_50;
  func_0x000107c5faec();
  puVar1 = &UNK_1104ba630;
  func_0x000107c613fc(&UNK_1104ba630,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcStack_30 = FUN_102002e88;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  pcStack_40 = FUN_102002d6c;
  puStack_38 = &UNK_1104ba648;
  puStack_28 = puVar1;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c61574(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 102002d6c; end: 102002df7;  */

void FUN_102002d6c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102002df8; end: 102002e33; -[_TtC24SelectionContactsSection39SelectionContactsSectionViewModelSource init] */

void FUN_102002df8(undefined8 param_1)

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



/* Entry: 102002e34; end: 102002e87;  */

void FUN_102002e34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102002e88; end: 102002eab;  */

undefined8
FUN_102002e88(undefined8 param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar2 = &PTR____CFConstantStringClassReference_110f8a4d8;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f8a4d8);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000105e53d54(param_1,param_4,ppuVar2,param_5,uVar3,param_2 & 1,param_3 & 1,1);
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(uVar3);
  return param_1;
}



/* Entry: 102002eac; end: 102002f7b;  */

undefined1  [16] FUN_102002eac(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x73746361746e6f63;
  func_0x000107c5fadc(0x73746361746e6f63,0xef7265646165685f);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f055260);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102002f7c);
  (*pcVar1)();
}



/* Entry: 102002f7c; end: 102002f9b; -[_TtC29SCRecipientPickerSectionScope29SCRecipientPickerSectionScope actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102002f7c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e4ed80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102002f9c; end: 102002fbb; -[_TtC29SCRecipientPickerSectionScope29SCRecipientPickerSectionScope eventTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102002f9c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e4ed88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102002fbc; end: 102002fdb; -[_TtC29SCRecipientPickerSectionScope29SCRecipientPickerSectionScope performer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102002fbc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e4ed90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102002fdc; end: 102002ffb; -[_TtC29SCRecipientPickerSectionScope29SCRecipientPickerSectionScope selectionTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102002fdc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e4ed98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102002ffc; end: 10200300b; -[_TtC29SCRecipientPickerSectionScope29SCRecipientPickerSectionScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102002ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e4eda0));
  return;
}



/* Entry: 10200300c; end: 1020030a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200300c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4ed80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e4ed88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e4ed90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4ed98) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e4eda0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020030a8; end: 10200316f; -[_TtC29SCRecipientPickerSectionScope29SCRecipientPickerSectionScope initWithActionHandler:eventTracker:performer:selectionTracker:plugInRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020030a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e4ed80) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e4ed88) = param_4;
  *(undefined8 *)(param_1 + _DAT_112e4ed90) = param_5;
  *(undefined8 *)(param_1 + _DAT_112e4ed98) = param_6;
  *(undefined8 *)(param_1 + _DAT_112e4eda0) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}


