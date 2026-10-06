/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10219ae68; end: 10219ae93;  */

void FUN_10219ae68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10219ae94; end: 10219ae9b;  */

void FUN_10219ae94(undefined8 *param_1)

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
  puVar1 = &UNK_1104d8d08;
  func_0x000107c613fc(&UNK_1104d8d08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10219a15c;
  func_0x00010058fa64(FUN_10219a15c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10219ae9c; end: 10219af77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10219ae9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10219b2b0();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e5eea0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e5eea8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10219af78);
  (*pcVar1)();
}



/* Entry: 10219af78; end: 10219afd7; -[_TtC26TilePickerScopeGraphBridge41TilePickerScopeGraphBridgeSaberEntryPoint init] */

void FUN_10219af78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TilePickerScopeGraphBridge.TilePickerScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10219afa4);
  (*pcVar1)();
}



/* Entry: 10219afd8; end: 10219b00f; -[_TtC26TilePickerScopeGraphBridge41TilePickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010219aff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219aff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219afd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5eea0));
  return;
}



/* Entry: 10219b010; end: 10219b037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b010(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e5eea8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e5eea0));
  return;
}



/* Entry: 10219b038; end: 10219b057;  */

void FUN_10219b038(void)

{
  func_0x000107c61168(&PTR_PTR_112823238);
  return;
}



/* Entry: 10219b058; end: 10219b0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10219b058(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5eed8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e5eee0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10219b0e0);
  (*pcVar2)();
}



/* Entry: 10219b0e0; end: 10219b1c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10219b0e0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5eed8);
  *(undefined **)(unaff_x20 + _DAT_112e5eed8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5eee0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e5eee0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104d8ff0;
  func_0x000107c613fc(&UNK_1104d8ff0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10219b1cc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10219b1c8; end: 10219b1d3;  */

void FUN_10219b1c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10219b1d4; end: 10219b233; -[_TtC26TilePickerScopeGraphBridge41SCTilePickerScopedServicesSaberEntryPoint init] */

void FUN_10219b1d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TilePickerScopeGraphBridge.SCTilePickerScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10219b200);
  (*pcVar1)();
}



/* Entry: 10219b234; end: 10219b26b; -[_TtC26TilePickerScopeGraphBridge41SCTilePickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b234(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5eee0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5eed8));
  return;
}



/* Entry: 10219b26c; end: 10219b26f;  */

void FUN_10219b26c(void)

{
  return;
}



/* Entry: 10219b270; end: 10219b28f;  */

void FUN_10219b270(void)

{
  FUN_10219b0e0();
  return;
}



/* Entry: 10219b290; end: 10219b2af;  */

void FUN_10219b290(void)

{
  func_0x000107c61168(&PTR_PTR_112823300);
  return;
}



/* Entry: 10219b2b0; end: 10219b37f;  */

undefined8 FUN_10219b2b0(void)

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
  
  func_0x000107c61428(0x112e5ef10,&uStack_40,0x20,0);
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
    FUN_10219b380();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10219b380; end: 10219b39f;  */

void FUN_10219b380(void)

{
  func_0x000107c61168(&PTR_PTR_1128233c8);
  return;
}



/* Entry: 10219b3a0; end: 10219b3bb;  */

void FUN_10219b3a0(undefined8 param_1)

{
  func_0x0001000285a8(0x112e5ef18,&UNK_10da66658);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10219b428,param_1);
  return;
}



/* Entry: 10219b3bc; end: 10219b427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b3bc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10219b380();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e5ef20) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10219b428; end: 10219b42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b428(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10219b380();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e5ef20) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10219b430; end: 10219b47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b430(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5ef20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10219b47c; end: 10219b4db; -[_TtC26TilePickerScopeGraphBridge34TilePickerScopeGraphBridgeServices init] */

void FUN_10219b47c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TilePickerScopeGraphBridge.TilePickerScopeGraphBridgeServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10219b4a8);
  (*pcVar1)();
}



/* Entry: 10219b4dc; end: 10219b4eb; -[_TtC26TilePickerScopeGraphBridge34TilePickerScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b4dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5ef20));
  return;
}



/* Entry: 10219b4ec; end: 10219b577;  */

