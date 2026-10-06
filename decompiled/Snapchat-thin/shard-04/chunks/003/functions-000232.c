/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10337a3c4; end: 10337a403;  */

void FUN_10337a3c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10337acf0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MapSearchScopeGraphBridgeScopeInitializationPluginProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10337a404; end: 10337a477;  */

void FUN_10337a404(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10337a564;
  func_0x0001000823a8(0x10337a564,param_3);
  func_0x000100082720("SCMapSearchEntryPointWrapperScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10337a478; end: 10337a47f;  */

void FUN_10337a478(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10337a564;
  func_0x0001000823a8();
  func_0x000100082720("SCMapSearchEntryPointWrapperScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10337a480; end: 10337a527;  */

void FUN_10337a480(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110646b10;
  func_0x000107c613fc(&UNK_110646b10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10337a55c;
  func_0x0001000823a8(FUN_10337a55c,puVar1);
  func_0x000100082720("SCMapSearchScopedServicesScopeInitializationPluginProvider",0x3a,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10337a528; end: 10337a52f;  */

void FUN_10337a528(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110646b10;
  func_0x000107c613fc(&UNK_110646b10,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10337a55c;
  func_0x0001000823a8(FUN_10337a55c,puVar3);
  func_0x000100082720("SCMapSearchScopedServicesScopeInitializationPluginProvider",0x3a,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10337a530; end: 10337a55b;  */

void FUN_10337a530(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10337a55c; end: 10337a56b;  */

void FUN_10337a55c(undefined8 *param_1)

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
  puVar1 = &UNK_110646968;
  func_0x000107c613fc(&UNK_110646968,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103379904;
  func_0x00010058fa64(FUN_103379904,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10337a56c; end: 10337a647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10337a56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10337a980();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f5e9d0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f5e9d8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10337a648);
  (*pcVar1)();
}



/* Entry: 10337a648; end: 10337a6a7; -[_TtC25MapSearchScopeGraphBridge40MapSearchScopeGraphBridgeSaberEntryPoint init] */

void FUN_10337a648(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSearchScopeGraphBridge.MapSearchScopeGraphBridgeSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10337a674);
  (*pcVar1)();
}



/* Entry: 10337a6a8; end: 10337a6df; -[_TtC25MapSearchScopeGraphBridge40MapSearchScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010337a6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010337a6c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337a6a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5e9d0));
  return;
}



/* Entry: 10337a6e0; end: 10337a707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337a6e0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f5e9d8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f5e9d0));
  return;
}



/* Entry: 10337a708; end: 10337a727;  */

void FUN_10337a708(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2298);
  return;
}



/* Entry: 10337a728; end: 10337a7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10337a728(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5ea08) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f5ea10);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10337a7b0);
  (*pcVar2)();
}



/* Entry: 10337a7b0; end: 10337a897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10337a7b0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5ea08);
  *(undefined **)(unaff_x20 + _DAT_112f5ea08) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5ea10);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5ea10))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110646c30;
  func_0x000107c613fc(&UNK_110646c30,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10337a89c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10337a898; end: 10337a8a3;  */

void FUN_10337a898(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10337a8a4; end: 10337a903; -[_TtC25MapSearchScopeGraphBridge40SCMapSearchScopedServicesSaberEntryPoint init] */

void FUN_10337a8a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSearchScopeGraphBridge.SCMapSearchScopedServicesSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10337a8d0);
  (*pcVar1)();
}



/* Entry: 10337a904; end: 10337a93b; -[_TtC25MapSearchScopeGraphBridge40SCMapSearchScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337a904(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5ea10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5ea08));
  return;
}



/* Entry: 10337a93c; end: 10337a93f;  */

void FUN_10337a93c(void)

{
  return;
}



/* Entry: 10337a940; end: 10337a95f;  */

void FUN_10337a940(void)

{
  FUN_10337a7b0();
  return;
}



/* Entry: 10337a960; end: 10337a97f;  */

void FUN_10337a960(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2360);
  return;
}



/* Entry: 10337a980; end: 10337aa4f;  */

undefined8 FUN_10337a980(void)

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
  
  func_0x000107c61428(0x112f5ea40,&uStack_40,0x20,0);
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
    FUN_10337aa50();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10337aa50; end: 10337aa6f;  */

void FUN_10337aa50(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2428);
  return;
}



/* Entry: 10337aa70; end: 10337aa8b;  */

void FUN_10337aa70(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5ea48,&UNK_10dbb92d8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10337aaf8,param_1);
  return;
}



/* Entry: 10337aa8c; end: 10337aaf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337aa8c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10337aa50();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f5ea50) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10337aaf8; end: 10337aaff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337aaf8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10337aa50();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f5ea50) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10337ab00; end: 10337ab4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337ab00(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5ea50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10337ab4c; end: 10337abab; -[_TtC25MapSearchScopeGraphBridge33MapSearchScopeGraphBridgeServices init] */

void FUN_10337ab4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSearchScopeGraphBridge.MapSearchScopeGraphBridgeServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10337ab78);
  (*pcVar1)();
}



/* Entry: 10337abac; end: 10337abbb; -[_TtC25MapSearchScopeGraphBridge33MapSearchScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337abac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5ea50));
  return;
}



/* Entry: 10337abbc; end: 10337ac47;  */

void FUN_10337abbc(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10337abfc,0);
  return;
}



/* Entry: 10337ac48; end: 10337ac63;  */

void FUN_10337ac48(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10337acb4,param_1);
  return;
}



/* Entry: 10337ac64; end: 10337acb3;  */

void FUN_10337ac64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10337acb4; end: 10337ace7;  */

void FUN_10337acb4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10337ace8; end: 10337acef;  */

undefined8 FUN_10337ace8(void)

{
  return 0x1b;
}



/* Entry: 10337acf0; end: 10337ae67;  */

void FUN_10337acf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110646c78;
  func_0x000107c613fc(&UNK_110646c78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10337ae68,puVar1);
  return;
}



