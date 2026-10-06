/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021667ec; end: 10216684b; -[_TtC46MemoriesActionMenuScopedFactoryServiceProvider34SCMemoriesActionMenuScopedServices init] */

void FUN_1021667ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesActionMenuScopedFactoryServiceProvider.SCMemoriesActionMenuScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102166818);
  (*pcVar1)();
}



/* Entry: 10216684c; end: 10216685b; -[_TtC46MemoriesActionMenuScopedFactoryServiceProvider34SCMemoriesActionMenuScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216684c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5ceb8));
  return;
}



/* Entry: 10216685c; end: 1021668c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216685c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104d4cb0;
  func_0x000107c613fc(&UNK_1104d4cb0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102166be4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1021668c8; end: 102166963;  */

void FUN_1021668c8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104d4bc0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d4bc0;
  return;
}



/* Entry: 102166964; end: 10216699b;  */

void FUN_102166964(long *param_1)

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



/* Entry: 10216699c; end: 1021669a3;  */

undefined8 FUN_10216699c(void)

{
  return 0x1b;
}



/* Entry: 1021669a4; end: 102166ad7;  */

void FUN_1021669a4(undefined8 *param_1)

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
  puVar1 = &UNK_1104d4cd8;
  func_0x000107c613fc(&UNK_1104d4cd8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102166bbc;
  func_0x00010058fa64(FUN_102166bbc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102166ad8; end: 102166b07;  */

undefined ** FUN_102166ad8(void)

{
  return &PTR_DAT_112fae420;
}



/* Entry: 102166b08; end: 102166b27;  */

void FUN_102166b08(void)

{
  func_0x000107c61168(&PTR_PTR_1128218c0);
  return;
}



/* Entry: 102166b28; end: 102166b77;  */

undefined1  [16] FUN_102166b28(void)

{
  return ZEXT816(0x1104d4c10);
}



/* Entry: 102166b78; end: 102166bbb;  */

void FUN_102166b78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5cf20 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9fa0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e5cf20 = puVar1;
  return;
}



/* Entry: 102166bbc; end: 102166be3;  */

void FUN_102166bbc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102166be4; end: 102166be7;  */

void FUN_102166be4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102166be8; end: 102166e97;  */

/* WARNING: Possible PIC construction at 0x000102166d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102166e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102166e5c) */
/* WARNING: Removing unreachable block (ram,0x000102166e4c) */
/* WARNING: Removing unreachable block (ram,0x000102166e3c) */
/* WARNING: Removing unreachable block (ram,0x000102166e2c) */
/* WARNING: Removing unreachable block (ram,0x000102166e1c) */
/* WARNING: Removing unreachable block (ram,0x000102166e0c) */
/* WARNING: Removing unreachable block (ram,0x000102166dfc) */
/* WARNING: Removing unreachable block (ram,0x000102166dec) */
/* WARNING: Removing unreachable block (ram,0x000102166ddc) */
/* WARNING: Removing unreachable block (ram,0x000102166dcc) */
/* WARNING: Removing unreachable block (ram,0x000102166dbc) */
/* WARNING: Removing unreachable block (ram,0x000102166dac) */
/* WARNING: Removing unreachable block (ram,0x000102166d9c) */
/* WARNING: Removing unreachable block (ram,0x000102166d8c) */
/* WARNING: Removing unreachable block (ram,0x000102166e6c) */

void FUN_102166be8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104d4d60;
  func_0x000107c613fc(&UNK_1104d4d60,0x108,7);
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
  uVar2 = 0x112e5cf30;
  func_0x0001000285a8(0x112e5cf30,&UNK_10da635c8);
  func_0x000107c613fc();
  uVar3 = 0x1021678b8;
  func_0x0001000841fc(0x1021678b8,puVar1,uVar2);
  func_0x000100084214(&UNK_10da63590,0x30,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102166e98; end: 102166efb;  */

void FUN_102166e98(void)

{
  long unaff_x20;
  
  FUN_102166be8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x100));
  return;
}



/* Entry: 102166efc; end: 102166f0b;  */

undefined1  [16] FUN_102166efc(void)

{
  return ZEXT816(0x1104d4d40);
}



/* Entry: 102166f0c; end: 1021677a3;  */

