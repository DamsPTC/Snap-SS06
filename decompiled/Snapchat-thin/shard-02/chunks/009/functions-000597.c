/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022b447c; end: 1022b44c3;  */

undefined8 FUN_1022b447c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1022b65b8();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1022b44c4; end: 1022b44f3;  */

undefined ** FUN_1022b44c4(void)

{
  return &PTR_DAT_1130665e0;
}



/* Entry: 1022b44f4; end: 1022b4513;  */

void FUN_1022b44f4(void)

{
  func_0x000107c61168(&PTR_PTR_112e7aab0);
  return;
}



/* Entry: 1022b4514; end: 1022b4537;  */

undefined1  [16] FUN_1022b4514(void)

{
  return ZEXT816(0x1104efe90);
}



/* Entry: 1022b4538; end: 1022b455f;  */

void FUN_1022b4538(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022b4560; end: 1022b4567;  */

undefined8 FUN_1022b4560(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1022b65b8();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1022b4568; end: 1022b45a3;  */

void FUN_1022b4568(undefined8 *param_1,undefined8 param_2)

{
  FUN_1022b45a4();
  func_0x0001000a7f38("FaceTaggingPermissionTrayScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1022b45a4; end: 1022b478f;  */

void FUN_1022b45a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cc40;
  ppuVar4 = &PTR_DAT_1130665e0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e7ab50;
  func_0x0001000285a8(0x112e7ab50,&UNK_10da85160);
  func_0x0001000a6ee8(&UNK_1104efe90,
                      "FaceTaggingPermissionTrayEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,FUN_1022b4804,param_1,uVar2,&UNK_1104efe90,&PTR_DAT_112e7aa48);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104efee0;
  func_0x000107c613fc(&UNK_1104efee0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104f00f0,
                      "FaceTaggingPermissionTrayScopeGraphBridgeScopeInitializationPluginKey",0x45,2
                      ,FUN_1022b480c,puVar3,uVar2,&UNK_1104f00f0,&PTR_DAT_112e7abe0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104eff08;
  func_0x000107c613fc(&UNK_1104eff08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104efcb0,
                      "FaceTaggingPermissionTrayScopedServicesScopeInitializationPluginKey",0x43,2,
                      FUN_1022b48f4,puVar3,uVar2,&UNK_1104efcb0,&PTR_DAT_112e7a9c8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e7ab58;
  func_0x0001000285a8(0x112e7ab58,&UNK_10da85168);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1022b4790; end: 1022b4803;  */

void FUN_1022b4790(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1022b4930;
  func_0x0001000823a8(0x1022b4930,param_3);
  func_0x000100082720("FaceTaggingPermissionTrayEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022b4804; end: 1022b480b;  */

void FUN_1022b4804(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1022b4930;
  func_0x0001000823a8();
  func_0x000100082720("FaceTaggingPermissionTrayEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022b480c; end: 1022b484b;  */

void FUN_1022b480c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1022b4ecc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FaceTaggingPermissionTrayScopeGraphBridgeScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022b484c; end: 1022b48f3;  */

void FUN_1022b484c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104eff30;
  func_0x000107c613fc(&UNK_1104eff30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1022b4928;
  func_0x0001000823a8(FUN_1022b4928,puVar1);
  func_0x000100082720("FaceTaggingPermissionTrayScopedServicesScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1022b48f4; end: 1022b48fb;  */

void FUN_1022b48f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104eff30;
  func_0x000107c613fc(&UNK_1104eff30,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1022b4928;
  func_0x0001000823a8(FUN_1022b4928,puVar3);
  func_0x000100082720("FaceTaggingPermissionTrayScopedServicesScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1022b48fc; end: 1022b4927;  */

void FUN_1022b48fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022b4928; end: 1022b4937;  */

void FUN_1022b4928(undefined8 *param_1)

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
  puVar1 = &UNK_1104efd38;
  func_0x000107c613fc(&UNK_1104efd38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1022b3830;
  func_0x00010058fa64(FUN_1022b3830,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1022b4938; end: 1022b49bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022b4938(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1022b4cf8();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e7ab60) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e7ab68) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b49c0);
  (*pcVar1)();
}



/* Entry: 1022b49c0; end: 1022b4a1f; -[_TtC41FaceTaggingPermissionTrayScopeGraphBridge56FaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint init] */

void FUN_1022b49c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FaceTaggingPermissionTrayScopeGraphBridge.FaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b49ec);
  (*pcVar1)();
}



/* Entry: 1022b4a20; end: 1022b4a57; -[_TtC41FaceTaggingPermissionTrayScopeGraphBridge56FaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022b4a3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022b4a40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b4a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7ab60));
  return;
}



/* Entry: 1022b4a58; end: 1022b4a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b4a58(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e7ab68),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e7ab60));
  return;
}



/* Entry: 1022b4a80; end: 1022b4a9f;  */

void FUN_1022b4a80(void)

{
  func_0x000107c61168(&PTR_PTR_1128325f0);
  return;
}



/* Entry: 1022b4aa0; end: 1022b4b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022b4aa0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7ab98) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e7aba0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b4b28);
  (*pcVar2)();
}



/* Entry: 1022b4b28; end: 1022b4c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022b4b28(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e7ab98);
  *(undefined **)(unaff_x20 + _DAT_112e7ab98) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e7aba0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e7aba0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104f0050;
  func_0x000107c613fc(&UNK_1104f0050,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1022b4c14,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1022b4c10; end: 1022b4c1b;  */

void FUN_1022b4c10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1022b4c1c; end: 1022b4c7b; -[_TtC41FaceTaggingPermissionTrayScopeGraphBridge54FaceTaggingPermissionTrayScopedServicesSaberEntryPoint init] */

void FUN_1022b4c1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FaceTaggingPermissionTrayScopeGraphBridge.FaceTaggingPermissionTrayScopedServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b4c48);
  (*pcVar1)();
}



/* Entry: 1022b4c7c; end: 1022b4cb3; -[_TtC41FaceTaggingPermissionTrayScopeGraphBridge54FaceTaggingPermissionTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b4c7c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e7aba0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7ab98));
  return;
}



/* Entry: 1022b4cb4; end: 1022b4cb7;  */

void FUN_1022b4cb4(void)

{
  return;
}



/* Entry: 1022b4cb8; end: 1022b4cd7;  */

void FUN_1022b4cb8(void)

{
  FUN_1022b4b28();
  return;
}



/* Entry: 1022b4cd8; end: 1022b4cf7;  */

void FUN_1022b4cd8(void)

{
  func_0x000107c61168(&PTR_PTR_1128326b8);
  return;
}



/* Entry: 1022b4cf8; end: 1022b4dc7;  */

undefined8 FUN_1022b4cf8(void)

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
  
  func_0x000107c61428(0x112e7abd0,&uStack_40,0x20,0);
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
    FUN_1022b4dc8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1022b4dc8; end: 1022b4de7;  */

void FUN_1022b4dc8(void)

{
  func_0x000107c61168(&PTR_PTR_112832780);
  return;
}



/* Entry: 1022b4de8; end: 1022b4e53;  */

void FUN_1022b4de8(void)

{
  func_0x0001000285a8(0x112e7abd8,&UNK_10da85238);
  func_0x0001000823a8(0x1022b4e28,0);
  return;
}



/* Entry: 1022b4e54; end: 1022b4e8f; -[_TtC41FaceTaggingPermissionTrayScopeGraphBridge49FaceTaggingPermissionTrayScopeGraphBridgeServices init] */

void FUN_1022b4e54(undefined8 param_1)

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



/* Entry: 1022b4e90; end: 1022b4ec3;  */

void FUN_1022b4e90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022b4ec4; end: 1022b4ecb;  */

undefined8 FUN_1022b4ec4(void)

{
  return 0x1b;
}



/* Entry: 1022b4ecc; end: 1022b5043;  */

void FUN_1022b4ecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104f0098;
  func_0x000107c613fc(&UNK_1104f0098,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1022b5044,puVar1);
  return;
}



/* Entry: 1022b5044; end: 1022b504b;  */

void FUN_1022b5044(undefined8 *param_1)

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
  func_0x000107c61428(0x112e7abd0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e7abd0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104f0130;
  func_0x000107c613fc(&UNK_1104f0130,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1022b50f8;
  func_0x00010058fa64(0x1022b50f8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1022b504c; end: 1022b50a7;  */

void FUN_1022b504c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e7abd0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e7abd0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1022b50a8; end: 1022b50ff;  */

undefined ** FUN_1022b50a8(void)

{
  return &PTR_DAT_1130665e0;
}



/* Entry: 1022b5100; end: 1022b5147; -[SCFaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b5100(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7ac30;
  func_0x000107c61428(param_1 + _DAT_112e7ac30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022b5148; end: 1022b519f; -[SCFaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b5148(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7ac30;
  func_0x000107c61428(param_1 + _DAT_112e7ac30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022b51a0; end: 1022b51e7; -[SCFaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint faceTaggingPermissionTrayScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b51a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7ac38;
  func_0x000107c61428(param_1 + _DAT_112e7ac38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1022b51e8; end: 1022b524b; -[SCFaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint setFaceTaggingPermissionTrayScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b51e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7ac38;
  func_0x000107c61428(param_1 + _DAT_112e7ac38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1022b524c; end: 1022b537f;  */

/* WARNING: Possible PIC construction at 0x0001022b5304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b5320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b533c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022b5308) */
/* WARNING: Removing unreachable block (ram,0x0001022b5324) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b524c(void)

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
  func_0x000107c42d30();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1022b4a80();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1022b4cf8();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b5380);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e7ab60) = lVar5;
    *(long *)(lVar4 + _DAT_112e7ab68) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1022b5380; end: 1022b53a7; -[SCFaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1022b5380(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022b524c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022b53a8; end: 1022b53eb; -[SCFaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint end] */

void FUN_1022b53a8(undefined8 param_1)

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



/* Entry: 1022b53ec; end: 1022b5583;  */

void FUN_1022b53ec(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc8) || (param_3 != -0x7ffffffef0f7fa90)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000038,0x800000010f080570,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FaceTaggingPermissionTrayScopeGraphBridge/SCFaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x6a,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b5584);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5484c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1022b5584; end: 1022b562f; -[SCFaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1022b5584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1022b53ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1022b5630; end: 1022b569b; -[SCFaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b5630(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e7ac30,0);
  *(undefined8 *)(param_1 + _DAT_112e7ac38) = 0;
  *(undefined8 *)(param_1 + _DAT_112e7ac40) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022b569c; end: 1022b56cf;  */

void FUN_1022b569c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022b56d0; end: 1022b5717; -[SCFaceTaggingPermissionTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022b56fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022b5700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b56d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7ac30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7ac38));
  return;
}



/* Entry: 1022b5718; end: 1022b5737;  */

void FUN_1022b5718(void)

{
  func_0x000107c61168(&PTR_PTR_112832830);
  return;
}



/* Entry: 1022b5738; end: 1022b577f; -[SCFaceTaggingPermissionTrayScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b5738(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7ac70;
  func_0x000107c61428(param_1 + _DAT_112e7ac70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022b5780; end: 1022b57d7; -[SCFaceTaggingPermissionTrayScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b5780(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7ac70;
  func_0x000107c61428(param_1 + _DAT_112e7ac70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022b57d8; end: 1022b58af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b57d8(undefined8 param_1,long param_2)

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
    FUN_1022b4cd8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e7ab98) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b58b0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e7aba0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e7ac78);
    *(long **)(unaff_x20 + _DAT_112e7ac78) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1022b58b0; end: 1022b58d7; -[SCFaceTaggingPermissionTrayScopedServicesSaberEntryPoint begin] */

void FUN_1022b58b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022b57d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022b58d8; end: 1022b5a4f;  */

/* WARNING: Possible PIC construction at 0x0001022b5940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b59d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022b5944) */
/* WARNING: Removing unreachable block (ram,0x0001022b59dc) */
/* WARNING: Removing unreachable block (ram,0x0001022b59f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b58d8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7ac78);
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



/* Entry: 1022b5a50; end: 1022b5a57;  */

void FUN_1022b5a50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1022b5a58; end: 1022b5a8b; -[SCFaceTaggingPermissionTrayScopedServicesSaberEntryPoint end] */

void FUN_1022b5a58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1022b58d8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022b5a8c; end: 1022b5bab;  */

void FUN_1022b5a8c(long param_1,long param_2,long param_3)

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
                        "FaceTaggingPermissionTrayScopeGraphBridge/SCFaceTaggingPermissionTrayScopedServicesSaberEntryPoint.swift"
                        ,0x68,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b5bac);
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



/* Entry: 1022b5bac; end: 1022b5c57; -[SCFaceTaggingPermissionTrayScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1022b5bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1022b5a8c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1022b5c58; end: 1022b5cb7; -[SCFaceTaggingPermissionTrayScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b5c58(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e7ac70,0);
  *(undefined8 *)(param_1 + _DAT_112e7ac78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022b5cb8; end: 1022b5ceb;  */

void FUN_1022b5cb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022b5cec; end: 1022b5d23; -[SCFaceTaggingPermissionTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b5cec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7ac70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7ac78));
  return;
}



/* Entry: 1022b5d24; end: 1022b5d43;  */

void FUN_1022b5d24(void)

{
  func_0x000107c61168(&PTR_PTR_1128328f8);
  return;
}



/* Entry: 1022b5d44; end: 1022b5dc7;  */

void FUN_1022b5d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  return;
}



/* Entry: 1022b5dc8; end: 1022b5deb;  */

void FUN_1022b5dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  return;
}



/* Entry: 1022b5dec; end: 1022b5f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b5dec(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_78 [24];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  func_0x000103bcba98();
  uVar2 = param_1;
  func_0x000107c49d4c();
  func_0x000107c615e8(param_1);
  lVar1 = _DAT_1130732c8;
  if ((int)uVar2 == 0) {
    puVar4 = &UNK_1104f0220;
    func_0x000107c613fc(&UNK_1104f0220,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    pcStack_40 = FUN_1022b671c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1104f0238;
    ppuVar5 = &puStack_60;
    puStack_38 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_38);
    func_0x000100162d98(&UNK_10da85420,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 0x10);
    lVar3 = lVar6 + _DAT_1130732c8;
    func_0x000107c61428(lVar3,auStack_78,0,0);
    if (*(char *)(lVar6 + lVar1) == '\x01') {
      FUN_1022b5f94();
    }
    else {
      func_0x000103bcba98();
      puVar4 = &UNK_1104f0220;
      func_0x000107c613fc(&UNK_1104f0220,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      pcStack_40 = FUN_1022b6740;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f3aa0;
      puStack_48 = &UNK_1104f0260;
      ppuVar5 = &puStack_60;
      puStack_38 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_38);
      func_0x000107c5aca4(lVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1022b5f94; end: 1022b65b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b5f94(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long alStack_d8 [3];
  long alStack_c0 [3];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = _DAT_1130732a8;
  lVar14 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar14 + _DAT_1130732a8,auStack_78,0,0);
  func_0x000100672b50(lVar14 + lVar6,&puStack_a8);
  if (puStack_90 == (undefined *)0x0) {
    func_0x00010006e7f4(&puStack_a8);
LAB_1022b633c:
    puVar9 = &UNK_1104f0220;
    func_0x000107c613fc(&UNK_1104f0220,0x18,7);
    func_0x000107c61644(puVar9 + 0x10);
    pcStack_88 = (code *)0x1022b6bec;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1104f02f0;
    ppuVar10 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_80);
    func_0x000100162d98(&UNK_10da85420,ppuVar10);
    func_0x000107c60bd0(ppuVar10);
    return;
  }
  uVar3 = 0x112e7ad90;
  func_0x0001000285a8(0x112e7ad90,&UNK_10da854d8);
  puVar9 = PTR___sypN_11034f1a8;
  plVar4 = alStack_c0;
  func_0x000107c6147c(plVar4,&puStack_a8,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if (((ulong)plVar4 & 1) == 0) goto LAB_1022b633c;
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 != 0) {
    lVar5 = lVar6;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    lVar6 = _DAT_1130732b0;
    if (lVar5 != 0) {
      func_0x000107c61428(lVar14 + _DAT_1130732b0,alStack_c0,0,0);
      func_0x000100672b50(lVar14 + lVar6,&puStack_a8);
      if (puStack_90 == (undefined *)0x0) {
        func_0x00010006e7f4(&puStack_a8);
      }
      else {
        uVar3 = 0x112e7ad98;
        func_0x0001000285a8(0x112e7ad98,&UNK_10da854e0);
        plVar4 = alStack_d8;
        func_0x000107c6147c(plVar4,&puStack_a8,puVar9 + 8,uVar3,6);
        if (((ulong)plVar4 & 1) != 0) {
          lVar7 = *(long *)(unaff_x20 + 0x20);
          func_0x000107c3cfe0();
          func_0x000107c61180();
          lVar6 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar6 != 0) {
            lVar7 = lVar6;
            func_0x000107c4c1dc();
            func_0x000107c61180();
            func_0x000107c615e8();
            func_0x000103a6a8b8(*(undefined8 *)(unaff_x20 + 0x30));
            uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
            FUN_1022bb440(0);
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x0001022ba404();
            puVar1 = (undefined8 *)(lVar14 + _DAT_1130732b8);
            func_0x000107c61428(puVar1,alStack_d8,0,0);
            uVar3 = *puVar1;
            uVar2 = puVar1[1];
            uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
            func_0x000107c61434(uVar2);
            func_0x000107c4cd6c(uVar12);
            func_0x000107c61180();
            uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + _DAT_1130806b8);
            func_0x000107c6157c(uVar13);
            func_0x0001000d224c(&puStack_a8);
            func_0x000107c61574(uVar13);
            func_0x000107c49d44(puStack_a8);
            func_0x000107c615e8(puStack_a8);
            puVar8 = PTR_PTR_1126c3b58;
            func_0x000107c610f8();
            func_0x000107c47784();
            func_0x000107c61170(uVar12);
            puVar9 = &UNK_1104f03a0;
            func_0x000107c613fc(&UNK_1104f03a0,0x58,7);
            *(long *)(puVar9 + 0x10) = alStack_c0[0];
            *(long *)(puVar9 + 0x18) = alStack_d8[0];
            *(long *)(puVar9 + 0x20) = lVar7;
            *(long *)(puVar9 + 0x28) = lVar6;
            *(undefined8 *)(puVar9 + 0x30) = uVar11;
            *(undefined8 *)(puVar9 + 0x38) = uVar3;
            *(undefined8 *)(puVar9 + 0x40) = uVar2;
            *(undefined **)(puVar9 + 0x48) = puVar8;
            *(long *)(puVar9 + 0x50) = unaff_x20;
            pcStack_88 = FUN_1022b6990;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_100f1c768;
            puStack_90 = &UNK_1104f03b8;
            ppuVar10 = &puStack_a8;
            puStack_80 = puVar9;
            func_0x000107c60bc4(ppuVar10);
            puVar9 = puStack_80;
            func_0x000107c615f0(alStack_c0[0]);
            func_0x000107c615f0(alStack_d8[0]);
            func_0x000107c615f0(lVar7);
            func_0x000107c615f0(lVar6);
            func_0x000107c61174(uVar11);
            func_0x000107c61174(puVar8);
            func_0x000107c6157c();
            func_0x000107c61574(puVar9);
            func_0x000107c440d8(lVar5);
            func_0x000107c60bd0(ppuVar10);
            func_0x000107c615e8(alStack_c0[0]);
            func_0x000107c615e8(lVar5);
            func_0x000107c615e8(alStack_d8[0]);
            func_0x000107c615e8(lVar7);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(uVar11);
            func_0x000107c61170(puVar8);
            return;
          }
          puVar9 = &UNK_1104f0220;
          func_0x000107c613fc(&UNK_1104f0220,0x18,7);
          func_0x000107c61644(puVar9 + 0x10);
          pcStack_88 = (code *)0x1022b6bf8;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_1104f0368;
          ppuVar10 = &puStack_a8;
          puStack_80 = puVar9;
          func_0x000107c60bc4(ppuVar10);
          func_0x000107c61574(puStack_80);
          func_0x000100162d98(&UNK_10da85420,ppuVar10);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c615e8(alStack_c0[0]);
          func_0x000107c615e8(lVar5);
          lVar5 = alStack_d8[0];
          goto LAB_1022b64f4;
        }
      }
      puVar9 = &UNK_1104f0220;
      func_0x000107c613fc(&UNK_1104f0220,0x18,7);
      func_0x000107c61644(puVar9 + 0x10);
      pcStack_88 = (code *)0x1022b6bf4;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1104f0340;
      ppuVar10 = &puStack_a8;
      puStack_80 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c61574(puStack_80);
      func_0x000100162d98(&UNK_10da85420,ppuVar10);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c615e8(alStack_c0[0]);
      goto LAB_1022b64f4;
    }
  }
  puVar9 = &UNK_1104f0220;
  func_0x000107c613fc(&UNK_1104f0220,0x18,7);
  func_0x000107c61644(puVar9 + 0x10);
  pcStack_88 = (code *)0x1022b6bf0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1104f0318;
  ppuVar10 = &puStack_a8;
  puStack_80 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_80);
  func_0x000100162d98(&UNK_10da85420,ppuVar10);
  func_0x000107c60bd0(ppuVar10);
  lVar5 = alStack_c0[0];
LAB_1022b64f4:
  func_0x000107c615e8(lVar5);
  return;
}



/* Entry: 1022b65b8; end: 1022b6663;  */

undefined8 FUN_1022b65b8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = &UNK_1104f0220;
  func_0x000107c613fc(&UNK_1104f0220,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uStack_30 = 0x1022b6be4;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_1000f6b44;
  puStack_38 = &UNK_1104f0288;
  puStack_28 = puVar1;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c61574(puStack_28);
  func_0x000100162d98(&UNK_10da85420,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return 0;
}



/* Entry: 1022b6664; end: 1022b671b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b6664(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      lVar1 = _DAT_113073298;
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x000107c61428(lVar2 + _DAT_113073298,auStack_60,0,0);
      lVar2 = lVar2 + lVar1;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c42d24();
        func_0x000107c61574(param_1);
        func_0x000107c615e8(lVar2);
        return;
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1022b671c; end: 1022b673f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b671c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x58) & 1) == 0) {
      *(undefined1 *)(lVar2 + 0x58) = 1;
      lVar1 = _DAT_113073298;
      lVar3 = *(long *)(lVar2 + 0x10);
      func_0x000107c61428(lVar3 + _DAT_113073298,auStack_60,0,0);
      lVar3 = lVar3 + lVar1;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c42d24();
        func_0x000107c61574(lVar2);
        func_0x000107c615e8(lVar3);
        return;
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1022b6740; end: 1022b6823;  */

void FUN_1022b6740(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((param_1 & 1) == 0) {
      puVar2 = &UNK_1104f0220;
      func_0x000107c613fc(&UNK_1104f0220,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,lVar1);
      uStack_48 = 0x1022b6bfc;
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0x42000000;
      puStack_58 = &UNK_1000f6b44;
      puStack_50 = &UNK_1104f0408;
      ppuVar3 = &puStack_68;
      puStack_40 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_40);
      func_0x000100162d98(&UNK_10da85420,ppuVar3);
      func_0x000107c60bd0(ppuVar3);
    }
    else {
      FUN_1022b5f94();
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1022b6824; end: 1022b689f;  */

void FUN_1022b6824(void)

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
  return;
}



/* Entry: 1022b68a0; end: 1022b696f;  */

void FUN_1022b68a0(void)

{
  FUN_1022b5dec();
  return;
}



/* Entry: 1022b6970; end: 1022b698f;  */

void FUN_1022b6970(void)

{
  func_0x000107c61168(&PTR_PTR_112e7ace8);
  return;
}



/* Entry: 1022b6990; end: 1022b6afb;  */

void FUN_1022b6990(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  if (param_1 != 0) {
    puVar3 = *(undefined **)(unaff_x20 + 0x38);
    lVar1 = *(long *)(unaff_x20 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
    puVar2 = PTR_PTR_1126defc0;
    func_0x000107c61168();
    func_0x000107c615f0(param_1);
    func_0x000107c43be4();
    func_0x000107c61180();
    puVar4 = puVar2;
    puVar6 = (undefined *)0x0;
    if (lVar1 != 0) {
      func_0x000107c5fadc(puVar3,lVar1);
      puVar4 = puVar3;
      puVar6 = puVar3;
    }
    func_0x000103a6bb34();
    puVar3 = &UNK_1104f0220;
    func_0x000107c613fc(&UNK_1104f0220,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,uVar7);
    pcStack_70 = FUN_1022b6afc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104f03e0;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_68);
    func_0x000107c4eef4(puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1022b6afc; end: 1022b6b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b6afc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  lVar1 = _DAT_113073298;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    func_0x000107c61428(lVar3 + _DAT_113073298,auStack_60,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c42d28();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1022b6b94; end: 1022b6bff;  */

void FUN_1022b6b94(long param_1,long param_2)

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



/* Entry: 1022b6c00; end: 1022b6c0f; -[_TtC32MemoriesClientGenContentWorkflow40MemoriesClientGenContentWorkflowServices memoriesClientGenContentWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b6c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e7ada0));
  return;
}



/* Entry: 1022b6c10; end: 1022b6ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b6c10(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7ada0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022b6ca8; end: 1022b6d07; -[_TtC32MemoriesClientGenContentWorkflow40MemoriesClientGenContentWorkflowServices init] */

void FUN_1022b6ca8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesClientGenContentWorkflow.MemoriesClientGenContentWorkflowServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b6cd4);
  (*pcVar1)();
}



/* Entry: 1022b6d08; end: 1022b6d17; -[_TtC32MemoriesClientGenContentWorkflow40MemoriesClientGenContentWorkflowServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b6d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7ada0));
  return;
}



/* Entry: 1022b6d18; end: 1022b6d37;  */

void FUN_1022b6d18(void)

{
  func_0x000107c61168(&PTR_PTR_1128329b8);
  return;
}



/* Entry: 1022b6d38; end: 1022b6d7f; -[MemoriesFriendsTabController scrollContentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1022b6d38(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e7add0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  return *puVar1;
}



/* Entry: 1022b6d80; end: 1022b6de7; -[MemoriesFriendsTabController setScrollContentInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b6d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112e7add0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1022b6de8; end: 1022b6e2b; -[MemoriesFriendsTabController scrollContentOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1022b6de8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7add8;
  func_0x000107c61428(param_1 + _DAT_112e7add8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1022b6e2c; end: 1022b6e7b; -[MemoriesFriendsTabController setScrollContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b6e2c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7add8;
  func_0x000107c61428(param_2 + _DAT_112e7add8,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1022b6e7c; end: 1022b6ebf; -[MemoriesFriendsTabController visible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1022b6e7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7ade0;
  func_0x000107c61428(param_1 + _DAT_112e7ade0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1022b6ec0; end: 1022b6f0f; -[MemoriesFriendsTabController setVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b6ec0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7ade0;
  func_0x000107c61428(param_1 + _DAT_112e7ade0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1022b6f10; end: 1022b6f53; -[MemoriesFriendsTabController focused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1022b6f10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7ade8;
  func_0x000107c61428(param_1 + _DAT_112e7ade8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1022b6f54; end: 1022b7003; -[MemoriesFriendsTabController setFocused:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b6f54(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112e7ade8;
  func_0x000107c61428(param_1 + _DAT_112e7ade8,auStack_48,1,0);
  bVar1 = *(byte *)(param_1 + lVar2);
  *(char *)(param_1 + lVar2) = (char)param_3;
  if (param_3 != bVar1) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112e7adf0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(param_1);
    func_0x000107c45a48(puVar3);
    func_0x000107c4d664(uVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1022b7004; end: 1022b7047; -[MemoriesFriendsTabController loading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1022b7004(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7adf8;
  func_0x000107c61428(param_1 + _DAT_112e7adf8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1022b7048; end: 1022b7097; -[MemoriesFriendsTabController setLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b7048(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7adf8;
  func_0x000107c61428(param_1 + _DAT_112e7adf8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1022b7098; end: 1022b70db; -[MemoriesFriendsTabController selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1022b7098(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7ae00;
  func_0x000107c61428(param_1 + _DAT_112e7ae00,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1022b70dc; end: 1022b712b; -[MemoriesFriendsTabController setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b70dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7ae00;
  func_0x000107c61428(param_1 + _DAT_112e7ae00,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1022b712c; end: 1022b7173; -[MemoriesFriendsTabController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b712c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7ae08;
  func_0x000107c61428(param_1 + _DAT_112e7ae08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022b7174; end: 1022b71cb; -[MemoriesFriendsTabController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b7174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7ae08;
  func_0x000107c61428(param_1 + _DAT_112e7ae08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022b71cc; end: 1022b74f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1022b71cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112e7ae10;
  func_0x000107c61614(unaff_x20 + _DAT_112e7ae10,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae18) = 0;
  lVar2 = _DAT_112e7ae20;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112e7adf0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  puVar5 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae28) = 0;
  lVar2 = _DAT_112e7ae30;
  uVar6 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae48) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e7add0);
  uVar6 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar9 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uVar8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  *puVar1 = uVar6;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  *(undefined8 *)(unaff_x20 + _DAT_112e7add8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7ade0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7ade8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7adf8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7ae00) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112e7ae08,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae50) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae58) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae60) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae68) = param_6;
  func_0x000107c61604(unaff_x20 + lVar3,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae70) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae78) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae80) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae88) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae90) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae98) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112e7aea0) = param_14;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  puVar7 = auStack_70;
  func_0x000107c61154(puVar7,puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  lVar2 = _DAT_112e7ae08;
  func_0x000107c61428(puVar7 + _DAT_112e7ae08,auStack_88,1,0);
  func_0x000107c61604(puVar7 + lVar2,param_2);
  func_0x000107c615e8(param_2);
  return puVar7;
}



/* Entry: 1022b74f8; end: 1022b7613; -[MemoriesFriendsTabController initWithTabType:delegate:memoriesExperimentService:valdiRuntimeProvider:mergedDataSource:backfillSnapCountProvider:presentingViewController:deckServices:webLauncher:composerCoreUIServices:faceTaggingItemActionHandler:memoriesOperaLauncher:faceTaggingBackfillServices:previewServices:] */

void FUN_1022b74f8(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  func_0x000107c615f0(in_x3);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(in_x6);
  func_0x000107c615f0(in_x7);
  func_0x000107c61174(in_stack_00000000);
  func_0x000107c61174(in_stack_00000008);
  func_0x000107c615f0(in_stack_00000010);
  func_0x000107c61174(in_stack_00000018);
  func_0x000107c615f0(in_stack_00000020);
  func_0x000107c61174(in_stack_00000028);
  func_0x000107c61174(in_stack_00000030);
  func_0x000107c61174(in_stack_00000038);
  FUN_1022b88e0(in_x3,in_x4,in_x5,in_x6,in_x7,in_stack_00000000,in_stack_00000008,in_stack_00000010,
                in_stack_00000018,in_stack_00000020,in_stack_00000028,in_stack_00000030,
                in_stack_00000038);
  return;
}



/* Entry: 1022b7614; end: 1022b761b; -[MemoriesFriendsTabController tabType] */

undefined8 FUN_1022b7614(void)

{
  return 0x10;
}


