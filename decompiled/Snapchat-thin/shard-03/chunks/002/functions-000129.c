/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025b7258; end: 1025b7297;  */

void FUN_1025b7258(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1025b7f68(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MapBitmojiTrayScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1025b7298; end: 1025b730b;  */

void FUN_1025b7298(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1025b73f8;
  func_0x0001000823a8(0x1025b73f8,param_3);
  func_0x000100082720("SCMapBitmojiTrayEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1025b730c; end: 1025b7313;  */

void FUN_1025b730c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1025b73f8;
  func_0x0001000823a8();
  func_0x000100082720("SCMapBitmojiTrayEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1025b7314; end: 1025b73bb;  */

void FUN_1025b7314(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110525270;
  func_0x000107c613fc(&UNK_110525270,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1025b73f0;
  func_0x0001000823a8(FUN_1025b73f0,puVar1);
  func_0x000100082720("SCMapBitmojiTrayScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1025b73bc; end: 1025b73c3;  */

void FUN_1025b73bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110525270;
  func_0x000107c613fc(&UNK_110525270,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1025b73f0;
  func_0x0001000823a8(FUN_1025b73f0,puVar3);
  func_0x000100082720("SCMapBitmojiTrayScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1025b73c4; end: 1025b73ef;  */

void FUN_1025b73c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025b73f0; end: 1025b73ff;  */

void FUN_1025b73f0(undefined8 *param_1)

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
  puVar1 = &UNK_110525078;
  func_0x000107c613fc(&UNK_110525078,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1025b3bac;
  func_0x00010058fa64(FUN_1025b3bac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1025b7400; end: 1025b75d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1025b7400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1025b7910();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112ea92d8) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ea92e0) = param_7;
    puVar4 = auStack_80;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1025b75d8);
  (*pcVar2)();
}



/* Entry: 1025b75d8; end: 1025b7637; -[_TtC30MapBitmojiTrayScopeGraphBridge45MapBitmojiTrayScopeGraphBridgeSaberEntryPoint init] */

void FUN_1025b75d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapBitmojiTrayScopeGraphBridge.MapBitmojiTrayScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b7604);
  (*pcVar1)();
}



/* Entry: 1025b7638; end: 1025b766f; -[_TtC30MapBitmojiTrayScopeGraphBridge45MapBitmojiTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025b7654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025b7658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b7638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea92d8));
  return;
}



/* Entry: 1025b7670; end: 1025b7697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b7670(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ea92e0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ea92d8));
  return;
}



/* Entry: 1025b7698; end: 1025b76b7;  */

void FUN_1025b7698(void)

{
  func_0x000107c61168(&PTR_PTR_11284ff48);
  return;
}



/* Entry: 1025b76b8; end: 1025b773f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1025b76b8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea9310) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ea9318);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1025b7740);
  (*pcVar2)();
}



/* Entry: 1025b7740; end: 1025b7827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1025b7740(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea9310);
  *(undefined **)(unaff_x20 + _DAT_112ea9310) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea9318);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea9318))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110525390;
  func_0x000107c613fc(&UNK_110525390,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1025b782c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1025b7828; end: 1025b7833;  */

void FUN_1025b7828(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1025b7834; end: 1025b7893; -[_TtC30MapBitmojiTrayScopeGraphBridge45SCMapBitmojiTrayScopedServicesSaberEntryPoint init] */

void FUN_1025b7834(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapBitmojiTrayScopeGraphBridge.SCMapBitmojiTrayScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b7860);
  (*pcVar1)();
}



/* Entry: 1025b7894; end: 1025b78cb; -[_TtC30MapBitmojiTrayScopeGraphBridge45SCMapBitmojiTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b7894(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea9318));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea9310));
  return;
}



/* Entry: 1025b78cc; end: 1025b78cf;  */

void FUN_1025b78cc(void)

{
  return;
}



/* Entry: 1025b78d0; end: 1025b78ef;  */

void FUN_1025b78d0(void)

{
  FUN_1025b7740();
  return;
}



/* Entry: 1025b78f0; end: 1025b790f;  */

void FUN_1025b78f0(void)

{
  func_0x000107c61168(&PTR_PTR_112850010);
  return;
}



/* Entry: 1025b7910; end: 1025b79df;  */

undefined8 FUN_1025b7910(void)

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
  
  func_0x000107c61428(0x112ea9348,&uStack_40,0x20,0);
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
    FUN_1025b79e0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1025b79e0; end: 1025b79ff;  */

void FUN_1025b79e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128500d8);
  return;
}



/* Entry: 1025b7a00; end: 1025b7b97;  */

void FUN_1025b7a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea9350,&UNK_10dabe008);
  puVar1 = &UNK_1105253d8;
  func_0x000107c613fc(&UNK_1105253d8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1025b7b98,puVar1);
  return;
}



/* Entry: 1025b7b98; end: 1025b7ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b7b98(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_1025b79e0();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112ea9358) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112ea9360) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112ea9368) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112ea9370) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112ea9378) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1025b7ba8; end: 1025b7c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b7ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea9358) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea9360) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea9368) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea9370) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea9378) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025b7c44; end: 1025b7ca3; -[_TtC30MapBitmojiTrayScopeGraphBridge38MapBitmojiTrayScopeGraphBridgeServices init] */

void FUN_1025b7c44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapBitmojiTrayScopeGraphBridge.MapBitmojiTrayScopeGraphBridgeServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b7c70);
  (*pcVar1)();
}



