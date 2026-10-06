/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036e84e4; end: 1036e850b;  */

void FUN_1036e84e4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1036e850c; end: 1036e8513;  */

undefined8 FUN_1036e850c(void)

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



/* Entry: 1036e8514; end: 1036e854f;  */

void FUN_1036e8514(undefined8 *param_1,undefined8 param_2)

{
  FUN_1036e8550();
  func_0x0001000a7f38("SCSpectaclesBoomboxScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1036e8550; end: 1036e873b;  */

void FUN_1036e8550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074db68;
  ppuVar4 = &PTR_DAT_113066ef8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f88868;
  func_0x0001000285a8(0x112f88868,&UNK_10dbfc768);
  func_0x0001000a6ee8(&UNK_1106834a8,
                      "SCSpectaclesBoomboxEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_1036e87b0,param_1,uVar2,&UNK_1106834a8,&PTR_DAT_112f88750);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1106834f8;
  func_0x000107c613fc(&UNK_1106834f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106832c8,"SCSpectaclesBoomboxScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1036e8860,puVar3,uVar2,&UNK_1106832c8,&PTR_DAT_112f886d0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110683520;
  func_0x000107c613fc(&UNK_110683520,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110683748,"SpectaclesBoomboxScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1036e8868,puVar3,uVar2,&UNK_110683748,&PTR_DAT_112f88900);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f88870;
  func_0x0001000285a8(0x112f88870,&UNK_10dbfc770);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1036e873c; end: 1036e87af;  */

void FUN_1036e873c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1036e88dc;
  func_0x0001000823a8(0x1036e88dc,param_3);
  func_0x000100082720("SCSpectaclesBoomboxEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1036e87b0; end: 1036e87b7;  */

void FUN_1036e87b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1036e88dc;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesBoomboxEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1036e87b8; end: 1036e885f;  */

void FUN_1036e87b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110683548;
  func_0x000107c613fc(&UNK_110683548,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1036e88d4;
  func_0x0001000823a8(FUN_1036e88d4,puVar1);
  func_0x000100082720("SCSpectaclesBoomboxScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1036e8860; end: 1036e8867;  */

void FUN_1036e8860(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110683548;
  func_0x000107c613fc(&UNK_110683548,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1036e88d4;
  func_0x0001000823a8(FUN_1036e88d4,puVar3);
  func_0x000100082720("SCSpectaclesBoomboxScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1036e8868; end: 1036e88a7;  */

void FUN_1036e8868(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1036e9068(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesBoomboxScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036e88a8; end: 1036e88d3;  */

void FUN_1036e88a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036e88d4; end: 1036e88e3;  */

void FUN_1036e88d4(undefined8 *param_1)

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
  puVar1 = &UNK_110683350;
  func_0x000107c613fc(&UNK_110683350,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036e6fa4;
  func_0x00010058fa64(FUN_1036e6fa4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036e88e4; end: 1036e89bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036e88e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1036e8cf8();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f88878) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f88880) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e89c0);
  (*pcVar1)();
}



/* Entry: 1036e89c0; end: 1036e8a1f; -[_TtC33SpectaclesBoomboxScopeGraphBridge48SpectaclesBoomboxScopeGraphBridgeSaberEntryPoint init] */

void FUN_1036e89c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesBoomboxScopeGraphBridge.SpectaclesBoomboxScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e89ec);
  (*pcVar1)();
}



/* Entry: 1036e8a20; end: 1036e8a57; -[_TtC33SpectaclesBoomboxScopeGraphBridge48SpectaclesBoomboxScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036e8a3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e8a40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e8a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f88878));
  return;
}



/* Entry: 1036e8a58; end: 1036e8a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e8a58(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f88880),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f88878));
  return;
}



/* Entry: 1036e8a80; end: 1036e8a9f;  */

void FUN_1036e8a80(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3608);
  return;
}



/* Entry: 1036e8aa0; end: 1036e8b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036e8aa0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f888b0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f888b8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036e8b28);
  (*pcVar2)();
}



/* Entry: 1036e8b28; end: 1036e8c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036e8b28(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f888b0);
  *(undefined **)(unaff_x20 + _DAT_112f888b0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f888b8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f888b8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110683668;
  func_0x000107c613fc(&UNK_110683668,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1036e8c14,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1036e8c10; end: 1036e8c1b;  */

void FUN_1036e8c10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036e8c1c; end: 1036e8c7b; -[_TtC33SpectaclesBoomboxScopeGraphBridge48SCSpectaclesBoomboxScopedServicesSaberEntryPoint init] */

void FUN_1036e8c1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesBoomboxScopeGraphBridge.SCSpectaclesBoomboxScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e8c48);
  (*pcVar1)();
}



/* Entry: 1036e8c7c; end: 1036e8cb3; -[_TtC33SpectaclesBoomboxScopeGraphBridge48SCSpectaclesBoomboxScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e8c7c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f888b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f888b0));
  return;
}



/* Entry: 1036e8cb4; end: 1036e8cb7;  */

void FUN_1036e8cb4(void)

{
  return;
}



/* Entry: 1036e8cb8; end: 1036e8cd7;  */

void FUN_1036e8cb8(void)

{
  FUN_1036e8b28();
  return;
}



/* Entry: 1036e8cd8; end: 1036e8cf7;  */

void FUN_1036e8cd8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e36d0);
  return;
}



/* Entry: 1036e8cf8; end: 1036e8dc7;  */

undefined8 FUN_1036e8cf8(void)

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
  
  func_0x000107c61428(0x112f888e8,&uStack_40,0x20,0);
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
    FUN_1036e8dc8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1036e8dc8; end: 1036e8de7;  */

void FUN_1036e8dc8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3798);
  return;
}



/* Entry: 1036e8de8; end: 1036e8e03;  */

void FUN_1036e8de8(undefined8 param_1)

{
  func_0x0001000285a8(0x112f888f0,&UNK_10dbfc848);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1036e8e70,param_1);
  return;
}



/* Entry: 1036e8e04; end: 1036e8e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e8e04(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1036e8dc8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f888f8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1036e8e70; end: 1036e8e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e8e70(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1036e8dc8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f888f8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1036e8e78; end: 1036e8ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e8e78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f888f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036e8ec4; end: 1036e8f23; -[_TtC33SpectaclesBoomboxScopeGraphBridge41SpectaclesBoomboxScopeGraphBridgeServices init] */

void FUN_1036e8ec4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesBoomboxScopeGraphBridge.SpectaclesBoomboxScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e8ef0);
  (*pcVar1)();
}



