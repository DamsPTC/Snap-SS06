/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102171a3c; end: 102171abf;  */

void FUN_102171a3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102171b80,param_2,FUN_102171b84,param_2,FUN_102171bac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102171ac0; end: 102171b0f;  */

undefined8 FUN_102171ac0(void)

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



/* Entry: 102171b10; end: 102171b3f;  */

undefined ** FUN_102171b10(void)

{
  return &PTR_DAT_112f234a0;
}



/* Entry: 102171b40; end: 102171b5f;  */

void FUN_102171b40(void)

{
  func_0x000107c61168(&PTR_PTR_112e5d8f8);
  return;
}



/* Entry: 102171b60; end: 102171b83;  */

undefined1  [16] FUN_102171b60(void)

{
  return ZEXT816(0x1104d5720);
}



/* Entry: 102171b84; end: 102171bab;  */

void FUN_102171b84(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102171bac; end: 102171bb3;  */

undefined8 FUN_102171bac(void)

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



/* Entry: 102171bb4; end: 102171bef;  */

void FUN_102171bb4(undefined8 *param_1,undefined8 param_2)

{
  FUN_102171bf0();
  func_0x0001000a7f38("SCMemoriesBackupUIScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102171bf0; end: 102171ddb;  */

void FUN_102171bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105de850;
  ppuVar4 = &PTR_DAT_112f234a0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104d5770;
  func_0x000107c613fc(&UNK_1104d5770,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e5da58;
  func_0x0001000285a8(0x112e5da58,&UNK_10da64768);
  func_0x0001000a6ee8(&UNK_1104d5990,"MemoriesBackupUIScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_102171ddc,puVar2,uVar3,&UNK_1104d5990,&PTR_DAT_112e5daf0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104d5720,
                      "SCMemoriesBackupUIEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_102171e90,param_3,uVar3,&UNK_1104d5720,&PTR_DAT_112e5d890);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104d5798;
  func_0x000107c613fc(&UNK_1104d5798,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104d5540,"SCMemoriesBackupUIScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_102171f40,puVar2,uVar3,&UNK_1104d5540,&PTR_DAT_112e5d800);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e5da60;
  func_0x0001000285a8(0x112e5da60,&UNK_10da64770);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102171ddc; end: 102171e1b;  */

void FUN_102171ddc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102172708(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MemoriesBackupUIScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102171e1c; end: 102171e8f;  */

void FUN_102171e1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102171f7c;
  func_0x0001000823a8(0x102171f7c,param_3);
  func_0x000100082720("SCMemoriesBackupUIEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 102171e90; end: 102171e97;  */

void FUN_102171e90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102171f7c;
  func_0x0001000823a8();
  func_0x000100082720("SCMemoriesBackupUIEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 102171e98; end: 102171f3f;  */

void FUN_102171e98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104d57c0;
  func_0x000107c613fc(&UNK_1104d57c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102171f74;
  func_0x0001000823a8(FUN_102171f74,puVar1);
  func_0x000100082720("SCMemoriesBackupUIScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102171f40; end: 102171f47;  */

void FUN_102171f40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104d57c0;
  func_0x000107c613fc(&UNK_1104d57c0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102171f74;
  func_0x0001000823a8(FUN_102171f74,puVar3);
  func_0x000100082720("SCMemoriesBackupUIScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102171f48; end: 102171f73;  */

void FUN_102171f48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102171f74; end: 102171f83;  */

void FUN_102171f74(undefined8 *param_1)

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
  puVar1 = &UNK_1104d55c8;
  func_0x000107c613fc(&UNK_1104d55c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10216e8b4;
  func_0x00010058fa64(FUN_10216e8b4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102171f84; end: 10217205f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102171f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_102172398();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e5da68) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e5da70) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102172060);
  (*pcVar1)();
}



/* Entry: 102172060; end: 1021720bf; -[_TtC32MemoriesBackupUIScopeGraphBridge47MemoriesBackupUIScopeGraphBridgeSaberEntryPoint init] */

void FUN_102172060(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesBackupUIScopeGraphBridge.MemoriesBackupUIScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10217208c);
  (*pcVar1)();
}



/* Entry: 1021720c0; end: 1021720f7; -[_TtC32MemoriesBackupUIScopeGraphBridge47MemoriesBackupUIScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021720dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021720e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021720c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5da68));
  return;
}



/* Entry: 1021720f8; end: 10217211f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021720f8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e5da70),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e5da68));
  return;
}



/* Entry: 102172120; end: 10217213f;  */

void FUN_102172120(void)

{
  func_0x000107c61168(&PTR_PTR_112821ef0);
  return;
}



/* Entry: 102172140; end: 1021721c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102172140(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5daa0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e5daa8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021721c8);
  (*pcVar2)();
}



/* Entry: 1021721c8; end: 1021722af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021721c8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5daa0);
  *(undefined **)(unaff_x20 + _DAT_112e5daa0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5daa8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e5daa8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104d58b0;
  func_0x000107c613fc(&UNK_1104d58b0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1021722b4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021722b0; end: 1021722bb;  */

void FUN_1021722b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021722bc; end: 10217231b; -[_TtC32MemoriesBackupUIScopeGraphBridge47SCMemoriesBackupUIScopedServicesSaberEntryPoint init] */

void FUN_1021722bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesBackupUIScopeGraphBridge.SCMemoriesBackupUIScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021722e8);
  (*pcVar1)();
}



/* Entry: 10217231c; end: 102172353; -[_TtC32MemoriesBackupUIScopeGraphBridge47SCMemoriesBackupUIScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217231c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5daa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5daa0));
  return;
}



/* Entry: 102172354; end: 102172357;  */

void FUN_102172354(void)

{
  return;
}



/* Entry: 102172358; end: 102172377;  */

void FUN_102172358(void)

{
  FUN_1021721c8();
  return;
}



/* Entry: 102172378; end: 102172397;  */

void FUN_102172378(void)

{
  func_0x000107c61168(&PTR_PTR_112821fb8);
  return;
}



/* Entry: 102172398; end: 102172467;  */

undefined8 FUN_102172398(void)

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
  
  func_0x000107c61428(0x112e5dad8,&uStack_40,0x20,0);
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
    FUN_102172468();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102172468; end: 102172487;  */

void FUN_102172468(void)

{
  func_0x000107c61168(&PTR_PTR_112822080);
  return;
}



/* Entry: 102172488; end: 1021724a3;  */

void FUN_102172488(undefined8 param_1)

{
  func_0x0001000285a8(0x112e5dae0,&UNK_10da64838);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102172510,param_1);
  return;
}



/* Entry: 1021724a4; end: 10217250f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021724a4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102172468();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e5dae8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102172510; end: 102172517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102172510(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102172468();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e5dae8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102172518; end: 102172563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102172518(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5dae8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102172564; end: 1021725c3; -[_TtC32MemoriesBackupUIScopeGraphBridge40MemoriesBackupUIScopeGraphBridgeServices init] */

void FUN_102172564(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesBackupUIScopeGraphBridge.MemoriesBackupUIScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102172590);
  (*pcVar1)();
}



/* Entry: 1021725c4; end: 1021725d3; -[_TtC32MemoriesBackupUIScopeGraphBridge40MemoriesBackupUIScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021725c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5dae8));
  return;
}



/* Entry: 1021725d4; end: 10217265f;  */

void FUN_1021725d4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102172614,0);
  return;
}



/* Entry: 102172660; end: 10217267b;  */

void FUN_102172660(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021726cc,param_1);
  return;
}



/* Entry: 10217267c; end: 1021726cb;  */

void FUN_10217267c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1021726cc; end: 1021726ff;  */

void FUN_1021726cc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102172700; end: 102172707;  */

undefined8 FUN_102172700(void)

{
  return 0x1b;
}



/* Entry: 102172708; end: 10217287f;  */

void FUN_102172708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104d58f8;
  func_0x000107c613fc(&UNK_1104d58f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102172880,puVar1);
  return;
}



/* Entry: 102172880; end: 102172887;  */

void FUN_102172880(undefined8 *param_1)

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
  func_0x000107c61428(0x112e5dad8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e5dad8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104d59d0;
  func_0x000107c613fc(&UNK_1104d59d0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102172954;
  func_0x00010058fa64(0x102172954,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102172888; end: 1021728e3;  */

void FUN_102172888(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e5dad8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e5dad8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1021728e4; end: 10217295b;  */

undefined ** FUN_1021728e4(void)

{
  return &PTR_DAT_112f234a0;
}



/* Entry: 10217295c; end: 1021729a3; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217295c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5db40;
  func_0x000107c61428(param_1 + _DAT_112e5db40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021729a4; end: 1021729fb; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021729a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5db40;
  func_0x000107c61428(param_1 + _DAT_112e5db40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021729fc; end: 102172a43; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint sCMemoriesSnapVideoFilterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021729fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5db48;
  func_0x000107c61428(param_1 + _DAT_112e5db48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102172a44; end: 102172a4f; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint setSCMemoriesSnapVideoFilterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102172a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5db48;
  func_0x000107c61428(param_1 + _DAT_112e5db48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102172a50; end: 102172a97; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint memoriesBackupUIScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102172a50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5db50;
  func_0x000107c61428(param_1 + _DAT_112e5db50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102172a98; end: 102172aa3; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint setMemoriesBackupUIScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102172a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5db50;
  func_0x000107c61428(param_1 + _DAT_112e5db50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102172aa4; end: 102172b03;  */

void FUN_102172aa4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102172b04; end: 102172cbf;  */

/* WARNING: Possible PIC construction at 0x000102172c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102172c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102172c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102172c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102172c54) */
/* WARNING: Removing unreachable block (ram,0x000102172c44) */
/* WARNING: Removing unreachable block (ram,0x000102172c20) */
/* WARNING: Removing unreachable block (ram,0x000102172c98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102172b04(void)

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
  func_0x000107c51074();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4cb30();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102172120();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_102172398();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102172cc0);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e5da68) = lVar5;
      *(long *)(lVar3 + _DAT_112e5da70) = unaff_x20;
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



/* Entry: 102172cc0; end: 102172ce7; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102172cc0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102172b04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102172ce8; end: 102172d2b; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint end] */

void FUN_102172ce8(undefined8 param_1)

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



/* Entry: 102172d2c; end: 102172f2f;  */

void FUN_102172d2c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f986c0)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f067940,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002f;
        if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f98690)) &&
           (func_0x000107c605b8(0xd00000000000002f,0x800000010f067970,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MemoriesBackupUIScopeGraphBridge/SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x58,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102172f30);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56518();
        goto LAB_102172db8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5861c();
  }
LAB_102172db8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102172f30; end: 102172fdb; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102172f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102172d2c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102172fdc; end: 102173053; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102172fdc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5db40,0);
  *(undefined8 *)(param_1 + _DAT_112e5db48) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5db50) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5db58) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102173054; end: 102173087;  */

