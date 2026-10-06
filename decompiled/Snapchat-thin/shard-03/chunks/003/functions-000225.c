/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10275826c; end: 1027582d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275826c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  func_0x0001002ceac4();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ebc1d8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1027582d4; end: 10275831f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027582d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebc1d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102758320; end: 102758353;  */

void FUN_102758320(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102758354; end: 102758363;  */

undefined1  [16] FUN_102758354(void)

{
  return ZEXT816(0x110544e88);
}



/* Entry: 102758364; end: 102758373; -[_TtC27MemTwoAiSnapsTabServicesAPI24MemTwoAiSnapsTabServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102758364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebc1d8));
  return;
}



/* Entry: 102758374; end: 1027583df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102758374(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002aeeb0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebc210) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027583e0; end: 1027583e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027583e0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001002aeeb0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebc210) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1027583e8; end: 10275845b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027583e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebc210) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10275845c; end: 1027584bb; -[_TtC40MemoriesValdiSerializedWorkerServicesAPI37MemoriesValdiSerializedWorkerServices init] */

void FUN_10275845c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesValdiSerializedWorkerServicesAPI.MemoriesValdiSerializedWorkerServices"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102758488);
  (*pcVar1)();
}



/* Entry: 1027584bc; end: 1027584cb;  */

undefined1  [16] FUN_1027584bc(void)

{
  return ZEXT816(0x110544f28);
}



/* Entry: 1027584cc; end: 1027584db; -[_TtC40MemoriesValdiSerializedWorkerServicesAPI37MemoriesValdiSerializedWorkerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027584cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebc210));
  return;
}



/* Entry: 1027584dc; end: 1027584eb; -[_TtC29SearchNativeBridgeServicesAPI26SearchNativeBridgeServices searchNativeBridge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027584dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ebc248));
  return;
}



/* Entry: 1027584ec; end: 1027585f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027584ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebc240) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ebc248) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1027585f4; end: 102758627;  */

void FUN_1027585f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102758628; end: 10275865f; -[_TtC29SearchNativeBridgeServicesAPI26SearchNativeBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102758628(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebc240));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebc248));
  return;
}



/* Entry: 102758660; end: 102758893;  */

/* WARNING: Possible PIC construction at 0x0001027587c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027587d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027587e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027587f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102758804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102758814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102758824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102758834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102758844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102758854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102758864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102758858) */
/* WARNING: Removing unreachable block (ram,0x000102758848) */
/* WARNING: Removing unreachable block (ram,0x000102758838) */
/* WARNING: Removing unreachable block (ram,0x000102758828) */
/* WARNING: Removing unreachable block (ram,0x000102758818) */
/* WARNING: Removing unreachable block (ram,0x000102758808) */
/* WARNING: Removing unreachable block (ram,0x0001027587f8) */
/* WARNING: Removing unreachable block (ram,0x0001027587e8) */
/* WARNING: Removing unreachable block (ram,0x0001027587d8) */
/* WARNING: Removing unreachable block (ram,0x0001027587c8) */
/* WARNING: Removing unreachable block (ram,0x000102758868) */

