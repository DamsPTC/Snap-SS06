/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10090d20c; end: 10090d28f;  */

void FUN_10090d20c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e557f0,param_2,&UNK_102e557f4,param_2,&UNK_102e5581c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d290; end: 10090d2b7;  */

undefined ** FUN_10090d290(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090d2b8; end: 10090d2f7;  */

void FUN_10090d2b8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090d29c();
  FUN_100082720("MemoriesOpportunisticRetranscoderServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x58,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090d2f8; end: 10090d2ff;  */

void FUN_10090d2f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e56050);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d300; end: 10090d383;  */

void FUN_10090d300(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e56050,param_2,&UNK_102e56054,param_2,&UNK_102e5607c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d384; end: 10090d3ab;  */

undefined ** FUN_10090d384(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090d3ac; end: 10090d3eb;  */

void FUN_10090d3ac(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090d390();
  FUN_100082720("MemoriesPreviewSaveDismissServicesEntryPointWrapperScopeInitializationPluginProvider"
                ,0x54,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090d3ec; end: 10090d3f3;  */

void FUN_10090d3ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102e5619c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d3f4; end: 10090d477;  */

void FUN_10090d3f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102e5619c,param_2,FUN_10090d478,param_2,&UNK_102e561a0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d478; end: 10090d49f;  */

void FUN_10090d478(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10090d4a0; end: 10090d4a7;  */

/* WARNING: Possible PIC construction at 0x00010090d51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010090d520) */

void FUN_10090d4a0(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(auStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_100326a94();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10090d558(0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uStack_50);
  return;
}



/* Entry: 10090d4a8; end: 10090d557;  */

/* WARNING: Possible PIC construction at 0x00010090d51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010090d520) */

void FUN_10090d4a8(long param_1)

{
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  FUN_100083b20(auStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100326a94();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = uStack_50;
  FUN_10090d558(0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uStack_50);
  return;
}



/* Entry: 10090d558; end: 10090d577;  */

void FUN_10090d558(void)

{
  func_0x000107c61168(&PTR_PTR_112f24760);
  return;
}



/* Entry: 10090d578; end: 10090d627;  */

void FUN_10090d578(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  long unaff_x20;
  
  FUN_1000285a8(0x112f24718,&UNK_10db5f2f0);
  func_0x000107c613fc();
  pcVar1 = FUN_100ba4cec;
  FUN_1000bdd8c(FUN_100ba4cec,0);
  pcVar2 = pcVar1;
  FUN_1003a5b88();
  func_0x000107c61574(pcVar1);
  FUN_10033e374(0);
  func_0x000107c610f8();
  FUN_10090d628();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return;
}



/* Entry: 10090d628; end: 10090d673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090d628(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff3e68) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10090d674; end: 10090d69f;  */

void FUN_10090d674(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090d6a0; end: 10090d6c7;  */

undefined ** FUN_10090d6a0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090d6c8; end: 10090d707;  */

void FUN_10090d6c8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090d6ac();
  FUN_100082720("MemoriesSnapDocDuplicationDetectionServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x5a,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090d708; end: 10090d70f;  */

void FUN_10090d708(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e56474);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d710; end: 10090d793;  */

void FUN_10090d710(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e56474,param_2,&UNK_102e56478,param_2,&UNK_102e564a0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d794; end: 10090d7bb;  */

undefined ** FUN_10090d794(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090d7bc; end: 10090d7fb;  */

void FUN_10090d7bc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090d7a0();
  FUN_100082720("MentionCOFConfigurationServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090d7fc; end: 10090d803;  */

void FUN_10090d7fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d626c8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d804; end: 10090d887;  */

void FUN_10090d804(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d626c8,param_2,&UNK_102d626cc,param_2,&UNK_102d626f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d888; end: 10090d893;  */

undefined ** FUN_10090d888(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090d894; end: 10090d8bf;  */

void FUN_10090d894(void)

{
  FUN_1008f5bec();
  return;
}



/* Entry: 10090d8c0; end: 10090d8c7;  */

void FUN_10090d8c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f9b3d4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d8c8; end: 10090d94b;  */

void FUN_10090d8c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f9b3d4,param_2,&UNK_101f9b3d8,param_2,&UNK_101f9b400,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090d94c; end: 10090d96f;  */

undefined ** FUN_10090d94c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090d970; end: 10090d9ef;  */

void FUN_10090d970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106acfe8;
  func_0x000107c613fc(&UNK_1106acfe8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10090d9f0,puVar1);
  return;
}



/* Entry: 10090d9f0; end: 10090d9f7;  */

void FUN_10090d9f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fae688,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fae688,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ad080;
  func_0x000107c613fc(&UNK_1106ad080,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10391bd2c;
  FUN_10058fa64(&UNK_10391bd2c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090d9f8; end: 10090daef;  */

void FUN_10090d9f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fae688,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fae688,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ad080;
  func_0x000107c613fc(&UNK_1106ad080,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10391bd2c;
  FUN_10058fa64(&UNK_10391bd2c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090daf0; end: 10090db13;  */

void FUN_10090daf0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090db14; end: 10090db1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090db14(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_100378158();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fae698) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10090db1c; end: 10090db87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090db1c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100378158();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fae698) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10090db88; end: 10090dbb3;  */

void FUN_10090db88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090dbb4; end: 10090dbdb;  */

undefined ** FUN_10090dbb4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090dbdc; end: 10090dc1b;  */

void FUN_10090dbdc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090dbc0();
  FUN_100082720("MyAICameraChatPresenterServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090dc1c; end: 10090dc9f;  */

void FUN_10090dc1c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e9832c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090dca0; end: 10090dcef;  */

undefined ** FUN_10090dca0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090dcf0; end: 10090dde7;  */

void FUN_10090dcf0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fae9c8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fae9c8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ad248;
  func_0x000107c613fc(&UNK_1106ad248,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10391ca18;
  FUN_10058fa64(&UNK_10391ca18,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090dde8; end: 10090de0b;  */

void FUN_10090dde8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090de0c; end: 10090de13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090de0c(undefined8 *param_1)

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
  FUN_100363998();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112fae9d8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112fae9e0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 10090de14; end: 10090de97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090de14(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100363998();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fae9d8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fae9e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10090de98; end: 10090de9b;  */

void FUN_10090de98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090de9c; end: 10090dec7;  */

void FUN_10090de9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090dec8; end: 10090def3;  */

void FUN_10090dec8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090def4; end: 10090df33;  */

void FUN_10090def4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090ded8();
  FUN_100082720("OffPlatformShareFeatureServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090df34; end: 10090df3b;  */

void FUN_10090df34(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fc1ac0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090df3c; end: 10090dfbf;  */

void FUN_10090df3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fc1ac0,param_2,&UNK_102fc1ac4,param_2,&UNK_102fc1aec,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090dfc0; end: 10090dfe3;  */

undefined ** FUN_10090dfc0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090dfe4; end: 10090e063;  */

void FUN_10090dfe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106ad740;
  func_0x000107c613fc(&UNK_1106ad740,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10090e064,puVar1);
  return;
}



/* Entry: 10090e064; end: 10090e06b;  */

void FUN_10090e064(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112faee70,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112faee70,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ad7d8;
  func_0x000107c613fc(&UNK_1106ad7d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10391f2b4;
  FUN_10058fa64(&UNK_10391f2b4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090e06c; end: 10090e163;  */

void FUN_10090e06c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112faee70,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112faee70,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ad7d8;
  func_0x000107c613fc(&UNK_1106ad7d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10391f2b4;
  FUN_10058fa64(&UNK_10391f2b4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090e164; end: 10090e187;  */

void FUN_10090e164(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090e188; end: 10090e18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090e188(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_100370044();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112faee80) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10090e190; end: 10090e1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090e190(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100370044();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112faee80) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10090e1fc; end: 10090e227;  */

void FUN_10090e1fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090e228; end: 10090e24b;  */

undefined ** FUN_10090e228(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090e24c; end: 10090e2cb;  */

void FUN_10090e24c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106ad948;
  func_0x000107c613fc(&UNK_1106ad948,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10090e2cc,puVar1);
  return;
}



/* Entry: 10090e2cc; end: 10090e2d3;  */

void FUN_10090e2cc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112faf280,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112faf280,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ad9e0;
  func_0x000107c613fc(&UNK_1106ad9e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039200ec;
  FUN_10058fa64(&UNK_1039200ec,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090e2d4; end: 10090e3cb;  */

void FUN_10090e2d4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112faf280,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112faf280,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ad9e0;
  func_0x000107c613fc(&UNK_1106ad9e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039200ec;
  FUN_10058fa64(&UNK_1039200ec,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090e3cc; end: 10090e3ef;  */

void FUN_10090e3cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090e3f0; end: 10090e3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090e3f0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_10034c514();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112faf290) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112faf298) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112faf2a0) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 10090e3fc; end: 10090e49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090e3fc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_10034c514();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112faf290) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112faf298) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112faf2a0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10090e4a0; end: 10090e4ff;  */

void FUN_10090e4a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090e500; end: 10090e50b;  */

undefined ** FUN_10090e500(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090e50c; end: 10090e597;  */

void FUN_10090e50c(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10090e598,param_1);
  return;
}



/* Entry: 10090e598; end: 10090e59f;  */

void FUN_10090e598(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102cd66d4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090e5a0; end: 10090e623;  */

void FUN_10090e5a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102cd66d4,param_2,FUN_10090e624,param_2,&UNK_102cd66d8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090e624; end: 10090e64b;  */

void FUN_10090e624(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10090e64c; end: 10090e657;  */

void FUN_10090e64c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1003270d4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10090e858(0);
  func_0x000107c613fc();
  uVar2 = uStack_58;
  FUN_10090e878(uStack_58,uStack_60,uStack_68,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  uVar3 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar4 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar5 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_58;
  func_0x000107c61174(uStack_58);
  func_0x000107c6157c(uVar2);
  FUN_10090e888();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar2);
  *param_1 = lVar1;
  return;
}



/* Entry: 10090e658; end: 10090e7bb;  */

void FUN_10090e658(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1003270d4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10090e858(0);
  func_0x000107c613fc();
  uVar1 = uStack_58;
  FUN_10090e878(uStack_58,uStack_60,uStack_68,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174(uStack_58);
  func_0x000107c6157c(uVar1);
  FUN_10090e888();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 10090e7bc; end: 10090e7c3;  */

void FUN_10090e7bc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_100092c54(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_10090e80c();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090e7c4; end: 10090e80b;  */

void FUN_10090e7c4(undefined8 *param_1,undefined8 param_2)

{
  FUN_100092c54(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_10090e80c();
  *param_1 = param_2;
  return;
}



/* Entry: 10090e80c; end: 10090e857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090e80c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f0b4e0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10090e858; end: 10090e877;  */

void FUN_10090e858(void)

{
  func_0x000107c61168(&PTR_PTR_112f0b468);
  return;
}



/* Entry: 10090e878; end: 10090e887;  */

void FUN_10090e878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 10090e888; end: 10090e973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090e888(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083f80);
  func_0x000107c49e14();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_112f0b4e0);
    func_0x000107c6157c(uVar3);
    FUN_100083b20(&uStack_40);
    func_0x000107c61574(uVar3);
    uVar3 = uStack_40;
    func_0x000107c614f0(uStack_40);
    (**(code **)(lStack_38 + 8))();
    func_0x000107c615e8(uStack_40);
    puVar2 = &UNK_1105bf7c0;
    func_0x000107c613fc(&UNK_1105bf7c0,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    func_0x00010075a04c(0,1,&UNK_102cd6e40,puVar2);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 10090e974; end: 10090e9d3;  */

void FUN_10090e974(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090e9d4; end: 10090e9fb;  */

undefined ** FUN_10090e9d4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090e9fc; end: 10090ea3b;  */

void FUN_10090e9fc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090e9e0();
  FUN_100082720("PlayGamesPresenterServiceProviderWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090ea3c; end: 10090ea43;  */

void FUN_10090ea3c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df3a74);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090ea44; end: 10090eac7;  */

void FUN_10090ea44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df3a74,param_2,&UNK_102df3a78,param_2,&UNK_102df3aa0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090eac8; end: 10090eaeb;  */

undefined ** FUN_10090eac8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090eaec; end: 10090eb6b;  */

void FUN_10090eaec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106adbe0;
  func_0x000107c613fc(&UNK_1106adbe0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10090eb6c,puVar1);
  return;
}



/* Entry: 10090eb6c; end: 10090eb73;  */

void FUN_10090eb6c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fafd00,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fafd00,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106adc78;
  func_0x000107c613fc(&UNK_1106adc78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039224bc;
  FUN_10058fa64(&UNK_1039224bc,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090eb74; end: 10090ec6b;  */

void FUN_10090eb74(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fafd00,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fafd00,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106adc78;
  func_0x000107c613fc(&UNK_1106adc78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039224bc;
  FUN_10058fa64(&UNK_1039224bc,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090ec6c; end: 10090ecc3;  */

void FUN_10090ec6c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090ecc4; end: 10090ee0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090ecc4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_100387784();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fafd10) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fafd18) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fafd20) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fafd28) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fafd30) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fafd38) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fafd40) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fafd48) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112fafd50) = param_10;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 10090ee0c; end: 10090ee9b;  */

void FUN_10090ee0c(void)

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



/* Entry: 10090ee9c; end: 10090eea7;  */

undefined ** FUN_10090ee9c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090eea8; end: 10090eed3;  */

void FUN_10090eea8(void)

{
  FUN_1008f5bec();
  return;
}



/* Entry: 10090eed4; end: 10090eedb;  */

void FUN_10090eed4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f9b88c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090eedc; end: 10090ef5f;  */

void FUN_10090eedc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f9b88c,param_2,&UNK_101f9b890,param_2,&UNK_101f9b8b8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090ef60; end: 10090ef87;  */

undefined ** FUN_10090ef60(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090ef88; end: 10090efc7;  */

void FUN_10090ef88(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090ef6c();
  FUN_100082720("PreviewExportServiceProviderWrapperScopeInitializationPluginProvider",0x44,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090efc8; end: 10090efcf;  */

void FUN_10090efc8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fc2008);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090efd0; end: 10090f053;  */

void FUN_10090efd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fc2008,param_2,&UNK_102fc200c,param_2,&UNK_102fc2034,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090f054; end: 10090f07b;  */

undefined ** FUN_10090f054(void)

{
  return &PTR_DAT_113082b40;
}