void FUN_102173054(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102173088; end: 1021730df; -[SCMemoriesBackupUIScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021730b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021730b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102173088(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5db40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5db48));
  return;
}



/* Entry: 1021730e0; end: 1021730ff;  */

void FUN_1021730e0(void)

{
  func_0x000107c61168(&PTR_PTR_112822140);
  return;
}



/* Entry: 102173100; end: 102173147; -[SCSCMemoriesBackupUIScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102173100(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5db88;
  func_0x000107c61428(param_1 + _DAT_112e5db88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102173148; end: 10217319f; -[SCSCMemoriesBackupUIScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102173148(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5db88;
  func_0x000107c61428(param_1 + _DAT_112e5db88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021731a0; end: 102173277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021731a0(undefined8 param_1,long param_2)

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
    FUN_102172378();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e5daa0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102173278);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e5daa8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5db90);
    *(long **)(unaff_x20 + _DAT_112e5db90) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102173278; end: 10217329f; -[SCSCMemoriesBackupUIScopedServicesSaberEntryPoint begin] */

void FUN_102173278(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021731a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021732a0; end: 102173417;  */

/* WARNING: Possible PIC construction at 0x000102173308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021733a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010217330c) */
/* WARNING: Removing unreachable block (ram,0x0001021733a4) */
/* WARNING: Removing unreachable block (ram,0x0001021733bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021732a0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5db90);
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



/* Entry: 102173418; end: 10217341f;  */

void FUN_102173418(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102173420; end: 102173453; -[SCSCMemoriesBackupUIScopedServicesSaberEntryPoint end] */

void FUN_102173420(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021732a0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102173454; end: 102173573;  */

void FUN_102173454(long param_1,long param_2,long param_3)

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
                        "MemoriesBackupUIScopeGraphBridge/SCSCMemoriesBackupUIScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102173574);
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



/* Entry: 102173574; end: 10217361f; -[SCSCMemoriesBackupUIScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102173574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102173454(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102173620; end: 10217367f; -[SCSCMemoriesBackupUIScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102173620(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5db88,0);
  *(undefined8 *)(param_1 + _DAT_112e5db90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102173680; end: 1021736b3;  */

void FUN_102173680(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021736b4; end: 1021736eb; -[SCSCMemoriesBackupUIScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021736b4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5db88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5db90));
  return;
}



/* Entry: 1021736ec; end: 10217370b;  */

void FUN_1021736ec(void)

{
  func_0x000107c61168(&PTR_PTR_112822210);
  return;
}



/* Entry: 10217370c; end: 1021737a3;  */

void FUN_10217370c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d5ad8;
  func_0x000107c613fc(&UNK_1104d5ad8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021737a4,puVar1);
  return;
}



/* Entry: 1021737a4; end: 102173a57;  */

void FUN_1021737a4(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar7 = lStack_58;
  lVar2 = lStack_58;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126bf9e8;
    func_0x000107c610f8();
    func_0x000107c45db0();
    puVar4 = puVar3;
    func_0x000107c42ed8();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
    func_0x000107c4ecf4();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102173a54);
      (*pcVar1)();
    }
    puVar5 = puVar3;
    func_0x000107c426e0();
    func_0x000107c61170(puVar3);
    if ((int)puVar5 != 0) {
      puVar3 = puVar4;
      func_0x000107c4ecf4();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102173a58);
        (*pcVar1)();
      }
      puVar5 = puVar3;
      func_0x000107c4ed14();
      func_0x000107c61170(puVar3);
      if (0 < (int)puVar5) {
        func_0x000100083b20(&lStack_58);
        lVar7 = lStack_58;
        lVar6 = lStack_58;
        func_0x000107c4cba8();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        lVar7 = lVar6;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        if (lVar7 != 0) {
          func_0x000100083b20(&lStack_58);
          lVar6 = lStack_58;
          func_0x000107c444a4();
          func_0x000107c61180();
          func_0x000107c61170(lStack_58);
          lVar8 = lVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar8 != 0) {
            lVar6 = lVar8;
            func_0x000107c4cba0();
            func_0x000107c61180();
            func_0x000107c61170(lVar8);
            if (lVar6 == 0) {
              func_0x000107c61170(puVar4);
              func_0x000107c615e8(lVar7);
              func_0x000107c615e8(lVar2);
              uVar10 = 0;
            }
            else {
              uVar9 = 0;
              FUN_102173a68();
              func_0x000107c614e8();
              func_0x000107c615f0(lVar7);
              func_0x000107c61174(lVar6);
              func_0x000107c615f0(lVar2);
              func_0x000107c610f8();
              func_0x000107c463b8();
              func_0x000107c615e8(lVar2);
              func_0x000107c61170(lVar6);
              func_0x000107c615e8(lVar7);
              func_0x0001000a0a8c(0);
              uVar10 = uVar9;
              func_0x000104494b00();
              func_0x000107c615e8(lVar2);
              func_0x000107c61170(lVar6);
              func_0x000107c61170(puVar4);
              func_0x000107c615e8(lVar7);
              func_0x000107c61170(uVar9);
            }
            goto LAB_1021739f8;
          }
          func_0x000107c61170(puVar4);
          func_0x000107c615e8(lVar7);
          func_0x000107c615e8(lVar2);
          goto LAB_1021739f4;
        }
      }
    }
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar4);
  }
