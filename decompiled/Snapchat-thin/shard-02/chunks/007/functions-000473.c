/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102092474; end: 1020924df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102092474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104c57d0;
  func_0x000107c613fc(&UNK_1104c57d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1020927fc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1020924e0; end: 10209257b;  */

void FUN_1020924e0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104c56e0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104c56e0;
  return;
}



/* Entry: 10209257c; end: 1020925b3;  */

void FUN_10209257c(long *param_1)

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



/* Entry: 1020925b4; end: 1020925bb;  */

undefined8 FUN_1020925b4(void)

{
  return 0x1b;
}



/* Entry: 1020925bc; end: 1020926ef;  */

void FUN_1020925bc(undefined8 *param_1)

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
  puVar1 = &UNK_1104c57f8;
  func_0x000107c613fc(&UNK_1104c57f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1020927d4;
  func_0x00010058fa64(FUN_1020927d4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1020926f0; end: 10209271f;  */

undefined ** FUN_1020926f0(void)

{
  return &PTR_DAT_112e55b28;
}



/* Entry: 102092720; end: 10209273f;  */

void FUN_102092720(void)

{
  func_0x000107c61168(&PTR_PTR_11281c6c0);
  return;
}



/* Entry: 102092740; end: 10209278f;  */

undefined1  [16] FUN_102092740(void)

{
  return ZEXT816(0x1104c5730);
}



/* Entry: 102092790; end: 1020927d3;  */

void FUN_102092790(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e55758 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9e80;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e55758 = puVar1;
  return;
}



/* Entry: 1020927d4; end: 1020927fb;  */

void FUN_1020927d4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1020927fc; end: 1020927ff;  */

void FUN_1020927fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102092800; end: 102092a33;  */

void FUN_102092800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e55760,&UNK_10da57f00);
  puVar1 = &UNK_1104c5838;
  func_0x000107c613fc(&UNK_1104c5838,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_102092a34,puVar1);
  return;
}



/* Entry: 102092a34; end: 102092a67;  */

void FUN_102092a34(void)