/* Entry: 1025b7ca4; end: 1025b7d4b; -[_TtC30MapBitmojiTrayScopeGraphBridge38MapBitmojiTrayScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025b7cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b7ce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025b7cc4) */
/* WARNING: Removing unreachable block (ram,0x0001025b7ce4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b7ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea9358));
  return;
}



/* Entry: 1025b7d4c; end: 1025b7d57;  */

void FUN_1025b7d4c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1025b823c,param_1);
  return;
}



/* Entry: 1025b7d58; end: 1025b7d97;  */

void FUN_1025b7d58(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1025b8250,0);
  return;
}



/* Entry: 1025b7d98; end: 1025b7da3;  */

void FUN_1025b7d98(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1025b7da4,param_1);
  return;
}



/* Entry: 1025b7da4; end: 1025b7e17;  */

void FUN_1025b7da4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1025b7e18; end: 1025b7e23;  */

void FUN_1025b7e18(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1025b8240,param_1);
  return;
}



/* Entry: 1025b7e24; end: 1025b7e63;  */

void FUN_1025b7e24(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1025b8258,0);
  return;
}



/* Entry: 1025b7e64; end: 1025b7e6f;  */

void FUN_1025b7e64(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1025b8244,param_1);
  return;
}



/* Entry: 1025b7e70; end: 1025b7efb;  */

void FUN_1025b7e70(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1025b825c,0);
  return;
}



/* Entry: 1025b7efc; end: 1025b7f07;  */

void FUN_1025b7efc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1025b8248,param_1);
  return;
}



/* Entry: 1025b7f08; end: 1025b7f5f;  */

void FUN_1025b7f08(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1025b7f60; end: 1025b7f67;  */

undefined8 FUN_1025b7f60(void)

{
  return 0x1b;
}



/* Entry: 1025b7f68; end: 1025b80df;  */

void FUN_1025b7f68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110525400;
  func_0x000107c613fc(&UNK_110525400,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1025b80e0,puVar1);
  return;
}



/* Entry: 1025b80e0; end: 1025b80e7;  */

