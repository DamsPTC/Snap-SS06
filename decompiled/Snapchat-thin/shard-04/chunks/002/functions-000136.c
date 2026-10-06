/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031c7a0c; end: 1031c7a2b;  */

void FUN_1031c7a0c(void)

{
  func_0x000107c61168(&PTR_PTR_112f49ee0);
  return;
}



/* Entry: 1031c7a2c; end: 1031c7a4f;  */

undefined1  [16] FUN_1031c7a2c(void)

{
  return ZEXT816(0x11061e1a8);
}



/* Entry: 1031c7a50; end: 1031c7a77;  */

void FUN_1031c7a50(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1031c7a78; end: 1031c7a7f;  */

undefined8 FUN_1031c7a78(void)

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



/* Entry: 1031c7a80; end: 1031c7abb;  */

void FUN_1031c7a80(undefined8 *param_1,undefined8 param_2)

{
  FUN_1031c7abc();
  func_0x0001000a7f38("SCContactSupportScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1031c7abc; end: 1031c7ca7;  */

void FUN_1031c7abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d190;
  ppuVar4 = &PTR_DAT_113066910;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11061e1f8;
  func_0x000107c613fc(&UNK_11061e1f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f49f58;
  func_0x0001000285a8(0x112f49f58,&UNK_10db981d8);
  func_0x0001000a6ee8(&UNK_11061e408,"ContactSupportScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_1031c7ca8,puVar2,uVar3,&UNK_11061e408,&PTR_DAT_112f49fe8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11061e1a8,
                      "SCContactSupportScopeEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_1031c7d5c,param_3,uVar3,&UNK_11061e1a8,&PTR_DAT_112f49e78);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11061e220;
  func_0x000107c613fc(&UNK_11061e220,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11061dfc8,"SCContactSupportScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_1031c7e0c,puVar2,uVar3,&UNK_11061dfc8,&PTR_DAT_112f49df8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f49f60;
  func_0x0001000285a8(0x112f49f60,&UNK_10db981e0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1031c7ca8; end: 1031c7ce7;  */

void FUN_1031c7ca8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1031c83e4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContactSupportScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c7ce8; end: 1031c7d5b;  */

void FUN_1031c7ce8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1031c7e48;
  func_0x0001000823a8(0x1031c7e48,param_3);
  func_0x000100082720("SCContactSupportScopeEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c7d5c; end: 1031c7d63;  */

void FUN_1031c7d5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1031c7e48;
  func_0x0001000823a8();
  func_0x000100082720("SCContactSupportScopeEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c7d64; end: 1031c7e0b;  */

void FUN_1031c7d64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061e248;
  func_0x000107c613fc(&UNK_11061e248,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1031c7e40;
  func_0x0001000823a8(FUN_1031c7e40,puVar1);
  func_0x000100082720("SCContactSupportScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1031c7e0c; end: 1031c7e13;  */

void FUN_1031c7e0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11061e248;
  func_0x000107c613fc(&UNK_11061e248,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1031c7e40;
  func_0x0001000823a8(FUN_1031c7e40,puVar3);
  func_0x000100082720("SCContactSupportScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1031c7e14; end: 1031c7e3f;  */

void FUN_1031c7e14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031c7e40; end: 1031c7e4f;  */

void FUN_1031c7e40(undefined8 *param_1)

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
  puVar1 = &UNK_11061e050;
  func_0x000107c613fc(&UNK_11061e050,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031c6fc0;
  func_0x00010058fa64(FUN_1031c6fc0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031c7e50; end: 1031c7ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031c7e50(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1031c8210();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f49f68) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f49f70) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c7ed8);
  (*pcVar1)();
}



/* Entry: 1031c7ed8; end: 1031c7f37; -[_TtC30ContactSupportScopeGraphBridge45ContactSupportScopeGraphBridgeSaberEntryPoint init] */

void FUN_1031c7ed8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactSupportScopeGraphBridge.ContactSupportScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c7f04);
  (*pcVar1)();
}



/* Entry: 1031c7f38; end: 1031c7f6f; -[_TtC30ContactSupportScopeGraphBridge45ContactSupportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031c7f54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c7f58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c7f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49f68));
  return;
}



/* Entry: 1031c7f70; end: 1031c7f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c7f70(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f49f70),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f49f68));
  return;
}



/* Entry: 1031c7f98; end: 1031c7fb7;  */

void FUN_1031c7f98(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0668);
  return;
}



/* Entry: 1031c7fb8; end: 1031c803f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031c7fb8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f49fa0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f49fa8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c8040);
  (*pcVar2)();
}



/* Entry: 1031c8040; end: 1031c8127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031c8040(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f49fa0);
  *(undefined **)(unaff_x20 + _DAT_112f49fa0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f49fa8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f49fa8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11061e368;
  func_0x000107c613fc(&UNK_11061e368,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1031c812c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1031c8128; end: 1031c8133;  */

void FUN_1031c8128(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031c8134; end: 1031c8193; -[_TtC30ContactSupportScopeGraphBridge45SCContactSupportScopedServicesSaberEntryPoint init] */

void FUN_1031c8134(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactSupportScopeGraphBridge.SCContactSupportScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c8160);
  (*pcVar1)();
}



/* Entry: 1031c8194; end: 1031c81cb; -[_TtC30ContactSupportScopeGraphBridge45SCContactSupportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8194(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f49fa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49fa0));
  return;
}



/* Entry: 1031c81cc; end: 1031c81cf;  */

void FUN_1031c81cc(void)

{
  return;
}



/* Entry: 1031c81d0; end: 1031c81ef;  */

void FUN_1031c81d0(void)

{
  FUN_1031c8040();
  return;
}



/* Entry: 1031c81f0; end: 1031c820f;  */

void FUN_1031c81f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0730);
  return;
}



/* Entry: 1031c8210; end: 1031c82df;  */

undefined8 FUN_1031c8210(void)

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
  
  func_0x000107c61428(0x112f49fd8,&uStack_40,0x20,0);
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
    FUN_1031c82e0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1031c82e0; end: 1031c82ff;  */

void FUN_1031c82e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c07f8);
  return;
}



/* Entry: 1031c8300; end: 1031c836b;  */

void FUN_1031c8300(void)

{
  func_0x0001000285a8(0x112f49fe0,&UNK_10db98298);
  func_0x0001000823a8(0x1031c8340,0);
  return;
}



/* Entry: 1031c836c; end: 1031c83a7; -[_TtC30ContactSupportScopeGraphBridge38ContactSupportScopeGraphBridgeServices init] */

void FUN_1031c836c(undefined8 param_1)

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



/* Entry: 1031c83a8; end: 1031c83db;  */

void FUN_1031c83a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031c83dc; end: 1031c83e3;  */

undefined8 FUN_1031c83dc(void)

{
  return 0x1b;
}



/* Entry: 1031c83e4; end: 1031c855b;  */

void FUN_1031c83e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061e3b0;
  func_0x000107c613fc(&UNK_11061e3b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1031c855c,puVar1);
  return;
}



/* Entry: 1031c855c; end: 1031c8563;  */

void FUN_1031c855c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f49fd8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f49fd8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11061e448;
  func_0x000107c613fc(&UNK_11061e448,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1031c8610;
  func_0x00010058fa64(0x1031c8610,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031c8564; end: 1031c85bf;  */

void FUN_1031c8564(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f49fd8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f49fd8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1031c85c0; end: 1031c8617;  */

undefined ** FUN_1031c85c0(void)

{
  return &PTR_DAT_113066910;
}



/* Entry: 1031c8618; end: 1031c865f; -[SCContactSupportScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8618(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a038;
  func_0x000107c61428(param_1 + _DAT_112f4a038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031c8660; end: 1031c86b7; -[SCContactSupportScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8660(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a038;
  func_0x000107c61428(param_1 + _DAT_112f4a038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031c86b8; end: 1031c86ff; -[SCContactSupportScopeGraphBridgeSaberEntryPoint contactSupportScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c86b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a040;
  func_0x000107c61428(param_1 + _DAT_112f4a040,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031c8700; end: 1031c8763; -[SCContactSupportScopeGraphBridgeSaberEntryPoint setContactSupportScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a040;
  func_0x000107c61428(param_1 + _DAT_112f4a040,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031c8764; end: 1031c8897;  */

/* WARNING: Possible PIC construction at 0x0001031c881c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031c8838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031c8854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c8820) */
/* WARNING: Removing unreachable block (ram,0x0001031c883c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8764(void)

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
  func_0x000107c40338();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1031c7f98();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1031c8210();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c8898);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f49f68) = lVar5;
    *(long *)(lVar4 + _DAT_112f49f70) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1031c8898; end: 1031c88bf; -[SCContactSupportScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1031c8898(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031c8764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031c88c0; end: 1031c8903; -[SCContactSupportScopeGraphBridgeSaberEntryPoint end] */

void FUN_1031c88c0(undefined8 param_1)

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



/* Entry: 1031c8904; end: 1031c8a9b;  */

void FUN_1031c8904(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0ed2000)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f12e000,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContactSupportScopeGraphBridge/SCContactSupportScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x54,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c8a9c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c537b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1031c8a9c; end: 1031c8b47; -[SCContactSupportScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1031c8a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031c8904(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031c8b48; end: 1031c8bb3; -[SCContactSupportScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8b48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4a038,0);
  *(undefined8 *)(param_1 + _DAT_112f4a040) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4a048) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031c8bb4; end: 1031c8be7;  */

void FUN_1031c8bb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031c8be8; end: 1031c8c2f; -[SCContactSupportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031c8c14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c8c18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8be8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4a038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a040));
  return;
}



/* Entry: 1031c8c30; end: 1031c8c4f;  */

void FUN_1031c8c30(void)

{
  func_0x000107c61168(&PTR_PTR_1128c08a8);
  return;
}



/* Entry: 1031c8c50; end: 1031c8c97; -[SCSCContactSupportScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8c50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a078;
  func_0x000107c61428(param_1 + _DAT_112f4a078,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031c8c98; end: 1031c8cef; -[SCSCContactSupportScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a078;
  func_0x000107c61428(param_1 + _DAT_112f4a078,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031c8cf0; end: 1031c8dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8cf0(undefined8 param_1,long param_2)

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
    FUN_1031c81f0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f49fa0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c8dc8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f49fa8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4a080);
    *(long **)(unaff_x20 + _DAT_112f4a080) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1031c8dc8; end: 1031c8def; -[SCSCContactSupportScopedServicesSaberEntryPoint begin] */

void FUN_1031c8dc8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031c8cf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031c8df0; end: 1031c8f67;  */

/* WARNING: Possible PIC construction at 0x0001031c8e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031c8ef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c8e5c) */
/* WARNING: Removing unreachable block (ram,0x0001031c8ef4) */
/* WARNING: Removing unreachable block (ram,0x0001031c8f0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c8df0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4a080);
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



/* Entry: 1031c8f68; end: 1031c8f6f;  */

void FUN_1031c8f68(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031c8f70; end: 1031c8fa3; -[SCSCContactSupportScopedServicesSaberEntryPoint end] */

void FUN_1031c8f70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031c8df0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031c8fa4; end: 1031c90c3;  */

void FUN_1031c8fa4(long param_1,long param_2,long param_3)

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
                        "ContactSupportScopeGraphBridge/SCSCContactSupportScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c90c4);
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



/* Entry: 1031c90c4; end: 1031c916f; -[SCSCContactSupportScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1031c90c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031c8fa4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031c9170; end: 1031c91cf; -[SCSCContactSupportScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c9170(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4a078,0);
  *(undefined8 *)(param_1 + _DAT_112f4a080) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031c91d0; end: 1031c9203;  */

void FUN_1031c91d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031c9204; end: 1031c923b; -[SCSCContactSupportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c9204(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4a078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a080));
  return;
}



/* Entry: 1031c923c; end: 1031c925b;  */

void FUN_1031c923c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0970);
  return;
}



/* Entry: 1031c925c; end: 1031c92c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c925c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1031c9650();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f4a0b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1031c92c8; end: 1031c9333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c92c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4a0b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031c9334; end: 1031c9393; -[_TtC41ContactUpsellScopedFactoryServiceProvider29SCContactUpsellScopedServices init] */

void FUN_1031c9334(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactUpsellScopedFactoryServiceProvider.SCContactUpsellScopedServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c9360);
  (*pcVar1)();
}



/* Entry: 1031c9394; end: 1031c93a3; -[_TtC41ContactUpsellScopedFactoryServiceProvider29SCContactUpsellScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c9394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4a0b8));
  return;
}



/* Entry: 1031c93a4; end: 1031c940f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c93a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11061e660;
  func_0x000107c613fc(&UNK_11061e660,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1031c96e8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031c9410; end: 1031c94ab;  */

void FUN_1031c9410(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061e570;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061e570;
  return;
}



/* Entry: 1031c94ac; end: 1031c94e3;  */

void FUN_1031c94ac(long *param_1)

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



/* Entry: 1031c94e4; end: 1031c94eb;  */

undefined8 FUN_1031c94e4(void)

{
  return 0x1b;
}



/* Entry: 1031c94ec; end: 1031c961f;  */

void FUN_1031c94ec(undefined8 *param_1)

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
  puVar1 = &UNK_11061e688;
  func_0x000107c613fc(&UNK_11061e688,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031c96c0;
  func_0x00010058fa64(FUN_1031c96c0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031c9620; end: 1031c964f;  */

undefined ** FUN_1031c9620(void)

{
  return &PTR_DAT_113066928;
}



/* Entry: 1031c9650; end: 1031c966f;  */

void FUN_1031c9650(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0a30);
  return;
}



/* Entry: 1031c9670; end: 1031c96bf;  */

undefined1  [16] FUN_1031c9670(void)

{
  return ZEXT816(0x11061e5c0);
}



/* Entry: 1031c96c0; end: 1031c96e7;  */

void FUN_1031c96c0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1031c96e8; end: 1031c96eb;  */

void FUN_1031c96e8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031c96ec; end: 1031c9767;  */

void FUN_1031c96ec(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f4a128,&UNK_10db98660);
  func_0x000107c613fc();
  pcVar1 = FUN_1031c9a7c;
  func_0x0001000841fc(FUN_1031c9a7c,param_2);
  func_0x000100084214(&UNK_10db98630,0x2b,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1031c9768; end: 1031c977f;  */

void FUN_1031c9768(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f4a128,&UNK_10db98660);
  func_0x000107c613fc();
  pcVar1 = FUN_1031c9a7c;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10db98630,0x2b,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1031c9780; end: 1031c9a7b;  */

void FUN_1031c9780(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f4a130,&UNK_10db98668);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f4a138,&UNK_10db98670);
  puVar2 = &UNK_11061e6e8;
  func_0x000107c613fc(&UNK_11061e6e8,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x1031c9a84;
  func_0x0001000823a8(0x1031c9a84,puVar2);
  pcVar3 = "ContactUpsellEntryPointWrapperServiceProvider";
  func_0x000100082720("ContactUpsellEntryPointWrapperServiceProvider",0x2d,2);
  FUN_1031ca650();
  func_0x000100082720("ContactUpsellScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1031c94ac;
  func_0x0001000823a8(FUN_1031c94ac,0);
  func_0x000100082720("SCContactUpsellScopedServicesCleanupRelayServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f4a140,&UNK_10db98680);
  puVar2 = &UNK_11061e710;
  func_0x000107c613fc(&UNK_11061e710,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1031c9a8c;
  func_0x0001000823a8(0x1031c9a8c,puVar2);
  func_0x000100082720("SCContactUpsellScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f4a0c0,&UNK_10db98430);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1031c9a98;
  func_0x0001000823a8(0x1031c9a98,uVar5);
  func_0x000100082720("SCContactUpsellScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f4a0b0,&UNK_10db98420);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1031c9aa0;
  func_0x0001000823a8(0x1031c9aa0,uVar6);
  func_0x000100082720("SCContactUpsellScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11061e738;
  func_0x000107c613fc(&UNK_11061e738,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1031c9ad4;
  func_0x0001000823a8(FUN_1031c9ad4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCContactUpsellScopeEntryPointProvider",0x26,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1031c9a7c; end: 1031c9aa7;  */

void FUN_1031c9a7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f4a130,&UNK_10db98668);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f4a138,&UNK_10db98670);
  puVar2 = &UNK_11061e6e8;
  func_0x000107c613fc(&UNK_11061e6e8,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x1031c9a84;
  func_0x0001000823a8(0x1031c9a84,puVar2);
  pcVar3 = "ContactUpsellEntryPointWrapperServiceProvider";
  func_0x000100082720("ContactUpsellEntryPointWrapperServiceProvider",0x2d,2);
  FUN_1031ca650();
  func_0x000100082720("ContactUpsellScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1031c94ac;
  func_0x0001000823a8(FUN_1031c94ac,0);
  func_0x000100082720("SCContactUpsellScopedServicesCleanupRelayServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f4a140,&UNK_10db98680);
  puVar2 = &UNK_11061e710;
  func_0x000107c613fc(&UNK_11061e710,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1031c9a8c;
  func_0x0001000823a8(0x1031c9a8c,puVar2);
  func_0x000100082720("SCContactUpsellScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f4a0c0,&UNK_10db98430);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1031c9a98;
  func_0x0001000823a8(0x1031c9a98,uVar5);
  func_0x000100082720("SCContactUpsellScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f4a0b0,&UNK_10db98420);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1031c9aa0;
  func_0x0001000823a8(0x1031c9aa0,uVar6);
  func_0x000100082720("SCContactUpsellScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11061e738;
  func_0x000107c613fc(&UNK_11061e738,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1031c9ad4;
  func_0x0001000823a8(FUN_1031c9ad4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCContactUpsellScopeEntryPointProvider",0x26,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1031c9aa8; end: 1031c9ad3;  */

void FUN_1031c9aa8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031c9ad4; end: 1031c9adb;  */

void FUN_1031c9ad4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061e570;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061e570;
  return;
}



/* Entry: 1031c9adc; end: 1031c9baf;  */

void FUN_1031c9adc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1031c9d38();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1031cba78(0);
  func_0x000107c610f8();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x0001031cb6d0();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  func_0x000107c61174();
  func_0x0001031cb734();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 1031c9bb0; end: 1031c9c4f;  */

long FUN_1031c9bb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_1031cba78(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001031cb6d0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  func_0x0001031cb734();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 1031c9c50; end: 1031c9c7b;  */

void FUN_1031c9c50(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031c9c7c; end: 1031c9c83;  */

undefined8 FUN_1031c9c7c(void)

{
  return 0x1b;
}



/* Entry: 1031c9c84; end: 1031c9d07;  */

void FUN_1031c9c84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1031c9d78,param_2,FUN_1031c9d7c,param_2,0x1031c9da4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1031c9d08; end: 1031c9d37;  */

undefined ** FUN_1031c9d08(void)

{
  return &PTR_DAT_113066928;
}



/* Entry: 1031c9d38; end: 1031c9d57;  */

void FUN_1031c9d38(void)

{
  func_0x000107c61168(&PTR_PTR_112f4a1b0);
  return;
}



/* Entry: 1031c9d58; end: 1031c9d7b;  */

undefined1  [16] FUN_1031c9d58(void)

{
  return ZEXT816(0x11061e790);
}



/* Entry: 1031c9d7c; end: 1031c9dcf;  */

void FUN_1031c9d7c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1031c9dd0; end: 1031c9e0b;  */

void FUN_1031c9dd0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1031c9e0c();
  func_0x0001000a7f38("SCContactUpsellScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1031c9e0c; end: 1031c9ff7;  */

void FUN_1031c9e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d1b8;
  ppuVar4 = &PTR_DAT_113066928;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f4a218;
  func_0x0001000285a8(0x112f4a218,&UNK_10db98790);
  func_0x0001000a6ee8(&UNK_11061e790,"ContactUpsellEntryPointWrapperScopeInitializationPluginKey",
                      0x3a,2,FUN_1031ca06c,param_1,uVar2,&UNK_11061e790,&PTR_DAT_112f4a148);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11061e7e0;
  func_0x000107c613fc(&UNK_11061e7e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11061e9f0,"ContactUpsellScopeGraphBridgeScopeInitializationPluginKey",
                      0x39,2,FUN_1031ca074,puVar3,uVar2,&UNK_11061e9f0,&PTR_DAT_112f4a2a8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11061e808;
  func_0x000107c613fc(&UNK_11061e808,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11061e600,"SCContactUpsellScopedServicesScopeInitializationPluginKey",
                      0x39,2,FUN_1031ca15c,puVar3,uVar2,&UNK_11061e600,&PTR_DAT_112f4a0c8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f4a220;
  func_0x0001000285a8(0x112f4a220,&UNK_10db98798);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1031c9ff8; end: 1031ca06b;  */

void FUN_1031c9ff8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1031ca198;
  func_0x0001000823a8(0x1031ca198,param_3);
  func_0x000100082720("ContactUpsellEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031ca06c; end: 1031ca073;  */

void FUN_1031ca06c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1031ca198;
  func_0x0001000823a8();
  func_0x000100082720("ContactUpsellEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031ca074; end: 1031ca0b3;  */

void FUN_1031ca074(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1031ca7f4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContactUpsellScopeGraphBridgeScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031ca0b4; end: 1031ca15b;  */

void FUN_1031ca0b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061e830;
  func_0x000107c613fc(&UNK_11061e830,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1031ca190;
  func_0x0001000823a8(FUN_1031ca190,puVar1);
  func_0x000100082720("SCContactUpsellScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1031ca15c; end: 1031ca163;  */

void FUN_1031ca15c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11061e830;
  func_0x000107c613fc(&UNK_11061e830,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1031ca190;
  func_0x0001000823a8(FUN_1031ca190,puVar3);
  func_0x000100082720("SCContactUpsellScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1031ca164; end: 1031ca18f;  */

void FUN_1031ca164(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031ca190; end: 1031ca19f;  */

void FUN_1031ca190(undefined8 *param_1)

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
  puVar1 = &UNK_11061e688;
  func_0x000107c613fc(&UNK_11061e688,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031c96c0;
  func_0x00010058fa64(FUN_1031c96c0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