LAB_1021739f4:
  uVar10 = 0;
LAB_1021739f8:
  *param_1 = uVar10;
  return;
}



/* Entry: 102173a58; end: 102173a67;  */

undefined1  [16] FUN_102173a58(void)

{
  return ZEXT816(0x1104d5b00);
}



/* Entry: 102173a68; end: 102173aab;  */

void FUN_102173a68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5dbc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9fd0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e5dbc0 = puVar1;
  return;
}



/* Entry: 102173aac; end: 102173b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102173aac(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010028dafc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e5dbd0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102173b18; end: 102173b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102173b18(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010028dafc();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e5dbd0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102173b20; end: 102173b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102173b20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5dbd0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102173b6c; end: 102173bcb; -[_TtC35MemoriesThumbnailPackingServicesAPI32MemoriesThumbnailPackingServices init] */

void FUN_102173b6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesThumbnailPackingServicesAPI.MemoriesThumbnailPackingServices",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102173b98);
  (*pcVar1)();
}



/* Entry: 102173bcc; end: 102173bdb;  */

undefined1  [16] FUN_102173bcc(void)

{
  return ZEXT816(0x1104d5ba0);
}



/* Entry: 102173bdc; end: 102173c0b; -[_TtC35MemoriesThumbnailPackingServicesAPI32MemoriesThumbnailPackingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102173bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5dbd0));
  return;
}



/* Entry: 102173c0c; end: 102173c97;  */