/* Entry: 10337ae68; end: 10337ae6f;  */

void FUN_10337ae68(undefined8 *param_1)

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
  func_0x000107c61428(0x112f5ea40,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f5ea40,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110646d50;
  func_0x000107c613fc(&UNK_110646d50,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10337af3c;
  func_0x00010058fa64(0x10337af3c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10337ae70; end: 10337aecb;  */

void FUN_10337ae70(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f5ea40,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f5ea40,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10337aecc; end: 10337af43;  */

undefined ** FUN_10337aecc(void)

{
  return &PTR_DAT_113066d48;
}



/* Entry: 10337af44; end: 10337af8b; -[SCMapSearchScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337af44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5eaa8;
  func_0x000107c61428(param_1 + _DAT_112f5eaa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10337af8c; end: 10337afe3; -[SCMapSearchScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337af8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5eaa8;
  func_0x000107c61428(param_1 + _DAT_112f5eaa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10337afe4; end: 10337b02b; -[SCMapSearchScopeGraphBridgeSaberEntryPoint sCSearchBaseScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337afe4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5eab0;
  func_0x000107c61428(param_1 + _DAT_112f5eab0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10337b02c; end: 10337b037; -[SCMapSearchScopeGraphBridgeSaberEntryPoint setSCSearchBaseScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337b02c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5eab0;
  func_0x000107c61428(param_1 + _DAT_112f5eab0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10337b038; end: 10337b07f; -[SCMapSearchScopeGraphBridgeSaberEntryPoint mapSearchScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337b038(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5eab8;
  func_0x000107c61428(param_1 + _DAT_112f5eab8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10337b080; end: 10337b08b; -[SCMapSearchScopeGraphBridgeSaberEntryPoint setMapSearchScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337b080(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5eab8;
  func_0x000107c61428(param_1 + _DAT_112f5eab8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10337b08c; end: 10337b0eb;  */

void FUN_10337b08c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10337b0ec; end: 10337b2a7;  */

/* WARNING: Possible PIC construction at 0x00010337b204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337b228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337b238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337b27c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010337b23c) */
/* WARNING: Removing unreachable block (ram,0x00010337b22c) */
/* WARNING: Removing unreachable block (ram,0x00010337b208) */
/* WARNING: Removing unreachable block (ram,0x00010337b280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337b0ec(void)

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
  func_0x000107c51270();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4c3e8();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10337a708();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10337a980();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10337b2a8);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f5e9d0) = lVar5;
      *(long *)(lVar3 + _DAT_112f5e9d8) = unaff_x20;
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



/* Entry: 10337b2a8; end: 10337b2cf; -[SCMapSearchScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10337b2a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10337b0ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10337b2d0; end: 10337b313; -[SCMapSearchScopeGraphBridgeSaberEntryPoint end] */

void FUN_10337b2d0(undefined8 param_1)

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



/* Entry: 10337b314; end: 10337b517;  */

void FUN_10337b314(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0ebc230)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000018,0x800000010f143dd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0ebc210)) &&
           (func_0x000107c605b8(0xd000000000000028,0x800000010f143df0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MapSearchScopeGraphBridge/SCMapSearchScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x4a,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10337b518);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56284();
        goto LAB_10337b3a0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58818();
  }
LAB_10337b3a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10337b518; end: 10337b5c3; -[SCMapSearchScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10337b518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10337b314(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10337b5c4; end: 10337b63b; -[SCMapSearchScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337b5c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5eaa8,0);
  *(undefined8 *)(param_1 + _DAT_112f5eab0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5eab8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5eac0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10337b63c; end: 10337b66f;  */

void FUN_10337b63c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10337b670; end: 10337b6c7; -[SCMapSearchScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010337b69c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010337b6a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337b670(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5eaa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5eab0));
  return;
}



/* Entry: 10337b6c8; end: 10337b6e7;  */

void FUN_10337b6c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d24e8);
  return;
}



/* Entry: 10337b6e8; end: 10337b72f; -[SCSCMapSearchScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337b6e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5eaf0;
  func_0x000107c61428(param_1 + _DAT_112f5eaf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10337b730; end: 10337b787; -[SCSCMapSearchScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337b730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5eaf0;
  func_0x000107c61428(param_1 + _DAT_112f5eaf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10337b788; end: 10337b85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337b788(undefined8 param_1,long param_2)

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
    FUN_10337a960();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f5ea08) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10337b860);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f5ea10);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f5eaf8);
    *(long **)(unaff_x20 + _DAT_112f5eaf8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10337b860; end: 10337b887; -[SCSCMapSearchScopedServicesSaberEntryPoint begin] */

void FUN_10337b860(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10337b788();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10337b888; end: 10337b9ff;  */

/* WARNING: Possible PIC construction at 0x00010337b8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337b988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010337b8f4) */
/* WARNING: Removing unreachable block (ram,0x00010337b98c) */
/* WARNING: Removing unreachable block (ram,0x00010337b9a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337b888(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5eaf8);
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



/* Entry: 10337ba00; end: 10337ba07;  */

void FUN_10337ba00(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10337ba08; end: 10337ba3b; -[SCSCMapSearchScopedServicesSaberEntryPoint end] */

void FUN_10337ba08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10337b888();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10337ba3c; end: 10337bb5b;  */

void FUN_10337ba3c(long param_1,long param_2,long param_3)

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
                        "MapSearchScopeGraphBridge/SCSCMapSearchScopedServicesSaberEntryPoint.swift"
                        ,0x4a,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10337bb5c);
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



/* Entry: 10337bb5c; end: 10337bc07; -[SCSCMapSearchScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10337bb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10337ba3c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10337bc08; end: 10337bc67; -[SCSCMapSearchScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337bc08(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5eaf0,0);
  *(undefined8 *)(param_1 + _DAT_112f5eaf8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10337bc68; end: 10337bc9b;  */

void FUN_10337bc68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10337bc9c; end: 10337bcd3; -[SCSCMapSearchScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337bc9c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5eaf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5eaf8));
  return;
}



/* Entry: 10337bcd4; end: 10337bcf3;  */

void FUN_10337bcd4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d25b8);
  return;
}



