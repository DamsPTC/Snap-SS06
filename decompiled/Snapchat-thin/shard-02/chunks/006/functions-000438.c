/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fe3b24; end: 101fe3b2b;  */

undefined8 FUN_101fe3b24(void)

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



/* Entry: 101fe3b2c; end: 101fe3b93;  */

void FUN_101fe3b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101fe3ea8();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101fe3d54();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fe3b94; end: 101fe3bdb;  */

undefined8 FUN_101fe3b94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101fe3d54(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101fe3bdc; end: 101fe3c0f;  */

void FUN_101fe3bdc(void)

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



/* Entry: 101fe3c10; end: 101fe3c63;  */

void FUN_101fe3c10(undefined8 *param_1)

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



/* Entry: 101fe3c64; end: 101fe3c6b;  */

undefined8 FUN_101fe3c64(void)

{
  return 0x1b;
}



/* Entry: 101fe3c6c; end: 101fe3cef;  */

void FUN_101fe3c6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fe3ef8,param_2,FUN_101fe3efc,param_2,FUN_101fe3f24,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fe3cf0; end: 101fe3d3f;  */

undefined8 FUN_101fe3cf0(void)

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



/* Entry: 101fe3d40; end: 101fe3d53;  */

void FUN_101fe3d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104b69c0;
  return;
}



/* Entry: 101fe3d54; end: 101fe3e8b;  */

void FUN_101fe3d54(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9d58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f052010);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0x7365636976726573;
  func_0x000107c5fadc(0x7365636976726573,0xef7265736f707845);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x20) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fe3e8c);
  (*pcVar1)();
}



/* Entry: 101fe3e8c; end: 101fe3ea7;  */

undefined ** FUN_101fe3e8c(void)

{
  return &PTR_DAT_113066ac0;
}



/* Entry: 101fe3ea8; end: 101fe3ec7;  */

void FUN_101fe3ea8(void)

{
  func_0x000107c61168(&PTR_PTR_112e4d600);
  return;
}



/* Entry: 101fe3ec8; end: 101fe3efb;  */

undefined1  [16] FUN_101fe3ec8(void)

{
  return ZEXT816(0x1104b6a00);
}



/* Entry: 101fe3efc; end: 101fe3f23;  */

void FUN_101fe3efc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fe3f24; end: 101fe3f2b;  */

undefined8 FUN_101fe3f24(void)

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



/* Entry: 101fe3f2c; end: 101fe4243;  */

