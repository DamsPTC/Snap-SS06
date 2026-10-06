/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10248e368; end: 10248e3db; -[_TtC36SCSnapInsightsLauncherImplementation24SnapInsightsPresentation providedViewControllerWithProvidedViewControllerBlock:] */

void FUN_10248e368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110510910;
  func_0x000107c613fc(&UNK_110510910,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_10248df60(0x10248e46c,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10248e3dc; end: 10248e3df; -[_TtC36SCSnapInsightsLauncherImplementation24SnapInsightsPresentation swipeInteractionPresenter:didStartPresentingWithSwipeDirection:] */

void FUN_10248e3dc(void)

{
  return;
}



/* Entry: 10248e3e0; end: 10248e463; -[_TtC36SCSnapInsightsLauncherImplementation24SnapInsightsPresentation swipeInteractionPresenterDidFinishDismissing:] */

/* WARNING: Possible PIC construction at 0x00010248e41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010248e448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248e420) */
/* WARNING: Removing unreachable block (ram,0x00010248e44c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248e3e0(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10248e464; end: 10248e4b3; -[_TtC36SCSnapInsightsLauncherImplementation24SnapInsightsPresentation swipeInteractionPresenter:swipeEnabledWithDirection:] */

undefined8 FUN_10248e464(void)

{
  return 0;
}



/* Entry: 10248e4b4; end: 10248e573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248e4b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112e9de18;
  func_0x000107c61614(unaff_x20 + _DAT_112e9de18,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9de20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9de28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9de30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9de38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9de10) = param_1;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar1);
  return;
}



/* Entry: 10248e574; end: 10248e583;  */

void FUN_10248e574(long param_1,long param_2)

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



/* Entry: 10248e584; end: 10248e5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248e584(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10248e978();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9de70) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10248e5f0; end: 10248e65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248e5f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9de70) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10248e65c; end: 10248e6bb; -[_TtC53DiscoverFeedThumbnailRingScopedFactoryServiceProvider41SCDiscoverFeedThumbnailRingScopedServices init] */

void FUN_10248e65c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedThumbnailRingScopedFactoryServiceProvider.SCDiscoverFeedThumbnailRingScopedServices"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10248e688);
  (*pcVar1)();
}



/* Entry: 10248e6bc; end: 10248e6cb; -[_TtC53DiscoverFeedThumbnailRingScopedFactoryServiceProvider41SCDiscoverFeedThumbnailRingScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248e6bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9de70));
  return;
}



/* Entry: 10248e6cc; end: 10248e737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248e6cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110510bb8;
  func_0x000107c613fc(&UNK_110510bb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10248ea10,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10248e738; end: 10248e7d3;  */

void FUN_10248e738(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110510ac8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110510ac8;
  return;
}



/* Entry: 10248e7d4; end: 10248e80b;  */

void FUN_10248e7d4(long *param_1)

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



/* Entry: 10248e80c; end: 10248e813;  */

undefined8 FUN_10248e80c(void)

{
  return 0x1b;
}



/* Entry: 10248e814; end: 10248e947;  */

void FUN_10248e814(undefined8 *param_1)

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
  puVar1 = &UNK_110510be0;
  func_0x000107c613fc(&UNK_110510be0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10248e9e8;
  func_0x00010058fa64(FUN_10248e9e8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10248e948; end: 10248e977;  */

undefined ** FUN_10248e948(void)

{
  return &PTR_DAT_113066ad8;
}



/* Entry: 10248e978; end: 10248e997;  */

void FUN_10248e978(void)

{
  func_0x000107c61168(&PTR_PTR_112845930);
  return;
}



/* Entry: 10248e998; end: 10248e9e7;  */

undefined1  [16] FUN_10248e998(void)

{
  return ZEXT816(0x110510b18);
}



/* Entry: 10248e9e8; end: 10248ea0f;  */

void FUN_10248e9e8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10248ea10; end: 10248ea23;  */

void FUN_10248ea10(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10248ea24; end: 10248ee8b;  */

void FUN_10248ea24(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e9dee8,&UNK_10daad920);
  puVar1 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102490f40();
  func_0x000100082720("SCUberAvatarScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_102490fcc();
  func_0x000100082720("SCUberAvatarScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10248e7d4;
  func_0x0001000823a8(FUN_10248e7d4,0);
  func_0x000100082720("SCDiscoverFeedThumbnailRingScopedServicesCleanupRelayServiceProvider",0x44,2)
  ;
  puVar5 = puVar2;
  FUN_102490df4();
  func_0x000100082720("DiscoverFeedThumbnailRingScopeGraphBridgeServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e9def0,&UNK_10daad930);
  puVar6 = &UNK_110510c90;
  func_0x000107c613fc(&UNK_110510c90,0x98,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 *)(puVar6 + 0x50) = param_10;
  *(undefined8 *)(puVar6 + 0x58) = param_11;
  *(undefined8 *)(puVar6 + 0x60) = param_12;
  *(undefined8 *)(puVar6 + 0x68) = param_13;
  *(undefined8 *)(puVar6 + 0x70) = param_14;
  *(undefined8 *)(puVar6 + 0x78) = param_15;
  *(undefined8 *)(puVar6 + 0x80) = param_16;
  *(undefined8 *)(puVar6 + 0x88) = param_17;
  *(undefined8 **)(puVar6 + 0x90) = puVar3;
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
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10248eed4;
  func_0x0001000823a8(0x10248eed4,puVar6);
  func_0x000100082720("SCDiscoverFeedThumbnailRingServicesEntryPointWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e9def8,&UNK_10daad938);
  puVar6 = &UNK_110510cb8;
  func_0x000107c613fc(&UNK_110510cb8,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar10);
  pcVar7 = FUN_10248ef18;
  func_0x0001000823a8(FUN_10248ef18,puVar6);
  func_0x000100082720("SCDiscoverFeedThumbnailRingScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112e9de78,&UNK_10daad660);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x10248ef24;
  func_0x0001000823a8(0x10248ef24,pcVar7);
  func_0x000100082720("SCDiscoverFeedThumbnailRingScopeInitializationServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e9de68,&UNK_10daad650);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10248ef2c;
  func_0x0001000823a8(0x10248ef2c,uVar8);
  func_0x000100082720("SCDiscoverFeedThumbnailRingScopedServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110510ce0;
  func_0x000107c613fc(&UNK_110510ce0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10248ef34;
  func_0x0001000823a8(0x10248ef34,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCDiscoverFeedThumbnailRingScopeEntryPointProvider",0x32,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10248ee8c; end: 10248ef17;  */

void FUN_10248ee8c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10248ea24(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10248ef18; end: 10248ef3b;  */

void FUN_10248ef18(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10249055c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCDiscoverFeedThumbnailRingScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10248ef3c; end: 1024902e3;  */

void FUN_10248ef3c(long *param_1,long param_2)

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
  FUN_1024904ac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  func_0x0001000285a8(0x112e9df00,&UNK_10daad948);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar18 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x18) = puVar16;
  puVar16 = PTR_PTR_1126aa8f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar16;
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  uVar18 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0a2360);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar16);
  uVar18 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f017eb0);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007150);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f051640);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f05c510);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0a2380);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f051600);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar20);
  uVar18 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01ab40);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f063e50);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f05c850);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar18);
  func_0x000107c3e740(uVar20);
  func_0x000107c61170(uVar17);
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
  func_0x000107c61574(uStack_f0);
  *param_1 = param_2;
  return;
}