/* Entry: 10337bcf4; end: 10337bd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337bcf4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10337c0e8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f5eb30) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10337bd60; end: 10337bdcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337bd60(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5eb30) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10337bdcc; end: 10337be2b; -[_TtC44MapStoryPlaybackScopedFactoryServiceProvider32SCMapStoryPlaybackScopedServices init] */

void FUN_10337bdcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapStoryPlaybackScopedFactoryServiceProvider.SCMapStoryPlaybackScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10337bdf8);
  (*pcVar1)();
}



/* Entry: 10337be2c; end: 10337be3b; -[_TtC44MapStoryPlaybackScopedFactoryServiceProvider32SCMapStoryPlaybackScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337be2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5eb30));
  return;
}



/* Entry: 10337be3c; end: 10337bea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337be3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110646f68;
  func_0x000107c613fc(&UNK_110646f68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10337c180,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10337bea8; end: 10337bf43;  */

void FUN_10337bea8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110646e78;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110646e78;
  return;
}



/* Entry: 10337bf44; end: 10337bf7b;  */

void FUN_10337bf44(long *param_1)

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



/* Entry: 10337bf7c; end: 10337bf83;  */

undefined8 FUN_10337bf7c(void)

{
  return 0x1b;
}



/* Entry: 10337bf84; end: 10337c0b7;  */

