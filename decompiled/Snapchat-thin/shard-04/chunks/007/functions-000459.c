/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037b8b98; end: 1037b8bf7; -[_TtC44WebViewNavigationSaberPluginScopeGraphBridge57WebViewNavigationSaberPluginScopedServicesSaberEntryPoint init] */

void FUN_1037b8b98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebViewNavigationSaberPluginScopeGraphBridge.WebViewNavigationSaberPluginScopedServicesSaberEntryPoint"
                      ,0x66,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b8bc4);
  (*pcVar1)();
}



/* Entry: 1037b8bf8; end: 1037b8c2f; -[_TtC44WebViewNavigationSaberPluginScopeGraphBridge57WebViewNavigationSaberPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b8bf8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f93ea8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93ea0));
  return;
}



/* Entry: 1037b8c30; end: 1037b8c33;  */

void FUN_1037b8c30(void)

{
  return;
}



/* Entry: 1037b8c34; end: 1037b8c53;  */

void FUN_1037b8c34(void)

{
  FUN_1037b8aa4();
  return;
}



/* Entry: 1037b8c54; end: 1037b8c73;  */

void FUN_1037b8c54(void)

{
  func_0x000107c61168(&PTR_PTR_1128eb270);
  return;
}



/* Entry: 1037b8c74; end: 1037b8d43;  */

undefined8 FUN_1037b8c74(void)

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
  
  func_0x000107c61428(0x112f93ed8,&uStack_40,0x20,0);
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
    FUN_1037b8d44();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1037b8d44; end: 1037b8d63;  */

void FUN_1037b8d44(void)

{
  func_0x000107c61168(&PTR_PTR_1128eb338);
  return;
}



/* Entry: 1037b8d64; end: 1037b8dcf;  */

void FUN_1037b8d64(void)

{
  func_0x0001000285a8(0x112f93ee0,&UNK_10dc0d3a8);
  func_0x0001000823a8(0x1037b8da4,0);
  return;
}



/* Entry: 1037b8dd0; end: 1037b8e0b; -[_TtC44WebViewNavigationSaberPluginScopeGraphBridge52WebViewNavigationSaberPluginScopeGraphBridgeServices init] */

void FUN_1037b8dd0(undefined8 param_1)

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



/* Entry: 1037b8e0c; end: 1037b8e3f;  */

void FUN_1037b8e0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037b8e40; end: 1037b8e47;  */

undefined8 FUN_1037b8e40(void)

{
  return 0x1b;
}



/* Entry: 1037b8e48; end: 1037b8fbf;  */

void FUN_1037b8e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106953d8;
  func_0x000107c613fc(&UNK_1106953d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1037b8fc0,puVar1);
  return;
}



/* Entry: 1037b8fc0; end: 1037b8fc7;  */