/* Entry: 1036e8f24; end: 1036e8f33; -[_TtC33SpectaclesBoomboxScopeGraphBridge41SpectaclesBoomboxScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e8f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f888f8));
  return;
}



/* Entry: 1036e8f34; end: 1036e8fbf;  */

void FUN_1036e8f34(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1036e8f74,0);
  return;
}



/* Entry: 1036e8fc0; end: 1036e8fdb;  */

void FUN_1036e8fc0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1036e902c,param_1);
  return;
}



/* Entry: 1036e8fdc; end: 1036e902b;  */

void FUN_1036e8fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1036e902c; end: 1036e905f;  */

void FUN_1036e902c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1036e9060; end: 1036e9067;  */

undefined8 FUN_1036e9060(void)

{
  return 0x1b;
}



/* Entry: 1036e9068; end: 1036e91df;  */

void FUN_1036e9068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106836b0;
  func_0x000107c613fc(&UNK_1106836b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1036e91e0,puVar1);
  return;
}



/* Entry: 1036e91e0; end: 1036e91e7;  */

void FUN_1036e91e0(undefined8 *param_1)

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
  func_0x000107c61428(0x112f888e8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f888e8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110683788;
  func_0x000107c613fc(&UNK_110683788,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1036e92b4;
  func_0x00010058fa64(0x1036e92b4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036e91e8; end: 1036e9243;  */

void FUN_1036e91e8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f888e8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f888e8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1036e9244; end: 1036e92bb;  */

undefined ** FUN_1036e9244(void)

{
  return &PTR_DAT_113066ef8;
}



/* Entry: 1036e92bc; end: 1036e9303; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e92bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88950;
  func_0x000107c61428(param_1 + _DAT_112f88950,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036e9304; end: 1036e935b; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e9304(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88950;
  func_0x000107c61428(param_1 + _DAT_112f88950,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036e935c; end: 1036e93a3; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint sCMemoriesTrackingImageProcessCommandScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e935c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88958;
  func_0x000107c61428(param_1 + _DAT_112f88958,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036e93a4; end: 1036e93af; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint setSCMemoriesTrackingImageProcessCommandScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e93a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88958;
  func_0x000107c61428(param_1 + _DAT_112f88958,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036e93b0; end: 1036e93f7; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint spectaclesBoomboxScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e93b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88960;
  func_0x000107c61428(param_1 + _DAT_112f88960,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036e93f8; end: 1036e9403; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint setSpectaclesBoomboxScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e93f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88960;
  func_0x000107c61428(param_1 + _DAT_112f88960,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036e9404; end: 1036e9463;  */

void FUN_1036e9404(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1036e9464; end: 1036e961f;  */

/* WARNING: Possible PIC construction at 0x0001036e957c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e95a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e95b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e95f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e95b4) */
/* WARNING: Removing unreachable block (ram,0x0001036e95a4) */
/* WARNING: Removing unreachable block (ram,0x0001036e9580) */
/* WARNING: Removing unreachable block (ram,0x0001036e95f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e9464(void)

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
  func_0x000107c51098();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5b6e4();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1036e8a80();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1036e8cf8();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e9620);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f88878) = lVar5;
      *(long *)(lVar3 + _DAT_112f88880) = unaff_x20;
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



/* Entry: 1036e9620; end: 1036e9647; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1036e9620(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036e9464();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036e9648; end: 1036e968b; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint end] */

void FUN_1036e9648(undefined8 param_1)

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



/* Entry: 1036e968c; end: 1036e988f;  */

void FUN_1036e968c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef1006090)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010eff9f70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0ea5460)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000030,0x800000010f15aba0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SpectaclesBoomboxScopeGraphBridge/SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x5a,2,0x34,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e9890);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c595c4();
        goto LAB_1036e9718;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58640();
  }