void FUN_1025b80e0(undefined8 *param_1)

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
  func_0x000107c61428(0x112ea9348,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ea9348,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105255d8;
  func_0x000107c613fc(&UNK_1105255d8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1025b8234;
  func_0x00010058fa64(0x1025b8234,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1025b80e8; end: 1025b8143;  */

void FUN_1025b80e8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ea9348,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ea9348,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1025b8144; end: 1025b825f;  */

undefined ** FUN_1025b8144(void)

{
  return &PTR_DAT_113066ce8;
}



/* Entry: 1025b8260; end: 1025b82a7; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8260(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea93d0;
  func_0x000107c61428(param_1 + _DAT_112ea93d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025b82a8; end: 1025b82ff; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b82a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea93d0;
  func_0x000107c61428(param_1 + _DAT_112ea93d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025b8300; end: 1025b8347; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint plusMapCarsAndPetsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8300(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea93d8;
  func_0x000107c61428(param_1 + _DAT_112ea93d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025b8348; end: 1025b8353; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint setPlusMapCarsAndPetsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8348(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea93d8;
  func_0x000107c61428(param_1 + _DAT_112ea93d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025b8354; end: 1025b839b; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8354(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea93e0;
  func_0x000107c61428(param_1 + _DAT_112ea93e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025b839c; end: 1025b83a7; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b839c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea93e0;
  func_0x000107c61428(param_1 + _DAT_112ea93e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025b83a8; end: 1025b83ef; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint sCBitmojiCreateFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b83a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea93e8;
  func_0x000107c61428(param_1 + _DAT_112ea93e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025b83f0; end: 1025b83fb; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint setSCBitmojiCreateFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b83f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea93e8;
  func_0x000107c61428(param_1 + _DAT_112ea93e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025b83fc; end: 1025b8443; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint sCBitmojiEditAvatarBuilderScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b83fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea93f0;
  func_0x000107c61428(param_1 + _DAT_112ea93f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025b8444; end: 1025b844f; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint setSCBitmojiEditAvatarBuilderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8444(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea93f0;
  func_0x000107c61428(param_1 + _DAT_112ea93f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025b8450; end: 1025b8497; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint sCMapHomeWorkSettingsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8450(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea93f8;
  func_0x000107c61428(param_1 + _DAT_112ea93f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025b8498; end: 1025b84a3; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint setSCMapHomeWorkSettingsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8498(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea93f8;
  func_0x000107c61428(param_1 + _DAT_112ea93f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025b84a4; end: 1025b84eb; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint mapBitmojiTrayScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b84a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea9400;
  func_0x000107c61428(param_1 + _DAT_112ea9400,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025b84ec; end: 1025b84f7; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint setMapBitmojiTrayScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b84ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea9400;
  func_0x000107c61428(param_1 + _DAT_112ea9400,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025b84f8; end: 1025b8557;  */

void FUN_1025b84f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1025b8558; end: 1025b8947;  */

/* WARNING: Possible PIC construction at 0x0001025b87d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b87e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b87f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b8818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b8828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b8838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b8848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b88fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b890c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b891c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b88dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b88ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b88bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b889c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b888c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025b88a0) */
/* WARNING: Removing unreachable block (ram,0x0001025b88c0) */
/* WARNING: Removing unreachable block (ram,0x0001025b88f0) */
/* WARNING: Removing unreachable block (ram,0x0001025b88e0) */
/* WARNING: Removing unreachable block (ram,0x0001025b8920) */
/* WARNING: Removing unreachable block (ram,0x0001025b8910) */
/* WARNING: Removing unreachable block (ram,0x0001025b8900) */
/* WARNING: Removing unreachable block (ram,0x0001025b884c) */
/* WARNING: Removing unreachable block (ram,0x0001025b883c) */
/* WARNING: Removing unreachable block (ram,0x0001025b882c) */
/* WARNING: Removing unreachable block (ram,0x0001025b881c) */
/* WARNING: Removing unreachable block (ram,0x0001025b87f4) */
/* WARNING: Removing unreachable block (ram,0x0001025b87e4) */
/* WARNING: Removing unreachable block (ram,0x0001025b87d4) */
/* WARNING: Removing unreachable block (ram,0x0001025b8890) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8558(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c4ea68();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c4eaa8();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c50a9c();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c50aa4();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c50fd4();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            func_0x000107c4c2b8();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_1025b7698();
              lVar4 = lVar6;
              func_0x000107c610f8();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              lVar5 = lVar3;
              FUN_1025b7910();
              if (lVar5 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1025b8948);
                (*pcVar2)();
              }
              func_0x000100083b20(&uStack_68);
              uVar1 = uStack_68;
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uVar1);
              func_0x000100083b20(&uStack_68);
              uVar1 = uStack_68;
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uVar1);
              func_0x000100083b20(&uStack_68);
              uVar1 = uStack_68;
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uVar1);
              func_0x000100083b20(&uStack_68);
              uVar1 = uStack_68;
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uVar1);
              func_0x000100083b20(&uStack_68);
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uStack_68);
              *(long *)(lVar4 + _DAT_112ea92d8) = lVar5;
              *(long *)(lVar4 + _DAT_112ea92e0) = unaff_x20;
              lStack_80 = lVar4;
              lStack_78 = lVar6;
              func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1025b8948; end: 1025b896f; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1025b8948(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025b8558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025b8970; end: 1025b89b3; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint end] */

void FUN_1025b8970(undefined8 param_1)

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



/* Entry: 1025b89b4; end: 1025b8d67;  */

void FUN_1025b89b4(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef0f50300)) ||
       (func_0x000107c605b8(0xd00000000000001e,0x800000010f0afd00,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57574();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10dfbf0)) {
        uVar2 = 0xd000000000000019;
        func_0x000107c605b8(0xd000000000000019,0x800000010ef20410,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd00000000000001f;
          if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef104eb00)) ||
             (func_0x000107c605b8(0xd00000000000001f,0x800000010efb1500,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58044();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef10061e0)) ||
               (func_0x000107c605b8(0xd000000000000026,0x800000010eff9e20,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5804c();
            }
            else {
              uVar2 = 0xd000000000000021;
              if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef0f50060)) ||
                 (func_0x000107c605b8(0xd000000000000021,0x800000010f0affa0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5857c();
              }
              else {
                uVar2 = 0xd00000000000002d;
                if (((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0f50030)) &&
                   (func_0x000107c605b8(0xd00000000000002d,0x800000010f0affd0,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "MapBitmojiTrayScopeGraphBridge/SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint.swift"
                                      ,0x54,2,0x48,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b8d68);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c561fc();
              }
            }
          }
          goto LAB_1025b8a40;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57598();
    }
  }
LAB_1025b8a40:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1025b8d68; end: 1025b8e13; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1025b8d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1025b89b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025b8e14; end: 1025b8ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8e14(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ea93d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ea93d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea93e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea93e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea93f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea93f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea9400) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea9408) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025b8ebc; end: 1025b8edb; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint init] */

