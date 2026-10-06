/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10095b2dc; end: 10095b2ff;  */

void FUN_10095b2dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10095b300; end: 10095b47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095b300(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_1002d246c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fdaff8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fdb000) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fdb008) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fdb010) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fdb018) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fdb020) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fdb028) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fdb030) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112fdb038) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112fdb040) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112fdb048) = param_12;
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
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 10095b47c; end: 10095b557;  */

void FUN_10095b47c(void)

{
  long unaff_x20;
  
  FUN_10095b300(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10095b558; end: 10095b57f;  */

undefined ** FUN_10095b558(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10095b580; end: 10095b5bf;  */

void FUN_10095b580(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010095b564();
  FUN_100082720("MusicContentRestrictionImplServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x52,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10095b5c0; end: 10095b5c7;  */

void FUN_10095b5c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e23c64);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095b5c8; end: 10095b64b;  */

void FUN_10095b5c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e23c64,param_2,&UNK_101e23c68,param_2,&UNK_101e23c90,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095b64c; end: 10095b673;  */

undefined ** FUN_10095b64c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10095b674; end: 10095b6b3;  */

void FUN_10095b674(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010095b658();
  FUN_100082720("MusicSyncServiceProviderWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10095b6b4; end: 10095b6bb;  */

void FUN_10095b6b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e23ff8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095b6bc; end: 10095b73f;  */

void FUN_10095b6bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e23ff8,param_2,&UNK_101e23ffc,param_2,&UNK_101e24024,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095b740; end: 10095b767;  */

undefined ** FUN_10095b740(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10095b768; end: 10095b7a7;  */

void FUN_10095b768(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010095b74c();
  FUN_100082720("MusicUserDataServicesServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10095b7a8; end: 10095b7af;  */

void FUN_10095b7a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e2417c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095b7b0; end: 10095b833;  */

void FUN_10095b7b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e2417c,param_2,&UNK_101e24180,param_2,&UNK_101e241a8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095b834; end: 10095b85b;  */

undefined ** FUN_10095b834(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10095b85c; end: 10095b89b;  */

void FUN_10095b85c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010095b840();
  FUN_100082720("MutualFriendsDataServiceProviderWrapperScopeInitializationPluginProvider",0x48,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10095b89c; end: 10095b8a3;  */

void FUN_10095b89c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdde34);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095b8a4; end: 10095b927;  */

void FUN_10095b8a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdde34,param_2,&UNK_101cdde38,param_2,&UNK_101cdde60,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095b928; end: 10095b94f;  */

undefined ** FUN_10095b928(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10095b950; end: 10095b98f;  */

void FUN_10095b950(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010095b934();
  FUN_100082720("NativeNotificationHandlingServicesImplEntryPointWrapperScopeInitializationPluginProvider"
                ,0x58,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10095b990; end: 10095b997;  */

void FUN_10095b990(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101eb43d4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095b998; end: 10095ba1b;  */

void FUN_10095b998(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101eb43d4,param_2,FUN_10095ba1c,param_2,&UNK_101eb43d8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095ba1c; end: 10095ba43;  */

void FUN_10095ba1c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10095ba44; end: 10095ba4f;  */

undefined ** FUN_10095ba44(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10095ba50; end: 10095badb;  */

void FUN_10095ba50(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10095badc,param_1);
  return;
}



/* Entry: 10095badc; end: 10095bae3;  */

void FUN_10095badc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101eb1de0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095bae4; end: 10095bb67;  */

void FUN_10095bae4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101eb1de0,param_2,FUN_10095bb68,param_2,&UNK_101eb1de4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095bb68; end: 10095bb8f;  */

void FUN_10095bb68(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10095bb90; end: 10095bb9f;  */

void FUN_10095bb90(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002b70e8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_88;
  FUN_1000285a8(0x112e37858,&UNK_10da219b8);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c6157c(uStack_90);
  FUN_10025a71c();
  puVar7 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x18) = puVar7;
  FUN_10095bea0(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar7);
  uVar6 = uStack_68;
  FUN_10095bec0(uStack_68,uVar2,uVar3,uVar4,uVar5,puVar7);
  func_0x000107c61574(uStack_90);
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  *param_1 = lVar1;
  return;
}



/* Entry: 10095bba0; end: 10095bd43;  */

void FUN_10095bba0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002b70e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  FUN_1000285a8(0x112e37858,&UNK_10da219b8);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c6157c(uStack_90);
  FUN_10025a71c();
  puVar6 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x18) = puVar6;
  FUN_10095bea0(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar6);
  uVar5 = uStack_68;
  FUN_10095bec0(uStack_68,uVar1,uVar2,uVar3,uVar4,puVar6);
  func_0x000107c61574(uStack_90);
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  *param_1 = param_2;
  return;
}



/* Entry: 10095bd44; end: 10095bd4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095bd44(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002b17b4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e38d00) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10095bd4c; end: 10095bdb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095bd4c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002b17b4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e38d00) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10095bdb8; end: 10095bdbf;  */

/* WARNING: Possible PIC construction at 0x00010095be50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010095be54) */

void FUN_10095bdb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_11043d508;
  func_0x000107c613fc(&UNK_11043d508,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112df8810;
  FUN_1000285a8(0x112df8810,&UNK_10d9c8d48);
  func_0x000107c613fc();
  pcVar4 = FUN_10095c5c0;
  FUN_1000841f8(FUN_10095c5c0,puVar2,uVar3);
  FUN_100084214("SCNotificationCategoryPluginRegistryServiceProvider",0x33,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10095bdc0; end: 10095be67;  */

/* WARNING: Possible PIC construction at 0x00010095be50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010095be54) */

void FUN_10095bdc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11043d508;
  func_0x000107c613fc(&UNK_11043d508,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112df8810;
  FUN_1000285a8(0x112df8810,&UNK_10d9c8d48);
  func_0x000107c613fc();
  pcVar3 = FUN_10095c5c0;
  FUN_1000841f8(FUN_10095c5c0,puVar1,uVar2);
  FUN_100084214("SCNotificationCategoryPluginRegistryServiceProvider",0x33,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10095be68; end: 10095be93;  */

void FUN_10095be68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10095be94; end: 10095be9f;  */

void FUN_10095be94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10095bea0; end: 10095bebf;  */

void FUN_10095bea0(void)

{
  func_0x000107c61168(&PTR_PTR_112e38bb0);
  return;
}



/* Entry: 10095bec0; end: 10095c37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095bec0(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd00000000000002f;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010f018470;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  lVar1 = *(long *)(param_3 + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61434(uVar13);
    func_0x000107c5fadc(uVar9,uVar13);
    func_0x000107c6142c(uVar13);
    lVar2 = lVar1;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar9);
    FUN_1000285a8(0x112e38b60,&UNK_10da23390);
    func_0x000107c613fc();
    lVar3 = 0;
    FUN_10095c380();
    lVar1 = lVar3;
    FUN_10095c3c8();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_80 = (undefined **)0x100a9a020;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100a99f9c;
    puStack_88 = &UNK_110496710;
    ppuVar4 = &puStack_a0;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_78);
    puVar5 = &UNK_110496748;
    func_0x000107c613fc(&UNK_110496748,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar1;
    *(long *)(puVar5 + 0x18) = lVar3;
    ppuStack_80 = (undefined **)&UNK_100bfbd64;
    puStack_a0 = puVar7;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100ba5314;
    puStack_88 = &UNK_110496760;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_78;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c42c14(param_6);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    uVar10 = *(undefined8 *)(param_4 + _DAT_113083868);
    uVar12 = *(undefined8 *)(lVar3 + 0x10);
    uVar11 = *(undefined8 *)(param_2 + _DAT_113091b58);
    FUN_1000285a8(0x112e38b68,&UNK_10da23398);
    uVar13 = *(undefined8 *)(param_2 + _DAT_113091b80);
    func_0x000107c6157c(uVar12);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar9 = uVar13;
    func_0x0001000b637c();
    func_0x000107c61170(uVar13);
    puVar5 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
    func_0x000107c61168();
    func_0x000107c40f90();
    func_0x000107c61180();
    uVar13 = 0;
    func_0x000100960538(0,0x112da6ee0,&PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
    ppuStack_80 = &PTR_DAT_110496520;
    puVar7 = PTR_PTR_1126a97a8;
    puStack_a0 = puVar5;
    puStack_88 = (undefined *)uVar13;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar8 = 0;
    FUN_1009605ec();
    func_0x000107c613fc();
    *(long *)(lVar8 + 0x10) = lVar2;
    func_0x0001000c6560(0);
    func_0x000107c613fc();
    lVar1 = lVar2;
    func_0x000107c615f0();
    FUN_1000c6580();
    *(long *)(lVar8 + 0x18) = lVar1;
    FUN_10096060c(&puStack_a0,lVar8 + 0x20);
    *(undefined8 *)(lVar8 + 0x48) = uVar10;
    *(undefined8 *)(lVar8 + 0x50) = uVar11;
    *(undefined8 *)(lVar8 + 0x58) = uVar9;
    *(undefined **)(lVar8 + 0x60) = puVar7;
    func_0x000107c61174(uVar10);
    func_0x000107c61174(uVar11);
    func_0x000107c6157c(uVar9);
    func_0x000107c61174(puVar7);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100960650();
    *(undefined **)(lVar8 + 0x68) = puVar5;
    uVar13 = *(undefined8 *)(lVar8 + 0x10);
    puVar5 = &UNK_1104966f8;
    func_0x000107c613fc(&UNK_1104966f8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,lVar8);
    func_0x000107c615f0(uVar13);
    func_0x000107c6157c(lVar8);
    func_0x00010075a04c(uVar13,1,&UNK_100c0fa30,puVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c61574(uVar12);
    func_0x000107c615e8(uVar13);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(param_3);
    func_0x000107c61574(lVar3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61574(lVar8);
    FUN_100960808(&puStack_a0);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar8;
    func_0x000107c61574(uVar9);
  }
  return;
}



/* Entry: 10095c380; end: 10095c3c7;  */

void FUN_10095c380(long param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = 0;
  FUN_100759bc0(0,*(undefined8 *)(*unaff_x20 + 0x50));
  FUN_100759e2c(param_1,uVar1);
  unaff_x20[2] = param_1;
  return;
}



/* Entry: 10095c3c8; end: 10095c5bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10095c3c8(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 uStack_51;
  long lStack_50;
  long lStack_48;
  
  uStack_51 = uRam0000000112e38d30;
  FUN_10008a7c8(&lStack_50,&uStack_51);
  lVar2 = lStack_50;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_50 != 0) {
    FUN_100083b20(&lStack_48);
    func_0x000107c61574(lVar2);
    lVar2 = lStack_48;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_48 != 0) {
      func_0x000107c61550();
      if ((((int)puVar3 == 0) || ((long)puVar4 < 0)) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar4 >> 0x3e == 0) {
          puVar3 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar3 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar4) {
            puVar3 = puVar4;
          }
          func_0x000107c60480(puVar3);
        }
        puVar4 = (undefined *)0x0;
        FUN_10095c84c(0,puVar3 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_10095c84c(puVar3,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
    }
  }
  uStack_51 = uRam0000000112e38d31;
  FUN_10008a7c8(&lStack_50,&uStack_51);
  if (lStack_50 != 0) {
    FUN_100083b20(&lStack_48);
    func_0x000107c61574(lStack_50);
    if (lStack_48 != 0) {
      puVar4 = puVar3;
      func_0x000107c61550();
      if ((((int)puVar4 == 0) || ((long)puVar3 < 0)) ||
         (puVar4 = puVar3, ((ulong)puVar3 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar5 = puVar3;
          }
          func_0x000107c60480(puVar5);
        }
        puVar4 = (undefined *)0x0;
        FUN_10095c84c(0,puVar5 + 1,1,puVar3);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_10095c84c(puVar3,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(long *)(uVar6 + uVar1 * 8 + 0x20) = lStack_48;
    }
  }
  return puVar3;
}



/* Entry: 10095c5c0; end: 10095c5c7;  */

void FUN_10095c5c0(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  pcVar1 = *(char **)(unaff_x20 + 0x10);
  if (*param_2 == '\x01') {
    FUN_10095e5fc();
    pcVar2 = "SCTalkNotificationCategoryPluginProvider";
    uVar3 = 0x28;
    pcVar1 = param_2;
  }
  else {
    FUN_10095c630(pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
    pcVar2 = "AddFriendNotificationCategoryPluginProvider";
    uVar3 = 0x2b;
  }
  FUN_100082720(pcVar2,uVar3,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10095c5c8; end: 10095c62f;  */

void FUN_10095c5c8(undefined8 *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    FUN_10095e5fc();
    pcVar1 = "SCTalkNotificationCategoryPluginProvider";
    uVar2 = 0x28;
    param_3 = param_2;
  }
  else {
    FUN_10095c630(param_3,param_4);
    pcVar1 = "AddFriendNotificationCategoryPluginProvider";
    uVar2 = 0x2b;
  }
  FUN_100082720(pcVar1,uVar2,2);
  *param_1 = param_3;
  return;
}



/* Entry: 10095c630; end: 10095c6af;  */

void FUN_10095c630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df91d8,&UNK_10d9c9be0);
  puVar1 = &UNK_11043e8b8;
  func_0x000107c613fc(&UNK_11043e8b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10095c6b0,puVar1);
  return;
}



/* Entry: 10095c6b0; end: 10095c6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095c6b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar8 = &lStack_60;
  FUN_100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10));
  lVar3 = lStack_48;
  func_0x000107c5b4b4();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  if (lVar3 != 0) {
    FUN_100083b20(&lStack_50);
    uVar4 = *(undefined8 *)(lStack_50 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_50);
    uVar5 = uVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    lVar6 = 0;
    FUN_10095c800();
    lVar7 = lVar6;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar7 + _DAT_112df91a0);
    *puVar1 = 0xd000000000000011;
    puVar1[1] = 0x800000010eff66b0;
    *(undefined8 *)(lVar7 + _DAT_112df91a8) = 0;
    *(long *)(lVar7 + _DAT_112df9190) = lVar3;
    puVar1 = (undefined8 *)(lVar7 + _DAT_112df9198);
    *puVar1 = uVar4;
    puVar1[1] = uVar9;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
    *param_1 = plVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10095c800);
  (*pcVar2)();
}



/* Entry: 10095c6b8; end: 10095c7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095c6b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar8 = &lStack_60;
  FUN_100083b20(&lStack_48);
  lVar3 = lStack_48;
  func_0x000107c5b4b4();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  if (lVar3 != 0) {
    FUN_100083b20(&lStack_50);
    uVar4 = *(undefined8 *)(lStack_50 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_50);
    uVar5 = uVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    lVar6 = 0;
    FUN_10095c800();
    lVar7 = lVar6;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar7 + _DAT_112df91a0);
    *puVar1 = 0xd000000000000011;
    puVar1[1] = 0x800000010eff66b0;
    *(undefined8 *)(lVar7 + _DAT_112df91a8) = 0;
    *(long *)(lVar7 + _DAT_112df9190) = lVar3;
    puVar1 = (undefined8 *)(lVar7 + _DAT_112df9198);
    *puVar1 = uVar4;
    puVar1[1] = param_3;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
    *param_1 = plVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10095c800);
  (*pcVar2)();
}



/* Entry: 10095c800; end: 10095c84b;  */

void FUN_10095c800(void)

{
  func_0x000107c61168(&PTR_PTR_1127f3950);
  return;
}



/* Entry: 10095c84c; end: 10095c973;  */

ulong FUN_10095c84c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095c974);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10095c974(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095c970);
      (*pcVar1)();
    }
    FUN_10095dc94(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10095c974; end: 10095c9f3;  */

undefined * FUN_10095c974(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_10095d230();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10095c9f4; end: 10095cb6f;  */

long FUN_10095c9f4(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((8 < *puVar2) && ((ulong)puVar2[4] != 0)) &&
      (10 < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[4]) == '\x02')) &&
     ((ulong)puVar2[5] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[5]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 10095cb70; end: 10095cd63;  */

void FUN_10095cb70(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2fd0;
  if (param_1 == 0) {
    if (param_2 == (undefined *)0x0) {
      if (param_3 == (undefined *)0x0) {
        if (param_4 == (undefined *)0x0) {
          if (param_5 == (undefined *)0x0) {
            if (param_6 == (undefined *)0x0) {
              puVar1 = (undefined *)0x0;
              goto LAB_10095cc7c;
            }
            func_0x00010850ffd4(param_6);
            func_0x000107c61180();
            func_0x000107c516e8(puVar1);
            func_0x000107c61180();
          }
          else {
            func_0x00010850fedc(param_5);
            func_0x000107c61180();
            func_0x000107c3da40(puVar1);
            func_0x000107c61180();
            param_6 = param_5;
          }
        }
        else {
          func_0x00010850fba4(param_4);
          func_0x000107c61180();
          func_0x000107c4e0f4(puVar1);
          func_0x000107c61180();
          param_6 = param_4;
        }
      }
      else {
        func_0x00010850f97c(param_3);
        func_0x000107c61180();
        func_0x000107c5cc3c(puVar1);
        func_0x000107c61180();
        param_6 = param_3;
      }
    }
    else {
      func_0x00010850f840(param_2);
      func_0x000107c61180();
      func_0x000107c4111c(puVar1);
      func_0x000107c61180();
      param_6 = param_2;
    }
  }
  else {
    param_6 = PTR_PTR_1126c2fc8;
    func_0x000107c610f4(PTR_PTR_1126c2fc8);
    func_0x000107c48ebc();
    func_0x000107c5daac(puVar1);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_6);
LAB_10095cc7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10095cd64; end: 10095cdaf; -[SCStoriesUserStoryInfo initWithType:customTTL:] */

void FUN_10095cd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706b10;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10095cdb0; end: 10095ce17; +[SCStoriesSnapAttributes userStoryInfoWithUserStoryInfo:] */

void FUN_10095cdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126c2fd0;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10095ce18; end: 10095ce5b; -[SCStoriesSnapAttributes internalInit] */

void FUN_10095ce18(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112706b08;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10095ce5c; end: 10095d0f7;  */

void FUN_10095ce5c(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10095cfa0;
  }
  puVar7 = PTR_PTR_1126cf3b0;
  func_0x000107c610f4(PTR_PTR_1126cf3b0);
  lVar2 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar2);
  if (uVar3 < 5) {
    puVar5 = (undefined *)0x0;
LAB_10095cf48:
    puVar6 = (undefined *)0x0;
LAB_10095cf4c:
    puVar8 = (undefined *)0x0;
LAB_10095cf50:
    puVar10 = (undefined *)0x0;
LAB_10095cf54:
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar2))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar2);
    }
    lVar2 = -lVar2;
    if (uVar3 < 7) goto LAB_10095cf48;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 6);
    if (uVar4 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 9) goto LAB_10095cf4c;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 8);
    if (uVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xb) goto LAB_10095cf50;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 10);
    if (uVar4 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar3 < 0xd) || (uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 0xc), uVar4 == 0))
    goto LAB_10095cf54;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c4949c(puVar7,param_2,puVar5,puVar6,puVar8,puVar10,puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
LAB_10095cfa0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10095d0f8; end: 10095d22f; -[SCStoriesSnapIdentifiers initWithVenueId:geoFilterId:storyFilterId:lensId:lensRankingId:] */

undefined1 *
FUN_10095d0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112706b40;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10095d230; end: 10095d243;  */

void FUN_10095d230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e38b28 == (undefined *)0x0 || ((ulong)puRam0000000112e38b28 & 1) != 0) {
    puVar1 = &UNK_10e8bef2a;
    func_0x000107c61518(&UNK_10e8bef2a,0x29,0,0);
    puRam0000000112e38b28 = puVar1;
  }
  return;
}



/* Entry: 10095d244; end: 10095d2af; -[SCStoriesSnapTimeInfo initWithDuration:isDurationInfinite:expirationDate:timestamp:] */

void FUN_10095d244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112706b48;
  uStack_50 = param_4;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
  }
  return;
}



/* Entry: 10095d2b0; end: 10095d777;  */

void FUN_10095d2b0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_78;
  undefined *puStack_68;
  
  puVar3 = (undefined *)0x0;
  if (param_1 == (int *)0x0) goto LAB_10095d4d8;
  puVar3 = PTR_PTR_1126cf3c0;
  func_0x000107c610f4(PTR_PTR_1126cf3c0);
  lVar5 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar5);
  if (uVar4 < 5) {
    puStack_68 = (undefined *)0x0;
LAB_10095d3a0:
    puVar8 = (undefined *)0x0;
LAB_10095d3a4:
    puVar11 = (undefined *)0x0;
LAB_10095d3ac:
    lVar10 = 0;
LAB_10095d3b0:
    puStack_78 = (undefined *)0x0;
LAB_10095d3b4:
    puVar12 = (undefined *)0x0;
LAB_10095d3b8:
    bVar2 = false;
LAB_10095d3bc:
    lVar5 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_1 - lVar5))[2];
    if (uVar7 == 0) {
      puStack_68 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puStack_68 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 7) goto LAB_10095d3a0;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 6);
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 9) goto LAB_10095d3a4;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 8);
    if (uVar7 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0xb) goto LAB_10095d3ac;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 10);
    if (uVar7 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (long)*(int *)((long)param_1 + uVar7);
    }
    if (uVar4 < 0xd) goto LAB_10095d3b0;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xc);
    if (uVar7 == 0) {
      puStack_78 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puStack_78 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0xf) goto LAB_10095d3b4;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xe);
    if (uVar7 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0x11) goto LAB_10095d3b8;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0x10);
    if (uVar7 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)param_1 + uVar7) != '\0';
    }
    if ((uVar4 < 0x13) || (uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0x12), uVar7 == 0))
    goto LAB_10095d3bc;
    puVar1 = (uint *)((long)param_1 + uVar7);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095d778();
  func_0x000107c61180();
  lVar6 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar6);
  if ((uVar4 < 0x15) || (uVar4 < 0x17)) {
    puVar13 = (undefined *)0x0;
LAB_10095d450:
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_1 - lVar6))[0xb];
    if (uVar7 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar6 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar6);
    }
    if (uVar4 < 0x19) goto LAB_10095d450;
    uVar7 = (ulong)*(ushort *)((long)param_1 + (0x18 - lVar6));
    if (uVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
    }
  }
  func_0x000107c46d3c(puVar3,param_2,puStack_68,puVar8,puVar11,lVar10,puStack_78,puVar12,bVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puStack_78);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puStack_68);
