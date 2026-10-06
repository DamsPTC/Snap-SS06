/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f4e3c8; end: 101f4e3f3;  */

void FUN_101f4e3c8(void)

{
  FUN_101f4e344();
  return;
}



/* Entry: 101f4e3f4; end: 101f4e433;  */

void FUN_101f4e3f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f4ec1c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesDeviceConnectionScopeGraphBridgeScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f4e434; end: 101f4e45b;  */

void FUN_101f4e434(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f4ddb8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f4e45c; end: 101f4e487;  */

void FUN_101f4e45c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f4e488; end: 101f4e497;  */

void FUN_101f4e488(undefined8 *param_1)

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
  puVar1 = &UNK_1104a6710;
  func_0x000107c613fc(&UNK_1104a6710,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f4ae24;
  func_0x00010058fa64(FUN_101f4ae24,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f4e498; end: 101f4e573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f4e498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_101f4e8ac();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e43818) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e43820) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4e574);
  (*pcVar1)();
}



/* Entry: 101f4e574; end: 101f4e5d3; -[_TtC42SpectaclesDeviceConnectionScopeGraphBridge57SpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f4e574(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceConnectionScopeGraphBridge.SpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4e5a0);
  (*pcVar1)();
}



/* Entry: 101f4e5d4; end: 101f4e60b; -[_TtC42SpectaclesDeviceConnectionScopeGraphBridge57SpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f4e5f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f4e5f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4e5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e43818));
  return;
}



/* Entry: 101f4e60c; end: 101f4e633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4e60c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e43820),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e43818));
  return;
}



/* Entry: 101f4e634; end: 101f4e653;  */

void FUN_101f4e634(void)

{
  func_0x000107c61168(&PTR_PTR_11280a850);
  return;
}



/* Entry: 101f4e654; end: 101f4e6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f4e654(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e43850) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e43858);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f4e6dc);
  (*pcVar2)();
}



/* Entry: 101f4e6dc; end: 101f4e7c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f4e6dc(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e43850);
  *(undefined **)(unaff_x20 + _DAT_112e43850) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e43858);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e43858))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104a6d70;
  func_0x000107c613fc(&UNK_1104a6d70,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f4e7c8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f4e7c4; end: 101f4e7cf;  */

void FUN_101f4e7c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f4e7d0; end: 101f4e82f; -[_TtC42SpectaclesDeviceConnectionScopeGraphBridge57SCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint init] */

void FUN_101f4e7d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceConnectionScopeGraphBridge.SCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4e7fc);
  (*pcVar1)();
}



/* Entry: 101f4e830; end: 101f4e867; -[_TtC42SpectaclesDeviceConnectionScopeGraphBridge57SCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4e830(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e43858));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e43850));
  return;
}



/* Entry: 101f4e868; end: 101f4e86b;  */

void FUN_101f4e868(void)

{
  return;
}



/* Entry: 101f4e86c; end: 101f4e88b;  */

void FUN_101f4e86c(void)

{
  FUN_101f4e6dc();
  return;
}



/* Entry: 101f4e88c; end: 101f4e8ab;  */

void FUN_101f4e88c(void)

{
  func_0x000107c61168(&PTR_PTR_11280a918);
  return;
}



/* Entry: 101f4e8ac; end: 101f4e97b;  */

undefined8 FUN_101f4e8ac(void)

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
  
  func_0x000107c61428(0x112e43888,&uStack_40,0x20,0);
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
    FUN_101f4e97c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f4e97c; end: 101f4e99b;  */

void FUN_101f4e97c(void)

{
  func_0x000107c61168(&PTR_PTR_11280a9e0);
  return;
}



/* Entry: 101f4e99c; end: 101f4e9b7;  */

void FUN_101f4e99c(undefined8 param_1)

{
  func_0x0001000285a8(0x112e43890,&UNK_10da35f08);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f4ea24,param_1);
  return;
}



/* Entry: 101f4e9b8; end: 101f4ea23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4e9b8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101f4e97c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e43898) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101f4ea24; end: 101f4ea2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4ea24(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_101f4e97c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e43898) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101f4ea2c; end: 101f4ea77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4ea2c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e43898) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f4ea78; end: 101f4ead7; -[_TtC42SpectaclesDeviceConnectionScopeGraphBridge50SpectaclesDeviceConnectionScopeGraphBridgeServices init] */

