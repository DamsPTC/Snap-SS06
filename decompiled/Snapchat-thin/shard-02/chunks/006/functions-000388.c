/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f213c4; end: 101f213e3;  */

void FUN_101f213c4(void)

{
  func_0x000107c61168(&PTR_PTR_112e40a20);
  return;
}



/* Entry: 101f213e4; end: 101f21407;  */

undefined1  [16] FUN_101f213e4(void)

{
  return ZEXT816(0x11049fce8);
}



/* Entry: 101f21408; end: 101f2142f;  */

void FUN_101f21408(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f21430; end: 101f21437;  */

undefined8 FUN_101f21430(void)

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



/* Entry: 101f21438; end: 101f21473;  */

void FUN_101f21438(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f21474();
  func_0x0001000a7f38("SCLensCreatorProfileScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = param_2;
  return;
}



/* Entry: 101f21474; end: 101f2165f;  */

void FUN_101f21474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d690;
  ppuVar4 = &PTR_DAT_113066c10;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11049fd38;
  func_0x000107c613fc(&UNK_11049fd38,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e40a98;
  func_0x0001000285a8(0x112e40a98,&UNK_10da2ee38);
  func_0x0001000a6ee8(&UNK_11049ff88,
                      "LensCreatorProfileScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_101f21660,puVar2,uVar3,&UNK_11049ff88,&PTR_DAT_112e40b30);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11049fce8,
                      "SCLensCreatorProfileEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_101f21714,param_3,uVar3,&UNK_11049fce8,&PTR_DAT_112e409b8);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11049fd60;
  func_0x000107c613fc(&UNK_11049fd60,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11049fb58,
                      "SCLensCreatorProfileScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_101f217c4,puVar2,uVar3,&UNK_11049fb58,&PTR_DAT_112e40938);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e40aa0;
  func_0x0001000285a8(0x112e40aa0,&UNK_10da2ee40);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101f21660; end: 101f2169f;  */

void FUN_101f21660(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f21f8c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensCreatorProfileScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f216a0; end: 101f21713;  */

void FUN_101f216a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f21800;
  func_0x0001000823a8(0x101f21800,param_3);
  func_0x000100082720("SCLensCreatorProfileEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f21714; end: 101f2171b;  */

void FUN_101f21714(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f21800;
  func_0x0001000823a8();
  func_0x000100082720("SCLensCreatorProfileEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f2171c; end: 101f217c3;  */

void FUN_101f2171c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11049fd88;
  func_0x000107c613fc(&UNK_11049fd88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f217f8;
  func_0x0001000823a8(FUN_101f217f8,puVar1);
  func_0x000100082720("SCLensCreatorProfileScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f217c4; end: 101f217cb;  */

void FUN_101f217c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11049fd88;
  func_0x000107c613fc(&UNK_11049fd88,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f217f8;
  func_0x0001000823a8(FUN_101f217f8,puVar3);
  func_0x000100082720("SCLensCreatorProfileScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f217cc; end: 101f217f7;  */

void FUN_101f217cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f217f8; end: 101f21807;  */

void FUN_101f217f8(undefined8 *param_1)

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
  puVar1 = &UNK_11049fbe0;
  func_0x000107c613fc(&UNK_11049fbe0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f20bac;
  func_0x00010058fa64(FUN_101f20bac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f21808; end: 101f218e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f21808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_101f21c1c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e40aa8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e40ab0) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f218e4);
  (*pcVar1)();
}



/* Entry: 101f218e4; end: 101f21943; -[_TtC34LensCreatorProfileScopeGraphBridge49LensCreatorProfileScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f218e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCreatorProfileScopeGraphBridge.LensCreatorProfileScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f21910);
  (*pcVar1)();
}



/* Entry: 101f21944; end: 101f2197b; -[_TtC34LensCreatorProfileScopeGraphBridge49LensCreatorProfileScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f21960: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f21964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f21944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e40aa8));
  return;
}



/* Entry: 101f2197c; end: 101f219a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f2197c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e40ab0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e40aa8));
  return;
}



/* Entry: 101f219a4; end: 101f219c3;  */

void FUN_101f219a4(void)

{
  func_0x000107c61168(&PTR_PTR_112809aa0);
  return;
}



/* Entry: 101f219c4; end: 101f21a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f219c4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e40ae0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e40ae8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f21a4c);
  (*pcVar2)();
}



/* Entry: 101f21a4c; end: 101f21b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f21a4c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e40ae0);
  *(undefined **)(unaff_x20 + _DAT_112e40ae0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e40ae8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e40ae8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11049fea8;
  func_0x000107c613fc(&UNK_11049fea8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f21b38,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f21b34; end: 101f21b3f;  */

void FUN_101f21b34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f21b40; end: 101f21b9f; -[_TtC34LensCreatorProfileScopeGraphBridge49SCLensCreatorProfileScopedServicesSaberEntryPoint init] */

void FUN_101f21b40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCreatorProfileScopeGraphBridge.SCLensCreatorProfileScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f21b6c);
  (*pcVar1)();
}



/* Entry: 101f21ba0; end: 101f21bd7; -[_TtC34LensCreatorProfileScopeGraphBridge49SCLensCreatorProfileScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f21ba0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e40ae8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e40ae0));
  return;
}



/* Entry: 101f21bd8; end: 101f21bdb;  */

void FUN_101f21bd8(void)

{
  return;
}



/* Entry: 101f21bdc; end: 101f21bfb;  */

void FUN_101f21bdc(void)

{
  FUN_101f21a4c();
  return;
}



/* Entry: 101f21bfc; end: 101f21c1b;  */

void FUN_101f21bfc(void)

{
  func_0x000107c61168(&PTR_PTR_112809b68);
  return;
}



/* Entry: 101f21c1c; end: 101f21ceb;  */

undefined8 FUN_101f21c1c(void)

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
  
  func_0x000107c61428(0x112e40b18,&uStack_40,0x20,0);
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
    FUN_101f21cec();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f21cec; end: 101f21d0b;  */

void FUN_101f21cec(void)

{
  func_0x000107c61168(&PTR_PTR_112809c30);
  return;
}



/* Entry: 101f21d0c; end: 101f21d27;  */

void FUN_101f21d0c(undefined8 param_1)

{
  func_0x0001000285a8(0x112e40b20,&UNK_10da2ef18);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f21d94,param_1);
  return;
}



/* Entry: 101f21d28; end: 101f21d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f21d28(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101f21cec();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e40b28) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101f21d94; end: 101f21d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f21d94(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_101f21cec();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e40b28) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101f21d9c; end: 101f21de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f21d9c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e40b28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f21de8; end: 101f21e47; -[_TtC34LensCreatorProfileScopeGraphBridge42LensCreatorProfileScopeGraphBridgeServices init] */

void FUN_101f21de8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCreatorProfileScopeGraphBridge.LensCreatorProfileScopeGraphBridgeServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f21e14);
  (*pcVar1)();
}



/* Entry: 101f21e48; end: 101f21e57; -[_TtC34LensCreatorProfileScopeGraphBridge42LensCreatorProfileScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f21e48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e40b28));
  return;
}



/* Entry: 101f21e58; end: 101f21ee3;  */

void FUN_101f21e58(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101f21e98,0);
  return;
}



/* Entry: 101f21ee4; end: 101f21eff;  */

void FUN_101f21ee4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f21f50,param_1);
  return;
}



/* Entry: 101f21f00; end: 101f21f4f;  */

void FUN_101f21f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 101f21f50; end: 101f21f83;  */

void FUN_101f21f50(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101f21f84; end: 101f21f8b;  */

undefined8 FUN_101f21f84(void)

{
  return 0x1b;
}



/* Entry: 101f21f8c; end: 101f22103;  */

void FUN_101f21f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11049fef0;
  func_0x000107c613fc(&UNK_11049fef0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f22104,puVar1);
  return;
}



/* Entry: 101f22104; end: 101f2210b;  */

void FUN_101f22104(undefined8 *param_1)

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
  func_0x000107c61428(0x112e40b18,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e40b18,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11049ffc8;
  func_0x000107c613fc(&UNK_11049ffc8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f221d8;
  func_0x00010058fa64(0x101f221d8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f2210c; end: 101f22167;  */

void FUN_101f2210c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e40b18,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e40b18,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f22168; end: 101f221df;  */

undefined ** FUN_101f22168(void)

{
  return &PTR_DAT_113066c10;
}



/* Entry: 101f221e0; end: 101f22227; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f221e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e40b80;
  func_0x000107c61428(param_1 + _DAT_112e40b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f22228; end: 101f2227f; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22228(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e40b80;
  func_0x000107c61428(param_1 + _DAT_112e40b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f22280; end: 101f222c7; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint sCBusinessProfilesPresenterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22280(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e40b88;
  func_0x000107c61428(param_1 + _DAT_112e40b88,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f222c8; end: 101f222d3; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint setSCBusinessProfilesPresenterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f222c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e40b88;
  func_0x000107c61428(param_1 + _DAT_112e40b88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f222d4; end: 101f2231b; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint lensCreatorProfileScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f222d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e40b90;
  func_0x000107c61428(param_1 + _DAT_112e40b90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f2231c; end: 101f22327; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint setLensCreatorProfileScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f2231c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e40b90;
  func_0x000107c61428(param_1 + _DAT_112e40b90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f22328; end: 101f22387;  */

void FUN_101f22328(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101f22388; end: 101f22543;  */

/* WARNING: Possible PIC construction at 0x000101f224a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f224c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f224d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f22518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f224d8) */
/* WARNING: Removing unreachable block (ram,0x000101f224c8) */
/* WARNING: Removing unreachable block (ram,0x000101f224a4) */
/* WARNING: Removing unreachable block (ram,0x000101f2251c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22388(void)

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
  func_0x000107c50b00();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4b018();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_101f219a4();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_101f21c1c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f22544);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e40aa8) = lVar5;
      *(long *)(lVar3 + _DAT_112e40ab0) = unaff_x20;
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



/* Entry: 101f22544; end: 101f2256b; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f22544(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f22388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f2256c; end: 101f225af; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f2256c(undefined8 param_1)

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



/* Entry: 101f225b0; end: 101f227b3;  */

void FUN_101f225b0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0fe4690)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f01b970,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000031;
        if (((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0fe4660)) &&
           (func_0x000107c605b8(0xd000000000000031,0x800000010f01b9a0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "LensCreatorProfileScopeGraphBridge/SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5c,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101f227b4);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55cd4();
        goto LAB_101f2263c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580a8();
  }
LAB_101f2263c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f227b4; end: 101f2285f; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f227b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f225b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f22860; end: 101f228d7; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22860(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e40b80,0);
  *(undefined8 *)(param_1 + _DAT_112e40b88) = 0;
  *(undefined8 *)(param_1 + _DAT_112e40b90) = 0;
  *(undefined8 *)(param_1 + _DAT_112e40b98) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f228d8; end: 101f2290b;  */

void FUN_101f228d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f2290c; end: 101f22963; -[SCLensCreatorProfileScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f22938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f2293c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f2290c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e40b80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e40b88));
  return;
}



/* Entry: 101f22964; end: 101f22983;  */

void FUN_101f22964(void)

{
  func_0x000107c61168(&PTR_PTR_112809cf0);
  return;
}



/* Entry: 101f22984; end: 101f229cb; -[SCSCLensCreatorProfileScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22984(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e40bc8;
  func_0x000107c61428(param_1 + _DAT_112e40bc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f229cc; end: 101f22a23; -[SCSCLensCreatorProfileScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f229cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e40bc8;
  func_0x000107c61428(param_1 + _DAT_112e40bc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f22a24; end: 101f22afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22a24(undefined8 param_1,long param_2)

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
    FUN_101f21bfc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e40ae0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f22afc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e40ae8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e40bd0);
    *(long **)(unaff_x20 + _DAT_112e40bd0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f22afc; end: 101f22b23; -[SCSCLensCreatorProfileScopedServicesSaberEntryPoint begin] */

void FUN_101f22afc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f22a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f22b24; end: 101f22c9b;  */

/* WARNING: Possible PIC construction at 0x000101f22b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f22c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f22b90) */
/* WARNING: Removing unreachable block (ram,0x000101f22c28) */
/* WARNING: Removing unreachable block (ram,0x000101f22c40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22b24(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e40bd0);
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



/* Entry: 101f22c9c; end: 101f22ca3;  */

void FUN_101f22c9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f22ca4; end: 101f22cd7; -[SCSCLensCreatorProfileScopedServicesSaberEntryPoint end] */

void FUN_101f22ca4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f22b24();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f22cd8; end: 101f22df7;  */

void FUN_101f22cd8(long param_1,long param_2,long param_3)

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
                        "LensCreatorProfileScopeGraphBridge/SCSCLensCreatorProfileScopedServicesSaberEntryPoint.swift"
                        ,0x5c,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f22df8);
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



/* Entry: 101f22df8; end: 101f22ea3; -[SCSCLensCreatorProfileScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f22df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f22cd8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f22ea4; end: 101f22f03; -[SCSCLensCreatorProfileScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22ea4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e40bc8,0);
  *(undefined8 *)(param_1 + _DAT_112e40bd0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f22f04; end: 101f22f37;  */

void FUN_101f22f04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f22f38; end: 101f22f6f; -[SCSCLensCreatorProfileScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22f38(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e40bc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e40bd0));
  return;
}



/* Entry: 101f22f70; end: 101f22f8f;  */

void FUN_101f22f70(void)

{
  func_0x000107c61168(&PTR_PTR_112809dc0);
  return;
}



/* Entry: 101f22f90; end: 101f22ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22f90(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f23384();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e40c08) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f22ffc; end: 101f23067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f22ffc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e40c08) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f23068; end: 101f230c7; -[_TtC43ProgressOverlayScopedFactoryServiceProvider31SCProgressOverlayScopedServices init] */

void FUN_101f23068(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ProgressOverlayScopedFactoryServiceProvider.SCProgressOverlayScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f23094);
  (*pcVar1)();
}



/* Entry: 101f230c8; end: 101f230d7; -[_TtC43ProgressOverlayScopedFactoryServiceProvider31SCProgressOverlayScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f230c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e40c08));
  return;
}



/* Entry: 101f230d8; end: 101f23143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f230d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104a01e0;
  func_0x000107c613fc(&UNK_1104a01e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f2341c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f23144; end: 101f231df;  */

void FUN_101f23144(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104a00f0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104a00f0;
  return;
}



/* Entry: 101f231e0; end: 101f23217;  */

void FUN_101f231e0(long *param_1)

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



/* Entry: 101f23218; end: 101f2321f;  */

undefined8 FUN_101f23218(void)

{
  return 0x1b;
}



/* Entry: 101f23220; end: 101f23353;  */

void FUN_101f23220(undefined8 *param_1)

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
  puVar1 = &UNK_1104a0208;
  func_0x000107c613fc(&UNK_1104a0208,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f233f4;
  func_0x00010058fa64(FUN_101f233f4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f23354; end: 101f23383;  */

undefined ** FUN_101f23354(void)

{
  return &PTR_DAT_113066e68;
}



/* Entry: 101f23384; end: 101f233a3;  */

void FUN_101f23384(void)

{
  func_0x000107c61168(&PTR_PTR_112809e80);
  return;
}



/* Entry: 101f233a4; end: 101f233f3;  */

undefined1  [16] FUN_101f233a4(void)

{
  return ZEXT816(0x1104a0140);
}



/* Entry: 101f233f4; end: 101f2341b;  */

void FUN_101f233f4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f2341c; end: 101f2341f;  */

void FUN_101f2341c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f23420; end: 101f2348b;  */

void FUN_101f23420(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e40c78,&UNK_10da2f3b0);
  func_0x000107c613fc();
  pcVar1 = FUN_101f2349c;
  func_0x0001000841fc(FUN_101f2349c,0);
  func_0x000100084214(&UNK_10da2f380,0x2d,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101f2348c; end: 101f2349b;  */

undefined1  [16] FUN_101f2348c(void)

{
  return ZEXT816(0x1104a0248);
}



/* Entry: 101f2349c; end: 101f2376f;  */

void FUN_101f2349c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e40c80,&UNK_10da2f3b8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101f24358();
  func_0x000100082720("ProgressOverlayScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e40c88,&UNK_10da2f3c0);
  func_0x000107c6157c(puVar1);
  pcVar3 = FUN_101f23770;
  func_0x0001000823a8(FUN_101f23770,puVar1);
  func_0x000100082720("SCProgressOverlayEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101f231e0;
  func_0x0001000823a8(FUN_101f231e0,0);
  func_0x000100082720("SCProgressOverlayScopedServicesCleanupRelayServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e40c90,&UNK_10da2f3d0);
  puVar5 = &UNK_1104a0268;
  func_0x000107c613fc(&UNK_1104a0268,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 **)(puVar5 + 0x18) = puVar2;
  *(code **)(puVar5 + 0x20) = pcVar3;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x101f23778;
  func_0x0001000823a8(0x101f23778,puVar5);
  func_0x000100082720("SCProgressOverlayScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e40c10,&UNK_10da2f170);
  func_0x000107c6157c(uVar8);
  uVar6 = 0x101f23784;
  func_0x0001000823a8(0x101f23784,uVar8);
  func_0x000100082720("SCProgressOverlayScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e40c00,&UNK_10da2f160);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f2378c;
  func_0x0001000823a8(0x101f2378c,uVar6);
  func_0x000100082720("SCProgressOverlayScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104a0290;
  func_0x000107c613fc(&UNK_1104a0290,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101f23794;
  func_0x0001000823a8(0x101f23794,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCProgressOverlayScopeEntryPointProvider",0x28,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101f23770; end: 101f2379b;  */

void FUN_101f23770(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_101f23a64();
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126a9a58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f01bca0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101f2379c; end: 101f23877;  */

void FUN_101f2379c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_101f23a64();
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126a9a58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f01bca0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f23878; end: 101f23933;  */

long FUN_101f23878(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126a9a58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f01bca0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 101f23934; end: 101f23957;  */

void FUN_101f23934(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f23958; end: 101f2395f;  */

undefined8 FUN_101f23958(void)

{
  return 0x1b;
}



/* Entry: 101f23960; end: 101f239e3;  */

void FUN_101f23960(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f23aa4,param_2,FUN_101f23aa8,param_2,FUN_101f23ad0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f239e4; end: 101f23a33;  */

undefined8 FUN_101f239e4(void)

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



/* Entry: 101f23a34; end: 101f23a63;  */

void FUN_101f23a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104a02a8;
  return;
}



/* Entry: 101f23a64; end: 101f23a83;  */

void FUN_101f23a64(void)

{
  func_0x000107c61168(&PTR_PTR_112e40d00);
  return;
}



/* Entry: 101f23a84; end: 101f23aa7;  */

undefined1  [16] FUN_101f23a84(void)

{
  return ZEXT816(0x1104a02e8);
}



/* Entry: 101f23aa8; end: 101f23acf;  */

void FUN_101f23aa8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}


