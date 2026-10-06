/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c450c8; end: 100c450d7;  */

void FUN_100c450c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c450d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100c450d8; end: 100c45293;  */

/* WARNING: Possible PIC construction at 0x000100c45130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c45134) */

void FUN_100c450d8(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c5dc0c();
  func_0x000107c61180();
  lVar1 = *(long *)(param_1 + 0x28);
  if (param_2 == 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x000107c5c1d4(param_2);
    func_0x000107c61180();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c45294; end: 100c452d7;  */

void FUN_100c45294(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c4eb8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c452d8; end: 100c45367;  */

/* WARNING: Possible PIC construction at 0x000100c45338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c45350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c4533c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c452d8(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112761368;
    func_0x000107c61148(param_1);
    func_0x000107c3ed84();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c45368; end: 100c4546b; -[_TtC38SCLensProcessingSnapRendererScopeProxy41SCLensProcessingSnapRendererScopeServices buildWithScopeDestination:memoriesSnapRendererServices:memoriesSnapRendererQCServices:contentProductSnapRendererServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c45368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126ad878;
  func_0x000107c610f8();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c484dc(puVar1,param_2,param_3,param_4,param_5,param_6);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_68[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c4546c; end: 100c4552f; -[SCLensProcessingSnapRendererScope initWithScopeDestination:memoriesSnapRendererServices:memoriesSnapRendererQCServices:contentProductSnapRendererServices:] */

undefined1 *
FUN_100c4546c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1127020d8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_5);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100c45530; end: 100c4605f;  */

void FUN_100c45530(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  code *pcVar13;
  code *pcVar14;
  char *pcVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  code *pcVar21;
  code *pcVar22;
  code *pcVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 auStack_70 [2];
  
  uVar25 = *param_2;
  func_0x0001000285a8(0x112fe6ff8,&UNK_10dc4e128);
  puVar1 = auStack_70;
  auStack_70[0] = uVar25;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112fe7000,&UNK_10dc4e130);
  puVar2 = &UNK_1106cbc40;
  func_0x000107c613fc(&UNK_1106cbc40,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar3 = FUN_100c4d608;
  func_0x0001000823a8(FUN_100c4d608,puVar2);
  func_0x000100082720("DreamsSnapRendererPluginMetadataApplyingFactoryServiceProviderWrapperServiceProvider"
                      ,0x54,2);
  func_0x0001000285a8(0x112fe7008,&UNK_10dc4e3b0);
  func_0x000107c6157c(puVar1);
  pcVar4 = FUN_100c4ce20;
  func_0x0001000823a8(FUN_100c4ce20,puVar1);
  pcVar5 = "ExternalMusicOffscreenPlaybackEventServicesProviderWrapperServiceProvider";
  func_0x000100082720("ExternalMusicOffscreenPlaybackEventServicesProviderWrapperServiceProvider",
                      0x49,2);
  FUN_100c460ec();
  pcVar6 = "SCLensProcessingBitmojiScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensProcessingBitmojiScopeExposerSubjectServiceProvider",0x39,2);
  func_0x000100c4612c();
  pcVar7 = "SCLensProcessingPluginsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensProcessingPluginsScopeExposerSubjectServiceProvider",0x39,2);
  func_0x000100c4616c();
  func_0x000100082720("SCLensProcessingURIPluginScopeExposerSubjectServiceProvider",0x3b,2);
  puVar8 = puVar1;
  FUN_100c461ac();
  func_0x000100082720("LensProcessingSnapRendererScopedContentProductSnapRendererServiceProvider",
                      0x49,2);
  puVar9 = puVar1;
  FUN_100c46218();
  func_0x000100082720("LensProcessingSnapRendererScopedMemoriesSnapRendererQCServiceProvider",0x45,2
                     );
  puVar10 = puVar1;
  func_0x000100c46234();
  func_0x000100082720("LensProcessingSnapRendererScopedMemoriesSnapRendererServiceProvider",0x43,2);
  func_0x0001000285a8(0x112fe7010,&UNK_10dc4e140);
  func_0x000107c6157c(pcVar3);
  uVar25 = 0x100c4d5ac;
  func_0x0001000823a8(0x100c4d5ac,pcVar3);
  func_0x000100082720("SCSnapRendererLensEffectProcessingMetadataApplyingFactoryServiceProvider",
                      0x48,2);
  pcVar11 = pcVar5;
  func_0x000100c46250();
  func_0x000100082720("SCLensProcessingBitmojiScopeExposerObservableServiceProvider",0x3c,2);
  pcVar12 = pcVar6;
  FUN_100c462bc();
  func_0x000100082720("SCLensProcessingPluginsScopeExposerObservableServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar13 = FUN_100c4b338;
  func_0x0001000823a8(FUN_100c4b338,0);
  func_0x000100082720("SCLensProcessingSnapRendererScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112fe7018,&UNK_10dc4e150);
  func_0x000107c6157c(pcVar4);
  pcVar14 = FUN_100c4cdc4;
  func_0x0001000823a8(FUN_100c4cdc4,pcVar4);
  func_0x000100082720("ExternalMusicOffscreenPlaybackEventServicesServiceProvider",0x3a,2);
  pcVar15 = pcVar7;
  FUN_100c462f8();
  func_0x000100082720("SCLensProcessingURIPluginScopeExposerObservableServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112fe7020,&UNK_10dc4e580);
  puVar2 = &UNK_1106cbc68;
  func_0x000107c613fc(&UNK_1106cbc68,0x80,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  *(undefined8 *)(puVar2 + 0x38) = param_9;
  *(undefined8 *)(puVar2 + 0x40) = param_10;
  *(undefined8 *)(puVar2 + 0x48) = param_11;
  *(undefined8 *)(puVar2 + 0x50) = param_12;
  *(undefined8 *)(puVar2 + 0x58) = param_13;
  *(undefined8 *)(puVar2 + 0x60) = param_14;
  *(char **)(puVar2 + 0x68) = pcVar12;
  *(char **)(puVar2 + 0x70) = pcVar15;
  *(char **)(puVar2 + 0x78) = pcVar11;
  func_0x000107c6157c(puVar1);
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
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(pcVar15);
  func_0x000107c6157c(pcVar11);
  pcVar16 = FUN_100c4bfb4;
  func_0x0001000823a8(FUN_100c4bfb4,puVar2);
  func_0x000100082720("SCLensEffectOffscreenRenderingServiceProviderWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x112fe7028,&UNK_10dc4e160);
  func_0x000107c6157c(pcVar16);
  pcVar17 = FUN_100c4bf58;
  func_0x0001000823a8(FUN_100c4bf58,pcVar16);
  func_0x000100082720("SCLensEffectOffscreenRenderingServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112fe7030,&UNK_10dc4e7b0);
  puVar2 = &UNK_1106cbc90;
  func_0x000107c613fc(&UNK_1106cbc90,0x80,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_15;
  *(undefined8 *)(puVar2 + 0x20) = param_16;
  *(undefined8 **)(puVar2 + 0x28) = puVar10;
  *(undefined8 **)(puVar2 + 0x30) = puVar8;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(code **)(puVar2 + 0x40) = pcVar17;
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  *(code **)(puVar2 + 0x50) = pcVar14;
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  *(undefined8 *)(puVar2 + 0x60) = param_17;
  *(undefined8 *)(puVar2 + 0x68) = param_12;
  *(undefined8 *)(puVar2 + 0x70) = param_18;
  *(undefined8 *)(puVar2 + 0x78) = uVar25;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(pcVar17);
  func_0x000107c6157c(pcVar14);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(uVar25);
  pcVar18 = FUN_100c4b490;
  func_0x0001000823a8(FUN_100c4b490,puVar2);
  func_0x000100082720("SCSnapRendererContentEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112fe7038,&UNK_10dc4e170);
  puVar2 = &UNK_1106cbcb8;
  func_0x000107c613fc(&UNK_1106cbcb8,0x78,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_15;
  *(undefined8 *)(puVar2 + 0x20) = param_16;
  *(undefined8 **)(puVar2 + 0x28) = puVar9;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  *(code **)(puVar2 + 0x38) = pcVar17;
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  *(code **)(puVar2 + 0x48) = pcVar14;
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  *(undefined8 *)(puVar2 + 0x58) = param_17;
  *(undefined8 *)(puVar2 + 0x60) = param_12;
  *(undefined8 *)(puVar2 + 0x68) = param_18;
  *(undefined8 *)(puVar2 + 0x70) = uVar25;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(pcVar17);
  func_0x000107c6157c(pcVar14);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(uVar25);
  func_0x000107c6157c(puVar9);
  pcVar19 = FUN_100c4e37c;
  func_0x0001000823a8(FUN_100c4e37c,puVar2);
  func_0x000100082720("SCSnapRendererMemoriesLivePlaybackEntryPointWrapperServiceProvider",0x42,2);
  func_0x0001000285a8(0x112fe7040,&UNK_10dc4eb20);
  puVar2 = &UNK_1106cbce0;
  func_0x000107c613fc(&UNK_1106cbce0,0x80,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_15;
  *(undefined8 *)(puVar2 + 0x20) = param_16;
  *(undefined8 **)(puVar2 + 0x28) = puVar10;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  *(code **)(puVar2 + 0x38) = pcVar17;
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  *(code **)(puVar2 + 0x48) = pcVar14;
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  *(undefined8 *)(puVar2 + 0x58) = param_17;
  *(undefined8 *)(puVar2 + 0x60) = param_12;
  *(undefined8 *)(puVar2 + 0x68) = param_18;
  *(undefined8 *)(puVar2 + 0x70) = uVar25;
  *(undefined8 *)(puVar2 + 0x78) = param_19;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(pcVar17);
  func_0x000107c6157c(pcVar14);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(uVar25);
  func_0x000107c6157c(param_19);
  pcVar20 = FUN_100c4e7b4;
  func_0x0001000823a8(FUN_100c4e7b4,puVar2);
  func_0x000100082720("SCSnapRendererMemoriesPlaybackEntryPointWrapperServiceProvider",0x3e,2);
  pcVar21 = pcVar14;
  FUN_100c46394(pcVar14,pcVar17,pcVar5,pcVar6,puVar8,puVar9,puVar10,pcVar7,uVar25);
  func_0x000100082720("LensProcessingSnapRendererScopeGraphBridgeServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112fe7048,&UNK_10dc4e180);
  puVar2 = &UNK_1106cbd08;
  func_0x000107c613fc(&UNK_1106cbd08,0x58,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(code **)(puVar2 + 0x18) = pcVar4;
  *(undefined8 **)(puVar2 + 0x20) = puVar1;
  *(code **)(puVar2 + 0x28) = pcVar21;
  *(code **)(puVar2 + 0x30) = pcVar16;
  *(code **)(puVar2 + 0x38) = pcVar13;
  *(code **)(puVar2 + 0x40) = pcVar18;
  *(code **)(puVar2 + 0x48) = pcVar19;
  *(code **)(puVar2 + 0x50) = pcVar20;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar16);
  func_0x000107c6157c(pcVar21);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(pcVar18);
  func_0x000107c6157c(pcVar19);
  func_0x000107c6157c(pcVar20);
  pcVar22 = FUN_100c4a6d0;
  func_0x0001000823a8(FUN_100c4a6d0,puVar2);
  func_0x000100082720("SCLensProcessingSnapRendererScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112fe6f80,&UNK_10dc4de60);
  func_0x000107c6157c(pcVar22);
  pcVar23 = FUN_100c4a248;
  func_0x0001000823a8(FUN_100c4a248,pcVar22);
  func_0x000100082720("SCLensProcessingSnapRendererScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112fe6f70,&UNK_10dc4de50);
  func_0x000107c6157c(pcVar23);
  pcVar24 = FUN_100c4a1d4;
  func_0x0001000823a8(FUN_100c4a1d4,pcVar23);
  func_0x000100082720("SCLensProcessingSnapRendererScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1106cbd30;
  func_0x000107c613fc(&UNK_1106cbd30,0x20,7);
  *(code **)(puVar2 + 0x10) = pcVar24;
  *(code **)(puVar2 + 0x18) = pcVar13;
  func_0x000107c6157c(pcVar13);
  pcVar24 = FUN_100c4a130;
  func_0x0001000823a8(FUN_100c4a130,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(uVar25);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(pcVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(pcVar23);
  func_0x000100082720("SCLensProcessingSnapRendererScopeEntryPointProvider",0x33,2);
  *param_1 = pcVar24;
  return;
}



/* Entry: 100c46060; end: 100c460eb;  */

void FUN_100c46060(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100c45530(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 100c460ec; end: 100c461ab;  */

void FUN_100c460ec(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x100c4c988,0);
  return;
}



/* Entry: 100c461ac; end: 100c461c7;  */

void FUN_100c461ac(undefined8 param_1)

{
  func_0x0001000285a8(0x112fe85f0,&UNK_10dc4fac0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_100c4be54,param_1);
  return;
}



/* Entry: 100c461c8; end: 100c46217;  */

void FUN_100c461c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 100c46218; end: 100c4626b;  */

void FUN_100c46218(undefined8 param_1)

{
  func_0x0001000285a8(0x112fe85e8,&UNK_10dc4fab8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_100c4e3b8,param_1);
  return;
}



/* Entry: 100c4626c; end: 100c462bb;  */

void FUN_100c4626c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 100c462bc; end: 100c462d7;  */

void FUN_100c462bc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_100c4c8e4,param_1);
  return;
}



/* Entry: 100c462d8; end: 100c462f7;  */

void FUN_100c462d8(void)

{
  func_0x000107c61168(&PTR_PTR_112924d80);
  return;
}



/* Entry: 100c462f8; end: 100c46313;  */

void FUN_100c462f8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_100c4c970,param_1);
  return;
}



/* Entry: 100c46314; end: 100c46393;  */

void FUN_100c46314(void)

{
  func_0x000107c61168(&PTR_PTR_112fe7268);
  return;
}



/* Entry: 100c46394; end: 100c46497;  */

void FUN_100c46394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112fe7c28,&UNK_10dc4f018);
  puVar1 = &UNK_1106cc300;
  func_0x000107c613fc(&UNK_1106cc300,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_100c4b004,puVar1);
  return;
}



/* Entry: 100c46498; end: 100c464b7;  */

void FUN_100c46498(void)

{
  func_0x000107c61168(&PTR_PTR_112924790);
  return;
}



/* Entry: 100c464b8; end: 100c46607; -[SCSnapchatter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c464dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c464fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4651c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4655c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4657c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4659c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c465bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c465dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c465c0) */
/* WARNING: Removing unreachable block (ram,0x000100c465a0) */
/* WARNING: Removing unreachable block (ram,0x000100c46580) */
/* WARNING: Removing unreachable block (ram,0x000100c46560) */
/* WARNING: Removing unreachable block (ram,0x000100c46540) */
/* WARNING: Removing unreachable block (ram,0x000100c46520) */
/* WARNING: Removing unreachable block (ram,0x000100c46500) */
/* WARNING: Removing unreachable block (ram,0x000100c464e0) */
/* WARNING: Removing unreachable block (ram,0x000100c465e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c464b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127912f4,0);
  return;
}



/* Entry: 100c46608; end: 100c46613; -[SCSnapchattersFriendInfo .cxx_destruct] */

void FUN_100c46608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c46614; end: 100c4664f; -[SCSnapchattersFriendSubtypeInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c4662c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c46630) */

void FUN_100c46614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100c46650; end: 100c4665f;  */

undefined1  [16] FUN_100c46650(void)

{
  return ZEXT816(0x1106ccea8);
}



/* Entry: 100c46660; end: 100c4668f; -[SCSnapchattersMutualFriendInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c46678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c4667c) */

void FUN_100c46660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 100c46690; end: 100c467a3;  */

void FUN_100c46690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  FUN_100c467a4(auStack_50,0);
  uStack_4c = 0;
  func_0x000107c61174(param_1);
  uVar1 = uStack_48;
  uStack_48 = param_1;
  func_0x000107c61170(uVar1);
  func_0x000107c61174(param_2);
  uVar1 = uStack_40;
  uStack_40 = param_2;
  func_0x000107c61170(uVar1);
  func_0x000107c61174(param_3);
  uVar1 = uStack_38;
  auStack_50[0] = 0;
  uStack_38 = param_3;
  func_0x000107c61170(uVar1);
  FUN_100c46868(auStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c467a4; end: 100c46867;  */

long FUN_100c467a4(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  *(bool *)param_1 = param_2 == 0;
  lVar1 = param_2;
  func_0x000107c5d0f0();
  *(int *)(param_1 + 4) = (int)lVar1;
  lVar1 = param_2;
  func_0x000107c5db3c();
  func_0x000107c61180();
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = param_2;
  func_0x000107c5db04();
  func_0x000107c61180();
  *(long *)(param_1 + 0x10) = lVar1;
  lVar1 = param_2;
  func_0x000107c42c5c();
  func_0x000107c61180();
  *(long *)(param_1 + 0x18) = lVar1;
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100c46868; end: 100c468af;  */

void FUN_100c46868(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    func_0x000107c610f4(PTR_PTR_1126db278);
    func_0x000107c48f00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c468b0; end: 100c469af; -[SCSnapchattersBestFriendMetadata initWithType:usernames:userids:extendedBestsUserIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c468b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1127074e0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127911a4) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127911a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911a8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127911ac);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911ac) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127911b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911b0) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100c469b0; end: 100c46a37;  */

/* WARNING: Possible PIC construction at 0x000100c469fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c46a00) */

void FUN_100c469b0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_100c46a38(param_2,0);
  func_0x000107c61180();
  func_0x000107c5c28c(param_1);
  func_0x000107c611b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c46a38; end: 100c46ccf;  */

void FUN_100c46a38(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x000107c61174();
  puVar1 = PTR_PTR_1126db280;
  func_0x000107c61174(param_1);
  func_0x000107c61168(puVar1);
  puVar1 = param_1;
  FUN_100c46cd0();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c61170(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar6 = PTR_PTR_1126db280;
    func_0x000107c61174(param_1);
    func_0x000107c61168(puVar6);
    puVar6 = PTR_PTR_1126db280;
    if (param_1 == (undefined *)0x0) {
      func_0x000107c61160();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      func_0x000107c610f4();
      puVar2 = param_1;
      func_0x000107c5d0f0(param_1);
      puVar3 = param_1;
      func_0x000107c5db3c(param_1);
      func_0x000107c61180();
      puVar4 = param_1;
      func_0x000107c5db04(param_1);
      func_0x000107c61180();
      puVar5 = param_1;
      func_0x000107c42c5c(param_1);
      func_0x000107c61180();
      FUN_100c4730c(puVar6,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    func_0x000107c61170(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    func_0x000107c61170(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar6 = param_1;
    func_0x000107c5d0f0();
    *(int *)(puVar1 + 0x14) = (int)puVar6;
    puVar6 = param_1;
    func_0x000107c5db3c(param_1);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(puVar6);
    puVar6 = param_1;
    func_0x000107c5db04(param_1);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(puVar6);
    puVar6 = param_1;
    func_0x000107c42c5c(param_1);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(puVar6);
    func_0x000107c61174(puVar1);
    puVar6 = puVar1;
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100c46cd0; end: 100c47043;  */

void FUN_100c46cd0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x000107c61174();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x000107c50940();
    if ((long)puVar1 < 0) {
      puVar1 = PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      puVar7 = puVar1;
      func_0x000107c41220();
      func_0x000107c61170(puVar1);
      func_0x0001001b9e08(puVar7,&UNK_10f50d32a);
      if (puVar7 != (undefined *)0x0) {
        puVar1 = param_1;
        func_0x000107c5d0f0(param_1);
        func_0x000107c6132c(puVar7,1,(ulong)puVar1 & 0xffffffff);
        puVar1 = puVar7;
        func_0x000107c613a8();
        if ((int)puVar1 == 100) {
          puVar1 = puVar7;
          func_0x000107c61358(puVar7,0);
          puVar2 = PTR_PTR_1126b04a8;
          func_0x000107c421f0();
          func_0x000107c61180();
          func_0x000107c61158(PTR_PTR_1126db278);
          func_0x000107c6134c(puVar7,1);
          func_0x000107c61350(puVar7,1);
          puVar3 = puVar2;
          func_0x000107c4d9b8();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar2);
          func_0x000107c613a4(puVar7);
          if (puVar3 == (undefined *)0x0) goto LAB_100c46f8c;
          puVar7 = PTR_PTR_1126db280;
          func_0x000107c610f4(PTR_PTR_1126db280);
          puVar2 = puVar3;
          func_0x000107c5d0f0(puVar3);
          puVar4 = puVar3;
          func_0x000107c5db3c(puVar3);
          func_0x000107c61180();
          puVar5 = puVar3;
          func_0x000107c5db04(puVar3);
          func_0x000107c61180();
          puVar6 = puVar3;
          func_0x000107c42c5c(puVar3);
          func_0x000107c61180();
          FUN_100c4730c(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
          param_1 = puVar3;
          goto LAB_100c46de8;
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x000107c50940(param_1);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      func_0x000107c61158(PTR_PTR_1126db278);
      puVar2 = puVar7;
      func_0x000107c4d9b8();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar7);
      if (puVar2 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126db280;
        func_0x000107c610f4(PTR_PTR_1126db280);
        puVar3 = puVar2;
        func_0x000107c5d0f0(puVar2);
        puVar4 = puVar2;
        func_0x000107c5db3c(puVar2);
        func_0x000107c61180();
        puVar5 = puVar2;
        func_0x000107c5db04(puVar2);
        func_0x000107c61180();
        puVar6 = puVar2;
        func_0x000107c42c5c(puVar2);
        func_0x000107c61180();
        FUN_100c4730c(puVar7,puVar1,puVar3,puVar4,puVar5,puVar6);
        param_1 = puVar2;
LAB_100c46de8:
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        goto LAB_100c46f94;
      }
LAB_100c46f8c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_100c46f94:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100c47044; end: 100c47053; -[SCSnapchattersBestFriendMetadata type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100c47044(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127911a4);
}



/* Entry: 100c47054; end: 100c4705f; +[SCSnapchattersBestFriendMetadata table] */

undefined * FUN_100c47054(void)

{
  return &UNK_10f50d309;
}



/* Entry: 100c47060; end: 100c471ef; +[SCSnapchattersBestFriendMetadata immutableObjectParse:bufferSize:] */

void FUN_100c47060(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126db278;
  func_0x000107c610f4(PTR_PTR_1126db278);
  puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar7 < 5) {
    uVar9 = 0;
  }
  else {
    if ((ulong)puVar7[2] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar1 + (ulong)puVar7[2]);
    }
    if ((6 < *puVar7) && ((ulong)puVar7[3] != 0)) {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
      lVar4 = (long)puVar2 + (ulong)*puVar2;
      goto LAB_100c470e0;
    }
  }
  lVar4 = 0;
LAB_100c470e0:
  FUN_100c471f0(lVar4);
  func_0x000107c61180();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar8);
    lVar5 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_100c471f0(lVar5);
  func_0x000107c61180();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar8 == 0)) {
    lVar6 = 0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar8);
    lVar6 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_100c471f0(lVar6);
  func_0x000107c61180();
  func_0x000107c48f00(puVar3,param_2,uVar9,lVar4,lVar5,lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c471f0; end: 100c472db;  */

void FUN_100c471f0(uint *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar2 = (undefined *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*param_1);
    func_0x000107c61180();
    puVar3 = param_1 + 1;
    if (*param_1 != 0) {
      do {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar3 + (ulong)*puVar3 + 4);
        func_0x000107c61180();
        if (puVar2 != (undefined *)0x0) {
          func_0x000107c3d798(puVar1,param_2,puVar2);
        }
        func_0x000107c61170(puVar2);
        puVar3 = puVar3 + 1;
      } while (puVar3 != param_1 + 1 + *param_1);
    }
    puVar2 = puVar1;
    func_0x000107c40794(puVar1);
    func_0x000107c61170(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c472dc; end: 100c472eb; -[SCSnapchattersBestFriendMetadata usernames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c472dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911a8);
}



/* Entry: 100c472ec; end: 100c472fb; -[SCSnapchattersBestFriendMetadata userids] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c472ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911ac);
}



/* Entry: 100c472fc; end: 100c4730b; -[SCSnapchattersBestFriendMetadata extendedBestsUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c472fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911b0);
}



/* Entry: 100c4730c; end: 100c47417;  */

undefined1 *
FUN_100c4730c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126fde48;
    lStack_50 = param_1;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined4 *)((long)plVar1 + 0x14) = param_3;
      func_0x000107c61174(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      func_0x000107c61170(uVar2);
      func_0x000107c61174(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      func_0x000107c61170(uVar2);
      func_0x000107c61174(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      func_0x000107c61170(uVar2);
    }
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return puVar3;
}



/* Entry: 100c47418; end: 100c47423; -[SCSnapchattersBestFriendMetadataChangeRequest table] */

undefined * FUN_100c47418(void)

{
  return &UNK_10f50d309;
}



/* Entry: 100c47424; end: 100c4746b; -[SCSnapchattersBestFriendMetadataChangeRequest createTableWithSQLite:] */

void FUN_100c47424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  func_0x000107c613a0(param_3,&UNK_10df9758c,0x8b,&uStack_18,0);
  if ((int)param_3 == 0) {
    func_0x000107c613a8(uStack_18);
    func_0x000107c61388(uStack_18);
  }
  return;
}



/* Entry: 100c4746c; end: 100c47803; -[SCSnapchattersBestFriendMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_100c4746c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_100c47804(param_1);
    func_0x000107c61180();
    lVar5 = param_4;
    FUN_100c4786c(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f50d3b2);
    if (lVar5 == 0) goto LAB_100c477a0;
    func_0x000107c61324(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                        (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                        *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    func_0x000107c6132c(lVar5,2,uVar6);
    func_0x000107c613a8();
    if ((int)lVar5 != 0x65) goto LAB_100c477a0;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    func_0x000107c61394();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x000107c57f38(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x000107c421f0(PTR_PTR_1126b04a8);
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126db278);
    func_0x000107c5a210(puVar8);
LAB_100c47788:
    func_0x000107c61170(puVar8);
    func_0x000107c61174(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f50d376);
        if (param_3 != 0) {
          func_0x000107c6132c();
          func_0x000107c613a8();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x000107c421f0(PTR_PTR_1126b04a8);
            func_0x000107c61180();
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            func_0x000107c61158(PTR_PTR_1126db278);
            func_0x000107c5a210(puVar4);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            goto LAB_100c477ac;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_100c477ac;
    }
    FUN_100c47804(param_1);
    func_0x000107c61180();
    lVar5 = param_4;
    FUN_100c4786c(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f50d3f9);
    if (param_3 != 0) {
      func_0x000107c61324(param_3,1,*(undefined8 *)(param_4 + 0x30),
                          (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                          *(int *)(param_4 + 0x28),0);
      func_0x000107c6132c(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
      }
      func_0x000107c6132c(param_3,3,uVar6);
      func_0x000107c613a8();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x000107c421f0(PTR_PTR_1126b04a8);
        func_0x000107c61180();
        func_0x000107c61158(PTR_PTR_1126db278);
        func_0x000107c5a210(puVar8);
        goto LAB_100c47788;
      }
    }
LAB_100c477a0:
    puVar8 = (undefined *)0x0;
  }
  func_0x000107c61170(puVar4);
LAB_100c477ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100c47804; end: 100c4786b;  */

void FUN_100c47804(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db278;
    func_0x000107c610f4(PTR_PTR_1126db278);
    func_0x000107c48f00();
    func_0x000107c57f38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c4786c; end: 100c47acf;  */

ulong FUN_100c4786c(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  long lStack_60;
  
  func_0x000107c61174(param_2);
  uVar6 = param_2;
  func_0x000107c5db3c(param_2);
  func_0x000107c61180();
  FUN_100c47ad0(&lStack_68,param_1,uVar6);
  func_0x000107c61170(uVar6);
  uVar6 = param_2;
  func_0x000107c5db04(param_2);
  func_0x000107c61180();
  FUN_100c47ad0(&lStack_80,param_1,uVar6);
  func_0x000107c61170(uVar6);
  uVar6 = param_2;
  func_0x000107c42c5c(param_2);
  func_0x000107c61180();
  FUN_100c47ad0(&lStack_98,param_1,uVar6);
  func_0x000107c61170(uVar6);
  uVar6 = param_2;
  func_0x000107c5d0f0(param_2);
  lVar1 = 0x1130c2400;
  lVar2 = lVar1;
  if (lStack_60 - lStack_68 != 0) {
    lVar2 = lStack_68;
  }
  uVar7 = param_1;
  FUN_100c47e34(param_1,lVar2,lStack_60 - lStack_68 >> 2);
  lVar2 = lVar1;
  if (lStack_78 - lStack_80 != 0) {
    lVar2 = lStack_80;
  }
  uVar8 = param_1;
  FUN_100c47e34(param_1,lVar2,lStack_78 - lStack_80 >> 2);
  if (lStack_90 - lStack_98 != 0) {
    lVar1 = lStack_98;
  }
  uVar9 = param_1;
  FUN_100c47e34(param_1,lVar1,lStack_90 - lStack_98 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_100c47f00(param_1,10,uVar9 & 0xffffffff);
  FUN_100c47f00(param_1,8,uVar8 & 0xffffffff);
  FUN_100c47f00(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce354(param_1,4,uVar6,0);
  func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    func_0x000107c60e14();
  }
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    func_0x000107c60e14();
  }
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    func_0x000107c60e14();
  }
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100c47ad0; end: 100c47d3f;  */

undefined1  [16] FUN_100c47ad0(long *param_1,int *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar8 = param_2;
  func_0x000107c61174(param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  puVar9 = &uStack_130;
  plVar3 = param_3;
  func_0x000107c4080c();
  if (plVar3 != (long *)0x0) {
    lVar16 = *plStack_120;
    do {
      plVar17 = (long *)0x0;
      do {
        if (*plStack_120 != lVar16) {
          func_0x000107c61128(param_3);
        }
        piVar15 = *(int **)(lStack_128 + (long)plVar17 * 8);
        func_0x000107c61174(piVar15);
        if (piVar15 != (int *)0x0) {
          piVar8 = (int *)0x8000100;
          piVar4 = piVar15;
          func_0x000107c60858();
          if (piVar4 == (int *)0x0) {
            piVar4 = piVar15;
            func_0x000107c412d4();
            func_0x000107c61180();
            if (piVar4 == (int *)0x0) {
              piVar4 = piVar15;
              func_0x000107c412d8();
              func_0x000107c61180();
              if (piVar4 != (int *)0x0) goto LAB_100c47c00;
              iVar2 = 0;
            }
            else {
LAB_100c47c00:
              func_0x000107c61178(piVar4);
              piVar5 = piVar4;
              func_0x000107c3eea8();
              piVar6 = piVar4;
              func_0x000107c4adac(piVar4);
              piVar8 = (int *)"";
              if (piVar5 != (int *)0x0) {
                piVar8 = piVar5;
              }
              piVar5 = param_2;
              func_0x0001001cde08(param_2,piVar8,piVar6);
              iVar2 = (int)piVar5;
            }
            func_0x000107c61170(piVar4);
          }
          else {
            piVar8 = piVar4;
            func_0x000107c613d0(piVar4);
            piVar5 = param_2;
            func_0x0001001cde08(param_2,piVar4,piVar8);
            iVar2 = (int)piVar5;
            piVar8 = piVar4;
          }
          func_0x000107c61170(piVar15);
          iStack_134 = iVar2;
          if (iVar2 != 0) {
            piVar8 = &iStack_134;
            FUN_100c47d40(param_1);
          }
        }
        plVar17 = (long *)((long)plVar17 + 1);
      } while (plVar3 != plVar17);
      puVar9 = &uStack_130;
      plVar3 = param_3;
      func_0x000107c4080c();
    } while (plVar3 != (long *)0x0);
  }
  func_0x000107c61170(param_3);
  plVar3 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar19._8_8_ = piVar8;
    auVar19._0_8_ = plVar3;
    return auVar19;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    func_0x000107c60e14();
  }
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  plVar17 = plVar3 + 2;
  piVar15 = (int *)plVar3[1];
  if (piVar15 < (int *)*plVar17) {
    piVar4 = piVar15 + 1;
    *piVar15 = *piVar8;
  }
  else {
    lVar16 = (long)piVar15 - *plVar3;
    uVar1 = (lVar16 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      func_0x000105096cd0();
      if ((ulong)piVar8 >> 0x3e == 0) {
        lVar16 = (long)piVar8 << 2;
        func_0x000107c60e20(lVar16);
        auVar21._8_8_ = piVar8;
        auVar21._0_8_ = lVar16;
        return auVar21;
      }
      func_0x000104bd35f4();
      *(undefined1 *)((long)plVar17 + 0x46) = 1;
      func_0x0001001cddd0();
      func_0x0001001cddd0(plVar17,(long)puVar9 << 2,4);
      for (puVar14 = puVar9; puVar14 != (undefined8 *)0x0;
          puVar14 = (undefined8 *)((long)puVar14 + -1)) {
        FUN_100c47eb8(plVar17,piVar8[(long)puVar14 + -1]);
      }
      *(undefined1 *)((long)plVar17 + 0x46) = 0;
      uVar7 = 4;
      func_0x0001001ce088(plVar17,4);
      lVar16 = plVar17[6];
      if ((ulong)(lVar16 - plVar17[7]) < 4) {
        uVar7 = 4;
        func_0x0001001cde7c(plVar17,4);
        lVar16 = plVar17[6];
      }
      puVar10 = (undefined4 *)(lVar16 + -4);
      *puVar10 = (int)puVar9;
      plVar17[6] = (long)puVar10;
      auVar18._4_4_ = 0;
      auVar18._0_4_ = ((int)plVar17[4] - (int)puVar10) + (int)plVar17[5];
      auVar18._8_8_ = uVar7;
      return auVar18;
    }
    uVar11 = *plVar17 - *plVar3;
    uVar12 = (long)uVar11 >> 1;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar11) {
      uVar12 = 0x3fffffffffffffff;
    }
    FUN_100c47e00();
    piVar15 = (int *)((long)plVar17 + lVar16);
    lVar16 = (long)plVar17 + uVar12 * 4;
    iVar2 = *piVar8;
    piVar8 = (int *)*plVar3;
    lVar13 = (long)piVar15 - (plVar3[1] - (long)piVar8);
    piVar4 = piVar15 + 1;
    *piVar15 = iVar2;
    func_0x000107c610b4(lVar13);
    plVar17 = (long *)*plVar3;
    *plVar3 = lVar13;
    plVar3[1] = (long)piVar4;
    plVar3[2] = lVar16;
    if (plVar17 != (long *)0x0) {
      func_0x000107c60e14();
    }
  }
  plVar3[1] = (long)piVar4;
  auVar20._8_8_ = piVar8;
  auVar20._0_8_ = plVar17;
  return auVar20;
}



/* Entry: 100c47d40; end: 100c47dff;  */

undefined1  [16] FUN_100c47d40(long *param_1,undefined4 *param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  plVar3 = param_1 + 2;
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 < (undefined4 *)*plVar3) {
    puVar10 = puVar8 + 1;
    *puVar8 = *param_2;
  }
  else {
    lVar9 = (long)puVar8 - *param_1;
    uVar1 = (lVar9 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      func_0x000105096cd0();
      if ((ulong)param_2 >> 0x3e == 0) {
        lVar9 = (long)param_2 << 2;
        func_0x000107c60e20(lVar9);
        auVar13._8_8_ = param_2;
        auVar13._0_8_ = lVar9;
        return auVar13;
      }
      func_0x000104bd35f4();
      *(undefined1 *)((long)plVar3 + 0x46) = 1;
      func_0x0001001cddd0();
      func_0x0001001cddd0(plVar3,param_3 << 2,4);
      for (lVar9 = param_3; lVar9 != 0; lVar9 = lVar9 + -1) {
        FUN_100c47eb8(plVar3,param_2[lVar9 + -1]);
      }
      *(undefined1 *)((long)plVar3 + 0x46) = 0;
      uVar4 = 4;
      func_0x0001001ce088(plVar3,4);
      lVar9 = plVar3[6];
      if ((ulong)(lVar9 - plVar3[7]) < 4) {
        uVar4 = 4;
        func_0x0001001cde7c(plVar3,4);
        lVar9 = plVar3[6];
      }
      puVar8 = (undefined4 *)(lVar9 + -4);
      *puVar8 = (int)param_3;
      plVar3[6] = (long)puVar8;
      auVar11._4_4_ = 0;
      auVar11._0_4_ = ((int)plVar3[4] - (int)puVar8) + (int)plVar3[5];
      auVar11._8_8_ = uVar4;
      return auVar11;
    }
    uVar5 = *plVar3 - *param_1;
    uVar6 = (long)uVar5 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    FUN_100c47e00();
    puVar8 = (undefined4 *)((long)plVar3 + lVar9);
    lVar9 = (long)plVar3 + uVar6 * 4;
    uVar2 = *param_2;
    param_2 = (undefined4 *)*param_1;
    lVar7 = (long)puVar8 - (param_1[1] - (long)param_2);
    puVar10 = puVar8 + 1;
    *puVar8 = uVar2;
    func_0x000107c610b4(lVar7);
    plVar3 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar10;
    param_1[2] = lVar9;
    if (plVar3 != (long *)0x0) {
      func_0x000107c60e14();
    }
  }
  param_1[1] = (long)puVar10;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = plVar3;
  return auVar12;
}



/* Entry: 100c47e00; end: 100c47e33;  */

undefined1  [16] FUN_100c47e00(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3e == 0) {
    lVar1 = param_2 << 2;
    func_0x000107c60e20(lVar1);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  func_0x000104bd35f4();
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0();
  func_0x0001001cddd0(param_1,param_3 << 2,4);
  if (param_3 != 0) {
    lVar1 = param_3;
    do {
      lVar4 = lVar1 + -1;
      FUN_100c47eb8(param_1,*(undefined4 *)((param_2 - 4) + lVar1 * 4));
      lVar1 = lVar4;
    } while (lVar4 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar2 = 4;
  func_0x0001001ce088(param_1,4);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < 4) {
    uVar2 = 4;
    func_0x0001001cde7c(param_1,4);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  puVar3 = (undefined4 *)(lVar1 + -4);
  *puVar3 = (int)param_3;
  *(undefined4 **)(param_1 + 0x30) = puVar3;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = (*(int *)(param_1 + 0x20) - (int)puVar3) + *(int *)(param_1 + 0x28);
  auVar5._8_8_ = uVar2;
  return auVar5;
}



/* Entry: 100c47e34; end: 100c47eb7;  */

int FUN_100c47e34(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,param_3 << 2,4);
  func_0x0001001cddd0(param_1,param_3 << 2,4);
  if (param_3 != 0) {
    lVar1 = param_3;
    do {
      lVar3 = lVar1 + -1;
      FUN_100c47eb8(param_1,*(undefined4 *)(param_2 + -4 + lVar1 * 4));
      lVar1 = lVar3;
    } while (lVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  func_0x0001001ce088(param_1,4);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  puVar2 = (undefined4 *)(lVar1 + -4);
  *puVar2 = (int)param_3;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  return (*(int *)(param_1 + 0x20) - (int)puVar2) + *(int *)(param_1 + 0x28);
}



/* Entry: 100c47eb8; end: 100c47eff;  */

int FUN_100c47eb8(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  func_0x0001001ce088(param_1,4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce088(param_1,4);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  piVar5 = (int *)(lVar4 + -4);
  *piVar5 = (((iVar1 - iVar2) + iVar3) - param_2) + 4;
  *(int **)(param_1 + 0x30) = piVar5;
  return (*(int *)(param_1 + 0x20) - (int)piVar5) + *(int *)(param_1 + 0x28);
}



/* Entry: 100c47f00; end: 100c47f6f;  */

void FUN_100c47f00(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 100c47f70; end: 100c47fbf; -[SCSnapchattersBestFriendMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c47f94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c47f98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c47f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127911b0,0);
  return;
}



/* Entry: 100c47fc0; end: 100c47ffb; -[SCSnapchattersBestFriendMetadataChangeRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c47fd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c47fdc) */

void FUN_100c47fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 100c47ffc; end: 100c48257;  */

void FUN_100c47ffc(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uStack_57c;
  long lStack_578;
  long lStack_570;
  undefined8 uStack_568;
  undefined **ppuStack_560;
  undefined4 uStack_558;
  undefined4 uStack_548;
  undefined1 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined1 uStack_4e9;
  undefined **ppuStack_4e8;
  undefined4 uStack_4e0;
  undefined2 uStack_4d0;
  byte bStack_4ce;
  byte bStack_4cd;
  undefined1 *puStack_4b0;
  undefined ***pppuStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  long *plStack_480;
  undefined *apuStack_478 [3];
  undefined1 uStack_459;
  undefined **appuStack_458 [3];
  byte bStack_43f;
  byte bStack_43e;
  byte bStack_43d;
  undefined *apuStack_410 [3];
  long *plStack_3f8;
  long *plStack_3f0;
  undefined1 uStack_3e2;
  undefined1 uStack_3e1;
  undefined **ppuStack_3e0;
  undefined4 uStack_3d8;
  undefined1 uStack_3c8;
  byte bStack_3c7;
  byte bStack_3c6;
  byte bStack_3c5;
  undefined1 *puStack_3a8;
  undefined1 *puStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined **ppuStack_370;
  undefined4 uStack_368;
  undefined1 uStack_358;
  byte bStack_357;
  byte bStack_356;
  byte bStack_355;
  undefined ***pppuStack_338;
  undefined ***pppuStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined **ppuStack_300;
  undefined4 uStack_2f8;
  undefined2 uStack_2e8;
  byte bStack_2e6;
  byte bStack_2e5;
  undefined ***pppuStack_2c8;
  undefined ***pppuStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  lVar11 = param_1;
  FUN_100c48258(param_1,param_2);
  func_0x000107c61180();
  func_0x000107c61174();
  lVar3 = lVar11;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar11);
      }
      FUN_100c492e0(param_1,*(undefined8 *)(lVar10 * 8),1);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar11;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar11);
  lVar10 = param_1;
  uVar8 = param_2;
  FUN_100c49584(param_1,param_2);
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  func_0x000107c61174(lVar10);
  lVar3 = lVar10;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar10);
      }
      uVar8 = *(undefined8 *)(lVar11 * 8);
      FUN_100c492e0(param_1,uVar8,0);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar10;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(param_2);
  lVar3 = param_1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd8();
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  func_0x000107c61158(PTR_PTR_1126b15c8);
  if (lVar3 == 0) {
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_290,lVar3);
  }
  puVar4 = &uStack_3e1;
  FUN_100c43338();
  puVar5 = &uStack_3e2;
  FUN_100c486cc();
  bStack_3c5 = puVar4[0x1b] & puVar5[0x1b];
  bStack_3c7 = (puVar4[0x19] | puVar5[0x19]) & 1;
  bStack_3c6 = (puVar4[0x1a] | puVar5[0x1a]) & 1;
  uStack_3d8 = 4;
  uStack_3c8 = 0;
  ppuStack_3e0 = &PTR_SUB_1108629c8;
  plStack_378 = (long *)0x0;
  plStack_380 = (long *)0x0;
  uStack_388 = 0;
  uStack_390 = 0;
  lStack_398 = 0;
  puVar6 = &uStack_459;
  puStack_3a8 = puVar4;
  puStack_3a0 = puVar5;
  FUN_100bed558(puVar6);
  FUN_100c48938(apuStack_478,uVar8);
  func_0x0001004c2e3c(appuStack_458,0xc,puVar6,apuStack_478);
  bStack_355 = bStack_3c5 & bStack_43d;
  bStack_357 = (bStack_3c7 | bStack_43f) & 1;
  bStack_356 = (bStack_3c6 | bStack_43e) & 1;
  uStack_368 = 4;
  uStack_358 = 0;
  ppuStack_370 = &PTR_SUB_1108629c8;
  uStack_320 = 0;
  lStack_328 = 0;
  plStack_310 = (long *)0x0;
  uStack_318 = 0;
  plStack_308 = (long *)0x0;
  puVar4 = &uStack_4e9;
  pppuStack_338 = &ppuStack_3e0;
  pppuStack_330 = appuStack_458;
  func_0x0001008a97dc();
  uStack_558 = 0xf;
  uStack_548 = 0x100;
  uStack_530 = 0;
  ppuStack_560 = &PTR_SUB_1108629c8;
  uStack_520 = 0;
  uStack_528 = 0;
  uStack_510 = 0;
  lStack_518 = 0;
  plStack_500 = (long *)0x0;
  uStack_508 = 0;
  plStack_4f8 = (long *)0x0;
  bStack_4ce = puVar4[0x1a];
  bStack_4cd = puVar4[0x1b];
  uStack_4e0 = 10;
  uStack_4d0 = 0x100;
  ppuStack_4e8 = &PTR_SUB_1108629c8;
  plStack_480 = (long *)0x0;
  uStack_498 = 0;
  lStack_4a0 = 0;
  plStack_488 = (long *)0x0;
  uStack_490 = 0;
  bStack_2e6 = bStack_356 | bStack_4ce;
  bStack_2e5 = bStack_355 & bStack_4cd;
  uStack_2f8 = 4;
  uStack_2e8 = 0x100;
  ppuStack_300 = &PTR_SUB_1108629c8;
  pppuStack_2c8 = &ppuStack_370;
  pppuStack_2c0 = &ppuStack_4e8;
  uStack_2b0 = 0;
  lStack_2b8 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_2a8 = 0;
  plStack_298 = (long *)0x0;
  lStack_578 = 0;
  lStack_570 = 0;
  uStack_568 = 0;
  uStack_57c = 0;
  puVar7 = &uStack_290;
  puStack_4b0 = puVar4;
  pppuStack_4a8 = &ppuStack_560;
  func_0x0001000e77a0(puVar7,&ppuStack_300,&lStack_578,&uStack_57c);
  func_0x000107c61180();
  if (lStack_578 != 0) {
    lStack_570 = lStack_578;
    func_0x000107c60e14();
  }
  plVar2 = plStack_298;
  ppuStack_300 = &PTR_SUB_1108629c8;
  plStack_298 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_2a0;
  plStack_2a0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_2b8 != 0) {
    func_0x000107c60e14();
  }
  plVar2 = plStack_480;
  ppuStack_4e8 = &PTR_SUB_1108629c8;
  plStack_480 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_488;
  plStack_488 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_4a0 != 0) {
    func_0x000107c60e14();
  }
  plVar2 = plStack_4f8;
  ppuStack_560 = &PTR_SUB_1108629c8;
  plStack_4f8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_500;
  plStack_500 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_518 != 0) {
    func_0x000107c60e14();
  }
  plVar2 = plStack_308;
  ppuStack_370 = &PTR_SUB_1108629c8;
  plStack_308 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_310;
  plStack_310 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_328 != 0) {
    func_0x000107c60e14();
  }
  plVar2 = plStack_3f0;
  appuStack_458[0] = &PTR_DAT_110862700;
  plStack_3f0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_3f8;
  plStack_3f8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  ppuStack_4e8 = apuStack_410;
  func_0x000100105004(&ppuStack_4e8);
  ppuStack_4e8 = apuStack_478;
  func_0x000100105004(&ppuStack_4e8);
  plVar2 = plStack_378;
  ppuStack_3e0 = &PTR_SUB_1108629c8;
  plStack_378 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_380;
  plStack_380 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_398 != 0) {
    func_0x000107c60e14();
  }
  func_0x0001000e76e0(&uStack_268);
  func_0x000107c61170(uStack_278);
  func_0x000107c61170(uStack_280);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100c48258; end: 100c486cb;  */

void FUN_100c48258(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_39c;
  long lStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined **ppuStack_380;
  undefined4 uStack_378;
  undefined4 uStack_368;
  undefined1 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined1 uStack_309;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined2 uStack_2f0;
  byte bStack_2ee;
  byte bStack_2ed;
  undefined1 *puStack_2d0;
  undefined ***pppuStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined *apuStack_298 [3];
  undefined1 uStack_279;
  undefined **appuStack_278 [3];
  byte bStack_25f;
  byte bStack_25e;
  byte bStack_25d;
  undefined *apuStack_230 [3];
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  byte bStack_177;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61158(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_b0,param_1);
  }
  puVar2 = &uStack_201;
  FUN_100c43338();
  puVar3 = &uStack_202;
  FUN_100c486cc();
  bStack_1e5 = puVar2[0x1b] & puVar3[0x1b];
  bStack_1e7 = (puVar2[0x19] | puVar3[0x19]) & 1;
  bStack_1e6 = (puVar2[0x1a] | puVar3[0x1a]) & 1;
  uStack_1f8 = 4;
  uStack_1e8 = 0;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1b8 = 0;
  puVar4 = &uStack_279;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar3;
  FUN_100bed558(puVar4);
  FUN_100c48938(apuStack_298,param_2);
  func_0x0001004c2e3c(appuStack_278,0xc,puVar4,apuStack_298);
  bStack_175 = bStack_1e5 & bStack_25d;
  bStack_177 = (bStack_1e7 | bStack_25f) & 1;
  bStack_176 = (bStack_1e6 | bStack_25e) & 1;
  uStack_188 = 4;
  uStack_178 = 0;
  ppuStack_190 = &PTR_SUB_1108629c8;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar2 = &uStack_309;
  pppuStack_158 = &ppuStack_200;
  pppuStack_150 = appuStack_278;
  func_0x0001008a97dc();
  uStack_378 = 0xf;
  uStack_368 = 0x100;
  uStack_350 = 0;
  ppuStack_380 = &PTR_SUB_1108629c8;
  uStack_340 = 0;
  uStack_348 = 0;
  uStack_330 = 0;
  lStack_338 = 0;
  plStack_320 = (long *)0x0;
  uStack_328 = 0;
  plStack_318 = (long *)0x0;
  bStack_2ee = puVar2[0x1a];
  bStack_2ed = puVar2[0x1b];
  uStack_300 = 10;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_SUB_1108629c8;
  plStack_2a0 = (long *)0x0;
  uStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  bStack_106 = bStack_176 | bStack_2ee;
  bStack_105 = bStack_175 & bStack_2ed;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_308;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_398 = 0;
  lStack_390 = 0;
  uStack_388 = 0;
  uStack_39c = 0;
  puVar5 = &uStack_b0;
  puStack_2d0 = puVar2;
  pppuStack_2c8 = &ppuStack_380;
  func_0x0001000e77a0(puVar5,&ppuStack_120,&lStack_398,&uStack_39c);
  func_0x000107c61180();
  if (lStack_398 != 0) {
    lStack_390 = lStack_398;
    func_0x000107c60e14();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_2a0;
  ppuStack_308 = &PTR_SUB_1108629c8;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2c0 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_318;
  ppuStack_380 = &PTR_SUB_1108629c8;
  plStack_318 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_320;
  plStack_320 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_338 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_210;
  appuStack_278[0] = &PTR_DAT_110862700;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_308 = apuStack_230;
  func_0x000100105004(&ppuStack_308);
  ppuStack_308 = apuStack_298;
  func_0x000100105004(&ppuStack_308);
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b8 != 0) {
    func_0x000107c60e14();
  }
  func_0x0001000e76e0(&uStack_88);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c486cc; end: 100c4875f;  */

undefined8 FUN_100c486cc(void)

{
  int iVar1;
  
  if ((bRam0000000113828de0 & 1) == 0) {
    iVar1 = 0x13828de0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100c48760();
      func_0x000100c48810();
      FUN_100c488a4(0x113828d70,10,0x113829390,0x113829408);
      func_0x000107c60e34(&DAT_108c2d458,0x113828d70,0x100000000);
      func_0x000107c60e4c(0x113828de0);
    }
  }
  return 0x113828d70;
}



/* Entry: 100c48760; end: 100c488a3;  */

void FUN_100c48760(void)

{
  int iVar1;
  
  if ((bRam0000000113829400 & 1) == 0) {
    iVar1 = 0x13829400;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113829398 = 0xe;
      puRam00000001138293a0 = &UNK_10f50c12e;
      uRam00000001138293a8 = 0x1010000;
      pcRam00000001138293b0 = FUN_100c48d58;
      puRam00000001138293b8 = &UNK_108c2e850;
      ppuRam0000000113829390 = &PTR_DAT_110ab8d88;
      uRam00000001138293d0 = 0;
      uRam00000001138293c8 = 0;
      uRam00000001138293e0 = 0;
      uRam00000001138293d8 = 0;
      uRam00000001138293f0 = 0;
      uRam00000001138293e8 = 0;
      uRam00000001138293f8 = 0;
      func_0x000107c60e34(&DAT_108c2e920,0x113829390,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113829400);
      return;
    }
  }
  return;
}



/* Entry: 100c488a4; end: 100c48937;  */

void FUN_100c488a4(undefined8 *param_1,int param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  if ((*(byte *)(param_3 + 0x19) & 1) == 0) {
    bVar1 = *(byte *)(param_4 + 0x19);
  }
  else {
    bVar1 = 1;
  }
  if ((*(byte *)(param_3 + 0x1a) & 1) == 0) {
    bVar2 = *(byte *)(param_4 + 0x1a);
  }
  else {
    bVar2 = 1;
  }
  if (param_2 == 4) {
    if ((*(byte *)(param_3 + 0x1b) & 1) == 0) {
      bVar3 = 0;
      goto LAB_100c488f4;
    }
  }
  else if ((*(byte *)(param_3 + 0x1b) & 1) != 0) {
    bVar3 = 1;
    goto LAB_100c488f4;
  }
  bVar3 = *(byte *)(param_4 + 0x1b);
LAB_100c488f4:
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x19) = bVar1 & 1;
  *(byte *)((long)param_1 + 0x1a) = bVar2 & 1;
  *(byte *)((long)param_1 + 0x1b) = bVar3 & 1;
  *param_1 = &PTR_DAT_110ab8df8;
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  return;
}



/* Entry: 100c48938; end: 100c48a9b;  */

undefined8 * FUN_100c48938(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  int *piVar14;
  uint uVar15;
  undefined8 unaff_x22;
  long unaff_x23;
  long *plVar16;
  undefined8 *unaff_x24;
  byte bStack_163;
  byte bStack_162;
  byte bStack_161;
  undefined8 *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte abStack_d8 [128];
  long lStack_58;
  
  puVar12 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar8 = param_2;
  func_0x000107c40808();
  func_0x0001004c2bb4(param_1);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x000107c61174(param_2);
  pbVar13 = abStack_d8;
  puVar9 = param_2;
  func_0x000107c4080c();
  if (puVar9 != (undefined8 *)0x0) {
    unaff_x23 = *plStack_110;
    do {
      unaff_x24 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != unaff_x23) {
          func_0x000107c61128(param_2);
        }
        unaff_x22 = *(undefined8 *)(lStack_118 + (long)unaff_x24 * 8);
        func_0x000107c61174(unaff_x22);
        puVar8 = &uStack_e0;
        uStack_e0 = unaff_x22;
        func_0x0001004c2d3c(param_1);
        func_0x000107c61170(uStack_e0);
        unaff_x24 = (undefined8 *)((long)unaff_x24 + 1);
      } while (puVar9 != unaff_x24);
      pbVar13 = abStack_d8;
      puVar9 = param_2;
      puVar12 = &uStack_120;
      func_0x000107c4080c();
    } while (puVar9 != (undefined8 *)0x0);
  }
  func_0x000107c61170(param_2);
  puVar9 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  func_0x000107c60e78();
  if ((int)puVar8 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  pcStack_128 = FUN_100c48a9c;
  puStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  uStack_148 = 0;
  puStack_140 = param_1;
  puStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar12);
  uVar15 = *(uint *)(puVar9 + 1);
  if ((int)uVar15 < 0xe) {
    if (1 < uVar15 - 1) {
      if (uVar15 - 0xc < 2) {
        plVar16 = (long *)puVar9[7];
        func_0x000107c61174(puVar12);
        (**(code **)(*plVar16 + 0x28))(plVar16,puVar8,puVar12,pbVar13);
        piVar2 = (int *)puVar9[9];
        piVar3 = (int *)puVar9[10];
        iVar7 = (int)plVar16;
        if (uVar15 == 0xc) {
          if (piVar2 == piVar3) {
            uVar15 = 0;
          }
          else {
            do {
              piVar14 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar15 = (uint)(iVar7 == iVar4);
              piVar2 = piVar14;
            } while (iVar7 != iVar4 && piVar14 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar15 = 1;
        }
        else {
          do {
            piVar14 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar15 = (uint)(iVar7 != iVar4);
            piVar2 = piVar14;
          } while (iVar7 != iVar4 && piVar14 != piVar3);
        }
        func_0x000107c61170(puVar12);
        goto LAB_100c48c80;
      }
      goto LAB_100c48bcc;
    }
    *pbVar13 = 0;
    bStack_163 = 0;
    (**(code **)(*(long *)puVar9[7] + 0x28))((long *)puVar9[7],puVar8,puVar12,&bStack_163);
    bVar6 = uVar15 != 1;
    bVar5 = bStack_163;
  }
  else {
    if (uVar15 - 0xf < 2) {
      *pbVar13 = 0;
      uVar15 = (uint)*(byte *)(puVar9 + 6);
      goto LAB_100c48c80;
    }
    if (uVar15 == 0xe) {
      lVar1 = 0x28;
      puVar10 = puVar12;
      if (puVar8 != (undefined8 *)0x0) {
        lVar1 = 0x20;
        puVar10 = puVar8;
      }
      (**(code **)((long)puVar9 + lVar1))(puVar10,pbVar13);
      uVar15 = (uint)puVar10;
      goto LAB_100c48c80;
    }
LAB_100c48bcc:
    if ((uVar15 & 0xfffffffe) != 10) {
      uVar15 = 0;
      goto LAB_100c48c80;
    }
    plVar16 = (long *)puVar9[7];
    plVar11 = (long *)puVar9[8];
    (**(code **)(*plVar16 + 0x28))(plVar16,puVar8,puVar12,&bStack_161);
    (**(code **)(*plVar11 + 0x28))(plVar11,puVar8,puVar12,&bStack_162);
    *pbVar13 = (bStack_161 | bStack_162) & 1;
    bVar6 = uVar15 == 0xb;
    bVar5 = (int)plVar16 == (int)plVar11;
  }
  uVar15 = (uint)(bVar6 ^ bVar5);
LAB_100c48c80:
  func_0x000107c61170(puVar12);
  return (undefined8 *)(ulong)(uVar15 & 1);
}



/* Entry: 100c48a9c; end: 100c48ca7;  */

uint FUN_100c48a9c(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  func_0x000107c61174(param_3);
  uVar11 = *(uint *)(param_1 + 8);
  if ((int)uVar11 < 0xe) {
    if (1 < uVar11 - 1) {
      if (uVar11 - 0xc < 2) {
        plVar12 = *(long **)(param_1 + 0x38);
        func_0x000107c61174(param_3);
        (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
        piVar2 = *(int **)(param_1 + 0x48);
        piVar3 = *(int **)(param_1 + 0x50);
        iVar7 = (int)plVar12;
        if (uVar11 == 0xc) {
          if (piVar2 == piVar3) {
            uVar11 = 0;
          }
          else {
            do {
              piVar10 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar11 = (uint)(iVar7 == iVar4);
              piVar2 = piVar10;
            } while (iVar7 != iVar4 && piVar10 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar11 = 1;
        }
        else {
          do {
            piVar10 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar11 = (uint)(iVar7 != iVar4);
            piVar2 = piVar10;
          } while (iVar7 != iVar4 && piVar10 != piVar3);
        }
        func_0x000107c61170(param_3);
        goto LAB_100c48c80;
      }
      goto LAB_100c48bcc;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar6 = uVar11 != 1;
    bVar5 = bStack_43;
  }
  else {
    if (uVar11 - 0xf < 2) {
      *param_4 = 0;
      uVar11 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_100c48c80;
    }
    if (uVar11 == 0xe) {
      lVar1 = 0x28;
      lVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar8,param_4);
      uVar11 = (uint)lVar8;
      goto LAB_100c48c80;
    }
LAB_100c48bcc:
    if ((uVar11 & 0xfffffffe) != 10) {
      uVar11 = 0;
      goto LAB_100c48c80;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    plVar9 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_41);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar6 = uVar11 == 0xb;
    bVar5 = (int)plVar12 == (int)plVar9;
  }
  uVar11 = (uint)(bVar6 ^ bVar5);
LAB_100c48c80:
  func_0x000107c61170(param_3);
  return uVar11 & 1;
}



/* Entry: 100c48ca8; end: 100c48d57;  */

ulong FUN_100c48ca8(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100c48d58; end: 100c48dcf;  */

undefined1 FUN_100c48d58(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  ushort *puVar4;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((0x16 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb], uVar3 != 0)) {
    puVar2 = (uint *)((long)piVar1 + uVar3);
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    puVar4 = (ushort *)((long)piVar1 - (long)*piVar1);
    if ((6 < *puVar4) && (puVar4[3] != 0)) {
      *param_2 = 0;
      if ((ulong)puVar4[2] != 0) {
        return *(undefined1 *)((long)piVar1 + (ulong)puVar4[2]);
      }
      return 0;
    }
  }
  *param_2 = 1;
  return 0;
}



/* Entry: 100c48dd0; end: 100c48ddb; -[SCSnapchattersIncomingFriendInfo .cxx_destruct] */

void FUN_100c48dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c48ddc; end: 100c48de7; -[SCSnapchattersFriendmoji .cxx_destruct] */

void FUN_100c48ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c48de8; end: 100c49063;  */

undefined8 * FUN_100c48de8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  func_0x000107c60e20();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_DAT_110ab8df8;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        func_0x000108c2f204(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_DAT_110ab8df8;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_DAT_110ab8df8;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_100c48f10;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_100c48f10;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_100c48f10:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_DAT_110ab8df8;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 100c49064; end: 100c492df;  */

undefined8 * FUN_100c49064(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  func_0x000107c60e20();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_DAT_110ab8d88;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        func_0x000108c2f204(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_DAT_110ab8d88;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_DAT_110ab8d88;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_100c4918c;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_100c4918c;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_100c4918c:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_DAT_110ab8d88;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 100c492e0; end: 100c49583;  */

void FUN_100c492e0(undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126c2820;
  FUN_100c36048(PTR_PTR_1126c2820,param_2);
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = param_2;
    func_0x000107c439a8();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c3a4();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c3e1d0();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
    }
    else {
      lVar5 = param_2;
      func_0x000107c439a8();
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c5c3a4();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c3e1d0();
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c49aac();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      if (param_3 != (int)lVar8) {
        lVar2 = param_2;
        func_0x000107c439a8(param_2);
        func_0x000107c61180();
        FUN_100c376d4(auStack_a8,lVar2);
        func_0x000107c61170(lVar2);
        plVar9 = &lStack_a0;
        FUN_100c378bc();
        *(undefined1 *)plVar9 = 0;
        *(char *)(plVar9 + 1) = (char)param_3;
        puVar10 = auStack_a8;
        FUN_100c37c3c(puVar10);
        func_0x000107c61180();
        lVar2 = lStack_90;
        lStack_90 = 0;
        if (lVar2 != 0) {
          func_0x000107c60e14();
        }
        lVar2 = lStack_98;
        lStack_98 = 0;
        if (lVar2 != 0) {
          func_0x000107c60e14();
        }
        lVar2 = lStack_a0;
        lStack_a0 = 0;
        if (lVar2 != 0) {
          func_0x000107c60e14();
        }
        func_0x000107c61198(puVar1);
        func_0x000107c61170(puVar10);
        func_0x000107c5c28c(param_1);
        func_0x000107c611b0();
      }
    }
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c49584; end: 100c499f7;  */

void FUN_100c49584(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_39c;
  long lStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined **ppuStack_380;
  undefined4 uStack_378;
  undefined4 uStack_368;
  undefined1 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined1 uStack_309;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined2 uStack_2f0;
  byte bStack_2ee;
  byte bStack_2ed;
  undefined1 *puStack_2d0;
  undefined ***pppuStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined *apuStack_298 [3];
  undefined1 uStack_279;
  undefined **appuStack_278 [3];
  byte bStack_25f;
  byte bStack_25e;
  byte bStack_25d;
  undefined *apuStack_230 [3];
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  byte bStack_177;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61158(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_b0,param_1);
  }
  puVar2 = &uStack_201;
  FUN_100c43338();
  puVar3 = &uStack_202;
  FUN_100c486cc();
  bStack_1e5 = puVar2[0x1b] & puVar3[0x1b];
  bStack_1e7 = (puVar2[0x19] | puVar3[0x19]) & 1;
  bStack_1e6 = (puVar2[0x1a] | puVar3[0x1a]) & 1;
  uStack_1f8 = 4;
  uStack_1e8 = 0;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1b8 = 0;
  puVar4 = &uStack_279;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar3;
  FUN_100bed558(puVar4);
  FUN_100c48938(apuStack_298,param_2);
  func_0x0001004c2e3c(appuStack_278,0xd,puVar4,apuStack_298);
  bStack_175 = bStack_1e5 & bStack_25d;
  bStack_177 = (bStack_1e7 | bStack_25f) & 1;
  bStack_176 = (bStack_1e6 | bStack_25e) & 1;
  uStack_188 = 4;
  uStack_178 = 0;
  ppuStack_190 = &PTR_SUB_1108629c8;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar2 = &uStack_309;
  pppuStack_158 = &ppuStack_200;
  pppuStack_150 = appuStack_278;
  func_0x0001008a97dc();
  uStack_378 = 0xf;
  uStack_368 = 0x100;
  uStack_350 = 0;
  ppuStack_380 = &PTR_SUB_1108629c8;
  uStack_340 = 0;
  uStack_348 = 0;
  uStack_330 = 0;
  lStack_338 = 0;
  plStack_320 = (long *)0x0;
  uStack_328 = 0;
  plStack_318 = (long *)0x0;
  bStack_2ee = puVar2[0x1a];
  bStack_2ed = puVar2[0x1b];
  uStack_300 = 10;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_SUB_1108629c8;
  plStack_2a0 = (long *)0x0;
  uStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  bStack_106 = bStack_176 | bStack_2ee;
  bStack_105 = bStack_175 & bStack_2ed;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_308;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_398 = 0;
  lStack_390 = 0;
  uStack_388 = 0;
  uStack_39c = 0;
  puVar5 = &uStack_b0;
  puStack_2d0 = puVar2;
  pppuStack_2c8 = &ppuStack_380;
  func_0x0001000e77a0(puVar5,&ppuStack_120,&lStack_398,&uStack_39c);
  func_0x000107c61180();
  if (lStack_398 != 0) {
    lStack_390 = lStack_398;
    func_0x000107c60e14();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_2a0;
  ppuStack_308 = &PTR_SUB_1108629c8;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2c0 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_318;
  ppuStack_380 = &PTR_SUB_1108629c8;
  plStack_318 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_320;
  plStack_320 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_338 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_210;
  appuStack_278[0] = &PTR_DAT_110862700;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_308 = apuStack_230;
  func_0x000100105004(&ppuStack_308);
  ppuStack_308 = apuStack_298;
  func_0x000100105004(&ppuStack_308);
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b8 != 0) {
    func_0x000107c60e14();
  }
  func_0x0001000e76e0(&uStack_88);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c499f8; end: 100c49b2f; -[SCSnapchattersBitmojiInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c49a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c49a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c49a40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c49a2c) */
/* WARNING: Removing unreachable block (ram,0x000100c49a14) */
/* WARNING: Removing unreachable block (ram,0x000100c49a44) */

void FUN_100c499f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 100c49b30; end: 100c4a0a7;  */

void FUN_100c49b30(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c412e0();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126db2b8;
  func_0x000107c610f4();
  func_0x000107c4636c();
  func_0x000107c61174(0);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar5 = puVar3;
  func_0x000107c50864();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4080c();
  lVar11 = lRam0000000000000000;
  while (puVar6 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar11) {
        func_0x000107c61128(puVar5);
      }
      uVar17 = *(undefined8 *)((long)puVar13 * 8);
      uVar7 = uVar17;
      func_0x000107c43a04(uVar17);
      func_0x000107c61180();
      uVar16 = uVar7;
      func_0x000107c44e64();
      uVar8 = uVar17;
      func_0x000107c43a04(uVar17);
      func_0x000107c61180();
      uVar9 = uVar8;
      func_0x000107c4c0fc();
      FUN_100c4a928(uVar16,uVar9);
      func_0x000107c61180();
      uVar9 = uVar16;
      func_0x000107c4c10c();
      func_0x000107c61180();
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      puVar10 = PTR_PTR_1126db2c0;
      func_0x000107c610f4();
      func_0x000107c4d378(uVar17);
      func_0x000107c48248(puVar10);
      func_0x000107c56bd8(puVar4);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(uVar9);
      puVar13 = puVar13 + 1;
    } while (puVar6 != puVar13);
    puVar6 = puVar5;
    func_0x000107c4080c();
  }
  func_0x000107c61170(puVar5);
  puVar6 = puVar4;
  func_0x000107c3db60(puVar4);
  func_0x000107c61180();
  lVar15 = param_1;
  FUN_100c48258(param_1,puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61174(lVar15);
  lVar11 = lVar15;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar15);
      }
      uVar16 = *(undefined8 *)(lVar14 * 8);
      uVar7 = uVar16;
      func_0x000107c5d984(uVar16);
      func_0x000107c61180();
      puVar6 = puVar4;
      func_0x000107c4d9e8(puVar4);
      func_0x000107c61180();
      FUN_100c4cf2c(param_1,uVar16,puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar7);
      lVar14 = lVar14 + 1;
    } while (lVar11 != lVar14);
    lVar11 = lVar15;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar15);
  puVar6 = puVar4;
  func_0x000107c3db60(puVar4);
  func_0x000107c61180();
  lVar14 = param_1;
  FUN_100c49584(param_1,puVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar6);
  func_0x000107c61174(lVar14);
  lVar11 = lVar14;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar14);
      }
      FUN_100c4cf2c(param_1,*(undefined8 *)(lVar15 * 8),0);
      lVar15 = lVar15 + 1;
    } while (lVar11 != lVar15);
    lVar11 = lVar14;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(0);
  func_0x000107c61170(puVar2);
  lVar11 = param_1;
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    func_0x000107c60e78();
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_1);
    func_0x000107c60bd8(lVar11);
    if (puRam000000011372e160 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126ae978;
      func_0x000107c3dbcc();
      puRam000000011372e160 = puVar6;
    }
    return;
  }
  return;
}



/* Entry: 100c4a0a8; end: 100c4a10f; +[ReverseBestFriends descriptor] */

void FUN_100c4a0a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e160 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8db0,
                        &PTR____CFConstantStringClassReference_110eefc38,&PTR_DAT_113291958,
                        &PTR_DAT_113291970,1,0x10,0x1c);
    puRam000000011372e160 = puVar1;
  }
  return;
}



