/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028a788c; end: 1028a78af;  */

void FUN_1028a788c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028a78b0; end: 1028a78b7;  */

undefined8 FUN_1028a78b0(void)

{
  return 0x1b;
}



/* Entry: 1028a78b8; end: 1028a793b;  */

void FUN_1028a78b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028a79fc,param_2,FUN_1028a7a00,param_2,FUN_1028a7a28,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028a793c; end: 1028a798b;  */

undefined8 FUN_1028a793c(void)

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



/* Entry: 1028a798c; end: 1028a79bb;  */

void FUN_1028a798c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110560a28;
  return;
}



/* Entry: 1028a79bc; end: 1028a79db;  */

void FUN_1028a79bc(void)

{
  func_0x000107c61168(&PTR_PTR_112ec7450);
  return;
}



/* Entry: 1028a79dc; end: 1028a79ff;  */

undefined1  [16] FUN_1028a79dc(void)

{
  return ZEXT816(0x110560a68);
}



/* Entry: 1028a7a00; end: 1028a7a27;  */

void FUN_1028a7a00(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028a7a28; end: 1028a7a2f;  */

undefined8 FUN_1028a7a28(void)

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



/* Entry: 1028a7a30; end: 1028a7a6b;  */

void FUN_1028a7a30(undefined8 *param_1,undefined8 param_2)

{
  FUN_1028a7a6c();
  func_0x0001000a7f38("SCUnreadMessageAlertScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = param_2;
  return;
}



/* Entry: 1028a7a6c; end: 1028a7c57;  */

void FUN_1028a7a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dde8;
  ppuVar4 = &PTR_DAT_113067078;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ec74b0;
  func_0x0001000285a8(0x112ec74b0,&UNK_10dae9a88);
  func_0x0001000a6ee8(&UNK_110560a68,
                      "SCUnreadMessageAlertEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_1028a7ccc,param_1,uVar2,&UNK_110560a68,&PTR_DAT_112ec73e8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110560ab8;
  func_0x000107c613fc(&UNK_110560ab8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110560900,
                      "SCUnreadMessageAlertScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_1028a7d7c,puVar3,uVar2,&UNK_110560900,&PTR_DAT_112ec7368);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110560ae0;
  func_0x000107c613fc(&UNK_110560ae0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110560cc8,
                      "UnreadMessageAlertScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_1028a7d84,puVar3,uVar2,&UNK_110560cc8,&PTR_DAT_112ec7540);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ec74b8;
  func_0x0001000285a8(0x112ec74b8,&UNK_10dae9a90);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1028a7c58; end: 1028a7ccb;  */

void FUN_1028a7c58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1028a7df8;
  func_0x0001000823a8(0x1028a7df8,param_3);
  func_0x000100082720("SCUnreadMessageAlertEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a7ccc; end: 1028a7cd3;  */

void FUN_1028a7ccc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1028a7df8;
  func_0x0001000823a8();
  func_0x000100082720("SCUnreadMessageAlertEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a7cd4; end: 1028a7d7b;  */

void FUN_1028a7cd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110560b08;
  func_0x000107c613fc(&UNK_110560b08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1028a7df0;
  func_0x0001000823a8(FUN_1028a7df0,puVar1);
  func_0x000100082720("SCUnreadMessageAlertScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1028a7d7c; end: 1028a7d83;  */

void FUN_1028a7d7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110560b08;
  func_0x000107c613fc(&UNK_110560b08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1028a7df0;
  func_0x0001000823a8(FUN_1028a7df0,puVar3);
  func_0x000100082720("SCUnreadMessageAlertScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1028a7d84; end: 1028a7dc3;  */

void FUN_1028a7d84(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028a8394(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("UnreadMessageAlertScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a7dc4; end: 1028a7def;  */

void FUN_1028a7dc4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028a7df0; end: 1028a7dff;  */

void FUN_1028a7df0(undefined8 *param_1)

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
  puVar1 = &UNK_110560988;
  func_0x000107c613fc(&UNK_110560988,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028a730c;
  func_0x00010058fa64(FUN_1028a730c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028a7e00; end: 1028a7e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028a7e00(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1028a81c0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ec74c0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ec74c8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a7e88);
  (*pcVar1)();
}



/* Entry: 1028a7e88; end: 1028a7ee7; -[_TtC34UnreadMessageAlertScopeGraphBridge49UnreadMessageAlertScopeGraphBridgeSaberEntryPoint init] */

void FUN_1028a7e88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnreadMessageAlertScopeGraphBridge.UnreadMessageAlertScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a7eb4);
  (*pcVar1)();
}



/* Entry: 1028a7ee8; end: 1028a7f1f; -[_TtC34UnreadMessageAlertScopeGraphBridge49UnreadMessageAlertScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028a7f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a7f08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a7ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec74c0));
  return;
}



/* Entry: 1028a7f20; end: 1028a7f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a7f20(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ec74c8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ec74c0));
  return;
}



/* Entry: 1028a7f48; end: 1028a7f67;  */

void FUN_1028a7f48(void)

{
  func_0x000107c61168(&PTR_PTR_11286a090);
  return;
}



/* Entry: 1028a7f68; end: 1028a7fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028a7f68(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec74f8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ec7500);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a7ff0);
  (*pcVar2)();
}



/* Entry: 1028a7ff0; end: 1028a80d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028a7ff0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec74f8);
  *(undefined **)(unaff_x20 + _DAT_112ec74f8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec7500);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec7500))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110560c28;
  func_0x000107c613fc(&UNK_110560c28,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1028a80dc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1028a80d8; end: 1028a80e3;  */

void FUN_1028a80d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028a80e4; end: 1028a8143; -[_TtC34UnreadMessageAlertScopeGraphBridge49SCUnreadMessageAlertScopedServicesSaberEntryPoint init] */

void FUN_1028a80e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnreadMessageAlertScopeGraphBridge.SCUnreadMessageAlertScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a8110);
  (*pcVar1)();
}



/* Entry: 1028a8144; end: 1028a817b; -[_TtC34UnreadMessageAlertScopeGraphBridge49SCUnreadMessageAlertScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a8144(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7500));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec74f8));
  return;
}



/* Entry: 1028a817c; end: 1028a817f;  */

void FUN_1028a817c(void)

{
  return;
}



/* Entry: 1028a8180; end: 1028a819f;  */

void FUN_1028a8180(void)

{
  FUN_1028a7ff0();
  return;
}



/* Entry: 1028a81a0; end: 1028a81bf;  */

void FUN_1028a81a0(void)

{
  func_0x000107c61168(&PTR_PTR_11286a158);
  return;
}



/* Entry: 1028a81c0; end: 1028a828f;  */

undefined8 FUN_1028a81c0(void)

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
  
  func_0x000107c61428(0x112ec7530,&uStack_40,0x20,0);
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
    FUN_1028a8290();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1028a8290; end: 1028a82af;  */

void FUN_1028a8290(void)

{
  func_0x000107c61168(&PTR_PTR_11286a220);
  return;
}



/* Entry: 1028a82b0; end: 1028a831b;  */

void FUN_1028a82b0(void)

{
  func_0x0001000285a8(0x112ec7538,&UNK_10dae9b68);
  func_0x0001000823a8(0x1028a82f0,0);
  return;
}



/* Entry: 1028a831c; end: 1028a8357; -[_TtC34UnreadMessageAlertScopeGraphBridge42UnreadMessageAlertScopeGraphBridgeServices init] */

void FUN_1028a831c(undefined8 param_1)

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



/* Entry: 1028a8358; end: 1028a838b;  */

void FUN_1028a8358(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a838c; end: 1028a8393;  */

undefined8 FUN_1028a838c(void)

{
  return 0x1b;
}



/* Entry: 1028a8394; end: 1028a850b;  */

void FUN_1028a8394(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110560c70;
  func_0x000107c613fc(&UNK_110560c70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028a850c,puVar1);
  return;
}



/* Entry: 1028a850c; end: 1028a8513;  */

void FUN_1028a850c(undefined8 *param_1)

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
  func_0x000107c61428(0x112ec7530,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ec7530,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110560d08;
  func_0x000107c613fc(&UNK_110560d08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1028a85c0;
  func_0x00010058fa64(0x1028a85c0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028a8514; end: 1028a856f;  */

void FUN_1028a8514(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ec7530,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ec7530,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1028a8570; end: 1028a85c7;  */

undefined ** FUN_1028a8570(void)

{
  return &PTR_DAT_113067078;
}



/* Entry: 1028a85c8; end: 1028a860f; -[SCUnreadMessageAlertScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a85c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec7590;
  func_0x000107c61428(param_1 + _DAT_112ec7590,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a8610; end: 1028a8667; -[SCUnreadMessageAlertScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a8610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec7590;
  func_0x000107c61428(param_1 + _DAT_112ec7590,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028a8668; end: 1028a86af; -[SCUnreadMessageAlertScopeGraphBridgeSaberEntryPoint unreadMessageAlertScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a8668(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec7598;
  func_0x000107c61428(param_1 + _DAT_112ec7598,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028a86b0; end: 1028a8713; -[SCUnreadMessageAlertScopeGraphBridgeSaberEntryPoint setUnreadMessageAlertScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a86b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec7598;
  func_0x000107c61428(param_1 + _DAT_112ec7598,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028a8714; end: 1028a8847;  */

/* WARNING: Possible PIC construction at 0x0001028a87cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a87e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a8804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a87d0) */
/* WARNING: Removing unreachable block (ram,0x0001028a87ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a8714(void)

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
  func_0x000107c5d338();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1028a7f48();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1028a81c0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a8848);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ec74c0) = lVar5;
    *(long *)(lVar4 + _DAT_112ec74c8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1028a8848; end: 1028a886f; -[SCUnreadMessageAlertScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1028a8848(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028a8714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028a8870; end: 1028a88b3; -[SCUnreadMessageAlertScopeGraphBridgeSaberEntryPoint end] */

void FUN_1028a8870(undefined8 param_1)

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



/* Entry: 1028a88b4; end: 1028a8a4b;  */

void FUN_1028a88b4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0f39650)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f0c69b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "UnreadMessageAlertScopeGraphBridge/SCUnreadMessageAlertScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5c,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a8a4c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a1b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028a8a4c; end: 1028a8af7; -[SCUnreadMessageAlertScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1028a8a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028a88b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028a8af8; end: 1028a8b63; -[SCUnreadMessageAlertScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a8af8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec7590,0);
  *(undefined8 *)(param_1 + _DAT_112ec7598) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec75a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a8b64; end: 1028a8b97;  */

void FUN_1028a8b64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a8b98; end: 1028a8bdf; -[SCUnreadMessageAlertScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028a8bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a8bc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a8b98(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec7590);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec7598));
  return;
}



/* Entry: 1028a8be0; end: 1028a8bff;  */

void FUN_1028a8be0(void)

{
  func_0x000107c61168(&PTR_PTR_11286a2d0);
  return;
}



/* Entry: 1028a8c00; end: 1028a8c47; -[SCSCUnreadMessageAlertScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a8c00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec75d0;
  func_0x000107c61428(param_1 + _DAT_112ec75d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a8c48; end: 1028a8c9f; -[SCSCUnreadMessageAlertScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a8c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec75d0;
  func_0x000107c61428(param_1 + _DAT_112ec75d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028a8ca0; end: 1028a8d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a8ca0(undefined8 param_1,long param_2)

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
    FUN_1028a81a0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ec74f8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a8d78);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ec7500);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec75d8);
    *(long **)(unaff_x20 + _DAT_112ec75d8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1028a8d78; end: 1028a8d9f; -[SCSCUnreadMessageAlertScopedServicesSaberEntryPoint begin] */

void FUN_1028a8d78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028a8ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028a8da0; end: 1028a8f17;  */

/* WARNING: Possible PIC construction at 0x0001028a8e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a8ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a8e0c) */
/* WARNING: Removing unreachable block (ram,0x0001028a8ea4) */
/* WARNING: Removing unreachable block (ram,0x0001028a8ebc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a8da0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec75d8);
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



/* Entry: 1028a8f18; end: 1028a8f1f;  */

void FUN_1028a8f18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028a8f20; end: 1028a8f53; -[SCSCUnreadMessageAlertScopedServicesSaberEntryPoint end] */

void FUN_1028a8f20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028a8da0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028a8f54; end: 1028a9073;  */

void FUN_1028a8f54(long param_1,long param_2,long param_3)

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
                        "UnreadMessageAlertScopeGraphBridge/SCSCUnreadMessageAlertScopedServicesSaberEntryPoint.swift"
                        ,0x5c,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a9074);
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



/* Entry: 1028a9074; end: 1028a911f; -[SCSCUnreadMessageAlertScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028a9074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028a8f54(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028a9120; end: 1028a917f; -[SCSCUnreadMessageAlertScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9120(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec75d0,0);
  *(undefined8 *)(param_1 + _DAT_112ec75d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a9180; end: 1028a91b3;  */

void FUN_1028a9180(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a91b4; end: 1028a91eb; -[SCSCUnreadMessageAlertScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a91b4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec75d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec75d8));
  return;
}



/* Entry: 1028a91ec; end: 1028a920b;  */

void FUN_1028a91ec(void)

{
  func_0x000107c61168(&PTR_PTR_11286a398);
  return;
}



/* Entry: 1028a920c; end: 1028a922b; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a920c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7608);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a922c; end: 1028a923f; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a922c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7608,param_3);
  return;
}



/* Entry: 1028a9240; end: 1028a925f; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9240(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a9260; end: 1028a9273; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9260(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7610,param_3);
  return;
}



/* Entry: 1028a9274; end: 1028a9293; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin multiDirectionUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9274(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7618);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a9294; end: 1028a92a7; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin setMultiDirectionUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9294(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7618,param_3);
  return;
}



/* Entry: 1028a92a8; end: 1028a92b7; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a92a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7620));
  return;
}



/* Entry: 1028a92b8; end: 1028a92eb; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a92b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7620);
  *(undefined8 *)(param_1 + _DAT_112ec7620) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028a92ec; end: 1028a92fb; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a92ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7628));
  return;
}



/* Entry: 1028a92fc; end: 1028a932f; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a92fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7628);
  *(undefined8 *)(param_1 + _DAT_112ec7628) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028a9330; end: 1028a9403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ec7608,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ec7610,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ec7618,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec7620) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7628) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7630) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7638) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7640) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a9404; end: 1028a9543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9404(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3 + _DAT_112ec7608;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = param_3 + _DAT_112ec7618;
      func_0x000107c61618();
      if (lVar2 == 0) {
        func_0x000107c61170(param_3);
        param_3 = lVar1;
      }
      else {
        func_0x0001005138b4(0);
        func_0x000107c610f8();
        func_0x000107c61174(lVar1);
        func_0x000107c61434(param_2);
        func_0x000107c615f0(lVar2);
        lVar3 = param_3;
        func_0x000107c61174();
        lVar4 = lVar1;
        func_0x000103f580a0(lVar1,param_1,param_2,0,lVar2,param_3);
        func_0x000107c42c1c(*(undefined8 *)(lVar3 + _DAT_112ec7638));
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar2);
        param_3 = lVar4;
      }
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1028a9544; end: 1028a95b7; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028a9544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028a97f8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028a95b8; end: 1028a95cf; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028a95cc) */

void FUN_1028a95b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028a95d0; end: 1028a95d7; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin pluginType] */

undefined8 FUN_1028a95d0(void)

{
  return 0;
}



/* Entry: 1028a95d8; end: 1028a965b; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001028a9614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a9630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a9618) */
/* WARNING: Removing unreachable block (ram,0x0001028a9634) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a95d8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028a965c; end: 1028a96bb; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin init] */

void FUN_1028a965c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsInvitePlugin.PublicGroupsInvitePlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a9688);
  (*pcVar1)();
}



/* Entry: 1028a96bc; end: 1028a9753; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028a9728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a972c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a96bc(long param_1)

{
  func_0x000100d0d718(param_1 + _DAT_112ec7608);
  func_0x000100d0d718(param_1 + _DAT_112ec7610);
  func_0x000100d0d718(param_1 + _DAT_112ec7618);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7620));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7628));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec7630));
  return;
}



/* Entry: 1028a9754; end: 1028a9773;  */

void FUN_1028a9754(void)

{
  func_0x000107c61168(&PTR_PTR_11286a458);
  return;
}



/* Entry: 1028a9774; end: 1028a97f7; -[_TtC24PublicGroupsInvitePlugin24PublicGroupsInvitePlugin didDismissChatWithScope:] */

/* WARNING: Possible PIC construction at 0x0001028a97b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a97cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a97b4) */
/* WARNING: Removing unreachable block (ram,0x0001028a97d0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9774(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028a97f8; end: 1028a9b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028a97f8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec7640);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c404a8();
    if ((int)lVar2 == 5) {
      lVar2 = lVar3;
      func_0x000107c5a934();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a9b3c);
        (*pcVar1)();
      }
      lVar4 = lVar2;
      func_0x000107c5a960();
      func_0x000107c61170(lVar2);
      if ((int)lVar4 == 0x21) {
        lVar2 = lVar3;
        func_0x000107c5a934();
        func_0x000107c61180();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a9b40);
          (*pcVar1)();
        }
        lVar4 = lVar2;
        func_0x000107c4f5cc();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar4 != 0) {
          puVar5 = PTR_PTR_1126a6628;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar6 = PTR_PTR_1126b1588;
          func_0x000107c610f8(PTR_PTR_1126b1588);
          func_0x000107c453e4();
          func_0x000107c42650(*(undefined8 *)(unaff_x20 + _DAT_112ec7630));
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c43b74(puVar6);
          func_0x000107c61170(puVar7);
          func_0x000107c55894(puVar5);
          puVar7 = &UNK_110560e10;
          func_0x000107c613fc(&UNK_110560e10,0x18,7);
          func_0x000107c61614(puVar7 + 0x10);
          pcStack_70 = FUN_1028a9b48;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_100c75f50;
          puStack_78 = &UNK_110560e28;
          ppuVar8 = &puStack_90;
          puStack_68 = puVar7;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_68);
          func_0x000107c56ea0(puVar5);
          func_0x000107c60bd0(ppuVar8);
          lVar2 = lVar4;
          func_0x000107c40674();
          func_0x000107c61180();
          if (lVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a9b44);
            (*pcVar1)();
          }
          lVar9 = lVar2;
          func_0x000107c5cb4c();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          if (lVar9 != 0) {
            puVar7 = PTR_PTR_1126a6620;
            func_0x000107c610f8();
            func_0x000107c46194();
            func_0x000107c61170(lVar9);
            uVar13 = 0x112d672a0;
            uVar10 = 0;
            FUN_1028a9b6c(0,0x112d672a0,&PTR_PTR_1126a6618);
            func_0x000107c614e8();
            func_0x000107c3ff48();
            func_0x000107c61180();
            uVar11 = uVar10;
            func_0x000107c5faec();
            func_0x000107c61170(uVar10);
            uVar10 = 0;
            FUN_1028a9b6c(0,0x112ec7670,&PTR_PTR_1126a6620);
            uVar12 = 0;
            puStack_90 = puVar7;
            puStack_78 = (undefined *)uVar10;
            FUN_1028a9b6c(0,0x112ec7678,&PTR_PTR_1126a6628);
            apuStack_b0[0] = puVar5;
            uStack_98 = uVar12;
            func_0x000107c610f8(PTR_PTR_1126c67d8);
            func_0x000107c61174(puVar7);
            func_0x000107c61174(puVar5);
            FUN_1027efbc4(uVar11,uVar13,&puStack_90,apuStack_b0);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar6);
            return uVar11;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a9b48);
          (*pcVar1)();
        }
      }
    }
    func_0x000107c61170(lVar3);
  }
  return 0;
}



/* Entry: 1028a9b48; end: 1028a9b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9b48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ec7608;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar1 + _DAT_112ec7618;
      func_0x000107c61618();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        func_0x0001005138b4(0);
        func_0x000107c610f8();
        func_0x000107c61174(lVar2);
        func_0x000107c61434(param_2);
        func_0x000107c615f0(lVar3);
        lVar4 = lVar1;
        func_0x000107c61174();
        lVar5 = lVar2;
        func_0x000103f580a0(lVar2,param_1,param_2,0,lVar3,lVar1);
        func_0x000107c42c1c(*(undefined8 *)(lVar4 + _DAT_112ec7638));
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(lVar3);
        lVar1 = lVar5;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1028a9b6c; end: 1028a9bab;  */

void FUN_1028a9b6c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028a9bac; end: 1028a9daf;  */

void FUN_1028a9bac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110560e60;
  func_0x000107c613fc(&UNK_110560e60,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028a9db0,puVar1);
  return;
}



/* Entry: 1028a9db0; end: 1028a9dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9db0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lStack_48;
  lVar1 = lStack_48;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c4f5d0();
    if ((int)lVar1 != 0) {
      func_0x000100083b20(&lStack_48);
      lVar1 = lStack_48;
      uVar4 = 0x112ec7680;
      func_0x0001000285a8(0x112ec7680,&UNK_10dae9e00);
      func_0x000107c610f8();
      func_0x00010017da58(lVar1,uVar4);
      puVar2 = PTR_PTR_1126a73e0;
      func_0x000107c610f8(PTR_PTR_1126a73e0);
      func_0x000107c4907c();
      func_0x000107c61170(lVar1);
      func_0x000107c61174(puVar2);
      func_0x000100083b20(&lStack_48);
      uVar4 = *(undefined8 *)(lStack_48 + _DAT_11301aef0);
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lStack_48);
      FUN_1028a9754(0);
      func_0x000107c610f8();
      FUN_1028a9330(lVar3,puVar2,uVar4);
      func_0x000107c61170(puVar2);
      goto LAB_1028a9d94;
    }
    func_0x000107c615e8(lVar3);
  }
  lVar3 = 0;
LAB_1028a9d94:
  *param_1 = lVar3;
  return;
}



/* Entry: 1028a9dcc; end: 1028a9deb; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9dcc(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7688);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a9dec; end: 1028a9dff; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9dec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7688,param_3);
  return;
}



/* Entry: 1028a9e00; end: 1028a9e1f; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9e00(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7690);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a9e20; end: 1028a9e33; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9e20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7690,param_3);
  return;
}



/* Entry: 1028a9e34; end: 1028a9e53; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin multiDirectionUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9e34(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7698);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a9e54; end: 1028a9e67; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin setMultiDirectionUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9e54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7698,param_3);
  return;
}



/* Entry: 1028a9e68; end: 1028a9e77; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec76a0));
  return;
}



/* Entry: 1028a9e78; end: 1028a9eab; -[_TtC30PublicGroupsMessageSharePlugin30PublicGroupsMessageSharePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a9e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec76a0);
  *(undefined8 *)(param_1 + _DAT_112ec76a0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