LAB_10095d4d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10095d778; end: 10095da93;  */

void FUN_10095d778(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10095d8d0;
  }
  puVar7 = PTR_PTR_1126d5df0;
  func_0x000107c610f4(PTR_PTR_1126d5df0);
  lVar2 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar2);
  if (uVar3 < 5) {
    puVar5 = (undefined *)0x0;
LAB_10095d868:
    puVar6 = (undefined *)0x0;
LAB_10095d86c:
    puVar8 = (undefined *)0x0;
LAB_10095d870:
    puVar10 = (undefined *)0x0;
LAB_10095d874:
    puVar11 = (undefined *)0x0;
LAB_10095d878:
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar2))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar2);
    }
    lVar2 = -lVar2;
    if (uVar3 < 7) goto LAB_10095d868;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 6);
    if (uVar4 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 9) goto LAB_10095d86c;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 8);
    if (uVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xb) goto LAB_10095d870;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 10);
    if (uVar4 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xd) goto LAB_10095d874;
    if (*(short *)((long)param_1 + lVar2 + 0xc) == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c45ae4();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar3 < 0xf) || (uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 0xe), uVar4 == 0))
    goto LAB_10095d878;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c47190(puVar7,param_2,puVar5,puVar6,puVar8,puVar10,puVar11,puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
LAB_10095d8d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10095da94; end: 10095dc93; -[SCStoriesSnapMedia initWithId:key:iv:type:appUrl:directToStorageUrl:isZipped:boltContentObjects:animatedSnapType:boltWatermarkedVideoUrl:flatNonWatermarkVideoUrl:isSubtitleEncrypted:] */

undefined8 *
FUN_10095da94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_112706b50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[5] = param_6;
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_9;
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[9] = param_12;
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_15;
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10095dc94; end: 10095ddb7;  */

long FUN_10095dc94(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10095ddb4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10095ddb8);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e38b20;
        FUN_1000285a8(0x112e38b20,&UNK_10da23630);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e38b20;
      FUN_1000285a8(0x112e38b20,&UNK_10da23630);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10095ddb0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10095ddb8; end: 10095df33;  */

void FUN_10095ddb8(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  ushort *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10095de7c;
  }
  puVar6 = PTR_PTR_1126cf3c8;
  func_0x000107c610f4(PTR_PTR_1126cf3c8);
  lVar4 = (long)*param_1;
  puVar5 = (ushort *)((long)param_1 - lVar4);
  uVar2 = *puVar5;
  if (uVar2 < 5) {
    uVar7 = 0;
LAB_10095de34:
    uVar8 = 0;
LAB_10095de38:
    puVar9 = (undefined *)0x0;
LAB_10095de3c:
    lVar4 = 0;
  }
  else {
    if ((ulong)puVar5[2] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((long)param_1 + (ulong)puVar5[2]);
    }
    if (uVar2 < 7) goto LAB_10095de34;
    if ((ulong)puVar5[3] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)((long)param_1 + (ulong)puVar5[3]);
    }
    if (uVar2 < 9) goto LAB_10095de38;
    if ((ulong)puVar5[4] == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar5[4]);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar4 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar4);
    }
    if ((uVar2 < 0xb) || (uVar3 = (ulong)*(ushort *)((long)param_1 + (10 - lVar4)), uVar3 == 0))
    goto LAB_10095de3c;
    puVar1 = (uint *)((long)param_1 + uVar3);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095df34(lVar4);
  func_0x000107c61180();
  func_0x000107c45b90(puVar6,param_2,uVar7,uVar8,puVar9,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar9);