void FUN_1037b8fc0(undefined8 *param_1)

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
  func_0x000107c61428(0x112f93ed8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f93ed8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110695470;
  func_0x000107c613fc(&UNK_110695470,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1037b9074;
  func_0x00010058fa64(0x1037b9074,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1037b8fc8; end: 1037b9023;  */

void FUN_1037b8fc8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f93ed8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f93ed8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1037b9024; end: 1037b907b;  */

undefined ** FUN_1037b9024(void)

{
  return &PTR_DAT_1130671b0;
}



/* Entry: 1037b907c; end: 1037b90c3; -[SCWebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b907c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f93f38;
  func_0x000107c61428(param_1 + _DAT_112f93f38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037b90c4; end: 1037b911b; -[SCWebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b90c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f93f38;
  func_0x000107c61428(param_1 + _DAT_112f93f38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037b911c; end: 1037b9163; -[SCWebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint webViewNavigationSaberPluginScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b911c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f93f40;
  func_0x000107c61428(param_1 + _DAT_112f93f40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1037b9164; end: 1037b91c7; -[SCWebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint setWebViewNavigationSaberPluginScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b9164(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f93f40;
  func_0x000107c61428(param_1 + _DAT_112f93f40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1037b91c8; end: 1037b92fb;  */

/* WARNING: Possible PIC construction at 0x0001037b9280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037b929c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037b92b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b9284) */
/* WARNING: Removing unreachable block (ram,0x0001037b92a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b91c8(void)

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
  func_0x000107c5e250();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1037b89fc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1037b8c74();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b92fc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f93e68) = lVar5;
    *(long *)(lVar4 + _DAT_112f93e70) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1037b92fc; end: 1037b9323; -[SCWebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1037b92fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1037b91c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037b9324; end: 1037b9367; -[SCWebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint end] */

void FUN_1037b9324(undefined8 param_1)

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



/* Entry: 1037b9368; end: 1037b94ff;  */

void FUN_1037b9368(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc5) || (param_3 != -0x7ffffffef0e98930)) {
      uVar2 = 0xd00000000000003b;
      func_0x000107c605b8(0xd00000000000003b,0x800000010f1676d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "WebViewNavigationSaberPluginScopeGraphBridge/SCWebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x70,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b9500);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a6e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037b9500; end: 1037b95ab; -[SCWebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1037b9500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037b9368(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037b95ac; end: 1037b9617; -[SCWebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b95ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f93f38,0);
  *(undefined8 *)(param_1 + _DAT_112f93f40) = 0;
  *(undefined8 *)(param_1 + _DAT_112f93f48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037b9618; end: 1037b964b;  */

void FUN_1037b9618(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037b964c; end: 1037b9693; -[SCWebViewNavigationSaberPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037b9678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b967c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b964c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f93f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93f40));
  return;
}



/* Entry: 1037b9694; end: 1037b96b3;  */

void FUN_1037b9694(void)

{
  func_0x000107c61168(&PTR_PTR_1128eb3e8);
  return;
}



/* Entry: 1037b96b4; end: 1037b96fb; -[SCWebViewNavigationSaberPluginScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b96b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f93f78;
  func_0x000107c61428(param_1 + _DAT_112f93f78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037b96fc; end: 1037b9753; -[SCWebViewNavigationSaberPluginScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b96fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f93f78;
  func_0x000107c61428(param_1 + _DAT_112f93f78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037b9754; end: 1037b982b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b9754(undefined8 param_1,long param_2)

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
    FUN_1037b8c54();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f93ea0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037b982c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f93ea8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f93f80);
    *(long **)(unaff_x20 + _DAT_112f93f80) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1037b982c; end: 1037b9853; -[SCWebViewNavigationSaberPluginScopedServicesSaberEntryPoint begin] */

void FUN_1037b982c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1037b9754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037b9854; end: 1037b99cb;  */

/* WARNING: Possible PIC construction at 0x0001037b98bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037b9954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b98c0) */
/* WARNING: Removing unreachable block (ram,0x0001037b9958) */
/* WARNING: Removing unreachable block (ram,0x0001037b9970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b9854(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f93f80);
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



/* Entry: 1037b99cc; end: 1037b99d3;  */

void FUN_1037b99cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1037b99d4; end: 1037b9a07; -[SCWebViewNavigationSaberPluginScopedServicesSaberEntryPoint end] */

void FUN_1037b99d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037b9854();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037b9a08; end: 1037b9b27;  */

void FUN_1037b9a08(long param_1,long param_2,long param_3)

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
                        "WebViewNavigationSaberPluginScopeGraphBridge/SCWebViewNavigationSaberPluginScopedServicesSaberEntryPoint.swift"
                        ,0x6e,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b9b28);
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



/* Entry: 1037b9b28; end: 1037b9bd3; -[SCWebViewNavigationSaberPluginScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1037b9b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037b9a08(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037b9bd4; end: 1037b9c33; -[SCWebViewNavigationSaberPluginScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b9bd4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f93f78,0);
  *(undefined8 *)(param_1 + _DAT_112f93f80) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037b9c34; end: 1037b9c67;  */

void FUN_1037b9c34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037b9c68; end: 1037b9c9f; -[SCWebViewNavigationSaberPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b9c68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f93f78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93f80));
  return;
}



/* Entry: 1037b9ca0; end: 1037b9cbf;  */

void FUN_1037b9ca0(void)

{
  func_0x000107c61168(&PTR_PTR_1128eb4b0);
  return;
}



/* Entry: 1037b9cc0; end: 1037b9d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037b9cc0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100acaad4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f93fb0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f93fb8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b9d48);
  (*pcVar1)();
}



/* Entry: 1037b9d48; end: 1037b9da7; -[_TtC35ActivUserNavigationScopeGraphBridge50ActivUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037b9d48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActivUserNavigationScopeGraphBridge.ActivUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b9d74);
  (*pcVar1)();
}



/* Entry: 1037b9da8; end: 1037b9ddf; -[_TtC35ActivUserNavigationScopeGraphBridge50ActivUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037b9dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b9dc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b9da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93fb0));
  return;
}



/* Entry: 1037b9de0; end: 1037b9e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b9de0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f93fb8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f93fb0));
  return;
}



/* Entry: 1037b9e08; end: 1037b9e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037b9e08(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f940c8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037b9e6c; end: 1037b9e73;  */

void FUN_1037b9e6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037b9e74; end: 1037b9f13;  */

void FUN_1037b9e74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037b9f14; end: 1037b9f7f;  */

void FUN_1037b9f14(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037b9f80; end: 1037b9fdf; -[_TtC35ActivUserNavigationScopeGraphBridge43ActivUserNavigationScopeGraphBridgeServices init] */

void FUN_1037b9f80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActivUserNavigationScopeGraphBridge.ActivUserNavigationScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b9fac);
  (*pcVar1)();
}



