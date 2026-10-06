/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10227afd0; end: 10227b12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10227afd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10227b464();
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
    *(long *)(unaff_x20 + _DAT_112e77ca0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e77ca8) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10227b12c);
  (*pcVar2)();
}



/* Entry: 10227b12c; end: 10227b18b; -[_TtC32MemoriesPickerV2ScopeGraphBridge47MemoriesPickerV2ScopeGraphBridgeSaberEntryPoint init] */

void FUN_10227b12c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPickerV2ScopeGraphBridge.MemoriesPickerV2ScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10227b158);
  (*pcVar1)();
}



/* Entry: 10227b18c; end: 10227b1c3; -[_TtC32MemoriesPickerV2ScopeGraphBridge47MemoriesPickerV2ScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010227b1a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010227b1ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227b18c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e77ca0));
  return;
}



/* Entry: 10227b1c4; end: 10227b1eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227b1c4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e77ca8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e77ca0));
  return;
}



/* Entry: 10227b1ec; end: 10227b20b;  */

void FUN_10227b1ec(void)

{
  func_0x000107c61168(&PTR_PTR_112830450);
  return;
}



/* Entry: 10227b20c; end: 10227b293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10227b20c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e77cd8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e77ce0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10227b294);
  (*pcVar2)();
}



/* Entry: 10227b294; end: 10227b37b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10227b294(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e77cd8);
  *(undefined **)(unaff_x20 + _DAT_112e77cd8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e77ce0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e77ce0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104ecb68;
  func_0x000107c613fc(&UNK_1104ecb68,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10227b380,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10227b37c; end: 10227b387;  */

void FUN_10227b37c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10227b388; end: 10227b3e7; -[_TtC32MemoriesPickerV2ScopeGraphBridge47SCMemoriesPickerV2ScopedServicesSaberEntryPoint init] */

void FUN_10227b388(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPickerV2ScopeGraphBridge.SCMemoriesPickerV2ScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10227b3b4);
  (*pcVar1)();
}



/* Entry: 10227b3e8; end: 10227b41f; -[_TtC32MemoriesPickerV2ScopeGraphBridge47SCMemoriesPickerV2ScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227b3e8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e77ce0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e77cd8));
  return;
}



/* Entry: 10227b420; end: 10227b423;  */

void FUN_10227b420(void)

{
  return;
}



/* Entry: 10227b424; end: 10227b443;  */

void FUN_10227b424(void)

{
  FUN_10227b294();
  return;
}



/* Entry: 10227b444; end: 10227b463;  */

void FUN_10227b444(void)

{
  func_0x000107c61168(&PTR_PTR_112830518);
  return;
}



/* Entry: 10227b464; end: 10227b533;  */

undefined8 FUN_10227b464(void)

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
  
  func_0x000107c61428(0x112e77d10,&uStack_40,0x20,0);
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
    FUN_10227b534();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10227b534; end: 10227b553;  */

void FUN_10227b534(void)

{
  func_0x000107c61168(&PTR_PTR_1128305e0);
  return;
}



/* Entry: 10227b554; end: 10227b68f;  */

void FUN_10227b554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e77d18,&UNK_10da80d08);
  puVar1 = &UNK_1104ecbb0;
  func_0x000107c613fc(&UNK_1104ecbb0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10227b690,puVar1);
  return;
}



/* Entry: 10227b690; end: 10227b69b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227b690(undefined8 *param_1)

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
  FUN_10227b534();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e77d20) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e77d28) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e77d30) = uVar7;
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



/* Entry: 10227b69c; end: 10227b70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227b69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e77d20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e77d28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e77d30) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10227b710; end: 10227b76f; -[_TtC32MemoriesPickerV2ScopeGraphBridge40MemoriesPickerV2ScopeGraphBridgeServices init] */

void FUN_10227b710(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPickerV2ScopeGraphBridge.MemoriesPickerV2ScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10227b73c);
  (*pcVar1)();
}



/* Entry: 10227b770; end: 10227b7f7; -[_TtC32MemoriesPickerV2ScopeGraphBridge40MemoriesPickerV2ScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010227b78c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010227b790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227b770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e77d20));
  return;
}



/* Entry: 10227b7f8; end: 10227b803;  */

void FUN_10227b7f8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10227b804,param_1);
  return;
}



/* Entry: 10227b804; end: 10227b877;  */

void FUN_10227b804(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10227b878; end: 10227b883;  */

void FUN_10227b878(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10227bc10,param_1);
  return;
}



/* Entry: 10227b884; end: 10227b90f;  */

void FUN_10227b884(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10227bc20,0);
  return;
}



/* Entry: 10227b910; end: 10227b91b;  */

void FUN_10227b910(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10227bc14,param_1);
  return;
}



/* Entry: 10227b91c; end: 10227b973;  */

void FUN_10227b91c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10227b974; end: 10227b97b;  */

undefined8 FUN_10227b974(void)

{
  return 0x1b;
}



/* Entry: 10227b97c; end: 10227baf3;  */

void FUN_10227b97c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ecbd8;
  func_0x000107c613fc(&UNK_1104ecbd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10227baf4,puVar1);
  return;
}



/* Entry: 10227baf4; end: 10227bafb;  */

void FUN_10227baf4(undefined8 *param_1)

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
  func_0x000107c61428(0x112e77d10,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e77d10,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104ecd30;
  func_0x000107c613fc(&UNK_1104ecd30,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10227bc08;
  func_0x00010058fa64(0x10227bc08,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10227bafc; end: 10227bb57;  */

void FUN_10227bafc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e77d10,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e77d10,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10227bb58; end: 10227bc23;  */

undefined ** FUN_10227bb58(void)

{
  return &PTR_DAT_112ff21f8;
}



/* Entry: 10227bc24; end: 10227bc6b; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227bc24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e77d88;
  func_0x000107c61428(param_1 + _DAT_112e77d88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10227bc6c; end: 10227bcc3; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227bc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e77d88;
  func_0x000107c61428(param_1 + _DAT_112e77d88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10227bcc4; end: 10227bd0b; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint quickCaptureCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227bcc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e77d90;
  func_0x000107c61428(param_1 + _DAT_112e77d90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10227bd0c; end: 10227bd17; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint setQuickCaptureCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227bd0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e77d90;
  func_0x000107c61428(param_1 + _DAT_112e77d90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10227bd18; end: 10227bd5f; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint sCMediaImportEditorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227bd18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e77d98;
  func_0x000107c61428(param_1 + _DAT_112e77d98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10227bd60; end: 10227bd6b; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint setSCMediaImportEditorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227bd60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e77d98;
  func_0x000107c61428(param_1 + _DAT_112e77d98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10227bd6c; end: 10227bdb3; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint sCMemoriesCameraRollAlbumPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227bd6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e77da0;
  func_0x000107c61428(param_1 + _DAT_112e77da0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10227bdb4; end: 10227bdbf; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint setSCMemoriesCameraRollAlbumPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227bdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e77da0;
  func_0x000107c61428(param_1 + _DAT_112e77da0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10227bdc0; end: 10227be07; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint memoriesPickerV2ScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227bdc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e77da8;
  func_0x000107c61428(param_1 + _DAT_112e77da8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10227be08; end: 10227be13; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint setMemoriesPickerV2ScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227be08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e77da8;
  func_0x000107c61428(param_1 + _DAT_112e77da8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10227be14; end: 10227be73;  */

void FUN_10227be14(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10227be74; end: 10227c137;  */

/* WARNING: Possible PIC construction at 0x00010227c03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010227c04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010227c070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010227c080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010227c090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010227c0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010227c10c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010227c0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010227c110) */
/* WARNING: Removing unreachable block (ram,0x00010227c100) */
/* WARNING: Removing unreachable block (ram,0x00010227c094) */
/* WARNING: Removing unreachable block (ram,0x00010227c084) */
/* WARNING: Removing unreachable block (ram,0x00010227c074) */
/* WARNING: Removing unreachable block (ram,0x00010227c050) */
/* WARNING: Removing unreachable block (ram,0x00010227c040) */
/* WARNING: Removing unreachable block (ram,0x00010227c0f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227be74(void)

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
  func_0x000107c4f814();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51018();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c5102c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c4cc28();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_10227b1ec();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_10227b464();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10227c138);
            (*pcVar2)();
          }
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112e77ca0) = lVar5;
          *(long *)(lVar4 + _DAT_112e77ca8) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10227c138; end: 10227c15f; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10227c138(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10227be74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10227c160; end: 10227c1a3; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint end] */

void FUN_10227c160(undefined8 param_1)

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



/* Entry: 10227c1a4; end: 10227c47f;  */

void FUN_10227c1a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0f839b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010f07c650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000001f;
        if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef0f894c0)) ||
           (func_0x000107c605b8(0xd00000000000001f,0x800000010f076b40,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c585c0();
        }
        else {
          uVar2 = 0xd00000000000002b;
          if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef10060c0)) ||
             (func_0x000107c605b8(0xd00000000000002b,0x800000010eff9f40,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c585d4();
          }
          else {
            uVar2 = 0xd00000000000002f;
            if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f836d0)) &&
               (func_0x000107c605b8(0xd00000000000002f,0x800000010f07c930,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "MemoriesPickerV2ScopeGraphBridge/SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x58,2,0x3e,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10227c480);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5659c();
          }
        }
        goto LAB_10227c230;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57ab8();
  }
LAB_10227c230:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10227c480; end: 10227c52b; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10227c480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10227c1a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10227c52c; end: 10227c5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227c52c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e77d88,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e77d90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e77d98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e77da0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e77da8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e77db0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10227c5bc; end: 10227c5db; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint init] */