LAB_10095de7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10095df34; end: 10095e02f;  */

void FUN_10095df34(int *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 != (int *)0x0) {
    func_0x000107c610f4(PTR_PTR_1126cf3d0);
    puVar2 = (ushort *)((long)param_1 - (long)*param_1);
    uVar9 = 0;
    uVar7 = 0;
    uVar1 = *puVar2;
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar10 = 0;
    if (4 < uVar1) {
      if ((ulong)puVar2[2] != 0) {
        uVar3 = *(undefined8 *)((long)param_1 + (ulong)puVar2[2]);
      }
      if (6 < uVar1) {
        if ((ulong)puVar2[3] != 0) {
          uVar4 = *(undefined8 *)((long)param_1 + (ulong)puVar2[3]);
        }
        if (8 < uVar1) {
          if ((ulong)puVar2[4] != 0) {
            uVar5 = *(undefined8 *)((long)param_1 + (ulong)puVar2[4]);
          }
          if (10 < uVar1) {
            if ((ulong)puVar2[5] != 0) {
              uVar6 = *(undefined8 *)((long)param_1 + (ulong)puVar2[5]);
            }
            if (0xc < uVar1) {
              if ((ulong)puVar2[6] != 0) {
                uVar7 = *(undefined8 *)((long)param_1 + (ulong)puVar2[6]);
              }
              if (0xe < uVar1) {
                if ((ulong)puVar2[7] != 0) {
                  uVar8 = *(undefined8 *)((long)param_1 + (ulong)puVar2[7]);
                }
                if (0x10 < uVar1) {
                  if ((ulong)puVar2[8] != 0) {
                    uVar9 = *(undefined8 *)((long)param_1 + (ulong)puVar2[8]);
                  }
                  if ((0x12 < uVar1) && ((ulong)puVar2[9] != 0)) {
                    uVar10 = *(undefined8 *)((long)param_1 + (ulong)puVar2[9]);
                  }
                }
              }
            }
          }
        }
      }
    }
    func_0x000107c47584(uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10095e030; end: 10095e0ef; -[SCStoriesSnapCaptureInfo initWithCamera:orientation:encryptedGeoLogString:postLocation:] */

undefined1 *
FUN_10095e030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112706b68;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10095e0f0; end: 10095e2e7;  */

void FUN_10095e0f0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10095e214;
  }
  puVar6 = PTR_PTR_1126cf3d8;
  func_0x000107c610f4(PTR_PTR_1126cf3d8);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_10095e1dc:
    puVar8 = (undefined *)0x0;
LAB_10095e1e0:
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    lVar3 = -lVar3;
    if (uVar2 < 7) goto LAB_10095e1dc;
    if (*(short *)((long)param_1 + lVar3 + 6) == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126c3340;
      func_0x000107c610f4(PTR_PTR_1126c3340);
      func_0x000107c46248();
      lVar3 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar2 < 9) || (uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 8), uVar4 == 0))
    goto LAB_10095e1e0;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c4580c(puVar6,param_2,puVar5,puVar8,puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
LAB_10095e214:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10095e2e8; end: 10095e3bf; -[SCStoriesSnapRenderInfo initWithAttachmentUrl:framing:captionText:] */

undefined1 *
FUN_10095e2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112706b78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10095e3c0; end: 10095e5fb;  */

void FUN_10095e3c0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  if (param_1 == (int *)0x0) {
    puVar8 = (undefined *)0x0;
    goto LAB_10095e574;
  }
  puVar8 = PTR_PTR_1126d9f28;
  func_0x000107c610f4(PTR_PTR_1126d9f28);
  uVar9 = 0;
  lVar4 = (long)*param_1;
  puVar6 = (ushort *)((long)param_1 - lVar4);
  uVar2 = *puVar6;
  if (uVar2 < 5) {
LAB_10095e470:
    puVar7 = (undefined *)0x0;
LAB_10095e474:
    lVar4 = 0;
  }
  else {
    if ((ulong)puVar6[2] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)param_1 + (ulong)puVar6[2]);
    }
    if (uVar2 < 9) goto LAB_10095e470;
    if (puVar6[4] == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c45ae4();
      lVar4 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar4);
    }
    if ((uVar2 < 0xb) || (uVar3 = (ulong)*(ushort *)((long)param_1 + (10 - lVar4)), uVar3 == 0))
    goto LAB_10095e474;
    puVar1 = (uint *)((long)param_1 + uVar3);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095e63c(lVar4);
  func_0x000107c61180();
  lVar5 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar5);
  if (uVar2 < 0xd) {
    puVar11 = (undefined *)0x0;
LAB_10095e530:
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)param_1 - lVar5))[6];
    if (uVar3 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar3);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar5);
    }
    if ((uVar2 < 0xf) || (uVar3 = (ulong)*(ushort *)((long)param_1 + (0xe - lVar5)), uVar3 == 0))
    goto LAB_10095e530;
    puVar1 = (uint *)((long)param_1 + uVar3);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c45a64(puVar8,param_2,uVar9,puVar7,lVar4,puVar11,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar7);