void FUN_101f4ea78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceConnectionScopeGraphBridge.SpectaclesDeviceConnectionScopeGraphBridgeServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4eaa4);
  (*pcVar1)();
}



/* Entry: 101f4ead8; end: 101f4eae7; -[_TtC42SpectaclesDeviceConnectionScopeGraphBridge50SpectaclesDeviceConnectionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4ead8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e43898));
  return;
}



/* Entry: 101f4eae8; end: 101f4eb73;  */

void FUN_101f4eae8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101f4eb28,0);
  return;
}



/* Entry: 101f4eb74; end: 101f4eb8f;  */

void FUN_101f4eb74(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f4ebe0,param_1);
  return;
}



/* Entry: 101f4eb90; end: 101f4ebdf;  */

void FUN_101f4eb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 101f4ebe0; end: 101f4ec13;  */

void FUN_101f4ebe0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101f4ec14; end: 101f4ec1b;  */

undefined8 FUN_101f4ec14(void)

{
  return 0x1b;
}



/* Entry: 101f4ec1c; end: 101f4ed93;  */

void FUN_101f4ec1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104a6db8;
  func_0x000107c613fc(&UNK_1104a6db8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f4ed94,puVar1);
  return;
}



/* Entry: 101f4ed94; end: 101f4ed9b;  */

