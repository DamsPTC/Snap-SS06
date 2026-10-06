/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ca9904; end: 102ca990b;  */

undefined8 FUN_102ca9904(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102cabddc();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 102ca990c; end: 102ca9947;  */

void FUN_102ca990c(undefined8 *param_1,undefined8 param_2)

{
  FUN_102ca9948();
  func_0x0001000a7f38("OperaPageViewScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102ca9948; end: 102ca9b33;  */

void FUN_102ca9948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cdd0;
  ppuVar4 = &PTR_DAT_1130666d0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f09d88;
  func_0x0001000285a8(0x112f09d88,&UNK_10db3cb00);
  func_0x0001000a6ee8(&UNK_1105bcf98,"OperaPageViewEntryPointWrapperScopeInitializationPluginKey",
                      0x3a,2,FUN_102ca9ba8,param_1,uVar2,&UNK_1105bcf98,&PTR_DAT_112f09ca8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1105bcfe8;
  func_0x000107c613fc(&UNK_1105bcfe8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105bd218,"OperaPageViewScopeGraphBridgeScopeInitializationPluginKey",
                      0x39,2,FUN_102ca9bb0,puVar3,uVar2,&UNK_1105bd218,&PTR_DAT_112f09e58);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105bd010;
  func_0x000107c613fc(&UNK_1105bd010,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105bcde8,"OperaPageViewScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_102ca9c98,puVar3,uVar2,&UNK_1105bcde8,&PTR_DAT_112f09c20);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f09d90;
  func_0x0001000285a8(0x112f09d90,&UNK_10db3cb08);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102ca9b34; end: 102ca9ba7;  */

void FUN_102ca9b34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102ca9cd4;
  func_0x0001000823a8(0x102ca9cd4,param_3);
  func_0x000100082720("OperaPageViewEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ca9ba8; end: 102ca9baf;  */

void FUN_102ca9ba8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102ca9cd4;
  func_0x0001000823a8();
  func_0x000100082720("OperaPageViewEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ca9bb0; end: 102ca9bef;  */

void FUN_102ca9bb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102caa588(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("OperaPageViewScopeGraphBridgeScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ca9bf0; end: 102ca9c97;  */

void FUN_102ca9bf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105bd038;
  func_0x000107c613fc(&UNK_1105bd038,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102ca9ccc;
  func_0x0001000823a8(FUN_102ca9ccc,puVar1);
  func_0x000100082720("OperaPageViewScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102ca9c98; end: 102ca9c9f;  */

void FUN_102ca9c98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105bd038;
  func_0x000107c613fc(&UNK_1105bd038,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102ca9ccc;
  func_0x0001000823a8(FUN_102ca9ccc,puVar3);
  func_0x000100082720("OperaPageViewScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102ca9ca0; end: 102ca9ccb;  */

void FUN_102ca9ca0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ca9ccc; end: 102ca9cdb;  */

void FUN_102ca9ccc(undefined8 *param_1)

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
  puVar1 = &UNK_1105bce70;
  func_0x000107c613fc(&UNK_1105bce70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102ca9060;
  func_0x00010058fa64(FUN_102ca9060,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102ca9cdc; end: 102ca9d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ca9cdc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102caa254();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f09d98) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f09da0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ca9d64);
  (*pcVar1)();
}



/* Entry: 102ca9d64; end: 102ca9dc3; -[_TtC29OperaPageViewScopeGraphBridge44OperaPageViewScopeGraphBridgeSaberEntryPoint init] */

void FUN_102ca9d64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaPageViewScopeGraphBridge.OperaPageViewScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ca9d90);
  (*pcVar1)();
}



/* Entry: 102ca9dc4; end: 102ca9dfb; -[_TtC29OperaPageViewScopeGraphBridge44OperaPageViewScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ca9de0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca9de4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca9dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f09d98));
  return;
}



/* Entry: 102ca9dfc; end: 102ca9e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca9dfc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f09da0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f09d98));
  return;
}



/* Entry: 102ca9e24; end: 102ca9e43;  */

void FUN_102ca9e24(void)

{
  func_0x000107c61168(&PTR_PTR_11289c860);
  return;
}



/* Entry: 102ca9e44; end: 102ca9edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ca9e44(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f09e50);
  *(undefined8 *)(unaff_x20 + _DAT_112f09dd0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f09dd8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102ca9ee0; end: 102ca9f3f; -[_TtC29OperaPageViewScopeGraphBridge36OperaPageViewServicesSaberEntryPoint init] */

void FUN_102ca9ee0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaPageViewScopeGraphBridge.OperaPageViewServicesSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ca9f0c);
  (*pcVar1)();
}



/* Entry: 102ca9f40; end: 102ca9fd3; -[_TtC29OperaPageViewScopeGraphBridge36OperaPageViewServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca9f40(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f09dd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f09dd8));
  return;
}



/* Entry: 102ca9fd4; end: 102ca9fdb;  */

undefined8 FUN_102ca9fd4(void)

{
  return 0;
}



/* Entry: 102ca9fdc; end: 102ca9ffb;  */

void FUN_102ca9fdc(void)

{
  func_0x000107c61168(&PTR_PTR_11289c928);
  return;
}



/* Entry: 102ca9ffc; end: 102caa083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ca9ffc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f09e08) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f09e10);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102caa084);
  (*pcVar2)();
}



/* Entry: 102caa084; end: 102caa16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102caa084(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f09e08);
  *(undefined **)(unaff_x20 + _DAT_112f09e08) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f09e10);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f09e10))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105bd178;
  func_0x000107c613fc(&UNK_1105bd178,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102caa170,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102caa16c; end: 102caa177;  */

void FUN_102caa16c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102caa178; end: 102caa1d7; -[_TtC29OperaPageViewScopeGraphBridge42OperaPageViewScopedServicesSaberEntryPoint init] */

void FUN_102caa178(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaPageViewScopeGraphBridge.OperaPageViewScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102caa1a4);
  (*pcVar1)();
}



/* Entry: 102caa1d8; end: 102caa20f; -[_TtC29OperaPageViewScopeGraphBridge42OperaPageViewScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caa1d8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f09e10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f09e08));
  return;
}



/* Entry: 102caa210; end: 102caa213;  */

void FUN_102caa210(void)

{
  return;
}



/* Entry: 102caa214; end: 102caa233;  */

void FUN_102caa214(void)

{
  FUN_102caa084();
  return;
}



/* Entry: 102caa234; end: 102caa253;  */

void FUN_102caa234(void)

{
  func_0x000107c61168(&PTR_PTR_11289c9f0);
  return;
}



/* Entry: 102caa254; end: 102caa323;  */

undefined8 FUN_102caa254(void)

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
  
  func_0x000107c61428(0x112f09e40,&uStack_40,0x20,0);
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
    FUN_102caa324();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102caa324; end: 102caa343;  */

void FUN_102caa324(void)

{
  func_0x000107c61168(&PTR_PTR_11289cab8);
  return;
}



/* Entry: 102caa344; end: 102caa38f;  */

void FUN_102caa344(undefined8 param_1)

{
  func_0x0001000285a8(0x112f09e48,&UNK_10db3cbf8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102caa3fc,param_1);
  return;
}



/* Entry: 102caa390; end: 102caa3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caa390(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102caa324();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f09e50) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102caa3fc; end: 102caa403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caa3fc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102caa324();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f09e50) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102caa404; end: 102caa44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caa404(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f09e50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102caa450; end: 102caa4af; -[_TtC29OperaPageViewScopeGraphBridge37OperaPageViewScopeGraphBridgeServices init] */

void FUN_102caa450(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaPageViewScopeGraphBridge.OperaPageViewScopeGraphBridgeServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102caa47c);
  (*pcVar1)();
}



/* Entry: 102caa4b0; end: 102caa4bf; -[_TtC29OperaPageViewScopeGraphBridge37OperaPageViewScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caa4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f09e50));
  return;
}



/* Entry: 102caa4c0; end: 102caa4f3; -[OperaPageViewScope operaPageViewScopeGraphBridgeServices] */

void FUN_102caa4c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caa254();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102caa4f4; end: 102caa57f; -[OperaPageViewScope setOperaPageViewScopeGraphBridgeServices:] */

void FUN_102caa4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112f09e40,auStack_48,0x20,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61188();
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102caa580; end: 102caa587;  */

undefined8 FUN_102caa580(void)

{
  return 0x1b;
}



/* Entry: 102caa588; end: 102caa6ff;  */

void FUN_102caa588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105bd1c0;
  func_0x000107c613fc(&UNK_1105bd1c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102caa700,puVar1);
  return;
}



/* Entry: 102caa700; end: 102caa707;  */

void FUN_102caa700(undefined8 *param_1)

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
  func_0x000107c61428(0x112f09e40,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f09e40,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105bd258;
  func_0x000107c613fc(&UNK_1105bd258,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102caa7b4;
  func_0x00010058fa64(0x102caa7b4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102caa708; end: 102caa763;  */

void FUN_102caa708(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f09e40,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f09e40,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102caa764; end: 102caa7bb;  */

undefined ** FUN_102caa764(void)

{
  return &PTR_DAT_1130666d0;
}



/* Entry: 102caa7bc; end: 102caa803; -[SCOperaPageViewScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caa7bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f09ea8;
  func_0x000107c61428(param_1 + _DAT_112f09ea8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102caa804; end: 102caa85b; -[SCOperaPageViewScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caa804(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f09ea8;
  func_0x000107c61428(param_1 + _DAT_112f09ea8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102caa85c; end: 102caa8a3; -[SCOperaPageViewScopeGraphBridgeSaberEntryPoint operaPageViewScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caa85c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f09eb0;
  func_0x000107c61428(param_1 + _DAT_112f09eb0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102caa8a4; end: 102caa907; -[SCOperaPageViewScopeGraphBridgeSaberEntryPoint setOperaPageViewScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caa8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f09eb0;
  func_0x000107c61428(param_1 + _DAT_112f09eb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102caa908; end: 102caaa3b;  */

/* WARNING: Possible PIC construction at 0x000102caa9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102caa9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102caa9f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102caa9c4) */
/* WARNING: Removing unreachable block (ram,0x000102caa9e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caa908(void)

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
  func_0x000107c4df00();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102ca9e24();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102caa254();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102caaa3c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f09d98) = lVar5;
    *(long *)(lVar4 + _DAT_112f09da0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102caaa3c; end: 102caaa63; -[SCOperaPageViewScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102caaa3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102caa908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102caaa64; end: 102caaaa7; -[SCOperaPageViewScopeGraphBridgeSaberEntryPoint end] */

void FUN_102caaa64(undefined8 param_1)

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



/* Entry: 102caaaa8; end: 102caac3f;  */

void FUN_102caaaa8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0ef9cd0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f106330,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OperaPageViewScopeGraphBridge/SCOperaPageViewScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x52,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102caac40);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5701c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102caac40; end: 102caaceb; -[SCOperaPageViewScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102caac40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102caaaa8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102caacec; end: 102caad57; -[SCOperaPageViewScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caacec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f09ea8,0);
  *(undefined8 *)(param_1 + _DAT_112f09eb0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f09eb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102caad58; end: 102caad8b;  */

void FUN_102caad58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102caad8c; end: 102caadd3; -[SCOperaPageViewScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102caadb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102caadbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caad8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f09ea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f09eb0));
  return;
}



/* Entry: 102caadd4; end: 102caadf3;  */

void FUN_102caadd4(void)

{
  func_0x000107c61168(&PTR_PTR_11289cb78);
  return;
}



/* Entry: 102caadf4; end: 102caadff; -[SCOperaPageViewServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caadf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f09ee8;
  func_0x000107c61428(param_1 + _DAT_112f09ee8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102caae00; end: 102caae0b; -[SCOperaPageViewServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caae00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f09ee8;
  func_0x000107c61428(param_1 + _DAT_112f09ee8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102caae0c; end: 102caae17; -[SCOperaPageViewServicesSaberEntryPoint operaPageViewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caae0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f09ef0;
  func_0x000107c61428(param_1 + _DAT_112f09ef0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102caae18; end: 102caae5b;  */

void FUN_102caae18(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102caae5c; end: 102caae67; -[SCOperaPageViewServicesSaberEntryPoint setOperaPageViewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caae5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f09ef0;
  func_0x000107c61428(param_1 + _DAT_112f09ef0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102caae68; end: 102caaebb;  */

void FUN_102caae68(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102caaebc; end: 102caaf03; -[SCOperaPageViewServicesSaberEntryPoint operaPageViewServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caaebc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f09ef8;
  func_0x000107c61428(param_1 + _DAT_112f09ef8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102caaf04; end: 102caaf67; -[SCOperaPageViewServicesSaberEntryPoint setOperaPageViewServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caaf04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f09ef8;
  func_0x000107c61428(param_1 + _DAT_112f09ef8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102caaf68; end: 102cab0eb;  */

/* WARNING: Possible PIC construction at 0x000102cab068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cab078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cab094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cab06c) */
/* WARNING: Removing unreachable block (ram,0x000102cab07c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caaf68(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4defc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4df04();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102ca9fdc();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f09e50);
        *(undefined8 *)(lVar2 + _DAT_112f09dd0) = uVar6;
        *(long *)(lVar2 + _DAT_112f09dd8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f09dd8);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102cab0ec; end: 102cab113; -[SCOperaPageViewServicesSaberEntryPoint begin] */

void FUN_102cab0ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102caaf68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cab114; end: 102cab157; -[SCOperaPageViewServicesSaberEntryPoint end] */

void FUN_102cab114(undefined8 param_1)

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



/* Entry: 102cab158; end: 102cab35b;  */

void FUN_102cab158(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000025;
    if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef0ef9c40)) ||
       (func_0x000107c605b8(0xd000000000000025,0x800000010f1063c0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57018();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0ef9c10)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001c,0x800000010f1063f0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "OperaPageViewScopeGraphBridge/SCOperaPageViewServicesSaberEntryPoint.swift"
                              ,0x4a,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102cab35c);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57020();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102cab35c; end: 102cab407; -[SCOperaPageViewServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102cab35c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102cab158(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102cab408; end: 102cab487; -[SCOperaPageViewServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cab408(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f09ee8,0);
  func_0x000107c61614(param_1 + _DAT_112f09ef0,0);
  *(undefined8 *)(param_1 + _DAT_112f09ef8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f09f00) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cab488; end: 102cab4bb;  */

void FUN_102cab488(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cab4bc; end: 102cab513; -[SCOperaPageViewServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cab4f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cab4fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cab4bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f09ee8);
  func_0x000107c61610(param_1 + _DAT_112f09ef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f09ef8));
  return;
}



/* Entry: 102cab514; end: 102cab533;  */

void FUN_102cab514(void)

{
  func_0x000107c61168(&PTR_PTR_11289cc40);
  return;
}



/* Entry: 102cab534; end: 102cab57b; -[SCOperaPageViewScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cab534(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f09f30;
  func_0x000107c61428(param_1 + _DAT_112f09f30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cab57c; end: 102cab5d3; -[SCOperaPageViewScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cab57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f09f30;
  func_0x000107c61428(param_1 + _DAT_112f09f30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102cab5d4; end: 102cab6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cab5d4(undefined8 param_1,long param_2)

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
    FUN_102caa234();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f09e08) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cab6ac);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f09e10);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f09f38);
    *(long **)(unaff_x20 + _DAT_112f09f38) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102cab6ac; end: 102cab6d3; -[SCOperaPageViewScopedServicesSaberEntryPoint begin] */

void FUN_102cab6ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cab5d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cab6d4; end: 102cab84b;  */

/* WARNING: Possible PIC construction at 0x000102cab73c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cab7d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cab740) */
/* WARNING: Removing unreachable block (ram,0x000102cab7d8) */
/* WARNING: Removing unreachable block (ram,0x000102cab7f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cab6d4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f09f38);
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



/* Entry: 102cab84c; end: 102cab853;  */

void FUN_102cab84c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102cab854; end: 102cab887; -[SCOperaPageViewScopedServicesSaberEntryPoint end] */

void FUN_102cab854(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cab6d4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cab888; end: 102cab9a7;  */

void FUN_102cab888(long param_1,long param_2,long param_3)

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
                        "OperaPageViewScopeGraphBridge/SCOperaPageViewScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cab9a8);
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



/* Entry: 102cab9a8; end: 102caba53; -[SCOperaPageViewScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102cab9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102cab888(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102caba54; end: 102cabab3; -[SCOperaPageViewScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caba54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f09f30,0);
  *(undefined8 *)(param_1 + _DAT_112f09f38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cabab4; end: 102cabae7;  */

void FUN_102cabab4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cabae8; end: 102cabb1f; -[SCOperaPageViewScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cabae8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f09f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f09f38));
  return;
}



/* Entry: 102cabb20; end: 102cabb3f;  */

void FUN_102cabb20(void)

{
  func_0x000107c61168(&PTR_PTR_11289cd10);
  return;
}



/* Entry: 102cabb40; end: 102cabb83;  */

void FUN_102cabb40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 102cabb84; end: 102cabb93;  */

void FUN_102cabb84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 102cabb94; end: 102cabd77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cabb94(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar9 = 0x112f09f68;
  func_0x0001000285a8(0x112f09f68,&UNK_10db3cdb0);
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x000102cac870(0,0,0,0);
  uVar4 = 0x112f09f70;
  uStack_60 = uVar9;
  FUN_102cabd78(0x112f09f70,&DAT_10db3cf1c);
  auStack_78[0] = uVar3;
  uStack_58 = uVar4;
  FUN_102cac750(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  puVar5 = auStack_78;
  func_0x000102cac670(puVar5);
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113078b58);
  uVar4 = 0x112f09f78;
  uStack_60 = uVar9;
  FUN_102cabd78(0x112f09f78,&DAT_10db3cf38);
  lVar6 = 0;
  auStack_78[0] = uVar3;
  uStack_58 = uVar4;
  func_0x000102cac038();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar8;
  FUN_102cabdc4(auStack_78,lVar6 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  *(long *)(unaff_x20 + 0x28) = lVar6;
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar8);
  func_0x000107c61574(uVar9);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  if (lVar6 == 0) {
    func_0x000107c61170(puVar5);
    func_0x000107c61574(uVar3);
  }
  else {
    func_0x000107c6157c(lVar6);
    FUN_102cabf08();
    lVar2 = _DAT_113078ae0;
    lVar7 = *(long *)(lVar6 + 0x10);
    func_0x000107c61428(lVar7 + _DAT_113078ae0,auStack_78,0,0);
    lVar7 = lVar7 + lVar2;
    func_0x000107c61618();
    if (lVar7 == 0) {
      func_0x000107c61574(lVar6);
    }
    else {
      func_0x000107c4def0();
      func_0x000107c61574(lVar6);
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c61574(uVar3);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 102cabd78; end: 102cabdc3;  */

void FUN_102cabd78(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0x112f09f68;
    func_0x00010002969c(0x112f09f68,&UNK_10db3cdb0);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102cabdc4; end: 102cabddb;  */

undefined8 * FUN_102cabdc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102cabddc; end: 102cabe67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cabddc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113078ae0;
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    func_0x000107c61428(lVar3 + _DAT_113078ae0,auStack_48,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c6157c(lVar2);
      func_0x000107c4def4(lVar3);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar3);
    }
  }
  return 0;
}



/* Entry: 102cabe68; end: 102cabea3;  */

void FUN_102cabe68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102cabea4; end: 102cabee7;  */

void FUN_102cabea4(void)

{
  FUN_102cabb94();
  return;
}



/* Entry: 102cabee8; end: 102cabf07;  */

void FUN_102cabee8(void)

{
  func_0x000107c61168(&PTR_PTR_112f09fc0);
  return;
}



/* Entry: 102cabf08; end: 102cac003;  */

/* WARNING: Possible PIC construction at 0x000102cabfb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cabfb4) */
/* WARNING: Removing unreachable block (ram,0x000102cabfb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cabf08(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  func_0x0001000a8868(unaff_x20 + 0x20,lVar6);
  (**(code **)(lVar2 + 0x10))(lVar6,lVar2);
  lVar6 = *(long *)(lVar6 + 0x10);
  func_0x000107c6142c();
  if (lVar6 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113078ad8) + _DAT_113078aa0);
    uVar5 = *puVar1;
    uVar4 = puVar1[1];
    func_0x000107c61434(uVar4);
    func_0x000107c5fadc(uVar5,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c4e9d8(uVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 102cac004; end: 102cac057;  */

void FUN_102cac004(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_102cac59c(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102cac058; end: 102cac48b;  */

undefined * FUN_102cac058(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  long unaff_x20;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  undefined *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [32];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar12 = *(long *)(unaff_x20 + 0x40);
  func_0x0001000a8868(unaff_x20 + 0x20,lVar5);
  (**(code **)(lVar12 + 0x10))(lVar5,lVar12);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  uVar17 = *(ulong *)(lVar5 + 0x10);
  func_0x000107c61434();
  puStack_108 = puVar6;
  if (uVar17 != 0) {
    uVar13 = 0;
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x102cac47c);
        (*pcVar19)();
      }
      puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar13 * 0x10);
      uVar13 = uVar13 + 1;
      uVar3 = *puVar1;
      lVar12 = puVar1[1];
      uVar7 = uVar3;
      func_0x000107c614f0(uVar3);
      pcVar19 = *(code **)(lVar12 + 8);
      func_0x000107c615f0(uVar3);
      lVar8 = param_1;
      (*pcVar19)(param_1,uVar7,lVar12);
      puVar18 = puStack_108;
      func_0x000107c61558();
      uVar14 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
      uVar21 = 0xffffffffffffffff;
      if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
        uVar21 = ~(-1L << (uVar14 & 0x3f));
      }
      uVar21 = uVar21 & *(ulong *)(lVar8 + 0x40);
      uVar14 = uVar14 + 0x3f >> 6;
      puStack_70 = puStack_108;
      func_0x000107c61434(lVar8);
      lVar12 = 0;
LAB_102cac244:
      if (uVar21 == 0) {
        uVar21 = uVar14;
        if ((long)uVar14 <= lVar12 + 1) {
          uVar21 = lVar12 + 1;
        }
        lVar15 = uVar21 - 1;
        lVar20 = lVar12;
        do {
          lVar12 = lVar20 + 1;
          if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x102cac470);
            (*pcVar19)();
          }
          if ((long)uVar14 <= lVar12) {
            uVar21 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            goto LAB_102cac2c4;
          }
          uVar21 = ((ulong *)(lVar8 + 0x40))[lVar12];
          lVar20 = lVar20 + 1;
        } while (uVar21 == 0);
      }
      uVar11 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar21 - 1 & uVar21;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar12 << 6;
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x10);
      uStack_d0 = *puVar1;
      uVar7 = puVar1[1];
      uStack_c8 = uVar7;
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar11 * 0x20,&uStack_c0);
      func_0x000107c61434(uVar7);
      lVar15 = lVar12;
LAB_102cac2c4:
      func_0x000102cac554(&uStack_d0,&uStack_100,0x112d74040,&UNK_10d934650);
      uVar4 = uStack_f8;
      uVar11 = uStack_100;
      if (uStack_f8 != 0) {
        func_0x0001000bb420(auStack_f0,&uStack_90);
        uStack_a0 = uVar11;
        uStack_98 = uVar4;
        func_0x000107c61434(uVar4);
        func_0x000102cac514(&uStack_100,0x112da9f08,&UNK_10da55920);
        func_0x000102cac514(&uStack_d0,0x112d74040,&UNK_10d934650);
        uVar4 = uStack_98;
        uVar11 = uStack_a0;
        if (uStack_98 == 0) goto LAB_102cac110;
        func_0x000100102924(&uStack_90,&uStack_d0);
        uVar9 = uVar11;
        uVar10 = uVar4;
        func_0x000100029284();
        uVar16 = (ulong)~(uint)uVar10 & 1;
        lVar12 = *(long *)(puStack_108 + 0x10) + uVar16;
        if (SCARRY8(*(long *)(puStack_108 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x102cac474);
          (*pcVar19)();
        }
        if (*(long *)(puStack_108 + 0x18) < lVar12) {
          func_0x000100102b0c(lVar12,(uint)puVar18 & 1);
          uVar9 = uVar11;
          uVar16 = uVar4;
          func_0x000100029284();
          if (((uint)uVar10 & 1) != ((uint)uVar16 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x102cac48c);
            (*pcVar19)();
          }
joined_r0x000102cac430:
          if ((uVar10 & 1) != 0) goto LAB_102cac1f4;
LAB_102cac3bc:
          puVar18 = puStack_70;
          puStack_108 = puStack_70;
          *(ulong *)(puStack_70 + (uVar9 >> 6) * 8 + 0x40) =
               *(ulong *)(puStack_70 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
          puVar2 = (ulong *)(*(long *)(puStack_70 + 0x30) + uVar9 * 0x10);
          *puVar2 = uVar11;
          puVar2[1] = uVar4;
          func_0x000100102924(&uStack_d0,*(long *)(puStack_70 + 0x38) + uVar9 * 0x20);
          lVar12 = *(long *)(puVar18 + 0x10);
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x102cac478);
            (*pcVar19)();
          }
          *(long *)(puVar18 + 0x10) = lVar12 + 1;
        }
        else {
          if (((ulong)puVar18 & 1) == 0) {
            func_0x0001010fc388();
            goto joined_r0x000102cac430;
          }
          if ((uVar10 & 1) == 0) goto LAB_102cac3bc;
LAB_102cac1f4:
          puStack_108 = puStack_70;
          func_0x0001000bb420(&uStack_d0,&uStack_100);
          func_0x000107c6142c(uVar4);
          FUN_102cac59c(&uStack_d0);
          lVar12 = *(long *)(puStack_108 + 0x38) + uVar9 * 0x20;
          FUN_102cac59c(lVar12);
          func_0x000100102924(&uStack_100,lVar12);
        }
        puVar18 = (undefined *)0x1;
        lVar12 = lVar15;
        goto LAB_102cac244;
      }
      func_0x000102cac514(&uStack_d0,0x112d74040,&UNK_10d934650);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
LAB_102cac110:
      func_0x000107c615e8(uVar3);
      func_0x000107c61574(lVar8);
      func_0x000107c6142c(lVar8);
    } while (uVar13 != uVar17);
  }
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(lVar5);
  return puStack_108;
}



/* Entry: 102cac48c; end: 102cac513; -[_TtC17OperaPageViewImpl21OperaPageViewWorkflow pagePropertiesForDataModel:] */

void FUN_102cac48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_102cac058(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  uVar2 = uVar1;
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102cac514; end: 102cac59b;  */

undefined8 FUN_102cac514(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}


