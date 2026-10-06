/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021207f8; end: 10212088f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021207f8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e59c00) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102120890; end: 1021208ef; -[_TtC23FriendsFeedItemServices23FriendsFeedItemServices init] */

void FUN_102120890(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedItemServices.FriendsFeedItemServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021208bc);
  (*pcVar1)();
}



/* Entry: 1021208f0; end: 1021208ff; -[_TtC23FriendsFeedItemServices23FriendsFeedItemServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021208f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e59c00));
  return;
}



/* Entry: 102120900; end: 10212091f;  */

void FUN_102120900(void)

{
  func_0x000107c61168(&PTR_PTR_11281ee60);
  return;
}



/* Entry: 102120920; end: 10212098b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102120920(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102120d14();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e59c38) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10212098c; end: 1021209f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212098c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e59c38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021209f8; end: 102120a57; -[_TtC47ContextPostSnapFeedScopedFactoryServiceProvider35SCContextPostSnapFeedScopedServices init] */

void FUN_1021209f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextPostSnapFeedScopedFactoryServiceProvider.SCContextPostSnapFeedScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102120a24);
  (*pcVar1)();
}



/* Entry: 102120a58; end: 102120a67; -[_TtC47ContextPostSnapFeedScopedFactoryServiceProvider35SCContextPostSnapFeedScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102120a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e59c38));
  return;
}



/* Entry: 102120a68; end: 102120ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102120a68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104cd668;
  func_0x000107c613fc(&UNK_1104cd668,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102120df0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102120ad4; end: 102120b6f;  */

void FUN_102120ad4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104cd578;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104cd578;
  return;
}



/* Entry: 102120b70; end: 102120ba7;  */

void FUN_102120b70(long *param_1)

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



/* Entry: 102120ba8; end: 102120baf;  */

undefined8 FUN_102120ba8(void)

{
  return 0x1b;
}



/* Entry: 102120bb0; end: 102120ce3;  */

void FUN_102120bb0(undefined8 *param_1)

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
  puVar1 = &UNK_1104cd690;
  func_0x000107c613fc(&UNK_1104cd690,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102120dc8;
  func_0x00010058fa64(FUN_102120dc8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102120ce4; end: 102120d13;  */

undefined ** FUN_102120ce4(void)

{
  return &PTR_DAT_112e59f38;
}



/* Entry: 102120d14; end: 102120d33;  */

void FUN_102120d14(void)

{
  func_0x000107c61168(&PTR_PTR_11281ef20);
  return;
}



/* Entry: 102120d34; end: 102120d83;  */

undefined1  [16] FUN_102120d34(void)

{
  return ZEXT816(0x1104cd5c8);
}



/* Entry: 102120d84; end: 102120dc7;  */

void FUN_102120d84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e59ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9eb8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e59ca0 = puVar1;
  return;
}



/* Entry: 102120dc8; end: 102120def;  */

void FUN_102120dc8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102120df0; end: 102120df3;  */

void FUN_102120df0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102120df4; end: 102120fdb;  */

void FUN_102120df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e59ca8,&UNK_10da5ea10);
  puVar1 = &UNK_1104cd6d0;
  func_0x000107c613fc(&UNK_1104cd6d0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102120fdc,puVar1);
  return;
}



/* Entry: 102120fdc; end: 102120fff;  */

/* WARNING: Possible PIC construction at 0x000102120f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102120fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102120fb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102120fa4) */
/* WARNING: Removing unreachable block (ram,0x000102120f94) */
/* WARNING: Removing unreachable block (ram,0x000102120fb4) */