/* Entry: 1037b9fe0; end: 1037b9fef; -[_TtC35ActivUserNavigationScopeGraphBridge43ActivUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b9fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f940c8));
  return;
}



/* Entry: 1037b9ff0; end: 1037ba04b;  */

void FUN_1037b9ff0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f940b8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f940b8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1037ba04c; end: 1037ba083;  */

undefined1  [16] FUN_1037ba04c(void)

{
  return ZEXT816(0x1106955c0);
}



/* Entry: 1037ba084; end: 1037ba0c7; -[SCActivUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_1037ba084(undefined8 param_1)

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



/* Entry: 1037ba0c8; end: 1037ba0fb;  */

void FUN_1037ba0c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037ba0fc; end: 1037ba143; -[SCActivUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037ba128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037ba12c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ba0fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f94120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f94128));
  return;
}



/* Entry: 1037ba144; end: 1037ba163;  */

void FUN_1037ba144(void)

{
  func_0x000107c61168(&PTR_PTR_1128eb6f8);
  return;
}



/* Entry: 1037ba164; end: 1037ba16f; -[SCSCSnapServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ba164(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f94160;
  func_0x000107c61428(param_1 + _DAT_112f94160,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037ba170; end: 1037ba17b; -[SCSCSnapServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ba170(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f94160;
  func_0x000107c61428(param_1 + _DAT_112f94160,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037ba17c; end: 1037ba187; -[SCSCSnapServicesSaberServiceProvider activUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ba17c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f94168;
  func_0x000107c61428(param_1 + _DAT_112f94168,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037ba188; end: 1037ba1cb;  */

void FUN_1037ba188(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037ba1cc; end: 1037ba1d7; -[SCSCSnapServicesSaberServiceProvider setActivUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ba1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f94168;
  func_0x000107c61428(param_1 + _DAT_112f94168,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037ba1d8; end: 1037ba22b;  */

void FUN_1037ba1d8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037ba22c; end: 1037ba43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037ba22c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d028();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037b9e98();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f940c8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f94170);
      *(long *)(unaff_x20 + _DAT_112f94170) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "ActivUserNavigationScopeGraphBridge/SCSCSnapServicesSaberServiceProvider.swift"
                      ,0x4e,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037ba358);
  (*pcVar1)();
}



