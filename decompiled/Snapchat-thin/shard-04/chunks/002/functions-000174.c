/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10327e0cc; end: 10327e12f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10327e0cc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f4ff08);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10327e130; end: 10327e137;  */

void FUN_10327e130(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10327e138; end: 10327e1d7;  */

void FUN_10327e138(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10327e1d8; end: 10327e1f7;  */

void FUN_10327e1d8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10327e1f8; end: 10327e27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10327e1f8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4fec0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f4fec8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10327e280);
  (*pcVar2)();
}



/* Entry: 10327e280; end: 10327e367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10327e280(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4fec0);
  *(undefined **)(unaff_x20 + _DAT_112f4fec0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4fec8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f4fec8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106301a8;
  func_0x000107c613fc(&UNK_1106301a8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10327e36c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10327e368; end: 10327e373;  */

void FUN_10327e368(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10327e374; end: 10327e3d3; -[_TtC54DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge69SCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint init] */

void FUN_10327e374(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge.SCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint"
                      ,0x7c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327e3a0);
  (*pcVar1)();
}



/* Entry: 10327e3d4; end: 10327e40b; -[_TtC54DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge69SCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327e3d4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f4fec8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4fec0));
  return;
}



/* Entry: 10327e40c; end: 10327e40f;  */

void FUN_10327e40c(void)

{
  return;
}



/* Entry: 10327e410; end: 10327e42f;  */

void FUN_10327e410(void)

{
  FUN_10327e280();
  return;
}



/* Entry: 10327e430; end: 10327e44f;  */

void FUN_10327e430(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4e28);
  return;
}



/* Entry: 10327e450; end: 10327e51f;  */

undefined8 FUN_10327e450(void)

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
  
  func_0x000107c61428(0x112f4fef8,&uStack_40,0x20,0);
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
    FUN_10327e520();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10327e520; end: 10327e53f;  */

void FUN_10327e520(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4ef0);
  return;
}



/* Entry: 10327e540; end: 10327e563;  */

void FUN_10327e540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106301f0;
  func_0x0001000285a8(0x112f4ff00,&UNK_10dba4548);
  func_0x000107c613fc(&UNK_1106301f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10327e5e8,puVar1);
  return;
}



/* Entry: 10327e564; end: 10327e5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327e564(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10327e520();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f4ff08) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f4ff10) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10327e5e8; end: 10327e5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327e5e8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_10327e520();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f4ff08) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f4ff10) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 10327e5f0; end: 10327e653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327e5f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4ff08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f4ff10) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10327e654; end: 10327e6b3; -[_TtC54DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge62DeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeServices init] */

void FUN_10327e654(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge.DeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeServices"
                      ,0x75,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327e680);
  (*pcVar1)();
}



/* Entry: 10327e6b4; end: 10327e7f7; -[_TtC54DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge62DeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010327e6d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010327e6d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327e6b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4ff08));
  return;
}



/* Entry: 10327e7f8; end: 10327e823;  */

undefined8 FUN_10327e7f8(void)

{
  return 0x1b;
}



/* Entry: 10327e824; end: 10327e8a3;  */

void FUN_10327e824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 10327e8a4; end: 10327e99b;  */