LAB_1036e9718:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1036e9890; end: 1036e993b; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1036e9890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036e968c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036e993c; end: 1036e99b3; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e993c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f88950,0);
  *(undefined8 *)(param_1 + _DAT_112f88958) = 0;
  *(undefined8 *)(param_1 + _DAT_112f88960) = 0;
  *(undefined8 *)(param_1 + _DAT_112f88968) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036e99b4; end: 1036e99e7;  */

void FUN_1036e99b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036e99e8; end: 1036e9a3f; -[SCSpectaclesBoomboxScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036e9a14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e9a18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e99e8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f88950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f88958));
  return;
}



/* Entry: 1036e9a40; end: 1036e9a5f;  */

void FUN_1036e9a40(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3858);
  return;
}



/* Entry: 1036e9a60; end: 1036e9aa7; -[SCSCSpectaclesBoomboxScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e9a60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88998;
  func_0x000107c61428(param_1 + _DAT_112f88998,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036e9aa8; end: 1036e9aff; -[SCSCSpectaclesBoomboxScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e9aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88998;
  func_0x000107c61428(param_1 + _DAT_112f88998,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036e9b00; end: 1036e9bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e9b00(undefined8 param_1,long param_2)

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
    FUN_1036e8cd8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f888b0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036e9bd8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f888b8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f889a0);
    *(long **)(unaff_x20 + _DAT_112f889a0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1036e9bd8; end: 1036e9bff; -[SCSCSpectaclesBoomboxScopedServicesSaberEntryPoint begin] */

void FUN_1036e9bd8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036e9b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036e9c00; end: 1036e9d77;  */

/* WARNING: Possible PIC construction at 0x0001036e9c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e9d00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e9c6c) */
/* WARNING: Removing unreachable block (ram,0x0001036e9d04) */
/* WARNING: Removing unreachable block (ram,0x0001036e9d1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e9c00(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f889a0);
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



/* Entry: 1036e9d78; end: 1036e9d7f;  */

void FUN_1036e9d78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036e9d80; end: 1036e9db3; -[SCSCSpectaclesBoomboxScopedServicesSaberEntryPoint end] */

void FUN_1036e9d80(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036e9c00();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036e9db4; end: 1036e9ed3;  */

void FUN_1036e9db4(long param_1,long param_2,long param_3)

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
                        "SpectaclesBoomboxScopeGraphBridge/SCSCSpectaclesBoomboxScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e9ed4);
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



/* Entry: 1036e9ed4; end: 1036e9f7f; -[SCSCSpectaclesBoomboxScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1036e9ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036e9db4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036e9f80; end: 1036e9fdf; -[SCSCSpectaclesBoomboxScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e9f80(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f88998,0);
  *(undefined8 *)(param_1 + _DAT_112f889a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036e9fe0; end: 1036ea013;  */

void FUN_1036e9fe0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ea014; end: 1036ea04b; -[SCSCSpectaclesBoomboxScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ea014(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f88998);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f889a0));
  return;
}



