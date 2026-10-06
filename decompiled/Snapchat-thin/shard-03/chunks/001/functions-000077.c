/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10248b118; end: 10248b163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248b118(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9db10) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10248b164; end: 10248b27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10248b164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_78 [2];
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar3 = 0;
  func_0x00010033691c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112e9da60) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112e9da68) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e9da70);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e9da78);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  plVar5 = &lStack_60;
  func_0x000107c61154(plVar5,puVar2);
  aplStack_78[0] = plVar5;
  func_0x00010008a7c8(&uStack_68,aplStack_78);
  func_0x000100083b20(aplStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(aplStack_78[0]);
  return plVar5;
}



/* Entry: 10248b27c; end: 10248b367; -[_TtC29SendToSpotlightEducationScope39SCSendToSpotlightEducationScopeServices buildWithEducationType:uiContainer:completion:cancelCompletion:] */

void FUN_10248b27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_110510130;
  func_0x000107c613fc(&UNK_110510130,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_110510158;
  func_0x000107c613fc(&UNK_110510158,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_10248b164(param_3,param_4,0x10248b3f8,puVar1,0x10248b40c,puVar2);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10248b368; end: 10248b3c7; -[_TtC29SendToSpotlightEducationScope39SCSendToSpotlightEducationScopeServices init] */

void FUN_10248b368(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToSpotlightEducationScope.SCSendToSpotlightEducationScopeServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10248b394);
  (*pcVar1)();
}



/* Entry: 10248b3c8; end: 10248b417; -[_TtC29SendToSpotlightEducationScope39SCSendToSpotlightEducationScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248b3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9db10));
  return;
}



/* Entry: 10248b418; end: 10248b483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248b418(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10248b80c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9db60) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10248b484; end: 10248b4ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248b484(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9db60) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10248b4f0; end: 10248b54f; -[_TtC58UnifiedPublicProfilesPresenterScopedFactoryServiceProvider46SCUnifiedPublicProfilesPresenterScopedServices init] */

void FUN_10248b4f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnifiedPublicProfilesPresenterScopedFactoryServiceProvider.SCUnifiedPublicProfilesPresenterScopedServices"
                      ,0x69,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10248b51c);
  (*pcVar1)();
}



/* Entry: 10248b550; end: 10248b55f; -[_TtC58UnifiedPublicProfilesPresenterScopedFactoryServiceProvider46SCUnifiedPublicProfilesPresenterScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248b550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9db60));
  return;
}



/* Entry: 10248b560; end: 10248b5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248b560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110510340;
  func_0x000107c613fc(&UNK_110510340,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10248b8a4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10248b5cc; end: 10248b667;  */

void FUN_10248b5cc(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110510250;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110510250;
  return;
}



/* Entry: 10248b668; end: 10248b69f;  */

void FUN_10248b668(long *param_1)

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



/* Entry: 10248b6a0; end: 10248b6a7;  */

undefined8 FUN_10248b6a0(void)

{
  return 0x1b;
}



/* Entry: 10248b6a8; end: 10248b7db;  */