/* Entry: 100c4a110; end: 100c4a12f;  */

void FUN_100c4a110(void)

{
  func_0x000107c61168(&PTR_PTR_112924540);
  return;
}



/* Entry: 100c4a130; end: 100c4a137;  */

void FUN_100c4a130(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106cba78;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106cba78;
  return;
}



/* Entry: 100c4a138; end: 100c4a1d3;  */

void FUN_100c4a138(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106cba78;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106cba78;
  return;
}



/* Entry: 100c4a1d4; end: 100c4a1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4a1d4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_100c4a110();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe6f78) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100c4a1dc; end: 100c4a247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4a1dc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_100c4a110();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fe6f78) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100c4a248; end: 100c4a24f;  */

void FUN_100c4a248(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112fe6fd8,&UNK_10dc4e0c0);
  uVar1 = 0;
  FUN_100c4a2c0();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c4a250; end: 100c4a2bf;  */

void FUN_100c4a250(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112fe6fd8,&UNK_10dc4e0c0);
  uVar1 = 0;
  FUN_100c4a2c0();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c4a2c0; end: 100c4a303;  */

void FUN_100c4a2c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad878;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112fe6fe0 = puVar1;
  return;
}



/* Entry: 100c4a304; end: 100c4a6cf;  */

void FUN_100c4a304(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106ccea8;
  ppuVar4 = &PTR_DAT_112fe86c8;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112fe76c0;
  func_0x0001000285a8(0x112fe76c0,&UNK_10dc4ecd8);
  func_0x0001000a6ee8(&UNK_1106cbda8,
                      "DreamsSnapRendererPluginMetadataApplyingFactoryServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x61,2,FUN_100c4ab50,param_2,uVar2,&UNK_1106cbda8,&PTR_DAT_112fe7050);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106cbe48,
                      "ExternalMusicOffscreenPlaybackEventServicesProviderWrapperScopeInitializationPluginKey"
                      ,0x56,2,FUN_100c4ac14,param_3,uVar2,&UNK_1106cbe48,&PTR_DAT_112fe7130);
  func_0x000107c61574(param_3);
  puVar3 = &UNK_1106cc0b8;
  func_0x000107c613fc(&UNK_1106cc0b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1106cc440,
                      "LensProcessingSnapRendererScopeGraphBridgeScopeInitializationPluginKey",0x46,
                      2,FUN_100c4ad58,puVar3,uVar2,&UNK_1106cc440,&PTR_DAT_112fe7c78);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1106cbee8,
                      "SCLensEffectOffscreenRenderingServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x50,2,FUN_100c4b0d4,param_6,uVar2,&UNK_1106cbee8,&PTR_DAT_112fe7200);
  func_0x000107c61574(param_6);
  puVar3 = &UNK_1106cc0e0;
  func_0x000107c613fc(&UNK_1106cc0e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_7;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1106cbb08,
                      "SCLensProcessingSnapRendererScopedServicesScopeInitializationPluginKey",0x46,
                      2,0x100c4b198,puVar3,uVar2,&UNK_1106cbb08,&PTR_DAT_112fe6f88);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_1106cbf68,
                      "SCSnapRendererContentEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_100c4b3b0,param_8,uVar2,&UNK_1106cbf68,&PTR_DAT_112fe7338);
  func_0x000107c61574(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_1106cbfe8,
                      "SCSnapRendererMemoriesLivePlaybackEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4f,2,FUN_100c4dac0,param_9,uVar2,&UNK_1106cbfe8,&PTR_DAT_112fe7468);
  func_0x000107c61574(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_1106cc068,
                      "SCSnapRendererMemoriesPlaybackEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,FUN_100c4e6d4,param_10,uVar2,&UNK_1106cc068,&PTR_DAT_112fe7590);
  func_0x000107c61574(param_10);
  uVar2 = 0x112fe76c8;
  func_0x0001000285a8(0x112fe76c8,&UNK_10dc4ece0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCLensProcessingSnapRendererScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 100c4a6d0; end: 100c4a703;  */

void FUN_100c4a6d0(void)

{
  long unaff_x20;
  
  FUN_100c4a304(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 100c4a704; end: 100c4a76b; +[ReverseBestFriend descriptor] */

void FUN_100c4a704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8e00,
                        &PTR____CFConstantStringClassReference_110eefc58,&PTR_DAT_113291958,
                        &PTR_s_friendUserId_113291990,2,0x10,0x1c);
    puRam000000011372e168 = puVar1;
  }
  return;
}



/* Entry: 100c4a76c; end: 100c4a77f;  */

void FUN_100c4a76c(void)

{
  return;
}



/* Entry: 100c4a780; end: 100c4a7e7; +[UUID descriptor] */

void FUN_100c4a780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8ea0,
                        &PTR____CFConstantStringClassReference_110e7e6d8,&PTR_DAT_1132919d0,
                        &PTR_DAT_1132919e8,2,0x18,0x1c);
    puRam000000011372e170 = puVar1;
  }
  return;
}