LAB_10095e574:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10095e5fc; end: 10095e63b;  */

void FUN_10095e5fc(void)

{
  FUN_1000285a8(0x112df91d8,&UNK_10d9c9be0);
  FUN_1000823a8(FUN_10095eccc,0);
  return;
}



/* Entry: 10095e63c; end: 10095eb97;  */

void FUN_10095e63c(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  
  if (param_1 == (int *)0x0) {
    puVar13 = (undefined *)0x0;
    goto LAB_10095e7ac;
  }
  puVar13 = PTR_PTR_1126d9f30;
  func_0x000107c610f4();
  lVar5 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_10095e718:
    puVar8 = (undefined *)0x0;
LAB_10095e71c:
    puVar9 = (undefined *)0x0;
LAB_10095e720:
    puVar12 = (undefined *)0x0;
LAB_10095e724:
    puVar14 = (undefined *)0x0;
LAB_10095e728:
    puVar16 = (undefined *)0x0;
LAB_10095e72c:
    puVar10 = (undefined *)0x0;
LAB_10095e730:
    puVar11 = (undefined *)0x0;
LAB_10095e738:
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 7) goto LAB_10095e718;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 6);
    if (uVar6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((long)param_1 + uVar6);
    }
    if (uVar4 < 9) goto LAB_10095e718;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 8);
    if (uVar6 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)((long)param_1 + uVar6);
    }
    if (uVar4 < 0xb) goto LAB_10095e718;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 10);
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0xd) goto LAB_10095e71c;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xc);
    if (uVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2,uVar3);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0xf) goto LAB_10095e720;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xe);
    if (uVar6 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2,uVar3);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0x11) goto LAB_10095e724;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0x10);
    if (uVar6 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2,uVar3);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0x13) goto LAB_10095e728;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0x12);
    if (uVar6 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2,uVar3);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0x15) goto LAB_10095e72c;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0x14);
    if (uVar6 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2,uVar3);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0x17) goto LAB_10095e730;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0x16);
    if (uVar6 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2,uVar3);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar4 < 0x19) || (uVar4 < 0x1b)) goto LAB_10095e738;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0x1a);
    if (uVar6 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4,uVar2,uVar3);
      func_0x000107c61180();
    }
  }
  func_0x000107c455dc();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