void FUN_1025b8ebc(void)

{
  FUN_1025b8e14();
  return;
}



/* Entry: 1025b8edc; end: 1025b8f0f;  */

void FUN_1025b8edc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025b8f10; end: 1025b8fa7; -[SCMapBitmojiTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025b8f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b8f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b8f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025b8f60) */
/* WARNING: Removing unreachable block (ram,0x0001025b8f40) */
/* WARNING: Removing unreachable block (ram,0x0001025b8f80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8f10(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea93d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea93d8));
  return;
}



/* Entry: 1025b8fa8; end: 1025b8fc7;  */

void FUN_1025b8fa8(void)

{
  func_0x000107c61168(&PTR_PTR_1128501b8);
  return;
}



/* Entry: 1025b8fc8; end: 1025b900f; -[SCSCMapBitmojiTrayScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b8fc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea9438;
  func_0x000107c61428(param_1 + _DAT_112ea9438,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025b9010; end: 1025b9067; -[SCSCMapBitmojiTrayScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b9010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea9438;
  func_0x000107c61428(param_1 + _DAT_112ea9438,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025b9068; end: 1025b913f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b9068(undefined8 param_1,long param_2)

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
    FUN_1025b78f0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ea9310) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1025b9140);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ea9318);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ea9440);
    *(long **)(unaff_x20 + _DAT_112ea9440) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1025b9140; end: 1025b9167; -[SCSCMapBitmojiTrayScopedServicesSaberEntryPoint begin] */

void FUN_1025b9140(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025b9068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025b9168; end: 1025b92df;  */

/* WARNING: Possible PIC construction at 0x0001025b91d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025b9268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025b91d4) */
/* WARNING: Removing unreachable block (ram,0x0001025b926c) */
/* WARNING: Removing unreachable block (ram,0x0001025b9284) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b9168(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea9440);
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



/* Entry: 1025b92e0; end: 1025b92e7;  */

void FUN_1025b92e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1025b92e8; end: 1025b931b; -[SCSCMapBitmojiTrayScopedServicesSaberEntryPoint end] */

void FUN_1025b92e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1025b9168();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1025b931c; end: 1025b943b;  */

void FUN_1025b931c(long param_1,long param_2,long param_3)

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
                        "MapBitmojiTrayScopeGraphBridge/SCSCMapBitmojiTrayScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x30,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b943c);
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



/* Entry: 1025b943c; end: 1025b94e7; -[SCSCMapBitmojiTrayScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1025b943c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1025b931c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025b94e8; end: 1025b9547; -[SCSCMapBitmojiTrayScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b94e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ea9438,0);
  *(undefined8 *)(param_1 + _DAT_112ea9440) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025b9548; end: 1025b957b;  */

void FUN_1025b9548(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025b957c; end: 1025b95b3; -[SCSCMapBitmojiTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b957c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea9438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea9440));
  return;
}



/* Entry: 1025b95b4; end: 1025b95d3;  */

void FUN_1025b95b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128502a8);
  return;
}



/* Entry: 1025b95d4; end: 1025b963f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b95d4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1025b99c8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea9478) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1025b9640; end: 1025b96ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b9640(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea9478) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025b96ac; end: 1025b970b; -[_TtC42MapFocusedDropScopedFactoryServiceProvider30SCMapFocusedDropScopedServices init] */

