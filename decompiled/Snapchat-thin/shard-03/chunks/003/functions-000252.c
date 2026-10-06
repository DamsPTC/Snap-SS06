/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027db114; end: 1027db197;  */

void FUN_1027db114(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1027db268,param_2,FUN_1027db26c,param_2,FUN_1027db294,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027db198; end: 1027db1e7;  */

undefined8 FUN_1027db198(void)

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



/* Entry: 1027db1e8; end: 1027db217;  */

void FUN_1027db1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11054f5b0;
  return;
}



/* Entry: 1027db218; end: 1027db237;  */

void FUN_1027db218(void)

{
  func_0x000107c61168(&PTR_PTR_112ec0e20);
  return;
}



/* Entry: 1027db238; end: 1027db26b;  */

undefined1  [16] FUN_1027db238(void)

{
  return ZEXT816(0x11054f5f0);
}



/* Entry: 1027db26c; end: 1027db293;  */

void FUN_1027db26c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027db294; end: 1027db29b;  */

undefined8 FUN_1027db294(void)

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



/* Entry: 1027db29c; end: 1027db32f;  */

void FUN_1027db29c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1027db740();
  func_0x000107c613fc();
  FUN_1027db384(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1027db330; end: 1027db383;  */

undefined8 FUN_1027db330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1027db384(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1027db384; end: 1027db5a3;  */

void FUN_1027db384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112ec0ed0,&UNK_10dadeda0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  uVar2 = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ab050;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x706f635374616863;
  func_0x000107c5fadc(0x706f635374616863,0xe900000000000065);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar4);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0bf7a0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0bf7c0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar4;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1027db5a4; end: 1027db5df;  */

void FUN_1027db5a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027db5e0; end: 1027db633;  */

void FUN_1027db5e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027db634; end: 1027db63b;  */

undefined8 FUN_1027db634(void)

{
  return 0x1b;
}



/* Entry: 1027db63c; end: 1027db6bf;  */

void FUN_1027db63c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1027db790,param_2,FUN_1027db794,param_2,FUN_1027db7bc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027db6c0; end: 1027db70f;  */

undefined8 FUN_1027db6c0(void)

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



/* Entry: 1027db710; end: 1027db73f;  */

undefined ** FUN_1027db710(void)

{
  return &PTR_DAT_1130668e0;
}



/* Entry: 1027db740; end: 1027db75f;  */

void FUN_1027db740(void)

{
  func_0x000107c61168(&PTR_PTR_112ec0f40);
  return;
}



/* Entry: 1027db760; end: 1027db793;  */

undefined1  [16] FUN_1027db760(void)

{
  return ZEXT816(0x11054f690);
}



/* Entry: 1027db794; end: 1027db7bb;  */

void FUN_1027db794(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027db7bc; end: 1027db7c3;  */

undefined8 FUN_1027db7bc(void)

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



/* Entry: 1027db7c4; end: 1027dbc5b;  */

void FUN_1027db7c4(long *param_1,long param_2)

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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_1027dbd94();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  FUN_102822d28();
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = uVar9;
  func_0x0001028229bc();
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  func_0x000107c6157c();
  func_0x000102822a84();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uVar10);
  *param_1 = param_2;
  return;
}



/* Entry: 1027dbc5c; end: 1027dbcd7;  */

void FUN_1027dbc5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1027dbcd8; end: 1027dbcdf;  */

undefined8 FUN_1027dbcd8(void)

{
  return 0x1b;
}



/* Entry: 1027dbce0; end: 1027dbd63;  */

void FUN_1027dbce0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1027dbdd4,param_2,FUN_1027dbdd8,param_2,0x1027dbe00,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027dbd64; end: 1027dbd93;  */

undefined ** FUN_1027dbd64(void)

{
  return &PTR_DAT_1130668e0;
}



/* Entry: 1027dbd94; end: 1027dbdb3;  */

void FUN_1027dbd94(void)

{
  func_0x000107c61168(&PTR_PTR_112ec1020);
  return;
}



/* Entry: 1027dbdb4; end: 1027dbdd7;  */

undefined1  [16] FUN_1027dbdb4(void)

{
  return ZEXT816(0x11054f730);
}



/* Entry: 1027dbdd8; end: 1027dbe2b;  */