void FUN_10219b4ec(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10219b52c,0);
  return;
}



/* Entry: 10219b578; end: 10219b593;  */

void FUN_10219b578(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10219b5e4,param_1);
  return;
}



/* Entry: 10219b594; end: 10219b5e3;  */

void FUN_10219b594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10219b5e4; end: 10219b617;  */

void FUN_10219b5e4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10219b618; end: 10219b61f;  */

undefined8 FUN_10219b618(void)

{
  return 0x1b;
}



/* Entry: 10219b620; end: 10219b797;  */

void FUN_10219b620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104d9038;
  func_0x000107c613fc(&UNK_1104d9038,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10219b798,puVar1);
  return;
}



/* Entry: 10219b798; end: 10219b79f;  */

void FUN_10219b798(undefined8 *param_1)

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
  func_0x000107c61428(0x112e5ef10,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e5ef10,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104d9110;
  func_0x000107c613fc(&UNK_1104d9110,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10219b86c;
  func_0x00010058fa64(0x10219b86c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10219b7a0; end: 10219b7fb;  */

void FUN_10219b7a0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e5ef10,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e5ef10,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10219b7fc; end: 10219b873;  */

undefined ** FUN_10219b7fc(void)

{
  return &PTR_DAT_112fb4a48;
}



/* Entry: 10219b874; end: 10219b8bb; -[SCTilePickerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b874(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5ef78;
  func_0x000107c61428(param_1 + _DAT_112e5ef78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10219b8bc; end: 10219b913; -[SCTilePickerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b8bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5ef78;
  func_0x000107c61428(param_1 + _DAT_112e5ef78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10219b914; end: 10219b95b; -[SCTilePickerScopeGraphBridgeSaberEntryPoint sCSnapEditorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b914(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5ef80;
  func_0x000107c61428(param_1 + _DAT_112e5ef80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10219b95c; end: 10219b967; -[SCTilePickerScopeGraphBridgeSaberEntryPoint setSCSnapEditorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b95c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5ef80;
  func_0x000107c61428(param_1 + _DAT_112e5ef80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10219b968; end: 10219b9af; -[SCTilePickerScopeGraphBridgeSaberEntryPoint tilePickerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b968(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5ef88;
  func_0x000107c61428(param_1 + _DAT_112e5ef88,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10219b9b0; end: 10219b9bb; -[SCTilePickerScopeGraphBridgeSaberEntryPoint setTilePickerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219b9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5ef88;
  func_0x000107c61428(param_1 + _DAT_112e5ef88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10219b9bc; end: 10219ba1b;  */

void FUN_10219b9bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10219ba1c; end: 10219bbd7;  */

/* WARNING: Possible PIC construction at 0x00010219bb34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219bb58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219bb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219bbac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219bb6c) */
/* WARNING: Removing unreachable block (ram,0x00010219bb5c) */
/* WARNING: Removing unreachable block (ram,0x00010219bb38) */
/* WARNING: Removing unreachable block (ram,0x00010219bbb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219ba1c(void)

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
  func_0x000107c512e4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5c9a0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10219b038();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10219b2b0();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10219bbd8);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e5eea0) = lVar5;
      *(long *)(lVar3 + _DAT_112e5eea8) = unaff_x20;
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



/* Entry: 10219bbd8; end: 10219bbff; -[SCTilePickerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10219bbd8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10219ba1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10219bc00; end: 10219bc43; -[SCTilePickerScopeGraphBridgeSaberEntryPoint end] */

void FUN_10219bc00(undefined8 param_1)

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



/* Entry: 10219bc44; end: 10219be47;  */

void FUN_10219bc44(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0f97270)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000018,0x800000010f068d90,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000029;
        if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0f97250)) &&
           (func_0x000107c605b8(0xd000000000000029,0x800000010f068db0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "TilePickerScopeGraphBridge/SCTilePickerScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x4c,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10219be48);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59d50();
        goto LAB_10219bcd0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5888c();
  }
LAB_10219bcd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10219be48; end: 10219bef3; -[SCTilePickerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10219be48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10219bc44(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10219bef4; end: 10219bf6b; -[SCTilePickerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219bef4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5ef78,0);
  *(undefined8 *)(param_1 + _DAT_112e5ef80) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5ef88) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5ef90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10219bf6c; end: 10219bf9f;  */

void FUN_10219bf6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10219bfa0; end: 10219bff7; -[SCTilePickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010219bfcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219bfd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219bfa0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5ef78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5ef80));
  return;
}



/* Entry: 10219bff8; end: 10219c017;  */

void FUN_10219bff8(void)

{
  func_0x000107c61168(&PTR_PTR_112823488);
  return;
}



/* Entry: 10219c018; end: 10219c05f; -[SCSCTilePickerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219c018(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5efc0;
  func_0x000107c61428(param_1 + _DAT_112e5efc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10219c060; end: 10219c0b7; -[SCSCTilePickerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219c060(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5efc0;
  func_0x000107c61428(param_1 + _DAT_112e5efc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10219c0b8; end: 10219c18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219c0b8(undefined8 param_1,long param_2)

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
    FUN_10219b290();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e5eed8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10219c190);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e5eee0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5efc8);
    *(long **)(unaff_x20 + _DAT_112e5efc8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10219c190; end: 10219c1b7; -[SCSCTilePickerScopedServicesSaberEntryPoint begin] */

void FUN_10219c190(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10219c0b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10219c1b8; end: 10219c32f;  */

/* WARNING: Possible PIC construction at 0x00010219c220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219c2b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219c224) */
/* WARNING: Removing unreachable block (ram,0x00010219c2bc) */
/* WARNING: Removing unreachable block (ram,0x00010219c2d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219c1b8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5efc8);
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



/* Entry: 10219c330; end: 10219c337;  */

void FUN_10219c330(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10219c338; end: 10219c36b; -[SCSCTilePickerScopedServicesSaberEntryPoint end] */

void FUN_10219c338(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10219c1b8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10219c36c; end: 10219c48b;  */

void FUN_10219c36c(long param_1,long param_2,long param_3)

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
                        "TilePickerScopeGraphBridge/SCSCTilePickerScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10219c48c);
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



/* Entry: 10219c48c; end: 10219c537; -[SCSCTilePickerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10219c48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10219c36c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10219c538; end: 10219c597; -[SCSCTilePickerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219c538(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5efc0,0);
  *(undefined8 *)(param_1 + _DAT_112e5efc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10219c598; end: 10219c5cb;  */

void FUN_10219c598(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10219c5cc; end: 10219c603; -[SCSCTilePickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219c5cc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5efc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5efc8));
  return;
}



/* Entry: 10219c604; end: 10219c623;  */

void FUN_10219c604(void)

{
  func_0x000107c61168(&PTR_PTR_112823558);
  return;
}



/* Entry: 10219c624; end: 10219c68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219c624(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10219ca18();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e5f000) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10219c690; end: 10219c6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219c690(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5f000) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10219c6fc; end: 10219c75b; -[_TtC36SendFlowScopedFactoryServiceProvider24SCSendFlowScopedServices init] */

void FUN_10219c6fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendFlowScopedFactoryServiceProvider.SCSendFlowScopedServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10219c728);
  (*pcVar1)();
}



/* Entry: 10219c75c; end: 10219c76b; -[_TtC36SendFlowScopedFactoryServiceProvider24SCSendFlowScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219c75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5f000));
  return;
}



/* Entry: 10219c76c; end: 10219c7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219c76c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104d9328;
  func_0x000107c613fc(&UNK_1104d9328,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10219caf4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10219c7d8; end: 10219c873;  */

void FUN_10219c7d8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104d9238;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d9238;
  return;
}



