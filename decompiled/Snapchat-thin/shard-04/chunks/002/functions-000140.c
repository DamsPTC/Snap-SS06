/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031d7638; end: 1031d764b;  */

void FUN_1031d7638(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11061f7f8;
  return;
}



/* Entry: 1031d764c; end: 1031d7777;  */

void FUN_1031d764c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126acda0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f12f2f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f063320);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1031d7778; end: 1031d7793;  */

undefined ** FUN_1031d7778(void)

{
  return &PTR_DAT_1130670a8;
}



/* Entry: 1031d7794; end: 1031d77b3;  */

void FUN_1031d7794(void)

{
  func_0x000107c61168(&PTR_PTR_112f4aae0);
  return;
}



/* Entry: 1031d77b4; end: 1031d77d7;  */

undefined1  [16] FUN_1031d77b4(void)

{
  return ZEXT816(0x11061f838);
}



/* Entry: 1031d77d8; end: 1031d77ff;  */

void FUN_1031d77d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1031d7800; end: 1031d7807;  */

undefined8 FUN_1031d7800(void)

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



/* Entry: 1031d7808; end: 1031d7843;  */

void FUN_1031d7808(undefined8 *param_1,undefined8 param_2)

{
  FUN_1031d7844();
  func_0x0001000a7f38("SCUserNavStartupCompleteScope_ContextActionHandlerScopeInitializationPluginRegistryServiceProvider"
                      ,0x62,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1031d7844; end: 1031d7a2f;  */

void FUN_1031d7844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074de38;
  ppuVar4 = &PTR_DAT_1130670a8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11061f888;
  func_0x000107c613fc(&UNK_11061f888,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f4ab48;
  func_0x0001000285a8(0x112f4ab48,&UNK_10db999e0);
  func_0x0001000a6ee8(&UNK_11061fa98,
                      "ContextActionHandlerStartupCompleteScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x4f,2,FUN_1031d7a30,puVar2,uVar3,&UNK_11061fa98,&PTR_DAT_112f4abd8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11061f838,
                      "SCContextActionHandlingInitOnStartupCompleteEntryPointWrapperScopeInitializationPluginKey"
                      ,0x59,2,FUN_1031d7ae4,param_3,uVar3,&UNK_11061f838,&PTR_DAT_112f4aa78);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11061f8b0;
  func_0x000107c613fc(&UNK_11061f8b0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11061f6a8,
                      "SCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesScopeInitializationPluginKey"
                      ,0x5c,2,FUN_1031d7b94,puVar2,uVar3,&UNK_11061f6a8,&PTR_DAT_112f4a9f8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f4ab50;
  func_0x0001000285a8(0x112f4ab50,&UNK_10db999e8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1031d7a30; end: 1031d7a6f;  */

void FUN_1031d7a30(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1031d816c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContextActionHandlerStartupCompleteScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x54,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031d7a70; end: 1031d7ae3;  */

void FUN_1031d7a70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1031d7bd0;
  func_0x0001000823a8(0x1031d7bd0,param_3);
  func_0x000100082720("SCContextActionHandlingInitOnStartupCompleteEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x5e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031d7ae4; end: 1031d7aeb;  */

void FUN_1031d7ae4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1031d7bd0;
  func_0x0001000823a8();
  func_0x000100082720("SCContextActionHandlingInitOnStartupCompleteEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x5e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031d7aec; end: 1031d7b93;  */

void FUN_1031d7aec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061f8d8;
  func_0x000107c613fc(&UNK_11061f8d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1031d7bc8;
  func_0x0001000823a8(FUN_1031d7bc8,puVar1);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesScopeInitializationPluginProvider"
                      ,0x61,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1031d7b94; end: 1031d7b9b;  */

void FUN_1031d7b94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11061f8d8;
  func_0x000107c613fc(&UNK_11061f8d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1031d7bc8;
  func_0x0001000823a8(FUN_1031d7bc8,puVar3);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesScopeInitializationPluginProvider"
                      ,0x61,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1031d7b9c; end: 1031d7bc7;  */

void FUN_1031d7b9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031d7bc8; end: 1031d7bd7;  */

void FUN_1031d7bc8(undefined8 *param_1)

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
  puVar1 = &UNK_11061f730;
  func_0x000107c613fc(&UNK_11061f730,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031d70b0;
  func_0x00010058fa64(FUN_1031d70b0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031d7bd8; end: 1031d7c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031d7bd8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1031d7f98();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f4ab58) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f4ab60) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d7c60);
  (*pcVar1)();
}



/* Entry: 1031d7c60; end: 1031d7cbf; -[_TtC51ContextActionHandlerStartupCompleteScopeGraphBridge66ContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint init] */

void FUN_1031d7c60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActionHandlerStartupCompleteScopeGraphBridge.ContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint"
                      ,0x76,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d7c8c);
  (*pcVar1)();
}



/* Entry: 1031d7cc0; end: 1031d7cf7; -[_TtC51ContextActionHandlerStartupCompleteScopeGraphBridge66ContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031d7cdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d7ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d7cc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4ab58));
  return;
}



/* Entry: 1031d7cf8; end: 1031d7d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d7cf8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f4ab60),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f4ab58));
  return;
}



/* Entry: 1031d7d20; end: 1031d7d3f;  */

void FUN_1031d7d20(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1b58);
  return;
}



/* Entry: 1031d7d40; end: 1031d7dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031d7d40(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4ab90) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f4ab98);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d7dc8);
  (*pcVar2)();
}



/* Entry: 1031d7dc8; end: 1031d7eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031d7dc8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4ab90);
  *(undefined **)(unaff_x20 + _DAT_112f4ab90) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4ab98);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f4ab98))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11061f9f8;
  func_0x000107c613fc(&UNK_11061f9f8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1031d7eb4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1031d7eb0; end: 1031d7ebb;  */

void FUN_1031d7eb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031d7ebc; end: 1031d7f1b; -[_TtC51ContextActionHandlerStartupCompleteScopeGraphBridge79SCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint init] */

void FUN_1031d7ebc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActionHandlerStartupCompleteScopeGraphBridge.SCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint"
                      ,0x83,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d7ee8);
  (*pcVar1)();
}



/* Entry: 1031d7f1c; end: 1031d7f53; -[_TtC51ContextActionHandlerStartupCompleteScopeGraphBridge79SCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d7f1c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f4ab98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4ab90));
  return;
}



/* Entry: 1031d7f54; end: 1031d7f57;  */

void FUN_1031d7f54(void)

{
  return;
}



/* Entry: 1031d7f58; end: 1031d7f77;  */

void FUN_1031d7f58(void)

{
  FUN_1031d7dc8();
  return;
}



/* Entry: 1031d7f78; end: 1031d7f97;  */

void FUN_1031d7f78(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1c20);
  return;
}



/* Entry: 1031d7f98; end: 1031d8067;  */

undefined8 FUN_1031d7f98(void)

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
  
  func_0x000107c61428(0x112f4abc8,&uStack_40,0x20,0);
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
    FUN_1031d8068();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1031d8068; end: 1031d8087;  */

void FUN_1031d8068(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1ce8);
  return;
}



/* Entry: 1031d8088; end: 1031d80f3;  */

void FUN_1031d8088(void)

{
  func_0x0001000285a8(0x112f4abd0,&UNK_10db99af8);
  func_0x0001000823a8(0x1031d80c8,0);
  return;
}



/* Entry: 1031d80f4; end: 1031d812f; -[_TtC51ContextActionHandlerStartupCompleteScopeGraphBridge59ContextActionHandlerStartupCompleteScopeGraphBridgeServices init] */

void FUN_1031d80f4(undefined8 param_1)

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



/* Entry: 1031d8130; end: 1031d8163;  */

void FUN_1031d8130(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031d8164; end: 1031d816b;  */

undefined8 FUN_1031d8164(void)

{
  return 0x1b;
}



/* Entry: 1031d816c; end: 1031d82e3;  */

void FUN_1031d816c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061fa40;
  func_0x000107c613fc(&UNK_11061fa40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1031d82e4,puVar1);
  return;
}



/* Entry: 1031d82e4; end: 1031d82eb;  */

void FUN_1031d82e4(undefined8 *param_1)

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
  func_0x000107c61428(0x112f4abc8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f4abc8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11061fad8;
  func_0x000107c613fc(&UNK_11061fad8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1031d8398;
  func_0x00010058fa64(0x1031d8398,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031d82ec; end: 1031d8347;  */

void FUN_1031d82ec(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f4abc8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f4abc8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1031d8348; end: 1031d839f;  */

undefined ** FUN_1031d8348(void)

{
  return &PTR_DAT_1130670a8;
}



/* Entry: 1031d83a0; end: 1031d83e7; -[SCContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d83a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4ac28;
  func_0x000107c61428(param_1 + _DAT_112f4ac28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031d83e8; end: 1031d843f; -[SCContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d83e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ac28;
  func_0x000107c61428(param_1 + _DAT_112f4ac28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031d8440; end: 1031d8487; -[SCContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint contextActionHandlerStartupCompleteScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d8440(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4ac30;
  func_0x000107c61428(param_1 + _DAT_112f4ac30,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031d8488; end: 1031d84eb; -[SCContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint setContextActionHandlerStartupCompleteScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d8488(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ac30;
  func_0x000107c61428(param_1 + _DAT_112f4ac30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031d84ec; end: 1031d861f;  */

/* WARNING: Possible PIC construction at 0x0001031d85a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031d85c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031d85dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d85a8) */
/* WARNING: Removing unreachable block (ram,0x0001031d85c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d84ec(void)

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
  func_0x000107c4053c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1031d7d20();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1031d7f98();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d8620);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f4ab58) = lVar5;
    *(long *)(lVar4 + _DAT_112f4ab60) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1031d8620; end: 1031d8647; -[SCContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1031d8620(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031d84ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031d8648; end: 1031d868b; -[SCContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint end] */

void FUN_1031d8648(undefined8 param_1)

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



/* Entry: 1031d868c; end: 1031d8823;  */

void FUN_1031d868c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffbe) || (param_3 != -0x7ffffffef0ed09a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000042,0x800000010f12f660,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextActionHandlerStartupCompleteScopeGraphBridge/SCContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x7e,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d8824);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1031d8824; end: 1031d88cf; -[SCContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1031d8824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031d868c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031d88d0; end: 1031d893b; -[SCContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d88d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4ac28,0);
  *(undefined8 *)(param_1 + _DAT_112f4ac30) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4ac38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031d893c; end: 1031d896f;  */

void FUN_1031d893c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031d8970; end: 1031d89b7; -[SCContextActionHandlerStartupCompleteScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031d899c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d89a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d8970(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4ac28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4ac30));
  return;
}



/* Entry: 1031d89b8; end: 1031d89d7;  */

void FUN_1031d89b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1d98);
  return;
}



/* Entry: 1031d89d8; end: 1031d8a1f; -[SCSCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d89d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4ac68;
  func_0x000107c61428(param_1 + _DAT_112f4ac68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031d8a20; end: 1031d8a77; -[SCSCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d8a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ac68;
  func_0x000107c61428(param_1 + _DAT_112f4ac68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031d8a78; end: 1031d8b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d8a78(undefined8 param_1,long param_2)

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
    FUN_1031d7f78();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f4ab90) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d8b50);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f4ab98);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4ac70);
    *(long **)(unaff_x20 + _DAT_112f4ac70) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1031d8b50; end: 1031d8b77; -[SCSCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint begin] */

void FUN_1031d8b50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031d8a78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031d8b78; end: 1031d8cef;  */

/* WARNING: Possible PIC construction at 0x0001031d8be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031d8c78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d8be4) */
/* WARNING: Removing unreachable block (ram,0x0001031d8c7c) */
/* WARNING: Removing unreachable block (ram,0x0001031d8c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d8b78(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4ac70);
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



/* Entry: 1031d8cf0; end: 1031d8cf7;  */

void FUN_1031d8cf0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031d8cf8; end: 1031d8d2b; -[SCSCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint end] */

void FUN_1031d8cf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031d8b78();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031d8d2c; end: 1031d8e4b;  */

void FUN_1031d8d2c(long param_1,long param_2,long param_3)

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
                        "ContextActionHandlerStartupCompleteScopeGraphBridge/SCSCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint.swift"
                        ,0x8b,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d8e4c);
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



/* Entry: 1031d8e4c; end: 1031d8ef7; -[SCSCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1031d8e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031d8d2c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031d8ef8; end: 1031d8f57; -[SCSCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d8ef8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4ac68,0);
  *(undefined8 *)(param_1 + _DAT_112f4ac70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031d8f58; end: 1031d8f8b;  */

void FUN_1031d8f58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031d8f8c; end: 1031d8fc3; -[SCSCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d8f8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4ac68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4ac70));
  return;
}



