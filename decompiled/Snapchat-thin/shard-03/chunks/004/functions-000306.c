/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028d788c; end: 1028d78bb;  */

undefined ** FUN_1028d788c(void)

{
  return &PTR_DAT_112f45ee0;
}



/* Entry: 1028d78bc; end: 1028d78db;  */

void FUN_1028d78bc(void)

{
  func_0x000107c61168(&PTR_PTR_112ec9270);
  return;
}



/* Entry: 1028d78dc; end: 1028d78ff;  */

undefined1  [16] FUN_1028d78dc(void)

{
  return ZEXT816(0x110565c28);
}



/* Entry: 1028d7900; end: 1028d7953;  */

void FUN_1028d7900(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028d7954; end: 1028d798f;  */

void FUN_1028d7954(undefined8 *param_1,undefined8 param_2)

{
  FUN_1028d7990();
  func_0x0001000a7f38("SCDWebExplainerTrayScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1028d7990; end: 1028d7b7b;  */

void FUN_1028d7990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110615698;
  ppuVar4 = &PTR_DAT_112f45ee0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ec9330;
  func_0x0001000285a8(0x112ec9330,&UNK_10daecc50);
  func_0x0001000a6ee8(&UNK_110565c28,
                      "DWebExplainerTrayScopeEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_1028d7bf0,param_1,uVar2,&UNK_110565c28,&PTR_DAT_112ec9208);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110565c78;
  func_0x000107c613fc(&UNK_110565c78,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110565e98,"DWebExplainerTrayScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1028d7bf8,puVar3,uVar2,&UNK_110565e98,&PTR_DAT_112ec93c8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110565ca0;
  func_0x000107c613fc(&UNK_110565ca0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110565a48,"SCDWebExplainerTrayScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1028d7ce0,puVar3,uVar2,&UNK_110565a48,&PTR_DAT_112ec9188);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ec9338;
  func_0x0001000285a8(0x112ec9338,&UNK_10daecc58);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1028d7b7c; end: 1028d7bef;  */

void FUN_1028d7b7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1028d7d1c;
  func_0x0001000823a8(0x1028d7d1c,param_3);
  func_0x000100082720("DWebExplainerTrayScopeEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028d7bf0; end: 1028d7bf7;  */

void FUN_1028d7bf0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1028d7d1c;
  func_0x0001000823a8();
  func_0x000100082720("DWebExplainerTrayScopeEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028d7bf8; end: 1028d7c37;  */

void FUN_1028d7bf8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028d84a8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DWebExplainerTrayScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028d7c38; end: 1028d7cdf;  */

void FUN_1028d7c38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110565cc8;
  func_0x000107c613fc(&UNK_110565cc8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1028d7d14;
  func_0x0001000823a8(FUN_1028d7d14,puVar1);
  func_0x000100082720("SCDWebExplainerTrayScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1028d7ce0; end: 1028d7ce7;  */

void FUN_1028d7ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110565cc8;
  func_0x000107c613fc(&UNK_110565cc8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1028d7d14;
  func_0x0001000823a8(FUN_1028d7d14,puVar3);
  func_0x000100082720("SCDWebExplainerTrayScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1028d7ce8; end: 1028d7d13;  */

void FUN_1028d7ce8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028d7d14; end: 1028d7d23;  */

void FUN_1028d7d14(undefined8 *param_1)

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
  puVar1 = &UNK_110565ad0;
  func_0x000107c613fc(&UNK_110565ad0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028d6bbc;
  func_0x00010058fa64(FUN_1028d6bbc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028d7d24; end: 1028d7dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028d7d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1028d8138();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ec9340) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ec9348) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028d7e00);
  (*pcVar1)();
}



/* Entry: 1028d7e00; end: 1028d7e5f; -[_TtC33DWebExplainerTrayScopeGraphBridge48DWebExplainerTrayScopeGraphBridgeSaberEntryPoint init] */

void FUN_1028d7e00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DWebExplainerTrayScopeGraphBridge.DWebExplainerTrayScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028d7e2c);
  (*pcVar1)();
}



/* Entry: 1028d7e60; end: 1028d7e97; -[_TtC33DWebExplainerTrayScopeGraphBridge48DWebExplainerTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028d7e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028d7e80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d7e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec9340));
  return;
}



/* Entry: 1028d7e98; end: 1028d7ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d7e98(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ec9348),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ec9340));
  return;
}



/* Entry: 1028d7ec0; end: 1028d7edf;  */

void FUN_1028d7ec0(void)

{
  func_0x000107c61168(&PTR_PTR_11286ccb0);
  return;
}



/* Entry: 1028d7ee0; end: 1028d7f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028d7ee0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec9378) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ec9380);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028d7f68);
  (*pcVar2)();
}



/* Entry: 1028d7f68; end: 1028d804f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028d7f68(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec9378);
  *(undefined **)(unaff_x20 + _DAT_112ec9378) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec9380);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec9380))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110565db8;
  func_0x000107c613fc(&UNK_110565db8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1028d8054,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1028d8050; end: 1028d805b;  */

void FUN_1028d8050(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028d805c; end: 1028d80bb; -[_TtC33DWebExplainerTrayScopeGraphBridge48SCDWebExplainerTrayScopedServicesSaberEntryPoint init] */

void FUN_1028d805c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DWebExplainerTrayScopeGraphBridge.SCDWebExplainerTrayScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028d8088);
  (*pcVar1)();
}



/* Entry: 1028d80bc; end: 1028d80f3; -[_TtC33DWebExplainerTrayScopeGraphBridge48SCDWebExplainerTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d80bc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec9380));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec9378));
  return;
}



/* Entry: 1028d80f4; end: 1028d80f7;  */

void FUN_1028d80f4(void)

{
  return;
}



/* Entry: 1028d80f8; end: 1028d8117;  */

void FUN_1028d80f8(void)

{
  FUN_1028d7f68();
  return;
}



/* Entry: 1028d8118; end: 1028d8137;  */

void FUN_1028d8118(void)

{
  func_0x000107c61168(&PTR_PTR_11286cd78);
  return;
}



/* Entry: 1028d8138; end: 1028d8207;  */

undefined8 FUN_1028d8138(void)

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
  
  func_0x000107c61428(0x112ec93b0,&uStack_40,0x20,0);
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
    FUN_1028d8208();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1028d8208; end: 1028d8227;  */

void FUN_1028d8208(void)

{
  func_0x000107c61168(&PTR_PTR_11286ce40);
  return;
}



/* Entry: 1028d8228; end: 1028d8243;  */

void FUN_1028d8228(undefined8 param_1)

{
  func_0x0001000285a8(0x112ec93b8,&UNK_10daecd28);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1028d82b0,param_1);
  return;
}



/* Entry: 1028d8244; end: 1028d82af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d8244(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1028d8208();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ec93c0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1028d82b0; end: 1028d82b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d82b0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1028d8208();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ec93c0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1028d82b8; end: 1028d8303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d82b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec93c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028d8304; end: 1028d8363; -[_TtC33DWebExplainerTrayScopeGraphBridge41DWebExplainerTrayScopeGraphBridgeServices init] */

void FUN_1028d8304(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DWebExplainerTrayScopeGraphBridge.DWebExplainerTrayScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028d8330);
  (*pcVar1)();
}



/* Entry: 1028d8364; end: 1028d8373; -[_TtC33DWebExplainerTrayScopeGraphBridge41DWebExplainerTrayScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d8364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec93c0));
  return;
}



/* Entry: 1028d8374; end: 1028d83ff;  */

void FUN_1028d8374(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1028d83b4,0);
  return;
}



/* Entry: 1028d8400; end: 1028d841b;  */

void FUN_1028d8400(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1028d846c,param_1);
  return;
}



/* Entry: 1028d841c; end: 1028d846b;  */

void FUN_1028d841c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1028d846c; end: 1028d849f;  */

void FUN_1028d846c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1028d84a0; end: 1028d84a7;  */

undefined8 FUN_1028d84a0(void)

{
  return 0x1b;
}



/* Entry: 1028d84a8; end: 1028d861f;  */

void FUN_1028d84a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110565e00;
  func_0x000107c613fc(&UNK_110565e00,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028d8620,puVar1);
  return;
}



/* Entry: 1028d8620; end: 1028d8627;  */

void FUN_1028d8620(undefined8 *param_1)

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
  func_0x000107c61428(0x112ec93b0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ec93b0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110565ed8;
  func_0x000107c613fc(&UNK_110565ed8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1028d86f4;
  func_0x00010058fa64(0x1028d86f4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028d8628; end: 1028d8683;  */

void FUN_1028d8628(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ec93b0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ec93b0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1028d8684; end: 1028d86fb;  */

undefined ** FUN_1028d8684(void)

{
  return &PTR_DAT_112f45ee0;
}



/* Entry: 1028d86fc; end: 1028d8743; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d86fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec9418;
  func_0x000107c61428(param_1 + _DAT_112ec9418,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028d8744; end: 1028d879b; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d8744(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec9418;
  func_0x000107c61428(param_1 + _DAT_112ec9418,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028d879c; end: 1028d87e3; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint sCSendToScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d879c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec9420;
  func_0x000107c61428(param_1 + _DAT_112ec9420,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028d87e4; end: 1028d87ef; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint setSCSendToScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d87e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec9420;
  func_0x000107c61428(param_1 + _DAT_112ec9420,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028d87f0; end: 1028d8837; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint dWebExplainerTrayScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d87f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec9428;
  func_0x000107c61428(param_1 + _DAT_112ec9428,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028d8838; end: 1028d8843; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint setDWebExplainerTrayScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d8838(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec9428;
  func_0x000107c61428(param_1 + _DAT_112ec9428,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028d8844; end: 1028d88a3;  */

void FUN_1028d8844(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1028d88a4; end: 1028d8a5f;  */

/* WARNING: Possible PIC construction at 0x0001028d89bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028d89e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028d89f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028d8a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028d89f4) */
/* WARNING: Removing unreachable block (ram,0x0001028d89e4) */
/* WARNING: Removing unreachable block (ram,0x0001028d89c0) */
/* WARNING: Removing unreachable block (ram,0x0001028d8a38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d88a4(void)

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
  func_0x000107c512a4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c411e0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1028d7ec0();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1028d8138();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028d8a60);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ec9340) = lVar5;
      *(long *)(lVar3 + _DAT_112ec9348) = unaff_x20;
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



/* Entry: 1028d8a60; end: 1028d8a87; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1028d8a60(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028d88a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028d8a88; end: 1028d8acb; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint end] */

void FUN_1028d8a88(undefined8 param_1)

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



/* Entry: 1028d8acc; end: 1028d8ccf;  */

void FUN_1028d8acc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef0fa7000)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000014,0x800000010f059000,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0f37340)) &&
           (func_0x000107c605b8(0xd000000000000030,0x800000010f0c8cc0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DWebExplainerTrayScopeGraphBridge/SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5a,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028d8cd0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53dd8();
        goto LAB_1028d8b58;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5884c();
  }
LAB_1028d8b58:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028d8cd0; end: 1028d8d7b; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1028d8cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028d8acc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028d8d7c; end: 1028d8df3; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d8d7c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec9418,0);
  *(undefined8 *)(param_1 + _DAT_112ec9420) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec9428) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec9430) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028d8df4; end: 1028d8e27;  */

void FUN_1028d8df4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028d8e28; end: 1028d8e7f; -[SCDWebExplainerTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028d8e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028d8e58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d8e28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec9418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec9420));
  return;
}