void FUN_102173c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  piVar3 = *(int **)(param_4 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102173c98;
                    /* WARNING: Could not recover jumptable at 0x000102173c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,1,param_3,param_4);
  return;
}



/* Entry: 102173c98; end: 102173cff;  */

void FUN_102173c98(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102173cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102173d00,0,0);
  return;
}



/* Entry: 102173d00; end: 102173dd7;  */

void FUN_102173d00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x28);
  if (puVar3[2] != 0) {
    uVar1 = puVar3[4];
    uVar2 = puVar3[5];
    func_0x00010006c00c(uVar1,uVar2);
    func_0x000107c6142c(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000102173d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c6142c();
  FUN_101e2373c();
  func_0x000107c613f8(&UNK_1104d5c78,puVar3,0,0);
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 1;
  func_0x000107c61654();
  func_0x00010006c00c(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102173dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102173dd8; end: 102173e67;  */

void FUN_102173dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_5 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102173e68;
                    /* WARNING: Could not recover jumptable at 0x000102173e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 102173e68; end: 102173ecf;  */

void FUN_102173e68(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x10));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102173eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102173ed0,0,0);
  return;
}



/* Entry: 102173ed0; end: 1021740af;  */

void FUN_102173ed0(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x22;
  ulong uVar11;
  undefined8 *puVar12;
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(unaff_x22 + 0x18);
  uVar10 = *(ulong *)(lVar7 + 0x10);
  if (uVar10 == 0) {
    func_0x000107c6142c(lVar7);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    FUN_102174274(0,uVar10,0);
    uVar11 = 0;
    puVar12 = (undefined8 *)(lVar7 + 0x28);
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021740b0);
        (*pcVar4)();
      }
      puVar1 = (undefined8 *)puVar12[-1];
      uVar3 = *puVar12;
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x00010006c00c(puVar1,uVar3);
      puVar6 = puVar1;
      func_0x000107c5ee20(puVar1,uVar3);
      func_0x000107c4635c();
      func_0x000107c61170();
      if (puVar5 == (undefined *)0x0) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
        FUN_101e2373c();
        func_0x000107c613f8(&UNK_1104d5c78,puVar6,0,0);
        *puVar6 = puVar1;
        puVar6[1] = uVar3;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 2;
        func_0x000107c61654();
        func_0x000107c6142c(uVar8);
        func_0x000107c61574(puVar9);
                    /* WARNING: Could not recover jumptable at 0x000102174070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      func_0x00010006c090(puVar1,uVar3);
      uVar2 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        FUN_102174274(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar9 + uVar2 * 8 + 0x20) = puVar5;
      puVar12 = puVar12 + 2;
    } while (uVar10 != uVar11);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x0001021740a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar9);
  return;
}



/* Entry: 1021740b0; end: 102174123;  */