void FUN_10227c5bc(void)

{
  FUN_10227c52c();
  return;
}



/* Entry: 10227c5dc; end: 10227c60f;  */

void FUN_10227c5dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10227c610; end: 10227c687; -[SCMemoriesPickerV2ScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010227c63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010227c65c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010227c640) */
/* WARNING: Removing unreachable block (ram,0x00010227c660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227c610(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e77d88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e77d90));
  return;
}



/* Entry: 10227c688; end: 10227c6a7;  */

void FUN_10227c688(void)

{
  func_0x000107c61168(&PTR_PTR_1128306b0);
  return;
}



/* Entry: 10227c6a8; end: 10227c6ef; -[SCSCMemoriesPickerV2ScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227c6a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e77de0;
  func_0x000107c61428(param_1 + _DAT_112e77de0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10227c6f0; end: 10227c747; -[SCSCMemoriesPickerV2ScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227c6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e77de0;
  func_0x000107c61428(param_1 + _DAT_112e77de0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10227c748; end: 10227c81f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227c748(undefined8 param_1,long param_2)

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
    FUN_10227b444();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e77cd8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10227c820);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e77ce0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e77de8);
    *(long **)(unaff_x20 + _DAT_112e77de8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10227c820; end: 10227c847; -[SCSCMemoriesPickerV2ScopedServicesSaberEntryPoint begin] */

void FUN_10227c820(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10227c748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10227c848; end: 10227c9bf;  */

/* WARNING: Possible PIC construction at 0x00010227c8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010227c948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010227c8b4) */
/* WARNING: Removing unreachable block (ram,0x00010227c94c) */
/* WARNING: Removing unreachable block (ram,0x00010227c964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227c848(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e77de8);
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



/* Entry: 10227c9c0; end: 10227c9c7;  */

void FUN_10227c9c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10227c9c8; end: 10227c9fb; -[SCSCMemoriesPickerV2ScopedServicesSaberEntryPoint end] */

void FUN_10227c9c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10227c848();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10227c9fc; end: 10227cb1b;  */

void FUN_10227c9fc(long param_1,long param_2,long param_3)

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
                        "MemoriesPickerV2ScopeGraphBridge/SCSCMemoriesPickerV2ScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10227cb1c);
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



/* Entry: 10227cb1c; end: 10227cbc7; -[SCSCMemoriesPickerV2ScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10227cb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10227c9fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10227cbc8; end: 10227cc27; -[SCSCMemoriesPickerV2ScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227cbc8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e77de0,0);
  *(undefined8 *)(param_1 + _DAT_112e77de8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10227cc28; end: 10227cc5b;  */

void FUN_10227cc28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10227cc5c; end: 10227cc93; -[SCSCMemoriesPickerV2ScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227cc5c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e77de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e77de8));
  return;
}



/* Entry: 10227cc94; end: 10227ccb3;  */

void FUN_10227cc94(void)

{
  func_0x000107c61168(&PTR_PTR_112830790);
  return;
}



/* Entry: 10227ccb4; end: 10227cd1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227ccb4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10227d0a8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e77e20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10227cd20; end: 10227cd8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227cd20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e77e20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10227cd8c; end: 10227cdeb; -[_TtC36MemoriesScopedFactoryServiceProvider24SCMemoriesScopedServices init] */

void FUN_10227cd8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesScopedFactoryServiceProvider.SCMemoriesScopedServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10227cdb8);
  (*pcVar1)();
}



/* Entry: 10227cdec; end: 10227cdfb; -[_TtC36MemoriesScopedFactoryServiceProvider24SCMemoriesScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227cdec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e77e20));
  return;
}



/* Entry: 10227cdfc; end: 10227ce67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10227cdfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104ecf50;
  func_0x000107c613fc(&UNK_1104ecf50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10227d184,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10227ce68; end: 10227cf03;  */

void FUN_10227ce68(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104ece60;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104ece60;
  return;
}



/* Entry: 10227cf04; end: 10227cf3b;  */

void FUN_10227cf04(long *param_1)

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



/* Entry: 10227cf3c; end: 10227cf43;  */

undefined8 FUN_10227cf3c(void)

{
  return 0x1b;
}



/* Entry: 10227cf44; end: 10227d077;  */