void FUN_102166f0c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  code *pcVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 auStack_70 [2];
  
  uVar21 = *param_2;
  func_0x0001000285a8(0x112e5cf38,&UNK_10da635d0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar21;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x00010216bf6c();
  pcVar3 = "SCMemoriesExternalShareAdaptorScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesExternalShareAdaptorScopeExposerSubjectServiceProvider",0x40,2);
  FUN_10216bfb8();
  pcVar4 = "SCMemoriesPrivateGallerySetupFlowScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesPrivateGallerySetupFlowScopeExposerSubjectServiceProvider",0x43,2);
  FUN_10216c004();
  pcVar5 = "SCSpectaclesBoomboxScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesBoomboxScopeExposerSubjectServiceProvider",0x35,2);
  FUN_10216c050();
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopeExposerSubjectServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e5cf40,&UNK_10da63880);
  puVar6 = &UNK_1104d4d88;
  func_0x000107c613fc(&UNK_1104d4d88,0x20,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  pcVar7 = FUN_102167930;
  func_0x0001000823a8(FUN_102167930,puVar6);
  func_0x000100082720("SCMemoriesActionMenuScopedMemoriesActivityServiceProviderWrapperServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112e5cf48,&UNK_10da635e0);
  func_0x000107c6157c(pcVar7);
  uVar21 = 0x102167938;
  func_0x0001000823a8(0x102167938,pcVar7);
  func_0x000100082720("SCMemoriesActionMenuScopedMemoriesActivityServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e5cf50,&UNK_10da63a90);
  puVar6 = &UNK_1104d4db0;
  func_0x000107c613fc(&UNK_1104d4db0,0x20,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  uVar8 = 0x102167940;
  func_0x0001000823a8(0x102167940,puVar6);
  func_0x000100082720("SCMemoriesActionMenuScopedMemoriesSendServiceProviderWrapperServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112e5cf58,&UNK_10da635f0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102167948;
  func_0x0001000823a8(0x102167948,uVar8);
  func_0x000100082720("SCMemoriesActionMenuScopedMemoriesSendServicesServiceProvider",0x3d,2);
  puVar10 = puVar2;
  FUN_10216bfac();
  func_0x000100082720("SCMemoriesExternalShareAdaptorScopeExposerObservableServiceProvider",0x43,2);
  pcVar11 = pcVar3;
  FUN_10216bff8();
  func_0x000100082720("SCMemoriesPrivateGallerySetupFlowScopeExposerObservableServiceProvider",0x46,
                      2);
  pcVar12 = pcVar4;
  FUN_10216c044();
  func_0x000100082720("SCSpectaclesBoomboxScopeExposerObservableServiceProvider",0x38,2);
  pcVar13 = pcVar5;
  FUN_10216c0dc();
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopeExposerObservableServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar14 = FUN_102166964;
  func_0x0001000823a8(FUN_102166964,0);
  func_0x000100082720("SCMemoriesActionMenuScopedServicesCleanupRelayServiceProvider",0x3d,2);
  uVar15 = uVar21;
  FUN_10216bc14(uVar21,uVar9,puVar2,pcVar3,pcVar4,pcVar5);
  func_0x000100082720("MemoriesActionMenuScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e5cf60,&UNK_10da63600);
  puVar6 = &UNK_1104d4dd8;
  func_0x000107c613fc(&UNK_1104d4dd8,0x130,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_5;
  *(undefined8 *)(puVar6 + 0x20) = param_6;
  *(undefined8 *)(puVar6 + 0x28) = uVar21;
  *(undefined8 *)(puVar6 + 0x30) = param_7;
  *(undefined8 *)(puVar6 + 0x38) = param_8;
  *(undefined8 *)(puVar6 + 0x40) = param_9;
  *(undefined8 *)(puVar6 + 0x48) = param_10;
  *(undefined8 *)(puVar6 + 0x50) = param_11;
  *(undefined8 *)(puVar6 + 0x58) = uVar9;
  *(undefined8 *)(puVar6 + 0x60) = param_12;
  *(undefined8 *)(puVar6 + 0x68) = param_13;
  *(undefined8 *)(puVar6 + 0x70) = param_14;
  *(undefined8 *)(puVar6 + 0x78) = param_15;
  *(undefined8 *)(puVar6 + 0x80) = param_16;
  *(undefined8 *)(puVar6 + 0x88) = param_17;
  *(undefined8 *)(puVar6 + 0x90) = param_18;
  *(undefined8 *)(puVar6 + 0x98) = param_19;
  *(undefined8 *)(puVar6 + 0xa0) = param_20;
  *(undefined8 *)(puVar6 + 0xa8) = param_21;
  *(undefined8 *)(puVar6 + 0xb0) = param_22;
  *(undefined8 *)(puVar6 + 0xb8) = param_23;
  *(undefined8 *)(puVar6 + 0xc0) = param_24;
  *(undefined8 *)(puVar6 + 200) = param_25;
  *(undefined8 *)(puVar6 + 0xd0) = param_26;
  *(undefined8 *)(puVar6 + 0xd8) = param_27;
  *(undefined8 *)(puVar6 + 0xe0) = param_28;
  *(undefined8 *)(puVar6 + 0xe8) = param_29;
  *(undefined8 *)(puVar6 + 0xf0) = param_30;
  *(undefined8 *)(puVar6 + 0xf8) = param_31;
  *(undefined8 *)(puVar6 + 0x100) = param_32;
  *(undefined8 *)(puVar6 + 0x108) = param_33;
  *(char **)(puVar6 + 0x110) = pcVar13;
  *(char **)(puVar6 + 0x118) = pcVar12;
  *(char **)(puVar6 + 0x120) = pcVar11;
  *(undefined8 **)(puVar6 + 0x128) = puVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(uVar9);
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
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(puVar10);
  pcVar16 = FUN_102167950;
  func_0x0001000823a8(FUN_102167950,puVar6);
  func_0x000100082720("SCMemoriesActionMenuEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e5cf68,&UNK_10da63608);
  puVar6 = &UNK_1104d4e00;
  func_0x000107c613fc(&UNK_1104d4e00,0x40,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar15;
  *(code **)(puVar6 + 0x20) = pcVar16;
  *(code **)(puVar6 + 0x28) = pcVar7;
  *(undefined8 *)(puVar6 + 0x30) = uVar8;
  *(code **)(puVar6 + 0x38) = pcVar14;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(pcVar16);
  func_0x000107c6157c(pcVar14);
  pcVar17 = FUN_1021679bc;
  func_0x0001000823a8(FUN_1021679bc,puVar6);
  func_0x000100082720("SCMemoriesActionMenuScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e5cec0,&UNK_10da63360);
  func_0x000107c6157c(pcVar17);
  uVar18 = 0x1021679cc;
  func_0x0001000823a8(0x1021679cc,pcVar17);
  func_0x000100082720("SCMemoriesActionMenuScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e5ceb0,&UNK_10da63350);
  func_0x000107c6157c(uVar18);
  uVar19 = 0x1021679d4;
  func_0x0001000823a8(0x1021679d4,uVar18);
  func_0x000100082720("SCMemoriesActionMenuScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104d4e28;
  func_0x000107c613fc(&UNK_1104d4e28,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar19;
  *(code **)(puVar6 + 0x18) = pcVar14;
  func_0x000107c6157c(pcVar14);
  pcVar20 = FUN_102167a08;
  func_0x0001000823a8(FUN_102167a08,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(uVar18);
  func_0x000100082720("SCMemoriesActionMenuScopeEntryPointProvider",0x2b,2);
  *param_1 = pcVar20;
  return;
}



/* Entry: 1021677a4; end: 10216792f;  */

void FUN_1021677a4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102167930; end: 10216794f;  */

void FUN_102167930(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  FUN_10216aa34();
  func_0x000107c613fc();
  FUN_10216a73c(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102167950; end: 1021679bb;  */

void FUN_102167950(void)

{
  long unaff_x20;
  
  FUN_102167a10(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128));
  return;
}



/* Entry: 1021679bc; end: 1021679db;  */

void FUN_1021679bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_1106acbc8;
  ppuVar9 = &PTR_DAT_112fae420;
  uVar10 = uVar2;
  func_0x0001000a3aa4();
  puVar7 = &UNK_1104d5010;
  func_0x000107c613fc(&UNK_1104d5010,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar8;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar8);
  uVar8 = 0x112e5d320;
  func_0x0001000285a8(0x112e5d320,&UNK_10da63c70);
  func_0x0001000a6ee8(&UNK_1104d5348,
                      "MemoriesActionMenuScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_10216b1b8,puVar7,uVar8,&UNK_1104d5348,&PTR_DAT_112e5d580);
  func_0x000107c61574(puVar7);
  func_0x000107c6157c(uVar2);
  func_0x0001000a6ee8(&UNK_1104d4e80,
                      "SCMemoriesActionMenuEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_10216b1f8,uVar2,uVar8,&UNK_1104d4e80,&PTR_DAT_112e5cf90);
  func_0x000107c61574(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x0001000a6ee8(&UNK_1104d4f20,
                      "SCMemoriesActionMenuScopedMemoriesActivityServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5c,2,0x10216b224,uVar4,uVar8,&UNK_1104d4f20,&PTR_DAT_112e5d170);
  func_0x000107c61574(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x0001000a6ee8(&UNK_1104d4fc0,
                      "SCMemoriesActionMenuScopedMemoriesSendServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x58,2,FUN_10216b2d4,uVar3,uVar8,&UNK_1104d4fc0,&PTR_DAT_112e5d248);
  func_0x000107c61574(uVar3);
  puVar7 = &UNK_1104d5038;
  func_0x000107c613fc(&UNK_1104d5038,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar5;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x0001000a6ee8(&UNK_1104d4c50,
                      "SCMemoriesActionMenuScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_10216b3a8,puVar7,uVar8,&UNK_1104d4c50,&PTR_DAT_112e5cec8);
  func_0x000107c61574(puVar7);
  uVar8 = 0x112e5d328;
  func_0x0001000285a8(0x112e5d328,&UNK_10da63c78);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar6,ppuVar9,uVar10,uVar8);
  func_0x0001000a7f38("SCMemoriesActionMenuScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = puVar6;
  return;
}



/* Entry: 1021679dc; end: 102167a07;  */

void FUN_1021679dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102167a08; end: 102167a0f;  */

void FUN_102167a08(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104d4bc0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d4bc0;
  return;
}



/* Entry: 102167a10; end: 10216a3a7;  */

void FUN_102167a10(long *param_1,long param_2)

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
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
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
  FUN_10216a608();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_98;
  *(undefined8 *)(param_2 + 0x60) = uStack_a0;
  *(undefined8 *)(param_2 + 0x68) = uStack_a8;
  *(undefined8 *)(param_2 + 0x70) = uStack_b0;
  *(undefined8 *)(param_2 + 0x78) = uStack_b8;
  *(undefined8 *)(param_2 + 0x80) = uStack_c0;
  *(undefined8 *)(param_2 + 0x88) = uStack_c8;
  *(undefined8 *)(param_2 + 0x90) = uStack_d0;
  *(undefined8 *)(param_2 + 0x98) = uStack_d8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_e8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xc0) = uStack_100;
  *(undefined8 *)(param_2 + 200) = uStack_108;
  *(undefined8 *)(param_2 + 0xd0) = uStack_110;
  *(undefined8 *)(param_2 + 0xd8) = uStack_118;
  *(undefined8 *)(param_2 + 0xe0) = uStack_120;
  *(undefined8 *)(param_2 + 0xe8) = uStack_128;
  *(undefined8 *)(param_2 + 0xf0) = uStack_130;
  *(undefined8 *)(param_2 + 0xf8) = uStack_138;
  *(undefined8 *)(param_2 + 0x100) = uStack_140;
  *(undefined8 *)(param_2 + 0x108) = uStack_148;
  *(undefined8 *)(param_2 + 0x110) = uStack_150;
  *(undefined8 *)(param_2 + 0x118) = uStack_158;
  *(undefined8 *)(param_2 + 0x120) = uStack_160;
  *(undefined8 *)(param_2 + 0x128) = uStack_168;
  func_0x0001000285a8(0x112e5cf70,&UNK_10db5d010);
  func_0x000107c610f8();
  uVar16 = uStack_78;
  func_0x000107c61174();
  uVar18 = uStack_80;
  func_0x000107c61174();
  uVar19 = uStack_88;
  func_0x000107c61174();
  uVar1 = uStack_90;
  func_0x000107c61174();
  uVar2 = uStack_98;
  func_0x000107c61174();
  uVar3 = uStack_a0;
  func_0x000107c61174();
  uVar4 = uStack_a8;
  func_0x000107c61174();
  uVar5 = uStack_b0;
  func_0x000107c61174();
  uVar6 = uStack_b8;
  func_0x000107c61174();
  uVar7 = uStack_c0;
  func_0x000107c61174();
  uVar8 = uStack_c8;
  func_0x000107c61174();
  uVar9 = uStack_d0;
  func_0x000107c61174();
  uVar10 = uStack_d8;
  func_0x000107c61174();
  uVar11 = uStack_e0;
  func_0x000107c61174();
  uVar12 = uStack_e8;
  func_0x000107c61174();
  uVar20 = uStack_f0;
  func_0x000107c61174();
  uVar21 = uStack_f8;
  func_0x000107c61174();
  uVar22 = uStack_100;
  func_0x000107c61174();
  uVar23 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  uVar26 = uStack_120;
  func_0x000107c61174();
  uVar27 = uStack_128;
  func_0x000107c61174();
  uVar28 = uStack_130;
  func_0x000107c61174();
  uVar29 = uStack_138;
  func_0x000107c61174();
  uVar30 = uStack_140;
  func_0x000107c61174();
  uVar31 = uStack_148;
  func_0x000107c61174();
  uVar32 = uStack_150;
  func_0x000107c61174();
  uVar33 = uStack_158;
  func_0x000107c61174();
  uVar34 = uStack_160;
  func_0x000107c61174();
  uVar35 = uStack_168;
  func_0x000107c61174();
  uVar15 = uStack_170;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x18) = puVar13;
  func_0x0001000285a8(0x112e5cf78,&UNK_10da63610);
  func_0x000107c610f8();
  uVar15 = uStack_178;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x20) = puVar13;
  func_0x0001000285a8(0x112e5cf80,&UNK_10da81ba0);
  func_0x000107c610f8();
  uVar15 = uStack_180;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x28) = puVar13;
  func_0x0001000285a8(0x112e5cf88,&UNK_10da63620);
  func_0x000107c610f8();
  uVar15 = uStack_188;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x30) = puVar13;
  puVar13 = PTR_PTR_1126a9fa8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar13;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f066910);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar15 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f066930);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar38 = 0xd000000000000010;
  uVar15 = uVar38;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f066970);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar37 = 0xd000000000000014;
  uVar15 = uVar37;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef28ec0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b4b0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0669a0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00d930);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00d820);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef29390);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0669d0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f066a00);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar15 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010ef29970);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar38);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef39bb0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f00d5e0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar36 = 0xd000000000000013;
  uVar15 = uVar36;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar15 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f066a30);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010f066a60);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar37);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar38 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f066a80);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f066ab0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar36);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar38 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f066ad0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar38 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f066b00);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
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
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
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
  func_0x000107c61574(uStack_170);
  func_0x000107c61574(uStack_178);
  func_0x000107c61574(uStack_180);
  func_0x000107c61574(uStack_188);
  *param_1 = param_2;
  return;
}