/* Entry: 1024902e4; end: 10249039f;  */

void FUN_1024902e4(void)

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
  return;
}



/* Entry: 1024903a0; end: 1024903a7;  */

undefined8 FUN_1024903a0(void)

{
  return 0x1b;
}



/* Entry: 1024903a8; end: 10249042b;  */

void FUN_1024903a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024904ec,param_2,FUN_1024904f0,param_2,FUN_102490518,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10249042c; end: 10249047b;  */

undefined8 FUN_10249042c(void)

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



/* Entry: 10249047c; end: 1024904ab;  */

undefined ** FUN_10249047c(void)

{
  return &PTR_DAT_113066ad8;
}



/* Entry: 1024904ac; end: 1024904cb;  */

void FUN_1024904ac(void)

{
  func_0x000107c61168(&PTR_PTR_112e9df70);
  return;
}



/* Entry: 1024904cc; end: 1024904ef;  */

undefined1  [16] FUN_1024904cc(void)

{
  return ZEXT816(0x110510d38);
}



/* Entry: 1024904f0; end: 102490517;  */

void FUN_1024904f0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102490518; end: 10249051f;  */

undefined8 FUN_102490518(void)

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



/* Entry: 102490520; end: 10249055b;  */

void FUN_102490520(undefined8 *param_1,undefined8 param_2)