void FUN_1021740b0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102174124;
  plVar3[2] = param_1;
  plVar3[3] = param_2;
  piVar4 = *(int **)(param_4 + 8);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  plVar3[4] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_102173c98;
                    /* WARNING: Could not recover jumptable at 0x000102173c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(param_1,param_2,1,param_3,param_4);
  return;
}



/* Entry: 102174124; end: 10217418b;  */

void FUN_102174124(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x10));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102174168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10217418c,0,0);
  return;
}



/* Entry: 10217418c; end: 102174273;  */

void FUN_10217418c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c5ee20(puVar4,uVar1);
  func_0x000107c4635c();
  func_0x000107c61170();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102174218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar3);
    return;
  }
  FUN_101e2373c();
  func_0x000107c613f8(&UNK_1104d5c78,puVar4,0,0);
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 2;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102174270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102174274; end: 10217428f;  */

void FUN_102174274(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102174290();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102174290; end: 1021743b3;  */

undefined * FUN_102174290(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1021743b4);
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
    puVar3 = param_1;
    func_0x000100f95d40();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000100de1f70(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1021743b4; end: 1021743c3;  */

void FUN_1021743b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1021743c4; end: 1021743ef;  */

long FUN_1021743c4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1021743f0; end: 10217442b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1021743f0(ulong param_1,ulong param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  
  if (3 < param_4) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 10217442c; end: 1021744f3;  */

undefined8 * FUN_10217442c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_1021743f0(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}


