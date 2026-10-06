/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10200a1e8; end: 10200a23b;  */

void FUN_10200a1e8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10200a23c; end: 10200a277;  */

void FUN_10200a23c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10200a278();
  func_0x0001000a7f38("SCCustomStorySettingsScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 10200a278; end: 10200a463;  */

void FUN_10200a278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d410;
  ppuVar4 = &PTR_DAT_113066a90;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e4f6b8;
  func_0x0001000285a8(0x112e4f6b8,&UNK_10da4c7c8);
  func_0x0001000a6ee8(&UNK_1104bb4a8,
                      "CustomStorySettingsEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_10200a4d8,param_1,uVar2,&UNK_1104bb4a8,&PTR_DAT_112e4f5f0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104bb4f8;
  func_0x000107c613fc(&UNK_1104bb4f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bb708,
                      "CustomStorySettingsScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_10200a4e0,puVar3,uVar2,&UNK_1104bb708,&PTR_DAT_112e4f748);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104bb520;
  func_0x000107c613fc(&UNK_1104bb520,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104bb340,
                      "SCCustomStorySettingsScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_10200a5c8,puVar3,uVar2,&UNK_1104bb340,&PTR_DAT_112e4f570);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e4f6c0;
  func_0x0001000285a8(0x112e4f6c0,&UNK_10da4c7d0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 10200a464; end: 10200a4d7;  */

void FUN_10200a464(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10200a604;
  func_0x0001000823a8(0x10200a604,param_3);
  func_0x000100082720("CustomStorySettingsEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 10200a4d8; end: 10200a4df;  */

void FUN_10200a4d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10200a604;
  func_0x0001000823a8();
  func_0x000100082720("CustomStorySettingsEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 10200a4e0; end: 10200a51f;  */

void FUN_10200a4e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10200aba0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CustomStorySettingsScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 10200a520; end: 10200a5c7;  */

void FUN_10200a520(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bb548;
  func_0x000107c613fc(&UNK_1104bb548,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10200a5fc;
  func_0x0001000823a8(FUN_10200a5fc,puVar1);
  func_0x000100082720("SCCustomStorySettingsScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 10200a5c8; end: 10200a5cf;  */

void FUN_10200a5c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bb548;
  func_0x000107c613fc(&UNK_1104bb548,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10200a5fc;
  func_0x0001000823a8(FUN_10200a5fc,puVar3);
  func_0x000100082720("SCCustomStorySettingsScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 10200a5d0; end: 10200a5fb;  */

void FUN_10200a5d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10200a5fc; end: 10200a60b;  */

void FUN_10200a5fc(undefined8 *param_1)

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
  puVar1 = &UNK_1104bb3c8;
  func_0x000107c613fc(&UNK_1104bb3c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102009c00;
  func_0x00010058fa64(FUN_102009c00,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10200a60c; end: 10200a693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10200a60c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10200a9cc();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e4f6c8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e4f6d0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200a694);
  (*pcVar1)();
}



/* Entry: 10200a694; end: 10200a6f3; -[_TtC35CustomStorySettingsScopeGraphBridge50CustomStorySettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_10200a694(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStorySettingsScopeGraphBridge.CustomStorySettingsScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200a6c0);
  (*pcVar1)();
}



/* Entry: 10200a6f4; end: 10200a72b; -[_TtC35CustomStorySettingsScopeGraphBridge50CustomStorySettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010200a710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200a714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200a6f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4f6c8));
  return;
}



/* Entry: 10200a72c; end: 10200a753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200a72c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4f6d0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4f6c8));
  return;
}



/* Entry: 10200a754; end: 10200a773;  */

void FUN_10200a754(void)

{
  func_0x000107c61168(&PTR_PTR_112816388);
  return;
}



/* Entry: 10200a774; end: 10200a7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10200a774(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4f700) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4f708);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10200a7fc);
  (*pcVar2)();
}



/* Entry: 10200a7fc; end: 10200a8e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10200a7fc(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4f700);
  *(undefined **)(unaff_x20 + _DAT_112e4f700) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4f708);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4f708))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104bb668;
  func_0x000107c613fc(&UNK_1104bb668,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10200a8e8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10200a8e4; end: 10200a8ef;  */

void FUN_10200a8e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10200a8f0; end: 10200a94f; -[_TtC35CustomStorySettingsScopeGraphBridge50SCCustomStorySettingsScopedServicesSaberEntryPoint init] */

void FUN_10200a8f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStorySettingsScopeGraphBridge.SCCustomStorySettingsScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200a91c);
  (*pcVar1)();
}



/* Entry: 10200a950; end: 10200a987; -[_TtC35CustomStorySettingsScopeGraphBridge50SCCustomStorySettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200a950(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4f708));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4f700));
  return;
}



/* Entry: 10200a988; end: 10200a98b;  */

void FUN_10200a988(void)

{
  return;
}



/* Entry: 10200a98c; end: 10200a9ab;  */

void FUN_10200a98c(void)

{
  FUN_10200a7fc();
  return;
}



/* Entry: 10200a9ac; end: 10200a9cb;  */

void FUN_10200a9ac(void)

{
  func_0x000107c61168(&PTR_PTR_112816450);
  return;
}



/* Entry: 10200a9cc; end: 10200aa9b;  */

undefined8 FUN_10200a9cc(void)

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
  
  func_0x000107c61428(0x112e4f738,&uStack_40,0x20,0);
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
    FUN_10200aa9c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10200aa9c; end: 10200aabb;  */

void FUN_10200aa9c(void)

{
  func_0x000107c61168(&PTR_PTR_112816518);
  return;
}



/* Entry: 10200aabc; end: 10200ab27;  */

void FUN_10200aabc(void)

{
  func_0x0001000285a8(0x112e4f740,&UNK_10da4c8a8);
  func_0x0001000823a8(0x10200aafc,0);
  return;
}



/* Entry: 10200ab28; end: 10200ab63; -[_TtC35CustomStorySettingsScopeGraphBridge43CustomStorySettingsScopeGraphBridgeServices init] */

void FUN_10200ab28(undefined8 param_1)

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



/* Entry: 10200ab64; end: 10200ab97;  */

void FUN_10200ab64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10200ab98; end: 10200ab9f;  */

undefined8 FUN_10200ab98(void)

{
  return 0x1b;
}



/* Entry: 10200aba0; end: 10200ad17;  */

void FUN_10200aba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bb6b0;
  func_0x000107c613fc(&UNK_1104bb6b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10200ad18,puVar1);
  return;
}



/* Entry: 10200ad18; end: 10200ad1f;  */

void FUN_10200ad18(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4f738,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4f738,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bb748;
  func_0x000107c613fc(&UNK_1104bb748,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10200adcc;
  func_0x00010058fa64(0x10200adcc,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10200ad20; end: 10200ad7b;  */

void FUN_10200ad20(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4f738,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4f738,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10200ad7c; end: 10200add3;  */

undefined ** FUN_10200ad7c(void)

{
  return &PTR_DAT_113066a90;
}



/* Entry: 10200add4; end: 10200ae1b; -[SCCustomStorySettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200add4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f798;
  func_0x000107c61428(param_1 + _DAT_112e4f798,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10200ae1c; end: 10200ae73; -[SCCustomStorySettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200ae1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f798;
  func_0x000107c61428(param_1 + _DAT_112e4f798,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10200ae74; end: 10200aebb; -[SCCustomStorySettingsScopeGraphBridgeSaberEntryPoint customStorySettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200ae74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f7a0;
  func_0x000107c61428(param_1 + _DAT_112e4f7a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10200aebc; end: 10200af1f; -[SCCustomStorySettingsScopeGraphBridgeSaberEntryPoint setCustomStorySettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200aebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f7a0;
  func_0x000107c61428(param_1 + _DAT_112e4f7a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10200af20; end: 10200b053;  */

/* WARNING: Possible PIC construction at 0x00010200afd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200aff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200b010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200afdc) */
/* WARNING: Removing unreachable block (ram,0x00010200aff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200af20(void)

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
  func_0x000107c41148();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10200a754();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10200a9cc();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10200b054);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e4f6c8) = lVar5;
    *(long *)(lVar4 + _DAT_112e4f6d0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10200b054; end: 10200b07b; -[SCCustomStorySettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10200b054(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10200af20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10200b07c; end: 10200b0bf; -[SCCustomStorySettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_10200b07c(undefined8 param_1)

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



/* Entry: 10200b0c0; end: 10200b257;  */

void FUN_10200b0c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0fa9d10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010f0562f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CustomStorySettingsScopeGraphBridge/SCCustomStorySettingsScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5e,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10200b258);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53d64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10200b258; end: 10200b303; -[SCCustomStorySettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10200b258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10200b0c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10200b304; end: 10200b36f; -[SCCustomStorySettingsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200b304(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4f798,0);
  *(undefined8 *)(param_1 + _DAT_112e4f7a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4f7a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10200b370; end: 10200b3a3;  */

void FUN_10200b370(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10200b3a4; end: 10200b3eb; -[SCCustomStorySettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010200b3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200b3d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200b3a4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4f798);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4f7a0));
  return;
}



/* Entry: 10200b3ec; end: 10200b40b;  */

void FUN_10200b3ec(void)

{
  func_0x000107c61168(&PTR_PTR_1128165c8);
  return;
}



/* Entry: 10200b40c; end: 10200b453; -[SCSCCustomStorySettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200b40c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4f7d8;
  func_0x000107c61428(param_1 + _DAT_112e4f7d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10200b454; end: 10200b4ab; -[SCSCCustomStorySettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200b454(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4f7d8;
  func_0x000107c61428(param_1 + _DAT_112e4f7d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10200b4ac; end: 10200b583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200b4ac(undefined8 param_1,long param_2)

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
    FUN_10200a9ac();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4f700) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10200b584);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4f708);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4f7e0);
    *(long **)(unaff_x20 + _DAT_112e4f7e0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10200b584; end: 10200b5ab; -[SCSCCustomStorySettingsScopedServicesSaberEntryPoint begin] */

void FUN_10200b584(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10200b4ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10200b5ac; end: 10200b723;  */

/* WARNING: Possible PIC construction at 0x00010200b614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200b6ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200b618) */
/* WARNING: Removing unreachable block (ram,0x00010200b6b0) */
/* WARNING: Removing unreachable block (ram,0x00010200b6c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200b5ac(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4f7e0);
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



/* Entry: 10200b724; end: 10200b72b;  */

void FUN_10200b724(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10200b72c; end: 10200b75f; -[SCSCCustomStorySettingsScopedServicesSaberEntryPoint end] */

void FUN_10200b72c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10200b5ac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10200b760; end: 10200b87f;  */

void FUN_10200b760(long param_1,long param_2,long param_3)

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
                        "CustomStorySettingsScopeGraphBridge/SCSCCustomStorySettingsScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10200b880);
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



/* Entry: 10200b880; end: 10200b92b; -[SCSCCustomStorySettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10200b880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10200b760(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10200b92c; end: 10200b98b; -[SCSCCustomStorySettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200b92c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4f7d8,0);
  *(undefined8 *)(param_1 + _DAT_112e4f7e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10200b98c; end: 10200b9bf;  */

void FUN_10200b98c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10200b9c0; end: 10200b9f7; -[SCSCCustomStorySettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200b9c0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4f7d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4f7e0));
  return;
}



/* Entry: 10200b9f8; end: 10200ba17;  */

void FUN_10200b9f8(void)

{
  func_0x000107c61168(&PTR_PTR_112816690);
  return;
}



/* Entry: 10200ba18; end: 10200ba47;  */

void FUN_10200ba18(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10200ba48; end: 10200ba53;  */

void FUN_10200ba48(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10200ba54; end: 10200ba77;  */

void FUN_10200ba54(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10200ba78; end: 10200ba83;  */

void FUN_10200ba78(void)

{
  return;
}



/* Entry: 10200ba84; end: 10200baa3;  */

void FUN_10200ba84(void)

{
  func_0x000107c61168(&PTR_PTR_112e4f850);
  return;
}



/* Entry: 10200baa4; end: 10200bb0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200baa4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10200be98();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4f8b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10200bb10; end: 10200bb7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200bb10(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4f8b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10200bb7c; end: 10200bbdb; -[_TtC43DeleteStorySnapScopedFactoryServiceProvider31SCDeleteStorySnapScopedServices init] */

void FUN_10200bb7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeleteStorySnapScopedFactoryServiceProvider.SCDeleteStorySnapScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200bba8);
  (*pcVar1)();
}



/* Entry: 10200bbdc; end: 10200bbeb; -[_TtC43DeleteStorySnapScopedFactoryServiceProvider31SCDeleteStorySnapScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200bbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4f8b8));
  return;
}



/* Entry: 10200bbec; end: 10200bc57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200bbec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bba00;
  func_0x000107c613fc(&UNK_1104bba00,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10200bf30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10200bc58; end: 10200bcf3;  */

void FUN_10200bc58(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bb910;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bb910;
  return;
}



/* Entry: 10200bcf4; end: 10200bd2b;  */

void FUN_10200bcf4(long *param_1)

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



/* Entry: 10200bd2c; end: 10200bd33;  */

undefined8 FUN_10200bd2c(void)

{
  return 0x1b;
}



/* Entry: 10200bd34; end: 10200be67;  */

void FUN_10200bd34(undefined8 *param_1)

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
  puVar1 = &UNK_1104bba28;
  func_0x000107c613fc(&UNK_1104bba28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10200bf08;
  func_0x00010058fa64(FUN_10200bf08,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10200be68; end: 10200be97;  */

undefined ** FUN_10200be68(void)

{
  return &PTR_DAT_112ff1928;
}



/* Entry: 10200be98; end: 10200beb7;  */

void FUN_10200be98(void)

{
  func_0x000107c61168(&PTR_PTR_112816750);
  return;
}



/* Entry: 10200beb8; end: 10200bf07;  */

undefined1  [16] FUN_10200beb8(void)

{
  return ZEXT816(0x1104bb960);
}



/* Entry: 10200bf08; end: 10200bf2f;  */

void FUN_10200bf08(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10200bf30; end: 10200bf43;  */

void FUN_10200bf30(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10200bf44; end: 10200c2c7;  */

void FUN_10200bf44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e4f930,&UNK_10da4cd18);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10200d540();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_10200d5cc();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10200bcf4;
  func_0x0001000823a8(FUN_10200bcf4,0);
  func_0x000100082720("SCDeleteStorySnapScopedServicesCleanupRelayServiceProvider",0x3a,2);
  puVar5 = puVar2;
  FUN_10200d3f4();
  func_0x000100082720("DeleteStorySnapScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4f938,&UNK_10da4cd30);
  puVar6 = &UNK_1104bbad8;
  func_0x000107c613fc(&UNK_1104bbad8,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 **)(puVar6 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10200c2d4;
  func_0x0001000823a8(0x10200c2d4,puVar6);
  func_0x000100082720("SCDeleteStorySnapScopeEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4f940,&UNK_10da4cd20);
  puVar6 = &UNK_1104bbb00;
  func_0x000107c613fc(&UNK_1104bbb00,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10200c2e4;
  func_0x0001000823a8(0x10200c2e4,puVar6);
  func_0x000100082720("SCDeleteStorySnapScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e4f8c0,&UNK_10da4cad0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10200c2f0;
  func_0x0001000823a8(0x10200c2f0,uVar7);
  func_0x000100082720("SCDeleteStorySnapScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e4f8b0,&UNK_10da4cac0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10200c2f8;
  func_0x0001000823a8(0x10200c2f8,uVar8);
  func_0x000100082720("SCDeleteStorySnapScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104bbb28;
  func_0x000107c613fc(&UNK_1104bbb28,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10200c300;
  func_0x0001000823a8(0x10200c300,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCDeleteStorySnapScopeEntryPointProvider",0x28,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10200c2c8; end: 10200c307;  */

void FUN_10200c2c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e4f930,&UNK_10da4cd18);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10200d540();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_10200d5cc();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10200bcf4;
  func_0x0001000823a8(FUN_10200bcf4,0);
  func_0x000100082720("SCDeleteStorySnapScopedServicesCleanupRelayServiceProvider",0x3a,2);
  puVar5 = puVar2;
  FUN_10200d3f4();
  func_0x000100082720("DeleteStorySnapScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4f938,&UNK_10da4cd30);
  puVar6 = &UNK_1104bbad8;
  func_0x000107c613fc(&UNK_1104bbad8,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  *(undefined8 *)(puVar6 + 0x28) = uVar9;
  *(undefined8 **)(puVar6 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar7 = 0x10200c2d4;
  func_0x0001000823a8(0x10200c2d4,puVar6);
  func_0x000100082720("SCDeleteStorySnapScopeEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4f940,&UNK_10da4cd20);
  puVar6 = &UNK_1104bbb00;
  func_0x000107c613fc(&UNK_1104bbb00,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x10200c2e4;
  func_0x0001000823a8(0x10200c2e4,puVar6);
  func_0x000100082720("SCDeleteStorySnapScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e4f8c0,&UNK_10da4cad0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10200c2f0;
  func_0x0001000823a8(0x10200c2f0,uVar8);
  func_0x000100082720("SCDeleteStorySnapScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e4f8b0,&UNK_10da4cac0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x10200c2f8;
  func_0x0001000823a8(0x10200c2f8,uVar9);
  func_0x000100082720("SCDeleteStorySnapScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104bbb28;
  func_0x000107c613fc(&UNK_1104bbb28,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x10200c300;
  func_0x0001000823a8(0x10200c300,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCDeleteStorySnapScopeEntryPointProvider",0x28,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 10200c308; end: 10200c95b;  */

void FUN_10200c308(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_10200caac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar7 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar4;
  puVar5 = PTR_PTR_1126a9dd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0565f0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar4);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  *param_1 = param_2;
  return;
}



/* Entry: 10200c95c; end: 10200c99f;  */

void FUN_10200c95c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10200c9a0; end: 10200c9a7;  */

undefined8 FUN_10200c9a0(void)

{
  return 0x1b;
}



/* Entry: 10200c9a8; end: 10200ca2b;  */

void FUN_10200c9a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10200caec,param_2,FUN_10200caf0,param_2,FUN_10200cb18,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10200ca2c; end: 10200ca7b;  */

undefined8 FUN_10200ca2c(void)

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



/* Entry: 10200ca7c; end: 10200caab;  */

undefined ** FUN_10200ca7c(void)

{
  return &PTR_DAT_112ff1928;
}



/* Entry: 10200caac; end: 10200cacb;  */

void FUN_10200caac(void)

{
  func_0x000107c61168(&PTR_PTR_112e4f9b0);
  return;
}



/* Entry: 10200cacc; end: 10200caef;  */

undefined1  [16] FUN_10200cacc(void)

{
  return ZEXT816(0x1104bbb80);
}



/* Entry: 10200caf0; end: 10200cb17;  */

void FUN_10200caf0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10200cb18; end: 10200cb1f;  */

undefined8 FUN_10200cb18(void)

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



/* Entry: 10200cb20; end: 10200cb5b;  */

void FUN_10200cb20(undefined8 *param_1,undefined8 param_2)

{
  FUN_10200cb5c();
  func_0x0001000a7f38("SCDeleteStorySnapScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10200cb5c; end: 10200cd47;  */

void FUN_10200cb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106dc5c8;
  ppuVar4 = &PTR_DAT_112ff1928;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104bbbd0;
  func_0x000107c613fc(&UNK_1104bbbd0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e4fa30;
  func_0x0001000285a8(0x112e4fa30,&UNK_10da4ce90);
  func_0x0001000a6ee8(&UNK_1104bbdc8,"DeleteStorySnapScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_10200cd48,puVar2,uVar3,&UNK_1104bbdc8,&PTR_DAT_112e4fac8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bbb80,
                      "SCDeleteStorySnapScopeEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_10200cdfc,param_3,uVar3,&UNK_1104bbb80,&PTR_DAT_112e4f948);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104bbbf8;
  func_0x000107c613fc(&UNK_1104bbbf8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104bb9a0,"SCDeleteStorySnapScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_10200ceac,puVar2,uVar3,&UNK_1104bb9a0,&PTR_DAT_112e4f8c8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4fa38;
  func_0x0001000285a8(0x112e4fa38,&UNK_10da4ce98);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10200cd48; end: 10200cd87;  */

void FUN_10200cd48(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10200d674(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DeleteStorySnapScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10200cd88; end: 10200cdfb;  */

void FUN_10200cd88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10200cee8;
  func_0x0001000823a8(0x10200cee8,param_3);
  func_0x000100082720("SCDeleteStorySnapScopeEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10200cdfc; end: 10200ce03;  */

void FUN_10200cdfc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10200cee8;
  func_0x0001000823a8();
  func_0x000100082720("SCDeleteStorySnapScopeEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10200ce04; end: 10200ceab;  */

void FUN_10200ce04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bbc20;
  func_0x000107c613fc(&UNK_1104bbc20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10200cee0;
  func_0x0001000823a8(FUN_10200cee0,puVar1);
  func_0x000100082720("SCDeleteStorySnapScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10200ceac; end: 10200ceb3;  */

void FUN_10200ceac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bbc20;
  func_0x000107c613fc(&UNK_1104bbc20,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10200cee0;
  func_0x0001000823a8(FUN_10200cee0,puVar3);
  func_0x000100082720("SCDeleteStorySnapScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10200ceb4; end: 10200cedf;  */

void FUN_10200ceb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10200cee0; end: 10200ceef;  */

void FUN_10200cee0(undefined8 *param_1)

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
  puVar1 = &UNK_1104bba28;
  func_0x000107c613fc(&UNK_1104bba28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10200bf08;
  func_0x00010058fa64(FUN_10200bf08,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10200cef0; end: 10200cfcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10200cef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10200d304();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e4fa40) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e4fa48) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200cfcc);
  (*pcVar1)();
}