void FUN_101fe3f2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d460;
  ppuVar4 = &PTR_DAT_113066ac0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104b6a70;
  func_0x000107c613fc(&UNK_1104b6a70,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0x112e4d670;
  func_0x0001000285a8(0x112e4d670,&UNK_10da47dc0);
  func_0x0001000a6ee8(&UNK_1104b7108,"DiscoverFeedScopeGraphBridgeScopeInitializationPluginKey",0x38
                      ,2,FUN_101fe4244,puVar2,uVar3,&UNK_1104b7108,&PTR_DAT_112e4d7c8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104b6880,
                      "FriendStoriesSDNPrefetchImplEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,FUN_101fe4284,param_4,uVar3,&UNK_1104b6880,&PTR_DAT_112e4cfa0);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1104b6900,
                      "NonfriendStoriesSDNPrefetchImplEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4c,2,0x101fe42b0,param_5,uVar3,&UNK_1104b6900,&PTR_DAT_112e4d088);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1104b6980,"SCDiscoverFeedEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,0x101fe42dc,param_6,uVar3,&UNK_1104b6980,&PTR_DAT_112e4d1e0);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1104b6a20,
                      "SCDiscoverFeedMetricServicesEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,FUN_101fe438c,param_7,uVar3,&UNK_1104b6a20,&PTR_DAT_112e4d598);
  func_0x000107c61574(param_7);
  puVar2 = &UNK_1104b6a98;
  func_0x000107c613fc(&UNK_1104b6a98,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_1104b6650,"SCDiscoverFeedScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_101fe4460,puVar2,uVar3,&UNK_1104b6650,&PTR_DAT_112e4cf00);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4d678;
  func_0x0001000285a8(0x112e4d678,&UNK_10da47dc8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCDiscoverFeedScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101fe4244; end: 101fe4283;  */

void FUN_101fe4244(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101fe5e2c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DiscoverFeedScopeGraphBridgeScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fe4284; end: 101fe4307;  */

void FUN_101fe4284(void)

{
  FUN_101fe4308();
  return;
}



/* Entry: 101fe4308; end: 101fe438b;  */

void FUN_101fe4308(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 101fe438c; end: 101fe43b7;  */

void FUN_101fe438c(void)

{
  FUN_101fe4308();
  return;
}



/* Entry: 101fe43b8; end: 101fe445f;  */

void FUN_101fe43b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b6ac0;
  func_0x000107c613fc(&UNK_1104b6ac0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101fe4494;
  func_0x0001000823a8(FUN_101fe4494,puVar1);
  func_0x000100082720("SCDiscoverFeedScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101fe4460; end: 101fe4467;  */

void FUN_101fe4460(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b6ac0;
  func_0x000107c613fc(&UNK_1104b6ac0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101fe4494;
  func_0x0001000823a8(FUN_101fe4494,puVar3);
  func_0x000100082720("SCDiscoverFeedScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101fe4468; end: 101fe4493;  */

void FUN_101fe4468(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fe4494; end: 101fe44bb;  */

void FUN_101fe4494(undefined8 *param_1)

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
  puVar1 = &UNK_1104b66d8;
  func_0x000107c613fc(&UNK_1104b66d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fda384;
  func_0x00010058fa64(FUN_101fda384,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fe44bc; end: 101fe49cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101fe44bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

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
  FUN_101fe4ebc();
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
    uStack_78 = param_18;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112e4d680) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e4d688) = param_19;
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
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fe49cc);
  (*pcVar2)();
}



/* Entry: 101fe49cc; end: 101fe4a2b; -[_TtC28DiscoverFeedScopeGraphBridge43DiscoverFeedScopeGraphBridgeSaberEntryPoint init] */

void FUN_101fe49cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedScopeGraphBridge.DiscoverFeedScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fe49f8);
  (*pcVar1)();
}



/* Entry: 101fe4a2c; end: 101fe4a63; -[_TtC28DiscoverFeedScopeGraphBridge43DiscoverFeedScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fe4a48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fe4a4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe4a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4d680));
  return;
}



/* Entry: 101fe4a64; end: 101fe4a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe4a64(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4d688),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4d680));
  return;
}



/* Entry: 101fe4a8c; end: 101fe4aab;  */

void FUN_101fe4a8c(void)

{
  func_0x000107c61168(&PTR_PTR_112813718);
  return;
}



/* Entry: 101fe4aac; end: 101fe4b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fe4aac(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e4d790);
  *(undefined8 *)(unaff_x20 + _DAT_112e4d6b8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d6c0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101fe4b48; end: 101fe4ba7; -[_TtC28DiscoverFeedScopeGraphBridge43SCDiscoverFeedMetricServicesSaberEntryPoint init] */

void FUN_101fe4b48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedScopeGraphBridge.SCDiscoverFeedMetricServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fe4b74);
  (*pcVar1)();
}



/* Entry: 101fe4ba8; end: 101fe4c3b; -[_TtC28DiscoverFeedScopeGraphBridge43SCDiscoverFeedMetricServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe4ba8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e4d6b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4d6c0));
  return;
}



/* Entry: 101fe4c3c; end: 101fe4c43;  */

undefined8 FUN_101fe4c3c(void)

{
  return 0;
}



/* Entry: 101fe4c44; end: 101fe4c63;  */

void FUN_101fe4c44(void)

{
  func_0x000107c61168(&PTR_PTR_1128137e0);
  return;
}



/* Entry: 101fe4c64; end: 101fe4ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fe4c64(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4d6f0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4d6f8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fe4cec);
  (*pcVar2)();
}



/* Entry: 101fe4cec; end: 101fe4dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fe4cec(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4d6f0);
  *(undefined **)(unaff_x20 + _DAT_112e4d6f0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4d6f8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4d6f8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b6c00;
  func_0x000107c613fc(&UNK_1104b6c00,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101fe4dd8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101fe4dd4; end: 101fe4ddf;  */

void FUN_101fe4dd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fe4de0; end: 101fe4e3f; -[_TtC28DiscoverFeedScopeGraphBridge43SCDiscoverFeedScopedServicesSaberEntryPoint init] */

void FUN_101fe4de0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedScopeGraphBridge.SCDiscoverFeedScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fe4e0c);
  (*pcVar1)();
}



/* Entry: 101fe4e40; end: 101fe4e77; -[_TtC28DiscoverFeedScopeGraphBridge43SCDiscoverFeedScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe4e40(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4d6f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4d6f0));
  return;
}



/* Entry: 101fe4e78; end: 101fe4e7b;  */

void FUN_101fe4e78(void)

{
  return;
}



/* Entry: 101fe4e7c; end: 101fe4e9b;  */

void FUN_101fe4e7c(void)

{
  FUN_101fe4cec();
  return;
}



/* Entry: 101fe4e9c; end: 101fe4ebb;  */

void FUN_101fe4e9c(void)

{
  func_0x000107c61168(&PTR_PTR_1128138a8);
  return;
}



/* Entry: 101fe4ebc; end: 101fe4f8b;  */

undefined8 FUN_101fe4ebc(void)

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
  
  func_0x000107c61428(0x112e4d728,&uStack_40,0x20,0);
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
    FUN_101fe4f8c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101fe4f8c; end: 101fe4fab;  */

void FUN_101fe4f8c(void)

{
  func_0x000107c61168(&PTR_PTR_112813970);
  return;
}



/* Entry: 101fe4fac; end: 101fe53a3;  */

void FUN_101fe4fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4d730,&UNK_10da47eb8);
  puVar1 = &UNK_1104b6c48;
  func_0x000107c613fc(&UNK_1104b6c48,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  func_0x000107c6157c();
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
  func_0x0001000823a8(FUN_101fe53a4,puVar1);
  return;
}



/* Entry: 101fe53a4; end: 101fe53e7;  */

void FUN_101fe53a4(void)

{
  long unaff_x20;
  
  func_0x000101fe5148(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 101fe53e8; end: 101fe559b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe53e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4d738) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d740) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d748) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d750) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d758) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d760) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d768) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d770) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d778) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d780) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d788) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d790) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d798) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d7a0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d7a8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d7b0) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d7b8) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112e4d7c0) = param_18;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fe559c; end: 101fe55fb; -[_TtC28DiscoverFeedScopeGraphBridge36DiscoverFeedScopeGraphBridgeServices init] */

