/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c50a6c; end: 102c50aef;  */

void FUN_102c50a6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102c50b60,param_2,FUN_102c50b64,param_2,0x102c50b8c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c50af0; end: 102c50b1f;  */

undefined ** FUN_102c50af0(void)

{
  return &PTR_DAT_113066748;
}



/* Entry: 102c50b20; end: 102c50b3f;  */

void FUN_102c50b20(void)

{
  func_0x000107c61168(&PTR_PTR_112f05068);
  return;
}



/* Entry: 102c50b40; end: 102c50b63;  */

undefined1  [16] FUN_102c50b40(void)

{
  return ZEXT816(0x1105b8958);
}



/* Entry: 102c50b64; end: 102c50bb7;  */

void FUN_102c50b64(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c50bb8; end: 102c514df;  */

void FUN_102c50bb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074ce98;
  ppuVar4 = &PTR_DAT_113066748;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112f050f8;
  func_0x0001000285a8(0x112f050f8,&UNK_10db397a0);
  func_0x0001000a6ee8(&UNK_1105b7e98,"AdAboutGenAIAdsEntryPointWrapperScopeInitializationPluginKey",
                      0x3c,2,FUN_102c514e0,param_2,uVar2,&UNK_1105b7e98,&PTR_DAT_112f03cf0);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105b7f18,
                      "AdChromeInteractionEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      0x102c5150c,param_3,uVar2,&UNK_1105b7f18,&PTR_DAT_112f03dc8);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105b7f98,
                      "AdClickInteractionEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      0x102c51538,param_4,uVar2,&UNK_1105b7f98,&PTR_DAT_112f03ef8);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1105b8018,
                      "AdComposerEndCardEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      0x102c51564,param_5,uVar2,&UNK_1105b8018,&PTR_DAT_112f03fc8);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1105b8098,"AdFavoriteEntryPointWrapperScopeInitializationPluginKey",0x37,
                      2,0x102c51590,param_6,uVar2,&UNK_1105b8098,&PTR_DAT_112f040d0);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1105b8138,"AdPageAggregateEntryPointWrapperScopeInitializationPluginKey",
                      0x3c,2,0x102c515bc,param_7,uVar2,&UNK_1105b8138,&PTR_DAT_112f041b0);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_1105b81b8,"AdPageLifecycleEntryPointWrapperScopeInitializationPluginKey",
                      0x3c,2,0x102c515e8,param_8,uVar2,&UNK_1105b81b8,&PTR_DAT_112f04290);
  func_0x000107c61574(param_8);
  puVar3 = &UNK_1105b89a8;
  func_0x000107c613fc(&UNK_1105b89a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_9;
  *(undefined8 *)(puVar3 + 0x18) = param_10;
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_1105bc088,"AdPagePlaybackScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_102c51614,puVar3,uVar2,&UNK_1105bc088,&PTR_DAT_112f08cf0);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_11);
  func_0x0001000a6ee8(&UNK_1105b8238,"AdPlayableEntryPointWrapperScopeInitializationPluginKey",0x37,
                      2,FUN_102c51654,param_11,uVar2,&UNK_1105b8238,&PTR_DAT_112f04370);
  func_0x000107c61574(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000a6ee8(&UNK_1105b82b8,
                      "AdPlaybackComposerEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      0x102c51680,param_12,uVar2,&UNK_1105b82b8,&PTR_DAT_112f04470);
  func_0x000107c61574(param_12);
  func_0x000107c6157c(param_13);
  func_0x0001000a6ee8(&UNK_1105b8338,
                      "AdPlaybackControlEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      0x102c516ac,param_13,uVar2,&UNK_1105b8338,&PTR_DAT_112f04540);
  func_0x000107c61574(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000a6ee8(&UNK_1105b83b8,
                      "AdPlaybackOperaPageEventsEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,0x102c516d8,param_14,uVar2,&UNK_1105b83b8,&PTR_DAT_112f04640);
  func_0x000107c61574(param_14);
  func_0x000107c6157c(param_15);
  func_0x0001000a6ee8(&UNK_1105b8458,
                      "AdPlaybackPageEventServiceProviderWrapperScopeInitializationPluginKey",0x45,2
                      ,0x102c51704,param_15,uVar2,&UNK_1105b8458,&PTR_DAT_112f04720);
  func_0x000107c61574(param_15);
  func_0x000107c6157c(param_16);
  func_0x0001000a6ee8(&UNK_1105b84d8,"AdReminderEntryPointWrapperScopeInitializationPluginKey",0x37,
                      2,0x102c51730,param_16,uVar2,&UNK_1105b84d8,&PTR_DAT_112f047f8);
  func_0x000107c61574(param_16);
  func_0x000107c6157c(param_17);
  func_0x0001000a6ee8(&UNK_1105b8558,"AdReportingEntryPointWrapperScopeInitializationPluginKey",0x38
                      ,2,0x102c5175c,param_17,uVar2,&UNK_1105b8558,&PTR_DAT_112f048f0);
  func_0x000107c61574(param_17);
  func_0x000107c6157c(param_18);
  func_0x0001000a6ee8(&UNK_1105b85d8,"AdSKOverlayEntryPointWrapperScopeInitializationPluginKey",0x38
                      ,2,0x102c51788,param_18,uVar2,&UNK_1105b85d8,&PTR_DAT_112f04a08);
  func_0x000107c61574(param_18);
  func_0x000107c6157c(param_19);
  func_0x0001000a6ee8(&UNK_1105b8658,
                      "AdSpotlightVerticalEndCardEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,0x102c517b4,param_19,uVar2,&UNK_1105b8658,&PTR_DAT_112f04af0);
  func_0x000107c61574(param_19);
  func_0x000107c6157c(param_20);
  func_0x0001000a6ee8(&UNK_1105b86d8,"AdStickersEntryPointWrapperScopeInitializationPluginKey",0x37,
                      2,0x102c517e0,param_20,uVar2,&UNK_1105b86d8,&PTR_DAT_112f04bc0);
  func_0x000107c61574(param_20);
  func_0x000107c6157c(param_21);
  func_0x0001000a6ee8(&UNK_1105b8758,"AdSubscribeEntryPointWrapperScopeInitializationPluginKey",0x38
                      ,2,0x102c5180c,param_21,uVar2,&UNK_1105b8758,&PTR_DAT_112f04c88);
  func_0x000107c61574(param_21);
  func_0x000107c6157c(param_22);
  func_0x0001000a6ee8(&UNK_1105b87d8,"AdTapHintEntryPointWrapperScopeInitializationPluginKey",0x36,2
                      ,0x102c51838,param_22,uVar2,&UNK_1105b87d8,&PTR_DAT_112f04d68);
  func_0x000107c61574(param_22);
  func_0x000107c6157c(param_23);
  func_0x0001000a6ee8(&UNK_1105b8858,
                      "AdTapToPauseTrackingEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      0x102c51864,param_23,uVar2,&UNK_1105b8858,&PTR_DAT_112f04e38);
  func_0x000107c61574(param_23);
  puVar3 = &UNK_1105b89d0;
  func_0x000107c613fc(&UNK_1105b89d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_9;
  *(undefined8 *)(puVar3 + 0x18) = param_24;
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_24);
  func_0x0001000a6ee8(&UNK_1105b7998,"SCAdPagePlaybackScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_102c51938,puVar3,uVar2,&UNK_1105b7998,&PTR_DAT_112f03bb8);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_25);
  func_0x0001000a6ee8(&UNK_1105b88d8,
                      "SpotlightTapTooltipEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_102c51940,param_25,uVar2,&UNK_1105b88d8,&PTR_DAT_112f04f08);
  func_0x000107c61574(param_25);
  func_0x000107c6157c(param_26);
  func_0x0001000a6ee8(&UNK_1105b8958,"TapTooltipEntryPointWrapperScopeInitializationPluginKey",0x37,
                      2,FUN_102c519f0,param_26,uVar2,&UNK_1105b8958,&PTR_DAT_112f05000);
  func_0x000107c61574(param_26);
  uVar2 = 0x112f05100;
  func_0x0001000285a8(0x112f05100,&UNK_10db397a8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCAdPagePlaybackScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102c514e0; end: 102c51613;  */

void FUN_102c514e0(void)

{
  FUN_102c5196c();
  return;
}



/* Entry: 102c51614; end: 102c51653;  */

void FUN_102c51614(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102c98144(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdPagePlaybackScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c51654; end: 102c5188f;  */

void FUN_102c51654(void)

{
  FUN_102c5196c();
  return;
}



/* Entry: 102c51890; end: 102c51937;  */

void FUN_102c51890(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105b89f8;
  func_0x000107c613fc(&UNK_1105b89f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102c51a58;
  func_0x0001000823a8(FUN_102c51a58,puVar1);
  func_0x000100082720("SCAdPagePlaybackScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102c51938; end: 102c5193f;  */

void FUN_102c51938(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105b89f8;
  func_0x000107c613fc(&UNK_1105b89f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102c51a58;
  func_0x0001000823a8(FUN_102c51a58,puVar3);
  func_0x000100082720("SCAdPagePlaybackScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102c51940; end: 102c5196b;  */

void FUN_102c51940(void)

{
  FUN_102c5196c();
  return;
}



/* Entry: 102c5196c; end: 102c519ef;  */

void FUN_102c5196c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 102c519f0; end: 102c51a1b;  */

void FUN_102c519f0(void)

{
  FUN_102c5196c();
  return;
}



/* Entry: 102c51a1c; end: 102c51a2b;  */

void FUN_102c51a1c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x102c50b60);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c51a2c; end: 102c51a57;  */

void FUN_102c51a2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c51a58; end: 102c51aff;  */

void FUN_102c51a58(undefined8 *param_1)

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
  puVar1 = &UNK_1105b7a20;
  func_0x000107c613fc(&UNK_1105b7a20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102c485c8;
  func_0x00010058fa64(FUN_102c485c8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c51b00; end: 102c51de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c51b00(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  code *pcVar9;
  undefined8 uVar10;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  
  func_0x000107c613fc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068e80);
  uVar3 = ((undefined8 *)(param_1 + _DAT_113068e80))[1];
  uVar10 = *(undefined8 *)(param_4 + _DAT_112f0ded0);
  func_0x000107c61434(uVar3);
  func_0x000107c6157c(uVar10);
  pcVar5 = "init(pageId:pageEventStream:performer:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar6 = 0;
  func_0x000102c520a8();
  lVar7 = lVar6;
  func_0x000107c613fc();
  uVar8 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(char **)(lVar7 + 0x28) = pcVar5;
  *(undefined8 *)(lVar7 + 0x30) = uVar8;
  *(undefined8 *)(lVar7 + 0x10) = uVar2;
  *(undefined8 *)(lVar7 + 0x18) = uVar3;
  *(undefined8 *)(lVar7 + 0x20) = uVar10;
  *(long *)(unaff_x20 + 0x10) = lVar7;
  lVar1 = param_2 + _DAT_113068e50;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  ppuStack_70 = &PTR_DAT_1105b8b00;
  ppuStack_68 = &PTR_DAT_1105b8ad8;
  pcVar9 = *(code **)(lVar4 + 0x10);
  alStack_90[0] = lVar7;
  lStack_78 = lVar6;
  func_0x000107c6157c(lVar7);
  (*pcVar9)(alStack_90,uVar2,lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000100dd2718(alStack_90);
  return unaff_x20;
}



/* Entry: 102c51de8; end: 102c51e07;  */

void FUN_102c51de8(void)

{
  FUN_102c51e78();
  return;
}



/* Entry: 102c51e08; end: 102c51e2b;  */

void FUN_102c51e08(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c51e2c; end: 102c51e4f;  */

void FUN_102c51e2c(void)

{
  FUN_102c51e78();
  return;
}



/* Entry: 102c51e50; end: 102c51e57;  */

undefined8 FUN_102c51e50(void)

{
  return 0;
}



/* Entry: 102c51e58; end: 102c51e77;  */

void FUN_102c51e58(void)

{
  func_0x000107c61168(&PTR_PTR_112f05148);
  return;
}



/* Entry: 102c51e78; end: 102c51f63;  */

void FUN_102c51e78(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105b8b20;
  func_0x000107c613fc(&UNK_1105b8b20,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_102c52644;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102c52644);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + 0x30),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102c51f64; end: 102c5206b;  */

void FUN_102c51f64(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(auStack_48,&UNK_1105c37f8,uVar1,&UNK_1105c37f8,uVar2,&PTR_DAT_1105c32f0,lVar3);
  if (lStack_38 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(auStack_48,&UNK_1105c3898,uVar1,&UNK_1105c3898,uVar2,&PTR_DAT_1105c3300,param_1);
    if (lStack_38 == 0) {
      return;
    }
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c61434(lStack_38);
      FUN_102c5246c();
      func_0x000107c61574(param_2);
      func_0x000107c61430(lStack_38,2);
      return;
    }
  }
  func_0x000107c6142c(lStack_38);
  return;
}



/* Entry: 102c5206c; end: 102c52103;  */

void FUN_102c5206c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c52104; end: 102c521a7;  */

undefined8 * FUN_102c52104(void)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103b981b0();
  uVar4 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar4;
  func_0x000107c61434();
  bVar1 = (byte)uVar4;
  func_0x000104040020();
  puVar2[9] = PTR___sSbN_11034dd40;
  *(byte *)(puVar2 + 6) = bVar1 & 1;
  puVar3 = puVar2;
  func_0x000100214a84(puVar2);
  func_0x000107c61588(puVar2);
  func_0x000100f15a0c(puVar2 + 4);
  return puVar3;
}



/* Entry: 102c521a8; end: 102c521b3;  */

undefined * FUN_102c521a8(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c521b4; end: 102c5220b;  */

long FUN_102c521b4(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x112f05268;
  func_0x0001000285a8(0x112f05268,&UNK_10db39870);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = 0;
  func_0x000103b985c4();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  return lVar1;
}



/* Entry: 102c5220c; end: 102c5220f;  */

undefined * FUN_102c5220c(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 102c52210; end: 102c52263;  */

void FUN_102c52210(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_102c52264();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102c52264; end: 102c52417;  */

void FUN_102c52264(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined2 uStack_32;
  
  func_0x0001000d224c(&puStack_68);
  func_0x0001000a8868(&puStack_68,puStack_50);
  uStack_32 = 0x200;
  (**(code **)(lStack_48 + 0x10))(&uStack_32,&UNK_1105c3940,&PTR_DAT_1105c3310,puStack_50,lStack_48)
  ;
  func_0x0001000834e4(&puStack_68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = &UNK_1105b8b20;
  func_0x000107c613fc(&UNK_1105b8b20,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  lStack_48 = 0x102c52670;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x42000000;
  puStack_58 = &UNK_1000f6b44;
  puStack_50 = &UNK_1105b8b60;
  ppuVar2 = &puStack_68;
  puStack_40 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  func_0x000107c61574(puStack_40);
  func_0x000107c4e528(0x4008000000000000,uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102c52418; end: 102c5246b;  */

void FUN_102c52418(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = param_7 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_7 + 0x30) + param_1 * 0x10);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3 = (undefined8 *)(*(long *)(param_7 + 0x38) + param_1 * 0x18);
  *puVar3 = param_4;
  puVar3[1] = param_5;
  puVar3[2] = param_6;
  if (!SCARRY8(*(long *)(param_7 + 0x10),1)) {
    *(long *)(param_7 + 0x10) = *(long *)(param_7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c5246c);
  (*pcVar2)();
}



/* Entry: 102c5246c; end: 102c52527;  */

void FUN_102c5246c(ulong param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000104040060();
  if ((param_1 & 1) != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    puVar1 = &UNK_1105b8b20;
    func_0x000107c613fc(&UNK_1105b8b20,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uStack_40 = 0x102c5264c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105b8b38;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4e528(0x4008000000000000,uVar3);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 102c52528; end: 102c52643;  */

undefined * FUN_102c52528(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f05270,&UNK_10db39880);
    puVar7 = puVar11;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar13 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar2 = puVar13[-4];
      uVar4 = puVar13[-3];
      uVar3 = puVar13[-2];
      uVar5 = puVar13[-1];
      uVar12 = *puVar13;
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      func_0x000107c615f0(uVar12);
      uVar8 = uVar2;
      uVar9 = uVar4;
      func_0x000100029284();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102c52640);
        (*pcVar6)();
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar9 + 0x40) = *(ulong *)(puVar7 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar10 = (undefined8 *)(*(long *)(puVar7 + 0x38) + uVar8 * 0x18);
      *puVar10 = uVar3;
      puVar10[1] = uVar5;
      puVar10[2] = uVar12;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102c52644);
        (*pcVar6)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      puVar11 = puVar11 + -1;
      puVar13 = puVar13 + 5;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar7);
  }
  return puVar7;
}



/* Entry: 102c52644; end: 102c5267f;  */

void FUN_102c52644(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(auStack_48,&UNK_1105c37f8,uVar1,&UNK_1105c37f8,uVar2,&PTR_DAT_1105c32f0,lVar3);
  if (lStack_38 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(auStack_48,&UNK_1105c3898,uVar1,&UNK_1105c3898,uVar2,&PTR_DAT_1105c3300,param_1);
    if (lStack_38 == 0) {
      return;
    }
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar3 != 0) {
      func_0x000107c61434(lStack_38);
      FUN_102c5246c();
      func_0x000107c61574(lVar3);
      func_0x000107c61430(lStack_38,2);
      return;
    }
  }
  func_0x000107c6142c(lStack_38);
  return;
}



/* Entry: 102c52680; end: 102c52867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c52680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar3 = _DAT_112f05298;
  puVar4 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar4[3] = 0x20;
  puVar4[2] = 0x10;
  puVar5 = puVar4;
  func_0x000103bb9d1c();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[4] = *puVar5;
  puVar4[5] = puVar6;
  func_0x000107c61434();
  func_0x000103bb9c00();
  puVar5 = (undefined8 *)puVar6[1];
  puVar4[6] = *puVar6;
  puVar4[7] = puVar5;
  func_0x000107c61434();
  func_0x000103bb9c38();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[8] = *puVar5;
  puVar4[9] = puVar6;
  func_0x000107c61434();
  func_0x000103bb9ffc();
  puVar5 = (undefined8 *)puVar6[1];
  puVar4[10] = *puVar6;
  puVar4[0xb] = puVar5;
  func_0x000107c61434();
  func_0x000103bb9c70();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[0xc] = *puVar5;
  puVar4[0xd] = puVar6;
  func_0x000107c61434();
  func_0x000103bb9d5c();
  puVar5 = (undefined8 *)puVar6[1];
  puVar4[0xe] = *puVar6;
  puVar4[0xf] = puVar5;
  func_0x000107c61434();
  func_0x000103bb4a30();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[0x10] = *puVar5;
  puVar4[0x11] = puVar6;
  func_0x000107c61434();
  func_0x000103bad390();
  puVar5 = (undefined8 *)puVar6[1];
  puVar4[0x12] = *puVar6;
  puVar4[0x13] = puVar5;
  func_0x000107c61434();
  func_0x000103bb5854();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[0x14] = *puVar5;
  puVar4[0x15] = puVar6;
  func_0x000107c61434();
  func_0x000103bb588c();
  puVar5 = (undefined8 *)puVar6[1];
  puVar4[0x16] = *puVar6;
  puVar4[0x17] = puVar5;
  func_0x000107c61434();
  func_0x000103b81358();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[0x18] = *puVar5;
  puVar4[0x19] = puVar6;
  func_0x000107c61434();
  func_0x000103b81420();
  puVar5 = (undefined8 *)puVar6[1];
  puVar4[0x1a] = *puVar6;
  puVar4[0x1b] = puVar5;
  func_0x000107c61434();
  func_0x000103b81458();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[0x1c] = *puVar5;
  puVar4[0x1d] = puVar6;
  func_0x000107c61434();
  func_0x000103bb6ab4();
  puVar5 = (undefined8 *)puVar6[1];
  puVar4[0x1e] = *puVar6;
  puVar4[0x1f] = puVar5;
  func_0x000107c61434();
  func_0x000103bb9580();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[0x20] = *puVar5;
  puVar4[0x21] = puVar6;
  func_0x000107c61434();
  func_0x000103bba564();
  uVar1 = puVar6[1];
  puVar4[0x22] = *puVar6;
  puVar4[0x23] = uVar1;
  *(undefined8 **)(unaff_x20 + lVar3) = puVar4;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f05278);
  *puVar4 = param_1;
  puVar4[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f05280) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f05288) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f05290) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434();
  func_0x000107c61154(&stack0xffffffffffffff90,puVar2);
  return;
}



/* Entry: 102c52868; end: 102c528c7; -[_TtC28AdPagePlaybackImplementation30AdOperaPlayerPageEventListener init] */

void FUN_102c52868(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPagePlaybackImplementation.AdOperaPlayerPageEventListener",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c52894);
  (*pcVar1)();
}



/* Entry: 102c528c8; end: 102c52933; -[_TtC28AdPagePlaybackImplementation30AdOperaPlayerPageEventListener .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c528e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c528ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c528c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f05278 + 8))
  ;
  return;
}



/* Entry: 102c52934; end: 102c52953;  */

void FUN_102c52934(void)

{
  func_0x000107c61168(&PTR_PTR_112899cd8);
  return;
}



/* Entry: 102c52954; end: 102c52a93;  */

/* WARNING: Removing unreachable block (ram,0x000102c52a0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c52954(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  if (param_3 != 0) {
    uVar4 = param_2;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    uVar3 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
    uVar1 = *(ulong *)(unaff_x20 + _DAT_112f05278);
    uVar2 = ((ulong *)(unaff_x20 + _DAT_112f05278))[1];
    if (uVar3 == uVar1 && uVar4 == uVar2) {
      func_0x000107c6142c(uVar4);
    }
    else {
      func_0x000107c605b8(uVar3,uVar4,uVar1,uVar2,0);
      func_0x000107c6142c(uVar4);
      if ((uVar3 & 1) == 0) {
        return;
      }
    }
    FUN_102c52a94(auStack_78,param_1,param_2,param_4);
    func_0x0001000d224c(auStack_a8);
    func_0x0001000a8868(auStack_a8,uStack_90);
    func_0x0001000a8868(auStack_78,uStack_60);
    (**(code **)(lStack_88 + 0x10))();
    func_0x0001000834e4(auStack_a8);
    func_0x0001000834e4(auStack_78);
  }
  return;
}



/* Entry: 102c52a94; end: 102c5401f;  */

void FUN_102c52a94(byte *param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                  ,long *param_6,long param_7,long *param_8)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long **pplVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long **pplVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  byte bVar14;
  byte bVar15;
  ulong uVar16;
  byte bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  plVar2 = param_6;
  func_0x000103bb9d1c();
  plVar1 = (long *)*plVar2;
  if ((plVar1 == param_6 && plVar2[1] == param_7) ||
     (func_0x000107c605b8(plVar1,plVar2[1],param_6,param_7,0), ((ulong)plVar1 & 1) != 0)) {
    puVar12 = &UNK_1105c3760;
    ppuVar13 = &PTR_DAT_1105c32e0;
    goto LAB_102c52b18;
  }
  func_0x000103bb9c00();
  plVar2 = (long *)*plVar1;
  if ((plVar2 != param_6 || plVar1[1] != param_7) &&
     (func_0x000107c605b8(plVar2,plVar1[1],param_6,param_7,0), ((ulong)plVar2 & 1) == 0)) {
    func_0x000103bb9c38();
    plVar1 = (long *)*plVar2;
    if (((plVar1 == param_6) && (plVar2[1] == param_7)) ||
       (func_0x000107c605b8(plVar1,plVar2[1],param_6,param_7,0), ((ulong)plVar1 & 1) != 0)) {
      puVar12 = &UNK_1105c3820;
      ppuVar13 = &PTR_DAT_1105c32f8;
      goto LAB_102c52b18;
    }
    func_0x000103bb9ffc();
    plVar2 = (long *)*plVar1;
    if (((plVar2 == param_6) && (plVar1[1] == param_7)) ||
       (func_0x000107c605b8(plVar2,plVar1[1],param_6,param_7,0), ((ulong)plVar2 & 1) != 0)) {
      puVar12 = &UNK_1105c3780;
      ppuVar13 = &PTR_DAT_1105c32e8;
      goto LAB_102c52b18;
    }
    func_0x000103bb9c70();
    plVar1 = (long *)*plVar2;
    if (((plVar1 != param_6) || (plVar2[1] != param_7)) &&
       (func_0x000107c605b8(plVar1,plVar2[1],param_6,param_7,0), ((ulong)plVar1 & 1) == 0)) {
      func_0x000103bb9d5c();
      plVar2 = (long *)*plVar1;
      if (((plVar2 == param_6) && (plVar1[1] == param_7)) ||
         (func_0x000107c605b8(plVar2,plVar1[1],param_6,param_7,0), ((ulong)plVar2 & 1) != 0)) {
        puVar12 = &UNK_1105c38c8;
        ppuVar13 = &PTR_DAT_1105c3308;
        goto LAB_102c52b18;
      }
      func_0x000103bb4a30();
      plVar1 = (long *)*plVar2;
      if (((plVar1 == param_6) && (plVar2[1] == param_7)) ||
         (func_0x000107c605b8(plVar1,plVar2[1],param_6,param_7,0), ((ulong)plVar1 & 1) != 0)) {
        puVar12 = &UNK_1105c3a88;
        ppuVar13 = &PTR_DAT_1105c3318;
        goto LAB_102c52b18;
      }
      func_0x000103bad390();
      plVar2 = (long *)*plVar1;
      if (((plVar2 == param_6) && (plVar1[1] == param_7)) ||
         (func_0x000107c605b8(plVar2,plVar1[1],param_6,param_7,0), ((ulong)plVar2 & 1) != 0)) {
        puVar12 = &UNK_1105c3aa8;
        ppuVar13 = &PTR_DAT_1105c3320;
        goto LAB_102c52b18;
      }
      func_0x000103bb5854();
      plVar1 = (long *)*plVar2;
      if (((plVar1 != param_6) || (plVar2[1] != param_7)) &&
         (func_0x000107c605b8(plVar1,plVar2[1],param_6,param_7,0), ((ulong)plVar1 & 1) == 0)) {
        func_0x000103bb588c();
        plVar2 = (long *)*plVar1;
        if (((plVar2 != param_6) || (plVar1[1] != param_7)) &&
           (func_0x000107c605b8(plVar2,plVar1[1],param_6,param_7,0), ((ulong)plVar2 & 1) == 0)) {
          func_0x000103b81358();
          plVar1 = (long *)*plVar2;
          if (((plVar1 != param_6) || (plVar2[1] != param_7)) &&
             (func_0x000107c605b8(plVar1,plVar2[1],param_6,param_7,0), ((ulong)plVar1 & 1) == 0)) {
            func_0x000103b81420();
            plVar2 = (long *)*plVar1;
            if (((plVar2 != param_6) || (plVar1[1] != param_7)) &&
               (func_0x000107c605b8(plVar2,plVar1[1],param_6,param_7,0), ((ulong)plVar2 & 1) == 0))
            {
              func_0x000103b81458();
              plVar1 = (long *)*plVar2;
              if (((plVar1 != param_6) || (plVar2[1] != param_7)) &&
                 (func_0x000107c605b8(plVar1,plVar2[1],param_6,param_7,0), ((ulong)plVar1 & 1) == 0)
                 ) {
                func_0x000103bb6ab4();
                plVar2 = (long *)*plVar1;
                if (((plVar2 == param_6) && (plVar1[1] == param_7)) ||
                   (func_0x000107c605b8(plVar2,plVar1[1],param_6,param_7,0),
                   ((ulong)plVar2 & 1) != 0)) {
                  puVar12 = &UNK_1105c4060;
                  ppuVar13 = &PTR_DAT_1105c3390;
                  goto LAB_102c52b18;
                }
                func_0x000103bb9580();
                plVar1 = (long *)*plVar2;
                if (((plVar1 != param_6) || (plVar2[1] != param_7)) &&
                   (func_0x000107c605b8(plVar1,plVar2[1],param_6,param_7,0),
                   ((ulong)plVar1 & 1) == 0)) {
                  func_0x000103bba564();
                  plVar2 = (long *)*plVar1;
                  if (((plVar2 == param_6) && (plVar1[1] == param_7)) ||
                     (func_0x000107c605b8(plVar2,plVar1[1],param_6,param_7,0),
                     ((ulong)plVar2 & 1) != 0)) {
                    puVar12 = &UNK_1105c43e0;
                    ppuVar13 = &PTR_DAT_1105c33e8;
                    goto LAB_102c52b18;
                  }
                  plVar2 = (long *)0xd000000000000016;
                  lVar11 = -0x7ffffffef0efcb60;
                  uVar3 = 0xe2;
                  goto LAB_102c53470;
                }
                if ((param_8 == (long *)0x0) || (func_0x000103bb9728(), param_8[2] == 0)) {
LAB_102c53bc8:
                  lStack_a8 = 0;
                  plStack_b0 = (long *)0x0;
                  lStack_98 = 0;
                  uStack_a0 = 0;
LAB_102c53da8:
                  func_0x00010006e7f4(&plStack_b0);
                }
                else {
                  lVar11 = *plVar1;
                  uVar16 = plVar1[1];
                  func_0x000107c61434(param_8);
                  func_0x000107c61434(uVar16);
                  uVar10 = uVar16;
                  func_0x000100029284(lVar11);
                  if ((uVar10 & 1) == 0) {
                    func_0x000107c6142c(param_8);
                    lStack_a8 = 0;
                    plStack_b0 = (long *)0x0;
                    lStack_98 = 0;
                    uStack_a0 = 0;
                    func_0x000107c6142c(uVar16);
                    goto LAB_102c53da8;
                  }
                  func_0x0001000bb420(param_8[7] + lVar11 * 0x20,&plStack_b0);
                  func_0x000107c6142c(uVar16);
                  func_0x000107c6142c(param_8);
                  puVar12 = PTR___sypN_11034f1a8;
                  if (lStack_98 == 0) goto LAB_102c53da8;
                  pplVar4 = &plStack_b8;
                  func_0x000107c6147c(pplVar4,&plStack_b0,PTR___sypN_11034f1a8 + 8,
                                      PTR___sSbN_11034dd40,6);
                  if (((ulong)pplVar4 & 1) == 0) goto LAB_102c53db0;
                  uVar16 = (ulong)plStack_b8 & 0xff;
                  func_0x000103b816b0();
                  if (param_8[2] == 0) goto LAB_102c53bc8;
                  plVar2 = *pplVar4;
                  plVar1 = pplVar4[1];
                  func_0x000107c61434(param_8);
                  func_0x000107c61434(plVar1);
                  plVar5 = plVar1;
                  func_0x000100029284(plVar2);
                  if (((ulong)plVar5 & 1) == 0) {
                    func_0x000107c6142c(param_8);
                    param_2 = 0.0;
                    lStack_a8 = 0;
                    plStack_b0 = (long *)0x0;
                    lStack_98 = 0;
                    uStack_a0 = 0;
                  }
                  else {
                    func_0x0001000bb420(param_8[7] + (long)plVar2 * 0x20,&plStack_b0);
                    func_0x000107c6142c(plVar1);
                    plVar1 = param_8;
                  }
                  func_0x000107c6142c(plVar1);
                  if (lStack_98 == 0) goto LAB_102c53da8;
                  uVar3 = 0;
                  FUN_102c540dc(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
                  pplVar4 = &plStack_b8;
                  func_0x000107c6147c(pplVar4,&plStack_b0,puVar12 + 8,uVar3,6);
                  plVar2 = plStack_b8;
                  if (((ulong)pplVar4 & 1) != 0) {
                    func_0x000103b816bc();
                    if (param_8[2] == 0) {
                      lStack_a8 = 0;
                      plStack_b0 = (long *)0x0;
                      lStack_98 = 0;
                      uStack_a0 = 0;
                    }
                    else {
                      plVar1 = *pplVar4;
                      plVar5 = pplVar4[1];
                      func_0x000107c61434(param_8);
                      func_0x000107c61434(plVar5);
                      plVar7 = plVar5;
                      func_0x000100029284(plVar1);
                      if (((ulong)plVar7 & 1) == 0) {
                        func_0x000107c6142c(param_8);
                        param_2 = 0.0;
                        lStack_a8 = 0;
                        plStack_b0 = (long *)0x0;
                        lStack_98 = 0;
                        uStack_a0 = 0;
                      }
                      else {
                        func_0x0001000bb420(param_8[7] + (long)plVar1 * 0x20,&plStack_b0);
                        func_0x000107c6142c(plVar5);
                        plVar5 = param_8;
                      }
                      func_0x000107c6142c(plVar5);
                      if (lStack_98 != 0) {
                        uVar3 = 0;
                        FUN_102c540dc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
                        pplVar4 = &plStack_b8;
                        func_0x000107c6147c(pplVar4,&plStack_b0,puVar12 + 8,uVar3,6);
                        if (((ulong)pplVar4 & 1) != 0) {
                          func_0x000107c3ab34(plVar2);
                          puVar12 = PTR__OBJC_CLASS___UIScreen_1126aea10;
                          dVar18 = param_2;
                          dVar20 = param_3;
                          func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
                          func_0x000107c4c194();
                          func_0x000107c61180();
                          func_0x000107c3ec60();
                          func_0x000107c61170(puVar12);
                          dVar19 = dVar18;
                          func_0x000107c609cc(dVar18,dVar20,param_4,param_5);
                          func_0x000107c609b0(dVar18,dVar20,param_4,param_5);
                          plVar1 = plStack_b8;
                          func_0x000107c5d38c();
                          *(undefined **)(param_1 + 0x18) = &UNK_1105c43b0;
                          *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105c33e0;
                          puVar12 = &UNK_1105b8ba8;
                          func_0x000107c613fc(&UNK_1105b8ba8,0x40,7);
                          *(undefined **)param_1 = puVar12;
                          func_0x000107c61170(plVar2);
                          func_0x000107c61170(plStack_b8);
                          *(ulong *)(puVar12 + 0x10) = uVar16;
                          *(long **)(puVar12 + 0x18) = plVar1;
                          *(double *)(puVar12 + 0x20) = param_2;
                          *(double *)(puVar12 + 0x28) = param_3;
                          *(double *)(puVar12 + 0x30) = param_2 / dVar19;
                          *(double *)(puVar12 + 0x38) = param_3 / dVar18;
                          return;
                        }
                        func_0x000107c61170(plVar2);
                        goto LAB_102c53db0;
                      }
                    }
                    func_0x000107c61170(plVar2);
                    goto LAB_102c53da8;
                  }
                }
LAB_102c53db0:
                plVar2 = (long *)0xd000000000000033;
                lVar11 = -0x7ffffffef0efcad0;
                uVar3 = 0xca;
                goto LAB_102c53470;
              }
              if ((param_8 == (long *)0x0) || (func_0x000103b81670(), param_8[2] == 0)) {
                lStack_a8 = 0;
                plStack_b0 = (long *)0x0;
                lStack_98 = 0;
                uStack_a0 = 0;
LAB_102c537d4:
                func_0x00010006e7f4(&plStack_b0);
              }
              else {
                lVar11 = *plVar1;
                uVar16 = plVar1[1];
                func_0x000107c61434(param_8);
                func_0x000107c61434(uVar16);
                uVar10 = uVar16;
                func_0x000100029284(lVar11);
                if ((uVar10 & 1) == 0) {
                  func_0x000107c6142c(param_8);
                  lStack_a8 = 0;
                  plStack_b0 = (long *)0x0;
                  lStack_98 = 0;
                  uStack_a0 = 0;
                  func_0x000107c6142c(uVar16);
                  goto LAB_102c537d4;
                }
                func_0x0001000bb420(param_8[7] + lVar11 * 0x20,&plStack_b0);
                func_0x000107c6142c(uVar16);
                func_0x000107c6142c(param_8);
                if (lStack_98 == 0) goto LAB_102c537d4;
                uVar3 = 0;
                FUN_102c540dc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
                pplVar4 = &plStack_b8;
                func_0x000107c6147c(pplVar4,&plStack_b0,PTR___sypN_11034f1a8 + 8,uVar3,6);
                if (((ulong)pplVar4 & 1) != 0) {
                  plVar2 = plStack_b8;
                  func_0x000107c49820();
                  *(undefined **)(param_1 + 0x18) = &UNK_1105c4208;
                  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105c33b0;
                  func_0x000107c61170(plStack_b8);
                  *(long **)param_1 = plVar2;
                  return;
                }
              }
              plStack_b0 = (long *)0x0;
              lStack_a8 = 0xe000000000000000;
              func_0x000107c602fc(0x1f);
              func_0x000107c6142c(lStack_a8);
              plStack_b0 = (long *)0xd00000000000001d;
              lStack_a8 = -0x7ffffffef0efca90;
              func_0x000107c5fb78(param_6,param_7);
              uVar3 = 0xbb;
              plVar2 = plStack_b0;
              lVar11 = lStack_a8;
              goto LAB_102c53470;
            }
            if ((param_8 == (long *)0x0) || (func_0x000103b815c8(), param_8[2] == 0)) {
              lStack_a8 = 0;
              plStack_b0 = (long *)0x0;
              lStack_98 = 0;
              uStack_a0 = 0;
LAB_102c535d0:
              func_0x00010006e7f4(&plStack_b0);
            }
            else {
              lVar11 = *plVar2;
              uVar16 = plVar2[1];
              func_0x000107c61434(param_8);
              func_0x000107c61434(uVar16);
              uVar10 = uVar16;
              func_0x000100029284(lVar11);
              if ((uVar10 & 1) == 0) {
                func_0x000107c6142c(param_8);
                lStack_a8 = 0;
                plStack_b0 = (long *)0x0;
                lStack_98 = 0;
                uStack_a0 = 0;
                func_0x000107c6142c(uVar16);
                goto LAB_102c535d0;
              }
              func_0x0001000bb420(param_8[7] + lVar11 * 0x20,&plStack_b0);
              func_0x000107c6142c(uVar16);
              func_0x000107c6142c(param_8);
              if (lStack_98 == 0) goto LAB_102c535d0;
              uVar3 = 0;
              FUN_102c540dc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar12 = PTR___sypN_11034f1a8;
              pplVar4 = &plStack_b8;
              func_0x000107c6147c(pplVar4,&plStack_b0,PTR___sypN_11034f1a8 + 8,uVar3,6);
              plVar2 = plStack_b8;
              if (((ulong)pplVar4 & 1) != 0) {
                plStack_c0 = plStack_b8;
                func_0x000103b81600();
                if (param_8[2] == 0) {
                  lStack_a8 = 0;
                  plStack_b0 = (long *)0x0;
                  lStack_98 = 0;
                  uStack_a0 = 0;
LAB_102c53a00:
                  func_0x00010006e7f4(&plStack_b0);
                }
                else {
                  plVar1 = *pplVar4;
                  plVar5 = pplVar4[1];
                  func_0x000107c61434(param_8);
                  func_0x000107c61434(plVar5);
                  plVar7 = plVar5;
                  func_0x000100029284(plVar1);
                  if (((ulong)plVar7 & 1) == 0) {
                    func_0x000107c6142c(param_8);
                    lStack_a8 = 0;
                    plStack_b0 = (long *)0x0;
                    lStack_98 = 0;
                    uStack_a0 = 0;
                  }
                  else {
                    func_0x0001000bb420(param_8[7] + (long)plVar1 * 0x20,&plStack_b0);
                    func_0x000107c6142c(plVar5);
                    plVar5 = param_8;
                  }
                  func_0x000107c6142c(plVar5);
                  if (lStack_98 == 0) goto LAB_102c53a00;
                  pplVar4 = &plStack_b8;
                  func_0x000107c6147c(pplVar4,&plStack_b0,puVar12 + 8,uVar3,6);
                  plVar1 = plStack_b8;
                  if (((ulong)pplVar4 & 1) != 0) {
                    func_0x000103b81638();
                    if (param_8[2] == 0) {
                      lStack_a8 = 0;
                      plStack_b0 = (long *)0x0;
                      lStack_98 = 0;
                      uStack_a0 = 0;
                    }
                    else {
                      plVar5 = *pplVar4;
                      plVar7 = pplVar4[1];
                      func_0x000107c61434(param_8);
                      func_0x000107c61434(plVar7);
                      plVar6 = plVar7;
                      func_0x000100029284(plVar5);
                      if (((ulong)plVar6 & 1) == 0) {
                        func_0x000107c6142c(param_8);
                        lStack_a8 = 0;
                        plStack_b0 = (long *)0x0;
                        lStack_98 = 0;
                        uStack_a0 = 0;
                      }
                      else {
                        func_0x0001000bb420(param_8[7] + (long)plVar5 * 0x20,&plStack_b0);
                        func_0x000107c6142c(plVar7);
                        plVar7 = param_8;
                      }
                      func_0x000107c6142c(plVar7);
                      if (lStack_98 != 0) {
                        pplVar4 = &plStack_b8;
                        func_0x000107c6147c(pplVar4,&plStack_b0,puVar12 + 8,uVar3,6);
                        if (((ulong)pplVar4 & 1) != 0) {
                          plVar5 = plVar2;
                          func_0x000107c49820();
                          plVar7 = plVar1;
                          func_0x000107c49820();
                          plVar6 = plStack_b8;
                          func_0x000107c3ebcc();
                          *(undefined **)(param_1 + 0x18) = &UNK_1105c41d8;
                          *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105c33a8;
                          func_0x000107c61170(plVar2);
                          func_0x000107c61170(plVar1);
                          func_0x000107c61170(plStack_b8);
                          *(long **)param_1 = plVar5;
                          *(long **)(param_1 + 8) = plVar7;
                          param_1[0x10] = (byte)plVar6;
                          return;
                        }
                        goto LAB_102c53cd8;
                      }
                    }
                    func_0x00010006e7f4(&plStack_b0);
LAB_102c53cd8:
                    plStack_b0 = (long *)0x0;
                    lStack_a8 = 0xe000000000000000;
                    func_0x000107c602fc(0x23);
                    func_0x000107c6142c(lStack_a8);
                    plStack_b0 = (long *)0xd000000000000021;
                    lStack_a8 = -0x7ffffffef0efca30;
                    func_0x000107c5fb78(param_6,param_7);
                    plVar5 = plStack_b0;
                    lVar11 = lStack_a8;
                    func_0x0001048db000(plStack_b0,lStack_a8,0xd00000000000006a,0x800000010f1034c0,
                                        0xb1);
                    plVar7 = plVar5;
                    func_0x0001018e0ad8();
                    func_0x000107c613f8(&UNK_1107b6098,plVar7,0,0);
                    *plVar7 = (long)plVar5;
                    plVar7[1] = lVar11;
                    func_0x000107c61654();
                    func_0x000107c61170(plVar2);
                    func_0x000107c61170(plVar1);
                    return;
                  }
                }
                plStack_b0 = (long *)0x0;
                lStack_a8 = 0xe000000000000000;
                func_0x000107c602fc(0x20);
                func_0x000107c6142c(lStack_a8);
                plStack_b0 = (long *)0xd00000000000001e;
                lStack_a8 = -0x7ffffffef0efca50;
                func_0x000107c5fb78(param_6,param_7);
                uVar3 = 0xad;
LAB_102c53b84:
                plVar2 = plStack_b0;
                lVar11 = lStack_a8;
                func_0x0001048db000(plStack_b0,lStack_a8,0xd00000000000006a,0x800000010f1034c0,uVar3
                                   );
                plVar1 = plVar2;
                func_0x0001018e0ad8();
                func_0x000107c613f8(&UNK_1107b6098,plVar1,0,0);
                *plVar1 = (long)plVar2;
                plVar1[1] = lVar11;
                func_0x000107c61654();
                func_0x000107c61170(plStack_c0);
                return;
              }
            }
            plStack_b0 = (long *)0x0;
            lStack_a8 = 0xe000000000000000;
            func_0x000107c602fc(0x20);
            func_0x000107c6142c(lStack_a8);
            plStack_b0 = (long *)0xd00000000000001e;
            lStack_a8 = -0x7ffffffef0efca70;
            func_0x000107c5fb78(param_6,param_7);
            uVar3 = 0xa9;
            plVar2 = plStack_b0;
            lVar11 = lStack_a8;
            goto LAB_102c53470;
          }
          if ((param_8 == (long *)0x0) || (func_0x000103bb63a0(), param_8[2] == 0)) {
            lStack_a8 = 0;
            plStack_b0 = (long *)0x0;
            lStack_98 = 0;
            uStack_a0 = 0;
LAB_102c533fc:
            func_0x00010006e7f4(&plStack_b0);
          }
          else {
            lVar11 = *plVar1;
            uVar16 = plVar1[1];
            func_0x000107c61434(param_8);
            func_0x000107c61434(uVar16);
            uVar10 = uVar16;
            func_0x000100029284(lVar11);
            if ((uVar10 & 1) == 0) {
              func_0x000107c6142c(param_8);
              lStack_a8 = 0;
              plStack_b0 = (long *)0x0;
              lStack_98 = 0;
              uStack_a0 = 0;
              func_0x000107c6142c(uVar16);
              goto LAB_102c533fc;
            }
            func_0x0001000bb420(param_8[7] + lVar11 * 0x20,&plStack_b0);
            func_0x000107c6142c(uVar16);
            func_0x000107c6142c(param_8);
            if (lStack_98 == 0) goto LAB_102c533fc;
            uVar3 = 0;
            FUN_102c540dc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            puVar12 = PTR___sypN_11034f1a8;
            pplVar4 = &plStack_b8;
            pplVar9 = &plStack_b0;
            func_0x000107c6147c(pplVar4,pplVar9,PTR___sypN_11034f1a8 + 8,uVar3,6);
            plVar2 = plStack_b8;
            uVar8 = (uint)pplVar9;
            if (((ulong)pplVar4 & 1) != 0) {
              plStack_c0 = plStack_b8;
              plVar1 = plStack_b8;
              func_0x000107c5d388();
              FUN_102bc7e80();
              if ((uVar8 & 0xff) != 1) {
                uVar16 = (long)plVar1 - 1;
                if ((5 < uVar16) || ((0x3bU >> (ulong)((uint)uVar16 & 0x1f) & 1) == 0)) {
                  plStack_b0 = (long *)0x0;
                  lStack_a8 = -0x2000000000000000;
                  func_0x000107c602fc(0x28);
                  func_0x000107c5fb78(0xd00000000000001f,0x800000010f103630);
                  func_0x000107c603d0(&plStack_b8,&plStack_b0,&UNK_11076eeb0,
                                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08
                                     );
                  func_0x000107c5fb78(0x20726f6620,0xe500000000000000);
                  func_0x000107c5fb78(param_6,param_7);
                  uVar3 = 0x91;
                  goto LAB_102c53b84;
                }
                func_0x000103b81558();
                if (param_8[2] == 0) {
                  lStack_a8 = 0;
                  plStack_b0 = (long *)0x0;
                  lStack_98 = 0;
                  uStack_a0 = 0;
LAB_102c53b10:
                  func_0x00010006e7f4(&plStack_b0);
                }
                else {
                  lVar11 = *plVar1;
                  plVar1 = (long *)plVar1[1];
                  func_0x000107c61434(param_8);
                  func_0x000107c61434(plVar1);
                  plVar5 = plVar1;
                  func_0x000100029284(lVar11);
                  if (((ulong)plVar5 & 1) == 0) {
                    func_0x000107c6142c(param_8);
                    lStack_a8 = 0;
                    plStack_b0 = (long *)0x0;
                    lStack_98 = 0;
                    uStack_a0 = 0;
                  }
                  else {
                    func_0x0001000bb420(param_8[7] + lVar11 * 0x20,&plStack_b0);
                    func_0x000107c6142c(plVar1);
                    plVar1 = param_8;
                  }
                  func_0x000107c6142c(plVar1);
                  if (lStack_98 == 0) goto LAB_102c53b10;
                  pplVar4 = &plStack_b8;
                  func_0x000107c6147c(pplVar4,&plStack_b0,puVar12 + 8,uVar3,6);
                  if (((ulong)pplVar4 & 1) != 0) {
                    plVar1 = plStack_b8;
                    func_0x000107c49820();
                    if ((long)plVar1 + 1U < 3) {
                      *(undefined **)(param_1 + 0x18) = &UNK_1105c3940;
                      *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105c3310;
                      func_0x000107c61170(plVar2);
                      func_0x000107c61170(plStack_b8);
                      *param_1 = (byte)(0x10004000203 >> (uVar16 * 8 & 0x38));
                      param_1[1] = (byte)((long)plVar1 + 1U);
                      return;
                    }
                    func_0x000107c61170(plStack_b8);
                  }
                }
                plStack_b0 = (long *)0x0;
                lStack_a8 = 0xe000000000000000;
                func_0x000107c602fc(0x25);
                func_0x000107c6142c(lStack_a8);
                plStack_b0 = (long *)0xd000000000000023;
                lStack_a8 = -0x7ffffffef0efc9b0;
                func_0x000107c5fb78(param_6,param_7);
                uVar3 = 0x98;
                goto LAB_102c53b84;
              }
              func_0x000107c61170(plVar2);
            }
          }
          plStack_b0 = (long *)0x0;
          lStack_a8 = 0xe000000000000000;
          func_0x000107c602fc(0x24);
          func_0x000107c6142c(lStack_a8);
          plStack_b0 = (long *)0xd000000000000022;
          lStack_a8 = -0x7ffffffef0efca00;
          func_0x000107c5fb78(param_6,param_7);
          uVar3 = 0x7b;
          plVar2 = plStack_b0;
          lVar11 = lStack_a8;
LAB_102c53470:
          func_0x0001048db000(plVar2,lVar11,0xd00000000000006a,0x800000010f1034c0,uVar3);
          plVar1 = plVar2;
          func_0x0001018e0ad8();
          func_0x000107c613f8(&UNK_1107b6098,plVar1,0,0);
          *plVar1 = (long)plVar2;
          plVar1[1] = lVar11;
          func_0x000107c61654();
          return;
        }
      }
      puVar12 = &UNK_1105c3ac8;
      ppuVar13 = &PTR_DAT_1105c3328;
LAB_102c52b18:
      *(undefined **)(param_1 + 0x18) = puVar12;
      *(undefined ***)(param_1 + 0x20) = ppuVar13;
      return;
    }
    if (param_8 == (long *)0x0) {
      lStack_a8 = 0;
      plStack_b0 = (long *)0x0;
      lStack_98 = 0;
      uStack_a0 = 0;
      func_0x00010006e7f4(&plStack_b0);
      lStack_a8 = 0;
      plStack_b0 = (long *)0x0;
      lStack_98 = 0;
      uStack_a0 = 0;
      func_0x00010006e7f4(&plStack_b0);
      lStack_a8 = 0;
      plStack_b0 = (long *)0x0;
      lStack_98 = 0;
      uStack_a0 = 0;
      func_0x00010006e7f4(&plStack_b0);
      bVar17 = 0;
      bVar14 = 0;
      bVar15 = 0;
LAB_102c53020:
      lStack_a8 = 0;
      plStack_b0 = (long *)0x0;
      lStack_98 = 0;
      uStack_a0 = 0;
LAB_102c53028:
      func_0x00010006e7f4(&plStack_b0);
    }
    else {
      func_0x000103bba310();
      if (param_8[2] == 0) {
        lStack_a8 = 0;
        plStack_b0 = (long *)0x0;
        lStack_98 = 0;
        uStack_a0 = 0;
LAB_102c52e54:
        pplVar4 = &plStack_b0;
        func_0x00010006e7f4();
        bVar14 = 0;
      }
      else {
        lVar11 = *plVar1;
        uVar16 = plVar1[1];
        func_0x000107c61434(param_8);
        func_0x000107c61434(uVar16);
        uVar10 = uVar16;
        func_0x000100029284(lVar11);
        if ((uVar10 & 1) == 0) {
          func_0x000107c6142c(param_8);
          lStack_a8 = 0;
          plStack_b0 = (long *)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
          func_0x000107c6142c(uVar16);
          goto LAB_102c52e54;
        }
        func_0x0001000bb420(param_8[7] + lVar11 * 0x20,&plStack_b0);
        func_0x000107c6142c(uVar16);
        func_0x000107c6142c(param_8);
        if (lStack_98 == 0) goto LAB_102c52e54;
        pplVar4 = &plStack_b8;
        func_0x000107c6147c(pplVar4,&plStack_b0,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
        bVar14 = (byte)pplVar4 & (byte)plStack_b8;
      }
      func_0x000103bb740c();
      if (param_8[2] == 0) {
        lStack_a8 = 0;
        plStack_b0 = (long *)0x0;
        lStack_98 = 0;
        uStack_a0 = 0;
LAB_102c52f0c:
        pplVar4 = &plStack_b0;
        func_0x00010006e7f4();
        bVar15 = 0;
      }
      else {
        plVar2 = *pplVar4;
        plVar1 = pplVar4[1];
        func_0x000107c61434(param_8);
        func_0x000107c61434(plVar1);
        plVar5 = plVar1;
        func_0x000100029284(plVar2);
        if (((ulong)plVar5 & 1) == 0) {
          func_0x000107c6142c(param_8);
          lStack_a8 = 0;
          plStack_b0 = (long *)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          func_0x0001000bb420(param_8[7] + (long)plVar2 * 0x20,&plStack_b0);
          func_0x000107c6142c(plVar1);
          plVar1 = param_8;
        }
        func_0x000107c6142c(plVar1);
        if (lStack_98 == 0) goto LAB_102c52f0c;
        pplVar4 = &plStack_b8;
        func_0x000107c6147c(pplVar4,&plStack_b0,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
        bVar15 = (byte)pplVar4 & (byte)plStack_b8;
      }
      func_0x000103bba37c();
      if (param_8[2] == 0) {
        lStack_a8 = 0;
        plStack_b0 = (long *)0x0;
        lStack_98 = 0;
        uStack_a0 = 0;
LAB_102c52fc4:
        pplVar4 = &plStack_b0;
        func_0x00010006e7f4();
        bVar17 = 0;
      }
      else {
        plVar2 = *pplVar4;
        plVar1 = pplVar4[1];
        func_0x000107c61434(param_8);
        func_0x000107c61434(plVar1);
        plVar5 = plVar1;
        func_0x000100029284(plVar2);
        if (((ulong)plVar5 & 1) == 0) {
          func_0x000107c6142c(param_8);
          lStack_a8 = 0;
          plStack_b0 = (long *)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          func_0x0001000bb420(param_8[7] + (long)plVar2 * 0x20,&plStack_b0);
          func_0x000107c6142c(plVar1);
          plVar1 = param_8;
        }
        func_0x000107c6142c(plVar1);
        if (lStack_98 == 0) goto LAB_102c52fc4;
        pplVar4 = &plStack_b8;
        func_0x000107c6147c(pplVar4,&plStack_b0,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
        bVar17 = (byte)pplVar4 & (byte)plStack_b8;
      }
      func_0x000103bb678c();
      if (param_8[2] == 0) goto LAB_102c53020;
      plVar2 = *pplVar4;
      plVar1 = pplVar4[1];
      func_0x000107c61434(param_8);
      func_0x000107c61434(plVar1);
      plVar5 = plVar1;
      func_0x000100029284(plVar2);
      if (((ulong)plVar5 & 1) == 0) {
        func_0x000107c6142c(param_8);
        lStack_a8 = 0;
        plStack_b0 = (long *)0x0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x0001000bb420(param_8[7] + (long)plVar2 * 0x20,&plStack_b0);
        func_0x000107c6142c(plVar1);
        plVar1 = param_8;
      }
      func_0x000107c6142c(plVar1);
      if (lStack_98 == 0) goto LAB_102c53028;
      pplVar4 = &plStack_b8;
      func_0x000107c6147c(pplVar4,&plStack_b0,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if ((int)pplVar4 != 0) goto LAB_102c53034;
    }
    plStack_b8._0_1_ = 0;
LAB_102c53034:
    *(undefined **)(param_1 + 0x18) = &UNK_1105c3898;
    *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105c3300;
    *param_1 = bVar14;
    param_1[1] = bVar15;
    param_1[2] = bVar17;
    param_1[3] = (byte)plStack_b8;
    return;
  }
  if ((param_8 == (long *)0x0) || (func_0x000103bba310(), param_8[2] == 0)) {
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
LAB_102c52c78:
    func_0x00010006e7f4(&plStack_b0);
  }
  else {
    lVar11 = *plVar2;
    uVar16 = plVar2[1];
    func_0x000107c61434(uVar16);
    func_0x000107c61434(param_8);
    uVar10 = uVar16;
    func_0x000100029284(lVar11);
    if ((uVar10 & 1) == 0) {
      func_0x000107c6142c(param_8);
      lStack_a8 = 0;
      plStack_b0 = (long *)0x0;
      lStack_98 = 0;
      uStack_a0 = 0;
      func_0x000107c6142c(uVar16);
      goto LAB_102c52c78;
    }
    func_0x0001000bb420(param_8[7] + lVar11 * 0x20,&plStack_b0);
    func_0x000107c6142c(uVar16);
    func_0x000107c6142c(param_8);
    if (lStack_98 == 0) goto LAB_102c52c78;
    pplVar4 = &plStack_b8;
    func_0x000107c6147c(pplVar4,&plStack_b0,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if ((int)pplVar4 != 0) goto LAB_102c52c84;
  }
  plStack_b8._0_1_ = 0;
LAB_102c52c84:
  *(undefined **)(param_1 + 0x18) = &UNK_1105c37f8;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105c32f0;
  *param_1 = (byte)plStack_b8;
  return;
}



/* Entry: 102c54020; end: 102c540db; -[_TtC28AdPagePlaybackImplementation30AdOperaPlayerPageEventListener operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102c540c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c540c4) */

void FUN_102c54020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c52954(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c540dc; end: 102c5411b;  */

void FUN_102c540dc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102c5411c; end: 102c5434f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c5411c(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113078b60);
  uVar4 = *(undefined8 *)(param_3 + _DAT_112f0ded0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068e80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113068e80))[1];
  uVar5 = *(undefined8 *)(param_4 + _DAT_11304a478);
  FUN_102c52934(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar1);
  func_0x000107c615f0(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  FUN_102c52680(uVar2,uVar1,uVar3,uVar4,uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return unaff_x20;
}



/* Entry: 102c54350; end: 102c543b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c54350(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f05280);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f05298);
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c3d744(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c543b4; end: 102c543ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c543b4(void)

{
  long unaff_x20;
  
  func_0x000107c4ff64(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f05280));
  return 0;
}



/* Entry: 102c54400; end: 102c54467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c54400(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112f05280);
  uVar1 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112f05298);
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c3d744(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c54468; end: 102c544f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c54468(void)

{
  long *unaff_x20;
  
  func_0x000107c4ff64(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112f05280));
  return 0;
}



/* Entry: 102c544f8; end: 102c54653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c544f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  
  puVar1 = *(undefined **)(param_1 + _DAT_113079c48);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
    func_0x000107c61434();
    puVar1 = (undefined *)0x0;
  }
  puStack_48 = puVar2;
  func_0x000107c61438(puVar1,2);
  puVar1 = puVar2;
  FUN_102c54654(puVar2);
  func_0x000107c6142c(puVar2);
  FUN_102c54e98(puVar1,&puStack_48);
  func_0x000107c6142c(puVar1);
  FUN_102c55c18();
  FUN_102c55dbc();
  func_0x000107c6142c(puVar1);
  puVar1 = *(undefined **)(param_1 + _DAT_113079c50);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61434(puVar1);
  FUN_102c56184();
  FUN_102c55548();
  func_0x000107c6142c(puVar1);
  func_0x000102c56288();
  FUN_102c55dbc();
  func_0x000107c6142c(puVar1);
  puVar1 = puStack_48;
  uVar3 = 0;
  func_0x000104445474(0);
  func_0x000107c610f8();
  func_0x000104445210(puVar1,puVar2,uVar3);
  return;
}



/* Entry: 102c54654; end: 102c54767;  */

undefined * FUN_102c54654(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  FUN_102c56758(unaff_x20 + 0x10,lVar3);
  (**(code **)(lVar6 + 0x10))(lVar3,lVar6);
  lVar6 = *(long *)(lVar3 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c6142c();
    puStack_68 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    lVar5 = lVar3 + 0x20;
    do {
      FUN_102c56714(lVar5,auStack_98);
      lVar2 = lStack_70;
      uVar1 = uStack_80;
      FUN_102c56758(auStack_98,uStack_80);
      uVar4 = param_1;
      (**(code **)(lVar2 + 8))(param_1,uVar1,lVar2);
      FUN_102c54768();
      func_0x000107c6142c(uVar4);
      FUN_102c567d8(auStack_98);
      lVar5 = lVar5 + 0x30;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar3);
  }
  return puStack_68;
}



/* Entry: 102c54768; end: 102c54e97;  */

void FUN_102c54768(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 *puStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_b8 [32];
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [40];
  
  puVar20 = (ulong *)(param_1 + 0x40);
  uVar17 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar22 = 0xffffffffffffffff;
  if (-uVar17 < 0x40) {
    uVar22 = ~(-1L << (-uVar17 & 0x3f));
  }
  uVar22 = uVar22 & *puVar20;
  lVar8 = param_1;
  func_0x000107c61434();
  lVar11 = 0;
  lVar19 = lVar11;
  do {
    while (uVar22 == 0) {
      bVar7 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102c54e78);
        (*pcVar6)();
      }
      if ((long)(0x3f - uVar17 >> 6) <= lVar11) {
        func_0x000100216694(param_1,puVar20,~uVar17,lVar19,0);
        return;
      }
      uVar22 = puVar20[lVar11];
    }
    uVar10 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar11 << 6;
    puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
    uVar10 = *puVar1;
    uVar4 = puVar1[1];
    uStack_98 = uVar10;
    uStack_90 = uVar4;
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar12 * 0x20,auStack_88);
    func_0x0001000bb420(auStack_88,auStack_b8);
    uVar12 = *param_2;
    lVar19 = *(long *)(uVar12 + 0x10);
    func_0x000107c61434(uVar4);
    if (lVar19 != 0) {
      func_0x000107c61434(uVar12);
      uVar23 = uVar10;
      uVar15 = uVar4;
      func_0x000100029284(uVar10);
      if ((uVar15 & 1) == 0) {
        func_0x000107c6142c(uVar12);
      }
      else {
        func_0x0001000bb420(*(long *)(uVar12 + 0x38) + uVar23 * 0x20,&uStack_140);
        func_0x000107c6142c(uVar12);
        func_0x000100102924(&uStack_140,&uStack_e0);
        puStack_f8 = &UNK_11065d188;
        ppuStack_f0 = &PTR_DAT_11065d0f0;
        uStack_110 = CONCAT71(uStack_110._1_7_,5);
        puStack_120 = &uStack_e0;
        uStack_130 = uVar10;
        uStack_128 = uVar4;
        puStack_118 = auStack_88;
        func_0x0001034e2644(&uStack_110,param_3,&uStack_140,0,0,param_4);
        FUN_102c567d8(&uStack_110);
        FUN_102c567d8(auStack_b8);
        func_0x000100102924(&uStack_e0,auStack_b8);
      }
    }
    func_0x0001000bb420(auStack_b8,&uStack_140);
    uStack_d8 = uStack_138;
    uStack_e0 = uStack_140;
    uStack_c8 = uStack_128;
    uStack_d0 = uStack_130;
    if (uStack_128 == 0) {
      func_0x000107c61434(uVar4);
      FUN_102c5677c(&uStack_e0,0x112d387f8,&UNK_10d902650);
      func_0x000107c61434(uVar12);
      uVar23 = uVar4;
      func_0x000100029284();
      func_0x000107c6142c(uVar12);
      if ((uVar23 & 1) == 0) {
        uStack_108 = 0;
        uStack_110 = 0;
        puStack_f8 = (undefined *)0x0;
        uStack_100 = 0;
      }
      else {
        uVar23 = *param_2;
        func_0x000107c61558();
        uVar12 = *param_2;
        if ((uVar23 & 1) == 0) {
          func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
          uVar23 = uVar12;
          func_0x000107c6048c();
          if (*(long *)(uVar12 + 0x10) != 0) {
            lVar19 = uVar12 + 0x40;
            uVar15 = (1L << ((ulong)*(byte *)(uVar23 + 0x20) & 0x3f)) + 0x3fU >> 6;
            if ((uVar23 != uVar12) || (lVar19 + uVar15 * 8 <= uVar23 + 0x40)) {
              func_0x000107c610b8(uVar23 + 0x40,lVar19,uVar15 << 3);
            }
            lVar21 = 0;
            *(undefined8 *)(uVar23 + 0x10) = *(undefined8 *)(uVar12 + 0x10);
            uVar15 = 1L << ((ulong)*(byte *)(uVar12 + 0x20) & 0x3f);
            uStack_190 = 0xffffffffffffffff;
            if ((*(byte *)(uVar12 + 0x20) & 0x3f) < 6) {
              uStack_190 = ~(-1L << (uVar15 & 0x3f));
            }
            uStack_190 = uStack_190 & *(ulong *)(uVar12 + 0x40);
            if (uStack_190 == 0) goto LAB_102c54d90;
            do {
              uVar9 = (uStack_190 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                      (uStack_190 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
              uStack_190 = uStack_190 - 1 & uStack_190;
              while( true ) {
                uVar9 = LZCOUNT(uVar9) | lVar21 << 6;
                lVar14 = uVar9 * 0x10;
                puVar2 = (undefined8 *)(*(long *)(uVar12 + 0x30) + lVar14);
                uVar3 = *puVar2;
                uVar5 = puVar2[1];
                lVar18 = uVar9 * 0x20;
                func_0x0001000bb420(*(long *)(uVar12 + 0x38) + lVar18,&uStack_110);
                puVar2 = (undefined8 *)(*(long *)(uVar23 + 0x30) + lVar14);
                *puVar2 = uVar3;
                puVar2[1] = uVar5;
                func_0x000100102924(&uStack_110,*(long *)(uVar23 + 0x38) + lVar18);
                func_0x000107c61434(uVar5);
                if (uStack_190 != 0) break;
LAB_102c54d90:
                do {
                  lVar14 = lVar21 + 1;
                  if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102c54e88);
                    (*pcVar6)();
                  }
                  if ((long)(uVar15 + 0x3f >> 6) <= lVar14) goto LAB_102c54e28;
                  uStack_190 = *(ulong *)(lVar19 + lVar14 * 8);
                  lVar21 = lVar21 + 1;
                } while (uStack_190 == 0);
                uVar9 = (uStack_190 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                        (uStack_190 & 0x5555555555555555) << 1;
                uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
                uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
                uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
                uStack_190 = uStack_190 - 1 & uStack_190;
                lVar21 = lVar14;
              }
            } while( true );
          }
LAB_102c54e28:
          func_0x000107c6142c(uVar12);
          uVar12 = uVar23;
          param_1 = lVar8;
        }
        func_0x000107c6142c(*(undefined8 *)(*(long *)(uVar12 + 0x30) + uVar10 * 0x10 + 8));
        func_0x000100102924(*(long *)(uVar12 + 0x38) + uVar10 * 0x20,&uStack_110);
        func_0x0001010f6278(uVar10,uVar12);
        *param_2 = uVar12;
      }
      func_0x000107c6142c(uVar4);
      FUN_102c5677c(&uStack_110,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000100102924(&uStack_e0,&uStack_110);
      func_0x000107c61434(uVar4);
      uVar9 = *param_2;
      func_0x000107c61558();
      uVar23 = *param_2;
      uVar12 = uVar10;
      uVar15 = uVar4;
      func_0x000100029284();
      uVar16 = (ulong)~(uint)uVar15 & 1;
      lVar19 = *(long *)(uVar23 + 0x10) + uVar16;
      if (SCARRY8(*(long *)(uVar23 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102c54e7c);
        (*pcVar6)();
      }
      if (*(long *)(uVar23 + 0x18) < lVar19) {
        func_0x000100102b0c(lVar19,uVar9);
        uVar12 = uVar10;
        uVar9 = uVar4;
        func_0x000100029284();
        if (((uint)uVar15 & 1) != ((uint)uVar9 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102c54e98);
          (*pcVar6)();
        }
joined_r0x000102c54cbc:
        if ((uVar15 & 1) != 0) goto LAB_102c547ec;
LAB_102c54acc:
        lVar19 = uVar23 + (uVar12 >> 6) * 8;
        *(ulong *)(lVar19 + 0x40) = *(ulong *)(lVar19 + 0x40) | 1L << (uVar12 & 0x3f);
        puVar1 = (ulong *)(*(long *)(uVar23 + 0x30) + uVar12 * 0x10);
        *puVar1 = uVar10;
        puVar1[1] = uVar4;
        func_0x000100102924(&uStack_110,*(long *)(uVar23 + 0x38) + uVar12 * 0x20);
        if (SCARRY8(*(long *)(uVar23 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102c54e80);
          (*pcVar6)();
        }
        *(long *)(uVar23 + 0x10) = *(long *)(uVar23 + 0x10) + 1;
      }
      else {
        if ((uVar9 & 1) == 0) {
          func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
          uVar9 = uVar23;
          func_0x000107c6048c();
          if (*(long *)(uVar23 + 0x10) != 0) {
            lVar19 = uVar23 + 0x40;
            uVar16 = (1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f)) + 0x3fU >> 6;
            if ((uVar9 != uVar23) || (lVar19 + uVar16 * 8 <= uVar9 + 0x40)) {
              func_0x000107c610b8(uVar9 + 0x40,lVar19,uVar16 << 3);
            }
            lVar21 = 0;
            *(undefined8 *)(uVar9 + 0x10) = *(undefined8 *)(uVar23 + 0x10);
            uVar16 = 1L << ((ulong)*(byte *)(uVar23 + 0x20) & 0x3f);
            uStack_198 = 0xffffffffffffffff;
            if ((*(byte *)(uVar23 + 0x20) & 0x3f) < 6) {
              uStack_198 = ~(-1L << (uVar16 & 0x3f));
            }
            uStack_198 = uStack_198 & *(ulong *)(uVar23 + 0x40);
            if (uStack_198 == 0) goto LAB_102c54c10;
            do {
              uVar13 = (uStack_198 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       (uStack_198 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
              uStack_198 = uStack_198 - 1 & uStack_198;
              while( true ) {
                uVar13 = LZCOUNT(uVar13) | lVar21 << 6;
                lVar18 = uVar13 * 0x10;
                puVar2 = (undefined8 *)(*(long *)(uVar23 + 0x30) + lVar18);
                uVar3 = *puVar2;
                uVar5 = puVar2[1];
                lVar14 = uVar13 * 0x20;
                func_0x0001000bb420(*(long *)(uVar23 + 0x38) + lVar14,&uStack_e0);
                puVar2 = (undefined8 *)(*(long *)(uVar9 + 0x30) + lVar18);
                *puVar2 = uVar3;
                puVar2[1] = uVar5;
                func_0x000100102924(&uStack_e0,*(long *)(uVar9 + 0x38) + lVar14);
                func_0x000107c61434(uVar5);
                if (uStack_198 != 0) break;
LAB_102c54c10:
                do {
                  lVar14 = lVar21 + 1;
                  if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102c54e84);
                    (*pcVar6)();
                  }
                  if ((long)(uVar16 + 0x3f >> 6) <= lVar14) goto LAB_102c54cb0;
                  uStack_198 = *(ulong *)(lVar19 + lVar14 * 8);
                  lVar21 = lVar21 + 1;
                } while (uStack_198 == 0);
                uVar13 = (uStack_198 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                         (uStack_198 & 0x5555555555555555) << 1;
                uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
                uStack_198 = uStack_198 - 1 & uStack_198;
                lVar21 = lVar14;
              }
            } while( true );
          }
LAB_102c54cb0:
          func_0x000107c6142c(uVar23);
          uVar23 = uVar9;
          goto joined_r0x000102c54cbc;
        }
        if ((uVar15 & 1) == 0) goto LAB_102c54acc;
LAB_102c547ec:
        lVar19 = *(long *)(uVar23 + 0x38) + uVar12 * 0x20;
        FUN_102c567d8(lVar19);
        func_0x000100102924(&uStack_110,lVar19);
        func_0x000107c6142c(uVar4);
      }
      *param_2 = uVar23;
      param_1 = lVar8;
    }
    uVar22 = uVar22 - 1 & uVar22;
    FUN_102c567d8(auStack_b8);
    FUN_102c5677c(&uStack_98,0x112da9f08,&UNK_10da55920);
    lVar19 = lVar11;
  } while( true );
}



/* Entry: 102c54e98; end: 102c55547;  */

void FUN_102c54e98(long param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [32];
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [40];
  
  puVar20 = (ulong *)(param_1 + 0x40);
  uVar17 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar22 = 0xffffffffffffffff;
  if (-uVar17 < 0x40) {
    uVar22 = ~(-1L << (-uVar17 & 0x3f));
  }
  uVar22 = uVar22 & *puVar20;
  lVar8 = param_1;
  func_0x000107c61434();
  lVar11 = 0;
  lVar19 = lVar11;
  do {
    while (uVar22 == 0) {
      bVar7 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55528);
        (*pcVar6)();
      }
      if ((long)(0x3f - uVar17 >> 6) <= lVar11) {
        func_0x000100216694(param_1,puVar20,~uVar17,lVar19,0);
        return;
      }
      uVar22 = puVar20[lVar11];
    }
    uVar10 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar11 << 6;
    puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
    uVar10 = *puVar1;
    uVar4 = puVar1[1];
    uStack_98 = uVar10;
    uStack_90 = uVar4;
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar12 * 0x20,auStack_88);
    func_0x0001000bb420(auStack_88,auStack_b8);
    uVar12 = *param_2;
    lVar19 = *(long *)(uVar12 + 0x10);
    func_0x000107c61434(uVar4);
    if (lVar19 != 0) {
      func_0x000107c61434(uVar12);
      uVar23 = uVar4;
      func_0x000100029284(uVar10);
      func_0x000107c6142c(uVar12);
      if ((uVar23 & 1) != 0) {
        FUN_102c567d8(auStack_b8);
        func_0x0001000bb420(auStack_88,auStack_b8);
      }
    }
    func_0x0001000bb420(auStack_b8,&uStack_d8);
    uStack_118 = uStack_d0;
    uStack_120 = uStack_d8;
    lStack_108 = lStack_c0;
    uStack_110 = uStack_c8;
    if (lStack_c0 == 0) {
      func_0x000107c61434(uVar4);
      FUN_102c5677c(&uStack_120,0x112d387f8,&UNK_10d902650);
      func_0x000107c61434(uVar12);
      uVar23 = uVar4;
      func_0x000100029284();
      func_0x000107c6142c(uVar12);
      if ((uVar23 & 1) == 0) {
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
      }
      else {
        uVar23 = *param_2;
        func_0x000107c61558();
        uVar12 = *param_2;
        if ((uVar23 & 1) == 0) {
          func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
          uVar23 = uVar12;
          func_0x000107c6048c();
          if (*(long *)(uVar12 + 0x10) != 0) {
            lVar19 = uVar12 + 0x40;
            uVar15 = (1L << ((ulong)*(byte *)(uVar23 + 0x20) & 0x3f)) + 0x3fU >> 6;
            if ((uVar23 != uVar12) || (lVar19 + uVar15 * 8 <= uVar23 + 0x40)) {
              func_0x000107c610b8(uVar23 + 0x40,lVar19,uVar15 << 3);
            }
            lVar21 = 0;
            *(undefined8 *)(uVar23 + 0x10) = *(undefined8 *)(uVar12 + 0x10);
            uVar15 = 1L << ((ulong)*(byte *)(uVar12 + 0x20) & 0x3f);
            uStack_158 = 0xffffffffffffffff;
            if ((*(byte *)(uVar12 + 0x20) & 0x3f) < 6) {
              uStack_158 = ~(-1L << (uVar15 & 0x3f));
            }
            uStack_158 = uStack_158 & *(ulong *)(uVar12 + 0x40);
            if (uStack_158 == 0) goto LAB_102c55440;
            do {
              uVar9 = (uStack_158 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                      (uStack_158 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
              uStack_158 = uStack_158 - 1 & uStack_158;
              while( true ) {
                uVar9 = LZCOUNT(uVar9) | lVar21 << 6;
                lVar18 = uVar9 * 0x10;
                puVar2 = (undefined8 *)(*(long *)(uVar12 + 0x30) + lVar18);
                uVar3 = *puVar2;
                uVar5 = puVar2[1];
                lVar14 = uVar9 * 0x20;
                func_0x0001000bb420(*(long *)(uVar12 + 0x38) + lVar14,&uStack_100);
                puVar2 = (undefined8 *)(*(long *)(uVar23 + 0x30) + lVar18);
                *puVar2 = uVar3;
                puVar2[1] = uVar5;
                func_0x000100102924(&uStack_100,*(long *)(uVar23 + 0x38) + lVar14);
                func_0x000107c61434(uVar5);
                if (uStack_158 != 0) break;
LAB_102c55440:
                do {
                  lVar14 = lVar21 + 1;
                  if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55538);
                    (*pcVar6)();
                  }
                  if ((long)(uVar15 + 0x3f >> 6) <= lVar14) goto LAB_102c554d8;
                  uStack_158 = *(ulong *)(lVar19 + lVar14 * 8);
                  lVar21 = lVar21 + 1;
                } while (uStack_158 == 0);
                uVar9 = (uStack_158 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                        (uStack_158 & 0x5555555555555555) << 1;
                uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
                uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
                uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
                uStack_158 = uStack_158 - 1 & uStack_158;
                lVar21 = lVar14;
              }
            } while( true );
          }
LAB_102c554d8:
          func_0x000107c6142c(uVar12);
          uVar12 = uVar23;
          param_1 = lVar8;
        }
        func_0x000107c6142c(*(undefined8 *)(*(long *)(uVar12 + 0x30) + uVar10 * 0x10 + 8));
        func_0x000100102924(*(long *)(uVar12 + 0x38) + uVar10 * 0x20,&uStack_100);
        func_0x0001010f6278(uVar10,uVar12);
        *param_2 = uVar12;
      }
      func_0x000107c6142c(uVar4);
      FUN_102c5677c(&uStack_100,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000100102924(&uStack_120,&uStack_100);
      func_0x000107c61434(uVar4);
      uVar9 = *param_2;
      func_0x000107c61558();
      uVar23 = *param_2;
      uVar12 = uVar10;
      uVar15 = uVar4;
      func_0x000100029284();
      uVar16 = (ulong)~(uint)uVar15 & 1;
      lVar19 = *(long *)(uVar23 + 0x10) + uVar16;
      if (SCARRY8(*(long *)(uVar23 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102c5552c);
        (*pcVar6)();
      }
      if (*(long *)(uVar23 + 0x18) < lVar19) {
        func_0x000100102b0c(lVar19,uVar9);
        uVar12 = uVar10;
        uVar9 = uVar4;
        func_0x000100029284();
        if (((uint)uVar15 & 1) != ((uint)uVar9 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55548);
          (*pcVar6)();
        }
joined_r0x000102c5536c:
        if ((uVar15 & 1) != 0) goto LAB_102c54f0c;
LAB_102c5517c:
        lVar19 = uVar23 + (uVar12 >> 6) * 8;
        *(ulong *)(lVar19 + 0x40) = *(ulong *)(lVar19 + 0x40) | 1L << (uVar12 & 0x3f);
        puVar1 = (ulong *)(*(long *)(uVar23 + 0x30) + uVar12 * 0x10);
        *puVar1 = uVar10;
        puVar1[1] = uVar4;
        func_0x000100102924(&uStack_100,*(long *)(uVar23 + 0x38) + uVar12 * 0x20);
        if (SCARRY8(*(long *)(uVar23 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55530);
          (*pcVar6)();
        }
        *(long *)(uVar23 + 0x10) = *(long *)(uVar23 + 0x10) + 1;
      }
      else {
        if ((uVar9 & 1) == 0) {
          func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
          uVar9 = uVar23;
          func_0x000107c6048c();
          if (*(long *)(uVar23 + 0x10) != 0) {
            lVar19 = uVar23 + 0x40;
            uVar16 = (1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f)) + 0x3fU >> 6;
            if ((uVar9 != uVar23) || (lVar19 + uVar16 * 8 <= uVar9 + 0x40)) {
              func_0x000107c610b8(uVar9 + 0x40,lVar19,uVar16 << 3);
            }
            lVar21 = 0;
            *(undefined8 *)(uVar9 + 0x10) = *(undefined8 *)(uVar23 + 0x10);
            uVar16 = 1L << ((ulong)*(byte *)(uVar23 + 0x20) & 0x3f);
            uStack_160 = 0xffffffffffffffff;
            if ((*(byte *)(uVar23 + 0x20) & 0x3f) < 6) {
              uStack_160 = ~(-1L << (uVar16 & 0x3f));
            }
            uStack_160 = uStack_160 & *(ulong *)(uVar23 + 0x40);
            if (uStack_160 == 0) goto LAB_102c552c0;
            do {
              uVar13 = (uStack_160 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       (uStack_160 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
              uStack_160 = uStack_160 - 1 & uStack_160;
              while( true ) {
                uVar13 = LZCOUNT(uVar13) | lVar21 << 6;
                lVar18 = uVar13 * 0x10;
                puVar2 = (undefined8 *)(*(long *)(uVar23 + 0x30) + lVar18);
                uVar3 = *puVar2;
                uVar5 = puVar2[1];
                lVar14 = uVar13 * 0x20;
                func_0x0001000bb420(*(long *)(uVar23 + 0x38) + lVar14,&uStack_120);
                puVar2 = (undefined8 *)(*(long *)(uVar9 + 0x30) + lVar18);
                *puVar2 = uVar3;
                puVar2[1] = uVar5;
                func_0x000100102924(&uStack_120,*(long *)(uVar9 + 0x38) + lVar14);
                func_0x000107c61434(uVar5);
                if (uStack_160 != 0) break;
LAB_102c552c0:
                do {
                  lVar14 = lVar21 + 1;
                  if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55534);
                    (*pcVar6)();
                  }
                  if ((long)(uVar16 + 0x3f >> 6) <= lVar14) goto LAB_102c55360;
                  uStack_160 = *(ulong *)(lVar19 + lVar14 * 8);
                  lVar21 = lVar21 + 1;
                } while (uStack_160 == 0);
                uVar13 = (uStack_160 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                         (uStack_160 & 0x5555555555555555) << 1;
                uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
                uStack_160 = uStack_160 - 1 & uStack_160;
                lVar21 = lVar14;
              }
            } while( true );
          }
LAB_102c55360:
          func_0x000107c6142c(uVar23);
          uVar23 = uVar9;
          goto joined_r0x000102c5536c;
        }
        if ((uVar15 & 1) == 0) goto LAB_102c5517c;
LAB_102c54f0c:
        lVar19 = *(long *)(uVar23 + 0x38) + uVar12 * 0x20;
        FUN_102c567d8(lVar19);
        func_0x000100102924(&uStack_100,lVar19);
        func_0x000107c6142c(uVar4);
      }
      *param_2 = uVar23;
      param_1 = lVar8;
    }
    uVar22 = uVar22 - 1 & uVar22;
    FUN_102c567d8(auStack_b8);
    FUN_102c5677c(&uStack_98,0x112da9f08,&UNK_10da55920);
    lVar19 = lVar11;
  } while( true );
}



/* Entry: 102c55548; end: 102c55c17;  */

void FUN_102c55548(long param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [32];
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [40];
  
  puVar20 = (ulong *)(param_1 + 0x40);
  uVar17 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar22 = 0xffffffffffffffff;
  if (-uVar17 < 0x40) {
    uVar22 = ~(-1L << (-uVar17 & 0x3f));
  }
  uVar22 = uVar22 & *puVar20;
  lVar8 = param_1;
  func_0x000107c61434();
  lVar11 = 0;
  lVar19 = lVar11;
  do {
    while (uVar22 == 0) {
      bVar7 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55bf8);
        (*pcVar6)();
      }
      if ((long)(0x3f - uVar17 >> 6) <= lVar11) {
        func_0x000100216694(param_1,puVar20,~uVar17,lVar19,0);
        return;
      }
      uVar22 = puVar20[lVar11];
    }
    uVar10 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar11 << 6;
    puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
    uVar10 = *puVar1;
    uVar4 = puVar1[1];
    uStack_98 = uVar10;
    uStack_90 = uVar4;
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar12 * 0x20,auStack_88);
    func_0x0001000bb420(auStack_88,auStack_b8);
    uVar12 = *param_2;
    lVar19 = *(long *)(uVar12 + 0x10);
    func_0x000107c61434(uVar4);
    if (lVar19 != 0) {
      func_0x000107c61434(uVar12);
      uVar23 = uVar10;
      uVar15 = uVar4;
      func_0x000100029284(uVar10);
      if ((uVar15 & 1) == 0) {
        func_0x000107c6142c(uVar12);
      }
      else {
        func_0x0001000bb420(*(long *)(uVar12 + 0x38) + uVar23 * 0x20,&uStack_100);
        func_0x000107c6142c(uVar12);
        func_0x000100102924(&uStack_100,&uStack_d8);
        FUN_102c567d8(auStack_b8);
        func_0x000100102924(&uStack_d8,auStack_b8);
      }
    }
    func_0x0001000bb420(auStack_b8,&uStack_d8);
    uStack_118 = uStack_d0;
    uStack_120 = uStack_d8;
    lStack_108 = lStack_c0;
    uStack_110 = uStack_c8;
    if (lStack_c0 == 0) {
      func_0x000107c61434(uVar4);
      FUN_102c5677c(&uStack_120,0x112d387f8,&UNK_10d902650);
      func_0x000107c61434(uVar12);
      uVar23 = uVar4;
      func_0x000100029284();
      func_0x000107c6142c(uVar12);
      if ((uVar23 & 1) == 0) {
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
      }
      else {
        uVar23 = *param_2;
        func_0x000107c61558();
        uVar12 = *param_2;
        if ((uVar23 & 1) == 0) {
          func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
          uVar23 = uVar12;
          func_0x000107c6048c();
          if (*(long *)(uVar12 + 0x10) != 0) {
            lVar19 = uVar12 + 0x40;
            uVar15 = (1L << ((ulong)*(byte *)(uVar23 + 0x20) & 0x3f)) + 0x3fU >> 6;
            if ((uVar23 != uVar12) || (lVar19 + uVar15 * 8 <= uVar23 + 0x40)) {
              func_0x000107c610b8(uVar23 + 0x40,lVar19,uVar15 << 3);
            }
            lVar21 = 0;
            *(undefined8 *)(uVar23 + 0x10) = *(undefined8 *)(uVar12 + 0x10);
            uVar15 = 1L << ((ulong)*(byte *)(uVar12 + 0x20) & 0x3f);
            uStack_158 = 0xffffffffffffffff;
            if ((*(byte *)(uVar12 + 0x20) & 0x3f) < 6) {
              uStack_158 = ~(-1L << (uVar15 & 0x3f));
            }
            uStack_158 = uStack_158 & *(ulong *)(uVar12 + 0x40);
            if (uStack_158 == 0) goto LAB_102c55b10;
            do {
              uVar9 = (uStack_158 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                      (uStack_158 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
              uStack_158 = uStack_158 - 1 & uStack_158;
              while( true ) {
                uVar9 = LZCOUNT(uVar9) | lVar21 << 6;
                lVar18 = uVar9 * 0x10;
                puVar2 = (undefined8 *)(*(long *)(uVar12 + 0x30) + lVar18);
                uVar3 = *puVar2;
                uVar5 = puVar2[1];
                lVar14 = uVar9 * 0x20;
                func_0x0001000bb420(*(long *)(uVar12 + 0x38) + lVar14,&uStack_100);
                puVar2 = (undefined8 *)(*(long *)(uVar23 + 0x30) + lVar18);
                *puVar2 = uVar3;
                puVar2[1] = uVar5;
                func_0x000100102924(&uStack_100,*(long *)(uVar23 + 0x38) + lVar14);
                func_0x000107c61434(uVar5);
                if (uStack_158 != 0) break;
LAB_102c55b10:
                do {
                  lVar14 = lVar21 + 1;
                  if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55c08);
                    (*pcVar6)();
                  }
                  if ((long)(uVar15 + 0x3f >> 6) <= lVar14) goto LAB_102c55ba8;
                  uStack_158 = *(ulong *)(lVar19 + lVar14 * 8);
                  lVar21 = lVar21 + 1;
                } while (uStack_158 == 0);
                uVar9 = (uStack_158 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                        (uStack_158 & 0x5555555555555555) << 1;
                uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
                uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
                uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
                uStack_158 = uStack_158 - 1 & uStack_158;
                lVar21 = lVar14;
              }
            } while( true );
          }
LAB_102c55ba8:
          func_0x000107c6142c(uVar12);
          uVar12 = uVar23;
          param_1 = lVar8;
        }
        func_0x000107c6142c(*(undefined8 *)(*(long *)(uVar12 + 0x30) + uVar10 * 0x10 + 8));
        func_0x000100102924(*(long *)(uVar12 + 0x38) + uVar10 * 0x20,&uStack_100);
        func_0x0001010f6278(uVar10,uVar12);
        *param_2 = uVar12;
      }
      func_0x000107c6142c(uVar4);
      FUN_102c5677c(&uStack_100,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000100102924(&uStack_120,&uStack_100);
      func_0x000107c61434(uVar4);
      uVar9 = *param_2;
      func_0x000107c61558();
      uVar23 = *param_2;
      uVar12 = uVar10;
      uVar15 = uVar4;
      func_0x000100029284();
      uVar16 = (ulong)~(uint)uVar15 & 1;
      lVar19 = *(long *)(uVar23 + 0x10) + uVar16;
      if (SCARRY8(*(long *)(uVar23 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55bfc);
        (*pcVar6)();
      }
      if (*(long *)(uVar23 + 0x18) < lVar19) {
        func_0x000100102b0c(lVar19,uVar9);
        uVar12 = uVar10;
        uVar9 = uVar4;
        func_0x000100029284();
        if (((uint)uVar15 & 1) != ((uint)uVar9 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55c18);
          (*pcVar6)();
        }
joined_r0x000102c55a3c:
        if ((uVar15 & 1) != 0) goto LAB_102c555bc;
LAB_102c5584c:
        lVar19 = uVar23 + (uVar12 >> 6) * 8;
        *(ulong *)(lVar19 + 0x40) = *(ulong *)(lVar19 + 0x40) | 1L << (uVar12 & 0x3f);
        puVar1 = (ulong *)(*(long *)(uVar23 + 0x30) + uVar12 * 0x10);
        *puVar1 = uVar10;
        puVar1[1] = uVar4;
        func_0x000100102924(&uStack_100,*(long *)(uVar23 + 0x38) + uVar12 * 0x20);
        if (SCARRY8(*(long *)(uVar23 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55c00);
          (*pcVar6)();
        }
        *(long *)(uVar23 + 0x10) = *(long *)(uVar23 + 0x10) + 1;
      }
      else {
        if ((uVar9 & 1) == 0) {
          func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
          uVar9 = uVar23;
          func_0x000107c6048c();
          if (*(long *)(uVar23 + 0x10) != 0) {
            lVar19 = uVar23 + 0x40;
            uVar16 = (1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f)) + 0x3fU >> 6;
            if ((uVar9 != uVar23) || (lVar19 + uVar16 * 8 <= uVar9 + 0x40)) {
              func_0x000107c610b8(uVar9 + 0x40,lVar19,uVar16 << 3);
            }
            lVar21 = 0;
            *(undefined8 *)(uVar9 + 0x10) = *(undefined8 *)(uVar23 + 0x10);
            uVar16 = 1L << ((ulong)*(byte *)(uVar23 + 0x20) & 0x3f);
            uStack_160 = 0xffffffffffffffff;
            if ((*(byte *)(uVar23 + 0x20) & 0x3f) < 6) {
              uStack_160 = ~(-1L << (uVar16 & 0x3f));
            }
            uStack_160 = uStack_160 & *(ulong *)(uVar23 + 0x40);
            if (uStack_160 == 0) goto LAB_102c55990;
            do {
              uVar13 = (uStack_160 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       (uStack_160 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
              uStack_160 = uStack_160 - 1 & uStack_160;
              while( true ) {
                uVar13 = LZCOUNT(uVar13) | lVar21 << 6;
                lVar18 = uVar13 * 0x10;
                puVar2 = (undefined8 *)(*(long *)(uVar23 + 0x30) + lVar18);
                uVar3 = *puVar2;
                uVar5 = puVar2[1];
                lVar14 = uVar13 * 0x20;
                func_0x0001000bb420(*(long *)(uVar23 + 0x38) + lVar14,&uStack_120);
                puVar2 = (undefined8 *)(*(long *)(uVar9 + 0x30) + lVar18);
                *puVar2 = uVar3;
                puVar2[1] = uVar5;
                func_0x000100102924(&uStack_120,*(long *)(uVar9 + 0x38) + lVar14);
                func_0x000107c61434(uVar5);
                if (uStack_160 != 0) break;
LAB_102c55990:
                do {
                  lVar14 = lVar21 + 1;
                  if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102c55c04);
                    (*pcVar6)();
                  }
                  if ((long)(uVar16 + 0x3f >> 6) <= lVar14) goto LAB_102c55a30;
                  uStack_160 = *(ulong *)(lVar19 + lVar14 * 8);
                  lVar21 = lVar21 + 1;
                } while (uStack_160 == 0);
                uVar13 = (uStack_160 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                         (uStack_160 & 0x5555555555555555) << 1;
                uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
                uStack_160 = uStack_160 - 1 & uStack_160;
                lVar21 = lVar14;
              }
            } while( true );
          }
LAB_102c55a30:
          func_0x000107c6142c(uVar23);
          uVar23 = uVar9;
          goto joined_r0x000102c55a3c;
        }
        if ((uVar15 & 1) == 0) goto LAB_102c5584c;
LAB_102c555bc:
        lVar19 = *(long *)(uVar23 + 0x38) + uVar12 * 0x20;
        FUN_102c567d8(lVar19);
        func_0x000100102924(&uStack_100,lVar19);
        func_0x000107c6142c(uVar4);
      }
      *param_2 = uVar23;
      param_1 = lVar8;
    }
    uVar22 = uVar22 - 1 & uVar22;
    FUN_102c567d8(auStack_b8);
    FUN_102c5677c(&uStack_98,0x112da9f08,&UNK_10da55920);
    lVar19 = lVar11;
  } while( true );
}



/* Entry: 102c55c18; end: 102c55dbb;  */

undefined * FUN_102c55c18(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [24];
  long lStack_68;
  long lStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  FUN_102c56758(unaff_x20 + 0x10,lVar2);
  (**(code **)(lVar10 + 0x10))(lVar2,lVar10);
  lVar10 = *(long *)(lVar2 + 0x10);
  if (lVar10 == 0) {
    func_0x000107c6142c(lVar2);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar7 = lVar2 + 0x20;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      FUN_102c56714(lVar7,auStack_80);
      lVar9 = lStack_58;
      lVar3 = lStack_68;
      FUN_102c56758(auStack_80,lStack_68);
      (**(code **)(lVar9 + 0x18))(lVar3,lVar9);
      FUN_102c567d8(auStack_80);
      uVar8 = *(ulong *)(lVar3 + 0x10);
      lVar9 = *(long *)(puVar6 + 0x10);
      if (SCARRY8(lVar9,uVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c55db0);
        (*pcVar1)();
      }
      puVar4 = puVar6;
      func_0x000107c61558();
      if (((int)puVar4 == 0) ||
         (uVar5 = *(ulong *)(puVar6 + 0x18) >> 1, (long)uVar5 < (long)(lVar9 + uVar8))) {
        FUN_102c56614();
        uVar5 = *(ulong *)(puVar4 + 0x18) >> 1;
        puVar6 = puVar4;
        if (*(long *)(lVar3 + 0x10) != 0) goto LAB_102c55d2c;
LAB_102c55c74:
        func_0x000107c6142c(lVar3);
        puVar4 = puVar6;
        if (uVar8 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c55db4);
          (*pcVar1)();
        }
      }
      else {
        puVar4 = puVar6;
        if (*(long *)(lVar3 + 0x10) == 0) goto LAB_102c55c74;
LAB_102c55d2c:
        if (uVar5 - *(long *)(puVar4 + 0x10) < uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c55db8);
          (*pcVar1)();
        }
        func_0x000107c610b4(puVar4 + *(long *)(puVar4 + 0x10) * 8 + 0x20,lVar3 + 0x20,uVar8 << 3);
        func_0x000107c6142c(lVar3);
        if (uVar8 != 0) {
          if (SCARRY8(*(long *)(puVar4 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c55dbc);
            (*pcVar1)();
          }
          *(ulong *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + uVar8;
        }
      }
      lVar7 = lVar7 + 0x30;
      lVar10 = lVar10 + -1;
      puVar6 = puVar4;
    } while (lVar10 != 0);
    func_0x000107c6142c(lVar2);
  }
  return puVar4;
}



/* Entry: 102c55dbc; end: 102c56183;  */

void FUN_102c55dbc(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined **ppuStack_d8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *apuStack_90 [2];
  undefined *puStack_80;
  long lStack_68;
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
    return;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0e2b8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0e2b8;
  func_0x000107c5faec();
  lVar11 = *unaff_x20;
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_102c56058:
    uStack_b8 = 0;
    puStack_c0 = (undefined *)0x0;
    puStack_a8 = (undefined *)0x0;
    uStack_b0 = 0;
    func_0x000107c6142c(param_2);
LAB_102c56068:
    FUN_102c5677c(&puStack_c0,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000107c61434(lVar11);
    uVar14 = param_2;
    func_0x000100029284(ppuVar3);
    if ((uVar14 & 1) == 0) {
      func_0x000107c6142c(lVar11);
      goto LAB_102c56058;
    }
    func_0x0001000bb420(*(long *)(lVar11 + 0x38) + (long)ppuVar3 * 0x20,&puStack_c0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar11);
    if (puStack_a8 == (undefined *)0x0) goto LAB_102c56068;
    uVar4 = 0x112daafe8;
    func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
    ppuVar3 = apuStack_90;
    func_0x000107c6147c(ppuVar3,&puStack_c0,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)ppuVar3 & 1) != 0) {
      func_0x000107c61434(apuStack_90[0]);
      lVar11 = *(long *)(apuStack_90[0] + 0x10);
      puVar12 = PTR___sypN_11034f1a8;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar13 = apuStack_90[0];
      puVar5 = apuStack_90[0];
      goto joined_r0x000102c5608c;
    }
  }
  lVar11 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar12 = PTR___sypN_11034f1a8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x000102c5608c:
  for (; lVar11 != 0; lVar11 = lVar11 + -1) {
    puVar13 = puVar13 + 0x20;
    uVar4 = 0x112f05408;
    func_0x0001000bb420(puVar13,&puStack_c0);
    func_0x000100102924(&puStack_c0,apuStack_90);
    func_0x0001000285a8(0x112f05408,&UNK_10db39938);
    plVar6 = &lStack_68;
    func_0x000107c6147c(plVar6,apuStack_90,puVar12 + 8,uVar4,6);
    lVar1 = lStack_68;
    if ((((ulong)plVar6 & 1) != 0) && (lStack_68 != 0)) {
      puVar7 = puVar8;
      func_0x000107c61558();
      puVar9 = puVar8;
      if (((ulong)puVar7 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_102c56614(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar14 = *(ulong *)(puVar9 + 0x10);
      puVar8 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar14) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_102c56614(puVar8,uVar14 + 1,1,puVar9);
      }
      *(ulong *)(puVar8 + 0x10) = uVar14 + 1;
      *(long *)(puVar8 + uVar14 * 8 + 0x20) = lVar1;
    }
  }
  func_0x000107c6142c(puVar5);
  lVar11 = 0;
  uVar14 = *(ulong *)(puVar8 + 0x10);
  do {
    if (lVar11 == lVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c56184);
      (*pcVar2)();
    }
    uVar10 = 0;
    puVar12 = *(undefined **)(param_1 + 0x20 + lVar11 * 8);
    lVar11 = lVar11 + 1;
    do {
      if (uVar14 == uVar10) {
        puVar13 = puVar12;
        func_0x000107c614e4();
        puVar7 = puVar5;
        puStack_c0 = puVar12;
        puStack_a8 = puVar13;
        func_0x000107c61558();
        puVar12 = puVar5;
        if (((ulong)puVar7 & 1) == 0) {
          puVar12 = (undefined *)0x0;
          func_0x000100f6a040(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar10 = *(ulong *)(puVar12 + 0x10);
        puVar5 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar10) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          func_0x000100f6a040(puVar5,uVar10 + 1,1,puVar12);
        }
        *(ulong *)(puVar5 + 0x10) = uVar10 + 1;
        puVar13 = puVar5 + uVar10 * 0x20 + 0x20;
        func_0x000100102924(&puStack_c0,puVar13);
        goto joined_r0x000102c55ef4;
      }
      if (*(ulong *)(puVar8 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c56180);
        (*pcVar2)();
      }
      lVar1 = uVar10 * 8;
      uVar10 = uVar10 + 1;
    } while (*(undefined **)(puVar8 + lVar1 + 0x20) != puVar12);
    puStack_a8 = &UNK_11065d188;
    ppuStack_a0 = &PTR_DAT_11065d0f0;
    puStack_c0 = (undefined *)CONCAT71(puStack_c0._1_7_,6);
    puVar13 = (undefined *)0x102c567f8;
    puStack_80 = puVar12;
    func_0x0001034e2644(&puStack_c0,0x102c567f8,apuStack_90,0,0,0);
    FUN_102c567d8(&puStack_c0);
joined_r0x000102c55ef4:
    if (lVar11 == lVar15) {
      func_0x000107c6142c(puVar8);
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e2b8);
      uVar4 = 0x112daafe8;
      func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
      puStack_c0 = puVar5;
      puStack_a8 = (undefined *)uVar4;
      func_0x000100102934(&puStack_c0,ppuStack_d8,puVar13);
      return;
    }
  } while( true );
}



/* Entry: 102c56184; end: 102c5642b;  */

undefined * FUN_102c56184(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  FUN_102c56758(unaff_x20 + 0x10,lVar2);
  (**(code **)(lVar5 + 0x10))(lVar2,lVar5);
  lVar5 = *(long *)(lVar2 + 0x10);
  if (lVar5 == 0) {
    func_0x000107c6142c();
    puStack_58 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    lVar4 = lVar2 + 0x20;
    do {
      FUN_102c56714(lVar4,auStack_88);
      lVar1 = lStack_60;
      uVar3 = uStack_70;
      FUN_102c56758(auStack_88,uStack_70);
      (**(code **)(lVar1 + 0x10))(uVar3,lVar1);
      FUN_102c54768();
      func_0x000107c6142c(uVar3);
      FUN_102c567d8(auStack_88);
      lVar4 = lVar4 + 0x30;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    func_0x000107c6142c(lVar2);
  }
  return puStack_58;
}



/* Entry: 102c5642c; end: 102c56483; -[_TtC28AdPagePlaybackImplementation34AdPageOperaPropertiesPlugInManager updateOperaPageData:] */

void FUN_102c5642c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_102c544f8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c56484; end: 102c56593;  */

undefined1  [16]
FUN_102c56484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0xd000000000000028,0x800000010f1036c0);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x6e6572727563202c,0xea00000000002074);
  puVar4 = PTR___sypN_11034f1a8;
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c603d0(param_3,&uStack_50,PTR___sypN_11034f1a8 + 8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x2077656e202c,0xe600000000000000);
  func_0x000107c603d0(param_4,&uStack_50,puVar4 + 8,puVar2,puVar3);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  return auVar1;
}



/* Entry: 102c56594; end: 102c56613;  */

undefined1  [16] FUN_102c56594(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  func_0x000107c602fc(0x32);
  func_0x000107c6142c(0xe000000000000000);
  uVar2 = 0;
  func_0x000107c60714(param_1,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  auVar1._8_8_ = 0x800000010f1036f0;
  auVar1._0_8_ = 0xd000000000000030;
  return auVar1;
}



/* Entry: 102c56614; end: 102c56713;  */

undefined * FUN_102c56614(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c56714);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f05268;
    func_0x0001000285a8(0x112f05268,&UNK_10db39870);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102c56714; end: 102c56757;  */

long FUN_102c56714(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c56758; end: 102c5677b;  */

long * FUN_102c56758(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 102c5677c; end: 102c567bb;  */

undefined8 FUN_102c5677c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102c567bc; end: 102c567d7;  */

void FUN_102c567bc(void)

{
  long unaff_x20;
  
  FUN_102c56484(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102c567d8; end: 102c56803;  */

void FUN_102c567d8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102c567ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102c56804; end: 102c5694f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c56804(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_1 + _DAT_113068e80);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113068e80))[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  FUN_102c56950(param_2 + _DAT_112f056f8,unaff_x20 + 0x20);
  FUN_102c56950(param_2 + _DAT_112f05700,unaff_x20 + 0x48);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x70) = param_3;
  return unaff_x20;
}



/* Entry: 102c56950; end: 102c56993;  */

long FUN_102c56950(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c56994; end: 102c56b77;  */

void FUN_102c56994(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  code **ppcVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  code *apcStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar1 = (long *)(unaff_x20 + 0x48);
  FUN_102c56e5c(plVar1,*(undefined8 *)(unaff_x20 + 0x60));
  uVar8 = *(undefined8 *)(*plVar1 + 0x20);
  puVar2 = &UNK_1105b8bf0;
  func_0x000107c613fc(&UNK_1105b8bf0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  uVar3 = 0x112f05410;
  func_0x0001000285a8(0x112f05410,&UNK_10db39940);
  func_0x000107c613fc();
  func_0x000107c61434(uVar8);
  pcVar4 = FUN_102c56c48;
  func_0x000102cac870(FUN_102c56c48,puVar2,FUN_102c56c50,0);
  uVar8 = 0x112f05418;
  uStack_70 = uVar3;
  FUN_102c56d28(0x112f05418,&DAT_10db3cf38);
  lVar5 = 0;
  apcStack_88[0] = pcVar4;
  uStack_68 = uVar8;
  func_0x000102c544d8(0);
  func_0x000107c613fc();
  FUN_102c56d10(apcStack_88,lVar5 + 0x10);
  uVar8 = 0x112f05420;
  uStack_70 = uVar3;
  FUN_102c56d28(0x112f05420,&DAT_10db3cf1c);
  apcStack_88[0] = pcVar4;
  uStack_68 = uVar8;
  func_0x0001041f33d4(0);
  func_0x000107c610f8();
  func_0x000107c61580(pcVar4,2);
  ppcVar6 = apcStack_88;
  func_0x0001041f32f4(ppcVar6);
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x70));
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_102c56e5c(unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x38));
  uVar7 = 0;
  func_0x000102c57670(0);
  func_0x000107c61434(uVar8);
  func_0x000107c6157c(lVar5);
  FUN_102c5782c(uVar3,uVar8,lVar5,uVar3,uVar8,uVar7,&PTR_DAT_1105b8cd8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61170(ppcVar6);
  func_0x000107c61578(lVar5,2);
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 102c56b78; end: 102c56be3;  */

undefined8 FUN_102c56b78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_102c56e5c(unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0;
  func_0x000102c57670(0);
  (*(code *)(undefined *)0x102c57898)(uVar1,uVar2,uVar3,&PTR_DAT_1105b8cd8);
  return 0;
}



/* Entry: 102c56be4; end: 102c56c47;  */

uint FUN_102c56be4(long param_1)

{
  uint uVar1;
  long lVar3;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  FUN_102c56e5c(param_1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  uVar1 = (uint)uVar2;
  func_0x0001000f66f0();
  func_0x000107c6142c(lVar3);
  return (uVar1 ^ 0xffffffff) & 1;
}



/* Entry: 102c56c48; end: 102c56c4f;  */

uint FUN_102c56c48(long param_1)

{
  uint uVar1;
  long lVar3;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  FUN_102c56e5c(param_1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  uVar1 = (uint)uVar2;
  func_0x0001000f66f0();
  func_0x000107c6142c(lVar3);
  return (uVar1 ^ 0xffffffff) & 1;
}



/* Entry: 102c56c50; end: 102c56d0f;  */

uint FUN_102c56c50(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  FUN_102c56e5c(param_1,lVar2);
  (**(code **)(lVar4 + 8))();
  lVar3 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  FUN_102c56e5c(param_2,lVar3);
  (**(code **)(lVar5 + 8))();
  if (lVar2 == lVar3 && lVar4 == lVar5) {
    uVar1 = 0;
  }
  else {
    func_0x000107c605b8(lVar2,lVar4,lVar3,lVar5,1);
    uVar1 = (uint)lVar2;
  }
  func_0x000107c6142c(lVar4);
  func_0x000107c6142c(lVar5);
  return uVar1 & 1;
}



/* Entry: 102c56d10; end: 102c56d27;  */

undefined8 * FUN_102c56d10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102c56d28; end: 102c56d73;  */

void FUN_102c56d28(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0x112f05410;
    func_0x00010002969c(0x112f05410,&UNK_10db39940);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102c56d74; end: 102c56daf;  */

void FUN_102c56d74(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x0001000834e4(unaff_x20 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c56db0; end: 102c56dcf;  */

void FUN_102c56db0(void)

{
  FUN_102c56994();
  return;
}



/* Entry: 102c56dd0; end: 102c56e3b;  */

undefined8 FUN_102c56dd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  FUN_102c56e5c(lVar4 + 0x20,*(undefined8 *)(lVar4 + 0x38));
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  uVar3 = 0;
  func_0x000102c57670(0);
  (*(code *)(undefined *)0x102c57898)(uVar1,uVar2,uVar3,&PTR_DAT_1105b8cd8);
  return 0;
}



/* Entry: 102c56e3c; end: 102c56e5b;  */

void FUN_102c56e3c(void)

{
  func_0x000107c61168(&PTR_PTR_112f05468);
  return;
}



/* Entry: 102c56e5c; end: 102c56eb3;  */

long * FUN_102c56e5c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 102c56eb4; end: 102c56eff;  */

void FUN_102c56eb4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c56f00; end: 102c570ab;  */

void FUN_102c56f00(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 102c570ac; end: 102c5716b;  */

undefined8 FUN_102c570ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000102c57338(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102c5716c; end: 102c57187;  */

void FUN_102c5716c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c57188; end: 102c57543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102c57188(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long alStack_110 [5];
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined8 auStack_d8 [3];
  long lStack_c0;
  undefined **ppuStack_b8;
  undefined8 auStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar1 = 0;
  func_0x000102c57670();
  ppuStack_68 = &PTR_DAT_1105b8cd8;
  lVar2 = 0;
  auStack_88[0] = param_1;
  lStack_70 = lVar1;
  func_0x000102c56ee0();
  ppuStack_90 = &PTR_DAT_1105b8c28;
  lVar3 = 0;
  auStack_b0[0] = param_2;
  lStack_98 = lVar2;
  FUN_102c58234();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_88,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar6);
  func_0x0001000c6518(auStack_b0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar7);
  auStack_d8[0] = *puVar6;
  alStack_110[2] = *puVar7;
  ppuStack_b8 = &PTR_DAT_1105b8cd8;
  ppuStack_e0 = &PTR_DAT_1105b8c28;
  lStack_e8 = lVar2;
  lStack_c0 = lVar1;
  FUN_102c57564(auStack_d8,lVar4 + _DAT_112f056f8);
  FUN_102c57564(alStack_110 + 2,lVar4 + _DAT_112f05700);
  plVar5 = alStack_110;
  alStack_110[0] = lVar4;
  alStack_110[1] = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_110 + 2);
  func_0x0001000834e4(auStack_d8);
  func_0x0001000834e4(auStack_b0);
  func_0x0001000834e4(auStack_88);
  return plVar5;
}



/* Entry: 102c57544; end: 102c57563;  */

void FUN_102c57544(void)

{
  func_0x000107c61168(&PTR_PTR_112f055f0);
  return;
}



/* Entry: 102c57564; end: 102c575a7;  */

long FUN_102c57564(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c575a8; end: 102c5764b;  */

undefined8 FUN_102c575a8(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 0x18);
      uVar2 = *puVar1;
      uVar3 = puVar1[2];
      func_0x000107c61434(puVar1[1]);
      func_0x000107c615f0(uVar3);
    }
    func_0x000107c6142c(param_3);
  }
  return uVar2;
}



/* Entry: 102c5764c; end: 102c5768f;  */

void FUN_102c5764c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c57690; end: 102c5773f;  */

void FUN_102c57690(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c615f0(param_6);
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  uVar2 = *param_1;
  FUN_102c57a14(param_4,param_5,param_6,param_2,param_3,uVar1);
  func_0x000107c6142c(param_3);
  *param_1 = uVar2;
  return;
}



/* Entry: 102c57740; end: 102c5782b;  */

void FUN_102c57740(undefined8 *param_1,ulong *param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  func_0x000107c61434(uVar3);
  func_0x000100029284();
  func_0x000107c6142c(uVar3);
  if ((param_4 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar3 = *param_2;
    func_0x000107c61558();
    uVar2 = *param_2;
    if ((uVar3 & 1) == 0) {
      func_0x000102c57b5c();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(uVar2 + 0x30) + param_3 * 0x10 + 8));
    puVar1 = (undefined8 *)(*(long *)(uVar2 + 0x38) + param_3 * 0x18);
    uVar4 = *puVar1;
    uVar6 = puVar1[2];
    uVar5 = puVar1[1];
    func_0x000102c57fc0(param_3,uVar2);
    *param_2 = uVar2;
  }
  *param_1 = uVar4;
  param_1[2] = uVar6;
  param_1[1] = uVar5;
  return;
}



/* Entry: 102c5782c; end: 102c57917;  */

void FUN_102c5782c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_102c5817c,auStack_70,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102c57918; end: 102c579cb; -[_TtC28AdPagePlaybackImplementation18AdPageRegistryImpl pagePropertiesProviderForPageId:] */

void FUN_102c57918(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000107c5faec(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(&uStack_48);
  func_0x000107c61574(uVar2);
  lVar1 = param_2;
  uVar2 = uStack_48;
  FUN_102c575a8(param_3,param_2,uStack_48);
  func_0x000107c6142c(uStack_48);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c579cc; end: 102c579e3;  */

void FUN_102c579cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102c57740(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c579e4; end: 102c57a13;  */

void FUN_102c579e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
    return;
  }
  return;
}



/* Entry: 102c57a14; end: 102c5817b;  */

void FUN_102c57a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  lVar4 = param_4;
  uVar5 = param_5;
  func_0x000100029284();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar5 & 1;
  lVar6 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102c57b0c);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar6) {
    func_0x000102c57cf4(lVar6,param_6 & 1);
    uVar9 = param_5;
    func_0x000100029284();
    lVar4 = param_4;
    if (((uint)uVar5 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c57ac0);
      (*pcVar3)();
    }
  }
  else if ((param_6 & 1) == 0) {
    func_0x000102c57b5c();
    lVar6 = *unaff_x20;
    goto joined_r0x000102c57b20;
  }
  lVar6 = *unaff_x20;
joined_r0x000102c57b20:
  if ((uVar5 & 1) != 0) {
    puVar8 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar4 * 0x18);
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    *puVar8 = param_1;
    puVar8[1] = param_2;
    puVar8[2] = param_3;
    func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
  FUN_102c52418();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_5);
  return;
}



/* Entry: 102c5817c; end: 102c5819b;  */

void FUN_102c5817c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102c57690(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 102c5819c; end: 102c581fb; -[AdPageRegistryServices init] */

void FUN_102c5819c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPagePlaybackImplementation.AdPageRegistryServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c581c8);
  (*pcVar1)();
}



/* Entry: 102c581fc; end: 102c58233; -[AdPageRegistryServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c58218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c5821c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c581fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112f056f8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f056f8));
  return;
}



/* Entry: 102c58234; end: 102c58253;  */

void FUN_102c58234(void)

{
  func_0x000107c61168(&PTR_PTR_112899db8);
  return;
}


