/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037b4ee0; end: 1037b4f27; -[SCWebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint webViewInjectionScriptSaberPluginScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b4ee0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f93cb0;
  func_0x000107c61428(param_1 + _DAT_112f93cb0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1037b4f28; end: 1037b4f8b; -[SCWebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint setWebViewInjectionScriptSaberPluginScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b4f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f93cb0;
  func_0x000107c61428(param_1 + _DAT_112f93cb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1037b4f8c; end: 1037b50bf;  */

/* WARNING: Possible PIC construction at 0x0001037b5044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037b5060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037b507c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b5048) */
/* WARNING: Removing unreachable block (ram,0x0001037b5064) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b4f8c(void)

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
  func_0x000107c5e23c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1037b47c0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1037b4a38();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b50c0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f93bd8) = lVar5;
    *(long *)(lVar4 + _DAT_112f93be0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1037b50c0; end: 1037b50e7; -[SCWebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1037b50c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1037b4f8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037b50e8; end: 1037b512b; -[SCWebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint end] */

void FUN_1037b50e8(undefined8 param_1)

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



/* Entry: 1037b512c; end: 1037b52c3;  */

void FUN_1037b512c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc0) || (param_3 != -0x7ffffffef0e990b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000040,0x800000010f166f50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "WebViewInjectionScriptSaberPluginScopeGraphBridge/SCWebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x7a,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b52c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a6d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037b52c4; end: 1037b536f; -[SCWebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1037b52c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037b512c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037b5370; end: 1037b53db; -[SCWebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5370(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f93ca8,0);
  *(undefined8 *)(param_1 + _DAT_112f93cb0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f93cb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037b53dc; end: 1037b540f;  */

void FUN_1037b53dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037b5410; end: 1037b5457; -[SCWebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037b543c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b5440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5410(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f93ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93cb0));
  return;
}



/* Entry: 1037b5458; end: 1037b5477;  */

void FUN_1037b5458(void)

{
  func_0x000107c61168(&PTR_PTR_1128eadb8);
  return;
}



/* Entry: 1037b5478; end: 1037b54bf; -[SCWebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5478(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f93ce8;
  func_0x000107c61428(param_1 + _DAT_112f93ce8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037b54c0; end: 1037b5517; -[SCWebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b54c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f93ce8;
  func_0x000107c61428(param_1 + _DAT_112f93ce8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037b5518; end: 1037b55ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5518(undefined8 param_1,long param_2)

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
    FUN_1037b4a18();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f93c10) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037b55f0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f93c18);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f93cf0);
    *(long **)(unaff_x20 + _DAT_112f93cf0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1037b55f0; end: 1037b5617; -[SCWebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint begin] */

void FUN_1037b55f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1037b5518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037b5618; end: 1037b578f;  */

/* WARNING: Possible PIC construction at 0x0001037b5680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037b5718: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b5684) */
/* WARNING: Removing unreachable block (ram,0x0001037b571c) */
/* WARNING: Removing unreachable block (ram,0x0001037b5734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5618(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f93cf0);
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



/* Entry: 1037b5790; end: 1037b5797;  */

void FUN_1037b5790(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1037b5798; end: 1037b57cb; -[SCWebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint end] */

void FUN_1037b5798(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037b5618();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037b57cc; end: 1037b58eb;  */

void FUN_1037b57cc(long param_1,long param_2,long param_3)

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
                        "WebViewInjectionScriptSaberPluginScopeGraphBridge/SCWebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint.swift"
                        ,0x78,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b58ec);
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



/* Entry: 1037b58ec; end: 1037b5997; -[SCWebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1037b58ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037b57cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037b5998; end: 1037b59f7; -[SCWebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5998(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f93ce8,0);
  *(undefined8 *)(param_1 + _DAT_112f93cf0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037b59f8; end: 1037b5a2b;  */

void FUN_1037b59f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037b5a2c; end: 1037b5a63; -[SCWebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5a2c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f93ce8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93cf0));
  return;
}



/* Entry: 1037b5a64; end: 1037b5a83;  */

void FUN_1037b5a64(void)

{
  func_0x000107c61168(&PTR_PTR_1128eae80);
  return;
}



/* Entry: 1037b5a84; end: 1037b5b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5a84(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  func_0x000100083b20(&uStack_38);
  FUN_1037b5ee4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f93d28) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f93d30) = uStack_38;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c6157c(param_2);
  plVar4 = &lStack_48;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1037b5b70; end: 1037b5b8f;  */

void FUN_1037b5b70(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1037b5b90; end: 1037b5bef; -[_TtC56WebViewNavigationSaberPluginScopedFactoryServiceProvider42WebViewNavigationSaberPluginScopedServices init] */

void FUN_1037b5b90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebViewNavigationSaberPluginScopedFactoryServiceProvider.WebViewNavigationSaberPluginScopedServices"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b5bbc);
  (*pcVar1)();
}



/* Entry: 1037b5bf0; end: 1037b5c27; -[_TtC56WebViewNavigationSaberPluginScopedFactoryServiceProvider42WebViewNavigationSaberPluginScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037b5c0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b5c10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f93d30));
  return;
}



/* Entry: 1037b5c28; end: 1037b5c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110694cd8;
  func_0x000107c613fc(&UNK_110694cd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1037b5f7c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1037b5c94; end: 1037b5ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b5c94(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f93d28));
  return;
}



/* Entry: 1037b5ca4; end: 1037b5d3f;  */

void FUN_1037b5ca4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_110694bd0;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110694be0;
  return;
}



/* Entry: 1037b5d40; end: 1037b5d77;  */

void FUN_1037b5d40(long *param_1)

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



/* Entry: 1037b5d78; end: 1037b5d7f;  */

undefined8 FUN_1037b5d78(void)

{
  return 0x1b;
}



/* Entry: 1037b5d80; end: 1037b5eb3;  */

void FUN_1037b5d80(undefined8 *param_1)

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
  puVar1 = &UNK_110694d00;
  func_0x000107c613fc(&UNK_110694d00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1037b5f54;
  func_0x00010058fa64(FUN_1037b5f54,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1037b5eb4; end: 1037b5ee3;  */

undefined ** FUN_1037b5eb4(void)

{
  return &PTR_DAT_1130671b0;
}



/* Entry: 1037b5ee4; end: 1037b5f03;  */

void FUN_1037b5ee4(void)

{
  func_0x000107c61168(&PTR_PTR_1128eaf40);
  return;
}



/* Entry: 1037b5f04; end: 1037b5f53;  */

undefined1  [16] FUN_1037b5f04(void)

{
  return ZEXT816(0x110694c38);
}



/* Entry: 1037b5f54; end: 1037b5f7b;  */

void FUN_1037b5f54(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1037b5f7c; end: 1037b5f7f;  */

void FUN_1037b5f7c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1037b5f80; end: 1037b604b;  */

/* WARNING: Possible PIC construction at 0x0001037b6020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037b6030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b6024) */
/* WARNING: Removing unreachable block (ram,0x0001037b6034) */

void FUN_1037b5f80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110694d90;
  func_0x000107c613fc(&UNK_110694d90,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112f93da8;
  func_0x0001000285a8(0x112f93da8,&UNK_10dc0d1c0);
  func_0x000107c613fc();
  pcVar3 = FUN_1037b641c;
  func_0x0001000841fc(FUN_1037b641c,puVar1,uVar2);
  func_0x000100084214(&UNK_10dc0d180,0x38,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1037b604c; end: 1037b6067;  */

/* WARNING: Possible PIC construction at 0x0001037b6020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037b6030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b6024) */
/* WARNING: Removing unreachable block (ram,0x0001037b6034) */

void FUN_1037b604c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110694d90;
  func_0x000107c613fc(&UNK_110694d90,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112f93da8;
  func_0x0001000285a8(0x112f93da8,&UNK_10dc0d1c0);
  func_0x000107c613fc();
  pcVar6 = FUN_1037b641c;
  func_0x0001000841fc(FUN_1037b641c,puVar4,uVar5);
  func_0x000100084214(&UNK_10dc0d180,0x38,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1037b6068; end: 1037b63df;  */

void FUN_1037b6068(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f93db0,&UNK_10dc0d1c8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f93db8,&UNK_10dc0d1d0);
  puVar2 = &UNK_110694db8;
  func_0x000107c613fc(&UNK_110694db8,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 **)(puVar2 + 0x28) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar10 = 0x1037b6428;
  func_0x0001000823a8(0x1037b6428,puVar2);
  func_0x000100082720("WebViewNavigationSaberPluginRegistryServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_1037b5d40;
  func_0x0001000823a8(FUN_1037b5d40,0);
  func_0x000100082720("WebViewNavigationSaberPluginScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  puVar4 = puVar1;
  FUN_103986d30(puVar1,uVar10);
  pcVar5 = "WebViewNavigationPluginCollectionServiceProvider";
  func_0x000100082720("WebViewNavigationPluginCollectionServiceProvider",0x30,2);
  FUN_1037b8d64();
  func_0x000100082720("WebViewNavigationSaberPluginScopeGraphBridgeServicesServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f93dc0,&UNK_10dc0d1e0);
  puVar2 = &UNK_110694de0;
  func_0x000107c613fc(&UNK_110694de0,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(char **)(puVar2 + 0x18) = pcVar5;
  *(code **)(puVar2 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar3);
  uVar6 = 0x1037b6438;
  func_0x0001000823a8(0x1037b6438,puVar2);
  func_0x000100082720("WebViewNavigationSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112f93d40,&UNK_10dc0cef0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1037b6444;
  func_0x0001000823a8(0x1037b6444,uVar6);
  func_0x000100082720("WebViewNavigationSaberPluginScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f93d20,&UNK_10dc0cee0);
  puVar2 = &UNK_110694e08;
  func_0x000107c613fc(&UNK_110694e08,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1037b644c;
  func_0x0001000823a8(0x1037b644c,puVar2);
  func_0x000100082720("WebViewNavigationSaberPluginScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f93d38,&UNK_10dc0cee8);
  puVar2 = &UNK_110694e30;
  func_0x000107c613fc(&UNK_110694e30,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar9 = FUN_1037b6480;
  func_0x0001000823a8(FUN_1037b6480,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("WebViewNavigationSaberPluginScopeEntryPointProvider",0x33,2);
  *param_1 = pcVar9;
  return;
}



/* Entry: 1037b63e0; end: 1037b641b;  */

void FUN_1037b63e0(void)

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



/* Entry: 1037b641c; end: 1037b6453;  */

void FUN_1037b641c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112f93db0,&UNK_10dc0d1c8);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f93db8,&UNK_10dc0d1d0);
  puVar2 = &UNK_110694db8;
  func_0x000107c613fc(&UNK_110694db8,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = uVar9;
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  *(undefined8 **)(puVar2 + 0x28) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  uVar3 = 0x1037b6428;
  func_0x0001000823a8(0x1037b6428,puVar2);
  func_0x000100082720("WebViewNavigationSaberPluginRegistryServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1037b5d40;
  func_0x0001000823a8(FUN_1037b5d40,0);
  func_0x000100082720("WebViewNavigationSaberPluginScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  puVar5 = puVar1;
  FUN_103986d30(puVar1,uVar3);
  pcVar6 = "WebViewNavigationPluginCollectionServiceProvider";
  func_0x000100082720("WebViewNavigationPluginCollectionServiceProvider",0x30,2);
  FUN_1037b8d64();
  func_0x000100082720("WebViewNavigationSaberPluginScopeGraphBridgeServicesServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f93dc0,&UNK_10dc0d1e0);
  puVar2 = &UNK_110694de0;
  func_0x000107c613fc(&UNK_110694de0,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(char **)(puVar2 + 0x18) = pcVar6;
  *(code **)(puVar2 + 0x20) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1037b6438;
  func_0x0001000823a8(0x1037b6438,puVar2);
  func_0x000100082720("WebViewNavigationSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112f93d40,&UNK_10dc0cef0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1037b6444;
  func_0x0001000823a8(0x1037b6444,uVar7);
  func_0x000100082720("WebViewNavigationSaberPluginScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f93d20,&UNK_10dc0cee0);
  puVar2 = &UNK_110694e08;
  func_0x000107c613fc(&UNK_110694e08,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1037b644c;
  func_0x0001000823a8(0x1037b644c,puVar2);
  func_0x000100082720("WebViewNavigationSaberPluginScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f93d38,&UNK_10dc0cee8);
  puVar2 = &UNK_110694e30;
  func_0x000107c613fc(&UNK_110694e30,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_1037b6480;
  func_0x0001000823a8(FUN_1037b6480,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("WebViewNavigationSaberPluginScopeEntryPointProvider",0x33,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 1037b6454; end: 1037b647f;  */

void FUN_1037b6454(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037b6480; end: 1037b6487;  */

void FUN_1037b6480(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_110694bd0;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110694be0;
  return;
}



/* Entry: 1037b6488; end: 1037b656b;  */

/* WARNING: Possible PIC construction at 0x0001037b6534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037b6544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b6538) */
/* WARNING: Removing unreachable block (ram,0x0001037b6548) */

void FUN_1037b6488(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110694e58;
  func_0x000107c613fc(&UNK_110694e58,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x112f93dc8;
  func_0x0001000285a8(0x112f93dc8,&UNK_10dc0d1e8);
  func_0x000107c613fc();
  pcVar3 = FUN_1037b65e0;
  func_0x0001000841fc(FUN_1037b65e0,puVar1,uVar2);
  func_0x000100084214("WebViewNavigationSaberPluginRegistryServiceProvider",0x33,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1037b656c; end: 1037b65df;  */

void FUN_1037b656c(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    FUN_1037b84c0(param_6,param_7);
    pcVar1 = "LinkfireNavigationSaberPluginProvider";
    uVar2 = 0x25;
    param_3 = param_6;
  }
  else {
    FUN_1037b68e8(param_3,param_4,param_5);
    pcVar1 = "AmazonHandshakeNavigationSaberPluginProvider";
    uVar2 = 0x2c;
  }
  func_0x000100082720(pcVar1,uVar2,2);
  *param_1 = param_3;
  return;
}



/* Entry: 1037b65e0; end: 1037b65ef;  */

void FUN_1037b65e0(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*param_2 == '\x01') {
    FUN_1037b84c0(uVar1,*(undefined8 *)(unaff_x20 + 0x30));
    pcVar3 = "LinkfireNavigationSaberPluginProvider";
    uVar4 = 0x25;
    uVar2 = uVar1;
  }
  else {
    FUN_1037b68e8(uVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
    pcVar3 = "AmazonHandshakeNavigationSaberPluginProvider";
    uVar4 = 0x2c;
  }
  func_0x000100082720(pcVar3,uVar4,2);
  *param_1 = uVar2;
  return;
}



/* Entry: 1037b65f0; end: 1037b662b;  */

void FUN_1037b65f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1037b662c();
  func_0x0001000a7f38("WebViewNavigationSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1037b662c; end: 1037b67c3;  */

void FUN_1037b662c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dff0;
  ppuVar4 = &PTR_DAT_1130671b0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110694e80;
  func_0x000107c613fc(&UNK_110694e80,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f93dd0;
  func_0x0001000285a8(0x112f93dd0,&UNK_10dc0d1f0);
  func_0x0001000a6ee8(&UNK_110695430,
                      "WebViewNavigationSaberPluginScopeGraphBridgeScopeInitializationPluginKey",
                      0x48,2,FUN_1037b67c4,puVar2,uVar3,&UNK_110695430,&PTR_DAT_112f93ee8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110694ea8;
  func_0x000107c613fc(&UNK_110694ea8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110694c78,
                      "WebViewNavigationSaberPluginScopedServicesScopeInitializationPluginKey",0x46,
                      2,FUN_1037b68ac,puVar2,uVar3,&UNK_110694c78,&PTR_DAT_112f93d48);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f93dd8;
  func_0x0001000285a8(0x112f93dd8,&UNK_10dc0d1f8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1037b67c4; end: 1037b6803;  */

void FUN_1037b67c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1037b8e48(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("WebViewNavigationSaberPluginScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1037b6804; end: 1037b68ab;  */

void FUN_1037b6804(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110694ed0;
  func_0x000107c613fc(&UNK_110694ed0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1037b68e0;
  func_0x0001000823a8(FUN_1037b68e0,puVar1);
  func_0x000100082720("WebViewNavigationSaberPluginScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1037b68ac; end: 1037b68b3;  */

void FUN_1037b68ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110694ed0;
  func_0x000107c613fc(&UNK_110694ed0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1037b68e0;
  func_0x0001000823a8(FUN_1037b68e0,puVar3);
  func_0x000100082720("WebViewNavigationSaberPluginScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1037b68b4; end: 1037b68df;  */

void FUN_1037b68b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037b68e0; end: 1037b68e7;  */

void FUN_1037b68e0(undefined8 *param_1)

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
  puVar1 = &UNK_110694d00;
  func_0x000107c613fc(&UNK_110694d00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1037b5f54;
  func_0x00010058fa64(FUN_1037b5f54,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1037b68e8; end: 1037b6a6b;  */

void FUN_1037b68e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f93de0,&UNK_10dc0d200);
  puVar1 = &UNK_110694f78;
  func_0x000107c613fc(&UNK_110694f78,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1037b6980,puVar1);
  return;
}



/* Entry: 1037b6a6c; end: 1037b6a7b;  */

undefined1  [16] FUN_1037b6a6c(void)

{
  return ZEXT816(0x110694fa0);
}



/* Entry: 1037b6a7c; end: 1037b6c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037b6a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar2 = auStack_60;
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112f93de8) = PTR___swiftEmptySetSingleton_11034f1d8;
  FUN_10398c9b4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar1 = param_1;
  func_0x000103988c7c(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112f93df0) = uVar1;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  return puVar2;
}



/* Entry: 1037b6c4c; end: 1037b6c7f;  */

void FUN_1037b6c4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037b6c80; end: 1037b6cb7; -[_TtC31AmazonHandshakeNavigationPlugin31AmazonHandshakeNavigationPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b6c80(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f93df0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f93de8));
  return;
}



/* Entry: 1037b6cb8; end: 1037b70a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037b6cb8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  char *pcVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112d36580;
  uStack_c0 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_d0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar18 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  uVar15 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar3 = param_2;
  func_0x000107c50300(param_2);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c5eaf0(puVar12);
  (**(code **)(lVar18 + 8))(lVar13,lVar1);
  puVar4 = puVar12;
  (**(code **)(lVar16 + 0x30))(puVar12,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x0001000293e4(puVar12);
  }
  else {
    uVar3 = uVar15;
    (**(code **)(lVar16 + 0x20))(uVar15,puVar12,lVar2);
    func_0x000107c5edbc();
    if (puVar12 == (undefined1 *)0x0) {
      (**(code **)(lVar16 + 8))(uVar15,lVar2);
    }
    else {
      uVar5 = param_2;
      func_0x000107c5c744();
      func_0x000107c61180();
      if (uVar5 != 0) {
        uVar6 = uVar5;
        func_0x000107c4a028();
        func_0x000107c61170(uVar5);
        if ((uVar6 & 1) != 0) {
          uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f93df0);
          func_0x000107c5ed90();
          uVar14 = uVar17;
          func_0x000107c49a10();
          func_0x000107c61170(uVar5);
          lVar1 = _DAT_112f93de8;
          if ((int)uVar14 != 0) {
            uStack_c8 = uVar17;
            func_0x000107c61428(unaff_x20 + _DAT_112f93de8,auStack_78,0,0);
            uVar14 = *(undefined8 *)(unaff_x20 + lVar1);
            func_0x000107c61434(uVar14);
            uVar5 = uVar3;
            func_0x0001000f66f0(uVar3,puVar12,uVar14);
            func_0x000107c6142c(uVar14);
            if ((uVar5 & 1) == 0) {
              func_0x000107c61428(unaff_x20 + lVar1,&puStack_b8,0x21,0);
              func_0x000100403b00(auStack_88,uVar3,puVar12);
              func_0x000107c614a8(&puStack_b8);
              func_0x000107c6142c(uStack_80);
              uVar14 = uStack_c0;
              uVar17 = uStack_c0;
              func_0x000107c40110(uStack_c0);
              func_0x000107c61180();
              uVar7 = uVar17;
              func_0x000107c5e27c();
              func_0x000107c61180();
              func_0x000107c61170(uVar17);
              uVar17 = uVar7;
              func_0x000107c44f48(uVar7);
              func_0x000107c61180();
              func_0x000107c61170(uVar7);
              func_0x000107c5ed90();
              uVar8 = uStack_c8;
              func_0x000107c4015c(uStack_c8);
              func_0x000107c61180();
              func_0x000107c61170(uVar17);
              func_0x000107c61170(uVar7);
              puVar9 = &UNK_110695040;
              func_0x000107c613fc(&UNK_110695040,0x20,7);
              *(undefined8 *)(puVar9 + 0x10) = uVar14;
              *(ulong *)(puVar9 + 0x18) = param_2;
              pcStack_98 = FUN_1037b71ec;
              puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_b0 = 0x42000000;
              puStack_a8 = &UNK_101c871e4;
              puStack_a0 = &UNK_110695058;
              ppuVar10 = &puStack_b8;
              puStack_90 = puVar9;
              func_0x000107c60bc4(ppuVar10);
              puVar9 = puStack_90;
              func_0x000107c61174(uVar14);
              func_0x000107c61174(param_2);
              func_0x000107c61574(puVar9);
              pcVar11 = "webView(_:decidePolicyFor:)";
              func_0x0001000c10c0("webView(_:decidePolicyFor:)");
              func_0x000107c61180();
              func_0x000107c5dc64(uVar8);
              func_0x000107c615e8(pcVar11);
              func_0x000107c60bd0(ppuVar10);
              func_0x000107c61170(uVar8);
              (**(code **)(lVar16 + 8))(uVar15,lVar2);
              return 0;
            }
          }
        }
      }
      (**(code **)(lVar16 + 8))(uVar15,lVar2);
      func_0x000107c6142c(puVar12);
    }
  }
  return 1;
}



/* Entry: 1037b70a4; end: 1037b7173;  */

void FUN_1037b70a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c50300(param_2);
  func_0x000107c61180();
  func_0x000107c5eae8(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(param_2);
  func_0x000107c5eae0();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c4b768(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1037b7174; end: 1037b71eb; -[_TtC31AmazonHandshakeNavigationPlugin31AmazonHandshakeNavigationPlugin webView:decidePolicyForNavigationAction:] */

undefined8
FUN_1037b7174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1037b6cb8(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1037b71ec; end: 1037b720f;  */

void FUN_1037b71ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c50300(uVar2);
  func_0x000107c61180();
  func_0x000107c5eae8(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(uVar2);
  func_0x000107c5eae0();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c4b768(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1037b7210; end: 1037b722f;  */

void FUN_1037b7210(void)

{
  func_0x000107c61168(&PTR_PTR_1128eb008);
  return;
}



/* Entry: 1037b7230; end: 1037b7317;  */

void FUN_1037b7230(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f167540);
  func_0x000107c5dc18();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_1037b7bbc(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000107c6147c(&uStack_71,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
  }
  return;
}



/* Entry: 1037b7318; end: 1037b7377; -[_TtC24LinkfireNavigationPlugin24LinkfireNavigationPlugin init] */

void FUN_1037b7318(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LinkfireNavigationPlugin.LinkfireNavigationPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b7344);
  (*pcVar1)();
}



/* Entry: 1037b7378; end: 1037b73d3; -[_TtC24LinkfireNavigationPlugin24LinkfireNavigationPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b7378(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f93e20));
  FUN_1037b848c(param_1 + _DAT_112f93e28);
  func_0x000107c61610(param_1 + _DAT_112f93e30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f93e38 + 8))
  ;
  return;
}



/* Entry: 1037b73d4; end: 1037b73f3;  */

void FUN_1037b73d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128eb0d0);
  return;
}



/* Entry: 1037b73f4; end: 1037b771b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037b73f4(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0x112d36580;
  uStack_70 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = (long)&uStack_70 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = uVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar9 = param_2;
  func_0x000107c50300(param_2);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c5eaf0(uVar5);
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
  uVar9 = uVar5;
  (**(code **)(lVar11 + 0x30))(uVar5,1,lVar3);
  if ((int)uVar9 == 1) {
    FUN_1037b7bbc(uVar5,0x112d36580,&UNK_10d9016d0);
    return 1;
  }
  (**(code **)(lVar11 + 0x20))(lVar8,uVar5,lVar3);
  func_0x000107c5c744();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar9 = param_2;
    func_0x000107c4a028();
    func_0x000107c61170();
    if ((int)uVar9 != 0) {
      puVar1 = (ulong *)(unaff_x20 + _DAT_112f93e38);
      uVar9 = puVar1[1];
      if (uVar9 != 0) {
        uVar10 = *puVar1;
        uVar4 = uVar9;
        func_0x000107c61434();
        param_2 = uVar5;
        func_0x000107c5ed70();
        if ((uVar10 == uVar4) && (uVar9 == param_2)) {
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(param_2);
LAB_1037b7600:
          (**(code **)(lVar11 + 8))(lVar8,lVar3);
          uVar9 = puVar1[1];
          *puVar1 = 0;
          puVar1[1] = 0;
          func_0x000107c6142c(uVar9);
          return 1;
        }
        uVar5 = uVar9;
        func_0x000107c605b8(uVar10,uVar9,uVar4,param_2,0);
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c();
        if ((uVar10 & 1) != 0) goto LAB_1037b7600;
      }
      func_0x000107c5edbc();
      if (uVar5 != 0) {
        if ((param_2 == 0x6b6e6c2e70616e73) && (uVar5 == 0xeb000000006f742e)) {
          func_0x000107c6142c();
        }
        else {
          func_0x000107c605b8();
          func_0x000107c6142c();
          if ((param_2 & 1) == 0) goto LAB_1037b76b0;
        }
        func_0x0001000d224c(&lStack_68);
        if (lStack_68 != 0) {
          FUN_1037b7230();
          func_0x000107c61170(lStack_68);
          if ((uVar5 & 1) != 0) goto LAB_1037b76b0;
        }
        func_0x000107c61604(unaff_x20 + _DAT_112f93e30,uStack_70);
        FUN_1037b771c(lVar8);
        (**(code **)(lVar11 + 8))(lVar8,lVar3);
        return 0;
      }
    }
  }
LAB_1037b76b0:
  (**(code **)(lVar11 + 8))(lVar8,lVar3);
  return 1;
}



/* Entry: 1037b771c; end: 1037b7b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b771c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = -(lVar15 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  puVar4 = puVar3;
  func_0x000107c4c12c();
  func_0x000107c61180();
  *(undefined8 *)((long)auStack_c0 + lVar10) = 0xe000000000000000;
  uVar5 = 0x65756e69746e6f63;
  uVar11 = 0xe800000000000000;
  func_0x000107c5ecac(0x65756e69746e6f63,0xe800000000000000,0,0,puVar4,0,0xe000000000000000,0);
  func_0x000107c61170(puVar4);
  puVar4 = &UNK_110695110;
  func_0x000107c613fc(&UNK_110695110,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  (**(code **)(lVar14 + 0x10))(auStack_b0 + lVar10,param_1,lVar2);
  uVar13 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar16 = uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff);
  puVar6 = &UNK_110695138;
  func_0x000107c613fc(&UNK_110695138,uVar16 + lVar15,uVar13 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  (**(code **)(lVar14 + 0x20))(puVar6 + uVar16,auStack_b0 + lVar10,lVar2);
  func_0x000107c6157c(puVar4);
  func_0x000107c5fadc(uVar5,uVar11);
  func_0x000107c6142c(uVar11);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1037b7e2c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_110695150;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  puVar9 = puVar8;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar5);
  puVar6 = puStack_78;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c12c(puVar3);
  func_0x000107c61180();
  *(undefined8 *)((long)auStack_c0 + lVar10) = 0xe000000000000000;
  uVar11 = 0x6c65636e6163;
  uVar12 = 0xe600000000000000;
  func_0x000107c5ecac(0x6c65636e6163,0xe600000000000000,0,0,puVar3,0,0xe000000000000000,0);
  func_0x000107c61170(puVar3);
  uVar5 = uVar12;
  func_0x000107c5fadc(uVar11,uVar12);
  func_0x000107c6142c(uVar12);
  pcStack_80 = (code *)0x1037b8068;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_110695178;
  ppuVar7 = &puStack_a0;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar11);
  puVar4 = puStack_78;
  func_0x000107c61574();
  FUN_1037b8718();
  lVar10 = (long)puVar4;
  uVar11 = uVar5;
  func_0x0001037b87e8();
  lVar2 = lVar10;
  func_0x000100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 5;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(undefined **)(lVar2 + 0x20) = puVar9;
  *(undefined **)(lVar2 + 0x28) = puVar8;
  puVar6 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar8);
  func_0x000107c5fadc(puVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fadc(lVar10,uVar11);
  func_0x000107c6142c(uVar11);
  uVar5 = 0;
  func_0x000100dfe1a0(0);
  lVar14 = lVar2;
  func_0x000107c5fc48(lVar2,uVar5);
  func_0x000107c61574(lVar2);
  func_0x000107c48d50(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar14);
  lVar10 = unaff_x20 + _DAT_112f93e28;
  func_0x000107c61618();
  if (lVar10 != 0) {
    func_0x000107c4ee80();
    func_0x000107c615e8(lVar10);
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 1037b7b44; end: 1037b7bbb; -[_TtC24LinkfireNavigationPlugin24LinkfireNavigationPlugin webView:decidePolicyForNavigationAction:] */

undefined8
FUN_1037b7b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1037b73f4(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1037b7bbc; end: 1037b7bfb;  */

undefined8 FUN_1037b7bbc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1037b7bfc; end: 1037b7e2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b7bfc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&puStack_c0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(lVar2 + _DAT_112f93e20);
    func_0x000107c6157c(uVar8);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(&puStack_c0);
    func_0x000107c61574(uVar8);
    if (puStack_c0 != (undefined *)0x0) {
      uVar8 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010f167540);
      uVar3 = 1;
      func_0x000107c5fca0(1);
      func_0x000107c54908(puStack_c0);
      func_0x000107c61170(puStack_c0);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar3);
    }
  }
  puVar4 = &UNK_110695110;
  func_0x000107c613fc(&UNK_110695110,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar4 + 0x10,param_2);
  func_0x000107c61170(param_2);
  (**(code **)(lVar12 + 0x10))(lVar9,param_3,lVar1);
  uVar7 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar11 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1106951b0;
  func_0x000107c613fc(&UNK_1106951b0,uVar11 + lVar10,uVar7 | 7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  (**(code **)(lVar12 + 0x20))(puVar5 + uVar11,lVar9,lVar1);
  pcStack_a0 = FUN_1037b8290;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1106951c8;
  ppuVar6 = &puStack_c0;
  puStack_98 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_98);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 1037b7e2c; end: 1037b7ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b7e2c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = 0;
  func_0x000107c5ede0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&puStack_c0 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar7 + 0x10,auStack_78,0,0);
  lVar6 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uVar9 = *(undefined8 *)(lVar6 + _DAT_112f93e20);
    func_0x000107c6157c(uVar9);
    func_0x000107c61170(lVar6);
    func_0x0001000d224c(&puStack_c0);
    func_0x000107c61574(uVar9);
    if (puStack_c0 != (undefined *)0x0) {
      uVar9 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010f167540);
      uVar2 = 1;
      func_0x000107c5fca0(1);
      func_0x000107c54908(puStack_c0);
      func_0x000107c61170(puStack_c0);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar2);
    }
  }
  puVar3 = &UNK_110695110;
  func_0x000107c613fc(&UNK_110695110,0x18,7);
  func_0x000107c61428(lVar7 + 0x10,auStack_90,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618(lVar7);
  func_0x000107c61614(puVar3 + 0x10,lVar7);
  func_0x000107c61170(lVar7);
  (**(code **)(lVar13 + 0x10))
            (lVar10,unaff_x20 + (uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff)),lVar1);
  uVar8 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1106951b0;
  func_0x000107c613fc(&UNK_1106951b0,uVar12 + lVar11,uVar8 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  (**(code **)(lVar13 + 0x20))(puVar4 + uVar12,lVar10,lVar1);
  pcStack_a0 = FUN_1037b8290;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1106951c8;
  ppuVar5 = &puStack_c0;
  puStack_98 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_98);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 1037b7ec8; end: 1037b804b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b7ec8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_60 [2];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = -(lVar11 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ed70();
  plVar1 = (long *)(unaff_x20 + _DAT_112f93e38);
  lVar8 = plVar1[1];
  *plVar1 = lVar4;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar8);
  puVar5 = &UNK_110695110;
  func_0x000107c613fc(&UNK_110695110,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  (**(code **)(lVar12 + 0x10))(&stack0xffffffffffffffb0 + lVar2,param_1,lVar3);
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar10 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
  puVar6 = &UNK_110695200;
  func_0x000107c613fc(&UNK_110695200,uVar10 + lVar11,uVar9 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  (**(code **)(lVar12 + 0x20))(puVar6 + uVar10,&stack0xffffffffffffffb0 + lVar2,lVar3);
  puVar5 = &UNK_110695228;
  func_0x000107c613fc(&UNK_110695228,0x20,7);
  *(undefined **)(puVar5 + 0x10) = &UNK_10dc0d288;
  *(undefined **)(puVar5 + 0x18) = puVar6;
  uVar7 = 0x112d7e678;
  func_0x0001000285a8(0x112d7e678,&UNK_10d93c790);
  *(undefined8 *)((long)auStack_60 + lVar2) = uVar7;
  uVar7 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc0d298,puVar5);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  return;
}



/* Entry: 1037b804c; end: 1037b8073;  */

void FUN_1037b804c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1037b8074; end: 1037b812f;  */

void FUN_1037b8074(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  lVar1 = 0;
  func_0x000107c5eb08();
  *(long *)(unaff_x22 + 0x50) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037b8130,uVar3,uVar4);
  return;
}



/* Entry: 1037b8130; end: 1037b824b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b8130(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar3 = lVar5 + _DAT_112f93e30;
    func_0x000107c61618();
    func_0x000107c61170(lVar5);
    if (lVar3 != 0) {
      lVar5 = *(long *)(unaff_x22 + 0x58);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
      (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x10))
                (uVar4,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
      func_0x000107c5eaec(uVar1,0x404e000000000000,uVar4,0);
      func_0x000107c5eae0();
      (**(code **)(lVar5 + 8))(uVar1,uVar2);
      lVar5 = lVar3;
      func_0x000107c4b768(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar3);
      goto LAB_1037b8218;
    }
  }
  lVar5 = 0;
LAB_1037b8218:
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001037b8248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar5);
  return;
}



/* Entry: 1037b824c; end: 1037b828f;  */

void FUN_1037b824c(undefined8 param_1)

{
  undefined8 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined8 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001037b828c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1037b8290; end: 1037b82bf;  */

void FUN_1037b8290(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1037b7ec8(unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1037b82c0; end: 1037b832b;  */

void FUN_1037b82c0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037b832c; end: 1037b839b;  */

void FUN_1037b832c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1037b839c;
  plVar3[5] = lVar2;
  plVar3[6] = unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff));
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar3[7] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar3[8] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[9] = uVar4;
  lVar2 = 0;
  func_0x000107c5eb08();
  plVar3[10] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar3[0xb] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xc] = uVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xd] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037b8130,lVar1,lVar2);
  return;
}



/* Entry: 1037b839c; end: 1037b83df;  */

void FUN_1037b839c(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001037b83dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1037b83e0; end: 1037b844f;  */

void FUN_1037b83e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1037b8450;
  (*(code *)&UNK_1014243d0)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1037b8450; end: 1037b848b;  */

void FUN_1037b8450(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001037b8488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1037b848c; end: 1037b84af;  */

undefined8 FUN_1037b848c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1037b84b0; end: 1037b84bf;  */

void FUN_1037b84b0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1037b84c0; end: 1037b853f;  */

void FUN_1037b84c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f93de0,&UNK_10dc0d200);
  puVar1 = &UNK_110695250;
  func_0x000107c613fc(&UNK_110695250,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1037b8700,puVar1);
  return;
}



/* Entry: 1037b8540; end: 1037b86ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b8540(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lStack_78;
  long lStack_70;
  long alStack_68 [3];
  
  func_0x000100083b20(alStack_68);
  lVar4 = alStack_68[0];
  if (*(ulong *)(alStack_68[0] + _DAT_11307c330) < 0x20 &&
      (1L << (*(ulong *)(alStack_68[0] + _DAT_11307c330) & 0x3f) & 0xc0080080U) != 0) {
    func_0x000100083b20(alStack_68);
    lVar6 = alStack_68[0];
    func_0x000107c42eac();
    func_0x000107c61180();
    func_0x000107c61170(alStack_68[0]);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1037b8700);
      (*pcVar5)();
    }
    func_0x0001000285a8(0x112dbfa50,&UNK_10d97b760);
    lVar7 = lVar6;
    func_0x0001000bda74();
    func_0x000107c61170(lVar6);
    lVar6 = _DAT_11307c340;
    func_0x000107c61428(lVar4 + _DAT_11307c340,alStack_68,0,0);
    lVar6 = lVar4 + lVar6;
    func_0x000107c61618(lVar6);
    lVar8 = 0;
    FUN_1037b73d4();
    lVar9 = lVar8;
    func_0x000107c610f8();
    lVar3 = _DAT_112f93e28;
    func_0x000107c61614(lVar9 + _DAT_112f93e28,0);
    func_0x000107c61614(lVar9 + _DAT_112f93e30,0);
    puVar1 = (undefined8 *)(lVar9 + _DAT_112f93e38);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(long *)(lVar9 + _DAT_112f93e20) = lVar7;
    func_0x000107c61604(lVar9 + lVar3,lVar6);
    puVar2 = PTR_s_init_1125d9248;
    lStack_78 = lVar9;
    lStack_70 = lVar8;
    func_0x000107c6157c(lVar7);
    plVar10 = &lStack_78;
    func_0x000107c61154(plVar10,puVar2);
    func_0x000107c61574(lVar7);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar4);
  }
  else {
    func_0x000107c61170(alStack_68[0]);
    plVar10 = (long *)0x0;
  }
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1037b8700; end: 1037b8717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b8700(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long *plVar10;
  long lStack_78;
  long lStack_70;
  long alStack_68 [3];
  
  func_0x000100083b20(alStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar4 = alStack_68[0];
  if (*(ulong *)(alStack_68[0] + _DAT_11307c330) < 0x20 &&
      (1L << (*(ulong *)(alStack_68[0] + _DAT_11307c330) & 0x3f) & 0xc0080080U) != 0) {
    func_0x000100083b20(alStack_68);
    lVar6 = alStack_68[0];
    func_0x000107c42eac();
    func_0x000107c61180();
    func_0x000107c61170(alStack_68[0]);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1037b8700);
      (*pcVar5)();
    }
    func_0x0001000285a8(0x112dbfa50,&UNK_10d97b760);
    lVar7 = lVar6;
    func_0x0001000bda74();
    func_0x000107c61170(lVar6);
    lVar6 = _DAT_11307c340;
    func_0x000107c61428(lVar4 + _DAT_11307c340,alStack_68,0,0);
    lVar6 = lVar4 + lVar6;
    func_0x000107c61618(lVar6);
    lVar8 = 0;
    FUN_1037b73d4();
    lVar9 = lVar8;
    func_0x000107c610f8();
    lVar3 = _DAT_112f93e28;
    func_0x000107c61614(lVar9 + _DAT_112f93e28,0);
    func_0x000107c61614(lVar9 + _DAT_112f93e30,0);
    puVar1 = (undefined8 *)(lVar9 + _DAT_112f93e38);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(long *)(lVar9 + _DAT_112f93e20) = lVar7;
    func_0x000107c61604(lVar9 + lVar3,lVar6);
    puVar2 = PTR_s_init_1125d9248;
    lStack_78 = lVar9;
    lStack_70 = lVar8;
    func_0x000107c6157c(lVar7);
    plVar10 = &lStack_78;
    func_0x000107c61154(plVar10,puVar2);
    func_0x000107c61574(lVar7);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar4);
  }
  else {
    func_0x000107c61170(alStack_68[0]);
    plVar10 = (long *)0x0;
  }
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1037b8718; end: 1037b893b;  */

undefined1  [16] FUN_1037b8718(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6968745f79616c70;
  func_0x000107c5fadc(0x6968745f79616c70,0xef646e756f735f73);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1675d0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b87e8);
  (*pcVar1)();
}



/* Entry: 1037b893c; end: 1037b899b; -[_TtC44WebViewNavigationSaberPluginScopeGraphBridge59WebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037b893c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebViewNavigationSaberPluginScopeGraphBridge.WebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b8968);
  (*pcVar1)();
}



/* Entry: 1037b899c; end: 1037b89d3; -[_TtC44WebViewNavigationSaberPluginScopeGraphBridge59WebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037b89b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b89bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b899c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93e68));
  return;
}



/* Entry: 1037b89d4; end: 1037b89fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b89d4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f93e70),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f93e68));
  return;
}



/* Entry: 1037b89fc; end: 1037b8a1b;  */

void FUN_1037b89fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128eb1a8);
  return;
}



/* Entry: 1037b8a1c; end: 1037b8aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037b8a1c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f93ea0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f93ea8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1037b8aa4);
  (*pcVar2)();
}



/* Entry: 1037b8aa4; end: 1037b8b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1037b8aa4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f93ea0);
  *(undefined **)(unaff_x20 + _DAT_112f93ea0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f93ea8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f93ea8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110695390;
  func_0x000107c613fc(&UNK_110695390,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1037b8b90,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1037b8b8c; end: 1037b8b97;  */

void FUN_1037b8b8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}