void FUN_101fe559c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedScopeGraphBridge.DiscoverFeedScopeGraphBridgeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fe55c8);
  (*pcVar1)();
}



/* Entry: 101fe55fc; end: 101fe5773; -[_TtC28DiscoverFeedScopeGraphBridge36DiscoverFeedScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fe5618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fe5638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fe5658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fe5678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fe5698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fe56b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fe56d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fe56f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fe5718: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fe56fc) */
/* WARNING: Removing unreachable block (ram,0x000101fe56dc) */
/* WARNING: Removing unreachable block (ram,0x000101fe56bc) */
/* WARNING: Removing unreachable block (ram,0x000101fe569c) */
/* WARNING: Removing unreachable block (ram,0x000101fe567c) */
/* WARNING: Removing unreachable block (ram,0x000101fe565c) */
/* WARNING: Removing unreachable block (ram,0x000101fe563c) */
/* WARNING: Removing unreachable block (ram,0x000101fe561c) */
/* WARNING: Removing unreachable block (ram,0x000101fe571c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe55fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4d790));
  return;
}



/* Entry: 101fe5774; end: 101fe578f;  */

void FUN_101fe5774(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe6280,param_1);
  return;
}



/* Entry: 101fe5790; end: 101fe57cf;  */

void FUN_101fe5790(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62c4,0);
  return;
}