LAB_10095e7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10095eb98; end: 10095ecab; -[SCStoriesSnapAdInfo initWithBrandFriendliness:adOrganicSignals:skAdNetworkAttributionInfo:iosAppId:adId:] */

undefined1 *
FUN_10095eb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112706b88;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10095ecac; end: 10095eccb;  */

void FUN_10095ecac(void)

{
  func_0x000107c61168(&PTR_PTR_1127f59e0);
  return;
}



/* Entry: 10095eccc; end: 10095ecfb;  */

void FUN_10095eccc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10095ecac();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10095ecfc; end: 10095ee67;  */

void FUN_10095ecfc(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10095ee10;
  }
  puVar7 = PTR_PTR_1126cf3e0;
  func_0x000107c610f4(PTR_PTR_1126cf3e0);
  lVar4 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar4);
  if (uVar3 < 5) {
    puVar6 = (undefined *)0x0;
LAB_10095ede4:
    puVar8 = (undefined *)0x0;
LAB_10095ede8:
    uVar2 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar4 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar3 < 7) goto LAB_10095ede4;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 6);
    if (uVar5 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar3 < 9) || (uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8), uVar5 == 0))
    goto LAB_10095ede8;
    uVar2 = *(undefined4 *)((long)param_1 + uVar5);
  }
  func_0x000107c48140(puVar7,param_2,puVar6,puVar8,uVar2);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