void FUN_101f4ed94(undefined8 *param_1)

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
  func_0x000107c61428(0x112e43888,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e43888,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104a6e90;
  func_0x000107c613fc(&UNK_1104a6e90,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f4ee68;
  func_0x00010058fa64(0x101f4ee68,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f4ed9c; end: 101f4edf7;  */

void FUN_101f4ed9c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e43888,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e43888,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f4edf8; end: 101f4ee6f;  */

undefined ** FUN_101f4edf8(void)

{
  return &PTR_DAT_113066f10;
}



/* Entry: 101f4ee70; end: 101f4eeb7; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4ee70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e438f0;
  func_0x000107c61428(param_1 + _DAT_112e438f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f4eeb8; end: 101f4ef0f; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4eeb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e438f0;
  func_0x000107c61428(param_1 + _DAT_112e438f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f4ef10; end: 101f4ef57; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint sCSpectaclesReportIssueScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4ef10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e438f8;
  func_0x000107c61428(param_1 + _DAT_112e438f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f4ef58; end: 101f4ef63; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint setSCSpectaclesReportIssueScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4ef58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e438f8;
  func_0x000107c61428(param_1 + _DAT_112e438f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f4ef64; end: 101f4efab; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint spectaclesDeviceConnectionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4ef64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e43900;
  func_0x000107c61428(param_1 + _DAT_112e43900,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f4efac; end: 101f4efb7; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint setSpectaclesDeviceConnectionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4efac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e43900;
  func_0x000107c61428(param_1 + _DAT_112e43900,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f4efb8; end: 101f4f017;  */

void FUN_101f4efb8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101f4f018; end: 101f4f1d3;  */

/* WARNING: Possible PIC construction at 0x000101f4f130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f4f154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f4f164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f4f1a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f4f168) */
/* WARNING: Removing unreachable block (ram,0x000101f4f158) */
/* WARNING: Removing unreachable block (ram,0x000101f4f134) */
/* WARNING: Removing unreachable block (ram,0x000101f4f1ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4f018(void)

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
  func_0x000107c513cc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5b6f4();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_101f4e634();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_101f4e8ac();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4f1d4);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e43818) = lVar5;
      *(long *)(lVar3 + _DAT_112e43820) = unaff_x20;
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



/* Entry: 101f4f1d4; end: 101f4f1fb; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f4f1d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f4f018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f4f1fc; end: 101f4f23f; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f4f1fc(undefined8 param_1)

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



/* Entry: 101f4f240; end: 101f4f443;  */

void FUN_101f4f240(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0fe2200)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f01de00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000039;
        if (((param_2 != -0x2fffffffffffffc7) || (param_3 != -0x7ffffffef0fe21d0)) &&
           (func_0x000107c605b8(0xd000000000000039,0x800000010f01de30,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpectaclesDeviceConnectionScopeGraphBridge/SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x6c,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4f444);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c595d4();
        goto LAB_101f4f2cc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58974();
  }
LAB_101f4f2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f4f444; end: 101f4f4ef; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f4f444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f4f240(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f4f4f0; end: 101f4f567; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4f4f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e438f0,0);
  *(undefined8 *)(param_1 + _DAT_112e438f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e43900) = 0;
  *(undefined8 *)(param_1 + _DAT_112e43908) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f4f568; end: 101f4f59b;  */

void FUN_101f4f568(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f4f59c; end: 101f4f5f3; -[SCSpectaclesDeviceConnectionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f4f5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f4f5cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4f59c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e438f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e438f8));
  return;
}



/* Entry: 101f4f5f4; end: 101f4f613;  */

void FUN_101f4f5f4(void)

{
  func_0x000107c61168(&PTR_PTR_11280aaa0);
  return;
}



/* Entry: 101f4f614; end: 101f4f65b; -[SCSCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4f614(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e43938;
  func_0x000107c61428(param_1 + _DAT_112e43938,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f4f65c; end: 101f4f6b3; -[SCSCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4f65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e43938;
  func_0x000107c61428(param_1 + _DAT_112e43938,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f4f6b4; end: 101f4f78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4f6b4(undefined8 param_1,long param_2)

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
    FUN_101f4e88c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e43850) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f4f78c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e43858);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e43940);
    *(long **)(unaff_x20 + _DAT_112e43940) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f4f78c; end: 101f4f7b3; -[SCSCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint begin] */

void FUN_101f4f78c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f4f6b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f4f7b4; end: 101f4f92b;  */

/* WARNING: Possible PIC construction at 0x000101f4f81c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f4f8b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f4f820) */
/* WARNING: Removing unreachable block (ram,0x000101f4f8b8) */
/* WARNING: Removing unreachable block (ram,0x000101f4f8d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4f7b4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e43940);
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



/* Entry: 101f4f92c; end: 101f4f933;  */

void FUN_101f4f92c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f4f934; end: 101f4f967; -[SCSCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint end] */

void FUN_101f4f934(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f4f7b4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f4f968; end: 101f4fa87;  */

void FUN_101f4f968(long param_1,long param_2,long param_3)

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
                        "SpectaclesDeviceConnectionScopeGraphBridge/SCSCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint.swift"
                        ,0x6c,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4fa88);
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



/* Entry: 101f4fa88; end: 101f4fb33; -[SCSCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f4fa88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f4f968(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f4fb34; end: 101f4fb93; -[SCSCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4fb34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e43938,0);
  *(undefined8 *)(param_1 + _DAT_112e43940) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f4fb94; end: 101f4fbc7;  */

void FUN_101f4fb94(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f4fbc8; end: 101f4fbff; -[SCSCSpectaclesDeviceConnectionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4fbc8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e43938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e43940));
  return;
}



/* Entry: 101f4fc00; end: 101f4fc1f;  */

void FUN_101f4fc00(void)

{
  func_0x000107c61168(&PTR_PTR_11280ab70);
  return;
}



/* Entry: 101f4fc20; end: 101f4fc8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4fc20(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f50014();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e43978) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f4fc8c; end: 101f4fcf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4fc8c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e43978) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f4fcf8; end: 101f4fd57; -[_TtC51SpectaclesDeviceFeatureScopedFactoryServiceProvider39SCSpectaclesDeviceFeatureScopedServices init] */

void FUN_101f4fcf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceFeatureScopedFactoryServiceProvider.SCSpectaclesDeviceFeatureScopedServices"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4fd24);
  (*pcVar1)();
}



/* Entry: 101f4fd58; end: 101f4fd67; -[_TtC51SpectaclesDeviceFeatureScopedFactoryServiceProvider39SCSpectaclesDeviceFeatureScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4fd58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e43978));
  return;
}



/* Entry: 101f4fd68; end: 101f4fdd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4fd68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104a70b0;
  func_0x000107c613fc(&UNK_1104a70b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f500ac,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f4fdd4; end: 101f4fe6f;  */

void FUN_101f4fdd4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104a6fc0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104a6fc0;
  return;
}



/* Entry: 101f4fe70; end: 101f4fea7;  */

void FUN_101f4fe70(long *param_1)

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



/* Entry: 101f4fea8; end: 101f4feaf;  */

