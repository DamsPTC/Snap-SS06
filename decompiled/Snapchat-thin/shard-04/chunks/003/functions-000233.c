/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10338076c; end: 1033807df;  */

void FUN_10338076c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1033808cc;
  func_0x0001000823a8(0x1033808cc,param_3);
  func_0x000100082720("SCMapStoryPlaybackEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 1033807e0; end: 1033807e7;  */

void FUN_1033807e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1033808cc;
  func_0x0001000823a8();
  func_0x000100082720("SCMapStoryPlaybackEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 1033807e8; end: 10338088f;  */

void FUN_1033807e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110647188;
  func_0x000107c613fc(&UNK_110647188,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1033808c4;
  func_0x0001000823a8(FUN_1033808c4,puVar1);
  func_0x000100082720("SCMapStoryPlaybackScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103380890; end: 103380897;  */

void FUN_103380890(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110647188;
  func_0x000107c613fc(&UNK_110647188,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1033808c4;
  func_0x0001000823a8(FUN_1033808c4,puVar3);
  func_0x000100082720("SCMapStoryPlaybackScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103380898; end: 1033808c3;  */

void FUN_103380898(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033808c4; end: 1033808d3;  */

void FUN_1033808c4(undefined8 *param_1)

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



/* Entry: 1033808d4; end: 103380a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033808d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_103380e94();
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
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112f5edf0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f5edf8) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103380a30);
  (*pcVar2)();
}



/* Entry: 103380a30; end: 103380a8f; -[_TtC32MapStoryPlaybackScopeGraphBridge47MapStoryPlaybackScopeGraphBridgeSaberEntryPoint init] */

void FUN_103380a30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapStoryPlaybackScopeGraphBridge.MapStoryPlaybackScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103380a5c);
  (*pcVar1)();
}



/* Entry: 103380a90; end: 103380ac7; -[_TtC32MapStoryPlaybackScopeGraphBridge47MapStoryPlaybackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103380aac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103380ab0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103380a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5edf0));
  return;
}



/* Entry: 103380ac8; end: 103380aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103380ac8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f5edf8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f5edf0));
  return;
}



/* Entry: 103380af0; end: 103380b0f;  */

void FUN_103380af0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2738);
  return;
}



/* Entry: 103380b10; end: 103380b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103380b10(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f5ef40);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103380b74; end: 103380b7b;  */

void FUN_103380b74(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103380b7c; end: 103380c1b;  */

void FUN_103380b7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103380c1c; end: 103380c3b;  */

void FUN_103380c1c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103380c3c; end: 103380cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103380c3c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5eef8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f5ef00);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103380cc4);
  (*pcVar2)();
}



/* Entry: 103380cc4; end: 103380dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103380cc4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5eef8);
  *(undefined **)(unaff_x20 + _DAT_112f5eef8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5ef00);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5ef00))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106472c0;
  func_0x000107c613fc(&UNK_1106472c0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103380db0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103380dac; end: 103380db7;  */

void FUN_103380dac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103380db8; end: 103380e17; -[_TtC32MapStoryPlaybackScopeGraphBridge47SCMapStoryPlaybackScopedServicesSaberEntryPoint init] */

void FUN_103380db8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapStoryPlaybackScopeGraphBridge.SCMapStoryPlaybackScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103380de4);
  (*pcVar1)();
}



/* Entry: 103380e18; end: 103380e4f; -[_TtC32MapStoryPlaybackScopeGraphBridge47SCMapStoryPlaybackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103380e18(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5ef00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5eef8));
  return;
}



/* Entry: 103380e50; end: 103380e53;  */

void FUN_103380e50(void)

{
  return;
}



/* Entry: 103380e54; end: 103380e73;  */

void FUN_103380e54(void)

{
  FUN_103380cc4();
  return;
}



/* Entry: 103380e74; end: 103380e93;  */

void FUN_103380e74(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2800);
  return;
}



/* Entry: 103380e94; end: 103380f63;  */

undefined8 FUN_103380e94(void)

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
  
  func_0x000107c61428(0x112f5ef30,&uStack_40,0x20,0);
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
    FUN_103380f64();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103380f64; end: 103380f83;  */

void FUN_103380f64(void)

{
  func_0x000107c61168(&PTR_PTR_1128d28c8);
  return;
}



/* Entry: 103380f84; end: 1033810e3;  */

void FUN_103380f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f5ef38,&UNK_10dbb9ae8);
  puVar1 = &UNK_110647308;
  func_0x000107c613fc(&UNK_110647308,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1033810e4,puVar1);
  return;
}



