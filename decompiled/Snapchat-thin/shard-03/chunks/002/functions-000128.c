/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025b1bf0; end: 1025b1c2b;  */

void FUN_1025b1bf0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1025b1c2c();
  func_0x0001000a7f38("SCMapAddressSelectionScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 1025b1c2c; end: 1025b1e17;  */

void FUN_1025b1c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d7d0;
  ppuVar4 = &PTR_DAT_113066cd0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110524ba8;
  func_0x000107c613fc(&UNK_110524ba8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ea8f00;
  func_0x0001000285a8(0x112ea8f00,&UNK_10dabd798);
  func_0x0001000a6ee8(&UNK_110524df8,
                      "MapAddressSelectionScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_1025b1e18,puVar2,uVar3,&UNK_110524df8,&PTR_DAT_112ea8f98);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110524b58,
                      "SCMapAddressSelectionEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_1025b1ecc,param_3,uVar3,&UNK_110524b58,&PTR_DAT_112ea8dc0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110524bd0;
  func_0x000107c613fc(&UNK_110524bd0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110524978,
                      "SCMapAddressSelectionScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_1025b1f7c,puVar2,uVar3,&UNK_110524978,&PTR_DAT_112ea8d40);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ea8f08;
  func_0x0001000285a8(0x112ea8f08,&UNK_10dabd7a0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1025b1e18; end: 1025b1e57;  */

void FUN_1025b1e18(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1025b2744(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MapAddressSelectionScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 1025b1e58; end: 1025b1ecb;  */

void FUN_1025b1e58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1025b1fb8;
  func_0x0001000823a8(0x1025b1fb8,param_3);
  func_0x000100082720("SCMapAddressSelectionEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1025b1ecc; end: 1025b1ed3;  */

void FUN_1025b1ecc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1025b1fb8;
  func_0x0001000823a8();
  func_0x000100082720("SCMapAddressSelectionEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1025b1ed4; end: 1025b1f7b;  */

void FUN_1025b1ed4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110524bf8;
  func_0x000107c613fc(&UNK_110524bf8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1025b1fb0;
  func_0x0001000823a8(FUN_1025b1fb0,puVar1);
  func_0x000100082720("SCMapAddressSelectionScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 1025b1f7c; end: 1025b1f83;  */

void FUN_1025b1f7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110524bf8;
  func_0x000107c613fc(&UNK_110524bf8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1025b1fb0;
  func_0x0001000823a8(FUN_1025b1fb0,puVar3);
  func_0x000100082720("SCMapAddressSelectionScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 1025b1f84; end: 1025b1faf;  */

void FUN_1025b1f84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025b1fb0; end: 1025b1fbf;  */

void FUN_1025b1fb0(undefined8 *param_1)

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
  puVar1 = &UNK_110524a00;
  func_0x000107c613fc(&UNK_110524a00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1025afe58;
  func_0x00010058fa64(FUN_1025afe58,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1025b1fc0; end: 1025b209b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1025b1fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1025b23d4();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ea8f10) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ea8f18) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b209c);
  (*pcVar1)();
}



/* Entry: 1025b209c; end: 1025b20fb; -[_TtC35MapAddressSelectionScopeGraphBridge50MapAddressSelectionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1025b209c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAddressSelectionScopeGraphBridge.MapAddressSelectionScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b20c8);
  (*pcVar1)();
}



/* Entry: 1025b20fc; end: 1025b2133; -[_TtC35MapAddressSelectionScopeGraphBridge50MapAddressSelectionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025b2118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025b211c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b20fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea8f10));
  return;
}



/* Entry: 1025b2134; end: 1025b215b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b2134(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ea8f18),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ea8f10));
  return;
}



/* Entry: 1025b215c; end: 1025b217b;  */

void FUN_1025b215c(void)

{
  func_0x000107c61168(&PTR_PTR_11284faa8);
  return;
}



/* Entry: 1025b217c; end: 1025b2203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1025b217c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea8f48) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ea8f50);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1025b2204);
  (*pcVar2)();
}



/* Entry: 1025b2204; end: 1025b22eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1025b2204(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea8f48);
  *(undefined **)(unaff_x20 + _DAT_112ea8f48) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea8f50);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea8f50))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110524d18;
  func_0x000107c613fc(&UNK_110524d18,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1025b22f0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1025b22ec; end: 1025b22f7;  */

void FUN_1025b22ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1025b22f8; end: 1025b2357; -[_TtC35MapAddressSelectionScopeGraphBridge50SCMapAddressSelectionScopedServicesSaberEntryPoint init] */

void FUN_1025b22f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAddressSelectionScopeGraphBridge.SCMapAddressSelectionScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b2324);
  (*pcVar1)();
}



/* Entry: 1025b2358; end: 1025b238f; -[_TtC35MapAddressSelectionScopeGraphBridge50SCMapAddressSelectionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b2358(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea8f50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea8f48));
  return;
}



/* Entry: 1025b2390; end: 1025b2393;  */

void FUN_1025b2390(void)

{
  return;
}



/* Entry: 1025b2394; end: 1025b23b3;  */

void FUN_1025b2394(void)

{
  FUN_1025b2204();
  return;
}



/* Entry: 1025b23b4; end: 1025b23d3;  */

void FUN_1025b23b4(void)

{
  func_0x000107c61168(&PTR_PTR_11284fb70);
  return;
}



/* Entry: 1025b23d4; end: 1025b24a3;  */

undefined8 FUN_1025b23d4(void)

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
  
  func_0x000107c61428(0x112ea8f80,&uStack_40,0x20,0);
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
    FUN_1025b24a4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1025b24a4; end: 1025b24c3;  */

void FUN_1025b24a4(void)

{
  func_0x000107c61168(&PTR_PTR_11284fc38);
  return;
}



/* Entry: 1025b24c4; end: 1025b24df;  */

void FUN_1025b24c4(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea8f88,&UNK_10dabd878);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1025b254c,param_1);
  return;
}



/* Entry: 1025b24e0; end: 1025b254b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b24e0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1025b24a4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ea8f90) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1025b254c; end: 1025b2553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b254c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1025b24a4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ea8f90) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1025b2554; end: 1025b259f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b2554(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea8f90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025b25a0; end: 1025b25ff; -[_TtC35MapAddressSelectionScopeGraphBridge43MapAddressSelectionScopeGraphBridgeServices init] */

void FUN_1025b25a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAddressSelectionScopeGraphBridge.MapAddressSelectionScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b25cc);
  (*pcVar1)();
}



/* Entry: 1025b2600; end: 1025b260f; -[_TtC35MapAddressSelectionScopeGraphBridge43MapAddressSelectionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b2600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea8f90));
  return;
}



/* Entry: 1025b2610; end: 1025b269b;  */

void FUN_1025b2610(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1025b2650,0);
  return;
}



/* Entry: 1025b269c; end: 1025b26b7;  */

void FUN_1025b269c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1025b2708,param_1);
  return;
}



/* Entry: 1025b26b8; end: 1025b2707;  */

void FUN_1025b26b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1025b2708; end: 1025b273b;  */

void FUN_1025b2708(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1025b273c; end: 1025b2743;  */

undefined8 FUN_1025b273c(void)

{
  return 0x1b;
}



/* Entry: 1025b2744; end: 1025b28bb;  */

void FUN_1025b2744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110524d60;
  func_0x000107c613fc(&UNK_110524d60,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1025b28bc,puVar1);
  return;
}



/* Entry: 1025b28bc; end: 1025b28c3;  */

void FUN_1025b28bc(undefined8 *param_1)

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
  func_0x000107c61428(0x112ea8f80,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ea8f80,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110524e38;
  func_0x000107c613fc(&UNK_110524e38,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1025b2990;
  func_0x00010058fa64(0x1025b2990,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1025b28c4; end: 1025b291f;  */

void FUN_1025b28c4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ea8f80,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ea8f80,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1025b2920; end: 1025b2997;  */

undefined ** FUN_1025b2920(void)

{
  return &PTR_DAT_113066cd0;
}



/* Entry: 1025b2998; end: 1025b29df; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b2998(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea8fe8;
  func_0x000107c61428(param_1 + _DAT_112ea8fe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025b29e0; end: 1025b2a37; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b29e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea8fe8;
  func_0x000107c61428(param_1 + _DAT_112ea8fe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025b2a38; end: 1025b2a7f; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint sCMapFocusedDropScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b2a38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea8ff0;
  func_0x000107c61428(param_1 + _DAT_112ea8ff0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025b2a80; end: 1025b2a8b; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint setSCMapFocusedDropScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b2a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea8ff0;
  func_0x000107c61428(param_1 + _DAT_112ea8ff0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025b2a8c; end: 1025b2ad3; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint mapAddressSelectionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b2a8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea8ff8;
  func_0x000107c61428(param_1 + _DAT_112ea8ff8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025b2ad4; end: 1025b2adf; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint setMapAddressSelectionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b2ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea8ff8;
  func_0x000107c61428(param_1 + _DAT_112ea8ff8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025b2ae0; end: 1025b2b3f;  */

void FUN_1025b2ae0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1025b2b40; end: 1025b2cfb;  */

/* WARNING: Possible PIC construction at 0x0001025b2c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b2c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b2c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b2cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025b2c90) */
/* WARNING: Removing unreachable block (ram,0x0001025b2c80) */
/* WARNING: Removing unreachable block (ram,0x0001025b2c5c) */
/* WARNING: Removing unreachable block (ram,0x0001025b2cd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b2b40(void)

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
  func_0x000107c50fb8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4c294();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1025b215c();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1025b23d4();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b2cfc);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ea8f10) = lVar5;
      *(long *)(lVar3 + _DAT_112ea8f18) = unaff_x20;
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



/* Entry: 1025b2cfc; end: 1025b2d23; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1025b2cfc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025b2b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025b2d24; end: 1025b2d67; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1025b2d24(undefined8 param_1)

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



/* Entry: 1025b2d68; end: 1025b2f6b;  */

void FUN_1025b2d68(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f506c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f0af940,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0f506a0)) &&
           (func_0x000107c605b8(0xd000000000000032,0x800000010f0af960,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MapAddressSelectionScopeGraphBridge/SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5e,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b2f6c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c561e0();
        goto LAB_1025b2df4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58560();
  }
LAB_1025b2df4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1025b2f6c; end: 1025b3017; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1025b2f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1025b2d68(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025b3018; end: 1025b308f; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b3018(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ea8fe8,0);
  *(undefined8 *)(param_1 + _DAT_112ea8ff0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea8ff8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea9000) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025b3090; end: 1025b30c3;  */

void FUN_1025b3090(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025b30c4; end: 1025b311b; -[SCMapAddressSelectionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025b30f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025b30f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b30c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea8fe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea8ff0));
  return;
}



/* Entry: 1025b311c; end: 1025b313b;  */

void FUN_1025b311c(void)

{
  func_0x000107c61168(&PTR_PTR_11284fcf8);
  return;
}



/* Entry: 1025b313c; end: 1025b3183; -[SCSCMapAddressSelectionScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b313c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea9030;
  func_0x000107c61428(param_1 + _DAT_112ea9030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025b3184; end: 1025b31db; -[SCSCMapAddressSelectionScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b3184(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea9030;
  func_0x000107c61428(param_1 + _DAT_112ea9030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025b31dc; end: 1025b32b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b31dc(undefined8 param_1,long param_2)

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
    FUN_1025b23b4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ea8f48) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1025b32b4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ea8f50);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ea9038);
    *(long **)(unaff_x20 + _DAT_112ea9038) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1025b32b4; end: 1025b32db; -[SCSCMapAddressSelectionScopedServicesSaberEntryPoint begin] */

void FUN_1025b32b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025b31dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025b32dc; end: 1025b3453;  */

/* WARNING: Possible PIC construction at 0x0001025b3344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b33dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025b3348) */
/* WARNING: Removing unreachable block (ram,0x0001025b33e0) */
/* WARNING: Removing unreachable block (ram,0x0001025b33f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b32dc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea9038);
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



/* Entry: 1025b3454; end: 1025b345b;  */

void FUN_1025b3454(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1025b345c; end: 1025b348f; -[SCSCMapAddressSelectionScopedServicesSaberEntryPoint end] */

void FUN_1025b345c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1025b32dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1025b3490; end: 1025b35af;  */

void FUN_1025b3490(long param_1,long param_2,long param_3)

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
                        "MapAddressSelectionScopeGraphBridge/SCSCMapAddressSelectionScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b35b0);
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



/* Entry: 1025b35b0; end: 1025b365b; -[SCSCMapAddressSelectionScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1025b35b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1025b3490(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025b365c; end: 1025b36bb; -[SCSCMapAddressSelectionScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b365c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ea9030,0);
  *(undefined8 *)(param_1 + _DAT_112ea9038) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025b36bc; end: 1025b36ef;  */

void FUN_1025b36bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025b36f0; end: 1025b3727; -[SCSCMapAddressSelectionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b36f0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea9030);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea9038));
  return;
}



/* Entry: 1025b3728; end: 1025b3747;  */

void FUN_1025b3728(void)

{
  func_0x000107c61168(&PTR_PTR_11284fdc8);
  return;
}



/* Entry: 1025b3748; end: 1025b37b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b3748(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1025b3b3c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea9070) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1025b37b4; end: 1025b381f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b37b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea9070) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025b3820; end: 1025b387f; -[_TtC42MapBitmojiTrayScopedFactoryServiceProvider30SCMapBitmojiTrayScopedServices init] */

void FUN_1025b3820(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapBitmojiTrayScopedFactoryServiceProvider.SCMapBitmojiTrayScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b384c);
  (*pcVar1)();
}



/* Entry: 1025b3880; end: 1025b388f; -[_TtC42MapBitmojiTrayScopedFactoryServiceProvider30SCMapBitmojiTrayScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b3880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea9070));
  return;
}



/* Entry: 1025b3890; end: 1025b38fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b3890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110525050;
  func_0x000107c613fc(&UNK_110525050,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1025b3bd4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1025b38fc; end: 1025b3997;  */

void FUN_1025b38fc(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110524f60;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110524f60;
  return;
}



/* Entry: 1025b3998; end: 1025b39cf;  */

void FUN_1025b3998(long *param_1)

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



/* Entry: 1025b39d0; end: 1025b39d7;  */

undefined8 FUN_1025b39d0(void)

{
  return 0x1b;
}



/* Entry: 1025b39d8; end: 1025b3b0b;  */

void FUN_1025b39d8(undefined8 *param_1)

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
  puVar1 = &UNK_110525078;
  func_0x000107c613fc(&UNK_110525078,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1025b3bac;
  func_0x00010058fa64(FUN_1025b3bac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1025b3b0c; end: 1025b3b3b;  */

undefined ** FUN_1025b3b0c(void)

{
  return &PTR_DAT_113066ce8;
}



/* Entry: 1025b3b3c; end: 1025b3b5b;  */

void FUN_1025b3b3c(void)

{
  func_0x000107c61168(&PTR_PTR_11284fe88);
  return;
}



/* Entry: 1025b3b5c; end: 1025b3bab;  */

undefined1  [16] FUN_1025b3b5c(void)

{
  return ZEXT816(0x110524fb0);
}



/* Entry: 1025b3bac; end: 1025b3bd3;  */

void FUN_1025b3bac(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1025b3bd4; end: 1025b3bd7;  */

void FUN_1025b3bd4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1025b3bd8; end: 1025b404b;  */

void FUN_1025b3bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea90d8,&UNK_10dabdcb0);
  puVar1 = &UNK_1105250b8;
  func_0x000107c613fc(&UNK_1105250b8,0xd8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_9;
  *(undefined8 *)(puVar1 + 0x20) = param_17;
  *(undefined8 *)(puVar1 + 0x28) = param_16;
  *(undefined8 *)(puVar1 + 0x30) = param_12;
  *(undefined8 *)(puVar1 + 0x38) = param_19;
  *(undefined8 *)(puVar1 + 0x40) = param_14;
  *(undefined8 *)(puVar1 + 0x48) = param_23;
  *(undefined8 *)(puVar1 + 0x50) = param_20;
  *(undefined8 *)(puVar1 + 0x58) = param_21;
  *(undefined8 *)(puVar1 + 0x60) = param_24;
  *(undefined8 *)(puVar1 + 0x68) = param_15;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_4;
  *(undefined8 *)(puVar1 + 0x80) = param_22;
  *(undefined8 *)(puVar1 + 0x88) = param_11;
  *(undefined8 *)(puVar1 + 0x90) = param_10;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_5;
  *(undefined8 *)(puVar1 + 0xa8) = param_6;
  *(undefined8 *)(puVar1 + 0xb0) = param_3;
  *(undefined8 *)(puVar1 + 0xb8) = param_1;
  *(undefined8 *)(puVar1 + 0xc0) = param_2;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_7;
  func_0x000107c6157c();
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_1025b404c,puVar1);
  return;
}



/* Entry: 1025b404c; end: 1025b409f;  */

void FUN_1025b404c(void)

{
  long unaff_x20;
  
  func_0x0001025b3df4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Entry: 1025b40a0; end: 1025b40af;  */

undefined1  [16] FUN_1025b40a0(void)

{
  return ZEXT816(0x1105250e0);
}



/* Entry: 1025b40b0; end: 1025b476b;  */

void FUN_1025b40b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 auStack_70 [2];
  
  uVar18 = *param_2;
  func_0x0001000285a8(0x112ea90e8,&UNK_10dabdcf8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar18;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001025b7d0c();
  pcVar3 = "PlusMapCarsAndPetsScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusMapCarsAndPetsScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1025b7d58();
  pcVar4 = "PlusSubscribeScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusSubscribeScopeExposerSubjectServiceProvider",0x2f,2);
  func_0x0001025b7dd8();
  pcVar5 = "SCBitmojiCreateFlowScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBitmojiCreateFlowScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1025b7e24();
  pcVar6 = "SCBitmojiEditAvatarBuilderScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopeExposerSubjectServiceProvider",0x3c,2);
  FUN_1025b7e70();
  func_0x000100082720("SCMapHomeWorkSettingsScopeExposerSubjectServiceProvider",0x37,2);
  puVar7 = puVar2;
  FUN_1025b7d4c();
  func_0x000100082720("PlusMapCarsAndPetsScopeExposerObservableServiceProvider",0x37,2);
  pcVar8 = pcVar3;
  FUN_1025b7d98();
  func_0x000100082720("PlusSubscribeScopeExposerObservableServiceProvider",0x32,2);
  pcVar9 = pcVar4;
  FUN_1025b7e18();
  func_0x000100082720("SCBitmojiCreateFlowScopeExposerObservableServiceProvider",0x38,2);
  pcVar10 = pcVar5;
  FUN_1025b7e64();
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopeExposerObservableServiceProvider",0x3f,2);
  pcVar11 = pcVar6;
  FUN_1025b7efc();
  func_0x000100082720("SCMapHomeWorkSettingsScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar12 = FUN_1025b3998;
  func_0x0001000823a8(FUN_1025b3998,0);
  func_0x000100082720("SCMapBitmojiTrayScopedServicesCleanupRelayServiceProvider",0x39,2);
  puVar13 = puVar2;
  FUN_1025b7a00(puVar2,pcVar3,pcVar4,pcVar5,pcVar6);
  func_0x000100082720("MapBitmojiTrayScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112ea90f0,&UNK_10dabdd10);
  puVar14 = &UNK_110525128;
  func_0x000107c613fc(&UNK_110525128,0x108,7);
  *(undefined8 **)(puVar14 + 0x10) = puVar1;
  *(undefined8 *)(puVar14 + 0x18) = param_3;
  *(undefined8 *)(puVar14 + 0x20) = param_4;
  *(undefined8 *)(puVar14 + 0x28) = param_5;
  *(undefined8 *)(puVar14 + 0x30) = param_6;
  *(undefined8 *)(puVar14 + 0x38) = param_7;
  *(undefined8 *)(puVar14 + 0x40) = param_8;
  *(undefined8 *)(puVar14 + 0x48) = param_9;
  *(undefined8 *)(puVar14 + 0x50) = param_10;
  *(undefined8 *)(puVar14 + 0x58) = param_11;
  *(undefined8 *)(puVar14 + 0x60) = param_12;
  *(undefined8 *)(puVar14 + 0x68) = param_13;
  *(undefined8 *)(puVar14 + 0x70) = param_14;
  *(undefined8 *)(puVar14 + 0x78) = param_15;
  *(undefined8 *)(puVar14 + 0x80) = param_16;
  *(undefined8 *)(puVar14 + 0x88) = param_17;
  *(undefined8 *)(puVar14 + 0x90) = param_18;
  *(undefined8 *)(puVar14 + 0x98) = param_19;
  *(undefined8 *)(puVar14 + 0xa0) = param_20;
  *(undefined8 *)(puVar14 + 0xa8) = param_21;
  *(undefined8 *)(puVar14 + 0xb0) = param_22;
  *(undefined8 *)(puVar14 + 0xb8) = param_23;
  *(undefined8 *)(puVar14 + 0xc0) = param_24;
  *(undefined8 *)(puVar14 + 200) = param_25;
  *(undefined8 *)(puVar14 + 0xd0) = param_26;
  *(undefined8 *)(puVar14 + 0xd8) = param_27;
  *(char **)(puVar14 + 0xe0) = pcVar10;
  *(char **)(puVar14 + 0xe8) = pcVar8;
  *(char **)(puVar14 + 0xf0) = pcVar11;
  *(char **)(puVar14 + 0xf8) = pcVar9;
  *(undefined8 **)(puVar14 + 0x100) = puVar7;
  func_0x000107c6157c();
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
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(puVar7);
  uVar18 = 0x1025b48b4;
  func_0x0001000823a8(0x1025b48b4,puVar14);
  func_0x000100082720("SCMapBitmojiTrayEntryPointWrapperServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ea90f8,&UNK_10dabdd00);
  puVar14 = &UNK_110525150;
  func_0x000107c613fc(&UNK_110525150,0x30,7);
  *(undefined8 **)(puVar14 + 0x10) = puVar1;
  *(undefined8 **)(puVar14 + 0x18) = puVar13;
  *(undefined8 *)(puVar14 + 0x20) = uVar18;
  *(code **)(puVar14 + 0x28) = pcVar12;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(pcVar12);
  pcVar15 = FUN_1025b4918;
  func_0x0001000823a8(FUN_1025b4918,puVar14);
  func_0x000100082720("SCMapBitmojiTrayScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ea9078,&UNK_10dabdac0);
  func_0x000107c6157c(pcVar15);
  uVar16 = 0x1025b4924;
  func_0x0001000823a8(0x1025b4924,pcVar15);
  func_0x000100082720("SCMapBitmojiTrayScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112ea9068,&UNK_10dabdab0);
  func_0x000107c6157c(uVar16);
  uVar17 = 0x1025b492c;
  func_0x0001000823a8(0x1025b492c,uVar16);
  func_0x000100082720("SCMapBitmojiTrayScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar14 = &UNK_110525178;
  func_0x000107c613fc(&UNK_110525178,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = uVar17;
  *(code **)(puVar14 + 0x18) = pcVar12;
  func_0x000107c6157c(pcVar12);
  uVar17 = 0x1025b4934;
  func_0x0001000823a8(0x1025b4934,puVar14);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(uVar16);
  func_0x000100082720("SCMapBitmojiTrayScopeEntryPointProvider",0x27,2);
  *param_1 = uVar17;
  return;
}



/* Entry: 1025b476c; end: 1025b4917;  */

void FUN_1025b476c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025b4918; end: 1025b493b;  */

void FUN_1025b4918(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1025b706c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCMapBitmojiTrayScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1025b493c; end: 1025b6d83;  */

void FUN_1025b493c(long *param_1,long param_2)

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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  FUN_1025b6fbc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x40) = uStack_78;
  *(undefined8 *)(param_2 + 0x48) = uStack_80;
  *(undefined8 *)(param_2 + 0x50) = uStack_88;
  *(undefined8 *)(param_2 + 0x58) = uStack_90;
  *(undefined8 *)(param_2 + 0x60) = uStack_98;
  *(undefined8 *)(param_2 + 0x68) = uStack_a0;
  *(undefined8 *)(param_2 + 0x70) = uStack_a8;
  *(undefined8 *)(param_2 + 0x78) = uStack_b0;
  *(undefined8 *)(param_2 + 0x80) = uStack_b8;
  *(undefined8 *)(param_2 + 0x88) = uStack_c0;
  *(undefined8 *)(param_2 + 0x90) = uStack_c8;
  *(undefined8 *)(param_2 + 0x98) = uStack_d0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_d8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_e0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xc0) = uStack_f8;
  *(undefined8 *)(param_2 + 200) = uStack_100;
  *(undefined8 *)(param_2 + 0xd0) = uStack_108;
  *(undefined8 *)(param_2 + 0xd8) = uStack_110;
  *(undefined8 *)(param_2 + 0xe0) = uStack_118;
  *(undefined8 *)(param_2 + 0xe8) = uStack_120;
  *(undefined8 *)(param_2 + 0xf0) = uStack_128;
  *(undefined8 *)(param_2 + 0xf8) = uStack_130;
  *(undefined8 *)(param_2 + 0x100) = uStack_138;
  func_0x0001000285a8(0x112e028b0,&UNK_10d9ecc00);
  func_0x000107c610f8();
  uVar14 = uStack_78;
  func_0x000107c61174();
  uVar15 = uStack_80;
  func_0x000107c61174();
  uVar1 = uStack_88;
  func_0x000107c61174();
  uVar2 = uStack_90;
  func_0x000107c61174();
  uVar3 = uStack_98;
  func_0x000107c61174();
  uVar4 = uStack_a0;
  func_0x000107c61174();
  uVar5 = uStack_a8;
  func_0x000107c61174();
  uVar6 = uStack_b0;
  func_0x000107c61174();
  uVar7 = uStack_b8;
  func_0x000107c61174();
  uVar8 = uStack_c0;
  func_0x000107c61174();
  uVar9 = uStack_c8;
  func_0x000107c61174();
  uVar10 = uStack_d0;
  func_0x000107c61174();
  uVar11 = uStack_d8;
  func_0x000107c61174();
  uVar17 = uStack_e0;
  func_0x000107c61174();
  uVar18 = uStack_e8;
  func_0x000107c61174();
  uVar19 = uStack_f0;
  func_0x000107c61174();
  uVar20 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar16 = uStack_140;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x18) = puVar12;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar16 = uStack_148;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x20) = puVar12;
  func_0x0001000285a8(0x112ea9100,&UNK_10dabdd18);
  func_0x000107c610f8();
  uVar16 = uStack_150;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x28) = puVar12;
  func_0x0001000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  uVar16 = uStack_158;
  func_0x000107c6157c(uStack_158);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x30) = puVar12;
  func_0x0001000285a8(0x112ea9108,&UNK_10dabdd28);
  func_0x000107c610f8();
  uVar16 = uStack_160;
  func_0x000107c6157c(uStack_160);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x38) = puVar12;
  puVar12 = PTR_PTR_1126aab80;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar30 = 0xd000000000000010;
  uVar16 = uVar30;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0afc60);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = uVar30;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e20);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00c430);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x536e496b63656863;
  func_0x000107c5fadc(0x536e496b63656863,0xef73656369767265);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef28040);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f00c470);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar16 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef27ea0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef27da0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  uVar30 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef1b9a0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0afc80);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef27dc0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010effe330);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0afca0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef27fc0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0afcc0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef280a0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef28080);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar16);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar26);
  func_0x000107c61174();
  uVar16 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0ad630);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar27);
  func_0x000107c61174(uVar29);
  uVar16 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0ad660);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef20360);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar16);
  uVar30 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010effe380);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar30 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef20410);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar30);
  uVar16 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar30 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0afce0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar30);
  uVar30 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef2ada0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar16);
  uVar30 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0afd00);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar16);
  func_0x000107c3e740(uVar29);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
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
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61574(uStack_140);
  func_0x000107c61574(uStack_148);
  func_0x000107c61574(uStack_150);
  func_0x000107c61574(uStack_158);
  func_0x000107c61574(uStack_160);
  *param_1 = param_2;
  return;
}