void FUN_1025b96ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusedDropScopedFactoryServiceProvider.SCMapFocusedDropScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025b96d8);
  (*pcVar1)();
}



/* Entry: 1025b970c; end: 1025b971b; -[_TtC42MapFocusedDropScopedFactoryServiceProvider30SCMapFocusedDropScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b970c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea9478));
  return;
}



/* Entry: 1025b971c; end: 1025b9787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025b971c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105257f0;
  func_0x000107c613fc(&UNK_1105257f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1025b9a60,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1025b9788; end: 1025b9823;  */

void FUN_1025b9788(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110525700;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110525700;
  return;
}



/* Entry: 1025b9824; end: 1025b985b;  */

void FUN_1025b9824(long *param_1)

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



/* Entry: 1025b985c; end: 1025b9863;  */

undefined8 FUN_1025b985c(void)

{
  return 0x1b;
}



/* Entry: 1025b9864; end: 1025b9997;  */

void FUN_1025b9864(undefined8 *param_1)

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
  puVar1 = &UNK_110525818;
  func_0x000107c613fc(&UNK_110525818,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1025b9a38;
  func_0x00010058fa64(FUN_1025b9a38,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1025b9998; end: 1025b99c7;  */

undefined ** FUN_1025b9998(void)

{
  return &PTR_DAT_113066d18;
}



/* Entry: 1025b99c8; end: 1025b99e7;  */

void FUN_1025b99c8(void)

{
  func_0x000107c61168(&PTR_PTR_112850368);
  return;
}



/* Entry: 1025b99e8; end: 1025b9a37;  */

undefined1  [16] FUN_1025b99e8(void)

{
  return ZEXT816(0x110525750);
}



/* Entry: 1025b9a38; end: 1025b9a5f;  */

void FUN_1025b9a38(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1025b9a60; end: 1025b9a63;  */

void FUN_1025b9a60(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1025b9a64; end: 1025b9e97;  */

void FUN_1025b9a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea94e0,&UNK_10dabe600);
  puVar1 = &UNK_110525858;
  func_0x000107c613fc(&UNK_110525858,200,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  *(undefined8 *)(puVar1 + 0x18) = param_13;
  *(undefined8 *)(puVar1 + 0x20) = param_18;
  *(undefined8 *)(puVar1 + 0x28) = param_21;
  *(undefined8 *)(puVar1 + 0x30) = param_8;
  *(undefined8 *)(puVar1 + 0x38) = param_15;
  *(undefined8 *)(puVar1 + 0x40) = param_19;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_22;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  *(undefined8 *)(puVar1 + 0x60) = param_4;
  *(undefined8 *)(puVar1 + 0x68) = param_20;
  *(undefined8 *)(puVar1 + 0x70) = param_23;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_10;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_6;
  *(undefined8 *)(puVar1 + 0xa0) = param_9;
  *(undefined8 *)(puVar1 + 0xa8) = param_3;
  *(undefined8 *)(puVar1 + 0xb0) = param_1;
  *(undefined8 *)(puVar1 + 0xb8) = param_2;
  *(undefined8 *)(puVar1 + 0xc0) = param_11;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(FUN_1025b9e98,puVar1);
  return;
}



/* Entry: 1025b9e98; end: 1025b9eeb;  */

void FUN_1025b9e98(void)

{
  long unaff_x20;
  
  func_0x0001025b9c64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 1025b9eec; end: 1025b9efb;  */

undefined1  [16] FUN_1025b9eec(void)

{
  return ZEXT816(0x110525880);
}



/* Entry: 1025b9efc; end: 1025ba4d3;  */

void FUN_1025b9efc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_70 [2];
  
  uVar14 = *param_2;
  func_0x0001000285a8(0x112ea94f0,&UNK_10dabe648);
  puVar1 = auStack_70;
  auStack_70[0] = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001025bd404();
  pcVar3 = "SCMapDirectionsSheetScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapDirectionsSheetScopeExposerSubjectServiceProvider",0x36,2);
  FUN_1025bd450();
  pcVar4 = "SCMapPlaceSharingScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapPlaceSharingScopeExposerSubjectServiceProvider",0x33,2);
  FUN_1025bd49c();
  func_0x000100082720("SCVenueEditorScopeExposerSubjectServiceProvider",0x2f,2);
  puVar5 = puVar2;
  FUN_1025bd444();
  func_0x000100082720("SCMapDirectionsSheetScopeExposerObservableServiceProvider",0x39,2);
  pcVar6 = pcVar3;
  FUN_1025bd490();
  func_0x000100082720("SCMapPlaceSharingScopeExposerObservableServiceProvider",0x36,2);
  pcVar7 = pcVar4;
  FUN_1025bd528();
  func_0x000100082720("SCVenueEditorScopeExposerObservableServiceProvider",0x32,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_1025b9824;
  func_0x0001000823a8(FUN_1025b9824,0);
  func_0x000100082720("SCMapFocusedDropScopedServicesCleanupRelayServiceProvider",0x39,2);
  puVar9 = puVar2;
  FUN_1025bd1a0(puVar2,pcVar3,pcVar4);
  func_0x000100082720("MapFocusedDropScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112ea94f8,&UNK_10dabe660);
  puVar10 = &UNK_1105258c8;
  func_0x000107c613fc(&UNK_1105258c8,0xe8,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  *(undefined8 *)(puVar10 + 0x20) = param_4;
  *(undefined8 *)(puVar10 + 0x28) = param_5;
  *(undefined8 *)(puVar10 + 0x30) = param_6;
  *(undefined8 *)(puVar10 + 0x38) = param_7;
  *(undefined8 *)(puVar10 + 0x40) = param_8;
  *(undefined8 *)(puVar10 + 0x48) = param_9;
  *(undefined8 *)(puVar10 + 0x50) = param_10;
  *(undefined8 *)(puVar10 + 0x58) = param_11;
  *(undefined8 *)(puVar10 + 0x60) = param_12;
  *(undefined8 *)(puVar10 + 0x68) = param_13;
  *(undefined8 *)(puVar10 + 0x70) = param_14;
  *(undefined8 *)(puVar10 + 0x78) = param_15;
  *(undefined8 *)(puVar10 + 0x80) = param_16;
  *(undefined8 *)(puVar10 + 0x88) = param_17;
  *(undefined8 *)(puVar10 + 0x90) = param_18;
  *(undefined8 *)(puVar10 + 0x98) = param_19;
  *(undefined8 *)(puVar10 + 0xa0) = param_20;
  *(undefined8 *)(puVar10 + 0xa8) = param_21;
  *(undefined8 *)(puVar10 + 0xb0) = param_22;
  *(undefined8 *)(puVar10 + 0xb8) = param_23;
  *(undefined8 *)(puVar10 + 0xc0) = param_24;
  *(undefined8 *)(puVar10 + 200) = param_25;
  *(undefined8 **)(puVar10 + 0xd0) = puVar5;
  *(char **)(puVar10 + 0xd8) = pcVar6;
  *(char **)(puVar10 + 0xe0) = pcVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar7);
  uVar14 = 0x1025ba608;
  func_0x0001000823a8(0x1025ba608,puVar10);
  func_0x000100082720("SCMapFocusedDropEntryPointWrapperServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ea9500,&UNK_10dabe650);
  puVar10 = &UNK_1105258f0;
  func_0x000107c613fc(&UNK_1105258f0,0x30,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 **)(puVar10 + 0x18) = puVar9;
  *(undefined8 *)(puVar10 + 0x20) = uVar14;
  *(code **)(puVar10 + 0x28) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(pcVar8);
  pcVar11 = FUN_1025ba664;
  func_0x0001000823a8(FUN_1025ba664,puVar10);
  func_0x000100082720("SCMapFocusedDropScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ea9480,&UNK_10dabe410);
  func_0x000107c6157c(pcVar11);
  uVar12 = 0x1025ba670;
  func_0x0001000823a8(0x1025ba670,pcVar11);
  func_0x000100082720("SCMapFocusedDropScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112ea9470,&UNK_10dabe400);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x1025ba678;
  func_0x0001000823a8(0x1025ba678,uVar12);
  func_0x000100082720("SCMapFocusedDropScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_110525918;
  func_0x000107c613fc(&UNK_110525918,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar13;
  *(code **)(puVar10 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar13 = 0x1025ba680;
  func_0x0001000823a8(0x1025ba680,puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCMapFocusedDropScopeEntryPointProvider",0x27,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 1025ba4d4; end: 1025ba663;  */

void FUN_1025ba4d4(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025ba664; end: 1025ba687;  */

void FUN_1025ba664(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1025bc888(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCMapFocusedDropScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = uVar1;
  return;
}