void FUN_102120fdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_1104cd718;
  func_0x000107c613fc(&UNK_1104cd718,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  uVar7 = 0x112e59cb0;
  func_0x0001000285a8(0x112e59cb0,&UNK_10da5ea58);
  func_0x000107c613fc();
  pcVar8 = FUN_1021213ac;
  func_0x0001000841fc(FUN_1021213ac,puVar6,uVar7);
  func_0x000100084214(&UNK_10da5ea20,0x31,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102121000; end: 102121357;  */

void FUN_102121000(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e59cb8,&UNK_10da5ea60);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1021227b8();
  func_0x000100082720("ContextPostSnapFeedScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e59cc0,&UNK_10da5ea70);
  puVar3 = &UNK_1104cd740;
  func_0x000107c613fc(&UNK_1104cd740,0x50,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  uVar8 = 0x1021213c0;
  func_0x0001000823a8(0x1021213c0,puVar3);
  func_0x000100082720("SCContextPostSnapFeedEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102120b70;
  func_0x0001000823a8(FUN_102120b70,0);
  func_0x000100082720("SCContextPostSnapFeedScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e59cc8,&UNK_10da5ea68);
  puVar3 = &UNK_1104cd768;
  func_0x000107c613fc(&UNK_1104cd768,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1021213d4;
  func_0x0001000823a8(0x1021213d4,puVar3);
  func_0x000100082720("SCContextPostSnapFeedScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e59c40,&UNK_10da5e7f0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1021213e0;
  func_0x0001000823a8(0x1021213e0,uVar5);
  func_0x000100082720("SCContextPostSnapFeedScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e59c30,&UNK_10da5e7e0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1021213e8;
  func_0x0001000823a8(0x1021213e8,uVar6);
  func_0x000100082720("SCContextPostSnapFeedScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104cd790;
  func_0x000107c613fc(&UNK_1104cd790,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1021213f0;
  func_0x0001000823a8(0x1021213f0,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCContextPostSnapFeedScopeEntryPointProvider",0x2c,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102121358; end: 1021213ab;  */

void FUN_102121358(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021213ac; end: 1021213f7;  */

void FUN_1021213ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112e59cb8,&UNK_10da5ea60);
  puVar3 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar4 = puVar3;
  FUN_1021227b8();
  func_0x000100082720("ContextPostSnapFeedScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e59cc0,&UNK_10da5ea70);
  puVar5 = &UNK_1104cd740;
  func_0x000107c613fc(&UNK_1104cd740,0x50,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  *(undefined8 *)(puVar5 + 0x40) = uVar2;
  *(undefined8 *)(puVar5 + 0x48) = uVar11;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar11);
  uVar6 = 0x1021213c0;
  func_0x0001000823a8(0x1021213c0,puVar5);
  func_0x000100082720("SCContextPostSnapFeedEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_102120b70;
  func_0x0001000823a8(FUN_102120b70,0);
  func_0x000100082720("SCContextPostSnapFeedScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e59cc8,&UNK_10da5ea68);
  puVar5 = &UNK_1104cd768;
  func_0x000107c613fc(&UNK_1104cd768,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 **)(puVar5 + 0x18) = puVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(code **)(puVar5 + 0x28) = pcVar7;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1021213d4;
  func_0x0001000823a8(0x1021213d4,puVar5);
  func_0x000100082720("SCContextPostSnapFeedScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e59c40,&UNK_10da5e7f0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1021213e0;
  func_0x0001000823a8(0x1021213e0,uVar8);
  func_0x000100082720("SCContextPostSnapFeedScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e59c30,&UNK_10da5e7e0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1021213e8;
  func_0x0001000823a8(0x1021213e8,uVar9);
  func_0x000100082720("SCContextPostSnapFeedScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104cd790;
  func_0x000107c613fc(&UNK_1104cd790,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  uVar10 = 0x1021213f0;
  func_0x0001000823a8(0x1021213f0,puVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCContextPostSnapFeedScopeEntryPointProvider",0x2c,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 1021213f8; end: 102121d43;  */

void FUN_1021213f8(long *param_1,long param_2)

{
  undefined *puVar1;
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
  FUN_102121ec4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126a9ec0;
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
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f063300);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f05bf00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar10 = 0x53676e6967676f6c;
  func_0x000107c5fadc(0x53676e6967676f6c,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f063320);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar10);
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6dc0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *param_1 = param_2;
  return;
}



/* Entry: 102121d44; end: 102121db7;  */

void FUN_102121d44(void)

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
  return;
}



/* Entry: 102121db8; end: 102121dbf;  */

undefined8 FUN_102121db8(void)

{
  return 0x1b;
}



/* Entry: 102121dc0; end: 102121e43;  */

void FUN_102121dc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102121f04,param_2,FUN_102121f08,param_2,FUN_102121f30,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102121e44; end: 102121e93;  */

undefined8 FUN_102121e44(void)

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



/* Entry: 102121e94; end: 102121ec3;  */

void FUN_102121e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104cd7a8;
  return;
}



/* Entry: 102121ec4; end: 102121ee3;  */

void FUN_102121ec4(void)

{
  func_0x000107c61168(&PTR_PTR_112e59d38);
  return;
}



/* Entry: 102121ee4; end: 102121f07;  */

undefined1  [16] FUN_102121ee4(void)

{
  return ZEXT816(0x1104cd7e8);
}



/* Entry: 102121f08; end: 102121f2f;  */

void FUN_102121f08(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102121f30; end: 102121f37;  */

undefined8 FUN_102121f30(void)

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



/* Entry: 102121f38; end: 102121f73;  */

void FUN_102121f38(undefined8 *param_1,undefined8 param_2)

{
  FUN_102121f74();
  func_0x0001000a7f38("SCContextPostSnapFeedScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 102121f74; end: 10212215f;  */

void FUN_102121f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104cdb68;
  ppuVar4 = &PTR_DAT_112e59f38;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104cd838;
  func_0x000107c613fc(&UNK_1104cd838,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e59dd0;
  func_0x0001000285a8(0x112e59dd0,&UNK_10da5ebe8);
  func_0x0001000a6ee8(&UNK_1104cda18,
                      "ContextPostSnapFeedScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_102122160,puVar2,uVar3,&UNK_1104cda18,&PTR_DAT_112e59e60);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104cd7e8,
                      "SCContextPostSnapFeedEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_102122214,param_3,uVar3,&UNK_1104cd7e8,&PTR_DAT_112e59cd0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104cd860;
  func_0x000107c613fc(&UNK_1104cd860,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104cd608,
                      "SCContextPostSnapFeedScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_1021222c4,puVar2,uVar3,&UNK_1104cd608,&PTR_DAT_112e59c48);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e59dd8;
  func_0x0001000285a8(0x112e59dd8,&UNK_10da5ebf0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102122160; end: 10212219f;  */

void FUN_102122160(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10212289c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContextPostSnapFeedScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 1021221a0; end: 102122213;  */

void FUN_1021221a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102122300;
  func_0x0001000823a8(0x102122300,param_3);
  func_0x000100082720("SCContextPostSnapFeedEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102122214; end: 10212221b;  */

void FUN_102122214(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102122300;
  func_0x0001000823a8();
  func_0x000100082720("SCContextPostSnapFeedEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10212221c; end: 1021222c3;  */

void FUN_10212221c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104cd888;
  func_0x000107c613fc(&UNK_1104cd888,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1021222f8;
  func_0x0001000823a8(FUN_1021222f8,puVar1);
  func_0x000100082720("SCContextPostSnapFeedScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 1021222c4; end: 1021222cb;  */

void FUN_1021222c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104cd888;
  func_0x000107c613fc(&UNK_1104cd888,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1021222f8;
  func_0x0001000823a8(FUN_1021222f8,puVar3);
  func_0x000100082720("SCContextPostSnapFeedScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 1021222cc; end: 1021222f7;  */

void FUN_1021222cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021222f8; end: 102122307;  */

void FUN_1021222f8(undefined8 *param_1)

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
  puVar1 = &UNK_1104cd690;
  func_0x000107c613fc(&UNK_1104cd690,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102120dc8;
  func_0x00010058fa64(FUN_102120dc8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102122308; end: 10212238f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102122308(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1021226c8();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e59de0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e59de8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102122390);
  (*pcVar1)();
}



/* Entry: 102122390; end: 1021223ef; -[_TtC35ContextPostSnapFeedScopeGraphBridge50ContextPostSnapFeedScopeGraphBridgeSaberEntryPoint init] */

void FUN_102122390(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextPostSnapFeedScopeGraphBridge.ContextPostSnapFeedScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021223bc);
  (*pcVar1)();
}



/* Entry: 1021223f0; end: 102122427; -[_TtC35ContextPostSnapFeedScopeGraphBridge50ContextPostSnapFeedScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010212240c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102122410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021223f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e59de0));
  return;
}



/* Entry: 102122428; end: 10212244f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102122428(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e59de8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e59de0));
  return;
}



/* Entry: 102122450; end: 10212246f;  */

void FUN_102122450(void)

{
  func_0x000107c61168(&PTR_PTR_11281efe0);
  return;
}



/* Entry: 102122470; end: 1021224f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102122470(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e59e18) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e59e20);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021224f8);
  (*pcVar2)();
}



/* Entry: 1021224f8; end: 1021225df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021224f8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e59e18);
  *(undefined **)(unaff_x20 + _DAT_112e59e18) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e59e20);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e59e20))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104cd978;
  func_0x000107c613fc(&UNK_1104cd978,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1021225e4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021225e0; end: 1021225eb;  */

void FUN_1021225e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021225ec; end: 10212264b; -[_TtC35ContextPostSnapFeedScopeGraphBridge50SCContextPostSnapFeedScopedServicesSaberEntryPoint init] */

void FUN_1021225ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextPostSnapFeedScopeGraphBridge.SCContextPostSnapFeedScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102122618);
  (*pcVar1)();
}



/* Entry: 10212264c; end: 102122683; -[_TtC35ContextPostSnapFeedScopeGraphBridge50SCContextPostSnapFeedScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212264c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e59e20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e59e18));
  return;
}



/* Entry: 102122684; end: 102122687;  */

void FUN_102122684(void)

{
  return;
}



/* Entry: 102122688; end: 1021226a7;  */

void FUN_102122688(void)

{
  FUN_1021224f8();
  return;
}



/* Entry: 1021226a8; end: 1021226c7;  */

void FUN_1021226a8(void)

{
  func_0x000107c61168(&PTR_PTR_11281f0a8);
  return;
}



/* Entry: 1021226c8; end: 102122797;  */

undefined8 FUN_1021226c8(void)

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
  
  func_0x000107c61428(0x112e59e50,&uStack_40,0x20,0);
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
    FUN_102122798();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102122798; end: 1021227b7;  */

void FUN_102122798(void)

{
  func_0x000107c61168(&PTR_PTR_11281f170);
  return;
}



/* Entry: 1021227b8; end: 102122823;  */

void FUN_1021227b8(void)

{
  func_0x0001000285a8(0x112e59e58,&UNK_10da5ecc8);
  func_0x0001000823a8(0x1021227f8,0);
  return;
}



/* Entry: 102122824; end: 10212285f; -[_TtC35ContextPostSnapFeedScopeGraphBridge43ContextPostSnapFeedScopeGraphBridgeServices init] */

void FUN_102122824(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102122860; end: 102122893;  */

void FUN_102122860(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102122894; end: 10212289b;  */

undefined8 FUN_102122894(void)

{
  return 0x1b;
}



/* Entry: 10212289c; end: 102122a13;  */

void FUN_10212289c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104cd9c0;
  func_0x000107c613fc(&UNK_1104cd9c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102122a14,puVar1);
  return;
}



/* Entry: 102122a14; end: 102122a1b;  */

void FUN_102122a14(undefined8 *param_1)

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
  func_0x000107c61428(0x112e59e50,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e59e50,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104cda58;
  func_0x000107c613fc(&UNK_1104cda58,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102122ac8;
  func_0x00010058fa64(0x102122ac8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102122a1c; end: 102122a77;  */

void FUN_102122a1c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e59e50,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e59e50,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102122a78; end: 102122acf;  */

undefined ** FUN_102122a78(void)

{
  return &PTR_DAT_112e59f38;
}



/* Entry: 102122ad0; end: 102122b17; -[SCContextPostSnapFeedScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102122ad0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e59eb0;
  func_0x000107c61428(param_1 + _DAT_112e59eb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102122b18; end: 102122b6f; -[SCContextPostSnapFeedScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102122b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e59eb0;
  func_0x000107c61428(param_1 + _DAT_112e59eb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102122b70; end: 102122bb7; -[SCContextPostSnapFeedScopeGraphBridgeSaberEntryPoint contextPostSnapFeedScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102122b70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e59eb8;
  func_0x000107c61428(param_1 + _DAT_112e59eb8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102122bb8; end: 102122c1b; -[SCContextPostSnapFeedScopeGraphBridgeSaberEntryPoint setContextPostSnapFeedScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102122bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e59eb8;
  func_0x000107c61428(param_1 + _DAT_112e59eb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102122c1c; end: 102122d4f;  */

/* WARNING: Possible PIC construction at 0x000102122cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102122cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102122d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102122cd8) */
/* WARNING: Removing unreachable block (ram,0x000102122cf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102122c1c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c405c0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102122450();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1021226c8();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102122d50);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e59de0) = lVar5;
    *(long *)(lVar4 + _DAT_112e59de8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102122d50; end: 102122d77; -[SCContextPostSnapFeedScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102122d50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102122c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102122d78; end: 102122dbb; -[SCContextPostSnapFeedScopeGraphBridgeSaberEntryPoint end] */

void FUN_102122d78(undefined8 param_1)

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



/* Entry: 102122dbc; end: 102122f53;  */

void FUN_102122dbc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0f9ca40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010f0635c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextPostSnapFeedScopeGraphBridge/SCContextPostSnapFeedScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5e,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102122f54);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53900();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102122f54; end: 102122fff; -[SCContextPostSnapFeedScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102122f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102122dbc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102123000; end: 10212306b; -[SCContextPostSnapFeedScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102123000(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e59eb0,0);
  *(undefined8 *)(param_1 + _DAT_112e59eb8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e59ec0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10212306c; end: 10212309f;  */

void FUN_10212306c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021230a0; end: 1021230e7; -[SCContextPostSnapFeedScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021230cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021230d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021230a0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e59eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e59eb8));
  return;
}



/* Entry: 1021230e8; end: 102123107;  */

void FUN_1021230e8(void)

{
  func_0x000107c61168(&PTR_PTR_11281f220);
  return;
}



/* Entry: 102123108; end: 10212314f; -[SCSCContextPostSnapFeedScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102123108(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e59ef0;
  func_0x000107c61428(param_1 + _DAT_112e59ef0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102123150; end: 1021231a7; -[SCSCContextPostSnapFeedScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102123150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e59ef0;
  func_0x000107c61428(param_1 + _DAT_112e59ef0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021231a8; end: 10212327f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021231a8(undefined8 param_1,long param_2)

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
    FUN_1021226a8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e59e18) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102123280);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e59e20);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e59ef8);
    *(long **)(unaff_x20 + _DAT_112e59ef8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102123280; end: 1021232a7; -[SCSCContextPostSnapFeedScopedServicesSaberEntryPoint begin] */

void FUN_102123280(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021231a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021232a8; end: 10212341f;  */

/* WARNING: Possible PIC construction at 0x000102123310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021233a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102123314) */
/* WARNING: Removing unreachable block (ram,0x0001021233ac) */
/* WARNING: Removing unreachable block (ram,0x0001021233c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021232a8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e59ef8);
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



/* Entry: 102123420; end: 102123427;  */

void FUN_102123420(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102123428; end: 10212345b; -[SCSCContextPostSnapFeedScopedServicesSaberEntryPoint end] */

void FUN_102123428(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021232a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10212345c; end: 10212357b;  */

void FUN_10212345c(long param_1,long param_2,long param_3)

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
                        "ContextPostSnapFeedScopeGraphBridge/SCSCContextPostSnapFeedScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10212357c);
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



/* Entry: 10212357c; end: 102123627; -[SCSCContextPostSnapFeedScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10212357c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10212345c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102123628; end: 102123687; -[SCSCContextPostSnapFeedScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102123628(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e59ef0,0);
  *(undefined8 *)(param_1 + _DAT_112e59ef8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102123688; end: 1021236bb;  */

void FUN_102123688(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021236bc; end: 1021236f3; -[SCSCContextPostSnapFeedScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021236bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e59ef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e59ef8));
  return;
}



/* Entry: 1021236f4; end: 102123713;  */

void FUN_1021236f4(void)

{
  func_0x000107c61168(&PTR_PTR_11281f2e8);
  return;
}



/* Entry: 102123714; end: 10212375f;  */

void FUN_102123714(undefined8 param_1)

{
  func_0x0001000285a8(0x112e59f28,&UNK_10da5ee80);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102123760,param_1);
  return;
}



/* Entry: 102123760; end: 1021237c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102123760(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102123990();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e59f30) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021237c8; end: 102123813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021237c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e59f30) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102123814; end: 10212392b; -[_TtC31SCContextPostSnapFeedScopeProxy34SCContextPostSnapFeedScopeServices buildWithViewContainer:paramsObservable:baseViewController:source:actionHandlerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102123814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126a9eb8;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_7);
  func_0x000107c61174();
  func_0x000107c494e0(puVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_68[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10212392c; end: 10212395f;  */

void FUN_10212392c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102123960; end: 10212398f; -[_TtC31SCContextPostSnapFeedScopeProxy34SCContextPostSnapFeedScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102123960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e59f30));
  return;
}



/* Entry: 102123990; end: 1021239af;  */

void FUN_102123990(void)

{
  func_0x000107c61168(&PTR_PTR_11281f3a8);
  return;
}



/* Entry: 1021239b0; end: 102123a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021239b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102123da4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e59f80) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}