/* Entry: 1031d8fc4; end: 1031d8fe3;  */

void FUN_1031d8fc4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1e60);
  return;
}



/* Entry: 1031d8fe4; end: 1031d904f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d8fe4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1031d93d8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f4aca8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1031d9050; end: 1031d90bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d9050(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4aca8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031d90bc; end: 1031d911b; -[_TtC46ContextOperaChromeScopedFactoryServiceProvider34SCContextOperaChromeScopedServices init] */

void FUN_1031d90bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextOperaChromeScopedFactoryServiceProvider.SCContextOperaChromeScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d90e8);
  (*pcVar1)();
}



/* Entry: 1031d911c; end: 1031d912b; -[_TtC46ContextOperaChromeScopedFactoryServiceProvider34SCContextOperaChromeScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d911c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4aca8));
  return;
}



/* Entry: 1031d912c; end: 1031d9197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d912c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11061fcf0;
  func_0x000107c613fc(&UNK_11061fcf0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1031d9470,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031d9198; end: 1031d9233;  */

void FUN_1031d9198(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061fc00;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061fc00;
  return;
}



/* Entry: 1031d9234; end: 1031d926b;  */

void FUN_1031d9234(long *param_1)

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



/* Entry: 1031d926c; end: 1031d9273;  */

