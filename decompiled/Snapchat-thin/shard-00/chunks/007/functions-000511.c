/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009cf9b8; end: 1009cf9db;  */

undefined ** FUN_1009cf9b8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cf9dc; end: 1009cfa5b;  */

void FUN_1009cf9dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110736690;
  func_0x000107c613fc(&UNK_110736690,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009cfa5c,puVar1);
  return;
}



/* Entry: 1009cfa5c; end: 1009cfa63;  */

void FUN_1009cfa5c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113049340,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113049340,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110736728;
  func_0x000107c613fc(&UNK_110736728,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104021d38;
  FUN_10058fa64(&UNK_104021d38,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009cfa64; end: 1009cfb5b;  */

void FUN_1009cfa64(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113049340,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113049340,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110736728;
  func_0x000107c613fc(&UNK_110736728,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104021d38;
  FUN_10058fa64(&UNK_104021d38,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009cfb5c; end: 1009cfb7f;  */

void FUN_1009cfb5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009cfb80; end: 1009cfb87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009cfb80(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1002092e8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_113049350) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1009cfb88; end: 1009cfbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009cfb88(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1002092e8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113049350) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009cfbf4; end: 1009cfc1f;  */

void FUN_1009cfbf4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009cfc20; end: 1009cfc47;  */

undefined ** FUN_1009cfc20(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cfc48; end: 1009cfc87;  */

void FUN_1009cfc48(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009cfc2c();
  FUN_100082720("VoiceNoteTranscriptionServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009cfc88; end: 1009cfc8f;  */

void FUN_1009cfc88(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10196af58);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cfc90; end: 1009cfd13;  */

void FUN_1009cfc90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10196af58,param_2,&UNK_10196af5c,param_2,&UNK_10196af84,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cfd14; end: 1009cfd3b;  */

undefined ** FUN_1009cfd14(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cfd3c; end: 1009cfd7b;  */

void FUN_1009cfd3c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009cfd20();
  FUN_100082720("WatermarkingServiceProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009cfd7c; end: 1009cfd83;  */

void FUN_1009cfd7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a9cee0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cfd84; end: 1009cfe07;  */

void FUN_1009cfd84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a9cee0,param_2,&UNK_101a9cee4,param_2,&UNK_101a9cf0c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cfe08; end: 1009cfe2f;  */

undefined ** FUN_1009cfe08(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cfe30; end: 1009cfe6f;  */

void FUN_1009cfe30(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009cfe14();
  FUN_100082720("WebBrowserPrivacyConsentServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009cfe70; end: 1009cfe77;  */

void FUN_1009cfe70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1017813d0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cfe78; end: 1009cfefb;  */

void FUN_1009cfe78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1017813d0,param_2,&UNK_1017813d4,param_2,&UNK_1017813fc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cfefc; end: 1009cff23;  */

undefined ** FUN_1009cfefc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cff24; end: 1009cff63;  */

void FUN_1009cff24(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009cff08();
  FUN_100082720("WebBrowsingLoggingImplServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009cff64; end: 1009cff6b;  */

void FUN_1009cff64(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101781654);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cff6c; end: 1009cffef;  */

void FUN_1009cff6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101781654,param_2,&UNK_101781658,param_2,&UNK_101781680,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cfff0; end: 1009d0017;  */

undefined ** FUN_1009cfff0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009d0018; end: 1009d0057;  */

void FUN_1009d0018(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009cfffc();
  FUN_100082720("WebBrowsingSecureAccessImplServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x52,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d0058; end: 1009d005f;  */

void FUN_1009d0058(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101781784);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d0060; end: 1009d00e3;  */

void FUN_1009d0060(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101781784,param_2,&UNK_101781788,param_2,&UNK_1017817b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d00e4; end: 1009d010b;  */

undefined ** FUN_1009d00e4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009d010c; end: 1009d014b;  */

void FUN_1009d010c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009d00f0();
  FUN_100082720("WebLensesActiveLensServiceProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d014c; end: 1009d0153;  */

void FUN_1009d014c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019c0cb4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d0154; end: 1009d01d7;  */

void FUN_1009d0154(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019c0cb4,param_2,&UNK_1019c0cb8,param_2,&UNK_1019c0ce0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d01d8; end: 1009d01ff;  */

undefined ** FUN_1009d01d8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009d0200; end: 1009d023f;  */

void FUN_1009d0200(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009d01e4();
  FUN_100082720("WebViewServicesProviderWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d0240; end: 1009d0247;  */

void FUN_1009d0240(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101781984);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d0248; end: 1009d02cb;  */

void FUN_1009d0248(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101781984,param_2,&UNK_101781988,param_2,&UNK_1017819b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d02cc; end: 1009d031b;  */

undefined ** FUN_1009d02cc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009d031c; end: 1009d0413;  */

void FUN_1009d031c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130495e8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130495e8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107368f8;
  func_0x000107c613fc(&UNK_1107368f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104022a90;
  FUN_10058fa64(&UNK_104022a90,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d0414; end: 1009d0437;  */

void FUN_1009d0414(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d0438; end: 1009d043f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d0438(undefined8 *param_1)

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
  FUN_1001f59e8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_1130495f8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_113049600) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009d0440; end: 1009d04c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d0440(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1001f59e8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_1130495f8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113049600) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d04c4; end: 1009d04c7;  */

void FUN_1009d04c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d04c8; end: 1009d04f3;  */

void FUN_1009d04c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d04f4; end: 1009d050f;  */

void FUN_1009d04f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d0510; end: 1009d0597;  */

void FUN_1009d0510(void)

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



/* Entry: 1009d0598; end: 1009d05af;  */

void FUN_1009d0598(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d05b0; end: 1009d05eb;  */

void FUN_1009d05b0(void)

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



/* Entry: 1009d05ec; end: 1009d0607;  */

void FUN_1009d05ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d0608; end: 1009d0653;  */

void FUN_1009d0608(void)

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



/* Entry: 1009d0654; end: 1009d06df;  */

void FUN_1009d0654(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d06e0; end: 1009d070b;  */

void FUN_1009d06e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d070c; end: 1009d070f;  */

void FUN_1009d070c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d0710; end: 1009d073b;  */

void FUN_1009d0710(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3c264();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1009d073c; end: 1009d07cb; -[SCDeltaSyncDuplexTriggerHandler _register] */

/* WARNING: Possible PIC construction at 0x0001009d0770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009d0798: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009d0774) */
/* WARNING: Removing unreachable block (ram,0x0001009d079c) */

void FUN_1009d073c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4fc7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1009d07cc; end: 1009d07d3;  */

void FUN_1009d07cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = uStack_38;
  func_0x000107c444a4(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c4ec80(uStack_40);
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  puVar3 = PTR_PTR_1126a89f0;
  func_0x000107c610f8();
  func_0x000107c46b98();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1009d07d4; end: 1009d088b;  */

void FUN_1009d07d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c444a4(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c4ec80(uStack_40);
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  puVar3 = PTR_PTR_1126a89f0;
  func_0x000107c610f8();
  func_0x000107c46b98();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1009d088c; end: 1009d08bf;  */

void FUN_1009d088c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1009d08c0; end: 1009d09d3;  */

void FUN_1009d08c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_50 = FUN_1009d272c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100458ea0;
  puStack_58 = &UNK_1103da810;
  uStack_48 = uVar1;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = uStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c3e4fc(puVar3,param_3,ppuVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61174(puVar3);
  puVar5 = puVar3;
  func_0x0001000ad7c4();
  puVar6 = PTR_PTR_1126a7718;
  func_0x000107c610f8();
  func_0x000107c466f4();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c3e80c(puVar6);
  func_0x000107c61170(puVar3);
  *param_1 = puVar6;
  return;
}



/* Entry: 1009d09d4; end: 1009d0a77; -[SCForcedLogoutAuthenticationStateTracker initWithGraphene:preferences:] */

undefined1 *
FUN_1009d09d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ed930;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009d0a78; end: 1009d0a8b;  */

void FUN_1009d0a78(long param_1,long param_2)

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



/* Entry: 1009d0a8c; end: 1009d0ab7;  */

void FUN_1009d0a8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d0ab8; end: 1009d0b3b; -[SCForcedLogoutAuthenticationStateTracker setUserSessionDidBegin] */

/* WARNING: Possible PIC construction at 0x0001009d0ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009d0b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009d0aec) */
/* WARNING: Removing unreachable block (ram,0x0001009d0b2c) */

void FUN_1009d0ab8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c55020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1009d0b3c; end: 1009d0b87; -[SCPreferences setHasLoggedInSession:] */

void FUN_1009d0b3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c56bd8(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e2e878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1009d0b88; end: 1009d0c4b; -[SCDuplexSyncTriggerServiceImpl initWithDuplexClient:performerProvider:] */

undefined1 *
FUN_1009d0b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7d58;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009d0c4c; end: 1009d0d03; -[SCDuplexSyncTriggerServiceImpl beginSubscribing] */

/* WARNING: Possible PIC construction at 0x0001009d0c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009d0ce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009d0ca0) */
/* WARNING: Removing unreachable block (ram,0x0001009d0ce8) */

void FUN_1009d0c4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4e60c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1009d0d04; end: 1009d0d33; -[SCPreferences setLoggedInSessionTimestamp:] */

void FUN_1009d0d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e2e898);
  return;
}



/* Entry: 1009d0d34; end: 1009d0db3;  */

void FUN_1009d0d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073ae80;
  func_0x000107c613fc(&UNK_11073ae80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d0db4,puVar1);
  return;
}



/* Entry: 1009d0db4; end: 1009d0dbb;  */

void FUN_1009d0db4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113050cc8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113050cc8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073af18;
  func_0x000107c613fc(&UNK_11073af18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104050200;
  FUN_10058fa64(&UNK_104050200,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d0dbc; end: 1009d0eb3;  */

void FUN_1009d0dbc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113050cc8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113050cc8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073af18;
  func_0x000107c613fc(&UNK_11073af18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104050200;
  FUN_10058fa64(&UNK_104050200,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d0eb4; end: 1009d0ed7;  */

void FUN_1009d0eb4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d0ed8; end: 1009d1223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d0ed8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1000a33e8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113050cd8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113050ce0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113050ce8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113050cf0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113050cf8) = param_6;
  *(undefined8 *)(lVar3 + _DAT_113050d00) = param_7;
  *(undefined8 *)(lVar3 + _DAT_113050d08) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113050d10) = param_9;
  *(undefined8 *)(lVar3 + _DAT_113050d18) = param_10;
  *(undefined8 *)(lVar3 + _DAT_113050d20) = param_11;
  *(undefined8 *)(lVar3 + _DAT_113050d28) = param_12;
  *(undefined8 *)(lVar3 + _DAT_113050d30) = param_13;
  *(undefined8 *)(lVar3 + _DAT_113050d38) = param_14;
  *(undefined8 *)(lVar3 + _DAT_113050d40) = param_15;
  *(undefined8 *)(lVar3 + _DAT_113050d48) = param_16;
  *(undefined8 *)(lVar3 + _DAT_113050d50) = param_17;
  *(undefined8 *)(lVar3 + _DAT_113050d58) = param_18;
  *(undefined8 *)(lVar3 + _DAT_113050d60) = param_19;
  *(undefined8 *)(lVar3 + _DAT_113050d68) = param_20;
  *(undefined8 *)(lVar3 + _DAT_113050d70) = param_21;
  *(undefined8 *)(lVar3 + _DAT_113050d78) = param_22;
  *(undefined8 *)(lVar3 + _DAT_113050d80) = param_23;
  *(undefined8 *)(lVar3 + _DAT_113050d88) = param_24;
  *(undefined8 *)(lVar3 + _DAT_113050d90) = param_25;
  *(undefined8 *)(lVar3 + _DAT_113050d98) = param_26;
  *(undefined8 *)(lVar3 + _DAT_113050da0) = param_27;
  *(undefined8 *)(lVar3 + _DAT_113050da8) = param_28;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c6157c(param_2);
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
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d1224; end: 1009d139f;  */

void FUN_1009d1224(void)

{
  long unaff_x20;
  
  FUN_1009d0ed8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 1009d13a0; end: 1009d13c3;  */

undefined ** FUN_1009d13a0(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d13c4; end: 1009d1443;  */

void FUN_1009d13c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073d470;
  func_0x000107c613fc(&UNK_11073d470,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d1444,puVar1);
  return;
}



/* Entry: 1009d1444; end: 1009d144b;  */

void FUN_1009d1444(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113053150,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113053150,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073d508;
  func_0x000107c613fc(&UNK_11073d508,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10406c938;
  FUN_10058fa64(&UNK_10406c938,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d144c; end: 1009d1543;  */

void FUN_1009d144c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113053150,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113053150,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073d508;
  func_0x000107c613fc(&UNK_11073d508,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10406c938;
  FUN_10058fa64(&UNK_10406c938,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d1544; end: 1009d1567;  */

void FUN_1009d1544(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d1568; end: 1009d157b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d1568(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar12 = &lStack_70;
  lVar10 = lVar1;
  FUN_1000a0c04();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(long *)(lVar11 + _DAT_113053160) = lVar1;
  *(undefined8 *)(lVar11 + _DAT_113053168) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_113053170) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_113053178) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_113053180) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_113053188) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_113053190) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_113053198) = uVar8;
  puVar9 = PTR_s_init_1125d9248;
  lStack_70 = lVar11;
  lStack_68 = lVar10;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c61154(&lStack_70,puVar9);
  *param_1 = plVar12;
  return;
}



/* Entry: 1009d157c; end: 1009d16a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d157c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar2 = param_2;
  FUN_1000a0c04();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113053160) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113053168) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113053170) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113053178) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113053180) = param_6;
  *(undefined8 *)(lVar3 + _DAT_113053188) = param_7;
  *(undefined8 *)(lVar3 + _DAT_113053190) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113053198) = param_9;
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
  func_0x000107c61154(&lStack_70,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d16a8; end: 1009d172f;  */

void FUN_1009d16a8(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d1730; end: 1009d1757;  */

undefined ** FUN_1009d1730(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d1758; end: 1009d1797;  */

void FUN_1009d1758(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009d173c();
  FUN_100082720("AsyncQueueServicesProviderWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d1798; end: 1009d179f;  */

void FUN_1009d1798(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014bd9d8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d17a0; end: 1009d1823;  */

void FUN_1009d17a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014bd9d8,param_2,&UNK_1014bd9dc,param_2,&UNK_1014bda04,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d1824; end: 1009d184b;  */

undefined ** FUN_1009d1824(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d184c; end: 1009d188b;  */

void FUN_1009d184c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009d1830();
  FUN_100082720("AuthenticationExperimentServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d188c; end: 1009d1893;  */

void FUN_1009d188c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a4ba8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d1894; end: 1009d1917;  */

void FUN_1009d1894(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a4ba8,param_2,&UNK_1014a4bac,param_2,&UNK_1014a4bd4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d1918; end: 1009d1923;  */

undefined ** FUN_1009d1918(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d1924; end: 1009d19af;  */

void FUN_1009d1924(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d19b0,param_1);
  return;
}



/* Entry: 1009d19b0; end: 1009d19b7;  */

void FUN_1009d19b0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_1009d19b8();
  func_0x000107c613fc();
  FUN_100083b20(&uStack_38);
  func_0x000107c615e8(uStack_38);
  *param_1 = unaff_x20;
  param_1[1] = &PTR_DAT_1103c50f0;
  return;
}



/* Entry: 1009d19b8; end: 1009d19d7;  */

void FUN_1009d19b8(void)

{
  func_0x000107c61168(&PTR_PTR_112da2080);
  return;
}



/* Entry: 1009d19d8; end: 1009d1a37;  */

void FUN_1009d19d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_1009d19b8();
  func_0x000107c613fc();
  FUN_100083b20(&uStack_38);
  func_0x000107c615e8(uStack_38);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_1103c50f0;
  return;
}



/* Entry: 1009d1a38; end: 1009d1a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d1a38(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  ulong uStack_70;
  long lStack_68;
  
  FUN_100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = lStack_68;
  lVar9 = *(long *)(lStack_68 + _DAT_113091b88);
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar4 = lVar9;
  func_0x000107c6148c(lVar9,puVar3);
  if (lVar4 == 0) {
    func_0x0001048d9980(0xd00000000000004c,0x800000010ef845d0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d1c38);
    (*pcVar2)();
  }
  func_0x000107c61174(lVar9);
  lVar4 = lVar9;
  func_0x0001000ad7c4();
  lVar5 = lVar4;
  func_0x0001000ad7c4();
  FUN_100083b20(&lStack_68);
  lVar6 = lStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_68);
  if (lVar6 != 0) {
    FUN_100083b20(&uStack_70);
    uVar7 = uStack_70;
    func_0x000107c4e518();
    func_0x000107c61180();
    func_0x000107c61170(uStack_70);
    puVar3 = PTR_PTR_1126a7188;
    func_0x000107c610f8();
    func_0x000107c61174(lVar9);
    func_0x000107c46bc4();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar9);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8();
    FUN_10008602c();
    if ((uVar7 & 1) == 0) {
      puVar8 = PTR_PTR_1126a7190;
      func_0x000107c610f8(PTR_PTR_1126a7190);
      func_0x000107c48d1c();
      func_0x000107c4fbbc(puVar3);
      func_0x000107c61170(puVar8);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar9);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d1c3c);
  (*pcVar2)();
}



/* Entry: 1009d1a48; end: 1009d1c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d1a48(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uStack_70;
  long lStack_68;
  
  FUN_100083b20(&lStack_68);
  lVar1 = lStack_68;
  lVar9 = *(long *)(lStack_68 + _DAT_113091b88);
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar4 = lVar9;
  func_0x000107c6148c(lVar9,puVar3);
  if (lVar4 == 0) {
    func_0x0001048d9980(0xd00000000000004c,0x800000010ef845d0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d1c38);
    (*pcVar2)();
  }
  func_0x000107c61174(lVar9);
  lVar4 = lVar9;
  func_0x0001000ad7c4();
  lVar5 = lVar4;
  func_0x0001000ad7c4();
  FUN_100083b20(&lStack_68);
  lVar6 = lStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_68);
  if (lVar6 != 0) {
    FUN_100083b20(&uStack_70);
    uVar7 = uStack_70;
    func_0x000107c4e518();
    func_0x000107c61180();
    func_0x000107c61170(uStack_70);
    puVar3 = PTR_PTR_1126a7188;
    func_0x000107c610f8();
    func_0x000107c61174(lVar9);
    func_0x000107c46bc4();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar9);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8();
    FUN_10008602c();
    if ((uVar7 & 1) == 0) {
      puVar8 = PTR_PTR_1126a7190;
      func_0x000107c610f8(PTR_PTR_1126a7190);
      func_0x000107c48d1c();
      func_0x000107c4fbbc(puVar3);
      func_0x000107c61170(puVar8);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar9);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d1c3c);
  (*pcVar2)();
}



/* Entry: 1009d1c3c; end: 1009d1e0f; -[SCBackgroundTaskRegistration initWithGrapheneRegistry:grapheneFlusher:prefetchHandler:circumstanceEngine:perfLogger:backgroundTaskRegistrationSetting:backgroundTaskRegistrationQosSetting:] */

undefined1 *
FUN_1009d1c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_68 = PTR_PTR_1126f6280;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c4a82c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar5);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0xf;
    func_0x000107c61174(param_6);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_7);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    func_0x000107c61170(uVar5);
    func_0x000107c57c50(PTR_PTR_1126b6ad0);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009d1e10; end: 1009d1e1f; +[SCBackgroundTaskStartupRegistration setRegistrationInstance:] */

void FUN_1009d1e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(0x1136c7d38,param_3);
  return;
}



/* Entry: 1009d1e20; end: 1009d1e63;  */

void FUN_1009d1e20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d1e64; end: 1009d1e6f;  */

undefined ** FUN_1009d1e64(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d1e70; end: 1009d1efb;  */

void FUN_1009d1e70(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d1efc,param_1);
  return;
}