void FUN_10337bf84(undefined8 *param_1)

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
  puVar1 = &UNK_110646f90;
  func_0x000107c613fc(&UNK_110646f90,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10337c158;
  func_0x00010058fa64(FUN_10337c158,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10337c0b8; end: 10337c0e7;  */

undefined ** FUN_10337c0b8(void)

{
  return &PTR_DAT_113066d78;
}



/* Entry: 10337c0e8; end: 10337c107;  */

void FUN_10337c0e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2678);
  return;
}



/* Entry: 10337c108; end: 10337c157;  */

undefined1  [16] FUN_10337c108(void)

{
  return ZEXT816(0x110646ec8);
}



/* Entry: 10337c158; end: 10337c17f;  */

void FUN_10337c158(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10337c180; end: 10337c183;  */

void FUN_10337c180(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10337c184; end: 10337c50b;  */

/* WARNING: Possible PIC construction at 0x00010337c3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c4a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337c4e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010337c4d8) */
/* WARNING: Removing unreachable block (ram,0x00010337c4c8) */
/* WARNING: Removing unreachable block (ram,0x00010337c4b8) */
/* WARNING: Removing unreachable block (ram,0x00010337c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010337c498) */
/* WARNING: Removing unreachable block (ram,0x00010337c488) */
/* WARNING: Removing unreachable block (ram,0x00010337c478) */
/* WARNING: Removing unreachable block (ram,0x00010337c468) */
/* WARNING: Removing unreachable block (ram,0x00010337c458) */
/* WARNING: Removing unreachable block (ram,0x00010337c448) */
/* WARNING: Removing unreachable block (ram,0x00010337c438) */
/* WARNING: Removing unreachable block (ram,0x00010337c428) */
/* WARNING: Removing unreachable block (ram,0x00010337c418) */
/* WARNING: Removing unreachable block (ram,0x00010337c408) */
/* WARNING: Removing unreachable block (ram,0x00010337c3f8) */
/* WARNING: Removing unreachable block (ram,0x00010337c3e8) */
/* WARNING: Removing unreachable block (ram,0x00010337c3d8) */
/* WARNING: Removing unreachable block (ram,0x00010337c3c8) */
/* WARNING: Removing unreachable block (ram,0x00010337c3b8) */
/* WARNING: Removing unreachable block (ram,0x00010337c3a8) */
/* WARNING: Removing unreachable block (ram,0x00010337c4e8) */

void FUN_10337c184(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110647018;
  func_0x000107c613fc(&UNK_110647018,0x160,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  uVar2 = 0x112f5eba0;
  func_0x0001000285a8(0x112f5eba0,&UNK_10dbb9730);
  func_0x000107c613fc();
  pcVar3 = FUN_10337cea4;
  func_0x0001000841fc(FUN_10337cea4,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbb9700,0x2e,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10337c50c; end: 10337c587;  */

void FUN_10337c50c(void)

{
  long unaff_x20;
  
  FUN_10337c184(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158));
  return;
}



/* Entry: 10337c588; end: 10337c597;  */

undefined1  [16] FUN_10337c588(void)

{
  return ZEXT816(0x110646ff8);
}



/* Entry: 10337c598; end: 10337cd37;  */

void FUN_10337c598(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 auStack_70 [2];
  
  uVar15 = *param_2;
  func_0x0001000285a8(0x112f5eba8,&UNK_10dbb9738);
  puVar1 = auStack_70;
  auStack_70[0] = uVar15;
  func_0x0001000838ec();
  FUN_103383620(param_3,param_4,param_5);
  func_0x000100082720("MapContentFilteringServiceProvider",0x22,2);
  uVar2 = param_3;
  FUN_103383584();
  pcVar3 = "MapContentFilteringServicesServiceProvider";
  func_0x000100082720("MapContentFilteringServicesServiceProvider",0x2a,2);
  func_0x000103381234();
  pcVar4 = "SCBloopsReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBloopsReportScopeExposerSubjectServiceProvider",0x30,2);
  func_0x0001033812b4();
  pcVar5 = "SCOperaSessionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCOperaSessionScopeExposerSubjectServiceProvider",0x30,2);
  FUN_103381300();
  func_0x000100082720("SCSafetyReportScopeExposerSubjectServiceProvider",0x30,2);
  pcVar6 = pcVar3;
  FUN_103381274();
  func_0x000100082720("SCBloopsReportScopeExposerObservableServiceProvider",0x33,2);
  pcVar7 = pcVar4;
  FUN_1033812f4();
  func_0x000100082720("SCOperaSessionScopeExposerObservableServiceProvider",0x33,2);
  pcVar8 = pcVar5;
  FUN_10338138c();
  func_0x000100082720("SCSafetyReportScopeExposerObservableServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar9 = FUN_10337bf44;
  func_0x0001000823a8(FUN_10337bf44,0);
  func_0x000100082720("SCMapStoryPlaybackScopedServicesCleanupRelayServiceProvider",0x3b,2);
  uVar10 = uVar2;
  FUN_103380f84(uVar2,pcVar3,pcVar4,pcVar5);
  func_0x000100082720("MapStoryPlaybackScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f5ebb0,&UNK_10dbb9750);
  puVar11 = &UNK_110647040;
  func_0x000107c613fc(&UNK_110647040,0x170,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar1;
  *(undefined8 *)(puVar11 + 0x18) = param_6;
  *(undefined8 *)(puVar11 + 0x20) = param_7;
  *(undefined8 *)(puVar11 + 0x28) = param_8;
  *(undefined8 *)(puVar11 + 0x30) = param_9;
  *(undefined8 *)(puVar11 + 0x38) = param_10;
  *(undefined8 *)(puVar11 + 0x40) = param_11;
  *(undefined8 *)(puVar11 + 0x48) = param_12;
  *(undefined8 *)(puVar11 + 0x50) = param_13;
  *(undefined8 *)(puVar11 + 0x58) = param_14;
  *(undefined8 *)(puVar11 + 0x60) = param_15;
  *(undefined8 *)(puVar11 + 0x68) = param_16;
  *(undefined8 *)(puVar11 + 0x70) = param_17;
  *(undefined8 *)(puVar11 + 0x78) = param_18;
  *(undefined8 *)(puVar11 + 0x80) = param_19;
  *(undefined8 *)(puVar11 + 0x88) = param_20;
  *(undefined8 *)(puVar11 + 0x90) = param_21;
  *(undefined8 *)(puVar11 + 0x98) = param_22;
  *(undefined8 *)(puVar11 + 0xa0) = param_23;
  *(undefined8 *)(puVar11 + 0xa8) = param_24;
  *(undefined8 *)(puVar11 + 0xb0) = param_25;
  *(undefined8 *)(puVar11 + 0xb8) = param_26;
  *(undefined8 *)(puVar11 + 0xc0) = param_27;
  *(undefined8 *)(puVar11 + 200) = param_28;
  *(undefined8 *)(puVar11 + 0xd0) = param_29;
  *(undefined8 *)(puVar11 + 0xd8) = param_30;
  *(undefined8 *)(puVar11 + 0xe0) = param_31;
  *(undefined8 *)(puVar11 + 0xe8) = param_32;
  *(undefined8 *)(puVar11 + 0xf0) = param_33;
  *(undefined8 *)(puVar11 + 0xf8) = param_34;
  *(undefined8 *)(puVar11 + 0x100) = param_35;
  *(undefined8 *)(puVar11 + 0x108) = param_36;
  *(undefined8 *)(puVar11 + 0x110) = param_37;
  *(undefined8 *)(puVar11 + 0x118) = param_38;
  *(undefined8 *)(puVar11 + 0x120) = param_39;
  *(undefined8 *)(puVar11 + 0x128) = param_40;
  *(undefined8 *)(puVar11 + 0x130) = uVar2;
  *(undefined8 *)(puVar11 + 0x138) = param_41;
  *(undefined8 *)(puVar11 + 0x140) = param_42;
  *(undefined8 *)(puVar11 + 0x148) = param_43;
  *(undefined8 *)(puVar11 + 0x150) = param_44;
  *(char **)(puVar11 + 0x158) = pcVar7;
  *(char **)(puVar11 + 0x160) = pcVar8;
  *(char **)(puVar11 + 0x168) = pcVar6;
  func_0x000107c6157c(puVar1);
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
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(pcVar6);
  uVar15 = 0x10337cf5c;
  func_0x0001000823a8(0x10337cf5c,puVar11);
  func_0x000100082720("SCMapStoryPlaybackEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f5ebb8,&UNK_10dbb9740);
  puVar11 = &UNK_110647068;
  func_0x000107c613fc(&UNK_110647068,0x30,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar1;
  *(undefined8 *)(puVar11 + 0x18) = uVar10;
  *(undefined8 *)(puVar11 + 0x20) = uVar15;
  *(code **)(puVar11 + 0x28) = pcVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(pcVar9);
  pcVar12 = FUN_10337cfe0;
  func_0x0001000823a8(FUN_10337cfe0,puVar11);
  func_0x000100082720("SCMapStoryPlaybackScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f5eb38,&UNK_10dbb94e0);
  func_0x000107c6157c(pcVar12);
  uVar13 = 0x10337cfec;
  func_0x0001000823a8(0x10337cfec,pcVar12);
  func_0x000100082720("SCMapStoryPlaybackScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f5eb28,&UNK_10dbb94d0);
  func_0x000107c6157c(uVar13);
  uVar14 = 0x10337cff4;
  func_0x0001000823a8(0x10337cff4,uVar13);
  func_0x000100082720("SCMapStoryPlaybackScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar11 = &UNK_110647090;
  func_0x000107c613fc(&UNK_110647090,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar14;
  *(code **)(puVar11 + 0x18) = pcVar9;
  func_0x000107c6157c(pcVar9);
  uVar14 = 0x10337cffc;
  func_0x0001000823a8(0x10337cffc,puVar11);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(uVar13);
  func_0x000100082720("SCMapStoryPlaybackScopeEntryPointProvider",0x29,2);
  *param_1 = uVar14;
  return;
}



/* Entry: 10337cd38; end: 10337cea3;  */

void FUN_10337cd38(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10337cea4; end: 10337cfdf;  */

void FUN_10337cea4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10337c598(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158));
  return;
}



/* Entry: 10337cfe0; end: 10337d003;  */

void FUN_10337cfe0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103380540(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCMapStoryPlaybackScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10337d004; end: 1033801ef;  */

void FUN_10337d004(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  func_0x000100083b20(&uStack_1b0);
  func_0x000100083b20(&uStack_1b8);
  func_0x000100083b20(&uStack_1c0);
  func_0x000100083b20(&uStack_1c8);
  FUN_103380490();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  *(undefined8 *)(param_2 + 0xe0) = uStack_128;
  *(undefined8 *)(param_2 + 0xe8) = uStack_130;
  *(undefined8 *)(param_2 + 0xf0) = uStack_138;
  *(undefined8 *)(param_2 + 0xf8) = uStack_140;
  *(undefined8 *)(param_2 + 0x100) = uStack_148;
  *(undefined8 *)(param_2 + 0x108) = uStack_150;
  *(undefined8 *)(param_2 + 0x110) = uStack_158;
  *(undefined8 *)(param_2 + 0x118) = uStack_160;
  *(undefined8 *)(param_2 + 0x120) = uStack_168;
  *(undefined8 *)(param_2 + 0x128) = uStack_170;
  *(undefined8 *)(param_2 + 0x130) = uStack_178;
  *(undefined8 *)(param_2 + 0x138) = uStack_180;
  *(undefined8 *)(param_2 + 0x140) = uStack_188;
  *(undefined8 *)(param_2 + 0x148) = uStack_190;
  *(undefined8 *)(param_2 + 0x150) = uStack_198;
  *(undefined8 *)(param_2 + 0x158) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x160) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x168) = uStack_1b0;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  uVar18 = uStack_78;
  func_0x000107c61174();
  uVar20 = uStack_80;
  func_0x000107c61174();
  uVar21 = uStack_88;
  func_0x000107c61174();
  uVar22 = uStack_90;
  func_0x000107c61174();
  uVar1 = uStack_98;
  func_0x000107c61174();
  uVar2 = uStack_a0;
  func_0x000107c61174();
  uVar3 = uStack_a8;
  func_0x000107c61174();
  uVar4 = uStack_b0;
  func_0x000107c61174();
  uVar5 = uStack_b8;
  func_0x000107c61174();
  uVar6 = uStack_c0;
  func_0x000107c61174();
  uVar7 = uStack_c8;
  func_0x000107c61174();
  uVar8 = uStack_d0;
  func_0x000107c61174();
  uVar9 = uStack_d8;
  func_0x000107c61174();
  uVar10 = uStack_e0;
  func_0x000107c61174();
  uVar11 = uStack_e8;
  func_0x000107c61174();
  uVar12 = uStack_f0;
  func_0x000107c61174();
  uVar13 = uStack_f8;
  func_0x000107c61174();
  uVar14 = uStack_100;
  func_0x000107c61174();
  uVar15 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar29 = uStack_140;
  func_0x000107c61174();
  uVar30 = uStack_148;
  func_0x000107c61174();
  uVar31 = uStack_150;
  func_0x000107c61174();
  uVar32 = uStack_158;
  func_0x000107c61174();
  uVar33 = uStack_160;
  func_0x000107c61174();
  uVar34 = uStack_168;
  func_0x000107c61174();
  uVar35 = uStack_170;
  func_0x000107c61174();
  uVar36 = uStack_178;
  func_0x000107c61174();
  uVar37 = uStack_180;
  func_0x000107c61174();
  uVar38 = uStack_188;
  func_0x000107c61174();
  uVar39 = uStack_190;
  func_0x000107c61174();
  uVar40 = uStack_198;
  func_0x000107c61174();
  uVar41 = uStack_1a0;
  func_0x000107c61174();
  uVar42 = uStack_1a8;
  func_0x000107c61174();
  uVar43 = uStack_1b0;
  func_0x000107c61174();
  uVar44 = uStack_1b8;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar44);
  *(undefined **)(param_2 + 0x18) = puVar16;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar44 = uStack_1c0;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar44);
  *(undefined **)(param_2 + 0x20) = puVar16;
  func_0x0001000285a8(0x112e51df8,&UNK_10daafe60);
  func_0x000107c610f8();
  uVar44 = uStack_1c8;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar44);
  *(undefined **)(param_2 + 0x28) = puVar16;
  puVar16 = PTR_PTR_1126ad198;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar16;
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  uVar48 = 0xd000000000000015;
  uVar44 = uVar48;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f144120);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar44);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f144140);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000014;
  uVar44 = uVar45;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar44);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  uVar47 = 0xd000000000000012;
  uVar44 = uVar47;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01aaa0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar44);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar44 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar44);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  uVar44 = uVar47;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c380);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar44);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar44 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f05c010);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar44);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar44);
  uVar19 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar44 = uVar48;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar44);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000010;
  uVar44 = uVar46;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar44);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar46);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar44 = uVar47;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar44);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar44 = uVar48;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar44);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000013;
  uVar44 = uVar46;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar44);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0a3f40);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f051600);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar46);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4520);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0ad350);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar44);
  uVar19 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f05c3a0);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f009f80);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar44 = uVar45;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar44);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc33b0);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar45);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar44);
  uVar19 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef35720);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0583b0);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0a4090);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f144160);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar19);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar48);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar44 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0ad6b0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar44);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c610);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar47);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar46);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  uVar19 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar46);
  uVar44 = *(undefined8 *)(param_2 + 0x10);
  uVar19 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f05c900);
  func_0x000107c5a49c(uVar44);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar46);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61574(uStack_1b8);
  func_0x000107c61574(uStack_1c0);
  func_0x000107c61574(uStack_1c8);
  *param_1 = param_2;
  return;
}