/* Entry: 1033810e4; end: 1033810ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033810e4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_103380f64();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112f5ef40) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112f5ef48) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f5ef50) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f5ef58) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1033810f0; end: 10338117b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033810f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5ef40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ef48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ef50) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ef58) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10338117c; end: 1033811db; -[_TtC32MapStoryPlaybackScopeGraphBridge40MapStoryPlaybackScopeGraphBridgeServices init] */

void FUN_10338117c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapStoryPlaybackScopeGraphBridge.MapStoryPlaybackScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033811a8);
  (*pcVar1)();
}



/* Entry: 1033811dc; end: 103381273; -[_TtC32MapStoryPlaybackScopeGraphBridge40MapStoryPlaybackScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033811f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103381218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033811fc) */
/* WARNING: Removing unreachable block (ram,0x00010338121c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033811dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5ef40));
  return;
}



/* Entry: 103381274; end: 10338127f;  */

void FUN_103381274(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103381280,param_1);
  return;
}



/* Entry: 103381280; end: 1033812f3;  */

void FUN_103381280(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1033812f4; end: 1033812ff;  */

void FUN_1033812f4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10338168c,param_1);
  return;
}



/* Entry: 103381300; end: 10338138b;  */

void FUN_103381300(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10338169c,0);
  return;
}



/* Entry: 10338138c; end: 103381397;  */

void FUN_10338138c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103381690,param_1);
  return;
}



/* Entry: 103381398; end: 1033813ef;  */

void FUN_103381398(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1033813f0; end: 1033813f7;  */

undefined8 FUN_1033813f0(void)

{
  return 0x1b;
}



/* Entry: 1033813f8; end: 10338156f;  */

void FUN_1033813f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110647330;
  func_0x000107c613fc(&UNK_110647330,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103381570,puVar1);
  return;
}



/* Entry: 103381570; end: 103381577;  */