undefined8 FUN_101f4fea8(void)

{
  return 0x1b;
}



/* Entry: 101f4feb0; end: 101f4ffe3;  */

void FUN_101f4feb0(undefined8 *param_1)

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
  puVar1 = &UNK_1104a70d8;
  func_0x000107c613fc(&UNK_1104a70d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f50084;
  func_0x00010058fa64(FUN_101f50084,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f4ffe4; end: 101f50013;  */

undefined ** FUN_101f4ffe4(void)

{
  return &PTR_DAT_112fe34f0;
}



/* Entry: 101f50014; end: 101f50033;  */

void FUN_101f50014(void)

{
  func_0x000107c61168(&PTR_PTR_11280ac30);
  return;
}



/* Entry: 101f50034; end: 101f50083;  */

undefined1  [16] FUN_101f50034(void)

{
  return ZEXT816(0x1104a7010);
}



/* Entry: 101f50084; end: 101f500ab;  */

void FUN_101f50084(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f500ac; end: 101f500bf;  */

void FUN_101f500ac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f500c0; end: 101f514b7;  */

void FUN_101f500c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  code *pcVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  code *pcVar41;
  undefined8 uVar42;
  code *pcVar43;
  code *pcVar44;
  undefined8 uVar45;
  code *pcVar46;
  undefined8 uVar47;
  undefined8 auStack_70 [2];
  
  uVar47 = *param_2;
  func_0x0001000285a8(0x112e439f0,&UNK_10da36440);
  puVar1 = auStack_70;
  auStack_70[0] = uVar47;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e439f8,&UNK_10da36590);
  func_0x000107c6157c(puVar1);
  pcVar2 = FUN_101f5150c;
  func_0x0001000823a8(FUN_101f5150c,puVar1);
  func_0x000100082720("SCSpectaclesAudioSettingsEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e43a00,&UNK_10da36450);
  func_0x000107c6157c(pcVar2);
  uVar47 = 0x101f51514;
  func_0x0001000823a8(0x101f51514,pcVar2);
  func_0x000100082720("SCSpectaclesAudioSettingsServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e43a08,&UNK_10da36730);
  func_0x000107c6157c(puVar1);
  uVar3 = 0x101f5151c;
  func_0x0001000823a8(0x101f5151c,puVar1);
  func_0x000100082720("SCSpectaclesBrightnessSettingsEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e43a10,&UNK_10da36460);
  func_0x000107c6157c(uVar3);
  uVar4 = 0x101f51524;
  func_0x0001000823a8(0x101f51524,uVar3);
  func_0x000100082720("SCSpectaclesBrightnessSettingsServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e43a18,&UNK_10da368e0);
  func_0x000107c6157c(puVar1);
  uVar5 = 0x101f5152c;
  func_0x0001000823a8(0x101f5152c,puVar1);
  func_0x000100082720("SCSpectaclesDeveloperModeEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e43a20,&UNK_10da36470);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101f51534;
  func_0x0001000823a8(0x101f51534,uVar5);
  func_0x000100082720("SCSpectaclesDeveloperModeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e43a28,&UNK_10da36a80);
  puVar7 = &UNK_1104a7188;
  func_0x000107c613fc(&UNK_1104a7188,0x28,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined8 *)(puVar7 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar8 = 0x101f5153c;
  func_0x0001000823a8(0x101f5153c,puVar7);
  func_0x000100082720("SCSpectaclesDeviceLocationEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e43a30,&UNK_10da36480);
  func_0x000107c6157c(puVar1);
  uVar9 = 0x101f51548;
  func_0x0001000823a8(0x101f51548,puVar1);
  func_0x000100082720("SCSpectaclesDeviceReportIssueManagerEntryPointWrapperServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e43a38,&UNK_10da36488);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x101f51550;
  func_0x0001000823a8(0x101f51550,uVar9);
  func_0x000100082720("SCSpectaclesDeviceReportIssueServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e43a40,&UNK_10da36490);
  func_0x000107c6157c(puVar1);
  uVar11 = 0x101f51558;
  func_0x0001000823a8(0x101f51558,puVar1);
  func_0x000100082720("SCSpectaclesDeviceSecurityEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e43a48,&UNK_10da36498);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x101f51560;
  func_0x0001000823a8(0x101f51560,uVar11);
  func_0x000100082720("SCSpectaclesDeviceSecurityServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e43a50,&UNK_10da364a0);
  func_0x000107c6157c(puVar1);
  uVar13 = 0x101f51568;
  func_0x0001000823a8(0x101f51568,puVar1);
  func_0x000100082720("SCSpectaclesDeviceSettingsServicesEntryPointWrapperServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e43a58,&UNK_10da372e0);
  func_0x000107c6157c(puVar1);
  uVar14 = 0x101f51570;
  func_0x0001000823a8(0x101f51570,puVar1);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationServicesEntryPointWrapperServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112e43a60,&UNK_10da364b0);
  puVar7 = &UNK_1104a71b0;
  func_0x000107c613fc(&UNK_1104a71b0,0x20,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  uVar15 = 0x101f51578;
  func_0x0001000823a8(0x101f51578,puVar7);
  func_0x000100082720("SCSpectaclesFlightServicesEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e43a68,&UNK_10da37650);
  puVar7 = &UNK_1104a71d8;
  func_0x000107c613fc(&UNK_1104a71d8,0x30,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_6;
  *(undefined8 *)(puVar7 + 0x20) = param_7;
  *(undefined8 *)(puVar7 + 0x28) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar16 = 0x101f51580;
  func_0x0001000823a8(0x101f51580,puVar7);
  func_0x000100082720("SCSpectaclesKioskModeEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e43a70,&UNK_10da364c0);
  func_0x000107c6157c(uVar16);
  uVar17 = 0x101f5158c;
  func_0x0001000823a8(0x101f5158c,uVar16);
  func_0x000100082720("SCSpectaclesKioskModeServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e43a78,&UNK_10da377f0);
  puVar7 = &UNK_1104a7200;
  func_0x000107c613fc(&UNK_1104a7200,0x30,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_9;
  *(undefined8 *)(puVar7 + 0x20) = param_10;
  *(undefined8 *)(puVar7 + 0x28) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  pcVar18 = FUN_101f515d0;
  func_0x0001000823a8(FUN_101f515d0,puVar7);
  func_0x000100082720("SCSpectaclesKnobsServicesEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e43a80,&UNK_10da364d0);
  func_0x000107c6157c(puVar1);
  uVar19 = 0x101f515dc;
  func_0x0001000823a8(0x101f515dc,puVar1);
  func_0x000100082720("SCSpectaclesLensLaunchEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e43a88,&UNK_10da364d8);
  func_0x000107c6157c(uVar19);
  uVar20 = 0x101f515e4;
  func_0x0001000823a8(0x101f515e4,uVar19);
  func_0x000100082720("SCSpectaclesLensLaunchServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112e43a90,&UNK_10da364e0);
  func_0x000107c6157c(puVar1);
  uVar21 = 0x101f515ec;
  func_0x0001000823a8(0x101f515ec,puVar1);
  func_0x000100082720("SCSpectaclesLostModeServicesEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e43a98,&UNK_10da37ca0);
  puVar7 = &UNK_1104a7228;
  func_0x000107c613fc(&UNK_1104a7228,0x48,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined8 *)(puVar7 + 0x20) = param_11;
  *(undefined8 *)(puVar7 + 0x28) = param_12;
  *(undefined8 *)(puVar7 + 0x30) = param_13;
  *(undefined8 *)(puVar7 + 0x38) = param_14;
  *(undefined8 *)(puVar7 + 0x40) = param_15;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  uVar22 = 0x101f515f4;
  func_0x0001000823a8(0x101f515f4,puVar7);
  func_0x000100082720("SCSpectaclesNewSnapNotificationEntryPointWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e43aa0,&UNK_10da364f0);
  puVar7 = &UNK_1104a7250;
  func_0x000107c613fc(&UNK_1104a7250,0x48,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_6;
  *(undefined8 *)(puVar7 + 0x20) = param_16;
  *(undefined8 *)(puVar7 + 0x28) = param_17;
  *(undefined8 *)(puVar7 + 0x30) = param_18;
  *(undefined8 *)(puVar7 + 0x38) = param_19;
  *(undefined8 *)(puVar7 + 0x40) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  pcVar23 = FUN_101f51654;
  func_0x0001000823a8(FUN_101f51654,puVar7);
  func_0x000100082720("SCSpectaclesOTAUpdateServicesEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e43aa8,&UNK_10da38160);
  func_0x000107c6157c(puVar1);
  uVar24 = 0x101f51678;
  func_0x0001000823a8(0x101f51678,puVar1);
  func_0x000100082720("SCSpectaclesPowerStateEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e43ab0,&UNK_10da36500);
  func_0x000107c6157c(uVar24);
  uVar25 = 0x101f51680;
  func_0x0001000823a8(0x101f51680,uVar24);
  func_0x000100082720("SCSpectaclesPowerStateServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112e43ab8,&UNK_10da382e0);
  func_0x000107c6157c(puVar1);
  uVar26 = 0x101f51688;
  func_0x0001000823a8(0x101f51688,puVar1);
  func_0x000100082720("SCSpectaclesSystemSettingsEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e43ac0,&UNK_10da36510);
  func_0x000107c6157c(uVar26);
  uVar27 = 0x101f51690;
  func_0x0001000823a8(0x101f51690,uVar26);
  func_0x000100082720("SCSpectaclesSystemSettingsServiceServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e43ac8,&UNK_10da38480);
  func_0x000107c6157c(puVar1);
  uVar28 = 0x101f51698;
  func_0x0001000823a8(0x101f51698,puVar1);
  func_0x000100082720("SCSpectaclesTomaServicesEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e43ad0,&UNK_10da36520);
  puVar7 = &UNK_1104a7278;
  func_0x000107c613fc(&UNK_1104a7278,0x20,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_12;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_12);
  uVar29 = 0x101f516a0;
  func_0x0001000823a8(0x101f516a0,puVar7);
  func_0x000100082720("SCSpectaclesWiFiSettingsEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e43ad8,&UNK_10da36528);
  func_0x000107c6157c(uVar29);
  uVar30 = 0x101f516a8;
  func_0x0001000823a8(0x101f516a8,uVar29);
  func_0x000100082720("SCSpectaclesWiFiSettingsServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar31 = FUN_101f4fe70;
  func_0x0001000823a8(FUN_101f4fe70,0);
  func_0x000100082720("SCSpectaclesDeviceFeatureScopedServicesCleanupRelayServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e43ae0,&UNK_10da36538);
  func_0x000107c6157c(uVar13);
  uVar32 = 0x101f516b0;
  func_0x0001000823a8(0x101f516b0,uVar13);
  func_0x000100082720("SCSpectaclesDeviceSettingsServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e43ae8,&UNK_10da36540);
  func_0x000107c6157c(uVar14);
  uVar33 = 0x101f516b8;
  func_0x0001000823a8(0x101f516b8,uVar14);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e43af0,&UNK_10da36548);
  func_0x000107c6157c(uVar15);
  uVar34 = 0x101f516c0;
  func_0x0001000823a8(0x101f516c0,uVar15);
  func_0x000100082720("SCSpectaclesFlightServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112e43af8,&UNK_10da36550);
  func_0x000107c6157c(pcVar18);
  uVar35 = 0x101f516c8;
  func_0x0001000823a8(0x101f516c8,pcVar18);
  func_0x000100082720("SCSpectaclesKnobsServicesServiceProvider",0x28,2);
  func_0x0001000285a8(0x112e43b00,&UNK_10da36558);
  func_0x000107c6157c(uVar21);
  uVar36 = 0x101f516d0;
  func_0x0001000823a8(0x101f516d0,uVar21);
  func_0x000100082720("SCSpectaclesLostModeServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112e43b08,&UNK_10da36560);
  func_0x000107c6157c(pcVar23);
  uVar37 = 0x101f516d8;
  func_0x0001000823a8(0x101f516d8,pcVar23);
  func_0x000100082720("SCSpectaclesOTAUpdateServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e43b10,&UNK_10da36568);
  func_0x000107c6157c(uVar28);
  uVar38 = 0x101f516e0;
  func_0x0001000823a8(0x101f516e0,uVar28);
  func_0x000100082720("SCSpectaclesTomaServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112e43b18,&UNK_10da36570);
  puVar7 = &UNK_1104a72a0;
  func_0x000107c613fc(&UNK_1104a72a0,0x40,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_13;
  *(undefined8 *)(puVar7 + 0x20) = param_6;
  *(undefined8 *)(puVar7 + 0x28) = param_9;
  *(undefined8 *)(puVar7 + 0x30) = param_12;
  *(undefined8 *)(puVar7 + 0x38) = uVar34;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(uVar34);
  uVar39 = 0x101f516e8;
  func_0x0001000823a8(0x101f516e8,puVar7);
  func_0x000100082720("SCSpectaclesFlightActivityNotificationEntryPointWrapperServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e43b20,&UNK_10da36578);
  func_0x000107c6157c(uVar39);
  uVar40 = 0x101f516f4;
  func_0x0001000823a8(0x101f516f4,uVar39);
  func_0x000100082720("SCSpectaclesFlightErrorServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e43b28,&UNK_10da36580);
  puVar7 = &UNK_1104a72c8;
  func_0x000107c613fc(&UNK_1104a72c8,0x40,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_13;
  *(undefined8 *)(puVar7 + 0x20) = param_12;
  *(undefined8 *)(puVar7 + 0x28) = uVar37;
  *(undefined8 *)(puVar7 + 0x30) = param_20;
  *(undefined8 *)(puVar7 + 0x38) = param_21;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(uVar37);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  pcVar41 = FUN_101f51748;
  func_0x0001000823a8(FUN_101f51748,puVar7);
  func_0x000100082720("SCSpectaclesOTANotificationEntryPointWrapperServiceProvider",0x3b,2);
  uVar42 = uVar47;
  FUN_101f5bdd4(uVar47,uVar4,uVar6,uVar10,uVar12,uVar32,uVar40,uVar33,uVar34,uVar17,uVar35,uVar20,
                uVar36,uVar37,uVar25,uVar27,uVar38,uVar30);
  func_0x000100082720("SpectaclesDeviceFeatureScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e43b30,&UNK_10da36588);
  puVar7 = &UNK_1104a72f0;
  func_0x000107c613fc(&UNK_1104a72f0,0xd0,7);
  *(code **)(puVar7 + 0x10) = pcVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar5;
  *(undefined8 **)(puVar7 + 0x28) = puVar1;
  *(code **)(puVar7 + 0x30) = pcVar31;
  *(undefined8 *)(puVar7 + 0x38) = uVar8;
  *(undefined8 *)(puVar7 + 0x40) = uVar9;
  *(undefined8 *)(puVar7 + 0x48) = uVar11;
  *(undefined8 *)(puVar7 + 0x50) = uVar13;
  *(undefined8 *)(puVar7 + 0x58) = uVar39;
  *(undefined8 *)(puVar7 + 0x60) = uVar14;
  *(undefined8 *)(puVar7 + 0x68) = uVar15;
  *(undefined8 *)(puVar7 + 0x70) = uVar16;
  *(code **)(puVar7 + 0x78) = pcVar18;
  *(undefined8 *)(puVar7 + 0x80) = uVar19;
  *(undefined8 *)(puVar7 + 0x88) = uVar21;
  *(undefined8 *)(puVar7 + 0x90) = uVar22;
  *(code **)(puVar7 + 0x98) = pcVar41;
  *(code **)(puVar7 + 0xa0) = pcVar23;
  *(undefined8 *)(puVar7 + 0xa8) = uVar24;
  *(undefined8 *)(puVar7 + 0xb0) = uVar26;
  *(undefined8 *)(puVar7 + 0xb8) = uVar28;
  *(undefined8 *)(puVar7 + 0xc0) = uVar29;
  *(undefined8 *)(puVar7 + 200) = uVar42;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(uVar24);
  func_0x000107c6157c(uVar26);
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(pcVar18);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(pcVar23);
  func_0x000107c6157c(uVar28);
  func_0x000107c6157c(uVar39);
  func_0x000107c6157c(pcVar31);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(pcVar41);
  func_0x000107c6157c(uVar42);
  pcVar43 = FUN_101f51768;
  func_0x0001000823a8(FUN_101f51768,puVar7);
  func_0x000100082720("SCSpectaclesDeviceFeatureScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112e43980,&UNK_10da36180);
  func_0x000107c6157c(pcVar43);
  pcVar44 = FUN_101f517bc;
  func_0x0001000823a8(FUN_101f517bc,pcVar43);
  func_0x000100082720("SCSpectaclesDeviceFeatureScopeInitializationServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e43970,&UNK_10da36170);
  func_0x000107c6157c(pcVar44);
  uVar45 = 0x101f517c4;
  func_0x0001000823a8(0x101f517c4,pcVar44);
  func_0x000100082720("SCSpectaclesDeviceFeatureScopedServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_1104a7318;
  func_0x000107c613fc(&UNK_1104a7318,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar45;
  *(code **)(puVar7 + 0x18) = pcVar31;
  func_0x000107c6157c(pcVar31);
  pcVar46 = FUN_101f517f8;
  func_0x0001000823a8(FUN_101f517f8,puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar47);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(uVar25);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(uVar27);
  func_0x000107c61574(uVar28);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar30);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(uVar32);
  func_0x000107c61574(uVar33);
  func_0x000107c61574(uVar34);
  func_0x000107c61574(uVar35);
  func_0x000107c61574(uVar36);
  func_0x000107c61574(uVar37);
  func_0x000107c61574(uVar38);
  func_0x000107c61574(uVar39);
  func_0x000107c61574(uVar40);
  func_0x000107c61574(pcVar41);
  func_0x000107c61574(uVar42);
  func_0x000107c61574(pcVar43);
  func_0x000107c61574(pcVar44);
  func_0x000100082720("SCSpectaclesDeviceFeatureScopeEntryPointProvider",0x30,2);
  *param_1 = pcVar46;
  return;
}



/* Entry: 101f514b8; end: 101f5150b;  */

void FUN_101f514b8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101f500c0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 101f5150c; end: 101f51593;  */

void FUN_101f5150c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f51b84();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101f51a28();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f51594; end: 101f515cf;  */

void FUN_101f51594(void)

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



/* Entry: 101f515d0; end: 101f515ff;  */

void FUN_101f515d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_101f553ac();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101f550e8(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f51600; end: 101f51653;  */

void FUN_101f51600(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f51654; end: 101f516fb;  */

void FUN_101f51654(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_101f57a20();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a9b20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01eab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar3);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar3);
  uVar11 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f01ed40);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar12);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f573cc);
    (*pcVar1)();
  }
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(long *)(lVar2 + 0x50) = lVar13;
  *param_1 = lVar2;
  return;
}



/* Entry: 101f516fc; end: 101f51747;  */

void FUN_101f516fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f51748; end: 101f51767;  */

void FUN_101f51748(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_101f56e74();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a9b18;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01eab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f019f40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f01ed20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = lVar1;
  return;
}



/* Entry: 101f51768; end: 101f517bb;  */

void FUN_101f51768(void)

{
  long unaff_x20;
  
  FUN_101f58b70(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200));
  return;
}



/* Entry: 101f517bc; end: 101f517cb;  */

void FUN_101f517bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112e439d8,&UNK_10da363e0);
  uVar1 = 0;
  func_0x0001002a7ca4();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f517cc; end: 101f517f7;  */

void FUN_101f517cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f517f8; end: 101f517ff;  */

void FUN_101f517f8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104a6fc0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104a6fc0;
  return;
}



/* Entry: 101f51800; end: 101f51867;  */

void FUN_101f51800(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f51b84();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101f51a28();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f51868; end: 101f518af;  */

undefined8 FUN_101f51868(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101f51a28(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101f518b0; end: 101f518e3;  */

void FUN_101f518b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f518e4; end: 101f51937;  */

void FUN_101f518e4(undefined8 *param_1)

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



/* Entry: 101f51938; end: 101f5193f;  */

undefined8 FUN_101f51938(void)

{
  return 0x1b;
}



/* Entry: 101f51940; end: 101f519c3;  */

void FUN_101f51940(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f51bd4,param_2,FUN_101f51bd8,param_2,FUN_101f51c00,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f519c4; end: 101f51a13;  */

undefined8 FUN_101f519c4(void)

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



/* Entry: 101f51a14; end: 101f51a27;  */

void FUN_101f51a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104a7330;
  return;
}



/* Entry: 101f51a28; end: 101f51b67;  */

void FUN_101f51a28(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9aa0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01eab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f01ead0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x20) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f51b68);
  (*pcVar1)();
}