/* Entry: 1033801f0; end: 103380383;  */

void FUN_1033801f0(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  return;
}



/* Entry: 103380384; end: 10338038b;  */

undefined8 FUN_103380384(void)

{
  return 0x1b;
}



/* Entry: 10338038c; end: 10338040f;  */

void FUN_10338038c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1033804d0,param_2,FUN_1033804d4,param_2,FUN_1033804fc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103380410; end: 10338045f;  */

undefined8 FUN_103380410(void)

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



/* Entry: 103380460; end: 10338048f;  */

undefined ** FUN_103380460(void)

{
  return &PTR_DAT_113066d78;
}



/* Entry: 103380490; end: 1033804af;  */

void FUN_103380490(void)

{
  func_0x000107c61168(&PTR_PTR_112f5ec28);
  return;
}



/* Entry: 1033804b0; end: 1033804d3;  */

undefined1  [16] FUN_1033804b0(void)

{
  return ZEXT816(0x1106470e8);
}



/* Entry: 1033804d4; end: 1033804fb;  */

void FUN_1033804d4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1033804fc; end: 103380503;  */

undefined8 FUN_1033804fc(void)

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



/* Entry: 103380504; end: 10338053f;  */

void FUN_103380504(undefined8 *param_1,undefined8 param_2)

{
  FUN_103380540();
  func_0x0001000a7f38("SCMapStoryPlaybackScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103380540; end: 10338072b;  */

void FUN_103380540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d8e8;
  ppuVar4 = &PTR_DAT_113066d78;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110647138;
  func_0x000107c613fc(&UNK_110647138,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f5ede0;
  func_0x0001000285a8(0x112f5ede0,&UNK_10dbb99d8);
  func_0x0001000a6ee8(&UNK_110647448,"MapStoryPlaybackScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_10338072c,puVar2,uVar3,&UNK_110647448,&PTR_DAT_112f5ef60);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106470e8,
                      "SCMapStoryPlaybackEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_1033807e0,param_3,uVar3,&UNK_1106470e8,&PTR_DAT_112f5ebc0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110647160;
  func_0x000107c613fc(&UNK_110647160,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110646f08,"SCMapStoryPlaybackScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_103380890,puVar2,uVar3,&UNK_110646f08,&PTR_DAT_112f5eb40);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f5ede8;
  func_0x0001000285a8(0x112f5ede8,&UNK_10dbb99e0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10338072c; end: 10338076b;  */

void FUN_10338072c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1033813f8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MapStoryPlaybackScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}