/* Entry: 1036ea04c; end: 1036ea06b;  */

void FUN_1036ea04c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3928);
  return;
}



/* Entry: 1036ea06c; end: 1036ea0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ea06c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1036ea460();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f889d8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1036ea0d8; end: 1036ea143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ea0d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f889d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036ea144; end: 1036ea1a3; -[_TtC50SpectaclesCustomExportScopedFactoryServiceProvider38SCSpectaclesCustomExportScopedServices init] */

void FUN_1036ea144(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesCustomExportScopedFactoryServiceProvider.SCSpectaclesCustomExportScopedServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ea170);
  (*pcVar1)();
}



/* Entry: 1036ea1a4; end: 1036ea1b3; -[_TtC50SpectaclesCustomExportScopedFactoryServiceProvider38SCSpectaclesCustomExportScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ea1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f889d8));
  return;
}



/* Entry: 1036ea1b4; end: 1036ea21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ea1b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106839a0;
  func_0x000107c613fc(&UNK_1106839a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1036ea53c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1036ea220; end: 1036ea2bb;  */

void FUN_1036ea220(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106838b0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106838b0;
  return;
}



/* Entry: 1036ea2bc; end: 1036ea2f3;  */

void FUN_1036ea2bc(long *param_1)

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



/* Entry: 1036ea2f4; end: 1036ea2fb;  */

undefined8 FUN_1036ea2f4(void)

{
  return 0x1b;
}



/* Entry: 1036ea2fc; end: 1036ea42f;  */