/* Entry: 10216a3a8; end: 10216a4fb;  */

void FUN_10216a3a8(void)

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
  return;
}



/* Entry: 10216a4fc; end: 10216a503;  */

undefined8 FUN_10216a4fc(void)

{
  return 0x1b;
}



/* Entry: 10216a504; end: 10216a587;  */

void FUN_10216a504(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10216a648,param_2,FUN_10216a64c,param_2,FUN_10216a674,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10216a588; end: 10216a5d7;  */

undefined8 FUN_10216a588(void)

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



/* Entry: 10216a5d8; end: 10216a607;  */

undefined ** FUN_10216a5d8(void)

{
  return &PTR_DAT_112fae420;
}



/* Entry: 10216a608; end: 10216a627;  */

void FUN_10216a608(void)

{
  func_0x000107c61168(&PTR_PTR_112e5cff8);
  return;
}



/* Entry: 10216a628; end: 10216a64b;  */

undefined1  [16] FUN_10216a628(void)

{
  return ZEXT816(0x1104d4e80);
}



/* Entry: 10216a64c; end: 10216a673;  */

void FUN_10216a64c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10216a674; end: 10216a67b;  */

undefined8 FUN_10216a674(void)

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



/* Entry: 10216a67c; end: 10216a73b;  */

void FUN_10216a67c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_10216aa34();
  func_0x000107c613fc();
  FUN_10216a73c(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10216a73c; end: 10216a89f;  */

void FUN_10216a73c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a9fb0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f066910);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f066b30);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10216a8a0; end: 10216a8d3;  */