/* Entry: 101fe57d0; end: 101fe57eb;  */

void FUN_101fe57d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe6288,param_1);
  return;
}



/* Entry: 101fe57ec; end: 101fe582b;  */

void FUN_101fe57ec(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62c8,0);
  return;
}



/* Entry: 101fe582c; end: 101fe5847;  */

void FUN_101fe582c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe6284,param_1);
  return;
}



/* Entry: 101fe5848; end: 101fe5887;  */

void FUN_101fe5848(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62cc,0);
  return;
}



/* Entry: 101fe5888; end: 101fe58a3;  */

void FUN_101fe5888(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fe58a4,param_1);
  return;
}



/* Entry: 101fe58a4; end: 101fe5917;  */

void FUN_101fe58a4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101fe5918; end: 101fe5933;  */

void FUN_101fe5918(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe628c,param_1);
  return;
}



/* Entry: 101fe5934; end: 101fe5973;  */

void FUN_101fe5934(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62d4,0);
  return;
}



/* Entry: 101fe5974; end: 101fe598f;  */

void FUN_101fe5974(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe6290,param_1);
  return;
}



/* Entry: 101fe5990; end: 101fe59cf;  */

void FUN_101fe5990(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62d8,0);
  return;
}



/* Entry: 101fe59d0; end: 101fe59eb;  */

void FUN_101fe59d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe6294,param_1);
  return;
}



/* Entry: 101fe59ec; end: 101fe5a2b;  */

void FUN_101fe59ec(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62dc,0);
  return;
}



/* Entry: 101fe5a2c; end: 101fe5a47;  */

void FUN_101fe5a2c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe6298,param_1);
  return;
}



/* Entry: 101fe5a48; end: 101fe5a87;  */

void FUN_101fe5a48(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62e0,0);
  return;
}



/* Entry: 101fe5a88; end: 101fe5aa3;  */

void FUN_101fe5a88(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe629c,param_1);
  return;
}



/* Entry: 101fe5aa4; end: 101fe5ae3;  */

void FUN_101fe5aa4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62e4,0);
  return;
}



/* Entry: 101fe5ae4; end: 101fe5aff;  */

void FUN_101fe5ae4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe62a0,param_1);
  return;
}



/* Entry: 101fe5b00; end: 101fe5b3f;  */

void FUN_101fe5b00(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62e8,0);
  return;
}



/* Entry: 101fe5b40; end: 101fe5b5b;  */

void FUN_101fe5b40(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe62a4,param_1);
  return;
}



/* Entry: 101fe5b5c; end: 101fe5b9b;  */

void FUN_101fe5b5c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62ec,0);
  return;
}



/* Entry: 101fe5b9c; end: 101fe5bb7;  */

void FUN_101fe5b9c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe62a8,param_1);
  return;
}



/* Entry: 101fe5bb8; end: 101fe5bf7;  */

void FUN_101fe5bb8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62f0,0);
  return;
}



/* Entry: 101fe5bf8; end: 101fe5c13;  */

void FUN_101fe5bf8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe62ac,param_1);
  return;
}



/* Entry: 101fe5c14; end: 101fe5c53;  */

void FUN_101fe5c14(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62f4,0);
  return;
}



/* Entry: 101fe5c54; end: 101fe5c6f;  */

void FUN_101fe5c54(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe62b0,param_1);
  return;
}



/* Entry: 101fe5c70; end: 101fe5caf;  */

void FUN_101fe5c70(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62f8,0);
  return;
}



/* Entry: 101fe5cb0; end: 101fe5ccb;  */

void FUN_101fe5cb0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe62b4,param_1);
  return;
}



/* Entry: 101fe5ccc; end: 101fe5d0b;  */

