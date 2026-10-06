/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016b8684; end: 1016b868b; -[_TtC15SCSnapMeSticker17SnapMeStickerView shouldReceiveTapsViaStickerContainer] */

undefined8 FUN_1016b8684(void)

{
  return 0;
}



/* Entry: 1016b868c; end: 1016b873f; -[_TtC15SCSnapMeSticker17SnapMeStickerView tappableElementBounds] */

void FUN_1016b868c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d91a8;
  func_0x000107c610f8();
  func_0x000107c461f0(0x3fb999999999999a,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,
                      0x3fe0000000000000);
  puVar2 = puVar1;
  FUN_1016b4864();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  uVar3 = 0;
  FUN_1016b8824(0,0x112dc0158,&PTR_PTR_1126d91a8);
  puVar1 = puVar2;
  func_0x000107c5fc48(puVar2,uVar3);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016b8740; end: 1016b8803; -[_TtC15SCSnapMeSticker17SnapMeStickerView updateWithInfoFromStickerView:] */

/* WARNING: Possible PIC construction at 0x0001016b87b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b87cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b87bc) */
/* WARNING: Removing unreachable block (ram,0x0001016b87d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b8740(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = param_3;
  func_0x000107c61480(param_3,uVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_11302c868);
    uVar1 = uVar3;
    func_0x000107c61174(uVar3);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    FUN_1016b75cc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1016b8804; end: 1016b8823;  */

void FUN_1016b8804(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5ff8);
  return;
}



/* Entry: 1016b8824; end: 1016b8863;  */

void FUN_1016b8824(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016b8864; end: 1016b888b;  */

void FUN_1016b8864(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001016b886c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1016b888c; end: 1016b88c3;  */

void FUN_1016b888c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016b88c4; end: 1016b88cb;  */

void FUN_1016b88c4(long param_1,long param_2)

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



/* Entry: 1016b88cc; end: 1016b8937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b88cc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1016b8cc0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112dc02e0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1016b8938; end: 1016b89a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b8938(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc02e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016b89a4; end: 1016b8a03; -[_TtC38AddFriendsScopedFactoryServiceProvider26SCAddFriendsScopedServices init] */

void FUN_1016b89a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsScopedFactoryServiceProvider.SCAddFriendsScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b89d0);
  (*pcVar1)();
}



/* Entry: 1016b8a04; end: 1016b8a13; -[_TtC38AddFriendsScopedFactoryServiceProvider26SCAddFriendsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b8a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc02e0));
  return;
}



/* Entry: 1016b8a14; end: 1016b8a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b8a14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f7300;
  func_0x000107c613fc(&UNK_1103f7300,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1016b8d9c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016b8a80; end: 1016b8b1b;  */

void FUN_1016b8a80(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103f7210;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103f7210;
  return;
}



/* Entry: 1016b8b1c; end: 1016b8b53;  */

void FUN_1016b8b1c(long *param_1)

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



/* Entry: 1016b8b54; end: 1016b8b5b;  */

undefined8 FUN_1016b8b54(void)

{
  return 0x1b;
}



/* Entry: 1016b8b5c; end: 1016b8c8f;  */