/* Entry: 1037ba440; end: 1037ba473; -[SCSCSnapServicesSaberServiceProvider provide] */

void FUN_1037ba440(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037ba22c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037ba474; end: 1037ba4a7; -[SCSCSnapServicesSaberServiceProvider __safeProvide] */

void FUN_1037ba474(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037ba358();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037ba4a8; end: 1037ba4eb; -[SCSCSnapServicesSaberServiceProvider end] */

void FUN_1037ba4a8(undefined8 param_1)

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



/* Entry: 1037ba4ec; end: 1037ba683;  */

void FUN_1037ba4ec(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e98610)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f1679f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActivUserNavigationScopeGraphBridge/SCSCSnapServicesSaberServiceProvider.swift"
                            ,0x4e,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037ba684);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c521b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037ba684; end: 1037ba72f; -[SCSCSnapServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037ba684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037ba4ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037ba730; end: 1037ba7a3; -[SCSCSnapServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ba730(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f94160,0);
  func_0x000107c61614(param_1 + _DAT_112f94168,0);
  *(undefined8 *)(param_1 + _DAT_112f94170) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037ba7a4; end: 1037ba7d7;  */

void FUN_1037ba7a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037ba7d8; end: 1037ba81f; -[SCSCSnapServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ba7d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f94160);
  func_0x000107c61610(param_1 + _DAT_112f94168);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f94170));
  return;
}



/* Entry: 1037ba820; end: 1037ba83f;  */

void FUN_1037ba820(void)

{
  func_0x000107c61168(&PTR_PTR_112f941b8);
  return;
}



/* Entry: 1037ba840; end: 1037ba8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037ba840(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100acb11c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f94220) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f94228) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037ba8c8);
  (*pcVar1)();
}



/* Entry: 1037ba8c8; end: 1037ba927; -[_TtC34AdclUserNavigationScopeGraphBridge49AdclUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037ba8c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdclUserNavigationScopeGraphBridge.AdclUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037ba8f4);
  (*pcVar1)();
}



/* Entry: 1037ba928; end: 1037ba95f; -[_TtC34AdclUserNavigationScopeGraphBridge49AdclUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037ba944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037ba948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ba928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f94220));
  return;
}



/* Entry: 1037ba960; end: 1037ba987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ba960(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f94228),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f94220));
  return;
}



/* Entry: 1037ba988; end: 1037ba9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037ba988(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f94818);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037ba9ec; end: 1037ba9f3;  */

void FUN_1037ba9ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037ba9f4; end: 1037baa93;  */

void FUN_1037ba9f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037baa94; end: 1037baab3;  */

void FUN_1037baa94(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037baab4; end: 1037bab17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037baab4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f94820);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037bab18; end: 1037bab1f;  */

void FUN_1037bab18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037bab20; end: 1037babbf;  */

void FUN_1037bab20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037babc0; end: 1037babdf;  */

void FUN_1037babc0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037babe0; end: 1037bac43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037babe0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f94828);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037bac44; end: 1037bac4b;  */

void FUN_1037bac44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037bac4c; end: 1037baceb;  */

void FUN_1037bac4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037bacec; end: 1037bad0b;  */

void FUN_1037bacec(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037bad0c; end: 1037bad6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037bad0c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f94830);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037bad70; end: 1037bad77;  */

void FUN_1037bad70(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037bad78; end: 1037bae17;  */

void FUN_1037bad78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037bae18; end: 1037bae37;  */

void FUN_1037bae18(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037bae38; end: 1037bae9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037bae38(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f94838);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037bae9c; end: 1037baea3;  */

void FUN_1037bae9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037baea4; end: 1037baf43;  */

void FUN_1037baea4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037baf44; end: 1037baf63;  */

void FUN_1037baf44(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037baf64; end: 1037bafc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037baf64(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f94840);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037bafc8; end: 1037bafcf;  */

void FUN_1037bafc8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037bafd0; end: 1037bb06f;  */

void FUN_1037bafd0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


