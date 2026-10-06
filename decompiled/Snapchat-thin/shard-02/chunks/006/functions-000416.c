/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f79354; end: 101f7935b;  */

void FUN_101f79354(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f79480;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesKioskModePageEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f7935c; end: 101f79403;  */

void FUN_101f7935c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104aa9b0;
  func_0x000107c613fc(&UNK_1104aa9b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f79478;
  func_0x0001000823a8(FUN_101f79478,puVar1);
  func_0x000100082720("SCSpectaclesKioskModePageScopedServicesScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f79404; end: 101f7940b;  */

void FUN_101f79404(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104aa9b0;
  func_0x000107c613fc(&UNK_1104aa9b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f79478;
  func_0x0001000823a8(FUN_101f79478,puVar3);
  func_0x000100082720("SCSpectaclesKioskModePageScopedServicesScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f7940c; end: 101f7944b;  */

void FUN_101f7940c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f79a1c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesKioskModePageScopeGraphBridgeScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f7944c; end: 101f79477;  */

void FUN_101f7944c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f79478; end: 101f79487;  */

void FUN_101f79478(undefined8 *param_1)

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
  puVar1 = &UNK_1104aa7b8;
  func_0x000107c613fc(&UNK_1104aa7b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f78468;
  func_0x00010058fa64(FUN_101f78468,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f79488; end: 101f7950f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f79488(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101f79848();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e46f78) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e46f80) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f79510);
  (*pcVar1)();
}



/* Entry: 101f79510; end: 101f7956f; -[_TtC39SpectaclesKioskModePageScopeGraphBridge54SpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f79510(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesKioskModePageScopeGraphBridge.SpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7953c);
  (*pcVar1)();
}



/* Entry: 101f79570; end: 101f795a7; -[_TtC39SpectaclesKioskModePageScopeGraphBridge54SpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f7958c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f79590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f79570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e46f78));
  return;
}



/* Entry: 101f795a8; end: 101f795cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f795a8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e46f80),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e46f78));
  return;
}



/* Entry: 101f795d0; end: 101f795ef;  */

void FUN_101f795d0(void)

{
  func_0x000107c61168(&PTR_PTR_11280e3e0);
  return;
}



/* Entry: 101f795f0; end: 101f79677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f795f0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e46fb0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e46fb8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f79678);
  (*pcVar2)();
}



/* Entry: 101f79678; end: 101f7975f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f79678(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e46fb0);
  *(undefined **)(unaff_x20 + _DAT_112e46fb0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e46fb8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e46fb8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104aaad0;
  func_0x000107c613fc(&UNK_1104aaad0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f79764,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f79760; end: 101f7976b;  */

void FUN_101f79760(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f7976c; end: 101f797cb; -[_TtC39SpectaclesKioskModePageScopeGraphBridge54SCSpectaclesKioskModePageScopedServicesSaberEntryPoint init] */

void FUN_101f7976c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesKioskModePageScopeGraphBridge.SCSpectaclesKioskModePageScopedServicesSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f79798);
  (*pcVar1)();
}



/* Entry: 101f797cc; end: 101f79803; -[_TtC39SpectaclesKioskModePageScopeGraphBridge54SCSpectaclesKioskModePageScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f797cc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e46fb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e46fb0));
  return;
}



/* Entry: 101f79804; end: 101f79807;  */

void FUN_101f79804(void)

{
  return;
}



/* Entry: 101f79808; end: 101f79827;  */

void FUN_101f79808(void)

{
  FUN_101f79678();
  return;
}



/* Entry: 101f79828; end: 101f79847;  */

void FUN_101f79828(void)

{
  func_0x000107c61168(&PTR_PTR_11280e4a8);
  return;
}



/* Entry: 101f79848; end: 101f79917;  */

undefined8 FUN_101f79848(void)

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
  
  func_0x000107c61428(0x112e46fe8,&uStack_40,0x20,0);
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
    FUN_101f79918();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f79918; end: 101f79937;  */

void FUN_101f79918(void)

{
  func_0x000107c61168(&PTR_PTR_11280e570);
  return;
}



/* Entry: 101f79938; end: 101f799a3;  */

void FUN_101f79938(void)

{
  func_0x0001000285a8(0x112e46ff0,&UNK_10da3bdb8);
  func_0x0001000823a8(0x101f79978,0);
  return;
}



/* Entry: 101f799a4; end: 101f799df; -[_TtC39SpectaclesKioskModePageScopeGraphBridge47SpectaclesKioskModePageScopeGraphBridgeServices init] */

void FUN_101f799a4(undefined8 param_1)

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



/* Entry: 101f799e0; end: 101f79a13;  */

void FUN_101f799e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f79a14; end: 101f79a1b;  */

undefined8 FUN_101f79a14(void)

{
  return 0x1b;
}



/* Entry: 101f79a1c; end: 101f79b93;  */

void FUN_101f79a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104aab18;
  func_0x000107c613fc(&UNK_1104aab18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f79b94,puVar1);
  return;
}



/* Entry: 101f79b94; end: 101f79b9b;  */

void FUN_101f79b94(undefined8 *param_1)

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
  func_0x000107c61428(0x112e46fe8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e46fe8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104aabb0;
  func_0x000107c613fc(&UNK_1104aabb0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f79c48;
  func_0x00010058fa64(0x101f79c48,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f79b9c; end: 101f79bf7;  */

void FUN_101f79b9c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e46fe8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e46fe8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f79bf8; end: 101f79c4f;  */

undefined ** FUN_101f79bf8(void)

{
  return &PTR_DAT_113066f88;
}



/* Entry: 101f79c50; end: 101f79c97; -[SCSpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f79c50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47048;
  func_0x000107c61428(param_1 + _DAT_112e47048,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f79c98; end: 101f79cef; -[SCSpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f79c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47048;
  func_0x000107c61428(param_1 + _DAT_112e47048,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f79cf0; end: 101f79d37; -[SCSpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint spectaclesKioskModePageScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f79cf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47050;
  func_0x000107c61428(param_1 + _DAT_112e47050,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f79d38; end: 101f79d9b; -[SCSpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint setSpectaclesKioskModePageScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f79d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47050;
  func_0x000107c61428(param_1 + _DAT_112e47050,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f79d9c; end: 101f79ecf;  */

/* WARNING: Possible PIC construction at 0x000101f79e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f79e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f79e8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f79e58) */
/* WARNING: Removing unreachable block (ram,0x000101f79e74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f79d9c(void)

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
  func_0x000107c5b72c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101f795d0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101f79848();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f79ed0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e46f78) = lVar5;
    *(long *)(lVar4 + _DAT_112e46f80) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101f79ed0; end: 101f79ef7; -[SCSpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f79ed0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f79d9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f79ef8; end: 101f79f3b; -[SCSpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f79ef8(undefined8 param_1)

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



/* Entry: 101f79f3c; end: 101f7a0d3;  */

void FUN_101f79f3c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffca) || (param_3 != -0x7ffffffef0fdc7a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000036,0x800000010f023860,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesKioskModePageScopeGraphBridge/SCSpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x66,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7a0d4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595fc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f7a0d4; end: 101f7a17f; -[SCSpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f7a0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f79f3c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f7a180; end: 101f7a1eb; -[SCSpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7a180(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e47048,0);
  *(undefined8 *)(param_1 + _DAT_112e47050) = 0;
  *(undefined8 *)(param_1 + _DAT_112e47058) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f7a1ec; end: 101f7a21f;  */

void FUN_101f7a1ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f7a220; end: 101f7a267; -[SCSpectaclesKioskModePageScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f7a24c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f7a250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7a220(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e47048);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47050));
  return;
}



/* Entry: 101f7a268; end: 101f7a287;  */

void FUN_101f7a268(void)

{
  func_0x000107c61168(&PTR_PTR_11280e620);
  return;
}



/* Entry: 101f7a288; end: 101f7a2cf; -[SCSCSpectaclesKioskModePageScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7a288(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47088;
  func_0x000107c61428(param_1 + _DAT_112e47088,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f7a2d0; end: 101f7a327; -[SCSCSpectaclesKioskModePageScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7a2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47088;
  func_0x000107c61428(param_1 + _DAT_112e47088,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f7a328; end: 101f7a3ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7a328(undefined8 param_1,long param_2)

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
    FUN_101f79828();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e46fb0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f7a400);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e46fb8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e47090);
    *(long **)(unaff_x20 + _DAT_112e47090) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f7a400; end: 101f7a427; -[SCSCSpectaclesKioskModePageScopedServicesSaberEntryPoint begin] */

void FUN_101f7a400(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f7a328();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f7a428; end: 101f7a59f;  */

/* WARNING: Possible PIC construction at 0x000101f7a490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7a528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f7a494) */
/* WARNING: Removing unreachable block (ram,0x000101f7a52c) */
/* WARNING: Removing unreachable block (ram,0x000101f7a544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7a428(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e47090);
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



/* Entry: 101f7a5a0; end: 101f7a5a7;  */

void FUN_101f7a5a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f7a5a8; end: 101f7a5db; -[SCSCSpectaclesKioskModePageScopedServicesSaberEntryPoint end] */

void FUN_101f7a5a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f7a428();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f7a5dc; end: 101f7a6fb;  */

void FUN_101f7a5dc(long param_1,long param_2,long param_3)

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
                        "SpectaclesKioskModePageScopeGraphBridge/SCSCSpectaclesKioskModePageScopedServicesSaberEntryPoint.swift"
                        ,0x66,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7a6fc);
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



/* Entry: 101f7a6fc; end: 101f7a7a7; -[SCSCSpectaclesKioskModePageScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f7a6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f7a5dc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f7a7a8; end: 101f7a807; -[SCSCSpectaclesKioskModePageScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7a7a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e47088,0);
  *(undefined8 *)(param_1 + _DAT_112e47090) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f7a808; end: 101f7a83b;  */

void FUN_101f7a808(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f7a83c; end: 101f7a873; -[SCSCSpectaclesKioskModePageScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7a83c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e47088);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47090));
  return;
}



/* Entry: 101f7a874; end: 101f7a893;  */

void FUN_101f7a874(void)

{
  func_0x000107c61168(&PTR_PTR_11280e6e8);
  return;
}



/* Entry: 101f7a894; end: 101f7aa4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f7a894(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lStack_50;
  long lStack_48;
  
  lVar2 = _DAT_112e47118;
  plVar5 = &lStack_50;
  puVar6 = *(undefined1 **)(unaff_x20 + _DAT_112e47118);
  puVar8 = puVar6;
  if (puVar6 == (undefined1 *)0x1) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e470e8);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e470f8);
    lVar3 = 0;
    FUN_101f81f28();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112e47250) = uVar7;
    *(undefined8 *)(lVar4 + _DAT_112e47258) = uVar9;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c615f0(uVar7);
    func_0x000107c615f0(uVar9);
    func_0x000107c61154(&lStack_50,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long **)(unaff_x20 + lVar2) = plVar5;
    func_0x000107c61174();
    func_0x000100cd8820(uVar7);
    puVar8 = (undefined1 *)plVar5;
  }
  func_0x000100cd8830(puVar6);
  return puVar8;
}



/* Entry: 101f7aa4c; end: 101f7aee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f7aa4c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  
  lVar11 = *(long *)(unaff_x20 + _DAT_112e470e8);
  lVar10 = lVar11;
  func_0x000107c40220();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c40208();
    func_0x000107c615e8(lVar10);
  }
  lVar10 = _DAT_112e47130;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e47130);
  func_0x000107c40204();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(lVar2);
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e47100);
  func_0x000107c49c60(uVar13,param_2,lVar11);
  func_0x000107c49c68(uVar13,param_2,lVar11);
  func_0x000107c4a670(lVar11);
  lVar2 = lVar11;
  func_0x000107c498b0(lVar11);
  func_0x000107c61180();
  func_0x000107c5a888();
  func_0x000107c615e8(lVar2);
  lVar2 = lVar11;
  func_0x000107c498b0();
  func_0x000107c61180();
  func_0x000107c49b9c();
  func_0x000107c615e8(lVar2);
  puVar3 = PTR_PTR_1126a9b70;
  func_0x000107c610f8(PTR_PTR_1126a9b70);
  func_0x000107c46f2c();
  lVar2 = lVar11;
  func_0x000107c498b0(lVar11);
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c3e70c();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c52c28(puVar3,param_2,lVar4);
  func_0x000107c61170(lVar4);
  uVar12 = *(ulong *)(unaff_x20 + _DAT_112e470f0);
  if (uVar12 != 0) {
    uVar7 = uVar12;
    func_0x000107c4ec1c();
    func_0x000107c61180();
    uVar5 = uVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    if (uVar5 != 0) {
      uVar7 = uVar5;
      func_0x000107c40fb8();
      func_0x000107c61180();
      func_0x000107c615e8(uVar5);
      uVar5 = uVar7;
      func_0x000107c4f714();
      func_0x000107c61170(uVar7);
      if (uVar5 >> 0x1f != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7aec0);
        (*pcVar1)();
      }
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x000107c57640(puVar3,param_2,puVar6);
      func_0x000107c61170(puVar6);
    }
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e47138);
  func_0x000107c61174(uVar13);
  lVar2 = lVar11;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c42120();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7aec4);
    (*pcVar1)();
  }
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112e47128);
  func_0x000107c5bd00();
  if (uVar7 >> 0x1f != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7aebc);
    (*pcVar1)();
  }
  lVar2 = lVar11;
  func_0x00010604e6dc();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(lVar4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7aed0);
    (*pcVar1)();
  }
  lVar8 = lVar11;
  func_0x00010604e5c8();
  func_0x000107c61180();
  if (lVar8 == 0) {
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7aee4);
    (*pcVar1)();
  }
  puVar6 = PTR_PTR_1126a9b78;
  func_0x000107c610f8(PTR_PTR_1126a9b78);
  func_0x000107c61174(puVar3);
  func_0x000107c489b8(puVar6,param_2,puVar3,uVar13,lVar4,uVar7,lVar2,lVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar8);
  puVar9 = puVar6;
  func_0x000107c5a858(puVar6);
  func_0x000107c61180();
  func_0x000107c498b0(lVar11);
  func_0x000107c61180();
  lVar2 = lVar11;
  func_0x000107c426cc();
  func_0x000107c615e8(lVar11);
  func_0x000107c558b8(puVar9,param_2,lVar2);
  func_0x000107c61170(puVar9);
  puVar9 = puVar6;
  func_0x000107c5a858(puVar6);
  func_0x000107c61180();
  if (uVar12 != 0) {
    func_0x000107c3e4e0();
    func_0x000107c61180();
    uVar7 = uVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    if (uVar7 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar7;
      func_0x000107c4a380(uVar7);
      func_0x000107c615e8(uVar7);
    }
  }
  func_0x000107c557fc(puVar9,param_2,uVar12);
  func_0x000107c61170(puVar9);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  func_0x000107c40204();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar11 = lVar10;
    func_0x000107c49968();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    if (lVar11 != 0) goto LAB_101f7ae78;
  }
  lVar11 = 0;
LAB_101f7ae78:
  func_0x000107c55524(puVar6,param_2,lVar11);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar11);
  return puVar6;
}



/* Entry: 101f7aee4; end: 101f7afaf;  */

void FUN_101f7aee4(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "publishState()";
  func_0x0001000c10c0("publishState()");
  func_0x000107c61180();
  puVar2 = &UNK_1104aad18;
  func_0x000107c613fc(&UNK_1104aad18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x101f81490;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104ab9b0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101f7afb0; end: 101f7c2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7afb0(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined8 uVar26;
  long lVar27;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar10 = &puStack_90;
  ppuVar11 = &puStack_90;
  ppuVar12 = &puStack_90;
  ppuVar13 = &puStack_90;
  ppuVar14 = &puStack_90;
  ppuVar15 = &puStack_90;
  ppuVar16 = &puStack_90;
  ppuVar17 = &puStack_90;
  ppuVar18 = &puStack_90;
  ppuVar19 = &puStack_90;
  ppuVar20 = &puStack_90;
  ppuVar21 = &puStack_90;
  ppuVar22 = &puStack_90;
  ppuVar23 = &puStack_90;
  ppuVar24 = &puStack_90;
  ppuVar25 = &puStack_90;
  uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112e470f8);
  func_0x000107c3d740(uVar26);
  func_0x000107c3d740(*(undefined8 *)(unaff_x20 + _DAT_112e47100));
  func_0x000107c50450(uVar26);
  func_0x000107c5034c(uVar26);
  lVar27 = *(long *)(unaff_x20 + _DAT_112e470f0);
  if (lVar27 != 0) {
    lVar3 = lVar27;
    func_0x000107c4ec1c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c40fbc(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f81070;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f81420;
      puStack_78 = &UNK_1104ab230;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c5e310();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5e314(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = FUN_101f81068;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f8141c;
      puStack_78 = &UNK_1104ab208;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c5e310();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c43848(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f8104c;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101d08874;
      puStack_78 = &UNK_1104ab1e0;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c5e310();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c401e8(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = FUN_101f81030;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101d08874;
      puStack_78 = &UNK_1104ab1b8;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c4e0dc();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5bcd4(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f81028;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f81424;
      puStack_78 = &UNK_1104ab190;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c4f82c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5a85c(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f81020;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f81428;
      puStack_78 = &UNK_1104ab168;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c4f82c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5d604(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f81018;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f8142c;
      puStack_78 = &UNK_1104ab140;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c4b8f8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5a85c(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f81010;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f81428;
      puStack_78 = &UNK_1104ab118;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c4b8f8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5d604(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f81008;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f8142c;
      puStack_78 = &UNK_1104ab0f0;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c4c108();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5a85c(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f81000;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f81428;
      puStack_78 = &UNK_1104ab0c8;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c4c108();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5d604(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f80ff8;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f8142c;
      puStack_78 = &UNK_1104ab0a0;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar16);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c418a0();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5a85c(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f80ff0;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f81428;
      puStack_78 = &UNK_1104ab078;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar17);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c418a0();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5d604(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f80fe8;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f8142c;
      puStack_78 = &UNK_1104ab050;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar18);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c418a8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c42d4c(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f80fe0;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f8142c;
      puStack_78 = &UNK_1104ab028;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar19);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c418a8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c3fa84(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f80fd8;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f8142c;
      puStack_78 = &UNK_1104ab000;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar20);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c4191c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c3e71c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f7c2d0);
        (*pcVar2)();
      }
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f80fd0;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f81428;
      puStack_78 = &UNK_1104aafd8;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar21);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c4191c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c4dad4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f7c2d4);
        (*pcVar2)();
      }
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f80fc8;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f81428;
      puStack_78 = &UNK_1104aafb0;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar22);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c3e3fc();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c4d308(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f80fc0;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f81428;
      puStack_78 = &UNK_1104aaf88;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar23);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = lVar27;
    func_0x000107c3ec88();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c3e4b0(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f80fb8;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = (undefined *)0x101f81430;
      puStack_78 = &UNK_1104aaf60;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar24);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c4a92c();
    func_0x000107c61180();
    lVar3 = lVar27;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar27);
    if (lVar3 != 0) {
      lVar27 = lVar3;
      func_0x000107c426e0(lVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      puVar5 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x101f80fb0;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100b5fdac;
      puStack_78 = &UNK_1104aaf38;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar3 = lVar27;
      func_0x000107c5c320(lVar27);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar25);
      func_0x000107c61170(lVar27);
      func_0x000107c3e924(lVar3);
      func_0x000107c61170(lVar3);
    }
  }
  FUN_101f7e840();
  return;
}



/* Entry: 101f7c2d4; end: 101f7c7ff;  */

/* WARNING: Possible PIC construction at 0x000101f7c330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7c370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7c57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7c5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7c638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7c678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7c700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7c744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7c788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f7c580) */
/* WARNING: Removing unreachable block (ram,0x000101f7c5b0) */
/* WARNING: Removing unreachable block (ram,0x000101f7c5cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7c2d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e470f0);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c5e310();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5044c(lVar2);
      goto code_r0x000107c615e8;
    }
    func_0x000107c436c0();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      func_0x000107c42fa4(lVar2);
      goto code_r0x000107c615e8;
    }
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112e470f0);
  if (lVar3 == 0) {
    if (*(char *)(unaff_x20 + _DAT_112e47148) == '\x01') {
      *(undefined1 *)(unaff_x20 + _DAT_112e47148) = 0;
    }
    return;
  }
  lVar1 = lVar3;
  func_0x000107c4ec1c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    if ((*(byte *)(unaff_x20 + _DAT_112e47148) & 1) == 0) {
      return;
    }
    *(undefined1 *)(unaff_x20 + _DAT_112e47148) = 0;
    lVar1 = lVar3;
    func_0x000107c3ec88();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      lVar1 = lVar3;
      func_0x000107c3e3fc();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 == 0) {
        lVar1 = lVar3;
        func_0x000107c4b8f8();
        func_0x000107c61180();
        lVar2 = lVar1;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        if (lVar2 == 0) {
          lVar1 = lVar3;
          func_0x000107c4c108();
          func_0x000107c61180();
          lVar2 = lVar1;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar1);
          if (lVar2 == 0) {
            lVar1 = lVar3;
            func_0x000107c4f82c();
            func_0x000107c61180();
            lVar2 = lVar1;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(lVar1);
            if (lVar2 == 0) {
              lVar1 = lVar3;
              func_0x000107c418a0();
              func_0x000107c61180();
              lVar2 = lVar1;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar1);
              if (lVar2 == 0) {
                func_0x000107c4191c();
                func_0x000107c61180();
                lVar2 = lVar3;
                func_0x000107c5c734();
                func_0x000107c61180();
                func_0x000107c61170(lVar3);
                if (lVar2 == 0) {
                  return;
                }
                func_0x000107c50390(lVar2);
              }
              else {
                func_0x000107c503f8(lVar2,param_2,0);
              }
            }
            else {
              func_0x000107c503f8(lVar2,param_2,0);
            }
          }
          else {
            func_0x000107c503f8(lVar2,param_2,0);
          }
        }
        else {
          func_0x000107c503f8(lVar2,param_2,0);
        }
      }
      else {
        func_0x000107c50424(lVar2);
      }
    }
    else {
      func_0x000107c50338(lVar2);
    }
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101f7c800; end: 101f7cb8b;  */

void FUN_101f7c800(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104ab290;
  func_0x000107c613fc(&UNK_1104ab290,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101f81078;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_101f81080;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101f81494;
  puStack_58 = &UNK_1104ab2a8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0xea,0x21,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7c910);
  (*pcVar1)();
}



/* Entry: 101f7cb8c; end: 101f7ccd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7cb8c(undefined8 param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar4 = &puStack_90;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112e47128);
    *(undefined8 *)(lVar1 + _DAT_112e47128) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcVar2 = "publishState()";
    func_0x0001000c10c0("publishState()");
    func_0x000107c61180();
    puVar3 = &UNK_1104aad18;
    func_0x000107c613fc(&UNK_1104aad18,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_2);
    uStack_70 = 0x101f81460;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104ab2f8;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 101f7ccd8; end: 101f7cde7;  */

void FUN_101f7ccd8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104ab330;
  func_0x000107c613fc(&UNK_1104ab330,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101f810a0;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_50 = 0x101f813dc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1011af888;
  puStack_58 = &UNK_1104ab348;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0x106,0x21,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7cde8);
  (*pcVar1)();
}



/* Entry: 101f7cde8; end: 101f7cf33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7cde8(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112e47138);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar4);
      func_0x000107c3ebcc(param_1);
      func_0x000107c557d0(uVar4);
      func_0x000107c61170(uVar4);
      pcVar1 = "publishState()";
      func_0x0001000c10c0("publishState()");
      func_0x000107c61180();
      puVar2 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_2);
      uStack_58 = 0x101f81464;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1104ab370;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 101f7cf34; end: 101f7d153;  */

void FUN_101f7cf34(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104ab3a8;
  func_0x000107c613fc(&UNK_1104ab3a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101f8143c;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_50 = 0x101f813e0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100e27b38;
  puStack_58 = &UNK_1104ab3c0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0x110,0x26,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7d044);
  (*pcVar1)();
}



/* Entry: 101f7d154; end: 101f7d29f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7d154(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112e47138);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar4);
      func_0x000107c3ebcc(param_1);
      func_0x000107c55708(uVar4);
      func_0x000107c61170(uVar4);
      pcVar1 = "publishState()";
      func_0x0001000c10c0("publishState()");
      func_0x000107c61180();
      puVar2 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_2);
      uStack_58 = 0x101f81468;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1104ab438;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 101f7d2a0; end: 101f7d4bf;  */

void FUN_101f7d2a0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104ab470;
  func_0x000107c613fc(&UNK_1104ab470,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101f81434;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_50 = 0x101f813e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100e27b38;
  puStack_58 = &UNK_1104ab488;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0x121,0x26,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7d3b0);
  (*pcVar1)();
}



/* Entry: 101f7d4c0; end: 101f7d60b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7d4c0(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112e47138);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar4);
      func_0x000107c3ebcc(param_1);
      func_0x000107c55714(uVar4);
      func_0x000107c61170(uVar4);
      pcVar1 = "publishState()";
      func_0x0001000c10c0("publishState()");
      func_0x000107c61180();
      puVar2 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_2);
      uStack_58 = 0x101f8146c;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1104ab500;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 101f7d60c; end: 101f7d82b;  */

void FUN_101f7d60c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104ab538;
  func_0x000107c613fc(&UNK_1104ab538,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101f81438;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_50 = 0x101f813f0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100e27b38;
  puStack_58 = &UNK_1104ab550;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0x132,0x26,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7d71c);
  (*pcVar1)();
}



/* Entry: 101f7d82c; end: 101f7d977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7d82c(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112e47138);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar4);
      func_0x000107c3ebcc(param_1);
      func_0x000107c55600(uVar4);
      func_0x000107c61170(uVar4);
      pcVar1 = "publishState()";
      func_0x0001000c10c0("publishState()");
      func_0x000107c61180();
      puVar2 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_2);
      uStack_58 = 0x101f81470;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1104ab5c8;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 101f7d978; end: 101f7da87;  */

void FUN_101f7d978(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104ab600;
  func_0x000107c613fc(&UNK_1104ab600,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101f810c0;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_50 = 0x101f813f8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100e27b38;
  puStack_58 = &UNK_1104ab618;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0x143,0x26,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7da88);
  (*pcVar1)();
}



/* Entry: 101f7da88; end: 101f7daef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7da88(undefined8 param_1,long param_2)

{
  undefined4 uStack_3c;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_3c = 0;
    func_0x0001002a64a8(&uStack_3c);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101f7daf0; end: 101f7dcc7;  */

void FUN_101f7daf0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = &UNK_1104ab650;
  func_0x000107c613fc(&UNK_1104ab650,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101f810d8;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x101f813fc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1019d0744;
  puStack_78 = &UNK_1104ab668;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1104ab6a0;
  func_0x000107c613fc(&UNK_1104ab6a0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101f810e0;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  uStack_70 = 0x101f81400;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_100e27b38;
  puStack_78 = &UNK_1104ab6b8;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0x149,0x21,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7dcc4);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x72,0x14b,0x18,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7dcc8);
  (*pcVar1)();
}



/* Entry: 101f7dcc8; end: 101f7dd57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7dcc8(undefined8 param_1,long param_2)

{
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c43844(*(undefined8 *)(param_2 + _DAT_112e470f8));
    uStack_48 = 1;
    uStack_40 = 1;
    func_0x0001002a64a8(&uStack_48);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101f7dd58; end: 101f7de67;  */

void FUN_101f7dd58(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104ab6f0;
  func_0x000107c613fc(&UNK_1104ab6f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101f810fc;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_50 = 0x101f81404;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100e27b38;
  puStack_58 = &UNK_1104ab708;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0x151,0x26,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7de68);
  (*pcVar1)();
}



/* Entry: 101f7de68; end: 101f7deeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7de68(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uStack_4c;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112e470d0);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_4c = param_3;
    func_0x0001002a64a8(&uStack_4c);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101f7deec; end: 101f7dffb;  */

void FUN_101f7deec(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104ab740;
  func_0x000107c613fc(&UNK_1104ab740,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101f81118;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_50 = 0x101f81408;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1011af888;
  puStack_58 = &UNK_1104ab758;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0x157,0x21,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7dffc);
  (*pcVar1)();
}



/* Entry: 101f7dffc; end: 101f7e147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7dffc(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112e47138);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar4);
      func_0x000107c3ebcc(param_1);
      func_0x000107c55574(uVar4);
      func_0x000107c61170(uVar4);
      pcVar1 = "publishState()";
      func_0x0001000c10c0("publishState()");
      func_0x000107c61180();
      puVar2 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_2);
      uStack_58 = 0x101f81474;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1104ab780;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 101f7e148; end: 101f7e263;  */

void FUN_101f7e148(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_1104ab7b8;
    func_0x000107c613fc(&UNK_1104ab7b8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_2;
    puVar2 = &UNK_1104ab7e0;
    func_0x000107c613fc(&UNK_1104ab7e0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x101f81120;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    uStack_68 = 0x101f8140c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1011af888;
    puStack_70 = &UNK_1104ab7f8;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101f7e264; end: 101f7e37b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7e264(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_60;
    uVar4 = *(undefined8 *)(param_2 + _DAT_112e47138);
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    func_0x000107c3ebcc(param_1);
    func_0x000107c55758(uVar4);
    func_0x000107c61170(uVar4);
    pcVar1 = "publishState()";
    func_0x0001000c10c0("publishState()");
    func_0x000107c61180();
    puVar2 = &UNK_1104aad18;
    func_0x000107c613fc(&UNK_1104aad18,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    uStack_40 = 0x101f81478;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1104ab820;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 101f7e37c; end: 101f7e48b;  */

void FUN_101f7e37c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104ab858;
  func_0x000107c613fc(&UNK_1104ab858,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101f81128;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_50 = 0x101f81410;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1011af888;
  puStack_58 = &UNK_1104ab870;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0x170,0x21,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7e48c);
  (*pcVar1)();
}



/* Entry: 101f7e48c; end: 101f7e83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7e48c(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112e47138);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar4);
      func_0x000107c3ebcc(param_1);
      func_0x000107c55748(uVar4);
      func_0x000107c61170(uVar4);
      pcVar1 = "publishState()";
      func_0x0001000c10c0("publishState()");
      func_0x000107c61180();
      puVar2 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_2);
      uStack_58 = 0x101f8147c;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1104ab898;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 101f7e840; end: 101f7eabf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7e840(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  ppuVar10 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e470f0);
  if (lVar2 != 0) {
    func_0x000107c436c0();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c436cc(lVar3);
      func_0x000107c61180();
      pcVar8 = "setupFlightManager()";
      pcVar4 = pcVar8;
      func_0x0001000c10c0("setupFlightManager()");
      func_0x000107c61180();
      lVar5 = lVar2;
      func_0x000107c4da88(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(pcVar4);
      puVar9 = &UNK_1104aad18;
      puVar6 = puVar9;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x101f81130;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_10104e6fc;
      puStack_78 = &UNK_1104ab910;
      puStack_68 = puVar6;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar2 = lVar5;
      func_0x000107c5c320(lVar5);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar5);
      func_0x000107c3e924(lVar2);
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
      func_0x000107c436d0(lVar3);
      func_0x000107c61180();
      func_0x0001000c10c0("setupFlightManager()");
      func_0x000107c61180();
      lVar5 = lVar2;
      func_0x000107c4da88(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(pcVar8);
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      uStack_70 = 0x101f81138;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100b5fdac;
      puStack_78 = &UNK_1104ab938;
      puStack_68 = puVar9;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar2 = lVar5;
      func_0x000107c5c320(lVar5);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(lVar5);
      func_0x000107c3e924(lVar2);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 101f7eac0; end: 101f7eedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7eac0(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_112e47138);
    FUN_101f81140(0,0x112e47190,&PTR_PTR_1126a9b60);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(param_1);
    func_0x000101f7ec24();
    func_0x000107c54a7c(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
    pcVar1 = "publishState()";
    func_0x0001000c10c0("publishState()");
    func_0x000107c61180();
    puVar2 = &UNK_1104aad18;
    func_0x000107c613fc(&UNK_1104aad18,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    uStack_58 = 0x101f8148c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104ab988;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 101f7eee0; end: 101f7f027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7eee0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e470f8);
  puVar4 = &UNK_1104aad18;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_1104aad18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x101f80f8c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104aae20;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c613fc(&UNK_1104aad18,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uStack_70 = 0x101f80f94;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104aae48;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c4c274(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101f7f028; end: 101f7f123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f028(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112e470e0);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_1);
    uStack_48 = 1;
    uStack_40 = 1;
    func_0x0001002a64a8(&uStack_48);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101f7f124; end: 101f7f2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f124(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puStack_90 = (undefined *)CONCAT44(puStack_90._4_4_,1);
  func_0x000100087c34(&puStack_90);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e470f8);
  puVar4 = &UNK_1104aad18;
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_1104aad18,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1104aae80;
  func_0x000107c613fc(&UNK_1104aae80,0x19,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x101f80f9c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104aae98;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c613fc(&UNK_1104aad18,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uStack_70 = 0x101f80fa8;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104aaec0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c3fa68(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101f7f2a8; end: 101f7f3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f2a8(long param_1,ulong param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112e470d8);
    uStack_78 = (undefined *)((ulong)uStack_78._4_4_ << 0x20);
    func_0x000107c6157c(uVar4);
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar4);
    pcVar1 = "publishState()";
    func_0x0001000c10c0("publishState()");
    func_0x000107c61180();
    puVar2 = &UNK_1104aad18;
    func_0x000107c613fc(&UNK_1104aad18,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    uStack_58 = 0x101f81450;
    uStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104aaee8;
    puVar3 = &uStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(puVar3);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(puVar3);
    func_0x000107c615e8(pcVar1);
    if ((param_2 & 1) != 0) {
      FUN_101f7eee0();
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101f7f3dc; end: 101f7f47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f3dc(long param_1)

{
  undefined8 uVar1;
  undefined4 uStack_3c;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112e470d8);
    uStack_3c = 0;
    func_0x000107c6157c(uVar1);
    func_0x000100087c34(&uStack_3c);
    func_0x000107c61574(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112e470d0);
    uStack_3c = 1;
    func_0x000107c6157c(uVar1);
    func_0x0001002a64a8(&uStack_3c);
    func_0x000107c61574(uVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101f7f480; end: 101f7f4df; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator init] */

void FUN_101f7f480(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesDeviceSettingsComposerImpl.DeviceSettingsCoordinator",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7f4ac);
  (*pcVar1)();
}



/* Entry: 101f7f4e0; end: 101f7f5f7; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f7f4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7f58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f7f5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f7f590) */
/* WARNING: Removing unreachable block (ram,0x000101f7f500) */
/* WARNING: Removing unreachable block (ram,0x000101f7f5d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f4e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e470c0));
  return;
}



/* Entry: 101f7f5f8; end: 101f7f65b; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator statusCoordinator:needsToUpdateStateForDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f5f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != *(long *)(param_1 + _DAT_112e470e8)) {
    return;
  }
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_101f7aee4();
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f7f65c; end: 101f7f723; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator spectaclesDevice:didUpdateInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f65c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_112e470e8)) {
    return;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101f7aee4();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f7f724; end: 101f7f72f; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator pushToValdiMarshaller:] */

void FUN_101f7f724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a875dc(param_3,param_1);
  func_0x000105a875c0();
  func_0x000105a875b8();
  func_0x000105a8752c();
  func_0x000105a8756c();
  return;
}



/* Entry: 101f7f730; end: 101f7f763; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator nameManager] */

void FUN_101f7f730(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f7a894();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f7f764; end: 101f7f797; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator developerModeManager] */

void FUN_101f7f764(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101f7a968();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f7f798; end: 101f7f7a7; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator securityManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e47108));
  return;
}



/* Entry: 101f7f7a8; end: 101f7f7cf; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator deviceObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f7a8(long param_1)

{
  func_0x000107c5cb24(*(undefined8 *)(param_1 + _DAT_112e470c8));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f7f7d0; end: 101f7f7e3; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator alertsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f7d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x101f81418;
  uVar1 = 0;
  FUN_101f81140(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x0001000bfde0(0x101f81418,0,uVar1);
  uVar1 = uVar2;
  func_0x0001004575f0();
  func_0x000107c61574(uVar2);
  uVar2 = uVar1;
  func_0x000107c5cb24(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101f7f7e4; end: 101f7f7f7; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator pageStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7f7e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x101f81414;
  uVar1 = 0;
  FUN_101f81140(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x0001000bfde0(0x101f81414,0,uVar1);
  uVar1 = uVar2;
  func_0x0001004575f0();
  func_0x000107c61574(uVar2);
  uVar2 = uVar1;
  func_0x000107c5cb24(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