{
  long unaff_x20;
  
  func_0x000102092904(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102092a68; end: 102092a77;  */

undefined1  [16] FUN_102092a68(void)

{
  return ZEXT816(0x1104c5860);
}



/* Entry: 102092a78; end: 102092fbb;  */

void FUN_102092a78(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_68;
  
  uVar14 = *param_2;
  func_0x0001000285a8(0x112e55770,&UNK_10da57f48);
  puVar1 = &uStack_68;
  uStack_68 = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102095064();
  pcVar3 = "SCSendToListsEditScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSendToListsEditScopeExposerSubjectServiceProvider",0x33,2);
  func_0x000102095018();
  func_0x000100082720("ShortcutsCarouselScopeExposerSubjectServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e55778,&UNK_10da57f50);
  puVar4 = &UNK_1104c58a8;
  func_0x000107c613fc(&UNK_1104c58a8,0x30,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  pcVar5 = FUN_102093054;
  func_0x0001000823a8(FUN_102093054,puVar4);
  func_0x000100082720("SCFriendsFeedHeaderShortcutsLoggingServicesEntryPointWrapperServiceProvider",
                      0x4b,2);
  puVar6 = puVar2;
  FUN_1020950f0();
  func_0x000100082720("SCSendToListsEditScopeExposerObservableServiceProvider",0x36,2);
  pcVar7 = pcVar3;
  FUN_102095058();
  func_0x000100082720("ShortcutsCarouselScopeExposerObservableServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_10209257c;
  func_0x0001000823a8(FUN_10209257c,0);
  func_0x000100082720("SCFriendsFeedHeaderScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar9 = puVar2;
  FUN_102094e6c(puVar2,pcVar3);
  func_0x000100082720("FriendsFeedHeaderScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e55780,&UNK_10da57f60);
  puVar4 = &UNK_1104c58d0;
  func_0x000107c613fc(&UNK_1104c58d0,0x60,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = param_6;
  *(undefined8 *)(puVar4 + 0x20) = param_7;
  *(undefined8 *)(puVar4 + 0x28) = param_8;
  *(undefined8 *)(puVar4 + 0x30) = param_5;
  *(undefined8 *)(puVar4 + 0x38) = param_4;
  *(undefined8 *)(puVar4 + 0x40) = param_9;
  *(undefined8 *)(puVar4 + 0x48) = param_10;
  *(undefined8 *)(puVar4 + 0x50) = param_11;
  *(char **)(puVar4 + 0x58) = pcVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(pcVar7);
  pcVar10 = FUN_102093060;
  func_0x0001000823a8(FUN_102093060,puVar4);
  func_0x000100082720("SCFriendsFeedHeaderEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e55788,&UNK_10da57f68);
  func_0x000107c6157c(pcVar5);
  pcVar11 = FUN_102093094;
  func_0x0001000823a8(FUN_102093094,pcVar5);
  func_0x000100082720("SCFriendsFeedHeaderShortcutsLoggingServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e55790,&UNK_10da57f70);
  puVar4 = &UNK_1104c58f8;
  func_0x000107c613fc(&UNK_1104c58f8,0x38,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 **)(puVar4 + 0x18) = puVar9;
  *(code **)(puVar4 + 0x20) = pcVar10;
  *(code **)(puVar4 + 0x28) = pcVar8;
  *(code **)(puVar4 + 0x30) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar8);
  uVar14 = 0x10209309c;
  func_0x0001000823a8(0x10209309c,puVar4);
  func_0x000100082720("SCFriendsFeedHeaderScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e556f8,&UNK_10da57ce0);
  func_0x000107c6157c(uVar14);
  uVar12 = 0x1020930ac;
  func_0x0001000823a8(0x1020930ac,uVar14);
  func_0x000100082720("SCFriendsFeedHeaderScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e556e8,&UNK_10da57cd0);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x1020930b4;
  func_0x0001000823a8(0x1020930b4,uVar12);
  func_0x000100082720("SCFriendsFeedHeaderScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_1104c5920;
  func_0x000107c613fc(&UNK_1104c5920,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar13;
  *(code **)(puVar4 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar13 = 0x1020930bc;
  func_0x0001000823a8(0x1020930bc,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCFriendsFeedHeaderScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 102092fbc; end: 102093053;  */

void FUN_102092fbc(void)

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



/* Entry: 102093054; end: 10209305f;  */

void FUN_102093054(undefined8 *param_1)

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
  FUN_102094430();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10209416c(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 102093060; end: 102093093;  */

void FUN_102093060(void)

{
  long unaff_x20;
  
  FUN_1020930c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102093094; end: 1020930c3;  */

void FUN_102093094(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1020930c4; end: 102093c7f;  */

void FUN_1020930c4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  FUN_102093e10();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  func_0x0001000285a8(0x112e55798,&UNK_10da57f78);
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
  uVar12 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x18) = puVar9;
  puVar10 = PTR_PTR_1126a9e88;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f060510);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f05c1f0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c0f0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f01ac50);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f060530);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f007fb0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar9);
  uVar12 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f060550);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uStack_b8);
  *param_1 = param_2;
  return;
}



/* Entry: 102093c80; end: 102093d03;  */

void FUN_102093c80(void)

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
  return;
}



/* Entry: 102093d04; end: 102093d0b;  */

undefined8 FUN_102093d04(void)

{
  return 0x1b;
}



/* Entry: 102093d0c; end: 102093d8f;  */

void FUN_102093d0c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102093e50,param_2,FUN_102093e54,param_2,FUN_102093e7c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102093d90; end: 102093ddf;  */

undefined8 FUN_102093d90(void)

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



/* Entry: 102093de0; end: 102093e0f;  */

undefined ** FUN_102093de0(void)

{
  return &PTR_DAT_112e55b28;
}



/* Entry: 102093e10; end: 102093e2f;  */

void FUN_102093e10(void)

{
  func_0x000107c61168(&PTR_PTR_112e55808);
  return;
}



/* Entry: 102093e30; end: 102093e53;  */

undefined1  [16] FUN_102093e30(void)

{
  return ZEXT816(0x1104c5978);
}



/* Entry: 102093e54; end: 102093e7b;  */

void FUN_102093e54(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102093e7c; end: 102093e83;  */

undefined8 FUN_102093e7c(void)

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



/* Entry: 102093e84; end: 102093fdb;  */

void FUN_102093e84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_102094430();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10209416c(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 102093fdc; end: 102094027;  */

void FUN_102093fdc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102094028; end: 10209407b;  */

void FUN_102094028(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10209407c; end: 102094083;  */

undefined8 FUN_10209407c(void)

{
  return 0x1b;
}



/* Entry: 102094084; end: 102094107;  */

void FUN_102094084(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102094480,param_2,FUN_102094484,param_2,FUN_1020944ac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102094108; end: 102094157;  */

undefined8 FUN_102094108(void)

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



/* Entry: 102094158; end: 10209416b;  */

void FUN_102094158(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104c59b8;
  return;
}



/* Entry: 10209416c; end: 102094413;  */

void FUN_10209416c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9e90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f060510);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c0f0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f060570);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102094414);
  (*pcVar1)();
}



/* Entry: 102094414; end: 10209442f;  */

undefined ** FUN_102094414(void)

{
  return &PTR_DAT_112e55b28;
}



/* Entry: 102094430; end: 10209444f;  */

void FUN_102094430(void)

{
  func_0x000107c61168(&PTR_PTR_112e55918);
  return;
}



/* Entry: 102094450; end: 102094483;  */

undefined1  [16] FUN_102094450(void)

{
  return ZEXT816(0x1104c59f8);
}



/* Entry: 102094484; end: 1020944ab;  */

void FUN_102094484(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1020944ac; end: 1020944b3;  */

undefined8 FUN_1020944ac(void)

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



/* Entry: 1020944b4; end: 10209471b;  */

void FUN_1020944b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104c5e00;
  ppuVar4 = &PTR_DAT_112e55b28;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104c5a68;
  func_0x000107c613fc(&UNK_1104c5a68,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0x112e559a0;
  func_0x0001000285a8(0x112e559a0,&UNK_10da582f0);
  func_0x0001000a6ee8(&UNK_1104c5cd0,"FriendsFeedHeaderScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_10209471c,puVar2,uVar3,&UNK_1104c5cd0,&PTR_DAT_112e55a40);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104c5978,
                      "SCFriendsFeedHeaderEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_10209475c,param_4,uVar3,&UNK_1104c5978,&PTR_DAT_112e557a0);
  func_0x000107c61574(param_4);
  puVar2 = &UNK_1104c5a90;
  func_0x000107c613fc(&UNK_1104c5a90,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1104c5770,"SCFriendsFeedHeaderScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_102094830,puVar2,uVar3,&UNK_1104c5770,&PTR_DAT_112e55700);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1104c5a18,
                      "SCFriendsFeedHeaderShortcutsLoggingServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x58,2,FUN_1020948bc,param_6,uVar3,&UNK_1104c5a18,&PTR_DAT_112e558b0);
  func_0x000107c61574(param_6);
  uVar3 = 0x112e559a8;
  func_0x0001000285a8(0x112e559a8,&UNK_10da582f8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCFriendsFeedHeaderScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10209471c; end: 10209475b;  */

void FUN_10209471c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102095190(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FriendsFeedHeaderScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10209475c; end: 102094787;  */

void FUN_10209475c(void)

{
  FUN_102094838();
  return;
}



/* Entry: 102094788; end: 10209482f;  */

void FUN_102094788(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104c5ab8;
  func_0x000107c613fc(&UNK_1104c5ab8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10209491c;
  func_0x0001000823a8(FUN_10209491c,puVar1);
  func_0x000100082720("SCFriendsFeedHeaderScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102094830; end: 102094837;  */

void FUN_102094830(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104c5ab8;
  func_0x000107c613fc(&UNK_1104c5ab8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10209491c;
  func_0x0001000823a8(FUN_10209491c,puVar3);
  func_0x000100082720("SCFriendsFeedHeaderScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102094838; end: 1020948bb;  */

void FUN_102094838(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1020948bc; end: 1020948e7;  */

void FUN_1020948bc(void)

{
  FUN_102094838();
  return;
}



/* Entry: 1020948e8; end: 1020948ef;  */

void FUN_1020948e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x102094480);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1020948f0; end: 10209491b;  */

void FUN_1020948f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10209491c; end: 10209492b;  */

void FUN_10209491c(undefined8 *param_1)

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
  puVar1 = &UNK_1104c57f8;
  func_0x000107c613fc(&UNK_1104c57f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1020927d4;
  func_0x00010058fa64(FUN_1020927d4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10209492c; end: 102094a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10209492c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102094d7c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e559b0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e559b8) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102094a44);
  (*pcVar2)();
}



/* Entry: 102094a44; end: 102094aa3; -[_TtC33FriendsFeedHeaderScopeGraphBridge48FriendsFeedHeaderScopeGraphBridgeSaberEntryPoint init] */

void FUN_102094a44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedHeaderScopeGraphBridge.FriendsFeedHeaderScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102094a70);
  (*pcVar1)();
}



/* Entry: 102094aa4; end: 102094adb; -[_TtC33FriendsFeedHeaderScopeGraphBridge48FriendsFeedHeaderScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102094ac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102094ac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102094aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e559b0));
  return;
}



/* Entry: 102094adc; end: 102094b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102094adc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e559b8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e559b0));
  return;
}



/* Entry: 102094b04; end: 102094b23;  */

void FUN_102094b04(void)

{
  func_0x000107c61168(&PTR_PTR_11281c780);
  return;
}



/* Entry: 102094b24; end: 102094bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102094b24(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e559e8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e559f0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102094bac);
  (*pcVar2)();
}



/* Entry: 102094bac; end: 102094c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102094bac(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e559e8);
  *(undefined **)(unaff_x20 + _DAT_112e559e8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e559f0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e559f0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104c5b88;
  func_0x000107c613fc(&UNK_1104c5b88,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102094c98,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102094c94; end: 102094c9f;  */

void FUN_102094c94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102094ca0; end: 102094cff; -[_TtC33FriendsFeedHeaderScopeGraphBridge48SCFriendsFeedHeaderScopedServicesSaberEntryPoint init] */

void FUN_102094ca0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedHeaderScopeGraphBridge.SCFriendsFeedHeaderScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102094ccc);
  (*pcVar1)();
}



/* Entry: 102094d00; end: 102094d37; -[_TtC33FriendsFeedHeaderScopeGraphBridge48SCFriendsFeedHeaderScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102094d00(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e559f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e559e8));
  return;
}



/* Entry: 102094d38; end: 102094d3b;  */

void FUN_102094d38(void)

{
  return;
}



/* Entry: 102094d3c; end: 102094d5b;  */

void FUN_102094d3c(void)

{
  FUN_102094bac();
  return;
}



/* Entry: 102094d5c; end: 102094d7b;  */

void FUN_102094d5c(void)

{
  func_0x000107c61168(&PTR_PTR_11281c848);
  return;
}



/* Entry: 102094d7c; end: 102094e4b;  */

undefined8 FUN_102094d7c(void)

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
  
  func_0x000107c61428(0x112e55a20,&uStack_40,0x20,0);
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
    FUN_102094e4c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102094e4c; end: 102094e6b;  */

void FUN_102094e4c(void)

{
  func_0x000107c61168(&PTR_PTR_11281c910);
  return;
}



/* Entry: 102094e6c; end: 102094e8f;  */

void FUN_102094e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104c5bd0;
  func_0x0001000285a8(0x112e55a28,&UNK_10da583c8);
  func_0x000107c613fc(&UNK_1104c5bd0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102094f14,puVar1);
  return;
}



/* Entry: 102094e90; end: 102094f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102094e90(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102094e4c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e55a30) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e55a38) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102094f14; end: 102094f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102094f14(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_102094e4c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e55a30) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e55a38) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102094f1c; end: 102094f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102094f1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e55a30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e55a38) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102094f80; end: 102094fdf; -[_TtC33FriendsFeedHeaderScopeGraphBridge41FriendsFeedHeaderScopeGraphBridgeServices init] */

void FUN_102094f80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedHeaderScopeGraphBridge.FriendsFeedHeaderScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102094fac);
  (*pcVar1)();
}



/* Entry: 102094fe0; end: 102095057; -[_TtC33FriendsFeedHeaderScopeGraphBridge41FriendsFeedHeaderScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102094ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102095000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102094fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e55a38));
  return;
}



/* Entry: 102095058; end: 102095063;  */

void FUN_102095058(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102095454,param_1);
  return;
}



/* Entry: 102095064; end: 1020950ef;  */

void FUN_102095064(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10209545c,0);
  return;
}



/* Entry: 1020950f0; end: 1020950fb;  */

void FUN_1020950f0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102095154,param_1);
  return;
}



/* Entry: 1020950fc; end: 102095153;  */

void FUN_1020950fc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102095154; end: 102095187;  */

void FUN_102095154(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102095188; end: 1020951b3;  */

undefined8 FUN_102095188(void)

{
  return 0x1b;
}



/* Entry: 1020951b4; end: 102095233;  */

void FUN_1020951b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 102095234; end: 10209532b;  */

void FUN_102095234(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e55a20,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e55a20,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104c5d10;
  func_0x000107c613fc(&UNK_1104c5d10,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10209544c;
  func_0x00010058fa64(0x10209544c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10209532c; end: 102095357;  */

void FUN_10209532c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102095358; end: 10209535f;  */

void FUN_102095358(undefined8 *param_1)

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
  func_0x000107c61428(0x112e55a20,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e55a20,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104c5d10;
  func_0x000107c613fc(&UNK_1104c5d10,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10209544c;
  func_0x00010058fa64(0x10209544c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102095360; end: 1020953bb;  */

void FUN_102095360(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e55a20,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e55a20,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1020953bc; end: 10209545f;  */

undefined ** FUN_1020953bc(void)

{
  return &PTR_DAT_112e55b28;
}



/* Entry: 102095460; end: 1020954a7; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102095460(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e55a90;
  func_0x000107c61428(param_1 + _DAT_112e55a90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1020954a8; end: 1020954ff; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020954a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e55a90;
  func_0x000107c61428(param_1 + _DAT_112e55a90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102095500; end: 102095547; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint shortcutsCarouselScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102095500(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e55a98;
  func_0x000107c61428(param_1 + _DAT_112e55a98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102095548; end: 102095553; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint setShortcutsCarouselScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102095548(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e55a98;
  func_0x000107c61428(param_1 + _DAT_112e55a98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102095554; end: 10209559b; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint sCSendToListsEditScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102095554(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e55aa0;
  func_0x000107c61428(param_1 + _DAT_112e55aa0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10209559c; end: 1020955a7; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint setSCSendToListsEditScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209559c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e55aa0;
  func_0x000107c61428(param_1 + _DAT_112e55aa0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1020955a8; end: 1020955ef; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint friendsFeedHeaderScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020955a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e55aa8;
  func_0x000107c61428(param_1 + _DAT_112e55aa8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1020955f0; end: 1020955fb; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint setFriendsFeedHeaderScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020955f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e55aa8;
  func_0x000107c61428(param_1 + _DAT_112e55aa8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1020955fc; end: 10209565b;  */

void FUN_1020955fc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10209565c; end: 102095893;  */

/* WARNING: Possible PIC construction at 0x0001020957c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020957d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020957f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102095804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102095820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102095868: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102095808) */
/* WARNING: Removing unreachable block (ram,0x0001020957f8) */
/* WARNING: Removing unreachable block (ram,0x0001020957dc) */
/* WARNING: Removing unreachable block (ram,0x0001020957cc) */
/* WARNING: Removing unreachable block (ram,0x00010209586c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209565c(void)

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
  func_0x000107c5ab10();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51298();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c43a94();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_102094b04();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_102094d7c();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102095894);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112e559b0) = lVar5;
        *(long *)(lVar4 + _DAT_112e559b8) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102095894; end: 1020958bb; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102095894(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10209565c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020958bc; end: 1020958ff; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint end] */

void FUN_1020958bc(undefined8 param_1)

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



/* Entry: 102095900; end: 102095b6f;  */

void FUN_102095900(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0f9fab0)) {
      uVar2 = 0xd00000000000001d;
      func_0x000107c605b8(0xd00000000000001d,0x800000010f060550,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0faa3a0)) {
          uVar2 = 0xd00000000000001d;
          func_0x000107c605b8(0xd00000000000001d,0x800000010f055c60,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0f9f6c0)) &&
               (func_0x000107c605b8(0xd000000000000030,0x800000010f060940,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "FriendsFeedHeaderScopeGraphBridge/SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x5a,2,0x3a,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102095b70);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c54c7c();
            goto LAB_10209598c;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58840();
        goto LAB_10209598c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59128();
  }
LAB_10209598c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102095b70; end: 102095c1b; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102095b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102095900(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102095c1c; end: 102095c9f; -[SCFriendsFeedHeaderScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102095c1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e55a90,0);
  *(undefined8 *)(param_1 + _DAT_112e55a98) = 0;
  *(undefined8 *)(param_1 + _DAT_112e55aa0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e55aa8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e55ab0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}