/* Entry: 1025b6d84; end: 1025b6eaf;  */

void FUN_1025b6d84(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  return;
}



/* Entry: 1025b6eb0; end: 1025b6eb7;  */

undefined8 FUN_1025b6eb0(void)

{
  return 0x1b;
}



/* Entry: 1025b6eb8; end: 1025b6f3b;  */

void FUN_1025b6eb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1025b6ffc,param_2,FUN_1025b7000,param_2,FUN_1025b7028,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1025b6f3c; end: 1025b6f8b;  */

undefined8 FUN_1025b6f3c(void)

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



/* Entry: 1025b6f8c; end: 1025b6fbb;  */

undefined ** FUN_1025b6f8c(void)

{
  return &PTR_DAT_113066ce8;
}



/* Entry: 1025b6fbc; end: 1025b6fdb;  */

void FUN_1025b6fbc(void)

{
  func_0x000107c61168(&PTR_PTR_112ea9178);
  return;
}



/* Entry: 1025b6fdc; end: 1025b6fff;  */

undefined1  [16] FUN_1025b6fdc(void)

{
  return ZEXT816(0x1105251d0);
}



/* Entry: 1025b7000; end: 1025b7027;  */

void FUN_1025b7000(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1025b7028; end: 1025b702f;  */

undefined8 FUN_1025b7028(void)

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



/* Entry: 1025b7030; end: 1025b706b;  */

void FUN_1025b7030(undefined8 *param_1,undefined8 param_2)

{
  FUN_1025b706c();
  func_0x0001000a7f38("SCMapBitmojiTrayScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1025b706c; end: 1025b7257;  */

void FUN_1025b706c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d7f8;
  ppuVar4 = &PTR_DAT_113066ce8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110525220;
  func_0x000107c613fc(&UNK_110525220,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ea92c8;
  func_0x0001000285a8(0x112ea92c8,&UNK_10dabdf48);
  func_0x0001000a6ee8(&UNK_110525598,"MapBitmojiTrayScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_1025b7258,puVar2,uVar3,&UNK_110525598,&PTR_DAT_112ea9380);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105251d0,"SCMapBitmojiTrayEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1025b730c,param_3,uVar3,&UNK_1105251d0,&PTR_DAT_112ea9110);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110525248;
  func_0x000107c613fc(&UNK_110525248,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110524ff0,"SCMapBitmojiTrayScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_1025b73bc,puVar2,uVar3,&UNK_110524ff0,&PTR_DAT_112ea9080);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ea92d0;
  func_0x0001000285a8(0x112ea92d0,&UNK_10dabdf50);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}