void FUN_10327e8a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f4fef8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f4fef8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106302f0;
  func_0x000107c613fc(&UNK_1106302f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10327ea9c;
  func_0x00010058fa64(0x10327ea9c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10327e99c; end: 10327e9c7;  */

void FUN_10327e99c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10327e9c8; end: 10327e9cf;  */

void FUN_10327e9c8(undefined8 *param_1)

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
  func_0x000107c61428(0x112f4fef8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f4fef8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106302f0;
  func_0x000107c613fc(&UNK_1106302f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10327ea9c;
  func_0x00010058fa64(0x10327ea9c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10327e9d0; end: 10327ea2b;  */

void FUN_10327e9d0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f4fef8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f4fef8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10327ea2c; end: 10327eaa3;  */

undefined ** FUN_10327ea2c(void)

{
  return &PTR_DAT_113066aa8;
}



/* Entry: 10327eaa4; end: 10327eaeb; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327eaa4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4ff68;
  func_0x000107c61428(param_1 + _DAT_112f4ff68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10327eaec; end: 10327eb43; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327eaec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ff68;
  func_0x000107c61428(param_1 + _DAT_112f4ff68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10327eb44; end: 10327eb8b; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint sCUnifiedPublicProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327eb44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4ff70;
  func_0x000107c61428(param_1 + _DAT_112f4ff70,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10327eb8c; end: 10327eb97; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint setSCUnifiedPublicProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327eb8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ff70;
  func_0x000107c61428(param_1 + _DAT_112f4ff70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10327eb98; end: 10327ebdf; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint deepLinkHandlingProcedureAuthenticatedScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327eb98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4ff78;
  func_0x000107c61428(param_1 + _DAT_112f4ff78,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10327ebe0; end: 10327ebeb; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint setDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327ebe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ff78;
  func_0x000107c61428(param_1 + _DAT_112f4ff78,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10327ebec; end: 10327ec4b;  */

void FUN_10327ebec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10327ec4c; end: 10327ee07;  */

/* WARNING: Possible PIC construction at 0x00010327ed64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327ed88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327ed98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327eddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010327ed9c) */
/* WARNING: Removing unreachable block (ram,0x00010327ed8c) */
/* WARNING: Removing unreachable block (ram,0x00010327ed68) */
/* WARNING: Removing unreachable block (ram,0x00010327ede0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327ec4c(void)

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
  func_0x000107c514d8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c414ec();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10327e0ac();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10327e450();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10327ee08);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f4fdb8) = lVar5;
      *(long *)(lVar3 + _DAT_112f4fdc0) = unaff_x20;
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



/* Entry: 10327ee08; end: 10327ee2f; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10327ee08(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10327ec4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10327ee30; end: 10327ee73; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint end] */

void FUN_10327ee30(undefined8 param_1)

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



/* Entry: 10327ee74; end: 10327f077;  */

void FUN_10327ee74(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0ecc330)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f133cd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000045;
        if (((param_2 != -0x2fffffffffffffbb) || (param_3 != -0x7ffffffef0ecc300)) &&
           (func_0x000107c605b8(0xd000000000000045,0x800000010f133d00,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge/SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x84,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10327f078);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53f0c();
        goto LAB_10327ef00;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58a80();
  }
LAB_10327ef00:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10327f078; end: 10327f123; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10327f078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10327ee74(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10327f124; end: 10327f19b; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f124(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4ff68,0);
  *(undefined8 *)(param_1 + _DAT_112f4ff70) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4ff78) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4ff80) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10327f19c; end: 10327f1cf;  */

void FUN_10327f19c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10327f1d0; end: 10327f227; -[SCDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010327f1fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010327f200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f1d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4ff68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4ff70));
  return;
}



/* Entry: 10327f228; end: 10327f247;  */

void FUN_10327f228(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4fb8);
  return;
}



/* Entry: 10327f248; end: 10327f253; -[SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f248(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4ffb0;
  func_0x000107c61428(param_1 + _DAT_112f4ffb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10327f254; end: 10327f25f; -[SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ffb0;
  func_0x000107c61428(param_1 + _DAT_112f4ffb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10327f260; end: 10327f26b; -[SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider deepLinkHandlingProcedureAuthenticatedScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f260(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4ffb8;
  func_0x000107c61428(param_1 + _DAT_112f4ffb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10327f26c; end: 10327f2af;  */

void FUN_10327f26c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10327f2b0; end: 10327f2bb; -[SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider setDeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f2b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ffb8;
  func_0x000107c61428(param_1 + _DAT_112f4ffb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10327f2bc; end: 10327f30f;  */

void FUN_10327f2bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10327f310; end: 10327f523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10327f310(void)

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
    func_0x000107c414e8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010327e15c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f4ff08);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f4ffc0);
      *(long *)(unaff_x20 + _DAT_112f4ffc0) = lVar4;
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
                      "DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge/SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider.swift"
                      ,0x7c,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327f43c);
  (*pcVar1)();
}



/* Entry: 10327f524; end: 10327f557; -[SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider provide] */

