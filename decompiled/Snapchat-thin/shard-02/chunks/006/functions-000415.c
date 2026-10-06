/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f76784; end: 101f767b3;  */

void FUN_101f76784(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104aa298;
  return;
}



/* Entry: 101f767b4; end: 101f767d3;  */

void FUN_101f767b4(void)

{
  func_0x000107c61168(&PTR_PTR_112e46c18);
  return;
}



/* Entry: 101f767d4; end: 101f767f7;  */

undefined1  [16] FUN_101f767d4(void)

{
  return ZEXT816(0x1104aa2d8);
}



/* Entry: 101f767f8; end: 101f7681f;  */

void FUN_101f767f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f76820; end: 101f76827;  */

undefined8 FUN_101f76820(void)

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



/* Entry: 101f76828; end: 101f76863;  */

void FUN_101f76828(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f76864();
  func_0x0001000a7f38("SCSpectaclesHomeWifiScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = param_2;
  return;
}



/* Entry: 101f76864; end: 101f76a4f;  */

void FUN_101f76864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dc30;
  ppuVar4 = &PTR_DAT_113066f70;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e46c98;
  func_0x0001000285a8(0x112e46c98,&UNK_10da3b608);
  func_0x0001000a6ee8(&UNK_1104aa2d8,
                      "SCSpectaclesHomeWifiEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_101f76ac4,param_1,uVar2,&UNK_1104aa2d8,&PTR_DAT_112e46bb0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104aa328;
  func_0x000107c613fc(&UNK_1104aa328,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104aa0f8,
                      "SCSpectaclesHomeWifiScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_101f76b74,puVar3,uVar2,&UNK_1104aa0f8,&PTR_DAT_112e46b30);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104aa350;
  func_0x000107c613fc(&UNK_1104aa350,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104aa538,
                      "SpectaclesHomeWifiScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_101f76b7c,puVar3,uVar2,&UNK_1104aa538,&PTR_DAT_112e46d28);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e46ca0;
  func_0x0001000285a8(0x112e46ca0,&UNK_10da3b610);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f76a50; end: 101f76ac3;  */

void FUN_101f76a50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f76bf0;
  func_0x0001000823a8(0x101f76bf0,param_3);
  func_0x000100082720("SCSpectaclesHomeWifiEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f76ac4; end: 101f76acb;  */

void FUN_101f76ac4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f76bf0;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesHomeWifiEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f76acc; end: 101f76b73;  */

void FUN_101f76acc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104aa378;
  func_0x000107c613fc(&UNK_1104aa378,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f76be8;
  func_0x0001000823a8(FUN_101f76be8,puVar1);
  func_0x000100082720("SCSpectaclesHomeWifiScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f76b74; end: 101f76b7b;  */

void FUN_101f76b74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104aa378;
  func_0x000107c613fc(&UNK_1104aa378,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f76be8;
  func_0x0001000823a8(FUN_101f76be8,puVar3);
  func_0x000100082720("SCSpectaclesHomeWifiScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f76b7c; end: 101f76bbb;  */

void FUN_101f76b7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f7718c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesHomeWifiScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f76bbc; end: 101f76be7;  */

void FUN_101f76bbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f76be8; end: 101f76bf7;  */

void FUN_101f76be8(undefined8 *param_1)

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
  puVar1 = &UNK_1104aa180;
  func_0x000107c613fc(&UNK_1104aa180,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f75b1c;
  func_0x00010058fa64(FUN_101f75b1c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f76bf8; end: 101f76c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f76bf8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101f76fb8();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e46ca8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e46cb0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f76c80);
  (*pcVar1)();
}



/* Entry: 101f76c80; end: 101f76cdf; -[_TtC34SpectaclesHomeWifiScopeGraphBridge49SpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f76c80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesHomeWifiScopeGraphBridge.SpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f76cac);
  (*pcVar1)();
}



/* Entry: 101f76ce0; end: 101f76d17; -[_TtC34SpectaclesHomeWifiScopeGraphBridge49SpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f76cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f76d00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f76ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e46ca8));
  return;
}



/* Entry: 101f76d18; end: 101f76d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f76d18(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e46cb0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e46ca8));
  return;
}



/* Entry: 101f76d40; end: 101f76d5f;  */

void FUN_101f76d40(void)

{
  func_0x000107c61168(&PTR_PTR_11280df58);
  return;
}



/* Entry: 101f76d60; end: 101f76de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f76d60(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e46ce0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e46ce8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f76de8);
  (*pcVar2)();
}



/* Entry: 101f76de8; end: 101f76ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f76de8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e46ce0);
  *(undefined **)(unaff_x20 + _DAT_112e46ce0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e46ce8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e46ce8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104aa498;
  func_0x000107c613fc(&UNK_1104aa498,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f76ed4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f76ed0; end: 101f76edb;  */

void FUN_101f76ed0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f76edc; end: 101f76f3b; -[_TtC34SpectaclesHomeWifiScopeGraphBridge49SCSpectaclesHomeWifiScopedServicesSaberEntryPoint init] */

void FUN_101f76edc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesHomeWifiScopeGraphBridge.SCSpectaclesHomeWifiScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f76f08);
  (*pcVar1)();
}



/* Entry: 101f76f3c; end: 101f76f73; -[_TtC34SpectaclesHomeWifiScopeGraphBridge49SCSpectaclesHomeWifiScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f76f3c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e46ce8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e46ce0));
  return;
}



/* Entry: 101f76f74; end: 101f76f77;  */

void FUN_101f76f74(void)

{
  return;
}



/* Entry: 101f76f78; end: 101f76f97;  */

void FUN_101f76f78(void)

{
  FUN_101f76de8();
  return;
}



/* Entry: 101f76f98; end: 101f76fb7;  */

void FUN_101f76f98(void)

{
  func_0x000107c61168(&PTR_PTR_11280e020);
  return;
}



/* Entry: 101f76fb8; end: 101f77087;  */

undefined8 FUN_101f76fb8(void)

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
  
  func_0x000107c61428(0x112e46d18,&uStack_40,0x20,0);
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
    FUN_101f77088();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f77088; end: 101f770a7;  */

void FUN_101f77088(void)

{
  func_0x000107c61168(&PTR_PTR_11280e0e8);
  return;
}



/* Entry: 101f770a8; end: 101f77113;  */

void FUN_101f770a8(void)

{
  func_0x0001000285a8(0x112e46d20,&UNK_10da3b6e8);
  func_0x0001000823a8(0x101f770e8,0);
  return;
}



/* Entry: 101f77114; end: 101f7714f; -[_TtC34SpectaclesHomeWifiScopeGraphBridge42SpectaclesHomeWifiScopeGraphBridgeServices init] */

void FUN_101f77114(undefined8 param_1)

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



/* Entry: 101f77150; end: 101f77183;  */

void FUN_101f77150(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f77184; end: 101f7718b;  */

undefined8 FUN_101f77184(void)

{
  return 0x1b;
}



/* Entry: 101f7718c; end: 101f77303;  */

void FUN_101f7718c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104aa4e0;
  func_0x000107c613fc(&UNK_1104aa4e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f77304,puVar1);
  return;
}



/* Entry: 101f77304; end: 101f7730b;  */

void FUN_101f77304(undefined8 *param_1)

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
  func_0x000107c61428(0x112e46d18,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e46d18,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104aa578;
  func_0x000107c613fc(&UNK_1104aa578,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f773b8;
  func_0x00010058fa64(0x101f773b8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f7730c; end: 101f77367;  */

void FUN_101f7730c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e46d18,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e46d18,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f77368; end: 101f773bf;  */

undefined ** FUN_101f77368(void)

{
  return &PTR_DAT_113066f70;
}



/* Entry: 101f773c0; end: 101f77407; -[SCSpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f773c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e46d78;
  func_0x000107c61428(param_1 + _DAT_112e46d78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f77408; end: 101f7745f; -[SCSpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f77408(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e46d78;
  func_0x000107c61428(param_1 + _DAT_112e46d78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f77460; end: 101f774a7; -[SCSpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint spectaclesHomeWifiScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f77460(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e46d80;
  func_0x000107c61428(param_1 + _DAT_112e46d80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f774a8; end: 101f7750b; -[SCSpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint setSpectaclesHomeWifiScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f774a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e46d80;
  func_0x000107c61428(param_1 + _DAT_112e46d80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f7750c; end: 101f7763f;  */

/* WARNING: Possible PIC construction at 0x000101f775c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f775e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f775fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f775c8) */
/* WARNING: Removing unreachable block (ram,0x000101f775e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7750c(void)

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
  func_0x000107c5b728();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101f76d40();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101f76fb8();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f77640);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e46ca8) = lVar5;
    *(long *)(lVar4 + _DAT_112e46cb0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101f77640; end: 101f77667; -[SCSpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f77640(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f7750c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f77668; end: 101f776ab; -[SCSpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f77668(undefined8 param_1)

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



/* Entry: 101f776ac; end: 101f77843;  */

void FUN_101f776ac(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0fdcda0)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f023260,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesHomeWifiScopeGraphBridge/SCSpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5c,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f77844);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f77844; end: 101f778ef; -[SCSpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f77844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f776ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f778f0; end: 101f7795b; -[SCSpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f778f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e46d78,0);
  *(undefined8 *)(param_1 + _DAT_112e46d80) = 0;
  *(undefined8 *)(param_1 + _DAT_112e46d88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f7795c; end: 101f7798f;  */

void FUN_101f7795c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f77990; end: 101f779d7; -[SCSpectaclesHomeWifiScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f779bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f779c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f77990(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e46d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e46d80));
  return;
}



/* Entry: 101f779d8; end: 101f779f7;  */

void FUN_101f779d8(void)

{
  func_0x000107c61168(&PTR_PTR_11280e198);
  return;
}



/* Entry: 101f779f8; end: 101f77a3f; -[SCSCSpectaclesHomeWifiScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f779f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e46db8;
  func_0x000107c61428(param_1 + _DAT_112e46db8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f77a40; end: 101f77a97; -[SCSCSpectaclesHomeWifiScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f77a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e46db8;
  func_0x000107c61428(param_1 + _DAT_112e46db8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f77a98; end: 101f77b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f77a98(undefined8 param_1,long param_2)

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
    FUN_101f76f98();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e46ce0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f77b70);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e46ce8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e46dc0);
    *(long **)(unaff_x20 + _DAT_112e46dc0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f77b70; end: 101f77b97; -[SCSCSpectaclesHomeWifiScopedServicesSaberEntryPoint begin] */

void FUN_101f77b70(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f77a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f77b98; end: 101f77d0f;  */

/* WARNING: Possible PIC construction at 0x000101f77c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f77c98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f77c04) */
/* WARNING: Removing unreachable block (ram,0x000101f77c9c) */
/* WARNING: Removing unreachable block (ram,0x000101f77cb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f77b98(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e46dc0);
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



/* Entry: 101f77d10; end: 101f77d17;  */

void FUN_101f77d10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f77d18; end: 101f77d4b; -[SCSCSpectaclesHomeWifiScopedServicesSaberEntryPoint end] */

void FUN_101f77d18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f77b98();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f77d4c; end: 101f77e6b;  */

void FUN_101f77d4c(long param_1,long param_2,long param_3)

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
                        "SpectaclesHomeWifiScopeGraphBridge/SCSCSpectaclesHomeWifiScopedServicesSaberEntryPoint.swift"
                        ,0x5c,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f77e6c);
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



/* Entry: 101f77e6c; end: 101f77f17; -[SCSCSpectaclesHomeWifiScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f77e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f77d4c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f77f18; end: 101f77f77; -[SCSCSpectaclesHomeWifiScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f77f18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e46db8,0);
  *(undefined8 *)(param_1 + _DAT_112e46dc0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f77f78; end: 101f77fab;  */

void FUN_101f77f78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f77fac; end: 101f77fe3; -[SCSCSpectaclesHomeWifiScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f77fac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e46db8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e46dc0));
  return;
}



/* Entry: 101f77fe4; end: 101f78003;  */

void FUN_101f77fe4(void)

{
  func_0x000107c61168(&PTR_PTR_11280e260);
  return;
}



/* Entry: 101f78004; end: 101f7806f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f78004(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f783f8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e46df8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f78070; end: 101f780db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f78070(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e46df8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f780dc; end: 101f7813b; -[_TtC51SpectaclesKioskModePageScopedFactoryServiceProvider39SCSpectaclesKioskModePageScopedServices init] */

void FUN_101f780dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesKioskModePageScopedFactoryServiceProvider.SCSpectaclesKioskModePageScopedServices"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f78108);
  (*pcVar1)();
}



/* Entry: 101f7813c; end: 101f7814b; -[_TtC51SpectaclesKioskModePageScopedFactoryServiceProvider39SCSpectaclesKioskModePageScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7813c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e46df8));
  return;
}



/* Entry: 101f7814c; end: 101f781b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7814c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104aa790;
  func_0x000107c613fc(&UNK_1104aa790,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f78490,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f781b8; end: 101f78253;  */

void FUN_101f781b8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104aa6a0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104aa6a0;
  return;
}



/* Entry: 101f78254; end: 101f7828b;  */

void FUN_101f78254(long *param_1)

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



/* Entry: 101f7828c; end: 101f78293;  */

undefined8 FUN_101f7828c(void)

{
  return 0x1b;
}



/* Entry: 101f78294; end: 101f783c7;  */

void FUN_101f78294(undefined8 *param_1)

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
  puVar1 = &UNK_1104aa7b8;
  func_0x000107c613fc(&UNK_1104aa7b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f78468;
  func_0x00010058fa64(FUN_101f78468,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f783c8; end: 101f783f7;  */

undefined ** FUN_101f783c8(void)

{
  return &PTR_DAT_113066f88;
}



/* Entry: 101f783f8; end: 101f78417;  */

void FUN_101f783f8(void)

{
  func_0x000107c61168(&PTR_PTR_11280e320);
  return;
}



/* Entry: 101f78418; end: 101f78467;  */

undefined1  [16] FUN_101f78418(void)

{
  return ZEXT816(0x1104aa6f0);
}



/* Entry: 101f78468; end: 101f7848f;  */

void FUN_101f78468(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f78490; end: 101f78493;  */

void FUN_101f78490(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f78494; end: 101f785eb;  */

void FUN_101f78494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e46e60,&UNK_10da3bb20);
  puVar1 = &UNK_1104aa7f8;
  func_0x000107c613fc(&UNK_1104aa7f8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_101f785ec,puVar1);
  return;
}



/* Entry: 101f785ec; end: 101f78607;  */

/* WARNING: Possible PIC construction at 0x000101f785c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f785cc) */

void FUN_101f785ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1104aa840;
  func_0x000107c613fc(&UNK_1104aa840,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112e46e68;
  func_0x0001000285a8(0x112e46e68,&UNK_10da3bb68);
  func_0x000107c613fc();
  pcVar4 = FUN_101f78954;
  func_0x0001000841fc(FUN_101f78954,puVar2,uVar3);
  func_0x000100084214(&UNK_10da3bb30,0x35,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101f78608; end: 101f7891f;  */

void FUN_101f78608(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e46e70,&UNK_10da3bb70);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e46e78,&UNK_10da3bb80);
  puVar2 = &UNK_1104aa868;
  func_0x000107c613fc(&UNK_1104aa868,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x101f78960;
  func_0x0001000823a8(0x101f78960,puVar2);
  func_0x000100082720("SCSpectaclesKioskModePageEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101f78254;
  func_0x0001000823a8(FUN_101f78254,0);
  pcVar4 = "SCSpectaclesKioskModePageScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesKioskModePageScopedServicesCleanupRelayServiceProvider",0x42,2);
  FUN_101f79938();
  func_0x000100082720("SpectaclesKioskModePageScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e46e80,&UNK_10da3bb78);
  puVar2 = &UNK_1104aa890;
  func_0x000107c613fc(&UNK_1104aa890,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101f789a8;
  func_0x0001000823a8(FUN_101f789a8,puVar2);
  func_0x000100082720("SCSpectaclesKioskModePageScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112e46e00,&UNK_10da3b8b0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101f789b4;
  func_0x0001000823a8(0x101f789b4,pcVar5);
  func_0x000100082720("SCSpectaclesKioskModePageScopeInitializationServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e46df0,&UNK_10da3b8a0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f789bc;
  func_0x0001000823a8(0x101f789bc,uVar6);
  func_0x000100082720("SCSpectaclesKioskModePageScopedServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104aa8b8;
  func_0x000107c613fc(&UNK_1104aa8b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101f789c4;
  func_0x0001000823a8(0x101f789c4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpectaclesKioskModePageScopeEntryPointProvider",0x30,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101f78920; end: 101f78953;  */

void FUN_101f78920(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f78954; end: 101f7896b;  */

void FUN_101f78954(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e46e70,&UNK_10da3bb70);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e46e78,&UNK_10da3bb80);
  puVar2 = &UNK_1104aa868;
  func_0x000107c613fc(&UNK_1104aa868,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar3 = 0x101f78960;
  func_0x0001000823a8(0x101f78960,puVar2);
  func_0x000100082720("SCSpectaclesKioskModePageEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101f78254;
  func_0x0001000823a8(FUN_101f78254,0);
  pcVar5 = "SCSpectaclesKioskModePageScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesKioskModePageScopedServicesCleanupRelayServiceProvider",0x42,2);
  FUN_101f79938();
  func_0x000100082720("SpectaclesKioskModePageScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e46e80,&UNK_10da3bb78);
  puVar2 = &UNK_1104aa890;
  func_0x000107c613fc(&UNK_1104aa890,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(char **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_101f789a8;
  func_0x0001000823a8(FUN_101f789a8,puVar2);
  func_0x000100082720("SCSpectaclesKioskModePageScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112e46e00,&UNK_10da3b8b0);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x101f789b4;
  func_0x0001000823a8(0x101f789b4,pcVar6);
  func_0x000100082720("SCSpectaclesKioskModePageScopeInitializationServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e46df0,&UNK_10da3b8a0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101f789bc;
  func_0x0001000823a8(0x101f789bc,uVar7);
  func_0x000100082720("SCSpectaclesKioskModePageScopedServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104aa8b8;
  func_0x000107c613fc(&UNK_1104aa8b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x101f789c4;
  func_0x0001000823a8(0x101f789c4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCSpectaclesKioskModePageScopeEntryPointProvider",0x30,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 101f7896c; end: 101f789a7;  */

void FUN_101f7896c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f789a8; end: 101f789cb;  */

void FUN_101f789a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f790f4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpectaclesKioskModePageScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f789cc; end: 101f78c5b;  */

void FUN_101f789cc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_101f79044();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a9b58;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0235a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 101f78c5c; end: 101f78ce3;  */

undefined8
FUN_101f78c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101f78e10(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 101f78ce4; end: 101f78d1f;  */

void FUN_101f78ce4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f78d20; end: 101f78d27;  */

undefined8 FUN_101f78d20(void)

{
  return 0x1b;
}



/* Entry: 101f78d28; end: 101f78dab;  */

void FUN_101f78d28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f79084,param_2,FUN_101f79088,param_2,FUN_101f790b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f78dac; end: 101f78dfb;  */

undefined8 FUN_101f78dac(void)

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



/* Entry: 101f78dfc; end: 101f78e0f;  */

void FUN_101f78dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104aa8d0;
  return;
}



/* Entry: 101f78e10; end: 101f79027;  */

void FUN_101f78e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a9b58;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0235a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f79028; end: 101f79043;  */

undefined ** FUN_101f79028(void)

{
  return &PTR_DAT_113066f88;
}



/* Entry: 101f79044; end: 101f79063;  */

void FUN_101f79044(void)

{
  func_0x000107c61168(&PTR_PTR_112e46ef0);
  return;
}



/* Entry: 101f79064; end: 101f79087;  */

undefined1  [16] FUN_101f79064(void)

{
  return ZEXT816(0x1104aa910);
}



/* Entry: 101f79088; end: 101f790af;  */

void FUN_101f79088(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f790b0; end: 101f790b7;  */

undefined8 FUN_101f790b0(void)

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



/* Entry: 101f790b8; end: 101f790f3;  */

void FUN_101f790b8(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f790f4();
  func_0x0001000a7f38("SCSpectaclesKioskModePageScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f790f4; end: 101f792df;  */

void FUN_101f790f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dc58;
  ppuVar4 = &PTR_DAT_113066f88;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e46f68;
  func_0x0001000285a8(0x112e46f68,&UNK_10da3bce0);
  func_0x0001000a6ee8(&UNK_1104aa910,
                      "SCSpectaclesKioskModePageEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,FUN_101f79354,param_1,uVar2,&UNK_1104aa910,&PTR_DAT_112e46e88);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104aa960;
  func_0x000107c613fc(&UNK_1104aa960,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104aa730,
                      "SCSpectaclesKioskModePageScopedServicesScopeInitializationPluginKey",0x43,2,
                      FUN_101f79404,puVar3,uVar2,&UNK_1104aa730,&PTR_DAT_112e46e08);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104aa988;
  func_0x000107c613fc(&UNK_1104aa988,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104aab70,
                      "SpectaclesKioskModePageScopeGraphBridgeScopeInitializationPluginKey",0x43,2,
                      FUN_101f7940c,puVar3,uVar2,&UNK_1104aab70,&PTR_DAT_112e46ff8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e46f70;
  func_0x0001000285a8(0x112e46f70,&UNK_10da3bce8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f792e0; end: 101f79353;  */

void FUN_101f792e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f79480;
  func_0x0001000823a8(0x101f79480,param_3);
  func_0x000100082720("SCSpectaclesKioskModePageEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}


