/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021ecaa4; end: 1021ecadf;  */

void FUN_1021ecaa4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1021ecae0();
  func_0x0001000a7f38("SCDefaultAppsSettingsScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 1021ecae0; end: 1021ecccb;  */

void FUN_1021ecae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104e1168;
  ppuVar4 = &PTR_DAT_112e63a08;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e63750;
  func_0x0001000285a8(0x112e63750,&UNK_10da6cee8);
  func_0x0001000a6ee8(&UNK_1104e0d28,
                      "DefaultAppsSettingsEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_1021ecd40,param_1,uVar2,&UNK_1104e0d28,&PTR_DAT_112e63680);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104e0d78;
  func_0x000107c613fc(&UNK_1104e0d78,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104e0f30,
                      "DefaultAppsSettingsScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_1021ecd48,puVar3,uVar2,&UNK_1104e0f30,&PTR_DAT_112e637e0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104e0da0;
  func_0x000107c613fc(&UNK_1104e0da0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104e0b98,
                      "SCDefaultAppsSettingsScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_1021ece30,puVar3,uVar2,&UNK_1104e0b98,&PTR_DAT_112e63600);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e63758;
  func_0x0001000285a8(0x112e63758,&UNK_10da6cef0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1021ecccc; end: 1021ecd3f;  */

void FUN_1021ecccc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1021ece6c;
  func_0x0001000823a8(0x1021ece6c,param_3);
  func_0x000100082720("DefaultAppsSettingsEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1021ecd40; end: 1021ecd47;  */

void FUN_1021ecd40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1021ece6c;
  func_0x0001000823a8();
  func_0x000100082720("DefaultAppsSettingsEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1021ecd48; end: 1021ecd87;  */

void FUN_1021ecd48(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1021ed408(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DefaultAppsSettingsScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 1021ecd88; end: 1021ece2f;  */

void FUN_1021ecd88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104e0dc8;
  func_0x000107c613fc(&UNK_1104e0dc8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1021ece64;
  func_0x0001000823a8(FUN_1021ece64,puVar1);
  func_0x000100082720("SCDefaultAppsSettingsScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 1021ece30; end: 1021ece37;  */

void FUN_1021ece30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104e0dc8;
  func_0x000107c613fc(&UNK_1104e0dc8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1021ece64;
  func_0x0001000823a8(FUN_1021ece64,puVar3);
  func_0x000100082720("SCDefaultAppsSettingsScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 1021ece38; end: 1021ece63;  */

void FUN_1021ece38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021ece64; end: 1021ece73;  */

void FUN_1021ece64(undefined8 *param_1)

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
  puVar1 = &UNK_1104e0c20;
  func_0x000107c613fc(&UNK_1104e0c20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1021ec308;
  func_0x00010058fa64(FUN_1021ec308,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021ece74; end: 1021ecefb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021ece74(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1021ed234();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e63760) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e63768) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ecefc);
  (*pcVar1)();
}



/* Entry: 1021ecefc; end: 1021ecf5b; -[_TtC35DefaultAppsSettingsScopeGraphBridge50DefaultAppsSettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1021ecefc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DefaultAppsSettingsScopeGraphBridge.DefaultAppsSettingsScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ecf28);
  (*pcVar1)();
}



/* Entry: 1021ecf5c; end: 1021ecf93; -[_TtC35DefaultAppsSettingsScopeGraphBridge50DefaultAppsSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021ecf78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021ecf7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ecf5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e63760));
  return;
}



/* Entry: 1021ecf94; end: 1021ecfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ecf94(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e63768),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e63760));
  return;
}



/* Entry: 1021ecfbc; end: 1021ecfdb;  */

void FUN_1021ecfbc(void)

{
  func_0x000107c61168(&PTR_PTR_112828d28);
  return;
}



/* Entry: 1021ecfdc; end: 1021ed063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021ecfdc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e63798) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e637a0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021ed064);
  (*pcVar2)();
}



/* Entry: 1021ed064; end: 1021ed14b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021ed064(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e63798);
  *(undefined **)(unaff_x20 + _DAT_112e63798) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e637a0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e637a0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104e0e90;
  func_0x000107c613fc(&UNK_1104e0e90,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1021ed150,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021ed14c; end: 1021ed157;  */

void FUN_1021ed14c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021ed158; end: 1021ed1b7; -[_TtC35DefaultAppsSettingsScopeGraphBridge50SCDefaultAppsSettingsScopedServicesSaberEntryPoint init] */

void FUN_1021ed158(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DefaultAppsSettingsScopeGraphBridge.SCDefaultAppsSettingsScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ed184);
  (*pcVar1)();
}



/* Entry: 1021ed1b8; end: 1021ed1ef; -[_TtC35DefaultAppsSettingsScopeGraphBridge50SCDefaultAppsSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ed1b8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e637a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e63798));
  return;
}



/* Entry: 1021ed1f0; end: 1021ed1f3;  */

void FUN_1021ed1f0(void)

{
  return;
}



/* Entry: 1021ed1f4; end: 1021ed213;  */

void FUN_1021ed1f4(void)

{
  FUN_1021ed064();
  return;
}



/* Entry: 1021ed214; end: 1021ed233;  */

void FUN_1021ed214(void)

{
  func_0x000107c61168(&PTR_PTR_112828df0);
  return;
}



/* Entry: 1021ed234; end: 1021ed303;  */

undefined8 FUN_1021ed234(void)

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
  
  func_0x000107c61428(0x112e637d0,&uStack_40,0x20,0);
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
    FUN_1021ed304();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1021ed304; end: 1021ed323;  */

void FUN_1021ed304(void)

{
  func_0x000107c61168(&PTR_PTR_112828eb8);
  return;
}



/* Entry: 1021ed324; end: 1021ed38f;  */

void FUN_1021ed324(void)

{
  func_0x0001000285a8(0x112e637d8,&UNK_10da6cfc8);
  func_0x0001000823a8(0x1021ed364,0);
  return;
}



/* Entry: 1021ed390; end: 1021ed3cb; -[_TtC35DefaultAppsSettingsScopeGraphBridge43DefaultAppsSettingsScopeGraphBridgeServices init] */

void FUN_1021ed390(undefined8 param_1)

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



/* Entry: 1021ed3cc; end: 1021ed3ff;  */

void FUN_1021ed3cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021ed400; end: 1021ed407;  */

undefined8 FUN_1021ed400(void)

{
  return 0x1b;
}



/* Entry: 1021ed408; end: 1021ed57f;  */

void FUN_1021ed408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104e0ed8;
  func_0x000107c613fc(&UNK_1104e0ed8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021ed580,puVar1);
  return;
}



/* Entry: 1021ed580; end: 1021ed587;  */

void FUN_1021ed580(undefined8 *param_1)

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
  func_0x000107c61428(0x112e637d0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e637d0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104e0f70;
  func_0x000107c613fc(&UNK_1104e0f70,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1021ed634;
  func_0x00010058fa64(0x1021ed634,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021ed588; end: 1021ed5e3;  */

void FUN_1021ed588(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e637d0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e637d0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1021ed5e4; end: 1021ed63b;  */

undefined ** FUN_1021ed5e4(void)

{
  return &PTR_DAT_112e63a08;
}



/* Entry: 1021ed63c; end: 1021ed683; -[SCDefaultAppsSettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ed63c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e63830;
  func_0x000107c61428(param_1 + _DAT_112e63830,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021ed684; end: 1021ed6db; -[SCDefaultAppsSettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ed684(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e63830;
  func_0x000107c61428(param_1 + _DAT_112e63830,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021ed6dc; end: 1021ed723; -[SCDefaultAppsSettingsScopeGraphBridgeSaberEntryPoint defaultAppsSettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ed6dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e63838;
  func_0x000107c61428(param_1 + _DAT_112e63838,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1021ed724; end: 1021ed787; -[SCDefaultAppsSettingsScopeGraphBridgeSaberEntryPoint setDefaultAppsSettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ed724(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e63838;
  func_0x000107c61428(param_1 + _DAT_112e63838,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1021ed788; end: 1021ed8bb;  */

/* WARNING: Possible PIC construction at 0x0001021ed840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ed85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021ed878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021ed844) */
/* WARNING: Removing unreachable block (ram,0x0001021ed860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ed788(void)

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
  func_0x000107c41554();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1021ecfbc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1021ed234();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ed8bc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e63760) = lVar5;
    *(long *)(lVar4 + _DAT_112e63768) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1021ed8bc; end: 1021ed8e3; -[SCDefaultAppsSettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1021ed8bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021ed788();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021ed8e4; end: 1021ed927; -[SCDefaultAppsSettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1021ed8e4(undefined8 param_1)

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



/* Entry: 1021ed928; end: 1021edabf;  */

void FUN_1021ed928(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0f901e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010f06fe20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "DefaultAppsSettingsScopeGraphBridge/SCDefaultAppsSettingsScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5e,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021edac0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53f6c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1021edac0; end: 1021edb6b; -[SCDefaultAppsSettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1021edac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021ed928(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021edb6c; end: 1021edbd7; -[SCDefaultAppsSettingsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021edb6c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e63830,0);
  *(undefined8 *)(param_1 + _DAT_112e63838) = 0;
  *(undefined8 *)(param_1 + _DAT_112e63840) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021edbd8; end: 1021edc0b;  */

void FUN_1021edbd8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021edc0c; end: 1021edc53; -[SCDefaultAppsSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021edc38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021edc3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021edc0c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e63830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e63838));
  return;
}



/* Entry: 1021edc54; end: 1021edc73;  */

void FUN_1021edc54(void)

{
  func_0x000107c61168(&PTR_PTR_112828f68);
  return;
}



/* Entry: 1021edc74; end: 1021edcbb; -[SCSCDefaultAppsSettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021edc74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e63870;
  func_0x000107c61428(param_1 + _DAT_112e63870,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021edcbc; end: 1021edd13; -[SCSCDefaultAppsSettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021edcbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e63870;
  func_0x000107c61428(param_1 + _DAT_112e63870,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021edd14; end: 1021eddeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021edd14(undefined8 param_1,long param_2)

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
    FUN_1021ed214();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e63798) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021eddec);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e637a0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e63878);
    *(long **)(unaff_x20 + _DAT_112e63878) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1021eddec; end: 1021ede13; -[SCSCDefaultAppsSettingsScopedServicesSaberEntryPoint begin] */

void FUN_1021eddec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021edd14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021ede14; end: 1021edf8b;  */

/* WARNING: Possible PIC construction at 0x0001021ede7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021edf14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021ede80) */
/* WARNING: Removing unreachable block (ram,0x0001021edf18) */
/* WARNING: Removing unreachable block (ram,0x0001021edf30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ede14(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e63878);
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



/* Entry: 1021edf8c; end: 1021edf93;  */

void FUN_1021edf8c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021edf94; end: 1021edfc7; -[SCSCDefaultAppsSettingsScopedServicesSaberEntryPoint end] */

void FUN_1021edf94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021ede14();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021edfc8; end: 1021ee0e7;  */

void FUN_1021edfc8(long param_1,long param_2,long param_3)

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
                        "DefaultAppsSettingsScopeGraphBridge/SCSCDefaultAppsSettingsScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ee0e8);
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



/* Entry: 1021ee0e8; end: 1021ee193; -[SCSCDefaultAppsSettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1021ee0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021edfc8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021ee194; end: 1021ee1f3; -[SCSCDefaultAppsSettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ee194(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e63870,0);
  *(undefined8 *)(param_1 + _DAT_112e63878) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021ee1f4; end: 1021ee227;  */

void FUN_1021ee1f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021ee228; end: 1021ee25f; -[SCSCDefaultAppsSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ee228(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e63870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e63878));
  return;
}



/* Entry: 1021ee260; end: 1021ee27f;  */

void FUN_1021ee260(void)

{
  func_0x000107c61168(&PTR_PTR_112829030);
  return;
}



/* Entry: 1021ee280; end: 1021ee3d7;  */

undefined * FUN_1021ee280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1,param_2,0x14);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2,param_2,0xc6);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c56ba8(puVar1,param_2,0);
  func_0x000107c55f80(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1021ee3d8; end: 1021eeb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021ee3d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar8 = _DAT_112e638a8;
  FUN_1021ee280();
  *(long *)(unaff_x20 + lVar8) = lVar2;
  lVar8 = _DAT_112e638b0;
  func_0x0001021ee32c();
  *(long *)(unaff_x20 + lVar8) = lVar2;
  lVar8 = _DAT_112e638b8;
  puVar3 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c59a2c(puVar3);
  func_0x000107c544f8(puVar3);
  func_0x000107c52dfc(puVar3);
  func_0x000107c537fc(0x447a0000,puVar3);
  func_0x000107c5381c(0x447a0000,puVar3);
  *(undefined **)(unaff_x20 + lVar8) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e638c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c(param_3);
  }
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar4,PTR_s_initWithStyle_reuseIdentifier__1125f1528,param_1,param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c58e44();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar5 = puVar3;
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61174();
  puVar6 = puVar4;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c3fa94(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  lVar2 = _DAT_112e638b8;
  uVar7 = *(undefined8 *)(puVar4 + _DAT_112e638b8);
  func_0x000107c61174(uVar7);
  func_0x000107c3d8b8();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar4);
  lVar8 = 0x112d360b0;
  FUN_1021eecbc(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  lVar9 = lVar8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 5;
  *(undefined8 *)(lVar9 + 0x10) = 2;
  uVar16 = *(undefined8 *)(puVar4 + _DAT_112e638a8);
  *(undefined8 *)(lVar9 + 0x20) = uVar16;
  uVar17 = *(undefined8 *)(puVar4 + _DAT_112e638b0);
  *(undefined8 *)(lVar9 + 0x28) = uVar17;
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  uVar7 = 0;
  FUN_1021eee4c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  lVar10 = lVar9;
  func_0x000107c5fc48(lVar9,uVar7);
  func_0x000107c61574(lVar9);
  func_0x000107c45784();
  func_0x000107c61170(lVar10);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c52b2c(puVar5);
  func_0x000107c52610(puVar5);
  func_0x000107c59594(0x4000000000000000,puVar5);
  func_0x000107c5381c(0x437a0000,puVar5);
  func_0x000107c613fc(lVar8,((ulong)*(uint *)(lVar8 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                      *(ushort *)(lVar8 + 0x34) | 7);
  *(undefined8 *)(lVar8 + 0x18) = 5;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  *(undefined **)(lVar8 + 0x20) = puVar5;
  uVar16 = *(undefined8 *)(puVar4 + lVar2);
  *(undefined8 *)(lVar8 + 0x28) = uVar16;
  puVar11 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x000107c61174(uVar16);
  lVar2 = lVar8;
  func_0x000107c5fc48(lVar8,uVar7);
  func_0x000107c61574(lVar8);
  func_0x000107c45784(puVar11);
  func_0x000107c61170(lVar2);
  func_0x000107c61174(puVar11);
  func_0x000107c5a050();
  func_0x000107c52b2c(puVar11);
  func_0x000107c52610(puVar11);
  func_0x000107c59594(0x4024000000000000,puVar11);
  puVar12 = PTR_PTR_1126d5f68;
  func_0x000107c610f8();
  func_0x000107c4610c();
  func_0x000107c61170(puVar11);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c59a2c(puVar12);
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(puVar12);
  func_0x000107c61170(puVar3);
  func_0x000107c538ac(0x4028000000000000,0x4030000000000000,0x4028000000000000,0x4030000000000000,
                      puVar12);
  puVar6 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar8 = 0x112d360b8;
  FUN_1021eecbc(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 9;
  *(undefined8 *)(lVar8 + 0x10) = 4;
  puVar13 = puVar12;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar14 = puVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar15 = puVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  *(undefined **)(lVar8 + 0x20) = puVar15;
  puVar15 = puVar12;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar6;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar13 = puVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  *(undefined **)(lVar8 + 0x28) = puVar13;
  puVar13 = puVar12;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar15 = puVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  *(undefined **)(lVar8 + 0x30) = puVar15;
  puVar6 = puVar4;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar14 = puVar6;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar13 = puVar12;
  func_0x000107c3ec1c(puVar12);
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  puVar6 = puVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
  *(undefined1 **)(lVar8 + 0x38) = puVar6;
  uVar7 = 0;
  FUN_1021eee4c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar2 = lVar8;
  func_0x000107c5fc48(lVar8,uVar7);
  func_0x000107c61574(lVar8);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar2);
  return puVar4;
}



/* Entry: 1021eeb2c; end: 1021eeb73; -[_TtC19DefaultAppsSettings21DefaultAppSettingCell initWithStyle:reuseIdentifier:] */

void FUN_1021eeb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  FUN_1021ee3d8(param_3,param_4,param_2);
  return;
}



/* Entry: 1021eeb74; end: 1021eeb9b; -[_TtC19DefaultAppsSettings21DefaultAppSettingCell initWithCoder:] */

void FUN_1021eeb74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1021eed34();
  return;
}



/* Entry: 1021eeb9c; end: 1021eec0b; -[_TtC19DefaultAppsSettings21DefaultAppSettingCell buttonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021eeb9c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112e638c0);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112e638c0))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1021eec0c; end: 1021eec3f;  */

void FUN_1021eec0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021eec40; end: 1021eec9b; -[_TtC19DefaultAppsSettings21DefaultAppSettingCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021eec40(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e638a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e638b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e638b8));
  if (*(long *)(param_1 + _DAT_112e638c0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112e638c0))[1]);
    return;
  }
  return;
}



/* Entry: 1021eec9c; end: 1021eecbb;  */

void FUN_1021eec9c(void)

{
  func_0x000107c61168(&PTR_PTR_1128290f0);
  return;
}



/* Entry: 1021eecbc; end: 1021eed33;  */

void FUN_1021eecbc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1021eee4c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1021eed34; end: 1021eee4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021eed34(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar2 = _DAT_112e638a8;
  FUN_1021ee280();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112e638b0;
  func_0x0001021ee32c();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112e638b8;
  puVar4 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c59a2c(puVar4);
  func_0x000107c544f8(puVar4);
  func_0x000107c52dfc(puVar4);
  func_0x000107c537fc(0x447a0000,puVar4);
  func_0x000107c5381c(0x447a0000,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e638c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "DefaultAppsSettings/DefaultAppSettingCell.swift",0x2f,2,0x5c,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1021eee4c);
  (*pcVar3)();
}



/* Entry: 1021eee4c; end: 1021eee8b;  */

void FUN_1021eee4c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1021eee8c; end: 1021eeec7;  */

void FUN_1021eee8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1021eeec8; end: 1021eeed3;  */

void FUN_1021eeec8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1021eeed4; end: 1021eefdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021eeed4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112ff8ac8);
  lVar3 = lVar6;
  func_0x000107c615f0();
  func_0x000107c49c38();
  lVar7 = lVar6;
  func_0x000107c49c2c(lVar6);
  uVar4 = 0;
  FUN_1021ef884(0);
  func_0x000107c610f8();
  FUN_1021ef2f0(lVar3,lVar7,uVar4);
  puVar5 = &UNK_1104e1050;
  func_0x000107c613fc(&UNK_1104e1050,0x18,7);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61614(puVar5 + 0x10,lVar7);
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e63998);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_1021ef11c;
  puVar1[1] = puVar5;
  func_0x000107c6157c(puVar5);
  func_0x00010058d43c(uVar4,uVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c3e2c0(*(undefined8 *)(lVar7 + _DAT_112e639e8));
  func_0x000107c615e8(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1021eefdc; end: 1021ef06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021eefdc(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e639f0;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112e639f0,auStack_50,0,0);
    lVar1 = param_1 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c41550(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1021ef06c; end: 1021ef0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1021ef06c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e639e8),param_2,0);
  return 0;
}



/* Entry: 1021ef0c8; end: 1021ef0e7;  */

void FUN_1021ef0c8(void)

{
  FUN_1021eeed4();
  return;
}



/* Entry: 1021ef0e8; end: 1021ef11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1021ef0e8(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112e639e8),param_2,0);
  return 0;
}



/* Entry: 1021ef11c; end: 1021ef123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ef11c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112e639f0;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112e639f0,auStack_50,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c41550(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1021ef124; end: 1021ef143;  */

void FUN_1021ef124(void)

{
  func_0x000107c61168(&PTR_PTR_112e63930);
  return;
}



/* Entry: 1021ef144; end: 1021ef2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021ef144(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e639a8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e639a8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x0001021ef1a8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1021ef2f0; end: 1021ef5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021ef2f0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *unaff_x20;
  
  puVar7 = &stack0xffffffffffffff90;
  puVar9 = unaff_x20;
  uVar12 = param_2;
  func_0x000107c614f0();
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e63998);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e639a8) = 0;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_1 & 1) != 0) {
    func_0x000105c61208();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1021ef5c0);
      (*pcVar4)();
    }
    puVar11 = puVar9;
    func_0x000107c5faec();
    uVar13 = uVar12;
    func_0x000107c61170();
    func_0x000105c61220();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1021ef5c4);
      (*pcVar4)();
    }
    puVar5 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    puVar6 = (undefined *)0x0;
    uVar14 = 1;
    FUN_1021eff0c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar3 = *(ulong *)(puVar6 + 0x10);
    uVar1 = uVar3 + 1;
    puVar9 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      uVar14 = uVar1;
      FUN_1021eff0c(puVar9,uVar1,1,puVar6);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1;
    *(undefined **)(puVar9 + uVar3 * 0x20 + 0x20) = puVar11;
    *(ulong *)(puVar9 + uVar3 * 0x20 + 0x28) = uVar12;
    *(undefined **)(puVar9 + uVar3 * 0x20 + 0x30) = puVar5;
    *(ulong *)(puVar9 + uVar3 * 0x20 + 0x38) = uVar13;
    uVar12 = uVar14;
    puVar11 = puVar9;
  }
  if ((param_2 & 1) != 0) {
    func_0x000105c61238();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1021ef5c8);
      (*pcVar4)();
    }
    puVar5 = puVar9;
    func_0x000107c5faec();
    uVar13 = uVar12;
    func_0x000107c61170();
    func_0x000105c61250();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1021ef5cc);
      (*pcVar4)();
    }
    puVar6 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    puVar9 = puVar11;
    func_0x000107c61558();
    puVar10 = puVar11;
    if (((ulong)puVar9 & 1) == 0) {
      puVar10 = (undefined *)0x0;
      FUN_1021eff0c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
    }
    uVar1 = *(ulong *)(puVar10 + 0x10);
    puVar11 = puVar10;
    if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
      puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      FUN_1021eff0c(puVar11,uVar1 + 1,1,puVar10);
    }
    *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
    *(undefined **)(puVar11 + uVar1 * 0x20 + 0x20) = puVar5;
    *(ulong *)(puVar11 + uVar1 * 0x20 + 0x28) = uVar12;
    *(undefined **)(puVar11 + uVar1 * 0x20 + 0x30) = puVar6;
    *(ulong *)(puVar11 + uVar1 * 0x20 + 0x38) = uVar13;
  }
  *(undefined **)(unaff_x20 + _DAT_112e639a0) = puVar11;
  puVar9 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61434(puVar11);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar9,0,0);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar8 = puVar7;
  func_0x000105c611f0();
  func_0x000107c61180();
  func_0x000107c59e18(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61174(puVar7);
  func_0x000107c59a2c();
  func_0x000107c53dec(puVar7);
  puVar8 = puVar7;
  func_0x000107c44ca0(puVar7);
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c56778(puVar7);
  func_0x000107c6142c(puVar11);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  return puVar7;
}



/* Entry: 1021ef5cc; end: 1021ef63f; -[_TtC19DefaultAppsSettings33DefaultAppsSettingsViewController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ef5cc(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e63998);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112e639a8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000049,0x800000010ef28480,
                      "DefaultAppsSettings/DefaultAppsSettingsViewController.swift",0x3b,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021ef640);
  (*pcVar2)();
}



/* Entry: 1021ef640; end: 1021ef6b3; -[_TtC19DefaultAppsSettings33DefaultAppsSettingsViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ef640(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e63998);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112e639a8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "DefaultAppsSettings/DefaultAppsSettingsViewController.swift",0x3b,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021ef6b4);
  (*pcVar2)();
}



/* Entry: 1021ef6b4; end: 1021ef6e7; -[_TtC19DefaultAppsSettings33DefaultAppsSettingsViewController loadScrollView] */

void FUN_1021ef6b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021ef144();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021ef6e8; end: 1021ef7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ef6e8(uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidDisappear__112684c48,param_1 & 1);
  uVar1 = unaff_x20;
  func_0x000107c49aa0();
  if (((uVar1 & 1) == 0) && (uVar1 = unaff_x20, func_0x000107c4a094(), (uVar1 & 1) == 0)) {
    uVar1 = unaff_x20;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (uVar1 == 0) {
      return;
    }
    uVar2 = uVar1;
    func_0x000107c49aa0();
    func_0x000107c61170(uVar1);
    if ((int)uVar2 == 0) {
      return;
    }
  }
  pcVar3 = *(code **)(unaff_x20 + _DAT_112e63998);
  if (pcVar3 != (code *)0x0) {
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112e63998))[1];
    func_0x000107c6157c(uVar4);
    (*pcVar3)();
    func_0x00010058d43c(pcVar3,uVar4);
  }
  return;
}



/* Entry: 1021ef7a8; end: 1021ef7d7; -[_TtC19DefaultAppsSettings33DefaultAppsSettingsViewController viewDidDisappear:] */

void FUN_1021ef7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1021ef6e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021ef7d8; end: 1021ef837; -[_TtC19DefaultAppsSettings33DefaultAppsSettingsViewController initWithNibName:bundle:transitionType:] */

void FUN_1021ef7d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DefaultAppsSettings.DefaultAppsSettingsViewController",0x35,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021ef804);
  (*pcVar1)();
}



/* Entry: 1021ef838; end: 1021ef883; -[_TtC19DefaultAppsSettings33DefaultAppsSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ef838(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112e63998),
                      ((undefined8 *)(param_1 + _DAT_112e63998))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e639a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e639a8));
  return;
}



/* Entry: 1021ef884; end: 1021ef8a3;  */

void FUN_1021ef884(void)

{
  func_0x000107c61168(&PTR_PTR_1128291c0);
  return;
}



/* Entry: 1021ef8a4; end: 1021ef8ab; -[_TtC19DefaultAppsSettings33DefaultAppsSettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_1021ef8a4(void)

{
  return 1;
}



/* Entry: 1021ef8ac; end: 1021ef8bf; -[_TtC19DefaultAppsSettings33DefaultAppsSettingsViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1021ef8ac(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + _DAT_112e639a0) + 0x10);
}



/* Entry: 1021ef8c0; end: 1021efd7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1021ef8c0(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f06ff50);
  uVar5 = uVar4;
  func_0x000107c5efd4();
  func_0x000107c417dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar5 = 0;
  FUN_1021eec9c(0);
  uVar6 = param_1;
  func_0x000107c61480(param_1,uVar5);
  if (uVar6 != 0) {
    lVar11 = *(long *)(unaff_x20 + _DAT_112e639a0);
    uVar7 = param_1;
    func_0x000107c61174();
    uVar8 = uVar7;
    func_0x000107c5efe4();
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1021efb48);
      (*pcVar3)();
    }
    if (*(ulong *)(lVar11 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1021efb4c);
      (*pcVar3)();
    }
    lVar11 = lVar11 + uVar8 * 0x20;
    uVar5 = *(undefined8 *)(lVar11 + 0x20);
    uVar4 = *(undefined8 *)(lVar11 + 0x28);
    uVar10 = *(undefined8 *)(lVar11 + 0x30);
    lVar14 = *(long *)(lVar11 + 0x38);
    func_0x000107c61434(uVar4);
    lVar11 = lVar14;
    func_0x000107c61434();
    func_0x000105c61268();
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1021efb50);
      (*pcVar3)();
    }
    puVar9 = &UNK_1104e1098;
    func_0x000107c613fc(&UNK_1104e1098,0x18,7);
    func_0x000107c61614(puVar9 + 0x10);
    lVar2 = _DAT_112e638a8;
    uVar12 = *(undefined8 *)(uVar6 + _DAT_112e638a8);
    func_0x000107c61174(lVar11);
    func_0x000107c6157c(puVar9);
    uVar13 = uVar5;
    func_0x000107c5fadc(uVar5,uVar4);
    func_0x000107c59c6c(uVar12);
    func_0x000107c61170(uVar13);
    uVar13 = *(undefined8 *)(uVar6 + lVar2);
    func_0x000107c5fadc(uVar5,uVar4);
    func_0x000107c520fc(uVar13);
    func_0x000107c61170(uVar5);
    lVar2 = _DAT_112e638b0;
    uVar13 = *(undefined8 *)(uVar6 + _DAT_112e638b0);
    uVar5 = uVar10;
    func_0x000107c5fadc(uVar10,lVar14);
    func_0x000107c59c6c(uVar13);
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(uVar6 + lVar2);
    func_0x000107c5fadc(uVar10,lVar14);
    func_0x000107c520fc(uVar5);
    func_0x000107c61170(uVar10);
    lVar2 = _DAT_112e638b8;
    func_0x000107c59e1c(*(undefined8 *)(uVar6 + _DAT_112e638b8));
    func_0x000107c61170(lVar11);
    func_0x000107c520fc(*(undefined8 *)(uVar6 + lVar2));
    func_0x000107c61170(lVar11);
    func_0x000107c6142c(lVar14);
    func_0x000107c6142c(uVar4);
    puVar1 = (undefined8 *)(uVar6 + _DAT_112e638c0);
    uVar5 = *puVar1;
    uVar4 = puVar1[1];
    *puVar1 = FUN_1021eff04;
    puVar1[1] = puVar9;
    func_0x00010058d43c(uVar5,uVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61574(puVar9);
  }
  return param_1;
}



/* Entry: 1021efd7c; end: 1021efe43; -[_TtC19DefaultAppsSettings33DefaultAppsSettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_1021efd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1021ef8c0(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021efe44; end: 1021eff03; -[_TtC19DefaultAppsSettings33DefaultAppsSettingsViewController tableView:didSelectRowAtIndexPath:] */

void FUN_1021efe44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4)
  ;
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  func_0x000107c5efd4();
  func_0x000107c41818(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 1021eff04; end: 1021eff0b;  */

void FUN_1021eff04(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,3,0);
    if (iVar1 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      lVar3 = 0;
      func_0x000107c5ede0();
      lVar13 = *(long *)(lVar3 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
      puVar11 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      lVar4 = 0x112d36580;
      puVar5 = &UNK_10d9016d0;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar12 = (long)puVar11 - extraout_x8_00;
      func_0x000107c5faec(*(undefined8 *)
                           PTR__UIApplicationOpenDefaultApplicationsSettingsURLString_110345a70);
      func_0x000107c5edd0(lVar12);
      func_0x000107c6142c(puVar5);
      lVar4 = lVar12;
      (**(code **)(lVar13 + 0x30))(lVar12,1,lVar3);
      if ((int)lVar4 == 1) {
        func_0x0001000293e4(lVar12);
        func_0x000107c61170(lVar2);
      }
      else {
        (**(code **)(lVar13 + 0x20))(puVar11,lVar12,lVar3);
        puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
        func_0x000107c5a9c4();
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c5ed90();
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar8 = 0;
        func_0x000100dfa6ec(0);
        uVar9 = uVar8;
        func_0x000100f33384();
        puVar10 = puVar7;
        func_0x000107c5f9dc(puVar7,uVar8,PTR___sypN_11034f1a8 + 8,uVar9);
        func_0x000107c6142c(puVar7);
        func_0x000107c4de70(puVar5);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar10);
        (**(code **)(lVar13 + 8))(puVar11,lVar3);
        func_0x000107c61170(lVar2);
      }
    }
  }
  return;
}



/* Entry: 1021eff0c; end: 1021f003b;  */

undefined * FUN_1021eff0c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1021f003c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e639d8;
    func_0x0001000285a8(0x112e639d8,&UNK_10da6d230);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e639e0;
    func_0x0001000285a8(0x112e639e0,&UNK_10da6d238);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1021f003c; end: 1021f005b; -[_TtC24DefaultAppsSettingsScope26SCDefaultAppsSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f003c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e639e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021f005c; end: 1021f00a3; -[_TtC24DefaultAppsSettingsScope26SCDefaultAppsSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f005c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e639f0;
  func_0x000107c61428(param_1 + _DAT_112e639f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021f00a4; end: 1021f00fb; -[_TtC24DefaultAppsSettingsScope26SCDefaultAppsSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f00a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e639f0;
  func_0x000107c61428(param_1 + _DAT_112e639f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021f00fc; end: 1021f00ff;  */

void FUN_1021f00fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021f0100; end: 1021f01a7; -[_TtC24DefaultAppsSettingsScope26SCDefaultAppsSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021f0100(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e639e8));
  param_1 = param_1 + _DAT_112e639f0;
  func_0x000107c61610();
  return param_1;
}