void FUN_10327f524(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10327f310();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10327f558; end: 10327f58b; -[SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider __safeProvide] */

void FUN_10327f558(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010327f43c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10327f58c; end: 10327f5cf; -[SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider end] */

void FUN_10327f58c(undefined8 param_1)

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



/* Entry: 10327f5d0; end: 10327f767;  */

void FUN_10327f5d0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc2) || (param_3 != -0x7ffffffef0ecc1a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000003e,0x800000010f133e60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge/SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider.swift"
                            ,0x7c,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10327f768);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53f08();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10327f768; end: 10327f813; -[SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_10327f768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10327f5d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10327f814; end: 10327f887; -[SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f814(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4ffb0,0);
  func_0x000107c61614(param_1 + _DAT_112f4ffb8,0);
  *(undefined8 *)(param_1 + _DAT_112f4ffc0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10327f888; end: 10327f8bb;  */

void FUN_10327f888(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10327f8bc; end: 10327f903; -[SCSCDeepLinkAuthProcessorPluginSaberServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f8bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4ffb0);
  func_0x000107c61610(param_1 + _DAT_112f4ffb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4ffc0));
  return;
}



/* Entry: 10327f904; end: 10327f923;  */

void FUN_10327f904(void)

{
  func_0x000107c61168(&PTR_PTR_112f50008);
  return;
}



/* Entry: 10327f924; end: 10327f96b; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f924(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f50070;
  func_0x000107c61428(param_1 + _DAT_112f50070,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10327f96c; end: 10327f9c3; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f50070;
  func_0x000107c61428(param_1 + _DAT_112f50070,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10327f9c4; end: 10327fa9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327f9c4(undefined8 param_1,long param_2)

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
    FUN_10327e430();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f4fec0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10327fa9c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f4fec8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f50078);
    *(long **)(unaff_x20 + _DAT_112f50078) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10327fa9c; end: 10327fac3; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint begin] */

void FUN_10327fa9c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10327f9c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10327fac4; end: 10327fc3b;  */

/* WARNING: Possible PIC construction at 0x00010327fb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327fbc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010327fb30) */
/* WARNING: Removing unreachable block (ram,0x00010327fbc8) */
/* WARNING: Removing unreachable block (ram,0x00010327fbe0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327fac4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f50078);
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



/* Entry: 10327fc3c; end: 10327fc43;  */

void FUN_10327fc3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10327fc44; end: 10327fc77; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint end] */

void FUN_10327fc44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10327fac4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10327fc78; end: 10327fd97;  */

void FUN_10327fc78(long param_1,long param_2,long param_3)

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
                        "DeepLinkHandlingProcedureAuthenticatedScopeGraphBridge/SCSCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint.swift"
                        ,0x84,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10327fd98);
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



/* Entry: 10327fd98; end: 10327fe43; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10327fd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10327fc78(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10327fe44; end: 10327fea3; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327fe44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f50070,0);
  *(undefined8 *)(param_1 + _DAT_112f50078) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10327fea4; end: 10327fed7;  */

void FUN_10327fea4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10327fed8; end: 10327ff0f; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327fed8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f50070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f50078));
  return;
}



/* Entry: 10327ff10; end: 10327ff2f;  */

void FUN_10327ff10(void)

{
  func_0x000107c61168(&PTR_PTR_1128c50d0);
  return;
}



/* Entry: 10327ff30; end: 10327ff7b;  */

void FUN_10327ff30(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10327ffec,param_1);
  return;
}



/* Entry: 10327ff7c; end: 10327ffeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327ff7c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_103280874();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f500a8) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10327ffec; end: 103280003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327ffec(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_103280874();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f500a8) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 103280004; end: 103280063; -[_TtC21GamesExplorerDeepLink30GamesExplorerDeepLinkProcessor init] */

void FUN_103280004(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerDeepLink.GamesExplorerDeepLinkProcessor",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103280030);
  (*pcVar1)();
}



/* Entry: 103280064; end: 103280073; -[_TtC21GamesExplorerDeepLink30GamesExplorerDeepLinkProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103280064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f500a8));
  return;
}



/* Entry: 103280074; end: 1032800c3; -[_TtC21GamesExplorerDeepLink30GamesExplorerDeepLinkProcessor identifier] */