{
  FUN_10249055c();
  func_0x0001000a7f38("SCDiscoverFeedThumbnailRingScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10249055c; end: 102490747;  */

void FUN_10249055c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d488;
  ppuVar4 = &PTR_DAT_113066ad8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110510d88;
  func_0x000107c613fc(&UNK_110510d88,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e9e050;
  func_0x0001000285a8(0x112e9e050,&UNK_10daadb48);
  func_0x0001000a6ee8(&UNK_110510fd8,
                      "DiscoverFeedThumbnailRingScopeGraphBridgeScopeInitializationPluginKey",0x45,2
                      ,FUN_102490748,puVar2,uVar3,&UNK_110510fd8,&PTR_DAT_112e9e0e8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110510db0;
  func_0x000107c613fc(&UNK_110510db0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110510b58,
                      "SCDiscoverFeedThumbnailRingScopedServicesScopeInitializationPluginKey",0x45,2
                      ,FUN_102490830,puVar2,uVar3,&UNK_110510b58,&PTR_DAT_112e9de80);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110510d38,
                      "SCDiscoverFeedThumbnailRingServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x50,2,FUN_1024908ac,param_4,uVar3,&UNK_110510d38,&PTR_DAT_112e9df08);
  func_0x000107c61574(param_4);
  uVar3 = 0x112e9e058;
  func_0x0001000285a8(0x112e9e058,&UNK_10daadb50);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102490748; end: 102490787;  */

void FUN_102490748(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102491074(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DiscoverFeedThumbnailRingScopeGraphBridgeScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102490788; end: 10249082f;  */

void FUN_102490788(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110510dd8;
  func_0x000107c613fc(&UNK_110510dd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1024908e8;
  func_0x0001000823a8(FUN_1024908e8,puVar1);
  func_0x000100082720("SCDiscoverFeedThumbnailRingScopedServicesScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102490830; end: 102490837;  */

void FUN_102490830(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110510dd8;
  func_0x000107c613fc(&UNK_110510dd8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1024908e8;
  func_0x0001000823a8(FUN_1024908e8,puVar3);
  func_0x000100082720("SCDiscoverFeedThumbnailRingScopedServicesScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102490838; end: 1024908ab;  */

void FUN_102490838(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1024908b4;
  func_0x0001000823a8(0x1024908b4,param_3);
  func_0x000100082720("SCDiscoverFeedThumbnailRingServicesEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x55,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024908ac; end: 1024908bb;  */

void FUN_1024908ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1024908b4;
  func_0x0001000823a8();
  func_0x000100082720("SCDiscoverFeedThumbnailRingServicesEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x55,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024908bc; end: 1024908e7;  */

void FUN_1024908bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024908e8; end: 1024908ef;  */

void FUN_1024908e8(undefined8 *param_1)

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
  puVar1 = &UNK_110510be0;
  func_0x000107c613fc(&UNK_110510be0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10248e9e8;
  func_0x00010058fa64(FUN_10248e9e8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024908f0; end: 1024909cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024908f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_102490d04();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e9e060) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e9e068) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024909cc);
  (*pcVar1)();
}



/* Entry: 1024909cc; end: 102490a2b; -[_TtC41DiscoverFeedThumbnailRingScopeGraphBridge56DiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint init] */

void FUN_1024909cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedThumbnailRingScopeGraphBridge.DiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024909f8);
  (*pcVar1)();
}



/* Entry: 102490a2c; end: 102490a63; -[_TtC41DiscoverFeedThumbnailRingScopeGraphBridge56DiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102490a48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102490a4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102490a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9e060));
  return;
}



/* Entry: 102490a64; end: 102490a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102490a64(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9e068),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9e060));
  return;
}



/* Entry: 102490a8c; end: 102490aab;  */

void FUN_102490a8c(void)

{
  func_0x000107c61168(&PTR_PTR_1128459f0);
  return;
}



/* Entry: 102490aac; end: 102490b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102490aac(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9e098) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9e0a0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102490b34);
  (*pcVar2)();
}



/* Entry: 102490b34; end: 102490c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102490b34(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9e098);
  *(undefined **)(unaff_x20 + _DAT_112e9e098) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9e0a0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9e0a0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110510ef8;
  func_0x000107c613fc(&UNK_110510ef8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102490c20,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102490c1c; end: 102490c27;  */

void FUN_102490c1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102490c28; end: 102490c87; -[_TtC41DiscoverFeedThumbnailRingScopeGraphBridge56SCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint init] */

void FUN_102490c28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedThumbnailRingScopeGraphBridge.SCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102490c54);
  (*pcVar1)();
}



/* Entry: 102490c88; end: 102490cbf; -[_TtC41DiscoverFeedThumbnailRingScopeGraphBridge56SCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102490c88(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9e0a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9e098));
  return;
}



/* Entry: 102490cc0; end: 102490cc3;  */

void FUN_102490cc0(void)

{
  return;
}



/* Entry: 102490cc4; end: 102490ce3;  */

void FUN_102490cc4(void)

{
  FUN_102490b34();
  return;
}



/* Entry: 102490ce4; end: 102490d03;  */

void FUN_102490ce4(void)

{
  func_0x000107c61168(&PTR_PTR_112845ab8);
  return;
}



/* Entry: 102490d04; end: 102490dd3;  */

undefined8 FUN_102490d04(void)

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
  
  func_0x000107c61428(0x112e9e0d0,&uStack_40,0x20,0);
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
    FUN_102490dd4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102490dd4; end: 102490df3;  */

void FUN_102490dd4(void)

{
  func_0x000107c61168(&PTR_PTR_112845b80);
  return;
}



/* Entry: 102490df4; end: 102490e0f;  */

void FUN_102490df4(undefined8 param_1)

{
  func_0x0001000285a8(0x112e9e0d8,&UNK_10daadc38);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102490e7c,param_1);
  return;
}



/* Entry: 102490e10; end: 102490e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102490e10(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102490dd4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e9e0e0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102490e7c; end: 102490e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102490e7c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102490dd4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e9e0e0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102490e84; end: 102490ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102490e84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9e0e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102490ed0; end: 102490f2f; -[_TtC41DiscoverFeedThumbnailRingScopeGraphBridge49DiscoverFeedThumbnailRingScopeGraphBridgeServices init] */

void FUN_102490ed0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedThumbnailRingScopeGraphBridge.DiscoverFeedThumbnailRingScopeGraphBridgeServices"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102490efc);
  (*pcVar1)();
}



/* Entry: 102490f30; end: 102490f3f; -[_TtC41DiscoverFeedThumbnailRingScopeGraphBridge49DiscoverFeedThumbnailRingScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102490f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9e0e0));
  return;
}



/* Entry: 102490f40; end: 102490fcb;  */

void FUN_102490f40(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102490f80,0);
  return;
}



/* Entry: 102490fcc; end: 102490fe7;  */

void FUN_102490fcc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102491038,param_1);
  return;
}



/* Entry: 102490fe8; end: 102491037;  */

void FUN_102490fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102491038; end: 10249106b;  */

void FUN_102491038(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10249106c; end: 102491073;  */

undefined8 FUN_10249106c(void)

{
  return 0x1b;
}



/* Entry: 102491074; end: 1024911eb;  */

void FUN_102491074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110510f40;
  func_0x000107c613fc(&UNK_110510f40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024911ec,puVar1);
  return;
}



/* Entry: 1024911ec; end: 1024911f3;  */

void FUN_1024911ec(undefined8 *param_1)

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
  func_0x000107c61428(0x112e9e0d0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9e0d0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110511018;
  func_0x000107c613fc(&UNK_110511018,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1024912c0;
  func_0x00010058fa64(0x1024912c0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024911f4; end: 10249124f;  */

void FUN_1024911f4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9e0d0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9e0d0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102491250; end: 1024912c7;  */

undefined ** FUN_102491250(void)

{
  return &PTR_DAT_113066ad8;
}



/* Entry: 1024912c8; end: 10249130f; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024912c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9e138;
  func_0x000107c61428(param_1 + _DAT_112e9e138,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102491310; end: 102491367; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102491310(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9e138;
  func_0x000107c61428(param_1 + _DAT_112e9e138,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102491368; end: 1024913af; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint sCUberAvatarScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102491368(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9e140;
  func_0x000107c61428(param_1 + _DAT_112e9e140,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024913b0; end: 1024913bb; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint setSCUberAvatarScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024913b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9e140;
  func_0x000107c61428(param_1 + _DAT_112e9e140,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024913bc; end: 102491403; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint discoverFeedThumbnailRingScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024913bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9e148;
  func_0x000107c61428(param_1 + _DAT_112e9e148,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102491404; end: 10249140f; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint setDiscoverFeedThumbnailRingScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102491404(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9e148;
  func_0x000107c61428(param_1 + _DAT_112e9e148,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102491410; end: 10249146f;  */

void FUN_102491410(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102491470; end: 10249162b;  */

/* WARNING: Possible PIC construction at 0x000102491588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024915ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024915bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102491600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024915c0) */
/* WARNING: Removing unreachable block (ram,0x0001024915b0) */
/* WARNING: Removing unreachable block (ram,0x00010249158c) */
/* WARNING: Removing unreachable block (ram,0x000102491604) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102491470(void)

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
  func_0x000107c514b8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c41fb0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102490a8c();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_102490d04();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10249162c);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e9e060) = lVar5;
      *(long *)(lVar3 + _DAT_112e9e068) = unaff_x20;
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



/* Entry: 10249162c; end: 102491653; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10249162c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102491470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102491654; end: 102491697; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint end] */

void FUN_102491654(undefined8 param_1)

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



/* Entry: 102491698; end: 10249189b;  */

void FUN_102491698(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef1005b90)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000018,0x800000010effa470,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffc8) || (param_3 != -0x7ffffffef0f5d910)) &&
           (func_0x000107c605b8(0xd000000000000038,0x800000010f0a26f0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DiscoverFeedThumbnailRingScopeGraphBridge/SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x6a,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10249189c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c541c0();
        goto LAB_102491724;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58a60();
  }
LAB_102491724:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10249189c; end: 102491947; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10249189c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102491698(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102491948; end: 1024919bf; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102491948(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9e138,0);
  *(undefined8 *)(param_1 + _DAT_112e9e140) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9e148) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9e150) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024919c0; end: 1024919f3;  */

void FUN_1024919c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024919f4; end: 102491a4b; -[SCDiscoverFeedThumbnailRingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102491a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102491a24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024919f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9e138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9e140));
  return;
}



/* Entry: 102491a4c; end: 102491a6b;  */

void FUN_102491a4c(void)

{
  func_0x000107c61168(&PTR_PTR_112845c40);
  return;
}



/* Entry: 102491a6c; end: 102491ab3; -[SCSCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102491a6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9e180;
  func_0x000107c61428(param_1 + _DAT_112e9e180,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102491ab4; end: 102491b0b; -[SCSCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102491ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9e180;
  func_0x000107c61428(param_1 + _DAT_112e9e180,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102491b0c; end: 102491be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102491b0c(undefined8 param_1,long param_2)

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
    FUN_102490ce4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9e098) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102491be4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9e0a0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9e188);
    *(long **)(unaff_x20 + _DAT_112e9e188) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102491be4; end: 102491c0b; -[SCSCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint begin] */

void FUN_102491be4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102491b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102491c0c; end: 102491d83;  */

/* WARNING: Possible PIC construction at 0x000102491c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102491d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102491c78) */
/* WARNING: Removing unreachable block (ram,0x000102491d10) */
/* WARNING: Removing unreachable block (ram,0x000102491d28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102491c0c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9e188);
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



/* Entry: 102491d84; end: 102491d8b;  */

void FUN_102491d84(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102491d8c; end: 102491dbf; -[SCSCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint end] */

void FUN_102491d8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102491c0c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102491dc0; end: 102491edf;  */

void FUN_102491dc0(long param_1,long param_2,long param_3)

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
                        "DiscoverFeedThumbnailRingScopeGraphBridge/SCSCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint.swift"
                        ,0x6a,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102491ee0);
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



/* Entry: 102491ee0; end: 102491f8b; -[SCSCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102491ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102491dc0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102491f8c; end: 102491feb; -[SCSCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102491f8c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9e180,0);
  *(undefined8 *)(param_1 + _DAT_112e9e188) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102491fec; end: 10249201f;  */

void FUN_102491fec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102492020; end: 102492057; -[SCSCDiscoverFeedThumbnailRingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102492020(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9e180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9e188));
  return;
}