void FUN_101fe5ccc(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fe62fc,0);
  return;
}



/* Entry: 101fe5d0c; end: 101fe5d27;  */

void FUN_101fe5d0c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe62b8,param_1);
  return;
}



/* Entry: 101fe5d28; end: 101fe5d67;  */

void FUN_101fe5d28(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(FUN_101fe5d68,0);
  return;
}



/* Entry: 101fe5d68; end: 101fe5d7b;  */

void FUN_101fe5d68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 101fe5d7c; end: 101fe5db7;  */

void FUN_101fe5d7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 101fe5db8; end: 101fe5dd3;  */

void FUN_101fe5db8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fe62bc,param_1);
  return;
}



/* Entry: 101fe5dd4; end: 101fe5e23;  */

void FUN_101fe5dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 101fe5e24; end: 101fe5e2b;  */

undefined8 FUN_101fe5e24(void)

{
  return 0x1b;
}



/* Entry: 101fe5e2c; end: 101fe5fa3;  */

void FUN_101fe5e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b6c70;
  func_0x000107c613fc(&UNK_1104b6c70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101fe5fa4,puVar1);
  return;
}



/* Entry: 101fe5fa4; end: 101fe5fab;  */

void FUN_101fe5fa4(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4d728,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4d728,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b7148;
  func_0x000107c613fc(&UNK_1104b7148,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101fe6278;
  func_0x00010058fa64(0x101fe6278,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fe5fac; end: 101fe6007;  */

void FUN_101fe5fac(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4d728,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4d728,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101fe6008; end: 101fe62ff;  */

undefined ** FUN_101fe6008(void)

{
  return &PTR_DAT_113066ac0;
}



/* Entry: 101fe6300; end: 101fe6347; -[SCDiscoverFeedScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe6300(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4d818;
  func_0x000107c61428(param_1 + _DAT_112e4d818,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fe6348; end: 101fe639f; -[SCDiscoverFeedScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe6348(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4d818;
  func_0x000107c61428(param_1 + _DAT_112e4d818,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fe63a0; end: 101fe63e7; -[SCDiscoverFeedScopeGraphBridgeSaberEntryPoint promotedStoryShareScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe63a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4d820;
  func_0x000107c61428(param_1 + _DAT_112e4d820,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fe63e8; end: 101fe63f3; -[SCDiscoverFeedScopeGraphBridgeSaberEntryPoint setPromotedStoryShareScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe63e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4d820;
  func_0x000107c61428(param_1 + _DAT_112e4d820,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fe63f4; end: 101fe643b; -[SCDiscoverFeedScopeGraphBridgeSaberEntryPoint sCAdReportAdInfoScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe63f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4d828;
  func_0x000107c61428(param_1 + _DAT_112e4d828,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fe643c; end: 101fe6447; -[SCDiscoverFeedScopeGraphBridgeSaberEntryPoint setSCAdReportAdInfoScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe643c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4d828;
  func_0x000107c61428(param_1 + _DAT_112e4d828,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fe6448; end: 101fe648f; -[SCDiscoverFeedScopeGraphBridgeSaberEntryPoint sCAdReportHideAdScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe6448(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4d830;
  func_0x000107c61428(param_1 + _DAT_112e4d830,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fe6490; end: 101fe649b; -[SCDiscoverFeedScopeGraphBridgeSaberEntryPoint setSCAdReportHideAdScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe6490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4d830;
  func_0x000107c61428(param_1 + _DAT_112e4d830,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fe649c; end: 101fe64e3; -[SCDiscoverFeedScopeGraphBridgeSaberEntryPoint sCAdReportReportAdScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe649c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4d838;
  func_0x000107c61428(param_1 + _DAT_112e4d838,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fe64e4; end: 101fe64ef; -[SCDiscoverFeedScopeGraphBridgeSaberEntryPoint setSCAdReportReportAdScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fe64e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4d838;
  func_0x000107c61428(param_1 + _DAT_112e4d838,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}