/* Entry: 10219c874; end: 10219c8ab;  */

void FUN_10219c874(long *param_1)

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



/* Entry: 10219c8ac; end: 10219c8b3;  */

undefined8 FUN_10219c8ac(void)

{
  return 0x1b;
}



/* Entry: 10219c8b4; end: 10219c9e7;  */

void FUN_10219c8b4(undefined8 *param_1)

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
  puVar1 = &UNK_1104d9350;
  func_0x000107c613fc(&UNK_1104d9350,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10219cacc;
  func_0x00010058fa64(FUN_10219cacc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10219c9e8; end: 10219ca17;  */

undefined ** FUN_10219c9e8(void)

{
  return &PTR_DAT_112f9b1c8;
}



/* Entry: 10219ca18; end: 10219ca37;  */

void FUN_10219ca18(void)

{
  func_0x000107c61168(&PTR_PTR_112823618);
  return;
}



/* Entry: 10219ca38; end: 10219ca87;  */

undefined1  [16] FUN_10219ca38(void)

{
  return ZEXT816(0x1104d9288);
}



/* Entry: 10219ca88; end: 10219cacb;  */

void FUN_10219ca88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5f068 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aa068;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e5f068 = puVar1;
  return;
}



/* Entry: 10219cacc; end: 10219caf3;  */

void FUN_10219cacc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10219caf4; end: 10219cb07;  */

void FUN_10219caf4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10219cb08; end: 10219ce33;  */

void FUN_10219cb08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e5f080,&UNK_10da66a90);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x00010219d83c();
  pcVar3 = "SCPreviewScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCPreviewScopeExposerSubjectServiceProvider",0x2b,2);
  FUN_10219d888();
  func_0x000100082720("SCStoryQuickPostScopeExposerSubjectServiceProvider",0x32,2);
  puVar4 = puVar2;
  FUN_10219d87c();
  func_0x000100082720("SCPreviewScopeExposerObservableServiceProvider",0x2e,2);
  pcVar5 = pcVar3;
  FUN_10219d914();
  func_0x000100082720("SCStoryQuickPostScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_10219c874;
  func_0x0001000823a8(FUN_10219c874,0);
  func_0x000100082720("SCSendFlowScopedServicesCleanupRelayServiceProvider",0x33,2);
  puVar7 = puVar2;
  FUN_10219d690(puVar2,pcVar3);
  func_0x000100082720("SendFlowScopeGraphBridgeServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e5f088,&UNK_10da66aa0);
  puVar8 = &UNK_1104d93b0;
  func_0x000107c613fc(&UNK_1104d93b0,0x28,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(code **)(puVar8 + 0x18) = pcVar6;
  *(undefined8 **)(puVar8 + 0x20) = puVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(puVar7);
  pcVar9 = FUN_10219ce34;
  func_0x0001000823a8(FUN_10219ce34,puVar8);
  func_0x000100082720("SCSendFlowScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e5f008,&UNK_10da66860);
  func_0x000107c6157c(pcVar9);
  uVar11 = 0x10219ce40;
  func_0x0001000823a8(0x10219ce40,pcVar9);
  func_0x000100082720("SCSendFlowScopeInitializationServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e5eff8,&UNK_10da66850);
  func_0x000107c6157c(uVar11);
  uVar10 = 0x10219ce48;
  func_0x0001000823a8(0x10219ce48,uVar11);
  func_0x000100082720("SCSendFlowScopedServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_1104d93d8;
  func_0x000107c613fc(&UNK_1104d93d8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar10;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x10219ce50;
  func_0x0001000823a8(0x10219ce50,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar11);
  func_0x000100082720("SCSendFlowScopeEntryPointProvider",0x21,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 10219ce34; end: 10219ce57;  */

void FUN_10219ce34(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10219ce94(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("SCSendFlowScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10219ce58; end: 10219ce93;  */

void FUN_10219ce58(undefined8 *param_1,undefined8 param_2)

{
  FUN_10219ce94();
  func_0x0001000a7f38("SCSendFlowScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10219ce94; end: 10219d0d3;  */

void FUN_10219ce94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106980b0;
  ppuVar4 = &PTR_DAT_112f9b1c8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104d9400;
  func_0x000107c613fc(&UNK_1104d9400,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e5f090;
  func_0x0001000285a8(0x112e5f090,&UNK_10da66aa8);
  func_0x0001000a6ee8(&UNK_1104d92c8,"SCSendFlowScopedServicesScopeInitializationPluginKey",0x34,2,
                      FUN_10219d0d4,puVar2,uVar3,&UNK_1104d92c8,&PTR_DAT_112e5f010);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1104d9428;
  func_0x000107c613fc(&UNK_1104d9428,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104d96b8,"SendFlowScopeGraphBridgeScopeInitializationPluginKey",0x34,2,
                      FUN_10219d0dc,puVar2,uVar3,&UNK_1104d96b8,&PTR_DAT_112e5f130);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e5f098;
  func_0x0001000285a8(0x112e5f098,&UNK_10da66ab0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10219d0d4; end: 10219d0db;  */

void FUN_10219d0d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104d9450;
  func_0x000107c613fc(&UNK_1104d9450,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10219d148;
  func_0x0001000823a8(FUN_10219d148,puVar3);
  func_0x000100082720("SCSendFlowScopedServicesScopeInitializationPluginProvider",0x39,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10219d0dc; end: 10219d11b;  */

void FUN_10219d0dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010219d9b4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SendFlowScopeGraphBridgeScopeInitializationPluginProvider",0x39,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10219d11c; end: 10219d147;  */

void FUN_10219d11c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10219d148; end: 10219d14f;  */

void FUN_10219d148(undefined8 *param_1)

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
  puVar1 = &UNK_1104d9350;
  func_0x000107c613fc(&UNK_1104d9350,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10219cacc;
  func_0x00010058fa64(FUN_10219cacc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10219d150; end: 10219d267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10219d150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_10219d5a0();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e5f0a0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e5f0a8) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10219d268);
  (*pcVar2)();
}



/* Entry: 10219d268; end: 10219d2c7; -[_TtC24SendFlowScopeGraphBridge39SendFlowScopeGraphBridgeSaberEntryPoint init] */

void FUN_10219d268(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendFlowScopeGraphBridge.SendFlowScopeGraphBridgeSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10219d294);
  (*pcVar1)();
}



/* Entry: 10219d2c8; end: 10219d2ff; -[_TtC24SendFlowScopeGraphBridge39SendFlowScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010219d2e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219d2e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219d2c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5f0a0));
  return;
}



/* Entry: 10219d300; end: 10219d327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219d300(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e5f0a8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e5f0a0));
  return;
}



/* Entry: 10219d328; end: 10219d347;  */

void FUN_10219d328(void)

{
  func_0x000107c61168(&PTR_PTR_1128236d8);
  return;
}



/* Entry: 10219d348; end: 10219d3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10219d348(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5f0d8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e5f0e0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10219d3d0);
  (*pcVar2)();
}



/* Entry: 10219d3d0; end: 10219d4b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10219d3d0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5f0d8);
  *(undefined **)(unaff_x20 + _DAT_112e5f0d8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5f0e0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e5f0e0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104d9570;
  func_0x000107c613fc(&UNK_1104d9570,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10219d4bc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10219d4b8; end: 10219d4c3;  */

void FUN_10219d4b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10219d4c4; end: 10219d523; -[_TtC24SendFlowScopeGraphBridge39SCSendFlowScopedServicesSaberEntryPoint init] */

void FUN_10219d4c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendFlowScopeGraphBridge.SCSendFlowScopedServicesSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10219d4f0);
  (*pcVar1)();
}



/* Entry: 10219d524; end: 10219d55b; -[_TtC24SendFlowScopeGraphBridge39SCSendFlowScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219d524(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5f0e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5f0d8));
  return;
}



/* Entry: 10219d55c; end: 10219d55f;  */

void FUN_10219d55c(void)

{
  return;
}



/* Entry: 10219d560; end: 10219d57f;  */

void FUN_10219d560(void)

{
  FUN_10219d3d0();
  return;
}



/* Entry: 10219d580; end: 10219d59f;  */

void FUN_10219d580(void)

{
  func_0x000107c61168(&PTR_PTR_1128237a0);
  return;
}



/* Entry: 10219d5a0; end: 10219d66f;  */

undefined8 FUN_10219d5a0(void)

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
  
  func_0x000107c61428(0x112e5f110,&uStack_40,0x20,0);
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
    FUN_10219d670();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10219d670; end: 10219d68f;  */

void FUN_10219d670(void)

{
  func_0x000107c61168(&PTR_PTR_112823868);
  return;
}



/* Entry: 10219d690; end: 10219d6b3;  */

void FUN_10219d690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104d95b8;
  func_0x0001000285a8(0x112e5f118,&UNK_10da66b58);
  func_0x000107c613fc(&UNK_1104d95b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10219d738,puVar1);
  return;
}