void FUN_1027dbdd8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027dbe2c; end: 1027dc2af;  */

void FUN_1027dbe2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d140;
  ppuVar4 = &PTR_DAT_1130668e0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112ec10c0;
  func_0x0001000285a8(0x112ec10c0,&UNK_10dadf098);
  func_0x0001000a6ee8(&UNK_11054f310,
                      "AddToGroupCardServiceProviderWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_1027dc2b0,param_2,uVar2,&UNK_11054f310,&PTR_DAT_112ec0458);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_11054f780;
  func_0x000107c613fc(&UNK_11054f780,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105502a8,"ChatScopeGraphBridgeScopeInitializationPluginKey",0x30,2,
                      FUN_1027dc2dc,puVar3,uVar2,&UNK_1105502a8,&PTR_DAT_112ec1a68);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_11054f3b0,
                      "ConvoLiveActivityServiceProviderWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_1027dc31c,param_5,uVar2,&UNK_11054f3b0,&PTR_DAT_112ec0558);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_11054f430,"SCChatScopeEntryPointWrapperScopeInitializationPluginKey",0x38
                      ,2,0x1027dc348,param_6,uVar2,&UNK_11054f430,&PTR_DAT_112ec06e0);
  func_0x000107c61574(param_6);
  puVar3 = &UNK_11054f7a8;
  func_0x000107c613fc(&UNK_11054f7a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_7;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_11054efa8,"SCChatScopedServicesScopeInitializationPluginKey",0x30,2,
                      FUN_1027dc41c,puVar3,uVar2,&UNK_11054efa8,&PTR_DAT_112ec0360);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_11054f4d0,
                      "SCGroupChatNonFriendWarningServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x4d,2,FUN_1027dc424,param_8,uVar2,&UNK_11054f4d0,&PTR_DAT_112ec0bc0);
  func_0x000107c61574(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_11054f570,
                      "SCMessageAccessoryPluginEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,0x1027dc450,param_9,uVar2,&UNK_11054f570,&PTR_DAT_112ec0cc0);
  func_0x000107c61574(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_11054f610,
                      "SCMessageRenderingPluginEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,0x1027dc47c,param_10,uVar2,&UNK_11054f610,&PTR_DAT_112ec0db8);
  func_0x000107c61574(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000a6ee8(&UNK_11054f6b0,
                      "SCRepostOperaPluginServiceProviderWrapperScopeInitializationPluginKey",0x45,2
                      ,0x1027dc4a8,param_11,uVar2,&UNK_11054f6b0,&PTR_DAT_112ec0ed8);
  func_0x000107c61574(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000a6ee8(&UNK_11054f730,
                      "StickerFavoritePromptEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_1027dc558,param_12,uVar2,&UNK_11054f730,&PTR_DAT_112ec0fb8);
  func_0x000107c61574(param_12);
  uVar2 = 0x112ec10c8;
  func_0x0001000285a8(0x112ec10c8,&UNK_10dadf0a0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCChatScopeInitializationPluginRegistryServiceProvider",0x36,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1027dc2b0; end: 1027dc2db;  */

void FUN_1027dc2b0(void)

{
  FUN_1027dc4d4();
  return;
}



/* Entry: 1027dc2dc; end: 1027dc31b;  */

void FUN_1027dc2dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1027e348c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ChatScopeGraphBridgeScopeInitializationPluginProvider",0x35,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027dc31c; end: 1027dc373;  */

void FUN_1027dc31c(void)

{
  FUN_1027dc4d4();
  return;
}



/* Entry: 1027dc374; end: 1027dc41b;  */

void FUN_1027dc374(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11054f7d0;
  func_0x000107c613fc(&UNK_11054f7d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1027dc5d8;
  func_0x0001000823a8(FUN_1027dc5d8,puVar1);
  func_0x000100082720("SCChatScopedServicesScopeInitializationPluginProvider",0x35,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1027dc41c; end: 1027dc423;  */

void FUN_1027dc41c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11054f7d0;
  func_0x000107c613fc(&UNK_11054f7d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1027dc5d8;
  func_0x0001000823a8(FUN_1027dc5d8,puVar3);
  func_0x000100082720("SCChatScopedServicesScopeInitializationPluginProvider",0x35,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1027dc424; end: 1027dc4d3;  */

void FUN_1027dc424(void)

{
  FUN_1027dc4d4();
  return;
}



/* Entry: 1027dc4d4; end: 1027dc557;  */

void FUN_1027dc4d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1027dc558; end: 1027dc583;  */

void FUN_1027dc558(void)

{
  FUN_1027dc4d4();
  return;
}



/* Entry: 1027dc584; end: 1027dc5ab;  */

void FUN_1027dc584(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x1027dbdd4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027dc5ac; end: 1027dc5d7;  */

void FUN_1027dc5ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027dc5d8; end: 1027dc5f7;  */

void FUN_1027dc5d8(undefined8 *param_1)

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
  puVar1 = &UNK_11054f030;
  func_0x000107c613fc(&UNK_11054f030,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027c9148;
  func_0x00010058fa64(FUN_1027c9148,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027dc5f8; end: 1027dce5b;  */

/* WARNING: Possible PIC construction at 0x0001027dc8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc8dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc8fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc90c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc95c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc96c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc97c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc99c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc9cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dc9fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dca0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dca1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dca2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dca3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dca4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dca5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027dca50) */
/* WARNING: Removing unreachable block (ram,0x0001027dca40) */
/* WARNING: Removing unreachable block (ram,0x0001027dca30) */
/* WARNING: Removing unreachable block (ram,0x0001027dca20) */
/* WARNING: Removing unreachable block (ram,0x0001027dca10) */
/* WARNING: Removing unreachable block (ram,0x0001027dca00) */
/* WARNING: Removing unreachable block (ram,0x0001027dc9f0) */
/* WARNING: Removing unreachable block (ram,0x0001027dc9e0) */
/* WARNING: Removing unreachable block (ram,0x0001027dc9d0) */
/* WARNING: Removing unreachable block (ram,0x0001027dc9c0) */
/* WARNING: Removing unreachable block (ram,0x0001027dc9b0) */
/* WARNING: Removing unreachable block (ram,0x0001027dc9a0) */
/* WARNING: Removing unreachable block (ram,0x0001027dc990) */
/* WARNING: Removing unreachable block (ram,0x0001027dc980) */
/* WARNING: Removing unreachable block (ram,0x0001027dc970) */
/* WARNING: Removing unreachable block (ram,0x0001027dc960) */
/* WARNING: Removing unreachable block (ram,0x0001027dc950) */
/* WARNING: Removing unreachable block (ram,0x0001027dc940) */
/* WARNING: Removing unreachable block (ram,0x0001027dc930) */
/* WARNING: Removing unreachable block (ram,0x0001027dc920) */
/* WARNING: Removing unreachable block (ram,0x0001027dc910) */
/* WARNING: Removing unreachable block (ram,0x0001027dc900) */
/* WARNING: Removing unreachable block (ram,0x0001027dc8f0) */
/* WARNING: Removing unreachable block (ram,0x0001027dc8e0) */
/* WARNING: Removing unreachable block (ram,0x0001027dc8d0) */
/* WARNING: Removing unreachable block (ram,0x0001027dc8c0) */
/* WARNING: Removing unreachable block (ram,0x0001027dc8b0) */
/* WARNING: Removing unreachable block (ram,0x0001027dca60) */

void FUN_1027dc5f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11054f7f8;
  func_0x000107c613fc(&UNK_11054f7f8,0x1d8,7);
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
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  uVar2 = 0x112ec10d0;
  func_0x0001000285a8(0x112ec10d0,&UNK_10dadf0b8);
  func_0x000107c613fc();
  pcVar3 = FUN_1027dce5c;
  func_0x0001000841fc(FUN_1027dce5c,puVar1,uVar2);
  func_0x000100084214("SCMessageAccessoryPluginRegistryServiceProvider",0x2f,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1027dce5c; end: 1027dcf57;  */

void FUN_1027dce5c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001027dca8c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                      *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                      *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                      *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                      *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                      *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                      *(undefined8 *)(unaff_x20 + 0x1d0));
  return;
}



/* Entry: 1027dcf58; end: 1027df90b;  */

/* WARNING: Possible PIC construction at 0x0001027ddb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddbb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddbc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddbe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddc00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddcb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddcc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddcf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddd00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddd10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddd20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddd40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddd80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddd90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dddb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dddc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dddd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dddf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dde00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dde10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dde20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dde30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dde40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dde50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dde60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dde70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dde80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dde90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddeb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027dded0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddf00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddf20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddf30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddf40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddf60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddf70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddf80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddf90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddfa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddfb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddfc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddfd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddfe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ddff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de1a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027de1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027de1c4) */
/* WARNING: Removing unreachable block (ram,0x0001027de1b4) */
/* WARNING: Removing unreachable block (ram,0x0001027de1a4) */
/* WARNING: Removing unreachable block (ram,0x0001027de194) */
/* WARNING: Removing unreachable block (ram,0x0001027de184) */
/* WARNING: Removing unreachable block (ram,0x0001027de174) */
/* WARNING: Removing unreachable block (ram,0x0001027de164) */
/* WARNING: Removing unreachable block (ram,0x0001027de154) */
/* WARNING: Removing unreachable block (ram,0x0001027de144) */
/* WARNING: Removing unreachable block (ram,0x0001027de134) */
/* WARNING: Removing unreachable block (ram,0x0001027de124) */
/* WARNING: Removing unreachable block (ram,0x0001027de114) */
/* WARNING: Removing unreachable block (ram,0x0001027de104) */
/* WARNING: Removing unreachable block (ram,0x0001027de0f4) */
/* WARNING: Removing unreachable block (ram,0x0001027de0e4) */
/* WARNING: Removing unreachable block (ram,0x0001027de0d4) */
/* WARNING: Removing unreachable block (ram,0x0001027de0c4) */
/* WARNING: Removing unreachable block (ram,0x0001027de0b4) */
/* WARNING: Removing unreachable block (ram,0x0001027de0a4) */
/* WARNING: Removing unreachable block (ram,0x0001027de094) */
/* WARNING: Removing unreachable block (ram,0x0001027de084) */
/* WARNING: Removing unreachable block (ram,0x0001027de074) */
/* WARNING: Removing unreachable block (ram,0x0001027de064) */
/* WARNING: Removing unreachable block (ram,0x0001027de054) */
/* WARNING: Removing unreachable block (ram,0x0001027de044) */
/* WARNING: Removing unreachable block (ram,0x0001027de034) */
/* WARNING: Removing unreachable block (ram,0x0001027de024) */
/* WARNING: Removing unreachable block (ram,0x0001027de014) */
/* WARNING: Removing unreachable block (ram,0x0001027de004) */
/* WARNING: Removing unreachable block (ram,0x0001027ddff4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddfe4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddfd4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddfc4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddfb4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddfa4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddf94) */
/* WARNING: Removing unreachable block (ram,0x0001027ddf84) */
/* WARNING: Removing unreachable block (ram,0x0001027ddf74) */
/* WARNING: Removing unreachable block (ram,0x0001027ddf64) */
/* WARNING: Removing unreachable block (ram,0x0001027ddf54) */
/* WARNING: Removing unreachable block (ram,0x0001027ddf44) */
/* WARNING: Removing unreachable block (ram,0x0001027ddf34) */
/* WARNING: Removing unreachable block (ram,0x0001027ddf24) */
/* WARNING: Removing unreachable block (ram,0x0001027ddf14) */
/* WARNING: Removing unreachable block (ram,0x0001027ddf04) */
/* WARNING: Removing unreachable block (ram,0x0001027ddef4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddee4) */
/* WARNING: Removing unreachable block (ram,0x0001027dded4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddec4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddeb4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddea4) */
/* WARNING: Removing unreachable block (ram,0x0001027dde94) */
/* WARNING: Removing unreachable block (ram,0x0001027dde84) */
/* WARNING: Removing unreachable block (ram,0x0001027dde74) */
/* WARNING: Removing unreachable block (ram,0x0001027dde64) */
/* WARNING: Removing unreachable block (ram,0x0001027dde54) */
/* WARNING: Removing unreachable block (ram,0x0001027dde44) */
/* WARNING: Removing unreachable block (ram,0x0001027dde34) */
/* WARNING: Removing unreachable block (ram,0x0001027dde24) */
/* WARNING: Removing unreachable block (ram,0x0001027dde14) */
/* WARNING: Removing unreachable block (ram,0x0001027dde04) */
/* WARNING: Removing unreachable block (ram,0x0001027dddf4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddde4) */
/* WARNING: Removing unreachable block (ram,0x0001027dddd4) */
/* WARNING: Removing unreachable block (ram,0x0001027dddc4) */
/* WARNING: Removing unreachable block (ram,0x0001027dddb4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddda4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddd94) */
/* WARNING: Removing unreachable block (ram,0x0001027ddd84) */
/* WARNING: Removing unreachable block (ram,0x0001027ddd74) */
/* WARNING: Removing unreachable block (ram,0x0001027ddd64) */
/* WARNING: Removing unreachable block (ram,0x0001027ddd54) */
/* WARNING: Removing unreachable block (ram,0x0001027ddd44) */
/* WARNING: Removing unreachable block (ram,0x0001027ddd34) */
/* WARNING: Removing unreachable block (ram,0x0001027ddd24) */
/* WARNING: Removing unreachable block (ram,0x0001027ddd14) */
/* WARNING: Removing unreachable block (ram,0x0001027ddd04) */
/* WARNING: Removing unreachable block (ram,0x0001027ddcf4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddce4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddcd4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddcc4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddcb4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddca4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddc94) */
/* WARNING: Removing unreachable block (ram,0x0001027ddc84) */
/* WARNING: Removing unreachable block (ram,0x0001027ddc74) */
/* WARNING: Removing unreachable block (ram,0x0001027ddc64) */
/* WARNING: Removing unreachable block (ram,0x0001027ddc54) */
/* WARNING: Removing unreachable block (ram,0x0001027ddc44) */
/* WARNING: Removing unreachable block (ram,0x0001027ddc34) */
/* WARNING: Removing unreachable block (ram,0x0001027ddc24) */
/* WARNING: Removing unreachable block (ram,0x0001027ddc14) */
/* WARNING: Removing unreachable block (ram,0x0001027ddc04) */
/* WARNING: Removing unreachable block (ram,0x0001027ddbf4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddbe4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddbd4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddbc4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddbb4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddba4) */
/* WARNING: Removing unreachable block (ram,0x0001027ddb94) */
/* WARNING: Removing unreachable block (ram,0x0001027ddb84) */
/* WARNING: Removing unreachable block (ram,0x0001027ddb74) */
/* WARNING: Removing unreachable block (ram,0x0001027ddb64) */
/* WARNING: Removing unreachable block (ram,0x0001027de1d4) */

void FUN_1027dcf58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00000600;
  undefined8 in_stack_00000608;
  undefined8 in_stack_00000610;
  undefined8 in_stack_00000618;
  undefined8 in_stack_00000620;
  undefined8 in_stack_00000628;
  undefined8 in_stack_00000630;
  undefined8 in_stack_00000638;
  undefined8 in_stack_00000640;
  
  puVar1 = &UNK_11054f820;
  func_0x000107c613fc(&UNK_11054f820,0x698,7);
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
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_000003f8;
  *(undefined8 *)(puVar1 + 0x450) = in_stack_00000400;
  *(undefined8 *)(puVar1 + 0x458) = in_stack_00000408;
  *(undefined8 *)(puVar1 + 0x460) = in_stack_00000410;
  *(undefined8 *)(puVar1 + 0x468) = in_stack_00000418;
  *(undefined8 *)(puVar1 + 0x470) = in_stack_00000420;
  *(undefined8 *)(puVar1 + 0x478) = in_stack_00000428;
  *(undefined8 *)(puVar1 + 0x480) = in_stack_00000430;
  *(undefined8 *)(puVar1 + 0x488) = in_stack_00000438;
  *(undefined8 *)(puVar1 + 0x490) = in_stack_00000440;
  *(undefined8 *)(puVar1 + 0x498) = in_stack_00000448;
  *(undefined8 *)(puVar1 + 0x4a0) = in_stack_00000450;
  *(undefined8 *)(puVar1 + 0x4a8) = in_stack_00000458;
  *(undefined8 *)(puVar1 + 0x4b0) = in_stack_00000460;
  *(undefined8 *)(puVar1 + 0x4b8) = in_stack_00000468;
  *(undefined8 *)(puVar1 + 0x4c0) = in_stack_00000470;
  *(undefined8 *)(puVar1 + 0x4c8) = in_stack_00000478;
  *(undefined8 *)(puVar1 + 0x4d0) = in_stack_00000480;
  *(undefined8 *)(puVar1 + 0x4d8) = in_stack_00000488;
  *(undefined8 *)(puVar1 + 0x4e0) = in_stack_00000490;
  *(undefined8 *)(puVar1 + 0x4e8) = in_stack_00000498;
  *(undefined8 *)(puVar1 + 0x4f0) = in_stack_000004a0;
  *(undefined8 *)(puVar1 + 0x4f8) = in_stack_000004a8;
  *(undefined8 *)(puVar1 + 0x500) = in_stack_000004b0;
  *(undefined8 *)(puVar1 + 0x508) = in_stack_000004b8;
  *(undefined8 *)(puVar1 + 0x510) = in_stack_000004c0;
  *(undefined8 *)(puVar1 + 0x518) = in_stack_000004c8;
  *(undefined8 *)(puVar1 + 0x520) = in_stack_000004d0;
  *(undefined8 *)(puVar1 + 0x528) = in_stack_000004d8;
  *(undefined8 *)(puVar1 + 0x530) = in_stack_000004e0;
  *(undefined8 *)(puVar1 + 0x538) = in_stack_000004e8;
  *(undefined8 *)(puVar1 + 0x540) = in_stack_000004f0;
  *(undefined8 *)(puVar1 + 0x548) = in_stack_000004f8;
  *(undefined8 *)(puVar1 + 0x550) = in_stack_00000500;
  *(undefined8 *)(puVar1 + 0x558) = in_stack_00000508;
  *(undefined8 *)(puVar1 + 0x560) = in_stack_00000510;
  *(undefined8 *)(puVar1 + 0x568) = in_stack_00000518;
  *(undefined8 *)(puVar1 + 0x570) = in_stack_00000520;
  *(undefined8 *)(puVar1 + 0x578) = in_stack_00000528;
  *(undefined8 *)(puVar1 + 0x580) = in_stack_00000530;
  *(undefined8 *)(puVar1 + 0x588) = in_stack_00000538;
  *(undefined8 *)(puVar1 + 0x590) = in_stack_00000540;
  *(undefined8 *)(puVar1 + 0x598) = in_stack_00000548;
  *(undefined8 *)(puVar1 + 0x5a0) = in_stack_00000550;
  *(undefined8 *)(puVar1 + 0x5a8) = in_stack_00000558;
  *(undefined8 *)(puVar1 + 0x5b0) = in_stack_00000560;
  *(undefined8 *)(puVar1 + 0x5b8) = in_stack_00000568;
  *(undefined8 *)(puVar1 + 0x5c0) = in_stack_00000570;
  *(undefined8 *)(puVar1 + 0x5c8) = in_stack_00000578;
  *(undefined8 *)(puVar1 + 0x5d0) = in_stack_00000580;
  *(undefined8 *)(puVar1 + 0x5d8) = in_stack_00000588;
  *(undefined8 *)(puVar1 + 0x5e0) = in_stack_00000590;
  *(undefined8 *)(puVar1 + 0x5e8) = in_stack_00000598;
  *(undefined8 *)(puVar1 + 0x5f0) = in_stack_000005a0;
  *(undefined8 *)(puVar1 + 0x5f8) = in_stack_000005a8;
  *(undefined8 *)(puVar1 + 0x600) = in_stack_000005b0;
  *(undefined8 *)(puVar1 + 0x608) = in_stack_000005b8;
  *(undefined8 *)(puVar1 + 0x610) = in_stack_000005c0;
  *(undefined8 *)(puVar1 + 0x618) = in_stack_000005c8;
  *(undefined8 *)(puVar1 + 0x620) = in_stack_000005d0;
  *(undefined8 *)(puVar1 + 0x628) = in_stack_000005d8;
  *(undefined8 *)(puVar1 + 0x630) = in_stack_000005e0;
  *(undefined8 *)(puVar1 + 0x638) = in_stack_000005e8;
  *(undefined8 *)(puVar1 + 0x640) = in_stack_000005f0;
  *(undefined8 *)(puVar1 + 0x648) = in_stack_000005f8;
  *(undefined8 *)(puVar1 + 0x650) = in_stack_00000600;
  *(undefined8 *)(puVar1 + 0x658) = in_stack_00000608;
  *(undefined8 *)(puVar1 + 0x660) = in_stack_00000610;
  *(undefined8 *)(puVar1 + 0x668) = in_stack_00000618;
  *(undefined8 *)(puVar1 + 0x670) = in_stack_00000620;
  *(undefined8 *)(puVar1 + 0x678) = in_stack_00000628;
  *(undefined8 *)(puVar1 + 0x680) = in_stack_00000630;
  *(undefined8 *)(puVar1 + 0x688) = in_stack_00000638;
  *(undefined8 *)(puVar1 + 0x690) = in_stack_00000640;
  uVar2 = 0x112ec10d8;
  func_0x0001000285a8(0x112ec10d8,&UNK_10dadf150);
  func_0x000107c613fc();
  pcVar3 = FUN_1027df90c;
  func_0x0001000841fc(FUN_1027df90c,puVar1,uVar2);
  func_0x000100084214("SCMessageTypeRenderingPluginRegistryServiceProvider",0x33,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1027df90c; end: 1027e0127;  */

void FUN_1027df90c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001027de200(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 1027e0128; end: 1027e098f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1027e0128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1027e1ac4();
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_2;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_3;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_4;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_5;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_6;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_7;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_8;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_9;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_10;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_11;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_12;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_13;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_14;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_15;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_16;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_17;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_18;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_19;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_20;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_21;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_22;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_23;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_24;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_25;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_26;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_27;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_28;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_29;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_30;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uStack_78 = param_31;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112ec10e0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ec10e8) = param_32;
    puVar4 = auStack_88;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_25);
    func_0x000107c61170(param_26);
    func_0x000107c61170(param_27);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_29);
    func_0x000107c61170(param_30);
    func_0x000107c61170(param_31);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027e0990);
  (*pcVar2)();
}



/* Entry: 1027e0990; end: 1027e09ef; -[_TtC20ChatScopeGraphBridge35ChatScopeGraphBridgeSaberEntryPoint init] */

void FUN_1027e0990(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatScopeGraphBridge.ChatScopeGraphBridgeSaberEntryPoint",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027e09bc);
  (*pcVar1)();
}



/* Entry: 1027e09f0; end: 1027e0a27; -[_TtC20ChatScopeGraphBridge35ChatScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027e0a0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027e0a10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e09f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec10e0));
  return;
}



/* Entry: 1027e0a28; end: 1027e0a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e0a28(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ec10e8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ec10e0));
  return;
}



/* Entry: 1027e0a50; end: 1027e0a6f;  */

void FUN_1027e0a50(void)

{
  func_0x000107c61168(&PTR_PTR_112863598);
  return;
}



/* Entry: 1027e0a70; end: 1027e0b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027e0a70(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ec1a00);
  *(undefined8 *)(unaff_x20 + _DAT_112ec1118) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1120) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1027e0b0c; end: 1027e0b6b; -[_TtC20ChatScopeGraphBridge41SCMessageAccessoryServicesSaberEntryPoint init] */

void FUN_1027e0b0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatScopeGraphBridge.SCMessageAccessoryServicesSaberEntryPoint",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027e0b38);
  (*pcVar1)();
}



/* Entry: 1027e0b6c; end: 1027e0bff; -[_TtC20ChatScopeGraphBridge41SCMessageAccessoryServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e0b6c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec1118));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec1120));
  return;
}



/* Entry: 1027e0c00; end: 1027e0c07;  */

undefined8 FUN_1027e0c00(void)

{
  return 0;
}



/* Entry: 1027e0c08; end: 1027e0c27;  */

void FUN_1027e0c08(void)

{
  func_0x000107c61168(&PTR_PTR_112863660);
  return;
}



/* Entry: 1027e0c28; end: 1027e0cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027e0c28(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ec1a08);
  *(undefined8 *)(unaff_x20 + _DAT_112ec1150) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1158) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1027e0cc4; end: 1027e0d23; -[_TtC20ChatScopeGraphBridge47SCMessageRenderingPluginServicesSaberEntryPoint init] */

void FUN_1027e0cc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatScopeGraphBridge.SCMessageRenderingPluginServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027e0cf0);
  (*pcVar1)();
}



/* Entry: 1027e0d24; end: 1027e0db7; -[_TtC20ChatScopeGraphBridge47SCMessageRenderingPluginServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e0d24(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec1150));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec1158));
  return;
}



/* Entry: 1027e0db8; end: 1027e0dbf;  */

undefined8 FUN_1027e0db8(void)

{
  return 0;
}



/* Entry: 1027e0dc0; end: 1027e0ddf;  */

void FUN_1027e0dc0(void)

{
  func_0x000107c61168(&PTR_PTR_112863728);
  return;
}



/* Entry: 1027e0de0; end: 1027e0e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027e0de0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ec1928);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027e0e44; end: 1027e0e4b;  */

void FUN_1027e0e44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027e0e4c; end: 1027e0eeb;  */

void FUN_1027e0e4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027e0eec; end: 1027e0f0b;  */

void FUN_1027e0eec(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027e0f0c; end: 1027e0f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027e0f0c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ec1938);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027e0f70; end: 1027e0f77;  */

void FUN_1027e0f70(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027e0f78; end: 1027e1017;  */

void FUN_1027e0f78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027e1018; end: 1027e1037;  */

void FUN_1027e1018(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027e1038; end: 1027e109b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027e1038(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ec1948);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027e109c; end: 1027e10a3;  */

void FUN_1027e109c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027e10a4; end: 1027e1143;  */

void FUN_1027e10a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027e1144; end: 1027e1163;  */

void FUN_1027e1144(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027e1164; end: 1027e11c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027e1164(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ec1958);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027e11c8; end: 1027e11cf;  */

void FUN_1027e11c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027e11d0; end: 1027e126f;  */

void FUN_1027e11d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027e1270; end: 1027e128f;  */

void FUN_1027e1270(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027e1290; end: 1027e12f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027e1290(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ec1990);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027e12f4; end: 1027e12fb;  */

void FUN_1027e12f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027e12fc; end: 1027e139b;  */

void FUN_1027e12fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027e139c; end: 1027e13bb;  */

void FUN_1027e139c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027e13bc; end: 1027e141f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027e13bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ec19c8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027e1420; end: 1027e1427;  */

void FUN_1027e1420(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027e1428; end: 1027e14c7;  */

void FUN_1027e1428(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027e14c8; end: 1027e14e7;  */

void FUN_1027e14c8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027e14e8; end: 1027e154b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027e14e8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ec19e0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027e154c; end: 1027e1553;  */

void FUN_1027e154c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027e1554; end: 1027e15f3;  */

void FUN_1027e1554(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027e15f4; end: 1027e1613;  */

void FUN_1027e15f4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027e1614; end: 1027e1677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027e1614(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ec1a40);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027e1678; end: 1027e167f;  */

void FUN_1027e1678(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027e1680; end: 1027e171f;  */

void FUN_1027e1680(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027e1720; end: 1027e173f;  */

void FUN_1027e1720(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027e1740; end: 1027e17a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027e1740(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ec1a58);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027e17a4; end: 1027e17ab;  */

void FUN_1027e17a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027e17ac; end: 1027e184b;  */

void FUN_1027e17ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027e184c; end: 1027e186b;  */

void FUN_1027e184c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027e186c; end: 1027e18f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027e186c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec18d8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ec18e0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027e18f4);
  (*pcVar2)();
}



/* Entry: 1027e18f4; end: 1027e19db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027e18f4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec18d8);
  *(undefined **)(unaff_x20 + _DAT_112ec18d8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec18e0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec18e0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11054fa60;
  func_0x000107c613fc(&UNK_11054fa60,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1027e19e0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1027e19dc; end: 1027e19e7;  */

void FUN_1027e19dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027e19e8; end: 1027e1a47; -[_TtC20ChatScopeGraphBridge35SCChatScopedServicesSaberEntryPoint init] */

void FUN_1027e19e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatScopeGraphBridge.SCChatScopedServicesSaberEntryPoint",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027e1a14);
  (*pcVar1)();
}



/* Entry: 1027e1a48; end: 1027e1a7f; -[_TtC20ChatScopeGraphBridge35SCChatScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e1a48(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec18e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec18d8));
  return;
}