void FUN_1016b8b5c(undefined8 *param_1)

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
  puVar1 = &UNK_1103f7328;
  func_0x000107c613fc(&UNK_1103f7328,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1016b8d74;
  func_0x00010058fa64(FUN_1016b8d74,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1016b8c90; end: 1016b8cbf;  */

undefined ** FUN_1016b8c90(void)

{
  return &PTR_DAT_11300a298;
}



/* Entry: 1016b8cc0; end: 1016b8cdf;  */

void FUN_1016b8cc0(void)

{
  func_0x000107c61168(&PTR_PTR_1127e61b8);
  return;
}



/* Entry: 1016b8ce0; end: 1016b8d2f;  */

undefined1  [16] FUN_1016b8ce0(void)

{
  return ZEXT816(0x1103f7260);
}



/* Entry: 1016b8d30; end: 1016b8d73;  */

void FUN_1016b8d30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc0348 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a78d8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dc0348 = puVar1;
  return;
}



/* Entry: 1016b8d74; end: 1016b8d9b;  */

void FUN_1016b8d74(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1016b8d9c; end: 1016b8daf;  */

void FUN_1016b8d9c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1016b8db0; end: 1016b90ab;  */

void FUN_1016b8db0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112dc0360,&UNK_10d97c778);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1016b9e0c();
  func_0x000100082720("AddFriendsScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112dc0368,&UNK_10d97c780);
  puVar3 = &UNK_1103f7388;
  func_0x000107c613fc(&UNK_1103f7388,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x1016b90b4;
  func_0x0001000823a8(0x1016b90b4,puVar3);
  func_0x000100082720("SCNotificationExperienceAddFriendsEntryPointWrapperServiceProvider",0x42,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1016b8b1c;
  func_0x0001000823a8(FUN_1016b8b1c,0);
  func_0x000100082720("SCAddFriendsScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112dc0370,&UNK_10d97c790);
  puVar3 = &UNK_1103f73b0;
  func_0x000107c613fc(&UNK_1103f73b0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar9);
  uVar5 = 0x1016b90bc;
  func_0x0001000823a8(0x1016b90bc,puVar3);
  func_0x000100082720("SCAddFriendsScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112dc02e8,&UNK_10d97c540);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1016b90c8;
  func_0x0001000823a8(0x1016b90c8,uVar5);
  func_0x000100082720("SCAddFriendsScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112dc02d8,&UNK_10d97c530);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1016b90d0;
  func_0x0001000823a8(0x1016b90d0,uVar6);
  func_0x000100082720("SCAddFriendsScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103f73d8;
  func_0x000107c613fc(&UNK_1103f73d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1016b9104;
  func_0x0001000823a8(FUN_1016b9104,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCAddFriendsScopeEntryPointProvider",0x23,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1016b90ac; end: 1016b90d7;  */

void FUN_1016b90ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112dc0360,&UNK_10d97c778);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1016b9e0c();
  func_0x000100082720("AddFriendsScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112dc0368,&UNK_10d97c780);
  puVar3 = &UNK_1103f7388;
  func_0x000107c613fc(&UNK_1103f7388,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x1016b90b4;
  func_0x0001000823a8(0x1016b90b4,puVar3);
  func_0x000100082720("SCNotificationExperienceAddFriendsEntryPointWrapperServiceProvider",0x42,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1016b8b1c;
  func_0x0001000823a8(FUN_1016b8b1c,0);
  func_0x000100082720("SCAddFriendsScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112dc0370,&UNK_10d97c790);
  puVar3 = &UNK_1103f73b0;
  func_0x000107c613fc(&UNK_1103f73b0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar9);
  uVar5 = 0x1016b90bc;
  func_0x0001000823a8(0x1016b90bc,puVar3);
  func_0x000100082720("SCAddFriendsScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112dc02e8,&UNK_10d97c540);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1016b90c8;
  func_0x0001000823a8(0x1016b90c8,uVar5);
  func_0x000100082720("SCAddFriendsScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112dc02d8,&UNK_10d97c530);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1016b90d0;
  func_0x0001000823a8(0x1016b90d0,uVar6);
  func_0x000100082720("SCAddFriendsScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103f73d8;
  func_0x000107c613fc(&UNK_1103f73d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1016b9104;
  func_0x0001000823a8(FUN_1016b9104,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCAddFriendsScopeEntryPointProvider",0x23,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1016b90d8; end: 1016b9103;  */

void FUN_1016b90d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016b9104; end: 1016b910b;  */

void FUN_1016b9104(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103f7210;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103f7210;
  return;
}



/* Entry: 1016b910c; end: 1016b928f;  */

void FUN_1016b910c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_1016b9518();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  puVar1 = PTR_PTR_1126a78e0;
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar3 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar4 = 0x6e65697246646461;
  func_0x000107c5fadc(0x6e65697246646461,0xef65706f63537364);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 1016b9290; end: 1016b93df;  */

long FUN_1016b9290(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a78e0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x6e65697246646461;
  func_0x000107c5fadc(0x6e65697246646461,0xef65706f63537364);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 1016b93e0; end: 1016b940b;  */

void FUN_1016b93e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016b940c; end: 1016b9413;  */

undefined8 FUN_1016b940c(void)

{
  return 0x1b;
}



/* Entry: 1016b9414; end: 1016b9497;  */

void FUN_1016b9414(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1016b9558,param_2,FUN_1016b955c,param_2,FUN_1016b9584,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1016b9498; end: 1016b94e7;  */

undefined8 FUN_1016b9498(void)

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



/* Entry: 1016b94e8; end: 1016b9517;  */

void FUN_1016b94e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1103f73f0;
  return;
}



/* Entry: 1016b9518; end: 1016b9537;  */

void FUN_1016b9518(void)

{
  func_0x000107c61168(&PTR_PTR_112dc03e0);
  return;
}



/* Entry: 1016b9538; end: 1016b955b;  */

undefined1  [16] FUN_1016b9538(void)

{
  return ZEXT816(0x1103f7430);
}



/* Entry: 1016b955c; end: 1016b9583;  */

void FUN_1016b955c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1016b9584; end: 1016b958b;  */

undefined8 FUN_1016b9584(void)

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



/* Entry: 1016b958c; end: 1016b95c7;  */

void FUN_1016b958c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1016b95c8();
  func_0x0001000a7f38("SCAddFriendsScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1016b95c8; end: 1016b97b3;  */

void FUN_1016b95c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110710288;
  ppuVar4 = &PTR_DAT_11300a298;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1103f7480;
  func_0x000107c613fc(&UNK_1103f7480,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112dc0448;
  func_0x0001000285a8(0x112dc0448,&UNK_10d97c908);
  func_0x0001000a6ee8(&UNK_1103f7638,"AddFriendsScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_1016b97b4,puVar2,uVar3,&UNK_1103f7638,&PTR_DAT_112dc04d8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1103f74a8;
  func_0x000107c613fc(&UNK_1103f74a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1103f72a0,"SCAddFriendsScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_1016b989c,puVar2,uVar3,&UNK_1103f72a0,&PTR_DAT_112dc02f0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1103f7430,
                      "SCNotificationExperienceAddFriendsEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4f,2,FUN_1016b9918,param_4,uVar3,&UNK_1103f7430,&PTR_DAT_112dc0378);
  func_0x000107c61574(param_4);
  uVar3 = 0x112dc0450;
  func_0x0001000285a8(0x112dc0450,&UNK_10d97c910);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1016b97b4; end: 1016b97f3;  */

void FUN_1016b97b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1016b9ef0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AddFriendsScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1016b97f4; end: 1016b989b;  */

void FUN_1016b97f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103f74d0;
  func_0x000107c613fc(&UNK_1103f74d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1016b9954;
  func_0x0001000823a8(FUN_1016b9954,puVar1);
  func_0x000100082720("SCAddFriendsScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1016b989c; end: 1016b98a3;  */

void FUN_1016b989c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1103f74d0;
  func_0x000107c613fc(&UNK_1103f74d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1016b9954;
  func_0x0001000823a8(FUN_1016b9954,puVar3);
  func_0x000100082720("SCAddFriendsScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1016b98a4; end: 1016b9917;  */

void FUN_1016b98a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1016b9920;
  func_0x0001000823a8(0x1016b9920,param_3);
  func_0x000100082720("SCNotificationExperienceAddFriendsEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x54,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1016b9918; end: 1016b9927;  */

void FUN_1016b9918(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1016b9920;
  func_0x0001000823a8();
  func_0x000100082720("SCNotificationExperienceAddFriendsEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x54,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1016b9928; end: 1016b9953;  */

void FUN_1016b9928(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016b9954; end: 1016b995b;  */

void FUN_1016b9954(undefined8 *param_1)

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
  puVar1 = &UNK_1103f7328;
  func_0x000107c613fc(&UNK_1103f7328,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1016b8d74;
  func_0x00010058fa64(FUN_1016b8d74,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1016b995c; end: 1016b99e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1016b995c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1016b9d1c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112dc0458) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112dc0460) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b99e4);
  (*pcVar1)();
}



/* Entry: 1016b99e4; end: 1016b9a43; -[_TtC26AddFriendsScopeGraphBridge41AddFriendsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1016b99e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsScopeGraphBridge.AddFriendsScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b9a10);
  (*pcVar1)();
}



/* Entry: 1016b9a44; end: 1016b9a7b; -[_TtC26AddFriendsScopeGraphBridge41AddFriendsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016b9a60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b9a64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b9a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc0458));
  return;
}



/* Entry: 1016b9a7c; end: 1016b9aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b9a7c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112dc0460),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112dc0458));
  return;
}



/* Entry: 1016b9aa4; end: 1016b9ac3;  */

void FUN_1016b9aa4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e6278);
  return;
}



/* Entry: 1016b9ac4; end: 1016b9b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1016b9ac4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc0490) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112dc0498);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016b9b4c);
  (*pcVar2)();
}



/* Entry: 1016b9b4c; end: 1016b9c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016b9b4c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc0490);
  *(undefined **)(unaff_x20 + _DAT_112dc0490) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc0498);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dc0498))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1103f7598;
  func_0x000107c613fc(&UNK_1103f7598,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1016b9c38,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1016b9c34; end: 1016b9c3f;  */

void FUN_1016b9c34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1016b9c40; end: 1016b9c9f; -[_TtC26AddFriendsScopeGraphBridge41SCAddFriendsScopedServicesSaberEntryPoint init] */

void FUN_1016b9c40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsScopeGraphBridge.SCAddFriendsScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b9c6c);
  (*pcVar1)();
}



/* Entry: 1016b9ca0; end: 1016b9cd7; -[_TtC26AddFriendsScopeGraphBridge41SCAddFriendsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b9ca0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dc0498));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc0490));
  return;
}



/* Entry: 1016b9cd8; end: 1016b9cdb;  */

void FUN_1016b9cd8(void)

{
  return;
}



/* Entry: 1016b9cdc; end: 1016b9cfb;  */

void FUN_1016b9cdc(void)

{
  FUN_1016b9b4c();
  return;
}



/* Entry: 1016b9cfc; end: 1016b9d1b;  */

void FUN_1016b9cfc(void)

{
  func_0x000107c61168(&PTR_PTR_1127e6340);
  return;
}



/* Entry: 1016b9d1c; end: 1016b9deb;  */

undefined8 FUN_1016b9d1c(void)

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
  
  func_0x000107c61428(0x112dc04c8,&uStack_40,0x20,0);
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
    FUN_1016b9dec();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1016b9dec; end: 1016b9e0b;  */

void FUN_1016b9dec(void)

{
  func_0x000107c61168(&PTR_PTR_1127e6408);
  return;
}



/* Entry: 1016b9e0c; end: 1016b9e77;  */

void FUN_1016b9e0c(void)

{
  func_0x0001000285a8(0x112dc04d0,&UNK_10d97c9c8);
  func_0x0001000823a8(0x1016b9e4c,0);
  return;
}



/* Entry: 1016b9e78; end: 1016b9eb3; -[_TtC26AddFriendsScopeGraphBridge34AddFriendsScopeGraphBridgeServices init] */

void FUN_1016b9e78(undefined8 param_1)

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



/* Entry: 1016b9eb4; end: 1016b9ee7;  */

void FUN_1016b9eb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016b9ee8; end: 1016b9eef;  */

undefined8 FUN_1016b9ee8(void)

{
  return 0x1b;
}



/* Entry: 1016b9ef0; end: 1016ba067;  */

void FUN_1016b9ef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103f75e0;
  func_0x000107c613fc(&UNK_1103f75e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1016ba068,puVar1);
  return;
}



/* Entry: 1016ba068; end: 1016ba06f;  */

void FUN_1016ba068(undefined8 *param_1)

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
  func_0x000107c61428(0x112dc04c8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112dc04c8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1103f7678;
  func_0x000107c613fc(&UNK_1103f7678,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1016ba11c;
  func_0x00010058fa64(0x1016ba11c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1016ba070; end: 1016ba0cb;  */

void FUN_1016ba070(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112dc04c8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112dc04c8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1016ba0cc; end: 1016ba123;  */

undefined ** FUN_1016ba0cc(void)

{
  return &PTR_DAT_11300a298;
}



/* Entry: 1016ba124; end: 1016ba16b; -[SCAddFriendsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dc0528;
  func_0x000107c61428(param_1 + _DAT_112dc0528,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016ba16c; end: 1016ba1c3; -[SCAddFriendsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc0528;
  func_0x000107c61428(param_1 + _DAT_112dc0528,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1016ba1c4; end: 1016ba20b; -[SCAddFriendsScopeGraphBridgeSaberEntryPoint addFriendsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba1c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dc0530;
  func_0x000107c61428(param_1 + _DAT_112dc0530,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1016ba20c; end: 1016ba26f; -[SCAddFriendsScopeGraphBridgeSaberEntryPoint setAddFriendsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc0530;
  func_0x000107c61428(param_1 + _DAT_112dc0530,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1016ba270; end: 1016ba3a3;  */

/* WARNING: Possible PIC construction at 0x0001016ba328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016ba344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016ba360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ba32c) */
/* WARNING: Removing unreachable block (ram,0x0001016ba348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba270(void)

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
  func_0x000107c3d6e4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1016b9aa4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1016b9d1c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ba3a4);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112dc0458) = lVar5;
    *(long *)(lVar4 + _DAT_112dc0460) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1016ba3a4; end: 1016ba3cb; -[SCAddFriendsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1016ba3a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1016ba270();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016ba3cc; end: 1016ba40f; -[SCAddFriendsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1016ba3cc(undefined8 param_1)

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



/* Entry: 1016ba410; end: 1016ba5a7;  */

void FUN_1016ba410(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef1049490)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010efb6b70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AddFriendsScopeGraphBridge/SCAddFriendsScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4c,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ba5a8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52494();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1016ba5a8; end: 1016ba653; -[SCAddFriendsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1016ba5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1016ba410(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1016ba654; end: 1016ba6bf; -[SCAddFriendsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba654(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dc0528,0);
  *(undefined8 *)(param_1 + _DAT_112dc0530) = 0;
  *(undefined8 *)(param_1 + _DAT_112dc0538) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016ba6c0; end: 1016ba6f3;  */

void FUN_1016ba6c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016ba6f4; end: 1016ba73b; -[SCAddFriendsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016ba720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ba724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba6f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dc0528);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc0530));
  return;
}



/* Entry: 1016ba73c; end: 1016ba75b;  */

void FUN_1016ba73c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e64b8);
  return;
}



/* Entry: 1016ba75c; end: 1016ba7a3; -[SCSCAddFriendsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba75c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dc0568;
  func_0x000107c61428(param_1 + _DAT_112dc0568,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016ba7a4; end: 1016ba7fb; -[SCSCAddFriendsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc0568;
  func_0x000107c61428(param_1 + _DAT_112dc0568,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1016ba7fc; end: 1016ba8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba7fc(undefined8 param_1,long param_2)

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
    FUN_1016b9cfc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112dc0490) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016ba8d4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112dc0498);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dc0570);
    *(long **)(unaff_x20 + _DAT_112dc0570) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1016ba8d4; end: 1016ba8fb; -[SCSCAddFriendsScopedServicesSaberEntryPoint begin] */

void FUN_1016ba8d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1016ba7fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016ba8fc; end: 1016baa73;  */

/* WARNING: Possible PIC construction at 0x0001016ba964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016ba9fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ba968) */
/* WARNING: Removing unreachable block (ram,0x0001016baa00) */
/* WARNING: Removing unreachable block (ram,0x0001016baa18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ba8fc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc0570);
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



/* Entry: 1016baa74; end: 1016baa7b;  */

void FUN_1016baa74(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1016baa7c; end: 1016baaaf; -[SCSCAddFriendsScopedServicesSaberEntryPoint end] */

void FUN_1016baa7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1016ba8fc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016baab0; end: 1016babcf;  */

void FUN_1016baab0(long param_1,long param_2,long param_3)

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
                        "AddFriendsScopeGraphBridge/SCSCAddFriendsScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016babd0);
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



/* Entry: 1016babd0; end: 1016bac7b; -[SCSCAddFriendsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1016babd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1016baab0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1016bac7c; end: 1016bacdb; -[SCSCAddFriendsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bac7c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dc0568,0);
  *(undefined8 *)(param_1 + _DAT_112dc0570) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016bacdc; end: 1016bad0f;  */

void FUN_1016bacdc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016bad10; end: 1016bad47; -[SCSCAddFriendsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bad10(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dc0568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc0570));
  return;
}



/* Entry: 1016bad48; end: 1016bad67;  */

void FUN_1016bad48(void)

{
  func_0x000107c61168(&PTR_PTR_1127e6580);
  return;
}



/* Entry: 1016bad68; end: 1016bae27;  */

void FUN_1016bad68(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  puVar1 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  func_0x000107c610f8(PTR__OBJC_CLASS___CNContactStore_1126b1900);
  func_0x000107c453e4();
  uVar2 = uStack_48;
  func_0x000107c444a4(uStack_48);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126a78e8;
  func_0x000107c610f8(PTR_PTR_1126a78e8);
  func_0x000107c46bb4();
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126a78f0;
  func_0x000107c610f8();
  func_0x000107c4603c();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uStack_48);
  *param_1 = puVar4;
  return;
}



/* Entry: 1016bae28; end: 1016bae57;  */

undefined1  [16] FUN_1016bae28(void)

{
  return ZEXT816(0x1103f7758);
}



/* Entry: 1016bae58; end: 1016bae87;  */

void FUN_1016bae58(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1016bae88; end: 1016baf1f;  */

/* WARNING: Possible PIC construction at 0x0001016baeec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016baef0) */

void FUN_1016bae88(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b84b0;
  func_0x000107c61168();
  func_0x000107c43bbc();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c452f8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016baf20);
      (*pcVar1)();
    }
    func_0x000107c45314();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}