void FUN_1036ea2fc(undefined8 *param_1)

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
  puVar1 = &UNK_1106839c8;
  func_0x000107c613fc(&UNK_1106839c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036ea514;
  func_0x00010058fa64(FUN_1036ea514,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036ea430; end: 1036ea45f;  */

undefined ** FUN_1036ea430(void)

{
  return &PTR_DAT_112f89288;
}



/* Entry: 1036ea460; end: 1036ea47f;  */

void FUN_1036ea460(void)

{
  func_0x000107c61168(&PTR_PTR_1128e39e8);
  return;
}



/* Entry: 1036ea480; end: 1036ea4cf;  */

undefined1  [16] FUN_1036ea480(void)

{
  return ZEXT816(0x110683900);
}



/* Entry: 1036ea4d0; end: 1036ea513;  */

void FUN_1036ea4d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f88a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad4a8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f88a40 = puVar1;
  return;
}



/* Entry: 1036ea514; end: 1036ea53b;  */

void FUN_1036ea514(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1036ea53c; end: 1036ea53f;  */

void FUN_1036ea53c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036ea540; end: 1036ea653;  */

/* WARNING: Possible PIC construction at 0x0001036ea600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ea610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ea620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ea630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ea624) */
/* WARNING: Removing unreachable block (ram,0x0001036ea614) */
/* WARNING: Removing unreachable block (ram,0x0001036ea604) */
/* WARNING: Removing unreachable block (ram,0x0001036ea634) */

void FUN_1036ea540(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110683a50;
  func_0x000107c613fc(&UNK_110683a50,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  uVar2 = 0x112f88a50;
  func_0x0001000285a8(0x112f88a50,&UNK_10dbfcd58);
  func_0x000107c613fc();
  uVar3 = 0x1036eac14;
  func_0x0001000841fc(0x1036eac14,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbfcd20,0x34,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1036ea654; end: 1036ea677;  */

/* WARNING: Possible PIC construction at 0x0001036ea600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ea610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ea620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ea630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ea624) */
/* WARNING: Removing unreachable block (ram,0x0001036ea614) */
/* WARNING: Removing unreachable block (ram,0x0001036ea604) */
/* WARNING: Removing unreachable block (ram,0x0001036ea634) */

void FUN_1036ea654(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_110683a50;
  func_0x000107c613fc(&UNK_110683a50,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112f88a50;
  func_0x0001000285a8(0x112f88a50,&UNK_10dbfcd58);
  func_0x000107c613fc();
  uVar9 = 0x1036eac14;
  func_0x0001000841fc(0x1036eac14,puVar7,uVar8);
  func_0x000100084214(&UNK_10dbfcd20,0x34,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1036ea678; end: 1036eabb7;  */

void FUN_1036ea678(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uStack_68;
  
  uVar15 = *param_2;
  func_0x0001000285a8(0x112f88a58,&UNK_10dbfcd60);
  puVar1 = &uStack_68;
  uStack_68 = uVar15;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001036ecd8c();
  pcVar3 = "SCMemoriesSnapVideoFilterScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesSnapVideoFilterScopeExposerSubjectServiceProvider",0x3b,2);
  FUN_1036ecdd8();
  func_0x000100082720("SCSpectaclesCustomExportUIScopeExposerSubjectServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f88a60,&UNK_10dbfcf30);
  puVar4 = &UNK_110683a78;
  func_0x000107c613fc(&UNK_110683a78,0x20,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  pcVar5 = FUN_1036eac44;
  func_0x0001000823a8(FUN_1036eac44,puVar4);
  func_0x000100082720("SCSpectaclesCustomExportScopedMemoriesActivityServiceProviderWrapperServiceProvider"
                      ,0x53,2);
  func_0x0001000285a8(0x112f88a68,&UNK_10dbfcd70);
  func_0x000107c6157c(pcVar5);
  uVar15 = 0x1036eac4c;
  func_0x0001000823a8(0x1036eac4c,pcVar5);
  func_0x000100082720("SCSpectaclesCustomExportScopedMemoriesActivityServicesServiceProvider",0x45,2
                     );
  puVar6 = puVar2;
  FUN_1036ecdcc();
  func_0x000100082720("SCMemoriesSnapVideoFilterScopeExposerObservableServiceProvider",0x3e,2);
  pcVar7 = pcVar3;
  FUN_1036ece64();
  func_0x000100082720("SCSpectaclesCustomExportUIScopeExposerObservableServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_1036ea2bc;
  func_0x0001000823a8(FUN_1036ea2bc,0);
  func_0x000100082720("SCSpectaclesCustomExportScopedServicesCleanupRelayServiceProvider",0x41,2);
  puVar9 = puVar2;
  FUN_1036ecb28(puVar2,uVar15,pcVar3);
  func_0x000100082720("SpectaclesCustomExportScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f88a70,&UNK_10dbfcd80);
  puVar4 = &UNK_110683aa0;
  func_0x000107c613fc(&UNK_110683aa0,0x68,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  *(undefined8 *)(puVar4 + 0x28) = param_6;
  *(undefined8 *)(puVar4 + 0x30) = param_7;
  *(undefined8 *)(puVar4 + 0x38) = uVar15;
  *(undefined8 *)(puVar4 + 0x40) = param_8;
  *(undefined8 *)(puVar4 + 0x48) = param_9;
  *(undefined8 *)(puVar4 + 0x50) = param_10;
  *(char **)(puVar4 + 0x58) = pcVar7;
  *(undefined8 **)(puVar4 + 0x60) = puVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(puVar6);
  pcVar10 = FUN_1036eac54;
  func_0x0001000823a8(FUN_1036eac54,puVar4);
  func_0x000100082720("SCSpectaclesCustomExportEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f88a78,&UNK_10dbfcd88);
  puVar4 = &UNK_110683ac8;
  func_0x000107c613fc(&UNK_110683ac8,0x38,7);
  *(code **)(puVar4 + 0x10) = pcVar10;
  *(code **)(puVar4 + 0x18) = pcVar5;
  *(undefined8 **)(puVar4 + 0x20) = puVar1;
  *(code **)(puVar4 + 0x28) = pcVar8;
  *(undefined8 **)(puVar4 + 0x30) = puVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(puVar9);
  pcVar11 = FUN_1036eac90;
  func_0x0001000823a8(FUN_1036eac90,puVar4);
  func_0x000100082720("SCSpectaclesCustomExportScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112f889e0,&UNK_10dbfcab0);
  func_0x000107c6157c(pcVar11);
  uVar12 = 0x1036eaca0;
  func_0x0001000823a8(0x1036eaca0,pcVar11);
  func_0x000100082720("SCSpectaclesCustomExportScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f889d0,&UNK_10dbfcaa0);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x1036eaca8;
  func_0x0001000823a8(0x1036eaca8,uVar12);
  func_0x000100082720("SCSpectaclesCustomExportScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_110683af0;
  func_0x000107c613fc(&UNK_110683af0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar13;
  *(code **)(puVar4 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  pcVar14 = FUN_1036eacdc;
  func_0x0001000823a8(FUN_1036eacdc,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCSpectaclesCustomExportScopeEntryPointProvider",0x2f,2);
  *param_1 = pcVar14;
  return;
}



/* Entry: 1036eabb8; end: 1036eac43;  */

void FUN_1036eabb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036eac44; end: 1036eac53;  */

void FUN_1036eac44(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  FUN_1036ebfc0();
  func_0x000107c613fc();
  FUN_1036ebcc8(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036eac54; end: 1036eac8f;  */

void FUN_1036eac54(void)

{
  long unaff_x20;
  
  FUN_1036eace4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1036eac90; end: 1036eacaf;  */

void FUN_1036eac90(undefined8 *param_1)

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
  puVar5 = &UNK_110684700;
  ppuVar8 = &PTR_DAT_112f89288;
  uVar9 = uVar2;
  func_0x0001000a3aa4();
  func_0x000107c6157c(uVar1);
  uVar6 = 0x112f88c78;
  func_0x0001000285a8(0x112f88c78,&UNK_10dbfd148);
  func_0x0001000a6ee8(&UNK_110683b48,
                      "SCSpectaclesCustomExportEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_1036ec2ac,uVar1,uVar6,&UNK_110683b48,&PTR_DAT_112f88a88);
  func_0x000107c61574(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x0001000a6ee8(&UNK_110683be8,
                      "SCSpectaclesCustomExportScopedMemoriesActivityServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x60,2,FUN_1036ec35c,uVar3,uVar6,&UNK_110683be8,&PTR_DAT_112f88ba0);
  func_0x000107c61574(uVar3);
  puVar7 = &UNK_110683c38;
  func_0x000107c613fc(&UNK_110683c38,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar4;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x0001000a6ee8(&UNK_110683940,
                      "SCSpectaclesCustomExportScopedServicesScopeInitializationPluginKey",0x42,2,
                      FUN_1036ec430,puVar7,uVar6,&UNK_110683940,&PTR_DAT_112f889e8);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_110683c60;
  func_0x000107c613fc(&UNK_110683c60,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar10;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar10);
  func_0x0001000a6ee8(&UNK_110683f08,
                      "SpectaclesCustomExportScopeGraphBridgeScopeInitializationPluginKey",0x42,2,
                      FUN_1036ec438,puVar7,uVar6,&UNK_110683f08,&PTR_DAT_112f88df0);
  func_0x000107c61574(puVar7);
  uVar6 = 0x112f88c80;
  func_0x0001000285a8(0x112f88c80,&UNK_10dbfd150);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar5,ppuVar8,uVar9,uVar6);
  func_0x0001000a7f38("SCSpectaclesCustomExportScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = puVar5;
  return;
}



/* Entry: 1036eacb0; end: 1036eacdb;  */

void FUN_1036eacb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036eacdc; end: 1036eace3;  */

void FUN_1036eacdc(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106838b0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106838b0;
  return;
}



/* Entry: 1036eace4; end: 1036eb9fb;  */

void FUN_1036eace4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  FUN_1036ebb94();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  func_0x0001000285a8(0x112f88a80,&UNK_10dbfcd98);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar13 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x18) = puVar9;
  func_0x0001000285a8(0x112e5d888,&UNK_10da956c0);
  func_0x000107c610f8();
  uVar13 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x0001003b3b80();
  puVar10 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x20) = puVar10;
  puVar11 = PTR_PTR_1126ad4b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f15b000);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f15b020);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0675a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f089120);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f15b060);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f067660);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_c0);
  *param_1 = param_2;
  return;
}



/* Entry: 1036eb9fc; end: 1036eba87;  */

void FUN_1036eb9fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1036eba88; end: 1036eba8f;  */

undefined8 FUN_1036eba88(void)

{
  return 0x1b;
}



/* Entry: 1036eba90; end: 1036ebb13;  */

void FUN_1036eba90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1036ebbd4,param_2,FUN_1036ebbd8,param_2,FUN_1036ebc00,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1036ebb14; end: 1036ebb63;  */

undefined8 FUN_1036ebb14(void)

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



/* Entry: 1036ebb64; end: 1036ebb93;  */

undefined ** FUN_1036ebb64(void)

{
  return &PTR_DAT_112f89288;
}