LAB_10095ee10:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10095ee68; end: 10095f083;  */

void FUN_10095ee68(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint *puVar11;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10095ef60;
  }
  puVar7 = PTR_PTR_1126d9f40;
  func_0x000107c610f4(PTR_PTR_1126d9f40);
  lVar4 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar4);
  if (uVar2 < 5) {
    puVar6 = (undefined *)0x0;
LAB_10095ef28:
    uVar8 = 0;
LAB_10095ef2c:
    uVar9 = 0;
LAB_10095ef30:
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar11 = (uint *)((long)param_1 + uVar5);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar11 + (ulong)*puVar11 + 4);
      func_0x000107c61180();
      lVar4 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar4);
    }
    if (uVar2 < 7) goto LAB_10095ef28;
    uVar5 = (ulong)*(ushort *)((long)param_1 + (6 - lVar4));
    if (uVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)param_1 + uVar5);
    }
    if (uVar2 < 9) goto LAB_10095ef2c;
    uVar5 = (ulong)*(ushort *)((long)param_1 + (8 - lVar4));
    if (uVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)param_1 + uVar5);
    }
    if ((uVar2 < 0xb) || (uVar5 = (ulong)*(ushort *)((long)param_1 + (10 - lVar4)), uVar5 == 0))
    goto LAB_10095ef30;
    puVar1 = (uint *)((long)param_1 + uVar5);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar1);
    func_0x000107c61180();
    puVar11 = puVar1 + 1;
    if (*puVar1 != 0) {
      do {
        lVar4 = (long)puVar11 + (ulong)*puVar11;
        func_0x0001085101e4(lVar4);
        func_0x000107c61180();
        func_0x000107c3d798(puVar3,param_2,lVar4);
        func_0x000107c61170(lVar4);
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar1 + 1 + *puVar1);
    }
    puVar10 = puVar3;
    func_0x000107c40794(puVar3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c45868(puVar7,param_2,puVar6,uVar8,uVar9,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar6);
LAB_10095ef60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10095f084; end: 10095f17f;  */

void FUN_10095f084(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10095f158;
  }
  puVar6 = PTR_PTR_1126cf400;
  func_0x000107c610f4(PTR_PTR_1126cf400);
  lVar4 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar4);
  if (uVar2 < 5) {
    puVar7 = (undefined *)0x0;
LAB_10095f138:
    cVar3 = '\0';
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar5 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar4 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar4);
    }
    if (uVar2 < 7) goto LAB_10095f138;
    uVar5 = (ulong)*(ushort *)((long)param_1 + (6 - lVar4));
    cVar3 = '\0';
    if (uVar5 != 0) {
      cVar3 = *(char *)((long)param_1 + uVar5);
    }
  }
  func_0x000107c465f4(puVar6,param_2,puVar7,(int)cVar3);
  func_0x000107c61170(puVar7);