undefined8 FUN_1031d926c(void)

{
  return 0x1b;
}



/* Entry: 1031d9274; end: 1031d93a7;  */

void FUN_1031d9274(undefined8 *param_1)

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
  puVar1 = &UNK_11061fd18;
  func_0x000107c613fc(&UNK_11061fd18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031d9448;
  func_0x00010058fa64(FUN_1031d9448,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031d93a8; end: 1031d93d7;  */

undefined ** FUN_1031d93a8(void)

{
  return &PTR_DAT_113066988;
}



/* Entry: 1031d93d8; end: 1031d93f7;  */

void FUN_1031d93d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1f20);
  return;
}



/* Entry: 1031d93f8; end: 1031d9447;  */

undefined1  [16] FUN_1031d93f8(void)

{
  return ZEXT816(0x11061fc50);
}



/* Entry: 1031d9448; end: 1031d946f;  */

void FUN_1031d9448(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1031d9470; end: 1031d9483;  */

void FUN_1031d9470(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031d9484; end: 1031d9bdb;  */

void FUN_1031d9484(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  code *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 auStack_70 [2];
  
  uVar18 = *param_2;
  func_0x0001000285a8(0x112f4ad20,&UNK_10db99fa0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar18;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f4ad28,&UNK_10db99fd0);
  puVar2 = &UNK_11061fdc8;
  func_0x000107c613fc(&UNK_11061fdc8,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  pcVar3 = FUN_1031d9cbc;
  func_0x0001000823a8(FUN_1031d9cbc,puVar2);
  pcVar4 = "ActionItemsCOFConfigurationServiceProviderWrapperServiceProvider";
  func_0x000100082720("ActionItemsCOFConfigurationServiceProviderWrapperServiceProvider",0x40,2);
  func_0x0001031db318();
  pcVar5 = "SCContextOperaEmbeddedComponentScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContextOperaEmbeddedComponentScopeExposerSubjectServiceProvider",0x41,2);
  FUN_1031db364();
  func_0x000100082720("SCContextTopLevelCardsScopeExposerSubjectServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f4ad30,&UNK_10db99fb0);
  func_0x000107c6157c(pcVar3);
  uVar18 = 0x1031d9cc4;
  func_0x0001000823a8(0x1031d9cc4,pcVar3);
  func_0x000100082720("SCContextActionItemsConfigurationServicesServiceProvider",0x38,2);
  uVar6 = param_4;
  FUN_1031e30c4(param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                param_14,param_15,param_16,param_17,param_18,param_19,param_20,param_21,param_22,
                param_23,param_24,param_25,param_26,param_27,param_28,param_29,param_30,param_31,
                param_32,param_33,param_34,param_35,param_36,param_37,param_38,param_39,param_40,
                param_41,param_42);
  func_0x000100082720("SCContextActionItemPlugInScopedFactoryServiceProvider",0x35,2);
  pcVar7 = pcVar4;
  FUN_1031db358();
  func_0x000100082720("SCContextOperaEmbeddedComponentScopeExposerObservableServiceProvider",0x44,2)
  ;
  pcVar8 = pcVar5;
  FUN_1031db3f0();
  func_0x000100082720("SCContextTopLevelCardsScopeExposerObservableServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar9 = FUN_1031d9234;
  func_0x0001000823a8(FUN_1031d9234,0);
  func_0x000100082720("SCContextOperaChromeScopedServicesCleanupRelayServiceProvider",0x3d,2);
  pcVar10 = pcVar4;
  FUN_1031db16c(pcVar4,pcVar5);
  func_0x000100082720("ContextOperaChromeScopeGraphBridgeServicesServiceProvider",0x39,2);
  uVar11 = uVar6;
  FUN_103217d40();
  func_0x000100082720("SCContextActionItemPlugInScopeFactoryServicesServiceProvider",0x3c,2);
  FUN_1032276b0(param_4,param_43,param_44,param_45,param_46,uVar18,param_18,puVar1,param_47,param_27
                ,param_48,param_49,pcVar8,param_50);
  func_0x000100082720("SCContextActionItemsRendererPlugInScopedFactoryServiceProvider",0x3e,2);
  uVar12 = param_4;
  FUN_103261040();
  func_0x000100082720("SCContextActionItemsRendererPlugInScopeFactoryServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f4ad38,&UNK_10db99fc0);
  puVar2 = &UNK_11061fdf0;
  func_0x000107c613fc(&UNK_11061fdf0,0x58,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_51;
  *(undefined8 *)(puVar2 + 0x20) = param_39;
  *(undefined8 *)(puVar2 + 0x28) = param_52;
  *(undefined8 *)(puVar2 + 0x30) = param_18;
  *(undefined8 *)(puVar2 + 0x38) = uVar18;
  *(undefined8 *)(puVar2 + 0x40) = uVar12;
  *(undefined8 *)(puVar2 + 0x48) = uVar11;
  *(char **)(puVar2 + 0x50) = pcVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(pcVar7);
  pcVar13 = FUN_1031d9ccc;
  func_0x0001000823a8(FUN_1031d9ccc,puVar2);
  func_0x000100082720("OperaChromeEntryPointWrapperServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112f4ad40,&UNK_10db99fc8);
  puVar2 = &UNK_11061fe18;
  func_0x000107c613fc(&UNK_11061fe18,0x38,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar10;
  *(code **)(puVar2 + 0x28) = pcVar13;
  *(code **)(puVar2 + 0x30) = pcVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(pcVar9);
  pcVar14 = FUN_1031d9d00;
  func_0x0001000823a8(FUN_1031d9d00,puVar2);
  func_0x000100082720("SCContextOperaChromeScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f4acb0,&UNK_10db99d30);
  func_0x000107c6157c(pcVar14);
  uVar15 = 0x1031d9d10;
  func_0x0001000823a8(0x1031d9d10,pcVar14);
  func_0x000100082720("SCContextOperaChromeScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f4aca0,&UNK_10db99d20);
  func_0x000107c6157c(uVar15);
  uVar16 = 0x1031d9d18;
  func_0x0001000823a8(0x1031d9d18,uVar15);
  func_0x000100082720("SCContextOperaChromeScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11061fe40;
  func_0x000107c613fc(&UNK_11061fe40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar16;
  *(code **)(puVar2 + 0x18) = pcVar9;
  func_0x000107c6157c(pcVar9);
  pcVar17 = FUN_1031d9d4c;
  func_0x0001000823a8(FUN_1031d9d4c,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(param_4);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar15);
  func_0x000100082720("SCContextOperaChromeScopeEntryPointProvider",0x2b,2);
  *param_1 = pcVar17;
  return;
}



/* Entry: 1031d9bdc; end: 1031d9cbb;  */

void FUN_1031d9bdc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031d9484(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198));
  return;
}



/* Entry: 1031d9cbc; end: 1031d9ccb;  */

void FUN_1031d9cbc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  FUN_1031da034();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x0001031dc92c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001031dc7ac();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  func_0x0001031dc7d4();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 1031d9ccc; end: 1031d9cff;  */

void FUN_1031d9ccc(void)

{
  long unaff_x20;
  
  FUN_1031da0dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1031d9d00; end: 1031d9d1f;  */

void FUN_1031d9d00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar5 = &UNK_11074d258;
  ppuVar8 = &PTR_DAT_113066988;
  uVar9 = uVar2;
  func_0x0001000a3aa4();
  func_0x000107c6157c(uVar1);
  uVar6 = 0x112f4af28;
  func_0x0001000285a8(0x112f4af28,&UNK_10db9a2d0);
  func_0x0001000a6ee8(&UNK_11061feb8,
                      "ActionItemsCOFConfigurationServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x4d,2,FUN_1031daa1c,uVar1,uVar6,&UNK_11061feb8,&PTR_DAT_112f4ad48);
  func_0x000107c61574(uVar1);
  puVar7 = &UNK_11061ff88;
  func_0x000107c613fc(&UNK_11061ff88,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x0001000a6ee8(&UNK_110620240,
                      "ContextOperaChromeScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_1031daa48,puVar7,uVar6,&UNK_110620240,&PTR_DAT_112f4afc8);
  func_0x000107c61574(puVar7);
  func_0x000107c6157c(uVar4);
  func_0x0001000a6ee8(&UNK_11061ff38,"OperaChromeEntryPointWrapperScopeInitializationPluginKey",0x38
                      ,2,FUN_1031dab0c,uVar4,uVar6,&UNK_11061ff38,&PTR_DAT_112f4ae20);
  func_0x000107c61574(uVar4);
  puVar7 = &UNK_11061ffb0;
  func_0x000107c613fc(&UNK_11061ffb0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar10;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar10);
  func_0x0001000a6ee8(&UNK_11061fc90,
                      "SCContextOperaChromeScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_1031dabe0,puVar7,uVar6,&UNK_11061fc90,&PTR_DAT_112f4acb8);
  func_0x000107c61574(puVar7);
  uVar6 = 0x112f4af30;
  func_0x0001000285a8(0x112f4af30,&UNK_10db9a2d8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar5,ppuVar8,uVar9,uVar6);
  func_0x0001000a7f38("SCContextOperaChromeScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = puVar5;
  return;
}



/* Entry: 1031d9d20; end: 1031d9d4b;  */

void FUN_1031d9d20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031d9d4c; end: 1031d9d53;  */

void FUN_1031d9d4c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061fc00;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061fc00;
  return;
}



/* Entry: 1031d9d54; end: 1031d9eef;  */

void FUN_1031d9d54(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1031da034();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x0001031dc92c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x0001031dc7ac();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  func_0x0001031dc7d4();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1031d9ef0; end: 1031d9f23;  */

void FUN_1031d9ef0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031d9f24; end: 1031d9f77;  */

void FUN_1031d9f24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031d9f78; end: 1031d9f7f;  */

undefined8 FUN_1031d9f78(void)

{
  return 0x1b;
}



/* Entry: 1031d9f80; end: 1031da003;  */

void FUN_1031d9f80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1031da084,param_2,FUN_1031da088,param_2,0x1031da0b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1031da004; end: 1031da033;  */

undefined ** FUN_1031da004(void)

{
  return &PTR_DAT_113066988;
}



/* Entry: 1031da034; end: 1031da053;  */

void FUN_1031da034(void)

{
  func_0x000107c61168(&PTR_PTR_112f4adb0);
  return;
}



/* Entry: 1031da054; end: 1031da087;  */

undefined1  [16] FUN_1031da054(void)

{
  return ZEXT816(0x11061fe98);
}



/* Entry: 1031da088; end: 1031da0db;  */

void FUN_1031da088(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1031da0dc; end: 1031da5e3;  */

void FUN_1031da0dc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_1031da71c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  func_0x0001000285a8(0x112efd500,&UNK_10db2f7a8);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c6157c(uStack_98);
  func_0x000107c6157c(uStack_a0);
  uVar6 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x18) = puVar7;
  FUN_1031e1390();
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(uStack_98);
  func_0x000107c6157c(uStack_a0);
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar6;
  func_0x0001031de69c();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  func_0x000107c6157c();
  func_0x0001031de790();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_a0);
  func_0x000107c61574(uStack_a8);
  func_0x000107c61574(uVar8);
  *param_1 = param_2;
  return;
}



/* Entry: 1031da5e4; end: 1031da65f;  */

void FUN_1031da5e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1031da660; end: 1031da667;  */

undefined8 FUN_1031da660(void)

{
  return 0x1b;
}



/* Entry: 1031da668; end: 1031da6eb;  */

void FUN_1031da668(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1031da75c,param_2,FUN_1031da760,param_2,0x1031da788,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1031da6ec; end: 1031da71b;  */

undefined ** FUN_1031da6ec(void)

{
  return &PTR_DAT_113066988;
}


