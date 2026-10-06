/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ff9d84; end: 101ff9e03;  */

void FUN_101ff9d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 101ff9e04; end: 101ff9efb;  */

void FUN_101ff9e04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e4e938,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4e938,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b9660;
  func_0x000107c613fc(&UNK_1104b9660,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101ffa01c;
  func_0x00010058fa64(0x101ffa01c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ff9efc; end: 101ff9f27;  */

void FUN_101ff9efc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ff9f28; end: 101ff9f2f;  */

void FUN_101ff9f28(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4e938,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4e938,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b9660;
  func_0x000107c613fc(&UNK_1104b9660,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101ffa01c;
  func_0x00010058fa64(0x101ffa01c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ff9f30; end: 101ff9f8b;  */

void FUN_101ff9f30(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4e938,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4e938,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101ff9f8c; end: 101ffa027;  */

undefined ** FUN_101ff9f8c(void)

{
  return &PTR_DAT_113073918;
}



/* Entry: 101ffa028; end: 101ffa06f; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa028(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e9a8;
  func_0x000107c61428(param_1 + _DAT_112e4e9a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ffa070; end: 101ffa0c7; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e9a8;
  func_0x000107c61428(param_1 + _DAT_112e4e9a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ffa0c8; end: 101ffa10f; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint recipientPickerSectionSaberPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa0c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e9b0;
  func_0x000107c61428(param_1 + _DAT_112e4e9b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101ffa110; end: 101ffa11b; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint setRecipientPickerSectionSaberPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa110(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e9b0;
  func_0x000107c61428(param_1 + _DAT_112e4e9b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101ffa11c; end: 101ffa163; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint sCRecipientPickerSectionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa11c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e9b8;
  func_0x000107c61428(param_1 + _DAT_112e4e9b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101ffa164; end: 101ffa16f; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint setSCRecipientPickerSectionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa164(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e9b8;
  func_0x000107c61428(param_1 + _DAT_112e4e9b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101ffa170; end: 101ffa1b7; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint recipientPickerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa170(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e9c0;
  func_0x000107c61428(param_1 + _DAT_112e4e9c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101ffa1b8; end: 101ffa1c3; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint setRecipientPickerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa1b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e9c0;
  func_0x000107c61428(param_1 + _DAT_112e4e9c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101ffa1c4; end: 101ffa223;  */

void FUN_101ffa1c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101ffa224; end: 101ffa45b;  */

/* WARNING: Possible PIC construction at 0x000101ffa390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffa3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffa3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffa3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffa3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffa430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ffa3d0) */
/* WARNING: Removing unreachable block (ram,0x000101ffa3c0) */
/* WARNING: Removing unreachable block (ram,0x000101ffa3a4) */
/* WARNING: Removing unreachable block (ram,0x000101ffa394) */
/* WARNING: Removing unreachable block (ram,0x000101ffa434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa224(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c4fa5c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51220();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c4fa58();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_101ff96a4();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_101ff991c();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ffa45c);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112e4e8c8) = lVar5;
        *(long *)(lVar4 + _DAT_112e4e8d0) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 101ffa45c; end: 101ffa483; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101ffa45c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ffa224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ffa484; end: 101ffa4c7; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint end] */

void FUN_101ffa484(undefined8 param_1)

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



/* Entry: 101ffa4c8; end: 101ffa73b;  */

void FUN_101ffa4c8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0fab830)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f0547d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0fab800)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000024,0x800000010f054800,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0fab7d0)) &&
               (func_0x000107c605b8(0xd00000000000002e,0x800000010f054830,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "RecipientPickerScopeGraphBridge/SCRecipientPickerScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x56,2,0x38,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffa73c);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57bdc();
            goto LAB_101ffa554;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c587c8();
        goto LAB_101ffa554;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57be0();
  }
LAB_101ffa554:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101ffa73c; end: 101ffa7e7; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101ffa73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ffa4c8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ffa7e8; end: 101ffa86b; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa7e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4e9a8,0);
  *(undefined8 *)(param_1 + _DAT_112e4e9b0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4e9b8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4e9c0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4e9c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ffa86c; end: 101ffa89f;  */

void FUN_101ffa86c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ffa8a0; end: 101ffa907; -[SCRecipientPickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ffa8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffa8ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ffa8d0) */
/* WARNING: Removing unreachable block (ram,0x000101ffa8f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa8a0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4e9a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4e9b0));
  return;
}



/* Entry: 101ffa908; end: 101ffa927;  */

void FUN_101ffa908(void)

{
  func_0x000107c61168(&PTR_PTR_112815110);
  return;
}



/* Entry: 101ffa928; end: 101ffa96f; -[SCSCRecipientPickerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa928(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4e9f8;
  func_0x000107c61428(param_1 + _DAT_112e4e9f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ffa970; end: 101ffa9c7; -[SCSCRecipientPickerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4e9f8;
  func_0x000107c61428(param_1 + _DAT_112e4e9f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ffa9c8; end: 101ffaa9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffa9c8(undefined8 param_1,long param_2)

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
    FUN_101ff98fc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4e900) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ffaaa0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4e908);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4ea00);
    *(long **)(unaff_x20 + _DAT_112e4ea00) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101ffaaa0; end: 101ffaac7; -[SCSCRecipientPickerScopedServicesSaberEntryPoint begin] */

void FUN_101ffaaa0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ffa9c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ffaac8; end: 101ffac3f;  */

/* WARNING: Possible PIC construction at 0x000101ffab30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffabc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ffab34) */
/* WARNING: Removing unreachable block (ram,0x000101ffabcc) */
/* WARNING: Removing unreachable block (ram,0x000101ffabe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffaac8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4ea00);
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



/* Entry: 101ffac40; end: 101ffac47;  */

void FUN_101ffac40(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ffac48; end: 101ffac7b; -[SCSCRecipientPickerScopedServicesSaberEntryPoint end] */

void FUN_101ffac48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ffaac8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ffac7c; end: 101ffad9b;  */

void FUN_101ffac7c(long param_1,long param_2,long param_3)

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
                        "RecipientPickerScopeGraphBridge/SCSCRecipientPickerScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffad9c);
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



/* Entry: 101ffad9c; end: 101ffae47; -[SCSCRecipientPickerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101ffad9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ffac7c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ffae48; end: 101ffaea7; -[SCSCRecipientPickerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffae48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4e9f8,0);
  *(undefined8 *)(param_1 + _DAT_112e4ea00) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ffaea8; end: 101ffaedb;  */

void FUN_101ffaea8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ffaedc; end: 101ffaf13; -[SCSCRecipientPickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffaedc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4e9f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4ea00));
  return;
}



/* Entry: 101ffaf14; end: 101ffaf33;  */

void FUN_101ffaf14(void)

{
  func_0x000107c61168(&PTR_PTR_1128151e8);
  return;
}



/* Entry: 101ffaf34; end: 101ffb01f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffaf34(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  func_0x000100083b20(&uStack_38);
  FUN_101ffb394();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e4ea38) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e4ea40) = uStack_38;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c6157c(param_2);
  plVar4 = &lStack_48;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 101ffb020; end: 101ffb03f;  */

void FUN_101ffb020(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ffb040; end: 101ffb09f; -[_TtC61RecipientPickerSectionSaberPluginScopedFactoryServiceProvider47RecipientPickerSectionSaberPluginScopedServices init] */

void FUN_101ffb040(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecipientPickerSectionSaberPluginScopedFactoryServiceProvider.RecipientPickerSectionSaberPluginScopedServices"
                      ,0x6d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffb06c);
  (*pcVar1)();
}



/* Entry: 101ffb0a0; end: 101ffb0d7; -[_TtC61RecipientPickerSectionSaberPluginScopedFactoryServiceProvider47RecipientPickerSectionSaberPluginScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ffb0bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ffb0c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffb0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4ea40));
  return;
}



/* Entry: 101ffb0d8; end: 101ffb143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffb0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b9890;
  func_0x000107c613fc(&UNK_1104b9890,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101ffb42c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101ffb144; end: 101ffb153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffb144(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112e4ea38));
  return;
}



/* Entry: 101ffb154; end: 101ffb1ef;  */

void FUN_101ffb154(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_1104b9788;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b9798;
  return;
}



/* Entry: 101ffb1f0; end: 101ffb227;  */

void FUN_101ffb1f0(long *param_1)

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



/* Entry: 101ffb228; end: 101ffb22f;  */

undefined8 FUN_101ffb228(void)

{
  return 0x1b;
}



/* Entry: 101ffb230; end: 101ffb363;  */

void FUN_101ffb230(undefined8 *param_1)

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
  puVar1 = &UNK_1104b98b8;
  func_0x000107c613fc(&UNK_1104b98b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ffb404;
  func_0x00010058fa64(FUN_101ffb404,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ffb364; end: 101ffb393;  */

undefined ** FUN_101ffb364(void)

{
  return &PTR_DAT_112e4efb8;
}



/* Entry: 101ffb394; end: 101ffb3b3;  */

void FUN_101ffb394(void)

{
  func_0x000107c61168(&PTR_PTR_1128152a8);
  return;
}



/* Entry: 101ffb3b4; end: 101ffb403;  */

undefined1  [16] FUN_101ffb3b4(void)

{
  return ZEXT816(0x1104b97f0);
}



/* Entry: 101ffb404; end: 101ffb42b;  */

void FUN_101ffb404(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101ffb42c; end: 101ffb42f;  */

void FUN_101ffb42c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ffb430; end: 101ffb783;  */

void FUN_101ffb430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4eab0,&UNK_10da4af20);
  puVar1 = &UNK_1104b9900;
  func_0x000107c613fc(&UNK_1104b9900,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
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
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x0001000823a8(FUN_101ffb784,puVar1);
  return;
}



/* Entry: 101ffb784; end: 101ffb7c7;  */

void FUN_101ffb784(void)

{
  long unaff_x20;
  
  func_0x000101ffb5bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 101ffb7c8; end: 101ffb7d7;  */

undefined1  [16] FUN_101ffb7c8(void)

{
  return ZEXT816(0x1104b9928);
}



/* Entry: 101ffb7d8; end: 101ffbc43;  */

void FUN_101ffb7d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e4eac0,&UNK_10da4af78);
  puVar1 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101ffc9b4();
  func_0x000100082720("RecipientPickerSectionSaberPluginScopeGraphBridgeServicesServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112e4eac8,&UNK_10da4af80);
  puVar3 = &UNK_1104b9970;
  func_0x000107c613fc(&UNK_1104b9970,0xa0,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_11;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_8;
  *(undefined8 *)(puVar3 + 0x38) = param_10;
  *(undefined8 *)(puVar3 + 0x40) = param_14;
  *(undefined8 *)(puVar3 + 0x48) = param_15;
  *(undefined8 *)(puVar3 + 0x50) = param_7;
  *(undefined8 *)(puVar3 + 0x58) = param_6;
  *(undefined8 *)(puVar3 + 0x60) = param_13;
  *(undefined8 *)(puVar3 + 0x68) = param_17;
  *(undefined8 *)(puVar3 + 0x70) = param_9;
  *(undefined8 *)(puVar3 + 0x78) = param_12;
  *(undefined8 *)(puVar3 + 0x80) = param_18;
  *(undefined8 *)(puVar3 + 0x88) = param_3;
  *(undefined8 *)(puVar3 + 0x90) = param_19;
  *(undefined8 *)(puVar3 + 0x98) = param_16;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_16);
  uVar10 = 0x101ffbd34;
  func_0x0001000823a8(0x101ffbd34,puVar3);
  func_0x000100082720("RecipientPickerSectionSaberPluginRegistryServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101ffb1f0;
  func_0x0001000823a8(FUN_101ffb1f0,0);
  func_0x000100082720("RecipientPickerSectionSaberPluginScopedServicesCleanupRelayServiceProvider",
                      0x4a,2);
  puVar5 = puVar1;
  FUN_10200326c(puVar1,uVar10);
  func_0x000100082720("RecipientPickerSectionPluginCollectionServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e4ead0,&UNK_10da4af90);
  puVar3 = &UNK_1104b9998;
  func_0x000107c613fc(&UNK_1104b9998,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar4);
  pcVar6 = FUN_101ffbd78;
  func_0x0001000823a8(FUN_101ffbd78,puVar3);
  func_0x000100082720("RecipientPickerSectionSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x51,2);
  func_0x0001000285a8(0x112e4ea50,&UNK_10da4ac90);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x101ffbd84;
  func_0x0001000823a8(0x101ffbd84,pcVar6);
  func_0x000100082720("RecipientPickerSectionSaberPluginScopeInitializationServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e4ea30,&UNK_10da4ac80);
  puVar3 = &UNK_1104b99c0;
  func_0x000107c613fc(&UNK_1104b99c0,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101ffbd8c;
  func_0x0001000823a8(0x101ffbd8c,puVar3);
  func_0x000100082720("RecipientPickerSectionSaberPluginScopedServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e4ea48,&UNK_10da4ac88);
  puVar3 = &UNK_1104b99e8;
  func_0x000107c613fc(&UNK_1104b99e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar9 = FUN_101ffbdc0;
  func_0x0001000823a8(FUN_101ffbdc0,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("RecipientPickerSectionSaberPluginScopeEntryPointProvider",0x38,2);
  *param_1 = pcVar9;
  return;
}



/* Entry: 101ffbc44; end: 101ffbd77;  */

void FUN_101ffbc44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ffbd78; end: 101ffbd93;  */

void FUN_101ffbd78(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101ffc248(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("RecipientPickerSectionSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x51,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ffbd94; end: 101ffbdbf;  */

void FUN_101ffbd94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ffbdc0; end: 101ffbdc7;  */

void FUN_101ffbdc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_1104b9788;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b9798;
  return;
}



/* Entry: 101ffbdc8; end: 101ffbfa3;  */

/* WARNING: Possible PIC construction at 0x000101ffbefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffbf0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffbf1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffbf2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffbf3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffbf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffbf5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffbf6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffbf7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ffbf70) */
/* WARNING: Removing unreachable block (ram,0x000101ffbf60) */
/* WARNING: Removing unreachable block (ram,0x000101ffbf50) */
/* WARNING: Removing unreachable block (ram,0x000101ffbf40) */
/* WARNING: Removing unreachable block (ram,0x000101ffbf30) */
/* WARNING: Removing unreachable block (ram,0x000101ffbf20) */
/* WARNING: Removing unreachable block (ram,0x000101ffbf10) */
/* WARNING: Removing unreachable block (ram,0x000101ffbf00) */
/* WARNING: Removing unreachable block (ram,0x000101ffbf80) */

void FUN_101ffbdc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104b9a10;
  func_0x000107c613fc(&UNK_1104b9a10,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  uVar2 = 0x112e4ead8;
  func_0x0001000285a8(0x112e4ead8,&UNK_10da4af98);
  func_0x000107c613fc();
  pcVar3 = FUN_101ffc1b8;
  func_0x0001000841fc(FUN_101ffc1b8,puVar1,uVar2);
  func_0x000100084214("RecipientPickerSectionSaberPluginRegistryServiceProvider",0x38,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101ffbfa4; end: 101ffc1b7;  */

void FUN_101ffbfa4(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20,
                  undefined4 param_21,undefined8 param_22)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        FUN_101ffd910(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
        pcVar2 = "RecipientPickerBestFriendSectionSaberPluginProvider";
        uVar3 = 0x33;
      }
      else {
        FUN_102001128(param_3,param_4,param_6,param_11,param_8,param_9,param_10);
        pcVar2 = "RecipientPickerContactsSectionSaberPluginProvider";
        uVar3 = 0x31;
      }
    }
    else if (bVar1 == 2) {
      FUN_101ffdd60(param_3,param_4,param_5,param_12);
      pcVar2 = "RecipientPickerCurrentMemberSectionSaberPluginProvider";
      uVar3 = 0x36;
    }
    else {
      FUN_101ffe654(param_4,param_9);
      pcVar2 = "RecipientPickerDescriptionSectionSaberPluginProvider";
      uVar3 = 0x34;
      param_3 = param_4;
    }
  }
  else if (bVar1 < 6) {
    if (bVar1 == 4) {
      FUN_101ffe868(param_3,param_4,param_6,param_7,param_16,param_8,param_17,param_9,param_18);
      pcVar2 = "RecipientPickerGroupSectionSaberPluginProvider";
      uVar3 = 0x2e;
    }
    else {
      FUN_101ffedd0(param_3,param_4,param_5,param_6,param_7,param_16,param_8,param_13,param_9);
      pcVar2 = "RecipientPickerRecipientSectionSaberPluginProvider";
      uVar3 = 0x32;
    }
  }
  else if (bVar1 == 6) {
    FUN_101fffef4(param_3,param_4,param_19);
    pcVar2 = "RecipientPickerSnapchatterSectionSaberPluginProvider";
    uVar3 = 0x34;
  }
  else {
    FUN_102000af4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_22);
    pcVar2 = "RecipientPickerSortableSnapchatterSectionSaberPluginProvider";
    uVar3 = 0x3c;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_3;
  return;
}



/* Entry: 101ffc1b8; end: 101ffc20b;  */

void FUN_101ffc1b8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101ffbfa4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 101ffc20c; end: 101ffc247;  */

void FUN_101ffc20c(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ffc248();
  func_0x0001000a7f38("RecipientPickerSectionSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x51,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101ffc248; end: 101ffc3df;  */

void FUN_101ffc248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104baa10;
  ppuVar4 = &PTR_DAT_112e4efb8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104b9a38;
  func_0x000107c613fc(&UNK_1104b9a38,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e4eae0;
  func_0x0001000285a8(0x112e4eae0,&UNK_10da4afa0);
  func_0x0001000a6ee8(&UNK_1104b9bf8,
                      "RecipientPickerSectionSaberPluginScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x4d,2,FUN_101ffc3e0,puVar2,uVar3,&UNK_1104b9bf8,&PTR_DAT_112e4eb70);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1104b9a60;
  func_0x000107c613fc(&UNK_1104b9a60,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104b9830,
                      "RecipientPickerSectionSaberPluginScopedServicesScopeInitializationPluginKey",
                      0x4b,2,FUN_101ffc4c8,puVar2,uVar3,&UNK_1104b9830,&PTR_DAT_112e4ea58);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4eae8;
  func_0x0001000285a8(0x112e4eae8,&UNK_10da4afa8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101ffc3e0; end: 101ffc41f;  */

void FUN_101ffc3e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101ffca98(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("RecipientPickerSectionSaberPluginScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ffc420; end: 101ffc4c7;  */

void FUN_101ffc420(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b9a88;
  func_0x000107c613fc(&UNK_1104b9a88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101ffc4fc;
  func_0x0001000823a8(FUN_101ffc4fc,puVar1);
  func_0x000100082720("RecipientPickerSectionSaberPluginScopedServicesScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101ffc4c8; end: 101ffc4cf;  */

void FUN_101ffc4c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b9a88;
  func_0x000107c613fc(&UNK_1104b9a88,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101ffc4fc;
  func_0x0001000823a8(FUN_101ffc4fc,puVar3);
  func_0x000100082720("RecipientPickerSectionSaberPluginScopedServicesScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101ffc4d0; end: 101ffc4fb;  */

void FUN_101ffc4d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ffc4fc; end: 101ffc503;  */

void FUN_101ffc4fc(undefined8 *param_1)

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
  puVar1 = &UNK_1104b98b8;
  func_0x000107c613fc(&UNK_1104b98b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ffb404;
  func_0x00010058fa64(FUN_101ffb404,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ffc504; end: 101ffc58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ffc504(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101ffc8c4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e4eaf0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e4eaf8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffc58c);
  (*pcVar1)();
}



/* Entry: 101ffc58c; end: 101ffc5eb; -[_TtC49RecipientPickerSectionSaberPluginScopeGraphBridge64RecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint init] */

void FUN_101ffc58c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecipientPickerSectionSaberPluginScopeGraphBridge.RecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint"
                      ,0x72,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffc5b8);
  (*pcVar1)();
}



/* Entry: 101ffc5ec; end: 101ffc623; -[_TtC49RecipientPickerSectionSaberPluginScopeGraphBridge64RecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ffc608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ffc60c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffc5ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4eaf0));
  return;
}



/* Entry: 101ffc624; end: 101ffc64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffc624(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4eaf8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4eaf0));
  return;
}



/* Entry: 101ffc64c; end: 101ffc66b;  */

void FUN_101ffc64c(void)

{
  func_0x000107c61168(&PTR_PTR_112815370);
  return;
}



/* Entry: 101ffc66c; end: 101ffc6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ffc66c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4eb28) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4eb30);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ffc6f4);
  (*pcVar2)();
}



/* Entry: 101ffc6f4; end: 101ffc7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ffc6f4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4eb28);
  *(undefined **)(unaff_x20 + _DAT_112e4eb28) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4eb30);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4eb30))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b9b58;
  func_0x000107c613fc(&UNK_1104b9b58,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101ffc7e0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101ffc7dc; end: 101ffc7e7;  */

void FUN_101ffc7dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ffc7e8; end: 101ffc847; -[_TtC49RecipientPickerSectionSaberPluginScopeGraphBridge62RecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint init] */

void FUN_101ffc7e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecipientPickerSectionSaberPluginScopeGraphBridge.RecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint"
                      ,0x70,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffc814);
  (*pcVar1)();
}



/* Entry: 101ffc848; end: 101ffc87f; -[_TtC49RecipientPickerSectionSaberPluginScopeGraphBridge62RecipientPickerSectionSaberPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffc848(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4eb30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4eb28));
  return;
}



/* Entry: 101ffc880; end: 101ffc883;  */

void FUN_101ffc880(void)

{
  return;
}



/* Entry: 101ffc884; end: 101ffc8a3;  */

void FUN_101ffc884(void)

{
  FUN_101ffc6f4();
  return;
}



/* Entry: 101ffc8a4; end: 101ffc8c3;  */

void FUN_101ffc8a4(void)

{
  func_0x000107c61168(&PTR_PTR_112815438);
  return;
}



/* Entry: 101ffc8c4; end: 101ffc993;  */

undefined8 FUN_101ffc8c4(void)

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
  
  func_0x000107c61428(0x112e4eb60,&uStack_40,0x20,0);
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
    FUN_101ffc994();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101ffc994; end: 101ffc9b3;  */

void FUN_101ffc994(void)

{
  func_0x000107c61168(&PTR_PTR_112815500);
  return;
}



/* Entry: 101ffc9b4; end: 101ffca1f;  */

void FUN_101ffc9b4(void)

{
  func_0x0001000285a8(0x112e4eb68,&UNK_10da4b0a8);
  func_0x0001000823a8(0x101ffc9f4,0);
  return;
}



/* Entry: 101ffca20; end: 101ffca5b; -[_TtC49RecipientPickerSectionSaberPluginScopeGraphBridge57RecipientPickerSectionSaberPluginScopeGraphBridgeServices init] */

void FUN_101ffca20(undefined8 param_1)

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



/* Entry: 101ffca5c; end: 101ffca8f;  */

void FUN_101ffca5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ffca90; end: 101ffca97;  */

undefined8 FUN_101ffca90(void)

{
  return 0x1b;
}



/* Entry: 101ffca98; end: 101ffcc0f;  */

void FUN_101ffca98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b9ba0;
  func_0x000107c613fc(&UNK_1104b9ba0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101ffcc10,puVar1);
  return;
}



/* Entry: 101ffcc10; end: 101ffcc17;  */

void FUN_101ffcc10(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4eb60,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4eb60,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b9c38;
  func_0x000107c613fc(&UNK_1104b9c38,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101ffccc4;
  func_0x00010058fa64(0x101ffccc4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ffcc18; end: 101ffcc73;  */

void FUN_101ffcc18(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4eb60,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4eb60,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101ffcc74; end: 101ffcccb;  */

undefined ** FUN_101ffcc74(void)

{
  return &PTR_DAT_112e4efb8;
}



/* Entry: 101ffcccc; end: 101ffcd13; -[SCRecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffcccc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4ebc0;
  func_0x000107c61428(param_1 + _DAT_112e4ebc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ffcd14; end: 101ffcd6b; -[SCRecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffcd14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4ebc0;
  func_0x000107c61428(param_1 + _DAT_112e4ebc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ffcd6c; end: 101ffcdb3; -[SCRecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint recipientPickerSectionSaberPluginScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffcd6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4ebc8;
  func_0x000107c61428(param_1 + _DAT_112e4ebc8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101ffcdb4; end: 101ffce17; -[SCRecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint setRecipientPickerSectionSaberPluginScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffcdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4ebc8;
  func_0x000107c61428(param_1 + _DAT_112e4ebc8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101ffce18; end: 101ffcf4b;  */

/* WARNING: Possible PIC construction at 0x000101ffced0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffceec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ffcf08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ffced4) */
/* WARNING: Removing unreachable block (ram,0x000101ffcef0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ffce18(void)

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
  func_0x000107c4fa60();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101ffc64c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101ffc8c4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ffcf4c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e4eaf0) = lVar5;
    *(long *)(lVar4 + _DAT_112e4eaf8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101ffcf4c; end: 101ffcf73; -[SCRecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101ffcf4c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ffce18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ffcf74; end: 101ffcfb7; -[SCRecipientPickerSectionSaberPluginScopeGraphBridgeSaberEntryPoint end] */

void FUN_101ffcf74(undefined8 param_1)

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