void FUN_103280074(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uStack_28 = param_1;
  func_0x000107c614e4();
  puVar1 = &uStack_28;
  func_0x000107c5fb18(puVar1,param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1032800c4; end: 1032800cb; -[_TtC21GamesExplorerDeepLink30GamesExplorerDeepLinkProcessor priority] */

undefined8 FUN_1032800c4(void)

{
  return 1000;
}



/* Entry: 1032800cc; end: 103280153; -[_TtC21GamesExplorerDeepLink30GamesExplorerDeepLinkProcessor canProvideProcessorForFeature:] */

uint FUN_1032800cc(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == 0x78655f73656d6167) && (param_2 == -0x11ff8d9a8d909390)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 103280154; end: 103280223; -[_TtC21GamesExplorerDeepLink30GamesExplorerDeepLinkProcessor isValidDeepLink:] */

uint FUN_103280154(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c615f0(param_3);
  lVar1 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    if ((lVar2 == 0x78655f73656d6167) && (param_2 == -0x11ff8d9a8d909390)) {
      uVar3 = 1;
    }
    else {
      func_0x000107c605b8(lVar2,param_2,0x78655f73656d6167,0xee007265726f6c70,0);
      uVar3 = (uint)lVar2;
    }
    func_0x000107c6142c(param_2);
  }
  func_0x000107c615e8(param_3);
  return uVar3 & 1;
}



/* Entry: 103280224; end: 103280227; -[_TtC21GamesExplorerDeepLink30GamesExplorerDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_103280224(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103280228; end: 10328030b;  */

void FUN_103280228(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 == 0) {
      func_0x000107c61428(param_4 + 0x10,auStack_60,0,0);
      param_4 = param_4 + 0x10;
      func_0x000107c61618();
      if (param_4 != 0) {
        func_0x000107c42804();
        func_0x000107c615e8(param_4);
      }
    }
    else {
      func_0x000107c61428(param_4 + 0x10,auStack_60,0,0);
      param_4 = param_4 + 0x10;
      func_0x000107c61618();
      if (param_4 != 0) {
        func_0x000107c614b0(param_1);
        lVar1 = param_1;
        func_0x000107c5ed2c(param_1);
        func_0x000107c42808(param_4);
        func_0x000107c614ac(param_1);
        func_0x000107c615e8(param_4);
        func_0x000107c61170(lVar1);
      }
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10328030c; end: 1032803a7; -[_TtC21GamesExplorerDeepLink30GamesExplorerDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10328030c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1032804e4(param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1032803a8; end: 1032803af; -[_TtC21GamesExplorerDeepLink30GamesExplorerDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1032803a8(void)

{
  return 1;
}



/* Entry: 1032803b0; end: 103280413; -[_TtC21GamesExplorerDeepLink30GamesExplorerDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

/* WARNING: Possible PIC construction at 0x0001032803f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032803f8) */

void FUN_1032803b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x0001032807bc(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103280414; end: 103280427;  */

bool FUN_103280414(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103280428; end: 1032804d3;  */

void FUN_103280428(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1032804d4; end: 1032804e3;  */

void FUN_1032804d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1032804e4; end: 103280873;  */

/* WARNING: Possible PIC construction at 0x000103280544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010328067c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103280798: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103280680) */
/* WARNING: Removing unreachable block (ram,0x000103280684) */
/* WARNING: Removing unreachable block (ram,0x000103280548) */
/* WARNING: Removing unreachable block (ram,0x0001032805bc) */
/* WARNING: Removing unreachable block (ram,0x00010328054c) */
/* WARNING: Removing unreachable block (ram,0x00010328058c) */
/* WARNING: Removing unreachable block (ram,0x00010328061c) */
/* WARNING: Removing unreachable block (ram,0x000103280624) */
/* WARNING: Removing unreachable block (ram,0x0001032805a0) */
/* WARNING: Removing unreachable block (ram,0x00010328062c) */
/* WARNING: Removing unreachable block (ram,0x00010328068c) */
/* WARNING: Removing unreachable block (ram,0x00010328063c) */
/* WARNING: Removing unreachable block (ram,0x000103280694) */
/* WARNING: Removing unreachable block (ram,0x000103280698) */
/* WARNING: Removing unreachable block (ram,0x000103280668) */
/* WARNING: Removing unreachable block (ram,0x00010328079c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032804e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c4bb48(param_2,param_2,0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f500a8);
  func_0x000107c4e26c(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103280874; end: 1032808d3;  */

void FUN_103280874(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5190);
  return;
}



/* Entry: 1032808d4; end: 103280a5f;  */

void FUN_1032808d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      func_0x000107c61428(lVar3 + 0x10,auStack_60,0,0);
      lVar3 = lVar3 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c42804();
        func_0x000107c615e8(lVar3);
      }
    }
    else {
      func_0x000107c61428(lVar3 + 0x10,auStack_60,0,0);
      lVar3 = lVar3 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c614b0(param_1);
        lVar2 = param_1;
        func_0x000107c5ed2c(param_1);
        func_0x000107c42808(lVar3);
        func_0x000107c614ac(param_1);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar2);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103280a60; end: 103280a9f;  */

void FUN_103280a60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f500e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba48fc;
  func_0x000107c61520(&UNK_10dba48fc,&UNK_110630500);
  puRam0000000112f500e0 = puVar1;
  return;
}



/* Entry: 103280aa0; end: 103280aa7;  */

undefined8 FUN_103280aa0(void)

{
  return 1;
}



/* Entry: 103280aa8; end: 103280b47;  */

void FUN_103280aa8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103280b48; end: 103280b4b;  */

void FUN_103280b48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f500e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba4970;
  func_0x000107c61520(&UNK_10dba4970,&UNK_110630670);
  puRam0000000112f500e8 = puVar1;
  return;
}



/* Entry: 103280b4c; end: 103280b8b;  */

void FUN_103280b4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f500e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba4970;
  func_0x000107c61520(&UNK_10dba4970,&UNK_110630670);
  puRam0000000112f500e8 = puVar1;
  return;
}



/* Entry: 103280b8c; end: 103280c87;  */

void FUN_103280b8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103280c88; end: 103280d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103280c88(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f500f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103280d20; end: 103280d9f; -[_TtC26GamesExplorerPageLaunchAPI30GamesExplorerPageLaunchPayload init] */

void FUN_103280d20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerPageLaunchAPI.GamesExplorerPageLaunchPayload",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103280d4c);
  (*pcVar1)();
}