void FUN_10248b6a8(undefined8 *param_1)

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
  puVar1 = &UNK_110510368;
  func_0x000107c613fc(&UNK_110510368,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10248b87c;
  func_0x00010058fa64(FUN_10248b87c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10248b7dc; end: 10248b80b;  */

undefined ** FUN_10248b7dc(void)

{
  return &PTR_DAT_113067060;
}



/* Entry: 10248b80c; end: 10248b82b;  */

void FUN_10248b80c(void)

{
  func_0x000107c61168(&PTR_PTR_1128453c0);
  return;
}



/* Entry: 10248b82c; end: 10248b87b;  */

undefined1  [16] FUN_10248b82c(void)

{
  return ZEXT816(0x1105102a0);
}



/* Entry: 10248b87c; end: 10248b8a3;  */

void FUN_10248b87c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10248b8a4; end: 10248b8a7;  */

void FUN_10248b8a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10248b8a8; end: 10248b913;  */

void FUN_10248b8a8(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e9dbd0,&UNK_10daad240);
  func_0x000107c613fc();
  pcVar1 = FUN_10248b924;
  func_0x0001000841fc(FUN_10248b924,0);
  func_0x000100084214(&UNK_10daad200,0x3c,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10248b914; end: 10248b923;  */

undefined1  [16] FUN_10248b914(void)

{
  return ZEXT816(0x1105103a8);
}



/* Entry: 10248b924; end: 10248bb9b;  */

void FUN_10248b924(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  uVar7 = *param_2;
  func_0x0001000285a8(0x112e9dbd8,&UNK_10daad248);
  puVar1 = &uStack_68;
  uStack_68 = uVar7;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_10248b668;
  func_0x0001000823a8(FUN_10248b668,0);
  pcVar3 = "SCUnifiedPublicProfilesPresenterScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopedServicesCleanupRelayServiceProvider",
                      0x49,2);
  FUN_10248c368();
  func_0x000100082720("UnifiedPublicProfilesPresenterScopeGraphBridgeServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e9dbe0,&UNK_10daad258);
  puVar4 = &UNK_1105103c8;
  func_0x000107c613fc(&UNK_1105103c8,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(code **)(puVar4 + 0x18) = pcVar2;
  *(char **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar3);
  pcVar5 = FUN_10248bb9c;
  func_0x0001000823a8(FUN_10248bb9c,puVar4);
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x112e9db68,&UNK_10daacf80);
  func_0x000107c6157c(pcVar5);
  uVar7 = 0x10248bba8;
  func_0x0001000823a8(0x10248bba8,pcVar5);
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopeInitializationServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e9db58,&UNK_10daacf70);
  func_0x000107c6157c(uVar7);
  uVar6 = 0x10248bbb0;
  func_0x0001000823a8(0x10248bbb0,uVar7);
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopedServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_1105103f0;
  func_0x000107c613fc(&UNK_1105103f0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(code **)(puVar4 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar6 = 0x10248bbb8;
  func_0x0001000823a8(0x10248bbb8,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopeEntryPointProvider",0x37,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 10248bb9c; end: 10248bbbf;  */

void FUN_10248bb9c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10248bbfc(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("SCUnifiedPublicProfilesPresenterScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10248bbc0; end: 10248bbfb;  */

void FUN_10248bbc0(undefined8 *param_1,undefined8 param_2)

{
  FUN_10248bbfc();
  func_0x0001000a7f38("SCUnifiedPublicProfilesPresenterScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10248bbfc; end: 10248be3b;  */

void FUN_10248bbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074ddc0;
  ppuVar4 = &PTR_DAT_113067060;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110510418;
  func_0x000107c613fc(&UNK_110510418,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e9dbe8;
  func_0x0001000285a8(0x112e9dbe8,&UNK_10daad260);
  func_0x0001000a6ee8(&UNK_1105102e0,
                      "SCUnifiedPublicProfilesPresenterScopedServicesScopeInitializationPluginKey",
                      0x4a,2,FUN_10248be3c,puVar2,uVar3,&UNK_1105102e0,&PTR_DAT_112e9db70);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110510440;
  func_0x000107c613fc(&UNK_110510440,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110510628,
                      "UnifiedPublicProfilesPresenterScopeGraphBridgeScopeInitializationPluginKey",
                      0x4a,2,FUN_10248be44,puVar2,uVar3,&UNK_110510628,&PTR_DAT_112e9dc78);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e9dbf0;
  func_0x0001000285a8(0x112e9dbf0,&UNK_10daad268);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10248be3c; end: 10248be43;  */

void FUN_10248be3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110510468;
  func_0x000107c613fc(&UNK_110510468,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10248beb0;
  func_0x0001000823a8(FUN_10248beb0,puVar3);
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopedServicesScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10248be44; end: 10248be83;  */

void FUN_10248be44(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10248c44c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("UnifiedPublicProfilesPresenterScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10248be84; end: 10248beaf;  */

void FUN_10248be84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10248beb0; end: 10248beb7;  */

void FUN_10248beb0(undefined8 *param_1)

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
  puVar1 = &UNK_110510368;
  func_0x000107c613fc(&UNK_110510368,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10248b87c;
  func_0x00010058fa64(FUN_10248b87c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10248beb8; end: 10248bf3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10248beb8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10248c278();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e9dbf8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e9dc00) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10248bf40);
  (*pcVar1)();
}



/* Entry: 10248bf40; end: 10248bf9f; -[_TtC46UnifiedPublicProfilesPresenterScopeGraphBridge61UnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint init] */

void FUN_10248bf40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnifiedPublicProfilesPresenterScopeGraphBridge.UnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint"
                      ,0x6c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10248bf6c);
  (*pcVar1)();
}



/* Entry: 10248bfa0; end: 10248bfd7; -[_TtC46UnifiedPublicProfilesPresenterScopeGraphBridge61UnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010248bfbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248bfc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248bfa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9dbf8));
  return;
}



/* Entry: 10248bfd8; end: 10248bfff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248bfd8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9dc00),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9dbf8));
  return;
}



/* Entry: 10248c000; end: 10248c01f;  */

void FUN_10248c000(void)

{
  func_0x000107c61168(&PTR_PTR_112845480);
  return;
}



/* Entry: 10248c020; end: 10248c0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10248c020(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9dc30) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9dc38);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10248c0a8);
  (*pcVar2)();
}



/* Entry: 10248c0a8; end: 10248c18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10248c0a8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9dc30);
  *(undefined **)(unaff_x20 + _DAT_112e9dc30) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9dc38);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9dc38))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110510588;
  func_0x000107c613fc(&UNK_110510588,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10248c194,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10248c190; end: 10248c19b;  */

void FUN_10248c190(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10248c19c; end: 10248c1fb; -[_TtC46UnifiedPublicProfilesPresenterScopeGraphBridge61SCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint init] */

void FUN_10248c19c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnifiedPublicProfilesPresenterScopeGraphBridge.SCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint"
                      ,0x6c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10248c1c8);
  (*pcVar1)();
}



/* Entry: 10248c1fc; end: 10248c233; -[_TtC46UnifiedPublicProfilesPresenterScopeGraphBridge61SCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248c1fc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9dc38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9dc30));
  return;
}



/* Entry: 10248c234; end: 10248c237;  */

void FUN_10248c234(void)

{
  return;
}



/* Entry: 10248c238; end: 10248c257;  */

void FUN_10248c238(void)

{
  FUN_10248c0a8();
  return;
}



/* Entry: 10248c258; end: 10248c277;  */

void FUN_10248c258(void)

{
  func_0x000107c61168(&PTR_PTR_112845548);
  return;
}



/* Entry: 10248c278; end: 10248c347;  */

undefined8 FUN_10248c278(void)

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
  
  func_0x000107c61428(0x112e9dc68,&uStack_40,0x20,0);
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
    FUN_10248c348();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10248c348; end: 10248c367;  */

void FUN_10248c348(void)

{
  func_0x000107c61168(&PTR_PTR_112845610);
  return;
}



/* Entry: 10248c368; end: 10248c3d3;  */

void FUN_10248c368(void)

{
  func_0x0001000285a8(0x112e9dc70,&UNK_10daad348);
  func_0x0001000823a8(0x10248c3a8,0);
  return;
}



/* Entry: 10248c3d4; end: 10248c40f; -[_TtC46UnifiedPublicProfilesPresenterScopeGraphBridge54UnifiedPublicProfilesPresenterScopeGraphBridgeServices init] */

void FUN_10248c3d4(undefined8 param_1)

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



/* Entry: 10248c410; end: 10248c443;  */

void FUN_10248c410(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10248c444; end: 10248c44b;  */

undefined8 FUN_10248c444(void)

{
  return 0x1b;
}



/* Entry: 10248c44c; end: 10248c5c3;  */

void FUN_10248c44c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105105d0;
  func_0x000107c613fc(&UNK_1105105d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10248c5c4,puVar1);
  return;
}



/* Entry: 10248c5c4; end: 10248c5cb;  */

void FUN_10248c5c4(undefined8 *param_1)

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
  func_0x000107c61428(0x112e9dc68,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9dc68,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110510668;
  func_0x000107c613fc(&UNK_110510668,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10248c678;
  func_0x00010058fa64(0x10248c678,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10248c5cc; end: 10248c627;  */

void FUN_10248c5cc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9dc68,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9dc68,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10248c628; end: 10248c67f;  */

undefined ** FUN_10248c628(void)

{
  return &PTR_DAT_113067060;
}



/* Entry: 10248c680; end: 10248c6c7; -[SCUnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248c680(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9dcc8;
  func_0x000107c61428(param_1 + _DAT_112e9dcc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10248c6c8; end: 10248c71f; -[SCUnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248c6c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9dcc8;
  func_0x000107c61428(param_1 + _DAT_112e9dcc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10248c720; end: 10248c767; -[SCUnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint unifiedPublicProfilesPresenterScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248c720(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9dcd0;
  func_0x000107c61428(param_1 + _DAT_112e9dcd0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10248c768; end: 10248c7cb; -[SCUnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint setUnifiedPublicProfilesPresenterScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248c768(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9dcd0;
  func_0x000107c61428(param_1 + _DAT_112e9dcd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10248c7cc; end: 10248c8ff;  */

/* WARNING: Possible PIC construction at 0x00010248c884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010248c8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010248c8bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248c888) */
/* WARNING: Removing unreachable block (ram,0x00010248c8a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248c7cc(void)

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
  func_0x000107c5d250();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10248c000();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10248c278();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10248c900);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e9dbf8) = lVar5;
    *(long *)(lVar4 + _DAT_112e9dc00) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10248c900; end: 10248c927; -[SCUnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10248c900(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10248c7cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10248c928; end: 10248c96b; -[SCUnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint end] */

void FUN_10248c928(undefined8 param_1)

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



/* Entry: 10248c96c; end: 10248cb03;  */

void FUN_10248c96c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc3) || (param_3 != -0x7ffffffef0f5e0e0)) {
      uVar2 = 0xd00000000000003d;
      func_0x000107c605b8(0xd00000000000003d,0x800000010f0a1f20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "UnifiedPublicProfilesPresenterScopeGraphBridge/SCUnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x74,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10248cb04);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a184();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10248cb04; end: 10248cbaf; -[SCUnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10248cb04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10248c96c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10248cbb0; end: 10248cc1b; -[SCUnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248cbb0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9dcc8,0);
  *(undefined8 *)(param_1 + _DAT_112e9dcd0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9dcd8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10248cc1c; end: 10248cc4f;  */

void FUN_10248cc1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10248cc50; end: 10248cc97; -[SCUnifiedPublicProfilesPresenterScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010248cc7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248cc80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248cc50(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9dcc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9dcd0));
  return;
}



/* Entry: 10248cc98; end: 10248ccb7;  */

void FUN_10248cc98(void)

{
  func_0x000107c61168(&PTR_PTR_1128456c0);
  return;
}



/* Entry: 10248ccb8; end: 10248ccff; -[SCSCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248ccb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9dd08;
  func_0x000107c61428(param_1 + _DAT_112e9dd08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10248cd00; end: 10248cd57; -[SCSCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248cd00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9dd08;
  func_0x000107c61428(param_1 + _DAT_112e9dd08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10248cd58; end: 10248ce2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248cd58(undefined8 param_1,long param_2)

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
    FUN_10248c258();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9dc30) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10248ce30);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9dc38);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9dd10);
    *(long **)(unaff_x20 + _DAT_112e9dd10) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10248ce30; end: 10248ce57; -[SCSCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint begin] */

void FUN_10248ce30(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10248cd58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10248ce58; end: 10248cfcf;  */

/* WARNING: Possible PIC construction at 0x00010248cec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010248cf58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248cec4) */
/* WARNING: Removing unreachable block (ram,0x00010248cf5c) */
/* WARNING: Removing unreachable block (ram,0x00010248cf74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248ce58(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9dd10);
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



/* Entry: 10248cfd0; end: 10248cfd7;  */

void FUN_10248cfd0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10248cfd8; end: 10248d00b; -[SCSCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint end] */

void FUN_10248cfd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10248ce58();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10248d00c; end: 10248d12b;  */

void FUN_10248d00c(long param_1,long param_2,long param_3)

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
                        "UnifiedPublicProfilesPresenterScopeGraphBridge/SCSCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint.swift"
                        ,0x74,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10248d12c);
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



/* Entry: 10248d12c; end: 10248d1d7; -[SCSCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10248d12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10248d00c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10248d1d8; end: 10248d237; -[SCSCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248d1d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9dd08,0);
  *(undefined8 *)(param_1 + _DAT_112e9dd10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10248d238; end: 10248d26b;  */

void FUN_10248d238(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10248d26c; end: 10248d2a3; -[SCSCUnifiedPublicProfilesPresenterScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248d26c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9dd08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9dd10));
  return;
}



/* Entry: 10248d2a4; end: 10248d2c3;  */

void FUN_10248d2a4(void)

{
  func_0x000107c61168(&PTR_PTR_112845788);
  return;
}



/* Entry: 10248d2c4; end: 10248d49b;  */

void FUN_10248d2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_110510770;
  func_0x000107c613fc(&UNK_110510770,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10248d368,puVar1);
  return;
}



/* Entry: 10248d49c; end: 10248d4ab;  */

undefined1  [16] FUN_10248d49c(void)

{
  return ZEXT816(0x110510798);
}



/* Entry: 10248d4ac; end: 10248d4ef;  */

void FUN_10248d4ac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10248daf8();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1105108c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10248d4f0; end: 10248d4f7;  */

void FUN_10248d4f0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_10248daf8();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1105108c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10248d4f8; end: 10248d527;  */

void FUN_10248d4f8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 10248d528; end: 10248d68b;  */

void FUN_10248d528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  pcVar1 = 
  "launchInsights(profileId:snapId:thumbnailUrl:timestampMs:animated:presentingViewController:)";
  func_0x0001000c10c0(
                     "launchInsights(profileId:snapId:thumbnailUrl:timestampMs:animated:presentingViewController:)"
                     );
  func_0x000107c61180();
  puVar2 = &UNK_110510860;
  func_0x000107c613fc(&UNK_110510860,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110510888;
  func_0x000107c613fc(&UNK_110510888,0x59,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_9;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  *(undefined8 *)(puVar3 + 0x40) = param_5;
  *(undefined8 *)(puVar3 + 0x48) = param_6;
  *(undefined8 *)(puVar3 + 0x50) = param_7;
  puVar3[0x58] = param_8;
  pcStack_70 = FUN_10248da60;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105108a0;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_68;
  func_0x000107c61174(param_9);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10248d68c; end: 10248da5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248d68c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,byte param_10)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000100083b20(&uStack_90);
    uVar11 = 0x112e9ddf8;
    func_0x0001000285a8(0x112e9ddf8,&UNK_10daad618);
    func_0x000107c610f8();
    uVar8 = uStack_90;
    func_0x00010017da58(uStack_90,uVar11);
    puVar2 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(uVar8);
    FUN_10248dd1c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174(param_2);
    puVar3 = puVar2;
    FUN_10248e4b4(puVar2,param_2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_2);
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
      uVar11 = 0;
    }
    else {
      func_0x000107c61174();
      FUN_10248dbb8();
      func_0x000107c61170(lVar4);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
    }
    *(undefined **)(param_1 + 0x18) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar11);
    puVar5 = puVar3 + _DAT_112e9de18;
    func_0x000107c61618();
    if (puVar5 != (undefined *)0x0) {
      puVar6 = PTR_PTR_1126b0ec8;
      func_0x000107c610f8();
      func_0x000107c49540(0xbff0000000000000,0xbff0000000000000);
      puVar7 = PTR_PTR_1126b0ed0;
      func_0x000107c610f8();
      func_0x000107c61174();
      uVar11 = param_5;
      func_0x000107c5fadc(param_5,param_6);
      uVar8 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5fadc(param_7,param_8);
      func_0x000107c48794((double)param_9);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar8);
      func_0x000107c61170();
      func_0x00010248db18();
      func_0x000107c613fc();
      *(undefined8 *)(param_7 + 0x18) = 3;
      *(undefined8 *)(param_7 + 0x10) = 1;
      *(undefined **)(param_7 + 0x20) = puVar7;
      func_0x000103b4c654(0);
      func_0x000107c610f8();
      func_0x000107c61174(puVar7);
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_6);
      func_0x000103b4c430(param_3,param_4,param_5,param_6,param_7);
      uVar11 = *(undefined8 *)(puVar3 + _DAT_112e9de28);
      *(undefined8 *)(puVar3 + _DAT_112e9de28) = param_3;
      func_0x000107c61170(uVar11);
      puVar9 = puVar5;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10248da60);
        (*pcVar1)();
      }
      func_0x000103baca5c(0);
      func_0x000107c610f8();
      puVar9 = puVar3;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      puVar10 = puVar5;
      func_0x000103baa864();
      lVar4 = _DAT_112e9de38;
      uVar11 = *(undefined8 *)(puVar9 + _DAT_112e9de38);
      *(undefined **)(puVar9 + _DAT_112e9de38) = puVar10;
      func_0x000107c61170(uVar11);
      lVar4 = *(long *)(puVar9 + lVar4);
      if (lVar4 != 0) {
        func_0x000107c61174();
        func_0x000103baad3c(param_10 & 1,0,0);
        func_0x000107c61170(lVar4);
      }
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61574(param_1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 10248da60; end: 10248da9b;  */

void FUN_10248da60(void)

{
  long unaff_x20;
  
  FUN_10248d68c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined1 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10248da9c; end: 10248dab7;  */

void FUN_10248da9c(long param_1,long param_2)

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



/* Entry: 10248dab8; end: 10248dae3;  */

void FUN_10248dab8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10248dae4; end: 10248daf7;  */

void FUN_10248dae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  pcVar1 = 
  "launchInsights(profileId:snapId:thumbnailUrl:timestampMs:animated:presentingViewController:)";
  func_0x0001000c10c0(
                     "launchInsights(profileId:snapId:thumbnailUrl:timestampMs:animated:presentingViewController:)"
                     );
  func_0x000107c61180();
  puVar2 = &UNK_110510860;
  func_0x000107c613fc(&UNK_110510860,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110510888;
  func_0x000107c613fc(&UNK_110510888,0x59,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_9;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  *(undefined8 *)(puVar3 + 0x40) = param_5;
  *(undefined8 *)(puVar3 + 0x48) = param_6;
  *(undefined8 *)(puVar3 + 0x50) = param_7;
  puVar3[0x58] = param_8;
  pcStack_70 = FUN_10248da60;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105108a0;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_68;
  func_0x000107c61174(param_9);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10248daf8; end: 10248dbb7;  */

void FUN_10248daf8(void)

{
  func_0x000107c61168(&PTR_PTR_112e9dd90);
  return;
}



/* Entry: 10248dbb8; end: 10248dc43;  */

/* WARNING: Possible PIC construction at 0x00010248dc04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248dc08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248dbb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112e9de30) != 0) {
    func_0x000107c420a8(*(long *)(unaff_x20 + _DAT_112e9de30),param_2,0,0);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112e9de10);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 10248dc44; end: 10248dca3; -[_TtC36SCSnapInsightsLauncherImplementation24SnapInsightsPresentation init] */

void FUN_10248dc44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapInsightsLauncherImplementation.SnapInsightsPresentation",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10248dc70);
  (*pcVar1)();
}



/* Entry: 10248dca4; end: 10248dd1b; -[_TtC36SCSnapInsightsLauncherImplementation24SnapInsightsPresentation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010248dcc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010248dce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010248dd00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248dce4) */
/* WARNING: Removing unreachable block (ram,0x00010248dcc4) */
/* WARNING: Removing unreachable block (ram,0x00010248dd04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248dca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9de10));
  return;
}



/* Entry: 10248dd1c; end: 10248dd3b;  */

void FUN_10248dd1c(void)

{
  func_0x000107c61168(&PTR_PTR_112845848);
  return;
}



/* Entry: 10248dd3c; end: 10248de93; -[_TtC36SCSnapInsightsLauncherImplementation24SnapInsightsPresentation snapInsightsDidComplete] */

/* WARNING: Possible PIC construction at 0x00010248dd78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010248dda4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248dd7c) */
/* WARNING: Removing unreachable block (ram,0x00010248dda8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248dd3c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10248de94; end: 10248df37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248de94(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112e9de10;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112e9de10);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(*(undefined8 *)(param_1 + lVar2));
      func_0x000107c61180();
      func_0x000107c615e8();
      lVar2 = *(long *)(param_1 + _DAT_112e9de30);
      *(undefined8 *)(param_1 + _DAT_112e9de30) = 0;
      func_0x000107c61170(param_1);
      param_1 = lVar2;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10248df38; end: 10248df5f; -[_TtC36SCSnapInsightsLauncherImplementation24SnapInsightsPresentation snapInsightsNeedsRemoval] */

void FUN_10248df38(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010248ddc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10248df60; end: 10248e1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248df60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_c0;
  puVar5 = &UNK_110510938;
  puVar3 = puVar5;
  func_0x000107c613fc(&UNK_110510938,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110510960;
  func_0x000107c613fc(&UNK_110510960,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  func_0x000107c613fc(&UNK_110510938,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x10248e47c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e1779c;
  puStack_78 = &UNK_110510978;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  uStack_a0 = 0x10248e488;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100e17304;
  puStack_a8 = &UNK_1105109a0;
  puStack_98 = puVar5;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar5);
  func_0x000107c47be0();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_98);
  puVar4 = puStack_68;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e9de20);
  *(undefined **)(unaff_x20 + _DAT_112e9de20) = puVar6;
  func_0x000107c61174(puVar6);
  func_0x000107c61170(uVar10);
  lVar2 = _DAT_112e9de28;
  lVar11 = *(long *)(unaff_x20 + _DAT_112e9de28);
  lVar9 = lVar11;
  if (lVar11 == 0) {
    func_0x000103b4c654(0);
    func_0x000107c610f8();
    lVar9 = 0;
    func_0x000103b4c430(0,0,0,0,0);
  }
  func_0x000103b4c2b8(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar6);
  func_0x000107c61174(lVar11);
  lVar11 = unaff_x20;
  func_0x000107c61174();
  puVar5 = puVar6;
  func_0x000103b4c050(puVar6,lVar9);
  func_0x000107c42c1c(*(undefined8 *)(lVar11 + _DAT_112e9de10));
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar10);
  return;
}



/* Entry: 10248e1dc; end: 10248e29f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248e1dc(undefined8 param_1,long param_2,code *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    func_0x000107c610f8();
    func_0x000107c483f8();
    func_0x000107c569d4();
    uVar2 = *(undefined8 *)(param_2 + _DAT_112e9de30);
    *(undefined **)(param_2 + _DAT_112e9de30) = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000107c61170(uVar2);
    (*param_3)(puVar1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10248e2a0; end: 10248e367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248e2a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112e9de30);
    if (lVar2 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c420a8(lVar2);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(param_3 + 0x10,auStack_60,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + _DAT_112e9de20);
    *(undefined8 *)(param_3 + _DAT_112e9de20) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar3);
  }
  return;
}