LAB_10095f158:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10095f180; end: 10095f297;  */

void FUN_10095f180(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10095f254;
  }
  puVar7 = PTR_PTR_1126c32f8;
  func_0x000107c610f4(PTR_PTR_1126c32f8);
  lVar5 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar5);
  if (uVar4 < 5) {
    puVar8 = (undefined *)0x0;
LAB_10095f234:
    uVar2 = 0;
LAB_10095f238:
    uVar3 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar5);
    }
    if (uVar4 < 7) goto LAB_10095f234;
    uVar6 = (ulong)*(ushort *)((long)param_1 + (6 - lVar5));
    if (uVar6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)((long)param_1 + uVar6);
    }
    if ((uVar4 < 9) || (uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - lVar5)), uVar6 == 0))
    goto LAB_10095f238;
    uVar3 = *(undefined8 *)((long)param_1 + uVar6);
  }
  func_0x000107c45aa4(puVar7,param_2,puVar8,uVar2,uVar3);
  func_0x000107c61170(puVar8);
LAB_10095f254:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10095f298; end: 10095f3cb;  */

void FUN_10095f298(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == (int *)0x0) {
    puVar5 = (undefined *)0x0;
    goto LAB_10095f3a4;
  }
  puVar5 = PTR_PTR_1126d9f50;
  func_0x000107c610f4(PTR_PTR_1126d9f50);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar6 = (undefined *)0x0;
LAB_10095f384:
    uVar7 = 0;
LAB_10095f388:
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    uVar8 = 0;
    if (uVar2 < 0xb) goto LAB_10095f384;
    uVar4 = (ulong)*(ushort *)((long)param_1 + (10 - lVar3));
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = *(undefined8 *)((long)param_1 + uVar4);
    }
    if (uVar2 < 0xd) goto LAB_10095f388;
    uVar4 = (ulong)*(ushort *)((long)param_1 + (0xc - lVar3));
    uVar9 = 0;
    if (uVar4 != 0) {
      uVar8 = *(undefined8 *)((long)param_1 + uVar4);
    }
    if ((0xe < uVar2) && (uVar4 = (ulong)*(ushort *)((long)param_1 + (0xe - lVar3)), uVar4 != 0)) {
      uVar9 = *(undefined8 *)((long)param_1 + uVar4);
    }
  }
  func_0x000107c48a78(uVar7,uVar8,uVar9,puVar5,param_2,puVar6);
  func_0x000107c61170(puVar6);
LAB_10095f3a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10095f3cc; end: 10095f5cf;  */

void FUN_10095f3cc(int *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_1 != (int *)0x0) {
    func_0x000107c610f4(PTR_PTR_1126d9f58);
    if (*(ushort *)((long)param_1 - (long)*param_1) < 5) {
      uVar2 = 0;
    }
    else {
      uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2];
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)((long)param_1 + uVar1);
      }
    }
    func_0x000107c48d38(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10095f5d0; end: 10095f6eb;  */

void FUN_10095f5d0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_1 == (int *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d9f60;
    func_0x000107c610f4(PTR_PTR_1126d9f60);
    if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
       (uVar3 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar3 == 0)) {
      lVar2 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar3);
      lVar2 = (long)puVar1 + (ulong)*puVar1;
    }
    FUN_10095f920(lVar2);
    func_0x000107c61180();
    if ((*(ushort *)((long)param_1 - (long)*param_1) < 7) ||
       (((ushort *)((long)param_1 - (long)*param_1))[3] == 0)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c45ae4();
    }
    func_0x000107c46b14(puVar4,param_2,lVar2,puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10095f6ec; end: 10095f91f;  */

void FUN_10095f6ec(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  if (param_1 == (int *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_10095f83c;
  }
  puVar9 = PTR_PTR_1126cc4d8;
  func_0x000107c610f4(PTR_PTR_1126cc4d8);
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar7 == 0)) {
    lVar6 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar7);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  func_0x00010851031c(lVar6);
  func_0x000107c61180();
  lVar8 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar8);
  if (uVar2 < 7) {
    puVar10 = (undefined *)0x0;
LAB_10095f7f0:
    bVar4 = false;
    bVar3 = false;
LAB_10095f7f8:
    bVar5 = false;
LAB_10095f7fc:
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_1 - lVar8))[3];
    if (uVar7 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar8 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar8);
    }
    if (uVar2 < 9) goto LAB_10095f7f0;
    uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - lVar8));
    if (uVar7 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)param_1 + uVar7) != '\0';
    }
    if (uVar2 < 0xb) {
      bVar4 = false;
      goto LAB_10095f7f8;
    }
    uVar7 = (ulong)*(ushort *)((long)param_1 + (10 - lVar8));
    if (uVar7 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)param_1 + uVar7) != '\0';
    }
    if (uVar2 < 0xd) goto LAB_10095f7f8;
    uVar7 = (ulong)*(ushort *)((long)param_1 + (0xc - lVar8));
    if (uVar7 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(char *)((long)param_1 + uVar7) != '\0';
    }
    if ((uVar2 < 0xf) || (*(short *)((long)param_1 + (0xe - lVar8)) == 0)) goto LAB_10095f7fc;
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c45ae4();
  }
  func_0x000107c46ec4(puVar9,param_2,lVar6,puVar10,bVar3,bVar4,bVar5,puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar6);
LAB_10095f83c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10095f920; end: 10095f9fb;  */

void FUN_10095f920(uint *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar2 = (undefined *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*param_1);
    func_0x000107c61180();
    puVar3 = param_1 + 1;
    if (*param_1 != 0) {
      do {
        puVar4 = puVar3 + 2;
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)puVar3);
        func_0x000107c61180();
        func_0x000107c3d798(puVar1,param_2,puVar2);
        func_0x000107c61170(puVar2);
        puVar3 = puVar4;
      } while (puVar4 != param_1 + 1 + (ulong)*param_1 * 2);
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



/* Entry: 10095f9fc; end: 10095fa43; -[_TtC32SCTalkNotificationCategoryPlugin30TalkNotificationCategoryPlugin init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095f9fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112dfa6f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10095fa44; end: 10095fa5f;  */