void FUN_10227cf44(undefined8 *param_1)

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
  puVar1 = &UNK_1104ecf78;
  func_0x000107c613fc(&UNK_1104ecf78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10227d15c;
  func_0x00010058fa64(FUN_10227d15c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10227d078; end: 10227d0a7;  */

undefined ** FUN_10227d078(void)

{
  return &PTR_DAT_113074e20;
}



/* Entry: 10227d0a8; end: 10227d0c7;  */

void FUN_10227d0a8(void)

{
  func_0x000107c61168(&PTR_PTR_112830850);
  return;
}



/* Entry: 10227d0c8; end: 10227d117;  */

undefined1  [16] FUN_10227d0c8(void)

{
  return ZEXT816(0x1104eceb0);
}



/* Entry: 10227d118; end: 10227d15b;  */

void FUN_10227d118(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e77e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aa290;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e77e88 = puVar1;
  return;
}



/* Entry: 10227d15c; end: 10227d183;  */

void FUN_10227d15c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10227d184; end: 10227d197;  */

void FUN_10227d184(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10227d198; end: 10227fa2f;  */

void FUN_10227d198(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  code *pcVar33;
  undefined8 uVar34;
  char *pcVar35;
  char *pcVar36;
  char *pcVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  char *pcVar41;
  char *pcVar42;
  char *pcVar43;
  char *pcVar44;
  char *pcVar45;
  char *pcVar46;
  char *pcVar47;
  char *pcVar48;
  char *pcVar49;
  char *pcVar50;
  char *pcVar51;
  char *pcVar52;
  char *pcVar53;
  char *pcVar54;
  char *pcVar55;
  char *pcVar56;
  code *pcVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  char *pcVar62;
  char *pcVar63;
  char *pcVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  code *pcVar67;
  code *pcVar68;
  code *pcVar69;
  code *pcVar70;
  code *pcVar71;
  code *pcVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  code *pcVar75;
  code *pcVar76;
  undefined *puVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  code *pcVar81;
  char *pcVar82;
  code *pcVar83;
  code *pcVar84;
  undefined8 uVar85;
  code *pcVar86;
  undefined8 uVar87;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 auStack_70 [2];
  
  uVar87 = *param_2;
  func_0x0001000285a8(0x112e77ea0,&UNK_10da812a0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar87;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e77ea8,&UNK_10da81360);
  puVar77 = &UNK_1104ed028;
  func_0x000107c613fc(&UNK_1104ed028,0x28,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_3;
  *(undefined8 *)(puVar77 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10227feb0;
  func_0x0001000823a8(FUN_10227feb0,puVar77);
  func_0x000100082720("MemoriesClientGenContentOperationPoolServicesProviderWrapperServiceProvider",
                      0x4b,2);
  uVar3 = param_5;
  FUN_1022a69fc(param_5,param_6,param_7,param_8,param_9,param_10);
  pcVar4 = "MemoriesLockedSnapsCardDataServicesServiceProvider";
  func_0x000100082720("MemoriesLockedSnapsCardDataServicesServiceProvider",0x32,2);
  func_0x00010229481c();
  pcVar5 = "FaceTaggingPermissionTrayScopeExposerSubjectServiceProvider";
  func_0x000100082720("FaceTaggingPermissionTrayScopeExposerSubjectServiceProvider",0x3b,2);
  FUN_102294878();
  pcVar6 = "MemoriesQuickCutScopeExposerSubjectServiceProvider";
  func_0x000100082720("MemoriesQuickCutScopeExposerSubjectServiceProvider",0x32,2);
  FUN_1022948d4();
  pcVar7 = "PlusSubscribeScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusSubscribeScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_102294930();
  pcVar8 = "SCCommerceComposerScreenshopScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCommerceComposerScreenshopScopeExposerSubjectServiceProvider",0x3e,2);
  FUN_10229498c();
  pcVar9 = "SCGenAIDreamsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCGenAIDreamsScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_1022949e8();
  pcVar10 = "SCGenerativeAIOnboardingScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCGenerativeAIOnboardingScopeExposerSubjectServiceProvider",0x3a,2);
  FUN_102294a44();
  pcVar11 = "SCMemoriesActionMenuScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesActionMenuScopeExposerSubjectServiceProvider",0x36,2);
  FUN_102294aa0();
  pcVar12 = "SCMemoriesCameraRollAlbumPickerScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesCameraRollAlbumPickerScopeExposerSubjectServiceProvider",0x41,2);
  FUN_102294afc();
  pcVar13 = "SCMemoriesConsolidatedAutoSavedStoriesScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesConsolidatedAutoSavedStoriesScopeExposerSubjectServiceProvider",
                      0x48,2);
  FUN_102294b58();
  pcVar14 = "SCMemoriesExternalShareAdaptorScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesExternalShareAdaptorScopeExposerSubjectServiceProvider",0x40,2);
  FUN_102294bb4();
  pcVar15 = "SCMemoriesFavoriteSnapsStoryScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesFavoriteSnapsStoryScopeExposerSubjectServiceProvider",0x3e,2);
  FUN_102294c10();
  pcVar16 = "SCMemoriesPickerScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesPickerScopeExposerSubjectServiceProvider",0x32,2);
  FUN_102294c6c();
  pcVar17 = "SCMemoriesPrivateGallerySetupFlowScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesPrivateGallerySetupFlowScopeExposerSubjectServiceProvider",0x43,2);
  FUN_102294cc8();
  pcVar18 = "SCMemoriesSearchPreTypeScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesSearchPreTypeScopeExposerSubjectServiceProvider",0x39,2);
  FUN_102294d24();
  pcVar19 = "SCMemoriesSettingsUIScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesSettingsUIScopeExposerSubjectServiceProvider",0x36,2);
  FUN_102294d80();
  pcVar20 = "SCMemoriesSnapPreviewEditScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesSnapPreviewEditScopeExposerSubjectServiceProvider",0x3b,2);
  FUN_102294ddc();
  pcVar21 = "SCMemoriesStoryEditorScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesStoryEditorScopeExposerSubjectServiceProvider",0x37,2);
  FUN_102294e38();
  pcVar22 = "SCSpectaclesMemoriesCustomExportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopeExposerSubjectServiceProvider",0x42,2);
  FUN_102294e94();
  pcVar23 = "SCSpectaclesOnboardingScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesOnboardingScopeExposerSubjectServiceProvider",0x38,2);
  FUN_102294ef0();
  pcVar24 = "SCSpectaclesPairingScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesPairingScopeExposerSubjectServiceProvider",0x35,2);
  FUN_102294f4c();
  pcVar25 = "SCSpectaclesSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesSettingsScopeExposerSubjectServiceProvider",0x36,2);
  FUN_102294fa8();
  pcVar26 = "WebBrowsingScopeExposerSubjectServiceProvider";
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  func_0x000102295038();
  pcVar27 = "SCMemoriesSnapsTabBannerPluginScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesSnapsTabBannerPluginScopeExposerSubjectServiceProvider",0x40,2);
  FUN_102295094();
  pcVar28 = "SCMemoriesSnapsTabCRSectionPluginScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesSnapsTabCRSectionPluginScopeExposerSubjectServiceProvider",0x43,2);
  FUN_1022950f0();
  func_0x000100082720("SCMemoriesSnapsTabSectionPluginScopeExposerSubjectServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e77eb0,&UNK_10da812b0);
  puVar77 = &UNK_1104ed050;
  func_0x000107c613fc(&UNK_1104ed050,0x48,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_10;
  *(undefined8 *)(puVar77 + 0x20) = param_11;
  *(undefined8 *)(puVar77 + 0x28) = param_12;
  *(undefined8 *)(puVar77 + 0x30) = param_9;
  *(undefined8 *)(puVar77 + 0x38) = param_13;
  *(undefined8 *)(puVar77 + 0x40) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_6);
  uVar87 = 0x10227febc;
  func_0x0001000823a8(0x10227febc,puVar77);
  func_0x000100082720("SCMemoriesInlineSearchDataSourceEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e77eb8,&UNK_10da82430);
  puVar77 = &UNK_1104ed078;
  func_0x000107c613fc(&UNK_1104ed078,0x20,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_14;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_14);
  uVar29 = 0x10227fec8;
  func_0x0001000823a8(0x10227fec8,puVar77);
  func_0x000100082720("SCMemoriesScopedMemoriesActivityServiceProviderWrapperServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e77ec0,&UNK_10da812c0);
  func_0x000107c6157c(uVar29);
  uVar30 = 0x10227fed0;
  func_0x0001000823a8(0x10227fed0,uVar29);
  func_0x000100082720("SCMemoriesScopedMemoriesActivityServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e77ec8,&UNK_10da82600);
  puVar77 = &UNK_1104ed0a0;
  func_0x000107c613fc(&UNK_1104ed0a0,0x20,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_15;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_15);
  uVar31 = 0x10227fed8;
  func_0x0001000823a8(0x10227fed8,puVar77);
  func_0x000100082720("SCMemoriesScopedMemoriesSendServiceProviderWrapperServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e77ed0,&UNK_10da812d0);
  func_0x000107c6157c(uVar31);
  uVar32 = 0x10227fee0;
  func_0x0001000823a8(0x10227fee0,uVar31);
  func_0x000100082720("SCMemoriesScopedMemoriesSendServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e77ed8,&UNK_10da82bf0);
  puVar77 = &UNK_1104ed0c8;
  func_0x000107c613fc(&UNK_1104ed0c8,0x48,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_16;
  *(undefined8 *)(puVar77 + 0x20) = param_6;
  *(undefined8 *)(puVar77 + 0x28) = param_17;
  *(undefined8 *)(puVar77 + 0x30) = param_18;
  *(undefined8 *)(puVar77 + 0x38) = param_19;
  *(undefined8 *)(puVar77 + 0x40) = param_20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  pcVar33 = FUN_10227ff3c;
  func_0x0001000823a8(FUN_10227ff3c,puVar77);
  func_0x000100082720("SCSpectaclesAuxiliaryContentPreloadingServicesEntryPointWrapperServiceProvider"
                      ,0x4e,2);
  uVar34 = param_21;
  FUN_1022b385c(param_21,param_22,param_23,param_9,param_24,param_25,param_26,param_10);
  func_0x000100082720("FaceTaggingPermissionTrayScopedFactoryServiceProvider",0x35,2);
  FUN_1022a34a0(param_27,param_9,param_28,param_29,param_26,param_5,param_6,param_7,param_8,param_10
                ,param_30);
  func_0x000100082720("LockedSnapsPageScopedFactoryServiceProvider",0x2b,2);
  FUN_1022bf87c(param_31,param_32,param_29,param_33,param_34,param_35,param_36,param_37,param_26,
                param_38,param_39,param_40,param_41,param_42,param_43,param_44,param_45,param_46,
                param_47,param_48,param_15,param_49,param_50,param_51,param_52,param_53,param_54,
                param_55,param_56,param_57);
  func_0x000100082720("SCGenAIDreamsScopedFactoryServiceProvider",0x29,2);
  pcVar35 = pcVar4;
  FUN_10229485c();
  func_0x000100082720("FaceTaggingPermissionTrayScopeExposerObservableServiceProvider",0x3e,2);
  pcVar36 = pcVar5;
  FUN_1022948b8();
  func_0x000100082720("MemoriesQuickCutScopeExposerObservableServiceProvider",0x35,2);
  pcVar37 = pcVar6;
  FUN_102294914();
  func_0x000100082720("PlusSubscribeScopeExposerObservableServiceProvider",0x32,2);
  pcVar38 = pcVar7;
  FUN_102294970();
  func_0x000100082720("SCCommerceComposerScreenshopScopeExposerObservableServiceProvider",0x41,2);
  pcVar39 = pcVar8;
  FUN_1022949cc();
  func_0x000100082720("SCGenAIDreamsScopeExposerObservableServiceProvider",0x32,2);
  pcVar40 = pcVar9;
  FUN_102294a28();
  func_0x000100082720("SCGenerativeAIOnboardingScopeExposerObservableServiceProvider",0x3d,2);
  pcVar41 = pcVar10;
  FUN_102294a84();
  func_0x000100082720("SCMemoriesActionMenuScopeExposerObservableServiceProvider",0x39,2);
  pcVar42 = pcVar11;
  FUN_102294ae0();
  func_0x000100082720("SCMemoriesCameraRollAlbumPickerScopeExposerObservableServiceProvider",0x44,2)
  ;
  pcVar43 = pcVar12;
  FUN_102294b3c();
  func_0x000100082720("SCMemoriesConsolidatedAutoSavedStoriesScopeExposerObservableServiceProvider",
                      0x4b,2);
  pcVar44 = pcVar13;
  FUN_102294b98();
  func_0x000100082720("SCMemoriesExternalShareAdaptorScopeExposerObservableServiceProvider",0x43,2);
  pcVar45 = pcVar14;
  FUN_102294bf4();
  func_0x000100082720("SCMemoriesFavoriteSnapsStoryScopeExposerObservableServiceProvider",0x41,2);
  pcVar46 = pcVar15;
  FUN_102294c50();
  func_0x000100082720("SCMemoriesPickerScopeExposerObservableServiceProvider",0x35,2);
  pcVar47 = pcVar16;
  FUN_102294cac();
  func_0x000100082720("SCMemoriesPrivateGallerySetupFlowScopeExposerObservableServiceProvider",0x46,
                      2);
  pcVar48 = pcVar17;
  FUN_102294d08();
  func_0x000100082720("SCMemoriesSearchPreTypeScopeExposerObservableServiceProvider",0x3c,2);
  pcVar49 = pcVar18;
  FUN_102294d64();
  func_0x000100082720("SCMemoriesSettingsUIScopeExposerObservableServiceProvider",0x39,2);
  pcVar50 = pcVar19;
  FUN_102294dc0();
  func_0x000100082720("SCMemoriesSnapPreviewEditScopeExposerObservableServiceProvider",0x3e,2);
  pcVar51 = pcVar20;
  FUN_102294e1c();
  func_0x000100082720("SCMemoriesStoryEditorScopeExposerObservableServiceProvider",0x3a,2);
  pcVar52 = pcVar21;
  FUN_102294e78();
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopeExposerObservableServiceProvider",0x45,2
                     );
  pcVar53 = pcVar22;
  FUN_102294ed4();
  func_0x000100082720("SCSpectaclesOnboardingScopeExposerObservableServiceProvider",0x3b,2);
  pcVar54 = pcVar23;
  FUN_102294f30();
  func_0x000100082720("SCSpectaclesPairingScopeExposerObservableServiceProvider",0x38,2);
  pcVar55 = pcVar24;
  FUN_102294f8c();
  func_0x000100082720("SCSpectaclesSettingsScopeExposerObservableServiceProvider",0x39,2);
  pcVar56 = pcVar25;
  FUN_102294fe8();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar57 = FUN_10227cf04;
  func_0x0001000823a8(FUN_10227cf04,0);
  func_0x000100082720("SCMemoriesScopedServicesCleanupRelayServiceProvider",0x33,2);
  uVar58 = uVar34;
  func_0x000104390cf0();
  func_0x000100082720("FaceTaggingPermissionTrayScopeServicesServiceProvider",0x35,2);
  uVar59 = param_27;
  FUN_1022a9390();
  func_0x000100082720("LockedSnapsPageLauncherScopeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e77ee0,&UNK_10da812d8);
  func_0x000107c6157c(pcVar2);
  uVar60 = 0x10227ff60;
  func_0x0001000823a8(0x10227ff60,pcVar2);
  func_0x000100082720("MemoriesClientGenContentOperationPoolServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e77ee8,&UNK_10da812e0);
  puVar77 = &UNK_1104ed0f0;
  func_0x000107c613fc(&UNK_1104ed0f0,0x98,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_58;
  *(undefined8 *)(puVar77 + 0x20) = uVar60;
  *(undefined8 *)(puVar77 + 0x28) = param_6;
  *(undefined8 *)(puVar77 + 0x30) = param_17;
  *(undefined8 *)(puVar77 + 0x38) = param_7;
  *(undefined8 *)(puVar77 + 0x40) = param_19;
  *(undefined8 *)(puVar77 + 0x48) = param_59;
  *(undefined8 *)(puVar77 + 0x50) = param_3;
  *(undefined8 *)(puVar77 + 0x58) = param_4;
  *(undefined8 *)(puVar77 + 0x60) = param_60;
  *(undefined8 *)(puVar77 + 0x68) = param_61;
  *(undefined8 *)(puVar77 + 0x70) = param_55;
  *(undefined8 *)(puVar77 + 0x78) = param_34;
  *(undefined8 *)(puVar77 + 0x80) = param_62;
  *(undefined8 *)(puVar77 + 0x88) = param_63;
  *(undefined8 *)(puVar77 + 0x90) = param_9;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(uVar60);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_63);
  uVar61 = 0x10227ff68;
  func_0x0001000823a8(0x10227ff68,puVar77);
  func_0x000100082720("MemoriesClientGenManagerServicesProviderWrapperServiceProvider",0x3e,2);
  pcVar62 = pcVar26;
  FUN_102295078();
  func_0x000100082720("SCMemoriesSnapsTabBannerPluginScopeExposerObservableServiceProvider",0x43,2);
  pcVar63 = pcVar27;
  FUN_1022950d4();
  func_0x000100082720("SCMemoriesSnapsTabCRSectionPluginScopeExposerObservableServiceProvider",0x46,
                      2);
  pcVar64 = pcVar28;
  FUN_10229516c();
  func_0x000100082720("SCMemoriesSnapsTabSectionPluginScopeExposerObservableServiceProvider",0x44,2)
  ;
  uVar65 = param_31;
  func_0x0001043b4b80();
  func_0x000100082720("SCGenAIDreamsScopeServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112e77ef0,&UNK_10da812e8);
  func_0x000107c6157c(uVar87);
  uVar66 = 0x10227ff74;
  func_0x0001000823a8(0x10227ff74,uVar87);
  func_0x000100082720("SCMemoriesInlineSearchDataServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e77ef8,&UNK_10da812f0);
  puVar77 = &UNK_1104ed118;
  func_0x000107c613fc(&UNK_1104ed118,0x98,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_52;
  *(undefined8 *)(puVar77 + 0x20) = param_33;
  *(undefined8 *)(puVar77 + 0x28) = param_64;
  *(undefined8 *)(puVar77 + 0x30) = param_5;
  *(undefined8 *)(puVar77 + 0x38) = uVar66;
  *(undefined8 *)(puVar77 + 0x40) = param_53;
  *(undefined8 *)(puVar77 + 0x48) = param_65;
  *(undefined8 *)(puVar77 + 0x50) = param_66;
  *(undefined8 *)(puVar77 + 0x58) = param_6;
  *(undefined8 *)(puVar77 + 0x60) = param_67;
  *(undefined8 *)(puVar77 + 0x68) = param_68;
  *(undefined8 *)(puVar77 + 0x70) = param_40;
  *(undefined8 *)(puVar77 + 0x78) = param_69;
  *(undefined8 *)(puVar77 + 0x80) = param_70;
  *(undefined8 *)(puVar77 + 0x88) = param_71;
  *(undefined8 *)(puVar77 + 0x90) = in_stack_000001f0;
  func_0x000107c6157c();
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(uVar66);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(in_stack_000001f0);
  pcVar67 = FUN_102280020;
  func_0x0001000823a8(FUN_102280020,puVar77);
  func_0x000100082720("SCMemoriesPrivateLockedTabServiceProviderWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e77f00,&UNK_10da812f8);
  func_0x000107c6157c(pcVar67);
  pcVar68 = FUN_102280074;
  func_0x0001000823a8(FUN_102280074,pcVar67);
  func_0x000100082720("SCMemoriesPrivateLockedTabServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e77f08,&UNK_10da81300);
  puVar77 = &UNK_1104ed140;
  func_0x000107c613fc(&UNK_1104ed140,0x80,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_54;
  *(undefined8 *)(puVar77 + 0x20) = in_stack_000001f8;
  *(undefined8 *)(puVar77 + 0x28) = in_stack_00000200;
  *(undefined8 *)(puVar77 + 0x30) = param_53;
  *(undefined8 *)(puVar77 + 0x38) = in_stack_00000208;
  *(undefined8 *)(puVar77 + 0x40) = param_40;
  *(undefined8 *)(puVar77 + 0x48) = param_65;
  *(undefined8 *)(puVar77 + 0x50) = param_56;
  *(undefined8 *)(puVar77 + 0x58) = in_stack_00000210;
  *(undefined8 *)(puVar77 + 0x60) = in_stack_00000218;
  *(undefined8 *)(puVar77 + 0x68) = param_9;
  *(char **)(puVar77 + 0x70) = pcVar38;
  *(char **)(puVar77 + 0x78) = pcVar56;
  func_0x000107c6157c();
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(pcVar38);
  func_0x000107c6157c(pcVar56);
  pcVar69 = FUN_10228007c;
  func_0x0001000823a8(FUN_10228007c,puVar77);
  func_0x000100082720("SCMemoriesScreenshopTabEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e77f10,&UNK_10da81308);
  func_0x000107c6157c(pcVar69);
  pcVar70 = FUN_1022800b8;
  func_0x0001000823a8(FUN_1022800b8,pcVar69);
  func_0x000100082720("SCMemoriesScreenshopTabServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e77f18,&UNK_10da81310);
  puVar77 = &UNK_1104ed168;
  func_0x000107c613fc(&UNK_1104ed168,0xc0,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_34;
  *(undefined8 *)(puVar77 + 0x20) = param_40;
  *(undefined8 *)(puVar77 + 0x28) = uVar66;
  *(undefined8 *)(puVar77 + 0x30) = param_5;
  *(undefined8 *)(puVar77 + 0x38) = param_6;
  *(undefined8 *)(puVar77 + 0x40) = in_stack_00000220;
  *(undefined8 *)(puVar77 + 0x48) = param_10;
  *(undefined8 *)(puVar77 + 0x50) = in_stack_00000228;
  *(undefined8 *)(puVar77 + 0x58) = param_17;
  *(undefined8 *)(puVar77 + 0x60) = param_70;
  *(undefined8 *)(puVar77 + 0x68) = param_71;
  *(undefined8 *)(puVar77 + 0x70) = in_stack_00000230;
  *(undefined8 *)(puVar77 + 0x78) = in_stack_00000238;
  *(undefined8 *)(puVar77 + 0x80) = param_8;
  *(undefined8 *)(puVar77 + 0x88) = in_stack_00000240;
  *(undefined8 *)(puVar77 + 0x90) = in_stack_00000248;
  *(undefined8 *)(puVar77 + 0x98) = param_28;
  *(undefined8 *)(puVar77 + 0xa0) = in_stack_00000250;
  *(char **)(puVar77 + 0xa8) = pcVar45;
  *(char **)(puVar77 + 0xb0) = pcVar43;
  *(char **)(puVar77 + 0xb8) = pcVar41;
  func_0x000107c6157c();
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(uVar66);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(pcVar45);
  func_0x000107c6157c(pcVar43);
  func_0x000107c6157c(pcVar41);
  pcVar71 = FUN_1022800c0;
  func_0x0001000823a8(FUN_1022800c0,puVar77);
  func_0x000100082720("SCMemoriesStoriesTabServicesEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e77f20,&UNK_10da81318);
  func_0x000107c6157c(pcVar33);
  pcVar72 = FUN_10228010c;
  func_0x0001000823a8(FUN_10228010c,pcVar33);
  func_0x000100082720("SCSpectaclesAuxiliaryContentPreloadingServicesServiceProvider",0x3d,2);
  FUN_10229f120(in_stack_00000258,param_63,param_34,in_stack_00000260,param_26,in_stack_00000268,
                param_39,in_stack_00000270,in_stack_00000278,param_40,param_65,param_71,
                in_stack_00000280,in_stack_00000288,in_stack_00000290,in_stack_00000298,
                in_stack_00000228,param_19,in_stack_000002a0,param_5,param_6,param_8,
                in_stack_00000238,param_17,param_70,param_4,param_10,in_stack_000002a8,
                in_stack_000002b0,param_66,uVar30,uVar32,param_59,param_62,param_60,
                in_stack_00000240,in_stack_000002b8,in_stack_000002c0,in_stack_00000220,
                in_stack_000002c8,in_stack_000002d0,param_3,in_stack_000002d8,in_stack_000002e0,
                in_stack_000002e8,in_stack_000002f0,in_stack_000002f8,param_53,param_54,
                in_stack_00000210,pcVar36,in_stack_00000300,pcVar44,in_stack_00000308,pcVar47,
                in_stack_00000310,pcVar52);
  func_0x000100082720("MemoriesSelectionFooterBarControllerScopedFactoryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e77f28,&UNK_10da81320);
  func_0x000107c6157c(uVar61);
  uVar73 = 0x102280114;
  func_0x0001000823a8(0x102280114,uVar61);
  func_0x000100082720("MemoriesClientGenManagerServicesServiceProvider",0x2f,2);
  uVar74 = in_stack_00000258;
  func_0x00010391a830();
  func_0x000100082720("MemoriesSelectionFooterBarControllerFactoryServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e77f30,&UNK_10da81930);
  puVar77 = &UNK_1104ed190;
  func_0x000107c613fc(&UNK_1104ed190,0x58,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_12;
  *(undefined8 *)(puVar77 + 0x20) = param_11;
  *(undefined8 *)(puVar77 + 0x28) = param_10;
  *(undefined8 *)(puVar77 + 0x30) = in_stack_00000240;
  *(undefined8 *)(puVar77 + 0x38) = in_stack_00000318;
  *(undefined8 *)(puVar77 + 0x40) = param_52;
  *(undefined8 *)(puVar77 + 0x48) = uVar74;
  *(undefined8 *)(puVar77 + 0x50) = in_stack_00000230;
  func_0x000107c6157c();
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000318);
  func_0x000107c6157c(uVar74);
  pcVar75 = FUN_10228011c;
  func_0x0001000823a8(FUN_10228011c,puVar77);
  func_0x000100082720("SCMemoriesContentUnderstandingTabServicesEntryPointWrapperServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112e77f38,&UNK_10da81330);
  func_0x000107c6157c(pcVar71);
  pcVar76 = FUN_102280150;
  func_0x0001000823a8(FUN_102280150,pcVar71);
  func_0x000100082720("SCMemoriesStoriesTabServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112e77f40,&UNK_10da81540);
  puVar77 = &UNK_1104ed1b8;
  func_0x000107c613fc(&UNK_1104ed1b8,0x40,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_34;
  *(undefined8 *)(puVar77 + 0x20) = in_stack_00000210;
  *(undefined8 *)(puVar77 + 0x28) = param_61;
  *(undefined8 *)(puVar77 + 0x30) = in_stack_00000320;
  *(undefined8 *)(puVar77 + 0x38) = uVar73;
  func_0x000107c6157c();
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000320);
  func_0x000107c6157c(uVar73);
  uVar78 = 0x102280158;
  func_0x0001000823a8(0x102280158,puVar77);
  func_0x000100082720("MemoriesClientGenContentWorkflowEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e77f48,&UNK_10da81340);
  func_0x000107c6157c(uVar78);
  uVar79 = 0x102280168;
  func_0x0001000823a8(0x102280168,uVar78);
  func_0x000100082720("MemoriesClientGenContentWorkflowServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e77f50,&UNK_10da81348);
  func_0x000107c6157c(pcVar75);
  uVar80 = 0x102280170;
  func_0x0001000823a8(0x102280170,pcVar75);
  func_0x000100082720("SCMemoriesContentUnderstandingTabServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e77f58,&UNK_10da81350);
  puVar77 = &UNK_1104ed1e0;
  func_0x000107c613fc(&UNK_1104ed1e0,0x358,7);
  *(undefined8 **)(puVar77 + 0x10) = puVar1;
  *(undefined8 *)(puVar77 + 0x18) = param_52;
  *(undefined8 *)(puVar77 + 0x20) = param_34;
  *(undefined8 *)(puVar77 + 0x28) = in_stack_00000328;
  *(undefined8 *)(puVar77 + 0x30) = in_stack_00000330;
  *(undefined8 *)(puVar77 + 0x38) = in_stack_00000338;
  *(undefined8 *)(puVar77 + 0x40) = in_stack_00000340;
  *(undefined8 *)(puVar77 + 0x48) = param_40;
  *(undefined8 *)(puVar77 + 0x50) = in_stack_00000348;
  *(undefined8 *)(puVar77 + 0x58) = in_stack_00000350;
  *(undefined8 *)(puVar77 + 0x60) = in_stack_00000358;
  *(undefined8 *)(puVar77 + 0x68) = in_stack_00000248;
  *(undefined8 *)(puVar77 + 0x70) = in_stack_00000360;
  *(undefined8 *)(puVar77 + 0x78) = param_53;
  *(undefined8 *)(puVar77 + 0x80) = in_stack_00000368;
  *(undefined8 *)(puVar77 + 0x88) = in_stack_00000210;
  *(undefined8 *)(puVar77 + 0x90) = in_stack_00000370;
  *(undefined8 *)(puVar77 + 0x98) = uVar66;
  *(undefined8 *)(puVar77 + 0xa0) = param_25;
  *(undefined8 *)(puVar77 + 0xa8) = param_26;
  *(code **)(puVar77 + 0xb0) = pcVar76;
  *(undefined8 *)(puVar77 + 0xb8) = in_stack_00000378;
  *(undefined8 *)(puVar77 + 0xc0) = uVar80;
  *(code **)(puVar77 + 200) = pcVar70;
  *(undefined8 *)(puVar77 + 0xd0) = param_16;
  *(code **)(puVar77 + 0xd8) = pcVar72;
  *(undefined8 *)(puVar77 + 0xe0) = in_stack_00000380;
  *(code **)(puVar77 + 0xe8) = pcVar68;
  *(undefined8 *)(puVar77 + 0xf0) = uVar74;
  *(undefined8 *)(puVar77 + 0xf8) = param_6;
  *(undefined8 *)(puVar77 + 0x100) = param_70;
  *(undefined8 *)(puVar77 + 0x108) = param_68;
  *(undefined8 *)(puVar77 + 0x110) = in_stack_00000388;
  *(undefined8 *)(puVar77 + 0x118) = in_stack_00000280;
  *(undefined8 *)(puVar77 + 0x120) = in_stack_00000390;
  *(undefined8 *)(puVar77 + 0x128) = param_10;
  *(undefined8 *)(puVar77 + 0x130) = param_19;
  *(undefined8 *)(puVar77 + 0x138) = param_5;
  *(undefined8 *)(puVar77 + 0x140) = param_65;
  *(undefined8 *)(puVar77 + 0x148) = in_stack_00000230;
  *(undefined8 *)(puVar77 + 0x150) = param_48;
  *(undefined8 *)(puVar77 + 0x158) = in_stack_000002b0;
  *(undefined8 *)(puVar77 + 0x160) = in_stack_00000398;
  *(undefined8 *)(puVar77 + 0x168) = param_66;
  *(undefined8 *)(puVar77 + 0x170) = in_stack_00000228;
  *(undefined8 *)(puVar77 + 0x178) = param_18;
  *(undefined8 *)(puVar77 + 0x180) = param_69;
  *(undefined8 *)(puVar77 + 0x188) = param_11;
  *(undefined8 *)(puVar77 + 400) = param_12;
  *(undefined8 *)(puVar77 + 0x198) = in_stack_000003a0;
  *(undefined8 *)(puVar77 + 0x1a0) = in_stack_000003a8;
  *(undefined8 *)(puVar77 + 0x1a8) = in_stack_000003b0;
  *(undefined8 *)(puVar77 + 0x1b0) = param_71;
  *(undefined8 *)(puVar77 + 0x1b8) = in_stack_000003b8;
  *(undefined8 *)(puVar77 + 0x1c0) = in_stack_000003c0;
  *(undefined8 *)(puVar77 + 0x1c8) = in_stack_000003c8;
  *(undefined8 *)(puVar77 + 0x1d0) = in_stack_00000218;
  *(undefined8 *)(puVar77 + 0x1d8) = in_stack_00000278;
  *(undefined8 *)(puVar77 + 0x1e0) = in_stack_000003d0;
  *(undefined8 *)(puVar77 + 0x1e8) = uVar79;
  *(undefined8 *)(puVar77 + 0x1f0) = in_stack_000003d8;
  *(undefined8 *)(puVar77 + 0x1f8) = in_stack_000003e0;
  *(undefined8 *)(puVar77 + 0x200) = in_stack_000003e8;
  *(undefined8 *)(puVar77 + 0x208) = in_stack_000003f0;
  *(undefined8 *)(puVar77 + 0x210) = in_stack_000003f8;
  *(undefined8 *)(puVar77 + 0x218) = in_stack_00000400;
  *(undefined8 *)(puVar77 + 0x220) = param_39;
  *(undefined8 *)(puVar77 + 0x228) = in_stack_00000408;
  *(undefined8 *)(puVar77 + 0x230) = in_stack_00000410;
  *(undefined8 *)(puVar77 + 0x238) = param_20;
  *(undefined8 *)(puVar77 + 0x240) = in_stack_00000418;
  *(undefined8 *)(puVar77 + 0x248) = param_23;
  *(undefined8 *)(puVar77 + 0x250) = in_stack_00000420;
  *(undefined8 *)(puVar77 + 600) = param_22;
  *(undefined8 *)(puVar77 + 0x260) = uVar32;
  *(undefined8 *)(puVar77 + 0x268) = param_21;
  *(undefined8 *)(puVar77 + 0x270) = in_stack_00000428;
  *(undefined8 *)(puVar77 + 0x278) = param_28;
  *(undefined8 *)(puVar77 + 0x280) = param_51;
  *(undefined8 *)(puVar77 + 0x288) = in_stack_00000430;
  *(undefined8 *)(puVar77 + 0x290) = uVar58;
  *(undefined8 *)(puVar77 + 0x298) = uVar65;
  *(undefined8 *)(puVar77 + 0x2a0) = param_29;
  *(undefined8 *)(puVar77 + 0x2a8) = in_stack_00000438;
  *(char **)(puVar77 + 0x2b0) = pcVar51;
  *(char **)(puVar77 + 0x2b8) = pcVar53;
  *(char **)(puVar77 + 0x2c0) = pcVar46;
  *(char **)(puVar77 + 0x2c8) = pcVar55;
  *(char **)(puVar77 + 0x2d0) = pcVar54;
  *(char **)(puVar77 + 0x2d8) = pcVar63;
  *(char **)(puVar77 + 0x2e0) = pcVar64;
  *(char **)(puVar77 + 0x2e8) = pcVar62;
  *(char **)(puVar77 + 0x2f0) = pcVar52;
  *(char **)(puVar77 + 0x2f8) = pcVar44;
  *(char **)(puVar77 + 0x300) = pcVar49;
  *(char **)(puVar77 + 0x308) = pcVar47;
  *(char **)(puVar77 + 0x310) = pcVar35;
  *(char **)(puVar77 + 0x318) = pcVar48;
  *(char **)(puVar77 + 800) = pcVar39;
  *(char **)(puVar77 + 0x328) = pcVar40;
  *(char **)(puVar77 + 0x330) = pcVar42;
  *(char **)(puVar77 + 0x338) = pcVar37;
  *(char **)(puVar77 + 0x340) = pcVar36;
  *(char **)(puVar77 + 0x348) = pcVar50;
  *(char **)(puVar77 + 0x350) = pcVar56;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(uVar66);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(pcVar56);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(uVar74);
  func_0x000107c6157c(in_stack_00000328);
  func_0x000107c6157c(in_stack_00000330);
  func_0x000107c6157c(in_stack_00000338);
  func_0x000107c6157c(in_stack_00000340);
  func_0x000107c6157c(in_stack_00000348);
  func_0x000107c6157c(in_stack_00000350);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(in_stack_00000360);
  func_0x000107c6157c(in_stack_00000368);
  func_0x000107c6157c(in_stack_00000370);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(pcVar76);
  func_0x000107c6157c(in_stack_00000378);
  func_0x000107c6157c(uVar80);
  func_0x000107c6157c(pcVar70);
  func_0x000107c6157c(pcVar72);
  func_0x000107c6157c(in_stack_00000380);
  func_0x000107c6157c(pcVar68);
  func_0x000107c6157c(in_stack_00000388);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(in_stack_00000390);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_00000398);
  func_0x000107c6157c(in_stack_000003a0);
  func_0x000107c6157c(in_stack_000003a8);
  func_0x000107c6157c(in_stack_000003b0);
  func_0x000107c6157c(in_stack_000003b8);
  func_0x000107c6157c(in_stack_000003c0);
  func_0x000107c6157c(in_stack_000003c8);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(in_stack_000003d0);
  func_0x000107c6157c(uVar79);
  func_0x000107c6157c(in_stack_000003d8);
  func_0x000107c6157c(in_stack_000003e0);
  func_0x000107c6157c(in_stack_000003e8);
  func_0x000107c6157c(in_stack_000003f0);
  func_0x000107c6157c(in_stack_000003f8);
  func_0x000107c6157c(in_stack_00000400);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(in_stack_00000408);
  func_0x000107c6157c(in_stack_00000410);
  func_0x000107c6157c(in_stack_00000418);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(in_stack_00000420);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(uVar32);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(in_stack_00000428);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(in_stack_00000430);
  func_0x000107c6157c(uVar58);
  func_0x000107c6157c(uVar65);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(in_stack_00000438);
  func_0x000107c6157c(pcVar51);
  func_0x000107c6157c(pcVar53);
  func_0x000107c6157c(pcVar46);
  func_0x000107c6157c(pcVar55);
  func_0x000107c6157c(pcVar54);
  func_0x000107c6157c(pcVar63);
  func_0x000107c6157c(pcVar64);
  func_0x000107c6157c(pcVar62);
  func_0x000107c6157c(pcVar52);
  func_0x000107c6157c(pcVar44);
  func_0x000107c6157c(pcVar49);
  func_0x000107c6157c(pcVar47);
  func_0x000107c6157c(pcVar35);
  func_0x000107c6157c(pcVar48);
  func_0x000107c6157c(pcVar39);
  func_0x000107c6157c(pcVar40);
  func_0x000107c6157c(pcVar42);
  func_0x000107c6157c(pcVar37);
  func_0x000107c6157c(pcVar36);
  func_0x000107c6157c(pcVar50);
  pcVar81 = FUN_102280178;
  func_0x0001000823a8(FUN_102280178,puVar77);
  func_0x000100082720("SCMemoriesEntryPointWrapperServiceProvider",0x2a,2);
  pcVar82 = pcVar4;
  FUN_1022939b8(pcVar4,uVar58,uVar59,uVar79,uVar3,pcVar5,uVar74,pcVar6,pcVar7,pcVar8,uVar65,pcVar9,
                pcVar10,pcVar11,pcVar12,uVar80,pcVar13,pcVar14,uVar66,pcVar15,pcVar16,pcVar68,uVar30
                ,uVar32,pcVar70,pcVar17,pcVar18,pcVar19,pcVar26,pcVar27,pcVar28,pcVar76,pcVar20,
                pcVar72,pcVar21,pcVar22,pcVar23,pcVar24,pcVar25);
  func_0x000100082720("MemoriesScopeGraphBridgeServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e77f60,&UNK_10da81358);
  puVar77 = &UNK_1104ed208;
  func_0x000107c613fc(&UNK_1104ed208,0x88,7);
  *(code **)(puVar77 + 0x10) = pcVar2;
  *(undefined8 *)(puVar77 + 0x18) = uVar78;
  *(undefined8 *)(puVar77 + 0x20) = uVar61;
  *(undefined8 **)(puVar77 + 0x28) = puVar1;
  *(char **)(puVar77 + 0x30) = pcVar82;
  *(code **)(puVar77 + 0x38) = pcVar75;
  *(code **)(puVar77 + 0x40) = pcVar81;
  *(undefined8 *)(puVar77 + 0x48) = uVar87;
  *(code **)(puVar77 + 0x50) = pcVar67;
  *(undefined8 *)(puVar77 + 0x58) = uVar29;
  *(undefined8 *)(puVar77 + 0x60) = uVar31;
  *(code **)(puVar77 + 0x68) = pcVar57;
  *(code **)(puVar77 + 0x70) = pcVar69;
  *(code **)(puVar77 + 0x78) = pcVar71;
  *(code **)(puVar77 + 0x80) = pcVar33;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(uVar31);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar87);
  func_0x000107c6157c(pcVar67);
  func_0x000107c6157c(pcVar69);
  func_0x000107c6157c(pcVar33);
  func_0x000107c6157c(uVar61);
  func_0x000107c6157c(pcVar71);
  func_0x000107c6157c(uVar78);
  func_0x000107c6157c(pcVar75);
  func_0x000107c6157c(pcVar82);
  func_0x000107c6157c(pcVar81);
  func_0x000107c6157c(pcVar57);
  pcVar83 = FUN_102280308;
  func_0x0001000823a8(FUN_102280308,puVar77);
  func_0x000100082720("SCMemoriesScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e77e28,&UNK_10da81070);
  func_0x000107c6157c(pcVar83);
  pcVar84 = FUN_10228034c;
  func_0x0001000823a8(FUN_10228034c,pcVar83);
  func_0x000100082720("SCMemoriesScopeInitializationServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e77e18,&UNK_10da81060);
  func_0x000107c6157c(pcVar84);
  uVar85 = 0x102280354;
  func_0x0001000823a8(0x102280354,pcVar84);
  func_0x000100082720("SCMemoriesScopedServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar77 = &UNK_1104ed230;
  func_0x000107c613fc(&UNK_1104ed230,0x20,7);
  *(undefined8 *)(puVar77 + 0x10) = uVar85;
  *(code **)(puVar77 + 0x18) = pcVar57;
  func_0x000107c6157c(pcVar57);
  pcVar86 = FUN_102280388;
  func_0x0001000823a8(FUN_102280388,puVar77);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(pcVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(pcVar26);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(uVar87);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar30);
  func_0x000107c61574(uVar31);
  func_0x000107c61574(uVar32);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(uVar34);
  func_0x000107c61574(param_27);
  func_0x000107c61574(param_31);
  func_0x000107c61574(pcVar35);
  func_0x000107c61574(pcVar36);
  func_0x000107c61574(pcVar37);
  func_0x000107c61574(pcVar38);
  func_0x000107c61574(pcVar39);
  func_0x000107c61574(pcVar40);
  func_0x000107c61574(pcVar41);
  func_0x000107c61574(pcVar42);
  func_0x000107c61574(pcVar43);
  func_0x000107c61574(pcVar44);
  func_0x000107c61574(pcVar45);
  func_0x000107c61574(pcVar46);
  func_0x000107c61574(pcVar47);
  func_0x000107c61574(pcVar48);
  func_0x000107c61574(pcVar49);
  func_0x000107c61574(pcVar50);
  func_0x000107c61574(pcVar51);
  func_0x000107c61574(pcVar52);
  func_0x000107c61574(pcVar53);
  func_0x000107c61574(pcVar54);
  func_0x000107c61574(pcVar55);
  func_0x000107c61574(pcVar56);
  func_0x000107c61574(pcVar57);
  func_0x000107c61574(uVar58);
  func_0x000107c61574(uVar59);
  func_0x000107c61574(uVar60);
  func_0x000107c61574(uVar61);
  func_0x000107c61574(pcVar62);
  func_0x000107c61574(pcVar63);
  func_0x000107c61574(pcVar64);
  func_0x000107c61574(uVar65);
  func_0x000107c61574(uVar66);
  func_0x000107c61574(pcVar67);
  func_0x000107c61574(pcVar68);
  func_0x000107c61574(pcVar69);
  func_0x000107c61574(pcVar70);
  func_0x000107c61574(pcVar71);
  func_0x000107c61574(pcVar72);
  func_0x000107c61574(in_stack_00000258);
  func_0x000107c61574(uVar73);
  func_0x000107c61574(uVar74);
  func_0x000107c61574(pcVar75);
  func_0x000107c61574(pcVar76);
  func_0x000107c61574(uVar78);
  func_0x000107c61574(uVar79);
  func_0x000107c61574(uVar80);
  func_0x000107c61574(pcVar81);
  func_0x000107c61574(pcVar82);
  func_0x000107c61574(pcVar83);
  func_0x000107c61574(pcVar84);
  func_0x000100082720("SCMemoriesScopeEntryPointProvider",0x21,2);
  *param_1 = pcVar86;
  return;
}



/* Entry: 10227fa30; end: 10227feaf;  */

void FUN_10227fa30(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10227d198(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 10227feb0; end: 10227fee7;  */

void FUN_10227feb0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102280650();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  func_0x000103bc5660(0);
  func_0x000107c613fc();
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  func_0x000103bc5404(uStack_48,uVar2,uStack_58);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  func_0x000103bc562c();
  *(undefined8 *)(lVar1 + 0x28) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 10227fee8; end: 10227ff3b;  */

void FUN_10227fee8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10227ff3c; end: 10227ff7b;  */

void FUN_10227ff3c(void)

{
  long unaff_x20;
  
  FUN_1022904f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10227ff7c; end: 10228001f;  */

void FUN_10227ff7c(void)

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



/* Entry: 102280020; end: 10228002b;  */

void FUN_102280020(void)

{
  long unaff_x20;
  
  FUN_10228b428(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 10228002c; end: 102280073;  */

void FUN_10228002c(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 102280074; end: 10228007b;  */

void FUN_102280074(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10228007c; end: 1022800b7;  */

void FUN_10228007c(void)

{
  long unaff_x20;
  
  FUN_10228d270(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1022800b8; end: 1022800bf;  */

void FUN_1022800b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022800c0; end: 10228010b;  */

void FUN_1022800c0(void)

{
  long unaff_x20;
  
  FUN_10228e6e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 10228010c; end: 10228011b;  */

void FUN_10228010c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10228011c; end: 10228014f;  */

void FUN_10228011c(void)

{
  long unaff_x20;
  
  FUN_1022814fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102280150; end: 102280177;  */

void FUN_102280150(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 200);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102280178; end: 102280307;  */

void FUN_102280178(void)

{
  long unaff_x20;
  
  FUN_1022822d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 102280308; end: 10228034b;  */

void FUN_102280308(void)

{
  long unaff_x20;
  
  FUN_1022910b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10228034c; end: 10228035b;  */

void FUN_10228034c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112e77e80,&UNK_10da81250);
  uVar1 = 0;
  FUN_10227d118();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10228035c; end: 102280387;  */

void FUN_10228035c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102280388; end: 10228038f;  */

void FUN_102280388(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104ece60;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104ece60;
  return;
}