/* Entry: 1028d8e80; end: 1028d8e9f;  */

void FUN_1028d8e80(void)

{
  func_0x000107c61168(&PTR_PTR_11286cf00);
  return;
}



/* Entry: 1028d8ea0; end: 1028d8ee7; -[SCSCDWebExplainerTrayScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d8ea0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec9460;
  func_0x000107c61428(param_1 + _DAT_112ec9460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028d8ee8; end: 1028d8f3f; -[SCSCDWebExplainerTrayScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d8ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec9460;
  func_0x000107c61428(param_1 + _DAT_112ec9460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028d8f40; end: 1028d9017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d8f40(undefined8 param_1,long param_2)

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
    FUN_1028d8118();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ec9378) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028d9018);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ec9380);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec9468);
    *(long **)(unaff_x20 + _DAT_112ec9468) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1028d9018; end: 1028d903f; -[SCSCDWebExplainerTrayScopedServicesSaberEntryPoint begin] */

void FUN_1028d9018(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028d8f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028d9040; end: 1028d91b7;  */

/* WARNING: Possible PIC construction at 0x0001028d90a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028d9140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028d90ac) */
/* WARNING: Removing unreachable block (ram,0x0001028d9144) */
/* WARNING: Removing unreachable block (ram,0x0001028d915c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d9040(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec9468);
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



/* Entry: 1028d91b8; end: 1028d91bf;  */

void FUN_1028d91b8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028d91c0; end: 1028d91f3; -[SCSCDWebExplainerTrayScopedServicesSaberEntryPoint end] */

void FUN_1028d91c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028d9040();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028d91f4; end: 1028d9313;  */

void FUN_1028d91f4(long param_1,long param_2,long param_3)

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
                        "DWebExplainerTrayScopeGraphBridge/SCSCDWebExplainerTrayScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028d9314);
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



/* Entry: 1028d9314; end: 1028d93bf; -[SCSCDWebExplainerTrayScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028d9314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028d91f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028d93c0; end: 1028d941f; -[SCSCDWebExplainerTrayScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d93c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec9460,0);
  *(undefined8 *)(param_1 + _DAT_112ec9468) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028d9420; end: 1028d9453;  */

void FUN_1028d9420(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028d9454; end: 1028d948b; -[SCSCDWebExplainerTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028d9454(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec9460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec9468));
  return;
}



/* Entry: 1028d948c; end: 1028d94ab;  */

void FUN_1028d948c(void)

{
  func_0x000107c61168(&PTR_PTR_11286cfd0);
  return;
}



/* Entry: 1028d94ac; end: 1028d958f;  */

void FUN_1028d94ac(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffd0 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  func_0x000100028750();
  lVar2 = lVar3;
  func_0x000100028790(lVar3,0x113804c60);
  func_0x000107c5edd0(puVar5,0xd000000000000060,0x800000010f0c8dc0);
  lVar6 = *(long *)(lVar3 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar3);
  if ((int)puVar4 != 1) {
    (**(code **)(lVar6 + 0x20))(lVar2,puVar5,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028d9590);
  (*pcVar1)();
}



/* Entry: 1028d9590; end: 1028d961f;  */

void FUN_1028d9590(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  func_0x000100028750();
  lVar2 = lVar1;
  func_0x000100028790(lVar1,0x113804c78);
  if (lRam0000000112ec9498 != -1) {
    func_0x000107c61568(0x112ec9498,FUN_1028d94ac);
  }
  lVar3 = lVar1;
  func_0x000100028790(lVar1,0x113804c60);
                    /* WARNING: Could not recover jumptable at 0x0001028d9604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(lVar2,lVar3,lVar1);
  return;
}



/* Entry: 1028d9620; end: 1028d9627;  */

void FUN_1028d9620(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1028d9628; end: 1028d9757;  */

void FUN_1028d9628(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 1028d9758; end: 1028d976b;  */

void FUN_1028d9758(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110565fe0;
  if (lRam0000000112ec94a8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ec94a8 = param_1;
  }
  return;
}



/* Entry: 1028d976c; end: 1028d97af;  */

void FUN_1028d976c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1028d97b0; end: 1028d97f3;  */

void FUN_1028d97b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1028d97f4; end: 1028d981b;  */

void FUN_1028d97f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1028d981c; end: 1028d9887;  */

void FUN_1028d981c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112ec94c8;
  FUN_1028d98d0(0x112ec94c8,&UNK_10daed044);
  uVar2 = 0x112ec94d0;
  FUN_1028d98d0(0x112ec94d0,&UNK_10daecfe4);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1028d9888; end: 1028d98cf;  */

void FUN_1028d9888(void)

{
  FUN_1028d98d0(0x112ec94b0,&UNK_10daecfa8);
  return;
}



/* Entry: 1028d98d0; end: 1028d9987;  */

void FUN_1028d98d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1028d9758(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1028d9988; end: 1028d9a7b;  */

undefined1 * FUN_1028d9988(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 1028d9a7c; end: 1028d9a9f;  */

void FUN_1028d9a7c(void)

{
  FUN_1028d98d0(0x112ec94c0,&UNK_10daed018);
  return;
}



/* Entry: 1028d9aa0; end: 1028dab03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1028d9aa0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,long param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined4 uStack_144;
  code *pcStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  code *pcStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  
  lVar3 = 0;
  lStack_e8 = param_4;
  uStack_e0 = param_2;
  uStack_d8 = param_3;
  uStack_c8 = param_5;
  uStack_b8 = param_8;
  lStack_a8 = param_6;
  func_0x000107c5ede0();
  lStack_c0 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar7 = (long)&uStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec94d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec94e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec94e8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ec94f0,0);
  puVar4 = auStack_78;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  puVar5 = &UNK_1105660b8;
  func_0x000107c613fc(&UNK_1105660b8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_7;
  func_0x0001000285a8(0x112ec94f8,&UNK_10daed0e0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar3 = lStack_a8;
  pcVar2 = FUN_1028dab04;
  uStack_100 = param_7;
  func_0x0001000bdd8c(FUN_1028dab04,puVar5);
  puStack_118 = puVar4;
  lStack_d0 = lVar7;
  FUN_1028dab08(lVar7,lVar3);
  puVar5 = &UNK_1105660e0;
  func_0x000107c613fc(&UNK_1105660e0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_10;
  *(undefined8 *)(puVar5 + 0x18) = param_9;
  func_0x0001000285a8(0x112d6c270,&UNK_10d92f1e0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uStack_108 = param_10;
  func_0x000107c61174();
  pcVar6 = FUN_1028daecc;
  uStack_110 = param_9;
  func_0x0001000bdd8c(FUN_1028daecc,puVar5);
  lStack_f8 = param_11;
  pcStack_f0 = pcVar6;
  func_0x000107c42498();
  func_0x000107c61180();
  lVar7 = param_11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_11);
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 != 0) {
      lVar7 = lVar8;
      func_0x000107c49cd0();
      uStack_120 = CONCAT44(uStack_120._4_4_,(int)lVar7);
      func_0x000107c61170(lVar8);
      goto LAB_1028d9cec;
    }
  }
  uStack_120 = (ulong)uStack_120._4_4_ << 0x20;
LAB_1028d9cec:
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uStack_150 = param_13;
    uStack_138 = param_12;
    uVar9 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f0c8e30);
    lVar7 = lVar3;
    func_0x000107c3ebd4();
    uStack_144 = (undefined4)lVar7;
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar9);
    lVar3 = _DAT_112f45ec8;
    uStack_160 = *(undefined8 *)(param_1 + _DAT_112f45eb8);
    uVar9 = ((undefined8 *)(param_1 + _DAT_112f45eb8))[1];
    uStack_168 = *(undefined8 *)(param_1 + _DAT_112f45ec0);
    lStack_128 = _DAT_112f45ec8;
    func_0x000107c61428(param_1 + _DAT_112f45ec8,auStack_90,0,0);
    lVar3 = param_1 + lVar3;
    func_0x000107c61618();
    lStack_158 = lVar3;
    func_0x000107c61434(uVar9);
    func_0x000107c6157c(pcVar2);
    uVar17 = uStack_e0;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    uVar10 = uStack_d8;
    uStack_170 = uVar17;
    func_0x000107c5c894();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(lStack_e8 + _DAT_11307fc48);
    uStack_180 = uVar10;
    lStack_130 = param_1;
    func_0x000107c61174();
    uVar12 = uStack_c8;
    func_0x000107c42ca0();
    func_0x000107c61180();
    uVar13 = uStack_b8;
    func_0x000107c4d80c();
    func_0x000107c61180();
    lVar14 = 0;
    uStack_178 = uVar13;
    FUN_1028dcdc4();
    lVar8 = lVar14;
    func_0x000107c610f8();
    lVar7 = _DAT_112ec9550;
    func_0x000107c61614(lVar8 + _DAT_112ec9550,0);
    *(undefined8 *)(lVar8 + _DAT_112ec9568) = 0;
    *(undefined1 *)(lVar8 + _DAT_112ec95a8) = 2;
    *(undefined8 *)(lVar8 + _DAT_112ec95b0) = 0;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112ec9528);
    *puVar1 = uStack_160;
    puVar1[1] = uVar9;
    *(undefined8 *)(lVar8 + _DAT_112ec9530) = uStack_168;
    (**(code **)(lStack_c0 + 0x10))(lVar8 + _DAT_112ec9538,lStack_d0,lStack_b0);
    *(char *)(lVar8 + _DAT_112ec9540) = (char)uStack_120;
    *(char *)(lVar8 + _DAT_112ec9548) = (char)uStack_144;
    func_0x000107c61604(lVar8 + lVar7,lVar3);
    uVar15 = uStack_138;
    uVar17 = uStack_150;
    uVar9 = uStack_170;
    *(code **)(lVar8 + _DAT_112ec9558) = pcVar2;
    *(undefined8 *)(lVar8 + _DAT_112ec9560) = uStack_170;
    *(undefined8 *)(lVar8 + _DAT_112ec9570) = uVar10;
    *(undefined8 *)(lVar8 + _DAT_112ec9578) = uVar11;
    *(undefined8 *)(lVar8 + _DAT_112ec9580) = uVar12;
    *(undefined8 *)(lVar8 + _DAT_112ec9588) = uVar13;
    *(code **)(lVar8 + _DAT_112ec9590) = pcStack_f0;
    *(undefined8 *)(lVar8 + _DAT_112ec9598) = uStack_150;
    *(undefined8 *)(lVar8 + _DAT_112ec95a0) = uStack_138;
    puVar5 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_a0 = lVar8;
    lStack_98 = lVar14;
    func_0x000107c61580(pcStack_f0,2);
    func_0x000107c61174();
    func_0x000107c61174(uVar15);
    pcStack_140 = pcVar2;
    func_0x000107c6157c(pcVar2);
    func_0x000107c61174(uVar11);
    func_0x000107c61174();
    uStack_120 = uVar17;
    func_0x000107c61174(uVar15);
    func_0x000107c61174(uVar9);
    uVar17 = uStack_180;
    func_0x000107c61174(uStack_180);
    func_0x000107c61174(uVar12);
    uVar10 = uStack_178;
    func_0x000107c61174(uStack_178);
    plVar16 = &lStack_a0;
    func_0x000107c61154(plVar16,puVar5,0,0);
    func_0x000107c61574(pcVar2);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar10);
    pcVar2 = pcStack_f0;
    func_0x000107c61574(pcStack_f0);
    uVar9 = uStack_120;
    func_0x000107c61170(uStack_120);
    func_0x000107c61170(uVar15);
    func_0x000107c615e8(lStack_158);
    func_0x000107c5a304(plVar16);
    puVar4 = puStack_118;
    uVar17 = *(undefined8 *)(puStack_118 + _DAT_112ec94e0);
    *(long **)(puStack_118 + _DAT_112ec94e0) = plVar16;
    func_0x000107c61174(plVar16);
    func_0x000107c61170(uVar17);
    lVar7 = lStack_130;
    uVar17 = *(undefined8 *)(puVar4 + _DAT_112ec94e8);
    *(undefined8 *)(puVar4 + _DAT_112ec94e8) = *(undefined8 *)(lStack_130 + _DAT_112f45eb0);
    func_0x000107c615f0();
    func_0x000107c615e8(uVar17);
    lVar3 = lVar7 + lStack_128;
    func_0x000107c61618();
    func_0x000107c61604(puVar4 + _DAT_112ec94f0,lVar3);
    func_0x000107c615e8(lVar3);
    puVar5 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c52684();
    func_0x000107c5a05c(puVar5);
    func_0x000107c5a070(puVar5);
    func_0x000107c5921c(puVar5);
    func_0x000107c5a074(puVar5);
    uVar17 = *(undefined8 *)(puVar4 + _DAT_112ec94d8);
    *(undefined **)(puVar4 + _DAT_112ec94d8) = puVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar17);
    func_0x000107c4ef38(puVar5);
    func_0x000107c61170(uStack_100);
    func_0x000107c61170(uStack_108);
    func_0x000107c61170(uStack_110);
    func_0x000107c61574(pcStack_140);
    func_0x000107c61574(pcVar2);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(plVar16);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lStack_e8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uStack_e0);
    func_0x000107c61170(uStack_d8);
    func_0x000107c61170(uStack_c8);
    func_0x000107c61170(lStack_a8);
    func_0x000107c61170(uStack_b8);
    func_0x000107c61170(lStack_f8);
    (**(code **)(lStack_c0 + 8))(lStack_d0,lStack_b0);
    func_0x000107c61170(lVar7);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028da2d4);
  (*pcVar2)();
}



/* Entry: 1028dab04; end: 1028dab07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dab04(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083898);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1028dab08; end: 1028dad13;  */

void FUN_1028dab08(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar2 = 0x5350555f42455744;
    func_0x000107c5fadc(0x5350555f42455744,0xef4c52555f4c4c45);
    uVar3 = 0;
    uVar7 = 0xe000000000000000;
    func_0x000107c5fadc(0,0xe000000000000000);
    lVar4 = param_2;
    func_0x000107c5c1dc(param_2);
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c5edd0(puVar8,lVar5,uVar7);
    func_0x000107c6142c(uVar7);
    puVar6 = puVar8;
    (**(code **)(lVar11 + 0x30))(puVar8,1,lVar1);
    if ((int)puVar6 == 1) {
      func_0x0001000293e4(puVar8);
      if (lRam0000000112ec94a0 != -1) {
        func_0x000107c61568(0x112ec94a0,FUN_1028d9590);
      }
      lVar9 = lVar1;
      func_0x000100028790(lVar1,0x113804c78);
      (**(code **)(lVar11 + 0x10))(param_1,lVar9,lVar1);
    }
    else {
      pcVar10 = *(code **)(lVar11 + 0x20);
      (*pcVar10)(lVar9,puVar8,lVar1);
      (*pcVar10)(param_1,lVar9,lVar1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1028dad14);
  (*pcVar10)();
}



/* Entry: 1028dad14; end: 1028daecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028dad14(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_2 + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar5 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f0c8ea0);
    lVar2 = lVar1;
    func_0x000107c4e60c(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar5);
    puVar3 = PTR_PTR_1126ae728;
    func_0x000107c61168(PTR_PTR_1126ae728);
    func_0x000107c3edf4();
    func_0x000107c61180();
    uVar5 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
    puVar4 = puVar3;
    func_0x000107c545b8(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c44588();
    func_0x000107c61180();
    lVar1 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (lVar1 != 0) {
      uVar5 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f0c8ec0);
      lVar6 = lVar1;
      func_0x000107c4c1b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar2);
      goto LAB_1028daeb4;
    }
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
  }
  lVar6 = 0;
LAB_1028daeb4:
  *param_1 = lVar6;
  return;
}



/* Entry: 1028daecc; end: 1028daed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028daecc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar5 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f0c8ea0);
    lVar2 = lVar1;
    func_0x000107c4e60c(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar5);
    puVar3 = PTR_PTR_1126ae728;
    func_0x000107c61168(PTR_PTR_1126ae728);
    func_0x000107c3edf4();
    func_0x000107c61180();
    uVar5 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
    puVar4 = puVar3;
    func_0x000107c545b8(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c44588();
    func_0x000107c61180();
    lVar1 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar1 != 0) {
      uVar5 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f0c8ec0);
      lVar6 = lVar1;
      func_0x000107c4c1b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar2);
      goto LAB_1028daeb4;
    }
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
  }
  lVar6 = 0;
LAB_1028daeb4:
  *param_1 = lVar6;
  return;
}



/* Entry: 1028daed4; end: 1028daf33; -[_TtC32DWebExplainerTrayScopeEntryPoint32DWebExplainerTrayScopeEntryPoint init] */

void FUN_1028daed4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DWebExplainerTrayScopeEntryPoint.DWebExplainerTrayScopeEntryPoint",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028daf00);
  (*pcVar1)();
}



/* Entry: 1028daf34; end: 1028daf8b; -[_TtC32DWebExplainerTrayScopeEntryPoint32DWebExplainerTrayScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028daf34(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec94d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec94e0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec94e8));
  param_1 = param_1 + _DAT_112ec94f0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1028daf8c; end: 1028daf97;  */

void FUN_1028daf8c(void)

{
  return;
}



/* Entry: 1028daf98; end: 1028daff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028daf98(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_112ec94e8) != 0) {
    func_0x000107c41864(*(long *)(param_1 + _DAT_112ec94e8),param_2,0);
  }
  param_1 = param_1 + _DAT_112ec94f0;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c411dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1028daff8; end: 1028db04b; -[_TtC32DWebExplainerTrayScopeEntryPoint32DWebExplainerTrayScopeEntryPoint tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x0001028db034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028db038) */

void FUN_1028daff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028db0f4(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1028db04c; end: 1028db0b3; -[_TtC32DWebExplainerTrayScopeEntryPoint32DWebExplainerTrayScopeEntryPoint tray:heightForPosition:] */

undefined8
FUN_1028db04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_1028db22c(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1028db0b4; end: 1028db0f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028db0b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083898);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1028db0f4; end: 1028db22b;  */

void FUN_1028db0f4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  if (param_1 == 2) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_110566170;
    func_0x000107c613fc(&UNK_110566170,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    puVar4 = &UNK_110566198;
    func_0x000107c613fc(&UNK_110566198,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_1028db380;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_50 = FUN_1028db388;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10006eb60;
    puStack_58 = &UNK_1105661b0;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar6 = puStack_48;
    func_0x000107c61174();
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c4e5fc(puVar2);
    func_0x000107c60bd0(ppuVar5);
    puVar6 = puVar4;
    func_0x000107c61544(puVar4,"",0x6e,0x8a,0x28,1);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
    if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028db22c);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 1028db22c; end: 1028db33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1028db22c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = -1.0;
  if ((param_1 == 8) && (lVar1 = *(long *)(unaff_x20 + _DAT_112ec94e0), lVar1 != 0)) {
    lVar4 = *(long *)(lVar1 + _DAT_112ec9568);
    dVar5 = 0.0;
    if (lVar4 != 0) {
      func_0x000107c61174(0);
      func_0x000107c61174();
      lVar2 = lVar1;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar1);
        dVar5 = 0.0;
      }
      else {
        lVar3 = lVar4;
        func_0x000107c5dbc0();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c5e07c();
          func_0x000107c615e8(lVar3);
        }
        func_0x000107c3ec60(lVar2);
        func_0x000107c609cc();
        dVar6 = 1.79769313486232e+308;
        func_0x000107c5b098(lVar4);
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c517d0();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
        dVar5 = dVar6 + dVar5;
      }
    }
  }
  return dVar5;
}



/* Entry: 1028db33c; end: 1028db35b;  */

void FUN_1028db33c(void)

{
  func_0x000107c61168(&PTR_PTR_11286d090);
  return;
}