void FUN_10216a8a0(void)

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



/* Entry: 10216a8d4; end: 10216a927;  */

void FUN_10216a8d4(undefined8 *param_1)

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



/* Entry: 10216a928; end: 10216a92f;  */

undefined8 FUN_10216a928(void)

{
  return 0x1b;
}



/* Entry: 10216a930; end: 10216a9b3;  */

void FUN_10216a930(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x10216aa84,param_2,FUN_10216aa88,param_2,FUN_10216aab0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10216a9b4; end: 10216aa03;  */

undefined8 FUN_10216a9b4(void)

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



/* Entry: 10216aa04; end: 10216aa33;  */

undefined ** FUN_10216aa04(void)

{
  return &PTR_DAT_112fae420;
}



/* Entry: 10216aa34; end: 10216aa53;  */

void FUN_10216aa34(void)

{
  func_0x000107c61168(&PTR_PTR_112e5d1d8);
  return;
}



/* Entry: 10216aa54; end: 10216aa87;  */

undefined1  [16] FUN_10216aa54(void)

{
  return ZEXT816(0x1104d4f00);
}



/* Entry: 10216aa88; end: 10216aaaf;  */

void FUN_10216aa88(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10216aab0; end: 10216aab7;  */

undefined8 FUN_10216aab0(void)

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



/* Entry: 10216aab8; end: 10216ab77;  */

void FUN_10216aab8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_10216ae70();
  func_0x000107c613fc();
  FUN_10216ab78(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10216ab78; end: 10216acdb;  */

void FUN_10216ab78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a9fb8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f066910);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f066b50);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10216acdc; end: 10216ad0f;  */

void FUN_10216acdc(void)

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



/* Entry: 10216ad10; end: 10216ad63;  */

void FUN_10216ad10(undefined8 *param_1)

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



/* Entry: 10216ad64; end: 10216ad6b;  */

undefined8 FUN_10216ad64(void)

{
  return 0x1b;
}



/* Entry: 10216ad6c; end: 10216adef;  */

void FUN_10216ad6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x10216aec0,param_2,FUN_10216aec4,param_2,FUN_10216aeec,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10216adf0; end: 10216ae3f;  */

undefined8 FUN_10216adf0(void)

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



/* Entry: 10216ae40; end: 10216ae6f;  */

undefined ** FUN_10216ae40(void)

{
  return &PTR_DAT_112fae420;
}



/* Entry: 10216ae70; end: 10216ae8f;  */

void FUN_10216ae70(void)

{
  func_0x000107c61168(&PTR_PTR_112e5d2b0);
  return;
}



/* Entry: 10216ae90; end: 10216aec3;  */

undefined1  [16] FUN_10216ae90(void)

{
  return ZEXT816(0x1104d4fa0);
}



/* Entry: 10216aec4; end: 10216aeeb;  */

void FUN_10216aec4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10216aeec; end: 10216aef3;  */

undefined8 FUN_10216aeec(void)

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



/* Entry: 10216aef4; end: 10216b1b7;  */

void FUN_10216aef4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106acbc8;
  ppuVar4 = &PTR_DAT_112fae420;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104d5010;
  func_0x000107c613fc(&UNK_1104d5010,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0x112e5d320;
  func_0x0001000285a8(0x112e5d320,&UNK_10da63c70);
  func_0x0001000a6ee8(&UNK_1104d5348,
                      "MemoriesActionMenuScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_10216b1b8,puVar2,uVar3,&UNK_1104d5348,&PTR_DAT_112e5d580);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104d4e80,
                      "SCMemoriesActionMenuEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_10216b1f8,param_4,uVar3,&UNK_1104d4e80,&PTR_DAT_112e5cf90);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1104d4f20,
                      "SCMemoriesActionMenuScopedMemoriesActivityServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5c,2,0x10216b224,param_5,uVar3,&UNK_1104d4f20,&PTR_DAT_112e5d170);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1104d4fc0,
                      "SCMemoriesActionMenuScopedMemoriesSendServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x58,2,FUN_10216b2d4,param_6,uVar3,&UNK_1104d4fc0,&PTR_DAT_112e5d248);
  func_0x000107c61574(param_6);
  puVar2 = &UNK_1104d5038;
  func_0x000107c613fc(&UNK_1104d5038,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1104d4c50,
                      "SCMemoriesActionMenuScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_10216b3a8,puVar2,uVar3,&UNK_1104d4c50,&PTR_DAT_112e5cec8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e5d328;
  func_0x0001000285a8(0x112e5d328,&UNK_10da63c78);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCMemoriesActionMenuScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = puVar1;
  return;
}



/* Entry: 10216b1b8; end: 10216b1f7;  */

void FUN_10216b1b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10216c17c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MemoriesActionMenuScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10216b1f8; end: 10216b24f;  */

void FUN_10216b1f8(void)

{
  FUN_10216b250();
  return;
}



/* Entry: 10216b250; end: 10216b2d3;  */

void FUN_10216b250(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 10216b2d4; end: 10216b2ff;  */

void FUN_10216b2d4(void)

{
  FUN_10216b250();
  return;
}



/* Entry: 10216b300; end: 10216b3a7;  */

void FUN_10216b300(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104d5060;
  func_0x000107c613fc(&UNK_1104d5060,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10216b3dc;
  func_0x0001000823a8(FUN_10216b3dc,puVar1);
  func_0x000100082720("SCMemoriesActionMenuScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10216b3a8; end: 10216b3af;  */

void FUN_10216b3a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104d5060;
  func_0x000107c613fc(&UNK_1104d5060,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10216b3dc;
  func_0x0001000823a8(FUN_10216b3dc,puVar3);
  func_0x000100082720("SCMemoriesActionMenuScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10216b3b0; end: 10216b3db;  */

void FUN_10216b3b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10216b3dc; end: 10216b3fb;  */

void FUN_10216b3dc(undefined8 *param_1)

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
  puVar1 = &UNK_1104d4cd8;
  func_0x000107c613fc(&UNK_1104d4cd8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102166bbc;
  func_0x00010058fa64(FUN_102166bbc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10216b3fc; end: 10216b593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10216b3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  FUN_10216bb24();
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
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e5d330) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e5d338) = param_6;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10216b594);
  (*pcVar2)();
}



/* Entry: 10216b594; end: 10216b5f3; -[_TtC34MemoriesActionMenuScopeGraphBridge49MemoriesActionMenuScopeGraphBridgeSaberEntryPoint init] */

void FUN_10216b594(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesActionMenuScopeGraphBridge.MemoriesActionMenuScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10216b5c0);
  (*pcVar1)();
}



/* Entry: 10216b5f4; end: 10216b62b; -[_TtC34MemoriesActionMenuScopeGraphBridge49MemoriesActionMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010216b610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010216b614) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216b5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5d330));
  return;
}



/* Entry: 10216b62c; end: 10216b653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216b62c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e5d338),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e5d330));
  return;
}



/* Entry: 10216b654; end: 10216b673;  */

void FUN_10216b654(void)

{
  func_0x000107c61168(&PTR_PTR_112821980);
  return;
}



/* Entry: 10216b674; end: 10216b6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10216b674(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e5d550);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10216b6d8; end: 10216b6df;  */

void FUN_10216b6d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10216b6e0; end: 10216b77f;  */

void FUN_10216b6e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10216b780; end: 10216b79f;  */

void FUN_10216b780(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10216b7a0; end: 10216b803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10216b7a0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e5d558);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10216b804; end: 10216b80b;  */

void FUN_10216b804(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10216b80c; end: 10216b8ab;  */

void FUN_10216b80c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10216b8ac; end: 10216b8cb;  */

void FUN_10216b8ac(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10216b8cc; end: 10216b953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10216b8cc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5d508) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e5d510);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10216b954);
  (*pcVar2)();
}



/* Entry: 10216b954; end: 10216ba3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10216b954(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5d508);
  *(undefined **)(unaff_x20 + _DAT_112e5d508) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5d510);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e5d510))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104d5180;
  func_0x000107c613fc(&UNK_1104d5180,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10216ba40,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10216ba3c; end: 10216ba47;  */

void FUN_10216ba3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10216ba48; end: 10216baa7; -[_TtC34MemoriesActionMenuScopeGraphBridge49SCMemoriesActionMenuScopedServicesSaberEntryPoint init] */

void FUN_10216ba48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesActionMenuScopeGraphBridge.SCMemoriesActionMenuScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10216ba74);
  (*pcVar1)();
}



/* Entry: 10216baa8; end: 10216badf; -[_TtC34MemoriesActionMenuScopeGraphBridge49SCMemoriesActionMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216baa8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5d510));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5d508));
  return;
}



/* Entry: 10216bae0; end: 10216bae3;  */

void FUN_10216bae0(void)

{
  return;
}



/* Entry: 10216bae4; end: 10216bb03;  */

void FUN_10216bae4(void)

{
  FUN_10216b954();
  return;
}



/* Entry: 10216bb04; end: 10216bb23;  */

void FUN_10216bb04(void)

{
  func_0x000107c61168(&PTR_PTR_112821a48);
  return;
}



/* Entry: 10216bb24; end: 10216bbf3;  */

undefined8 FUN_10216bb24(void)

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
  
  func_0x000107c61428(0x112e5d540,&uStack_40,0x20,0);
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
    FUN_10216bbf4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10216bbf4; end: 10216bc13;  */

void FUN_10216bbf4(void)

{
  func_0x000107c61168(&PTR_PTR_112821b10);
  return;
}



/* Entry: 10216bc14; end: 10216bdcf;  */

void FUN_10216bc14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5d548,&UNK_10da63e08);
  puVar1 = &UNK_1104d51c8;
  func_0x000107c613fc(&UNK_1104d51c8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_10216bdd0,puVar1);
  return;
}