void FUN_103381570(undefined8 *param_1)

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
  func_0x000107c61428(0x112f5ef30,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f5ef30,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110647488;
  func_0x000107c613fc(&UNK_110647488,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103381684;
  func_0x00010058fa64(0x103381684,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103381578; end: 1033815d3;  */

void FUN_103381578(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f5ef30,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f5ef30,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1033815d4; end: 10338169f;  */

undefined ** FUN_1033815d4(void)

{
  return &PTR_DAT_113066d78;
}



/* Entry: 1033816a0; end: 1033816e7; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033816a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5efb0;
  func_0x000107c61428(param_1 + _DAT_112f5efb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033816e8; end: 10338173f; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033816e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5efb0;
  func_0x000107c61428(param_1 + _DAT_112f5efb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103381740; end: 103381787; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint sCBloopsReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103381740(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5efb8;
  func_0x000107c61428(param_1 + _DAT_112f5efb8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103381788; end: 103381793; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint setSCBloopsReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103381788(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5efb8;
  func_0x000107c61428(param_1 + _DAT_112f5efb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103381794; end: 1033817db; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint sCOperaSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103381794(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5efc0;
  func_0x000107c61428(param_1 + _DAT_112f5efc0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033817dc; end: 1033817e7; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint setSCOperaSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033817dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5efc0;
  func_0x000107c61428(param_1 + _DAT_112f5efc0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033817e8; end: 10338182f; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint sCSafetyReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033817e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5efc8;
  func_0x000107c61428(param_1 + _DAT_112f5efc8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103381830; end: 10338183b; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint setSCSafetyReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103381830(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5efc8;
  func_0x000107c61428(param_1 + _DAT_112f5efc8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10338183c; end: 103381883; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint mapStoryPlaybackScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338183c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5efd0;
  func_0x000107c61428(param_1 + _DAT_112f5efd0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103381884; end: 10338188f; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint setMapStoryPlaybackScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103381884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5efd0;
  func_0x000107c61428(param_1 + _DAT_112f5efd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103381890; end: 1033818ef;  */

void FUN_103381890(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1033818f0; end: 103381bb3;  */

/* WARNING: Possible PIC construction at 0x000103381ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103381ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103381aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103381afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103381b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103381b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103381b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103381b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103381b8c) */
/* WARNING: Removing unreachable block (ram,0x000103381b7c) */
/* WARNING: Removing unreachable block (ram,0x000103381b10) */
/* WARNING: Removing unreachable block (ram,0x000103381b00) */
/* WARNING: Removing unreachable block (ram,0x000103381af0) */
/* WARNING: Removing unreachable block (ram,0x000103381acc) */
/* WARNING: Removing unreachable block (ram,0x000103381abc) */
/* WARNING: Removing unreachable block (ram,0x000103381b6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033818f0(void)

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
  func_0x000107c50af0();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c5113c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c51240();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c4c414();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_103380af0();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_103380e94();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103381bb4);
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
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112f5edf0) = lVar5;
          *(long *)(lVar4 + _DAT_112f5edf8) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103381bb4; end: 103381bdb; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103381bb4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033818f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103381bdc; end: 103381c1f; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint end] */

void FUN_103381bdc(undefined8 param_1)

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



/* Entry: 103381c20; end: 103381efb;  */

void FUN_103381c20(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0fa2550)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010f05dab0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0fae4b0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000001a,0x800000010f051b50,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0fa21e0)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd00000000000001a,0x800000010f05de20,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd00000000000002f;
                if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0ebbb60)) &&
                   (func_0x000107c605b8(0xd00000000000002f,0x800000010f1444a0,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "MapStoryPlaybackScopeGraphBridge/SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint.swift"
                                      ,0x58,2,0x69,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103381efc);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c562a4();
                goto LAB_103381cac;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c587e8();
            goto LAB_103381cac;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c586e4();
        goto LAB_103381cac;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58098();
  }
LAB_103381cac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103381efc; end: 103381fa7; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103381efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103381c20(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103381fa8; end: 103382037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103381fa8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f5efb0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f5efb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5efc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5efc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5efd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5efd8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103382038; end: 103382057; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint init] */

void FUN_103382038(void)

{
  FUN_103381fa8();
  return;
}



/* Entry: 103382058; end: 10338208b;  */

void FUN_103382058(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10338208c; end: 103382103; -[SCMapStoryPlaybackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033820b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033820d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033820bc) */
/* WARNING: Removing unreachable block (ram,0x0001033820dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338208c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5efb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5efb8));
  return;
}



/* Entry: 103382104; end: 103382123;  */

void FUN_103382104(void)

{
  func_0x000107c61168(&PTR_PTR_1128d29a0);
  return;
}



/* Entry: 103382124; end: 10338212f; -[SCMapContentFilteringServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103382124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5f008;
  func_0x000107c61428(param_1 + _DAT_112f5f008,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103382130; end: 10338213b; -[SCMapContentFilteringServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103382130(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5f008;
  func_0x000107c61428(param_1 + _DAT_112f5f008,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10338213c; end: 103382147; -[SCMapContentFilteringServicesSaberServiceProvider mapStoryPlaybackScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338213c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5f010;
  func_0x000107c61428(param_1 + _DAT_112f5f010,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103382148; end: 10338218b;  */

void FUN_103382148(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10338218c; end: 103382197; -[SCMapContentFilteringServicesSaberServiceProvider setMapStoryPlaybackScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338218c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5f010;
  func_0x000107c61428(param_1 + _DAT_112f5f010,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103382198; end: 1033821eb;  */

void FUN_103382198(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033821ec; end: 1033823ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033821ec(void)

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
    func_0x000107c4c410();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103380ba0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f5ef40);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f5f018);
      *(long *)(unaff_x20 + _DAT_112f5f018) = lVar4;
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
                      "MapStoryPlaybackScopeGraphBridge/SCMapContentFilteringServicesSaberServiceProvider.swift"
                      ,0x58,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103382318);
  (*pcVar1)();
}



/* Entry: 103382400; end: 103382433; -[SCMapContentFilteringServicesSaberServiceProvider provide] */

void FUN_103382400(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033821ec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103382434; end: 103382467; -[SCMapContentFilteringServicesSaberServiceProvider __safeProvide] */

void FUN_103382434(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103382318();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103382468; end: 1033824ab; -[SCMapContentFilteringServicesSaberServiceProvider end] */

void FUN_103382468(undefined8 param_1)

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



/* Entry: 1033824ac; end: 103382643;  */

void FUN_1033824ac(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0ebba70)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f144590,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MapStoryPlaybackScopeGraphBridge/SCMapContentFilteringServicesSaberServiceProvider.swift"
                            ,0x58,2,99,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103382644);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103382644; end: 1033826ef; -[SCMapContentFilteringServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103382644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033824ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033826f0; end: 103382763; -[SCMapContentFilteringServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033826f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5f008,0);
  func_0x000107c61614(param_1 + _DAT_112f5f010,0);
  *(undefined8 *)(param_1 + _DAT_112f5f018) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103382764; end: 103382797;  */

void FUN_103382764(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103382798; end: 1033827df; -[SCMapContentFilteringServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103382798(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5f008);
  func_0x000107c61610(param_1 + _DAT_112f5f010);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5f018));
  return;
}



/* Entry: 1033827e0; end: 1033827ff;  */

void FUN_1033827e0(void)

{
  func_0x000107c61168(&PTR_PTR_112f5f060);
  return;
}



/* Entry: 103382800; end: 103382847; -[SCSCMapStoryPlaybackScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103382800(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5f0c8;
  func_0x000107c61428(param_1 + _DAT_112f5f0c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103382848; end: 10338289f; -[SCSCMapStoryPlaybackScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103382848(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5f0c8;
  func_0x000107c61428(param_1 + _DAT_112f5f0c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033828a0; end: 103382977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033828a0(undefined8 param_1,long param_2)

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
    FUN_103380e74();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f5eef8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103382978);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f5ef00);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f5f0d0);
    *(long **)(unaff_x20 + _DAT_112f5f0d0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103382978; end: 10338299f; -[SCSCMapStoryPlaybackScopedServicesSaberEntryPoint begin] */

void FUN_103382978(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033828a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033829a0; end: 103382b17;  */

/* WARNING: Possible PIC construction at 0x000103382a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103382aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103382a0c) */
/* WARNING: Removing unreachable block (ram,0x000103382aa4) */
/* WARNING: Removing unreachable block (ram,0x000103382abc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033829a0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5f0d0);
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



/* Entry: 103382b18; end: 103382b1f;  */

void FUN_103382b18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103382b20; end: 103382b53; -[SCSCMapStoryPlaybackScopedServicesSaberEntryPoint end] */

void FUN_103382b20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033829a0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103382b54; end: 103382c73;  */

void FUN_103382b54(long param_1,long param_2,long param_3)

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
                        "MapStoryPlaybackScopeGraphBridge/SCSCMapStoryPlaybackScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x59,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103382c74);
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



/* Entry: 103382c74; end: 103382d1f; -[SCSCMapStoryPlaybackScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103382c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103382b54(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103382d20; end: 103382d7f; -[SCSCMapStoryPlaybackScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103382d20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5f0c8,0);
  *(undefined8 *)(param_1 + _DAT_112f5f0d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103382d80; end: 103382db3;  */

void FUN_103382d80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103382db4; end: 103382deb; -[SCSCMapStoryPlaybackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103382db4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5f0c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5f0d0));
  return;
}



/* Entry: 103382dec; end: 103382e0b;  */

void FUN_103382dec(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2ac8);
  return;
}



/* Entry: 103382e0c; end: 1033830f3;  */

void FUN_103382e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = PTR_PTR_1126d08b8;
  func_0x000107c610f8(PTR_PTR_1126d08b8);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c593e4(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c549e4(puVar1);
  puVar2 = PTR_PTR_1126bc1b8;
  func_0x000107c61168(PTR_PTR_1126bc1b8);
  func_0x000106b13b74();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar3 = &UNK_1106475b8;
  func_0x000107c613fc(&UNK_1106475b8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_1106475e0;
  func_0x000107c613fc(&UNK_1106475e0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  uStack_60 = 0x103383350;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1033830f4;
  puStack_68 = &UNK_1106475f8;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar3);
  func_0x000107c50290(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1033830f4; end: 10338316b;  */

/* WARNING: Possible PIC construction at 0x000103383150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103383154) */

void FUN_1033830f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10338316c; end: 103383207; -[_TtC41MapContentFilteringServicesImplementation23MapContentFilterService reportPlaceSnapWithSnapId:completion:] */

/* WARNING: Possible PIC construction at 0x0001033831e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033831e8) */

void FUN_10338316c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_110647590;
  func_0x000107c613fc(&UNK_110647590,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c6157c(param_1);
  FUN_103382e0c(param_3,param_2,FUN_10338333c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103383208; end: 103383273;  */

void FUN_103383208(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103383274,uVar1,uVar2);
  return;
}



/* Entry: 103383274; end: 1033832b3;  */

void FUN_103383274(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c5c2e0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001033832b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1033832b4; end: 10338333b;  */

void FUN_1033832b4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001033832ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10338333c; end: 103383377;  */

void FUN_10338333c(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010338334c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 103383378; end: 103383483;  */

undefined * FUN_103383378(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if ((param_1 & 1) == 0) {
    func_0x000103383960();
    puVar2 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    uVar1 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f144620);
    func_0x000107c409d8(puVar2);
  }
  else {
    FUN_103383894();
    puVar2 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    uVar1 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f144650);
    func_0x000107c40930(puVar2);
  }
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 103383484; end: 1033834d3;  */

void FUN_103383484(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1033834d4;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103383274,lVar1,lVar2);
  return;
}