void FUN_102758660(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1105450e8;
  func_0x000107c613fc(&UNK_1105450e8,200,7);
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
  uVar2 = 0x112ebc280;
  func_0x0001000285a8(0x112ebc280,&UNK_10dad5f60);
  func_0x000107c613fc();
  uVar3 = 0x102758f50;
  func_0x0001000841fc(0x102758f50,puVar1,uVar2);
  func_0x000100084214(&UNK_10dad5f30,0x2e,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102758894; end: 1027588e7;  */

void FUN_102758894(void)

{
  long unaff_x20;
  
  FUN_102758660(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 1027588e8; end: 1027588f7;  */

undefined1  [16] FUN_1027588e8(void)

{
  return ZEXT816(0x1105450c8);
}



/* Entry: 1027588f8; end: 102758e7b;  */

void FUN_1027588f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  uVar1 = 0x112ebc288;
  func_0x0001000285a8(0x112ebc288,&UNK_10dad5f68);
  func_0x0001000838ec(param_2,uVar1);
  FUN_102772044();
  func_0x000100082720("MemTwoOperaFeaturedStoryQualityReporterServiceProvider",0x36,2);
  FUN_10276bb38();
  func_0x000100082720("MemTwoOperaAIRemixScopeExposerServiceProvider",0x2d,2);
  FUN_102779034();
  pcVar2 = "MemTwoOperaRemixScopeExposerServiceProvider";
  func_0x000100082720("MemTwoOperaRemixScopeExposerServiceProvider",0x2b,2);
  FUN_10275bb88();
  func_0x000100082720("MemTwoOperaSessionPlaylistManagerServiceProvider",0x30,2);
  uVar3 = param_2;
  FUN_102759738(param_2,pcVar2);
  pcVar4 = "MemTwoOperaPlaylistFetcherServiceProvider";
  func_0x000100082720("MemTwoOperaPlaylistFetcherServiceProvider",0x29,2);
  FUN_10277b07c();
  func_0x0001002acff8("MemTwoOperaCameraRollAssetLoaderServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112ebc290,&UNK_10dad5f70);
  puVar5 = &UNK_110545110;
  func_0x000107c613fc(&UNK_110545110,0x68,7);
  *(char **)(puVar5 + 0x10) = pcVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_6;
  *(undefined8 *)(puVar5 + 0x20) = param_9;
  *(undefined8 *)(puVar5 + 0x28) = param_10;
  *(undefined8 *)(puVar5 + 0x30) = param_7;
  *(undefined8 *)(puVar5 + 0x38) = param_11;
  *(undefined8 *)(puVar5 + 0x40) = param_12;
  *(undefined8 *)(puVar5 + 0x48) = param_13;
  *(undefined8 *)(puVar5 + 0x50) = param_14;
  *(undefined8 *)(puVar5 + 0x58) = param_8;
  *(char **)(puVar5 + 0x60) = pcVar2;
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(pcVar2);
  uVar1 = 0x102758fb0;
  func_0x0001000823a8(0x102758fb0,puVar5);
  func_0x000100082720("MemTwoOperaPagePropertiesPluginRegistryServiceProvider",0x36,2);
  uVar6 = uVar1;
  FUN_102764fbc();
  func_0x0001002acff8("MemTwoOperaSessionPagePropertiesCoordinatorServiceProvider",0x3a,2);
  uVar7 = uVar6;
  FUN_10275ecb8(uVar6,pcVar2,param_15);
  func_0x000100082720("MemTwoOperaSessionDataSourceServiceProvider",0x2b,2);
  uVar8 = uVar7;
  FUN_102764344();
  func_0x000100082720("MemTwoOperaSessionOperaAccessingServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112ebc298,&UNK_10dad5f78);
  puVar5 = &UNK_110545138;
  func_0x000107c613fc(&UNK_110545138,0x78,7);
  *(char **)(puVar5 + 0x10) = pcVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar8;
  *(undefined8 *)(puVar5 + 0x20) = param_6;
  *(undefined8 *)(puVar5 + 0x28) = param_21;
  *(undefined8 *)(puVar5 + 0x30) = param_17;
  *(undefined8 *)(puVar5 + 0x38) = param_5;
  *(undefined8 *)(puVar5 + 0x40) = param_4;
  *(undefined8 *)(puVar5 + 0x48) = param_19;
  *(undefined8 *)(puVar5 + 0x50) = param_16;
  *(undefined8 *)(puVar5 + 0x58) = param_18;
  *(undefined8 *)(puVar5 + 0x60) = param_20;
  *(undefined8 *)(puVar5 + 0x68) = param_3;
  *(undefined8 *)(puVar5 + 0x70) = param_2;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  uVar9 = 0x102758fec;
  func_0x0001000823a8(0x102758fec,puVar5);
  func_0x000100082720("MemTwoOperaSessionEventHandlerRegistryServiceProvider",0x35,2);
  uVar10 = uVar9;
  FUN_10275ad78();
  func_0x000100082720("MemTwoOperaSessionEventDispatcherServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ebc2a0,&UNK_10dad5f80);
  puVar5 = &UNK_110545160;
  func_0x000107c613fc(&UNK_110545160,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(undefined8 *)(puVar5 + 0x20) = param_22;
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(param_22);
  pcVar11 = FUN_102759028;
  func_0x0001000823a8(FUN_102759028,puVar5);
  func_0x000100082720("MemTwoOperaSessionPluginRegistryServiceProvider",0x2f,2);
  uVar12 = param_2;
  FUN_10275d498(param_2,param_23,param_24,uVar3,param_25,pcVar11);
  func_0x0001002acff8("MemTwoOperaSessionPresenterEntryPointProvider",0x2d,2);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar11);
  *param_1 = uVar12;
  return;
}



/* Entry: 102758e7c; end: 102759027;  */

void FUN_102758e7c(void)

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



/* Entry: 102759028; end: 102759033;  */

/* WARNING: Possible PIC construction at 0x00010275969c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027596a0) */

void FUN_102759028(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1105451d8;
  func_0x000107c613fc(&UNK_1105451d8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112ebc2b8;
  func_0x0001000285a8(0x112ebc2b8,&UNK_10dad5fa8);
  func_0x000107c613fc();
  pcVar4 = FUN_10275972c;
  func_0x0001000841fc(FUN_10275972c,puVar2,uVar3);
  func_0x000100084214("MemTwoOperaSessionPluginRegistryServiceProvider",0x2f,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102759034; end: 10275919f;  */

/* WARNING: Possible PIC construction at 0x000102759120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102759130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102759140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102759150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102759160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102759170: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102759164) */
/* WARNING: Removing unreachable block (ram,0x000102759154) */
/* WARNING: Removing unreachable block (ram,0x000102759144) */
/* WARNING: Removing unreachable block (ram,0x000102759134) */
/* WARNING: Removing unreachable block (ram,0x000102759124) */
/* WARNING: Removing unreachable block (ram,0x000102759174) */

void FUN_102759034(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110545188;
  func_0x000107c613fc(&UNK_110545188,0x78,7);
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
  uVar2 = 0x112ebc2a8;
  func_0x0001000285a8(0x112ebc2a8,&UNK_10dad5f98);
  func_0x000107c613fc();
  pcVar3 = FUN_10275936c;
  func_0x0001000841fc(FUN_10275936c,puVar1,uVar2);
  func_0x000100084214("MemTwoOperaSessionEventHandlerRegistryServiceProvider",0x35,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1027591a0; end: 10275936b;  */

/* WARNING: Possible PIC construction at 0x000102759484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102759494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027594a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027594b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027594c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027594b8) */
/* WARNING: Removing unreachable block (ram,0x0001027594a8) */
/* WARNING: Removing unreachable block (ram,0x000102759498) */
/* WARNING: Removing unreachable block (ram,0x000102759488) */
/* WARNING: Removing unreachable block (ram,0x0001027594c8) */

void FUN_1027591a0(byte *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  byte *param_5,byte *param_6,byte *param_7,byte *param_8,byte *param_9,
                  byte *param_10,byte *param_11,byte *param_12,byte *param_13,undefined8 param_14,
                  undefined8 param_15,undefined8 param_16,byte *param_17)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  char *pcVar19;
  byte *pbVar20;
  code *pcVar21;
  byte *pbVar22;
  byte *unaff_x20;
  byte *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar23;
  byte *unaff_x25;
  byte *unaff_x26;
  byte *unaff_x27;
  byte *unaff_x28;
  byte *pbVar24;
  undefined8 unaff_x30;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 auStack_a0 [32];
  undefined1 auStack_60 [64];
  
  pbVar22 = param_12;
  puVar5 = &stack0xffffffffffffffe0;
  puVar13 = &stack0xffffffffffffffe0;
  pbVar24 = &stack0xfffffffffffffff0;
  puVar14 = &stack0xffffffffffffffe0;
  puVar15 = &stack0xffffffffffffffe0;
  puVar16 = &stack0xffffffffffffffe0;
  puVar17 = &stack0xffffffffffffffe0;
  puVar18 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xffffffffffffffe0;
  puVar7 = &stack0xffffffffffffffe0;
  puVar8 = &stack0xffffffffffffffe0;
  puVar9 = &stack0xffffffffffffffe0;
  puVar10 = &stack0xffffffffffffffe0;
  puVar11 = &stack0xffffffffffffffe0;
  puVar12 = (undefined8 *)&stack0xffffffffffffffe0;
  pcVar19 = (char *)param_12;
  pbVar20 = param_12;
  switch(*param_4) {
  default:
    pbVar20 = param_5;
  case 0x4d:
    FUN_102779b20();
    pcVar19 = "MemTwoOperaEditActionHandlerPluginPluginProvider";
    param_5 = (byte *)0x30;
    break;
  case 1:
    pbVar20 = param_5;
  case 0x49:
    FUN_102779124();
    pcVar19 = "MemTwoOperaSendToActionHandlerPluginPluginProvider";
    param_5 = (byte *)0x32;
    break;
  case 2:
  case 0x4c:
  case 0x54:
    FUN_1027716d8();
    unaff_x20 = param_5;
  case 0x2c:
    pcVar19 = "MemTwoOperaFavoriteActionHandlerPluginPluginProvider";
    param_5 = (byte *)0x34;
  case 100:
    pbVar20 = unaff_x20;
    break;
  case 3:
    pbVar20 = param_5;
  case 0x50:
    FUN_102770d58(pbVar20,param_6);
    pcVar19 = "MemTwoOperaDeleteActionHandlerPluginPluginProvider";
    param_5 = (byte *)0x32;
    break;
  case 4:
    pbVar20 = param_5;
    param_5 = param_6;
    param_6 = param_7;
  case 0xe8:
    FUN_102776b74(pbVar20,param_5,param_6,param_8,param_9,param_10,param_11);
    pcVar19 = "MemTwoOperaRemixActionHandlerPluginPluginProvider";
    param_5 = (byte *)0x31;
    break;
  case 5:
    param_6 = param_13;
  case 0xf4:
    unaff_x20 = param_12;
    FUN_10276ffd0(param_12,param_5,param_6);
    pcVar19 = "MemTwoOperaCopyLinkActionHandlerPluginPluginProvider";
  case 0xab:
  case 0xdb:
    pbVar20 = unaff_x20;
    param_5 = (byte *)0x34;
    break;
  case 6:
    pbVar20 = param_5;
  case 0x7a:
    FUN_1027750bc();
  case 0x51:
    pcVar19 = "MemTwoOperaPostStoryActionHandlerPluginPluginProvider";
    unaff_x20 = pbVar20;
  case 0x68:
  case 0x98:
  case 200:
    pbVar20 = unaff_x20;
    param_5 = (byte *)0x35;
    break;
  case 7:
    pbVar20 = param_5;
    param_5 = param_6;
    param_6 = param_7;
  case 0x24:
    FUN_102772934(pbVar20,param_5,param_6,param_14,param_15);
  case 0x34:
    pcVar19 = "MemTwoOperaPostSpotlightActionHandlerPluginPluginProvider";
    param_5 = (byte *)0x39;
    break;
  case 8:
  case 0x10:
    pbVar20 = param_5;
  case 0xf0:
    FUN_102775b7c(pbVar20,param_16,param_17);
    pcVar19 = "MemTwoOperaQualityLabelActionHandlerPluginPluginProvider";
    param_5 = (byte *)0x38;
    break;
  case 9:
    unaff_x20 = param_12;
    FUN_102772178();
  case 0x14:
  case 0x1c:
    pbVar20 = unaff_x20;
    pcVar19 = "MemTwoOperaInnovationProgramActionHandlerPluginPluginProvider";
    param_5 = (byte *)0x3d;
    break;
  case 10:
  case 0x6e:
  case 0x9e:
  case 0xce:
    pbVar22 = param_5;
  case 0xa3:
  case 0xb9:
  case 0xd3:
    func_0x00010277acb8();
    pbVar20 = (byte *)0x10f0ba000;
    unaff_x20 = pbVar22;
  case 0x73:
  case 0xb2:
    pcVar19 = (char *)(pbVar20 + 800);
  case 0x6b:
  case 0x9b:
  case 0xcb:
    pbVar20 = unaff_x20;
    param_5 = (byte *)0x32;
    break;
  case 0xb:
    FUN_102772610();
  case 0xf8:
    pcVar19 = "MemTwoOperaNotImplementedActionHandlerPluginPluginProvider";
    param_5 = (byte *)0x3a;
    unaff_x20 = pbVar20;
  case 0x3c:
    pbVar20 = unaff_x20;
    break;
  case 0x11:
  case 0x19:
  case 0x21:
  case 0x29:
  case 0x31:
  case 0x39:
  case 0x61:
    goto code_r0x00010275953c;
  case 0x12:
  case 0x1a:
  case 0x22:
  case 0x2a:
  case 0x32:
  case 0x3a:
  case 0x60:
  case 0x62:
    goto code_r0x00010275956c;
  case 0x28:
    unaff_x25 = param_12;
    goto code_r0x000107c6157c;
  case 0x38:
    return;
  case 0x4a:
  case 0x52:
    param_12 = pbVar24;
    pbVar24 = (byte *)register0x00000008;
  case 0x30:
    bVar4 = *pbVar22;
    param_1 = param_17;
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        param_17 = *(byte **)(pbVar24 + 0x10);
        pbVar22 = param_5;
        param_5 = param_6;
        param_6 = param_7;
        param_7 = param_8;
        param_8 = param_9;
        param_9 = param_10;
        param_10 = param_11;
code_r0x00010275953c:
        FUN_10277c220(pbVar22,param_5,param_6,param_7,param_8,param_9,param_10,param_17);
        pcVar19 = "MemTwoOperaSnapMediaPagePropertiesPluginPluginProvider";
        param_5 = (byte *)0x36;
      }
      else {
        FUN_10277a568();
        pcVar19 = "MemTwoOperaEditLayerPagePropertiesPluginPluginProvider";
        param_5 = (byte *)0x36;
      }
    }
    else if (bVar4 == 2) {
      unaff_x20 = *(byte **)(pbVar24 + 0x20);
      FUN_10276bc28(unaff_x20,*(undefined8 *)(pbVar24 + 0x28));
code_r0x00010275956c:
      pbVar22 = unaff_x20;
      pcVar19 = "MemTwoOperaContextPagePropertiesPluginPluginProvider";
      param_5 = (byte *)0x34;
    }
    else {
      FUN_10277a858();
      pcVar19 = "MemTwoOperaProgressBarPagePropertiesPluginPluginProvider";
      param_5 = (byte *)0x38;
    }
    param_6 = (byte *)0x2;
    unaff_x20 = pbVar22;
code_r0x0001027595ac:
    func_0x0001002acff8(pcVar19,param_5,param_6);
    *(byte **)param_1 = unaff_x20;
    return;
  case 0x4b:
  case 0x53:
    goto code_r0x0001027595ac;
  case 0x72:
  case 0x83:
  case 0xa2:
  case 0xa5:
  case 0xd2:
  case 0xd5:
  case 0xf2:
    goto code_r0x000102759360;
  case 0x75:
  case 0x76:
  case 0xa9:
  case 0xd9:
    return;
  case 0x82:
  case 0x84:
  case 0xaa:
  case 0xad:
  case 0xda:
  case 0xdd:
    puVar13 = auStack_a0;
  case 0xb5:
  case 0xbc:
    *(byte **)(puVar13 + 0x30) = unaff_x26;
    *(byte **)(puVar13 + 0x38) = unaff_x25;
    puVar14 = puVar13;
  case 0x6c:
  case 0x9c:
  case 0xcc:
    *(undefined8 *)(puVar14 + 0x40) = unaff_x24;
    *(undefined8 *)(puVar14 + 0x48) = unaff_x23;
    puVar15 = puVar14;
  case 0xf6:
    *(undefined8 *)(puVar15 + 0x50) = unaff_x22;
    *(byte **)(puVar15 + 0x58) = unaff_x21;
    puVar16 = puVar15;
  case 0xa6:
  case 0xd6:
    *(byte **)(puVar16 + 0x60) = unaff_x20;
    *(byte **)(puVar16 + 0x68) = param_1;
    *(byte **)(puVar16 + 0x70) = pbVar24;
    *(undefined8 *)(puVar16 + 0x78) = unaff_x30;
    pbVar24 = puVar16 + 0x70;
    *(byte **)(puVar16 + 0x10) = param_10;
    *(byte **)(puVar16 + 0x18) = param_11;
    puVar17 = puVar16;
    param_1 = param_7;
    unaff_x21 = param_6;
    unaff_x26 = param_5;
    unaff_x27 = param_9;
    unaff_x28 = param_8;
  case 0x20:
    *(byte **)(puVar17 + 8) = param_17;
    uVar1 = *(undefined8 *)(pbVar24 + 0x18);
    uVar2 = *(undefined8 *)(pbVar24 + 0x20);
    uVar23 = *(undefined8 *)(pbVar24 + 0x10);
    unaff_x20 = &UNK_1105451b0;
    func_0x000107c613fc(&UNK_1105451b0,0x68,7);
    *(byte **)(unaff_x20 + 0x10) = pbVar22;
    *(byte **)(unaff_x20 + 0x18) = unaff_x26;
    *(byte **)(unaff_x20 + 0x20) = unaff_x21;
    *(byte **)(unaff_x20 + 0x28) = param_1;
    *(byte **)(unaff_x20 + 0x30) = unaff_x28;
    *(byte **)(unaff_x20 + 0x38) = unaff_x27;
    uVar3 = *(undefined8 *)(puVar17 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(puVar17 + 0x10);
    *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x50) = uVar23;
    *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x60) = uVar2;
    pbVar20 = (byte *)0x112ebc000;
    puVar18 = puVar17;
    unaff_x25 = pbVar22;
  case 0x48:
    pbVar20 = pbVar20 + 0x2b0;
    func_0x0001000285a8(pbVar20,&UNK_10dad5fa0);
    func_0x000107c613fc();
    pcVar21 = FUN_1027595c4;
    func_0x0001000841fc(FUN_1027595c4,unaff_x20,pbVar20);
    func_0x000100084214("MemTwoOperaPagePropertiesPluginRegistryServiceProvider",0x36,2);
    **(undefined8 **)(puVar18 + 8) = pcVar21;
code_r0x000107c6157c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(unaff_x25);
    return;
  case 0xae:
  case 0xb7:
  case 0xde:
    return;
  case 0xbe:
    puVar5 = auStack_60;
  case 0x69:
  case 0x70:
  case 0x74:
  case 0x7e:
  case 0x80:
  case 0x99:
  case 0xa0:
  case 0xac:
  case 0xb0:
  case 0xb3:
  case 0xb8:
  case 0xbf:
  case 0xc9:
  case 0xd0:
  case 0xdc:
  case 0xe0:
  case 0xf1:
    *(byte **)(puVar5 + 0x30) = pbVar24;
    *(undefined8 *)(puVar5 + 0x38) = unaff_x30;
    puVar6 = puVar5;
  case 0xaf:
  case 0xdf:
    puVar7 = puVar6;
  case 0x77:
  case 0x85:
  case 0xa8:
  case 0xb6:
  case 0xbd:
  case 0xd8:
    puVar8 = puVar7;
  case 0xf3:
    in_register_00005008 = *(undefined8 *)(unaff_x20 + 0x50);
    param_2 = *(undefined8 *)(unaff_x20 + 0x48);
    puVar9 = puVar8;
  case 0x18:
  case 0x7d:
  case 0xa4:
  case 0xa7:
  case 0xd4:
  case 0xd7:
    in_register_00005028 = *(undefined8 *)(unaff_x20 + 0x60);
    param_3 = *(undefined8 *)(unaff_x20 + 0x58);
    puVar10 = puVar9;
  case 0x6a:
  case 0x7b:
  case 0x7f:
  case 0x9a:
  case 0xca:
    param_15 = *(undefined8 *)(unaff_x20 + 0x68);
    param_16 = *(undefined8 *)(unaff_x20 + 0x70);
    puVar11 = puVar10;
  case 0x79:
  case 0x81:
  case 0x87:
    *(undefined8 *)(puVar11 + 0x20) = param_15;
    *(undefined8 *)(puVar11 + 0x28) = param_16;
    puVar12 = (undefined8 *)puVar11;
  case 0x6d:
  case 0x78:
  case 0x86:
  case 0x9d:
  case 0xbb:
  case 0xcd:
  case 0xf5:
    puVar12[1] = in_register_00005008;
    *puVar12 = param_2;
    puVar12[3] = in_register_00005028;
    puVar12[2] = param_3;
  case 0x6f:
  case 0x7c:
  case 0x9f:
  case 0xcf:
    FUN_1027591a0();
  case 0x71:
  case 0xa1:
  case 0xb1:
  case 0xb4:
  case 0xba:
  case 0xc0:
  case 0xd1:
  case 0xe1:
    return;
  }
  func_0x000100082720(pcVar19,param_5,2);
  *(byte **)param_1 = pbVar20;
code_r0x000102759360:
  return;
}



/* Entry: 10275936c; end: 1027593ab;  */

void FUN_10275936c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1027591a0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1027593ac; end: 1027594f3;  */

/* WARNING: Possible PIC construction at 0x000102759484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102759494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027594a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027594b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027594c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027594b8) */
/* WARNING: Removing unreachable block (ram,0x0001027594a8) */
/* WARNING: Removing unreachable block (ram,0x000102759498) */
/* WARNING: Removing unreachable block (ram,0x000102759488) */
/* WARNING: Removing unreachable block (ram,0x0001027594c8) */

void FUN_1027593ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105451b0;
  func_0x000107c613fc(&UNK_1105451b0,0x68,7);
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
  uVar2 = 0x112ebc2b0;
  func_0x0001000285a8(0x112ebc2b0,&UNK_10dad5fa0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027595c4;
  func_0x0001000841fc(FUN_1027595c4,puVar1,uVar2);
  func_0x000100084214("MemTwoOperaPagePropertiesPluginRegistryServiceProvider",0x36,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1027594f4; end: 1027595c3;  */

void FUN_1027594f4(undefined8 *param_1,byte *param_2,byte *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,byte *param_12,
                  undefined8 param_13)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_10277c220(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
      pcVar2 = "MemTwoOperaSnapMediaPagePropertiesPluginPluginProvider";
      uVar3 = 0x36;
      param_2 = param_3;
    }
    else {
      FUN_10277a568();
      pcVar2 = "MemTwoOperaEditLayerPagePropertiesPluginPluginProvider";
      uVar3 = 0x36;
    }
  }
  else if (bVar1 == 2) {
    FUN_10276bc28(param_12,param_13);
    pcVar2 = "MemTwoOperaContextPagePropertiesPluginPluginProvider";
    uVar3 = 0x34;
    param_2 = param_12;
  }
  else {
    FUN_10277a858();
    pcVar2 = "MemTwoOperaProgressBarPagePropertiesPluginPluginProvider";
    uVar3 = 0x38;
  }
  func_0x0001002acff8(pcVar2,uVar3,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1027595c4; end: 1027595ff;  */

void FUN_1027595c4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1027594f4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102759600; end: 1027596bf;  */

/* WARNING: Possible PIC construction at 0x00010275969c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027596a0) */

void FUN_102759600(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105451d8;
  func_0x000107c613fc(&UNK_1105451d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112ebc2b8;
  func_0x0001000285a8(0x112ebc2b8,&UNK_10dad5fa8);
  func_0x000107c613fc();
  pcVar3 = FUN_10275972c;
  func_0x0001000841fc(FUN_10275972c,puVar1,uVar2);
  func_0x000100084214("MemTwoOperaSessionPluginRegistryServiceProvider",0x2f,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1027596c0; end: 10275972b;  */

void FUN_1027596c0(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    FUN_10275ebb4();
    pcVar1 = "MemTwoOperaSessionContextPluginProvider";
    uVar2 = 0x27;
    param_3 = param_5;
  }
  else {
    FUN_102763888(param_3,param_4);
    pcVar1 = "MemTwoOperaSessionDataSourcePluginPluginProvider";
    uVar2 = 0x30;
  }
  func_0x000100082720(pcVar1,uVar2,2);
  *param_1 = param_3;
  return;
}



/* Entry: 10275972c; end: 102759737;  */

void FUN_10275972c(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*param_2 == '\x01') {
    FUN_10275ebb4();
    pcVar2 = "MemTwoOperaSessionContextPluginProvider";
    uVar3 = 0x27;
    uVar1 = uVar4;
  }
  else {
    FUN_102763888(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
    pcVar2 = "MemTwoOperaSessionDataSourcePluginPluginProvider";
    uVar3 = 0x30;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102759738; end: 10275981b;  */

void FUN_102759738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebc2c0,&UNK_10dad5fb0);
  puVar1 = &UNK_1105452a8;
  func_0x000107c613fc(&UNK_1105452a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10275981c,puVar1);
  return;
}



/* Entry: 10275981c; end: 102759823;  */

void FUN_10275981c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10275aad8();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  uVar3 = uVar1;
  FUN_10275a86c(uVar1,uVar2);
  func_0x000107c61574(uVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 102759824; end: 102759873;  */

undefined8 FUN_102759824(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_10275a86c(param_1,param_2);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 102759874; end: 102759897;  */

void FUN_102759874(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102759898; end: 1027599e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102759898(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 *puVar4;
  char acStack_60 [32];
  
  puVar4 = *(undefined8 **)(unaff_x20 + _DAT_112ebc2d8);
  func_0x000107c6157c(puVar4);
  func_0x000100075034(acStack_60,FUN_1027599e4,0,PTR___sSbN_11034dd40);
  func_0x000107c61574();
  if (acStack_60[0] == '\x01') {
    FUN_102759a10();
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar1 = *puVar4;
    func_0x000107c61174(uVar1);
    uVar2 = 0xd00000000000001a;
    func_0x000100029b28(0xd00000000000001a,0x800000010f0ba730);
    func_0x000107c61170(uVar1);
    func_0x000107c60734();
    puVar3 = &UNK_1105452d0;
    func_0x000107c613fc(&UNK_1105452d0,0x28,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x18) = uVar2;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    func_0x000107c61174();
    uVar1 = 0x40;
    func_0x0001001ca524(0x40,0,0x48,4,0,0,&UNK_10dad5fd8,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1027599e4; end: 102759a0f;  */

void FUN_1027599e4(undefined1 *param_1,int *param_2)

{
  if (*param_2 == 3 || *param_2 == 0) {
    param_2[0] = 1;
    param_2[1] = 0;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 102759a10; end: 102759b63;  */

/* WARNING: Possible PIC construction at 0x000102759a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102759b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102759a88) */
/* WARNING: Removing unreachable block (ram,0x000102759a90) */
/* WARNING: Removing unreachable block (ram,0x000102759aa4) */
/* WARNING: Removing unreachable block (ram,0x000102759b4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102759a10(void)

{
  int iVar1;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puVar4;
  undefined1 auStack_38 [8];
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar2;
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    puVar2 = &UNK_1105453d0;
    func_0x000107c613fc(&UNK_1105453d0,0x18,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    puVar4 = &UNK_1105453f8;
    func_0x000107c613fc(&UNK_1105453f8,0x20,7);
    *(undefined **)(puVar4 + 0x10) = &UNK_10dad60d0;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    func_0x000107c61174();
    uVar3 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    func_0x0001001ca524(0x40,0,0x48,4,0,0,&UNK_10dad60e0,puVar4,uVar3);
  }
  else {
    puVar4 = *(undefined **)(unaff_x20 + _DAT_112ebc2f0);
    func_0x000107c6157c(puVar4);
    uVar3 = 0x112ebc2f8;
    func_0x0001000285a8(0x112ebc2f8,&UNK_10dad5fe8);
    func_0x000100075034(auStack_38,FUN_10275a4fc,0,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 102759b64; end: 102759bcf;  */

void FUN_102759b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102759bd0,uVar1,uVar2);
  return;
}



/* Entry: 102759bd0; end: 102759c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102759bd0(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xc0) + _DAT_112ebc300;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  piVar6 = *(int **)(lVar4 + 8);
  iVar2 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102759c54;
                    /* WARNING: Could not recover jumptable at 0x000102759c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar6))(uVar3,lVar4);
  return;
}



/* Entry: 102759c54; end: 102759cc7;  */

void FUN_102759c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0xf0) = param_1;
  *(undefined8 *)(lVar4 + 0xf8) = param_3;
  *(long *)(lVar4 + 0x100) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xe8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x108) = param_2;
    uVar2 = *(undefined8 *)(lVar4 + 0xd8);
    uVar3 = *(undefined8 *)(lVar4 + 0xe0);
    pcVar1 = FUN_102759cc8;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0xd8);
    uVar3 = *(undefined8 *)(lVar4 + 0xe0);
    pcVar1 = FUN_102759f1c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 102759cc8; end: 102759f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102759cc8(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(ulong *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar11 = *(undefined8 *)(unaff_x22 + 200);
  lVar14 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar8 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar6);
  (**(code **)(lVar8 + 8))(uVar2,uVar6,lVar8);
  func_0x0001000834e4(unaff_x22 + 0x38);
  puVar9 = *(undefined8 **)(lVar14 + _DAT_112ebc2e8);
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  func_0x000107c6157c(puVar9);
  func_0x000100075034(FUN_10275ab70,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar6 = *puVar9;
  func_0x000107c61174(uVar6);
  func_0x000100069b5c(uVar11);
  func_0x000107c61170(uVar6);
  if (uVar2 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0xf0)) {
      uVar10 = *(ulong *)(unaff_x22 + 0xf0);
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    uVar12 = 0;
    lVar8 = *(long *)(unaff_x22 + 0xf0);
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102759e6c);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(lVar8 + 0x20 + uVar12 * 8);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar12;
        FUN_10275c620(uVar12,*(undefined8 *)(unaff_x22 + 0xf0));
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102759e68);
        (*pcVar5)();
      }
      uVar13 = uVar12 + 1;
      uVar7 = *(ulong *)(uVar7 + _DAT_112ebd970);
      if (uVar7 >> 0x3e != 0) {
        uVar1 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar1 = uVar7;
        }
        func_0x000107c60480(uVar1);
      }
      func_0x000107c61170();
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar10);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar8 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c60734();
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar6);
  uVar11 = *(undefined8 *)(lVar8 + _DAT_112ebc2d8);
  *(undefined8 *)(unaff_x22 + 0xa0) = 2;
  func_0x000107c6157c(uVar11);
  func_0x000100075034(unaff_x22 + 0x111,FUN_10275ad64,unaff_x22 + 0x90,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar11);
  if (*(char *)(unaff_x22 + 0x111) == '\x01') {
    FUN_102759a10();
  }
                    /* WARNING: Could not recover jumptable at 0x000102759f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102759f1c; end: 102759fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102759f1c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  puVar1 = *(undefined8 **)(unaff_x22 + 0xd0);
  lVar4 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61574();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(lVar4 + _DAT_112ebc2d8);
  *(undefined8 *)(unaff_x22 + 0x70) = 3;
  func_0x000107c6157c(uVar3);
  func_0x000100075034(unaff_x22 + 0x110,0x10275ab48,unaff_x22 + 0x60,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  if ((*(byte *)(unaff_x22 + 0x110) & 1) != 0) {
    FUN_102759a10();
  }
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102759fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102759ff0; end: 10275a017; -[_TtC32MemTwoOperaSessionImplementation26MemTwoOperaPlaylistFetcher fetchPlaylist] */

void FUN_102759ff0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102759898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10275a018; end: 10275a01f; -[_TtC32MemTwoOperaSessionImplementation26MemTwoOperaPlaylistFetcher currentLoadingProperties] */

void FUN_10275a018(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10275a020; end: 10275a1e3;  */

undefined * FUN_10275a020(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10275a1e4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_102787194(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_10275c620(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        FUN_102787194(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 10275a1e4; end: 10275a293; -[_TtC32MemTwoOperaSessionImplementation26MemTwoOperaPlaylistFetcher resolvedDataModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275a1e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  uVar2 = uVar1;
  FUN_10275a020();
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_58);
  uVar1 = uVar2;
  func_0x000107c5fc48(uVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10275a294; end: 10275a37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10275a294(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_58;
  long lStack_50;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ebc2e8);
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000100075034(&uStack_70,FUN_10275a380,0,uVar1);
  func_0x000107c61574(uVar2);
  if (lStack_68 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000100083b20(&uStack_70);
    func_0x0001000a8868(&uStack_70,uStack_58);
    uVar1 = uStack_70;
    (**(code **)(lStack_50 + 0x18))(uStack_70,lStack_68,uStack_58,lStack_50);
    func_0x000107c6142c(lStack_68);
    func_0x0001000834e4(&uStack_70);
  }
  return uVar1;
}



/* Entry: 10275a380; end: 10275a3a3;  */

void FUN_10275a380(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61434(uVar1);
  return;
}



/* Entry: 10275a3a4; end: 10275a3d7; -[_TtC32MemTwoOperaSessionImplementation26MemTwoOperaPlaylistFetcher firstDisplayGroupDataModel] */

void FUN_10275a3a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10275a294();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10275a3d8; end: 10275a45b;  */

void FUN_10275a3d8(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61574(*param_1);
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0x112ebc3b0;
    func_0x0001000285a8(0x112ebc3b0,&UNK_10dad60c0);
    func_0x000107c613fc();
    func_0x000107c61614(lVar1 + 0x10,0);
    func_0x000107c61604(lVar1 + 0x10,param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10275a45c; end: 10275a4fb; -[_TtC32MemTwoOperaSessionImplementation26MemTwoOperaPlaylistFetcher setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275a45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebc2f0);
  uStack_50 = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_10275ad4c,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10275a4fc; end: 10275a53b;  */

void FUN_10275a4fc(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *param_2 + 0x10;
    func_0x000107c61618();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10275a53c; end: 10275a5c3; -[_TtC32MemTwoOperaSessionImplementation26MemTwoOperaPlaylistFetcher delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275a53c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebc2f0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112ebc2f8;
  func_0x0001000285a8(0x112ebc2f8,&UNK_10dad5fe8);
  func_0x000100075034(&uStack_38,FUN_10275a4fc,0,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 10275a5c4; end: 10275a5cf;  */

void FUN_10275a5c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10275a5d0; end: 10275a647; -[_TtC32MemTwoOperaSessionImplementation26MemTwoOperaPlaylistFetcher loadingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10275a5d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebc2d8);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000100075034(&uStack_38,FUN_10275a5c4,0,&UNK_11076fdc0);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  return uStack_38;
}



/* Entry: 10275a648; end: 10275a6b3;  */

void FUN_10275a648(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10275a6b4,uVar1,uVar2);
  return;
}



/* Entry: 10275a6b4; end: 10275a75f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275a6b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  uVar2 = *(undefined8 *)(lVar3 + _DAT_112ebc2f0);
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112ebc2f8;
  func_0x0001000285a8(0x112ebc2f8,&UNK_10dad5fe8);
  func_0x000100075034(unaff_x22 + 0x10,FUN_10275a4fc,0,uVar1);
  func_0x000107c61574(uVar2);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  if (lVar3 != 0) {
    func_0x000107c4b7dc(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010275a75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3 == 0);
  return;
}



/* Entry: 10275a760; end: 10275a7a3;  */

void FUN_10275a760(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010275a7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10275a7a4; end: 10275a803; -[_TtC32MemTwoOperaSessionImplementation26MemTwoOperaPlaylistFetcher init] */

void FUN_10275a7a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaSessionImplementation.MemTwoOperaPlaylistFetcher",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10275a7d0);
  (*pcVar1)();
}



/* Entry: 10275a804; end: 10275a86b; -[_TtC32MemTwoOperaSessionImplementation26MemTwoOperaPlaylistFetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010275a830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010275a850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275a834) */
/* WARNING: Removing unreachable block (ram,0x00010275a854) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275a804(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112ebc300);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebc2e0));
  return;
}



/* Entry: 10275a86c; end: 10275a9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275a86c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  undefined1 auStack_90 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000100371f10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = _DAT_112ebc2f0;
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = 0;
  func_0x0001000285a8(0x112ebc2c8,&UNK_10dad5fb8);
  func_0x000107c613fc();
  puVar3 = &uStack_78;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ebc2d8;
  uStack_78 = 0;
  func_0x0001000285a8(0x112ebc2d0,&UNK_10dad5fc0);
  func_0x000107c613fc();
  puVar3 = &uStack_78;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ebc2e8;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x0001000285a8(0x112d38320,&UNK_10d9021d0);
  func_0x000107c613fc();
  puVar3 = &uStack_78;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + lVar1) = puVar3;
  func_0x000100083b20(puVar4);
  FUN_10275acb4(puVar4 + *(int *)(lVar2 + 0x14),&uStack_78);
  func_0x00010275acf8(puVar4);
  FUN_10275ad34(&uStack_78,unaff_x20 + _DAT_112ebc300);
  *(undefined8 *)(unaff_x20 + _DAT_112ebc2e0) = param_2;
  func_0x000107c61154(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10275aa00; end: 10275aa73;  */

void FUN_10275aa00(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10275aa74;
  plVar3[0x18] = lVar2;
  plVar3[0x19] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec(uVar4);
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x1a] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x1b] = lVar1;
  plVar3[0x1c] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102759bd0,lVar1,lVar2);
  return;
}



/* Entry: 10275aa74; end: 10275aac7;  */

void FUN_10275aa74(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010275aaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10275aac8; end: 10275aad7;  */

undefined1  [16] FUN_10275aac8(void)

{
  return ZEXT816(0x1105452f8);
}



/* Entry: 10275aad8; end: 10275aaf7;  */

void FUN_10275aad8(void)

{
  func_0x000107c61168(&PTR_PTR_11285f780);
  return;
}



/* Entry: 10275aaf8; end: 10275aafb;  */

void FUN_10275aaf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10275aafc; end: 10275ab3b;  */

void FUN_10275aafc(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10dad6080;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 10275ab3c; end: 10275ab6f;  */

void FUN_10275ab3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6f1a50);
  return;
}



/* Entry: 10275ab70; end: 10275abb3;  */

void FUN_10275ab70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6142c(param_1[1]);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 10275abb4; end: 10275ac43;  */

void FUN_10275abb4(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10275ac00;
  plVar2[3] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[4] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10275a6b4,lVar1,lVar3);
  return;
}



/* Entry: 10275ac44; end: 10275acb3;  */

void FUN_10275ac44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10275ad60;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10275acb4; end: 10275ad33;  */

long FUN_10275acb4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10275ad34; end: 10275ad4b;  */

undefined8 * FUN_10275ad34(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10275ad4c; end: 10275ad5f;  */

void FUN_10275ad4c(void)

{
  func_0x00010275aab0();
  return;
}



/* Entry: 10275ad60; end: 10275ad63;  */

void FUN_10275ad60(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010275aaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10275ad64; end: 10275ad77;  */

void FUN_10275ad64(void)

{
  func_0x00010275ab48();
  return;
}



/* Entry: 10275ad78; end: 10275adc3;  */

void FUN_10275ad78(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebc3b8,&UNK_10dad60f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10275aeb8,param_1);
  return;
}



/* Entry: 10275adc4; end: 10275aeb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275adc4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_10275bb2c();
  lVar2 = param_2;
  func_0x000107c610f8();
  lVar1 = _DAT_112ebc3c0;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar2 + lVar1) = uVar3;
  *(undefined1 *)(lVar2 + _DAT_112ebc3c8) = 0;
  func_0x0001000285a8(0x112ebc3d0,&UNK_10dad60f8);
  func_0x000107c6157c(uStack_48);
  uVar3 = 0x10275bb84;
  func_0x0001000823a8(0x10275bb84,uStack_48);
  *(undefined8 *)(lVar2 + _DAT_112ebc3d8) = uVar3;
  plVar4 = &lStack_58;
  lStack_58 = lVar2;
  lStack_50 = param_2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c61574(uStack_48);
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110545460;
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 10275aeb8; end: 10275aebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275aeb8(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_10275bb2c();
  lVar2 = unaff_x20;
  func_0x000107c610f8();
  lVar1 = _DAT_112ebc3c0;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar2 + lVar1) = uVar3;
  *(undefined1 *)(lVar2 + _DAT_112ebc3c8) = 0;
  func_0x0001000285a8(0x112ebc3d0,&UNK_10dad60f8);
  func_0x000107c6157c(uStack_48);
  uVar3 = 0x10275bb84;
  func_0x0001000823a8(0x10275bb84,uStack_48);
  *(undefined8 *)(lVar2 + _DAT_112ebc3d8) = uVar3;
  puVar4 = auStack_58;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c61574(uStack_48);
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110545460;
  *param_1 = (long)puVar4;
  return;
}



/* Entry: 10275aec0; end: 10275af97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10275aec0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  func_0x000107c610f8();
  lVar1 = _DAT_112ebc3c0;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112ebc3c8) = 0;
  func_0x0001000285a8(0x112ebc3d0,&UNK_10dad60f8);
  func_0x000107c6157c(param_1);
  pcVar3 = FUN_10275b0f8;
  func_0x0001000823a8(FUN_10275b0f8,param_1);
  *(code **)(unaff_x20 + _DAT_112ebc3d8) = pcVar3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 10275af98; end: 10275b0f7;  */

/* WARNING: Possible PIC construction at 0x00010275b0b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275b0b4) */

void FUN_10275af98(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 uStack_b1;
  undefined1 auStack_b0 [40];
  long alStack_88 [5];
  
  FUN_1027850cc();
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    lVar7 = 0x20;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uStack_b1 = *(undefined1 *)(param_2 + lVar7);
      func_0x00010008a7c8(alStack_88,&uStack_b1);
      lVar2 = alStack_88[0];
      if (alStack_88[0] != 0) {
        func_0x000100083b20(auStack_b0);
        func_0x000107c61574(lVar2);
        func_0x00010275bb6c(auStack_b0,alStack_88);
        puVar3 = puVar4;
        func_0x000107c61558();
        puVar5 = puVar4;
        if (((ulong)puVar3 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_10275e928(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
        }
        uVar1 = *(ulong *)(puVar5 + 0x10);
        puVar4 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          FUN_10275e928(puVar4,uVar1 + 1,1,puVar5);
        }
        *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
        func_0x00010275bb6c(alStack_88,puVar4 + uVar1 * 0x28 + 0x20);
        *param_1 = puVar4;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10275b0f8; end: 10275b0ff;  */

/* WARNING: Possible PIC construction at 0x00010275b0b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275b0b4) */

void FUN_10275b0f8(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 uStack_b1;
  undefined1 auStack_b0 [40];
  long alStack_88 [5];
  
  FUN_1027850cc();
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 != 0) {
    lVar7 = 0x20;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uStack_b1 = *(undefined1 *)(unaff_x20 + lVar7);
      func_0x00010008a7c8(alStack_88,&uStack_b1);
      lVar2 = alStack_88[0];
      if (alStack_88[0] != 0) {
        func_0x000100083b20(auStack_b0);
        func_0x000107c61574(lVar2);
        func_0x00010275bb6c(auStack_b0,alStack_88);
        puVar3 = puVar4;
        func_0x000107c61558();
        puVar5 = puVar4;
        if (((ulong)puVar3 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_10275e928(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
        }
        uVar1 = *(ulong *)(puVar5 + 0x10);
        puVar4 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          FUN_10275e928(puVar4,uVar1 + 1,1,puVar5);
        }
        *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
        func_0x00010275bb6c(alStack_88,puVar4 + uVar1 * 0x28 + 0x20);
        *param_1 = puVar4;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(unaff_x20);
  return;
}



/* Entry: 10275b100; end: 10275b2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275b100(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  long lStack_70;
  undefined *apuStack_60 [2];
  
  plVar5 = &lStack_90;
  func_0x000100087bd4(apuStack_60,FUN_10275b2a8,&lStack_90,PTR___sSbN_11034dd40);
  if ((char)apuStack_60[0] == '\x01') {
    func_0x000100083b20(&lStack_90);
    lVar2 = lStack_90;
    apuStack_60[0] = PTR___swiftEmptySetSingleton_11034f1d8;
    lVar8 = *(long *)(lStack_90 + 0x10);
    if (lVar8 == 0) {
      func_0x000107c6142c(lStack_90);
      puVar6 = *(undefined1 **)(PTR___swiftEmptySetSingleton_11034f1d8 + 0x10);
      puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
    }
    else {
      lVar7 = lStack_90 + 0x20;
      do {
        FUN_10275b2d4(lVar7,&lStack_90);
        func_0x0001000a8868(&lStack_90,uStack_78);
        (**(code **)(lStack_70 + 8))(uStack_78,lStack_70);
        func_0x00010105ba6c();
        FUN_10275bb4c(&lStack_90);
        lVar7 = lVar7 + 0x28;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      func_0x000107c6142c(lVar2);
      puVar6 = *(undefined1 **)(apuStack_60[0] + 0x10);
      puVar1 = apuStack_60[0];
    }
    if (puVar6 == (undefined1 *)0x0) {
      func_0x000107c6142c(puVar1);
    }
    else {
      puVar4 = puVar6;
      func_0x00010109b448(puVar6,0);
      func_0x00010109b930(&lStack_90,puVar4 + 0x20,puVar6,puVar1);
      func_0x00010109bac0(lStack_90,uStack_88,unaff_x20,uStack_78,lStack_70);
      if (plVar5 != (long *)puVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10275b2a8);
        (*pcVar3)();
      }
      puVar6 = puVar4;
      func_0x000107c5fc48(puVar4,PTR___sSSN_11034da80);
      func_0x000107c61574(puVar4);
      func_0x000107c3d744(param_1);
      func_0x000107c61170(puVar6);
    }
  }
  return;
}



/* Entry: 10275b2a8; end: 10275b2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275b2a8(undefined1 *param_1)

{
  long unaff_x20;
  
  if ((*(byte *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ebc3c8) & 1) != 0) {
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ebc3c8) = 1;
  *param_1 = 1;
  return;
}



/* Entry: 10275b2d4; end: 10275b317;  */

long FUN_10275b2d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10275b318; end: 10275b377; -[_TtC32MemTwoOperaSessionImplementation33MemTwoOperaSessionEventDispatcher init] */

void FUN_10275b318(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaSessionImplementation.MemTwoOperaSessionEventDispatcher",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10275b344);
  (*pcVar1)();
}



/* Entry: 10275b378; end: 10275b3cf; -[_TtC32MemTwoOperaSessionImplementation33MemTwoOperaSessionEventDispatcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010275b394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275b398) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275b378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebc3d8));
  return;
}



/* Entry: 10275b3d0; end: 10275b583;  */

/* WARNING: Possible PIC construction at 0x00010275b4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010275b55c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275b4b8) */
/* WARNING: Removing unreachable block (ram,0x00010275b560) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275b3d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puVar3;
  
  puVar2 = &UNK_110545420;
  func_0x000107c613fc(&UNK_110545420,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + _DAT_11307abc8);
    func_0x000107c61434(uVar4);
  }
  func_0x000107c61434(param_2);
  FUN_10275b8fc(param_3,param_4);
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar3;
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    puVar3 = &UNK_110545448;
    func_0x000107c613fc(&UNK_110545448,0x38,7);
    *(code **)(puVar3 + 0x10) = FUN_10275b8f4;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x28) = uVar4;
    *(long *)(puVar3 + 0x30) = param_3;
    func_0x000107c6157c(puVar2);
    func_0x000107c61174();
    func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dad6108,puVar3,PTR___sytN_11034f1b0 + 8);
  }
  else {
    uVar4 = 0;
    func_0x000107c5fcec(0);
    pcStack_70 = FUN_10275b8f4;
    puStack_68 = puVar2;
    func_0x000100f7a598(FUN_10275baa4,auStack_80,
                        "MemTwoOperaSessionImplementation/MemTwoOperaSessionEventDispatcher.swift",
                        0x48,2,0x51,uVar4);
    puVar3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 10275b584; end: 10275b72f;  */

/* WARNING: Removing unreachable block (ram,0x00010275b700) */

void FUN_10275b584(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [48];
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      FUN_10275b2d4(param_1 + 0x20 + lVar10 * 0x28,auStack_90);
      func_0x00010275bb6c(auStack_90,auStack_b8);
      lVar3 = lStack_98;
      lVar4 = lStack_a0;
      func_0x0001000a8868(auStack_b8,lStack_a0);
      (**(code **)(lVar3 + 8))(lVar4,lVar3);
      if (*(long *)(lVar4 + 0x10) != 0) {
        func_0x000107c6068c(auStack_100,*(undefined8 *)(lVar4 + 0x28));
        puVar5 = auStack_100;
        func_0x000107c5fb58(puVar5,param_4,param_5);
        func_0x000107c606a8();
        uVar7 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
        uVar8 = (ulong)puVar5 & (uVar7 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar4 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(lVar4 + 0x30) + uVar8 * 0x10);
            uVar6 = *puVar1;
            uVar2 = puVar1[1];
            if ((uVar6 == param_4 && uVar2 == param_5) ||
               (func_0x000107c605b8(uVar6,uVar2,param_4,param_5,0), (uVar6 & 1) != 0)) {
              func_0x000107c6142c(lVar4);
              lVar3 = lStack_98;
              lVar4 = lStack_a0;
              func_0x0001000a8868(auStack_b8,lStack_a0);
              (**(code **)(lVar3 + 0x10))(param_4,param_5,param_2,param_3,lVar4,lVar3);
              goto LAB_10275b5d0;
            }
            uVar8 = uVar8 + 1 & ~uVar7;
          } while ((*(ulong *)(lVar4 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c(lVar4);
LAB_10275b5d0:
      lVar10 = lVar10 + 1;
      func_0x00010275bb4c(auStack_b8);
    } while (lVar10 != lVar9);
  }
  return;
}



/* Entry: 10275b730; end: 10275b74f;  */

void FUN_10275b730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10275b750,0,0);
  return;
}



/* Entry: 10275b750; end: 10275b7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275b750(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10275b7d8,uVar1,uVar2);
  return;
}



/* Entry: 10275b7d8; end: 10275b837;  */

void FUN_10275b7d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  pcVar3 = *(code **)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  (*pcVar3)(uVar1,uVar2,uVar4);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010275b834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10275b838; end: 10275b8f3; -[_TtC32MemTwoOperaSessionImplementation33MemTwoOperaSessionEventDispatcher operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x00010275b8d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275b8dc) */

void FUN_10275b838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10275b3d0(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10275b8f4; end: 10275b8fb;  */

/* WARNING: Removing unreachable block (ram,0x00010275b700) */

void FUN_10275b8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [48];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    lVar12 = 0;
    do {
      FUN_10275b2d4(param_1 + 0x20 + lVar12 * 0x28,auStack_90);
      func_0x00010275bb6c(auStack_90,auStack_b8);
      lVar5 = lStack_98;
      lVar6 = lStack_a0;
      func_0x0001000a8868(auStack_b8,lStack_a0);
      (**(code **)(lVar5 + 8))(lVar6,lVar5);
      if (*(long *)(lVar6 + 0x10) != 0) {
        func_0x000107c6068c(auStack_100,*(undefined8 *)(lVar6 + 0x28));
        puVar7 = auStack_100;
        func_0x000107c5fb58(puVar7,uVar2,uVar4);
        func_0x000107c606a8();
        uVar9 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
        uVar10 = (ulong)puVar7 & (uVar9 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar6 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar10 * 0x10);
            uVar8 = *puVar1;
            uVar3 = puVar1[1];
            if ((uVar8 == uVar2 && uVar3 == uVar4) ||
               (func_0x000107c605b8(uVar8,uVar3,uVar2,uVar4,0), (uVar8 & 1) != 0)) {
              func_0x000107c6142c(lVar6);
              lVar5 = lStack_98;
              lVar6 = lStack_a0;
              func_0x0001000a8868(auStack_b8,lStack_a0);
              (**(code **)(lVar5 + 0x10))(uVar2,uVar4,param_2,param_3,lVar6,lVar5);
              goto LAB_10275b5d0;
            }
            uVar10 = uVar10 + 1 & ~uVar9;
          } while ((*(ulong *)(lVar6 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c(lVar6);
LAB_10275b5d0:
      lVar12 = lVar12 + 1;
      func_0x00010275bb4c(auStack_b8);
    } while (lVar12 != lVar11);
  }
  return;
}



/* Entry: 10275b8fc; end: 10275b9e7;  */

undefined8 * FUN_10275b8fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_68;
  undefined1 auStack_60 [32];
  
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c61434(param_2);
    puStack_80 = param_2;
  }
  else {
    puVar5 = param_2;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    puVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    puVar4 = param_2;
    if (param_2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100214a84();
    }
    func_0x000107c61434();
    FUN_10278552c();
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puStack_68 = PTR___sSSN_11034da80;
    puStack_80 = puVar3;
    puStack_78 = puVar5;
    func_0x000100102924(&puStack_80,auStack_60);
    func_0x000107c61434(uVar2);
    puVar3 = puVar4;
    func_0x000107c61558(puVar4);
    puStack_80 = puVar4;
    func_0x0001001029e8(auStack_60,uVar1,uVar2,puVar3);
    func_0x000107c6142c(uVar2);
  }
  return puStack_80;
}



/* Entry: 10275b9e8; end: 10275ba67;  */

void FUN_10275b9e8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10275ba68;
  plVar5[6] = lVar4;
  plVar5[7] = lVar6;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10275b750,0,0);
  return;
}



/* Entry: 10275ba68; end: 10275baa3;  */

void FUN_10275ba68(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010275baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10275baa4; end: 10275bb1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10275baa4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000100083b20(&uStack_48);
  (*pcVar1)(uStack_48,uVar2,uVar3);
  func_0x000107c6142c(uStack_48);
  return;
}



/* Entry: 10275bb1c; end: 10275bb2b;  */

undefined1  [16] FUN_10275bb1c(void)

{
  return ZEXT816(0x110545480);
}



/* Entry: 10275bb2c; end: 10275bb4b;  */

void FUN_10275bb2c(void)

{
  func_0x000107c61168(&PTR_PTR_11285f860);
  return;
}