/* Entry: 10216bdd0; end: 10216bddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216bdd0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar10 = &lStack_60;
  lVar8 = lVar1;
  FUN_10216bbf4();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112e5d550) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112e5d558) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112e5d560) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112e5d568) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112e5d570) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112e5d578) = uVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar9;
  lStack_58 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_60,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 10216bde0; end: 10216be93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216bde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5d550) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e5d558) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e5d560) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e5d568) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e5d570) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e5d578) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10216be94; end: 10216bef3; -[_TtC34MemoriesActionMenuScopeGraphBridge42MemoriesActionMenuScopeGraphBridgeServices init] */

void FUN_10216be94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesActionMenuScopeGraphBridge.MemoriesActionMenuScopeGraphBridgeServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10216bec0);
  (*pcVar1)();
}



/* Entry: 10216bef4; end: 10216bfab; -[_TtC34MemoriesActionMenuScopeGraphBridge42MemoriesActionMenuScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010216bf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216bf30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216bf50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010216bf34) */
/* WARNING: Removing unreachable block (ram,0x00010216bf14) */
/* WARNING: Removing unreachable block (ram,0x00010216bf54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216bef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5d550));
  return;
}



/* Entry: 10216bfac; end: 10216bfb7;  */

void FUN_10216bfac(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10216c434,param_1);
  return;
}



/* Entry: 10216bfb8; end: 10216bff7;  */

void FUN_10216bfb8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10216c43c,0);
  return;
}



/* Entry: 10216bff8; end: 10216c003;  */

void FUN_10216bff8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10216c430,param_1);
  return;
}



/* Entry: 10216c004; end: 10216c043;  */

void FUN_10216c004(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10216c444,0);
  return;
}



/* Entry: 10216c044; end: 10216c04f;  */

void FUN_10216c044(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10216c438,param_1);
  return;
}



/* Entry: 10216c050; end: 10216c0db;  */

void FUN_10216c050(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10216c448,0);
  return;
}