void FUN_10095fa44(long param_1,long param_2)

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



/* Entry: 10095fa60; end: 10095fc0b;  */

void FUN_10095fa60(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10095fb80;
  }
  puVar6 = PTR_PTR_1126cf3a8;
  func_0x000107c610f4(PTR_PTR_1126cf3a8);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_10095fb48:
    puVar8 = (undefined *)0x0;
LAB_10095fb4c:
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    lVar3 = -lVar3;
    if (uVar2 < 7) goto LAB_10095fb48;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 6);
    if (uVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar2 < 9) || (uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 8), uVar4 == 0))
    goto LAB_10095fb4c;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c47cc4(puVar6,param_2,puVar5,puVar8,puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
LAB_10095fb80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10095fc0c; end: 10095fd23;  */

void FUN_10095fc0c(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10095fce0;
  }
  puVar7 = PTR_PTR_1126d9f78;
  func_0x000107c610f4(PTR_PTR_1126d9f78);
  lVar5 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar5);
  if (uVar4 < 5) {
    puVar8 = (undefined *)0x0;
LAB_10095fcc0:
    uVar2 = 0;
LAB_10095fcc4:
    uVar3 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar5);
    }
    if (uVar4 < 7) goto LAB_10095fcc0;
    uVar6 = (ulong)*(ushort *)((long)param_1 + (6 - lVar5));
    if (uVar6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((long)param_1 + uVar6);
    }
    if ((uVar4 < 9) || (uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - lVar5)), uVar6 == 0))
    goto LAB_10095fcc4;
    uVar3 = *(undefined8 *)((long)param_1 + uVar6);
  }
  func_0x000107c481ec(puVar7,param_2,puVar8,uVar2,uVar3);
  func_0x000107c61170(puVar8);
LAB_10095fce0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10095fd24; end: 10096043b; -[SCStoriesSnapPlaybackInfo initWithServerId:clientId:attributes:auxIds:creatorUserId:creatorUsername:timeInfo:media:thumbnail:captureInfo:renderInfo:adInfo:sponsor:contextHintInfo:lensInfo:unlockablesInfo:audioStitchInfo:creatorDisplayName:loggingInfo:source:sequence:rotationLocked:multiSnapInfo:eventSignature:boostInfo:spotlightEngagementInfo:spotlightDescription:cameosMetadata:spotlightRepliesEnabledOnSnap:spectaclesMetadata:scanOnPublicContentEnabled:creatorBitmojiAvatarId:creatorBitmojiAvatarSelfieId:managementInfo:mediaOrigin:storyTypeVariant:creatorEligibility:commentsSnapReplyMetadata:fanPassSnapPlaceholderCount:fromCamera:suggestedSearchInfo:] */

undefined8 *
FUN_10095fd24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
             undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined1 param_32,
             undefined4 param_33,undefined8 param_34,undefined1 param_35,undefined4 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined1 param_45,undefined4 param_46,undefined8 param_47)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_37);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puStack_70 = PTR_PTR_112706b00;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_15;
    func_0x000107c40794();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_16;
    func_0x000107c40794();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_17;
    func_0x000107c40794();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_18;
    func_0x000107c40794();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_19;
    func_0x000107c40794();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_20;
    func_0x000107c40794();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_21;
    func_0x000107c40794();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_22;
    func_0x000107c40794();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x16] = param_23;
    *(undefined1 *)(puVar1 + 1) = param_24;
    uVar2 = param_26;
    func_0x000107c40794();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_27;
    func_0x000107c40794();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_28;
    func_0x000107c40794();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_29;
    func_0x000107c40794();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_30;
    func_0x000107c40794();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_31;
    func_0x000107c40794();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_32;
    uVar2 = param_34;
    func_0x000107c40794();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_35;
    uVar2 = param_37;
    func_0x000107c40794();
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_38;
    func_0x000107c40794();
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_39;
    func_0x000107c40794();
    uVar3 = puVar1[0x20];
    puVar1[0x20] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_40;
    func_0x000107c40794();
    uVar3 = puVar1[0x21];
    puVar1[0x21] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x22] = param_41;
    uVar2 = param_42;
    func_0x000107c40794();
    uVar3 = puVar1[0x23];
    puVar1[0x23] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_43;
    func_0x000107c40794();
    uVar3 = puVar1[0x24];
    puVar1[0x24] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x25] = param_44;
    *(undefined1 *)((long)puVar1 + 0xb) = param_45;
    uVar2 = param_47;
    func_0x000107c40794();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10096043c; end: 10096045f; -[SCStoriesSnapAttributes copyWithZone:] */

undefined8 FUN_10096043c(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100960460; end: 100960483; -[SCStoriesSnapIdentifiers copyWithZone:] */

undefined8 FUN_100960460(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100960484; end: 1009604a7; -[SCStoriesSnapTimeInfo copyWithZone:] */

undefined8 FUN_100960484(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1009604a8; end: 1009604cb; -[SCStoriesSnapMedia copyWithZone:] */

undefined8 FUN_1009604a8(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1009604cc; end: 1009604ef; -[SCStoriesSnapCaptureInfo copyWithZone:] */

undefined8 FUN_1009604cc(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1009604f0; end: 100960513; -[SCStoriesSnapRenderInfo copyWithZone:] */

undefined8 FUN_1009604f0(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100960514; end: 100960577; -[SCStoriesSnapAdInfo copyWithZone:] */

undefined8 FUN_100960514(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100960578; end: 1009605eb; -[SCGrapheneNotificationCategoryManagerMetric2 init] */

undefined1 * FUN_100960578(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9e28;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1009605ec; end: 10096060b;  */

void FUN_1009605ec(void)

{
  func_0x000107c61168(&PTR_PTR_112e38a78);
  return;
}



/* Entry: 10096060c; end: 10096064f;  */

long FUN_10096060c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100960650; end: 10096074b;  */

undefined * FUN_100960650(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x112e38b30,&UNK_10da233f0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100960748);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10096074c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10096074c; end: 100960807; -[SCStoriesFriendMergedStoryPlaybackSequence initWithUserId:storySnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10096074c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112706a60;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc60);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc60) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc64);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc64) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100960808; end: 100960827;  */

void FUN_100960808(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010096081c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}