/* Entry: 100c4a7e8; end: 100c4a873;  */

void FUN_100c4a7e8(void)

{
  return;
}



/* Entry: 100c4a874; end: 100c4a8d7;  */

void FUN_100c4a874(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c4a8d8; end: 100c4a927;  */

undefined8 FUN_100c4a8d8(void)

{
  return 0x1b;
}



/* Entry: 100c4a928; end: 100c4aabf;  */

void FUN_100c4a928(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lStack_58;
  long lStack_50;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar1 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  uStack_38 = uVar1 >> 0x20 | uVar1 << 0x20;
  uVar1 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  uStack_40 = uVar1 >> 0x20 | uVar1 << 0x20;
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c412e4(PTR__OBJC_CLASS___NSData_1126ae778,param_2,&uStack_38,8);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c412e4();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c4adac();
  puVar5 = puVar3;
  func_0x000107c4adac();
  func_0x000100291d50(&lStack_58,puVar5 + (long)puVar4);
  puVar6 = puVar2;
  func_0x000107c61178();
  func_0x000107c3eea8();
  if (0 < (long)puVar4) {
    puVar8 = (undefined *)0x0;
    do {
      puVar8[lStack_58] = puVar6[(long)puVar8];
      puVar8 = puVar8 + 1;
    } while (puVar4 != puVar8);
  }
  puVar7 = puVar3;
  func_0x000107c61178();
  func_0x000107c3eea8();
  if (0 < (long)puVar5) {
    do {
      puVar4[lStack_58] = *puVar7;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (puVar5 != (undefined1 *)0x0);
  }
  puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x000107c48ff4();
  puVar6 = puVar4;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    func_0x000107c60e14();
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100c4aac0; end: 100c4aacb;  */

undefined ** FUN_100c4aac0(void)

{
  return &PTR_DAT_112fe86c8;
}



/* Entry: 100c4aacc; end: 100c4ab4f;  */

void FUN_100c4aacc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 100c4ab50; end: 100c4ab7b;  */

void FUN_100c4ab50(void)

{
  FUN_100c4aacc();
  return;
}



/* Entry: 100c4ab7c; end: 100c4ab83;  */

void FUN_100c4ab7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  func_0x0001005d8744(1,&UNK_103ac8d48);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100c4ab84; end: 100c4ac07;  */

void FUN_100c4ab84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,&UNK_103ac8d48,param_2,&UNK_103ac8d4c,param_2,&UNK_103ac8d74,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100c4ac08; end: 100c4ac13;  */

undefined ** FUN_100c4ac08(void)

{
  return &PTR_DAT_112fe86c8;
}



/* Entry: 100c4ac14; end: 100c4ac3f;  */

void FUN_100c4ac14(void)

{
  FUN_100c4aacc();
  return;
}



/* Entry: 100c4ac40; end: 100c4ac47;  */

void FUN_100c4ac40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  func_0x0001005d8744(1,&UNK_103ac8e78);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100c4ac48; end: 100c4accb;  */

void FUN_100c4ac48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,&UNK_103ac8e78,param_2,&UNK_103ac8e7c,param_2,&UNK_103ac8ea4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100c4accc; end: 100c4acd7;  */

undefined ** FUN_100c4accc(void)

{
  return &PTR_DAT_112fe86c8;
}



/* Entry: 100c4acd8; end: 100c4ad57;  */

void FUN_100c4acd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106cc328;
  func_0x000107c613fc(&UNK_1106cc328,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_100c4ad98,puVar1);
  return;
}



/* Entry: 100c4ad58; end: 100c4ad97;  */

void FUN_100c4ad58(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100c4acd8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensProcessingSnapRendererScopeGraphBridgeScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c4ad98; end: 100c4ad9f;  */

void FUN_100c4ad98(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112fe7c20,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fe7c20,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106cc480;
  func_0x000107c613fc(&UNK_1106cc480,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103acbf68;
  func_0x00010058fa64(&UNK_103acbf68,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


