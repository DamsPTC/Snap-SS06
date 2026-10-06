/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007d4e84; end: 1007d4ecf;  */

void FUN_1007d4e84(undefined8 param_1)

{
  FUN_1000285a8(0x112f5d078,&UNK_10dbb7960);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10336e65c,param_1);
  return;
}



/* Entry: 1007d4ed0; end: 1007d4eef;  */

void FUN_1007d4ed0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1350);
  return;
}



/* Entry: 1007d4ef0; end: 1007d4fab;  */

void FUN_1007d4ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112eea308,&UNK_10db17b18);
  puVar1 = &UNK_110595688;
  func_0x000107c613fc(&UNK_110595688,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1007d5a58,puVar1);
  return;
}



/* Entry: 1007d4fac; end: 1007d4fcb;  */

void FUN_1007d4fac(void)

{
  func_0x000107c61168(&PTR_PTR_112885658);
  return;
}



/* Entry: 1007d4fcc; end: 1007d4fdb;  */

undefined1  [16] FUN_1007d4fcc(void)

{
  return ZEXT816(0x110725710);
}



/* Entry: 1007d4fdc; end: 1007d4ffb;  */

void FUN_1007d4fdc(void)

{
  func_0x000107c61168(&PTR_PTR_112885180);
  return;
}



/* Entry: 1007d4ffc; end: 1007d5003;  */

void FUN_1007d4ffc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_1105944e0;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105944f0;
  return;
}



/* Entry: 1007d5004; end: 1007d509f;  */

void FUN_1007d5004(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_1105944e0;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105944f0;
  return;
}



/* Entry: 1007d50a0; end: 1007d50a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d50a0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = lVar1;
  FUN_100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1007d4fdc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(long *)(lVar4 + _DAT_112ee9348) = lVar1;
  *(undefined8 *)(lVar4 + _DAT_112ee9350) = uStack_38;
  puVar2 = PTR_s_init_1125d9248;
  lStack_48 = lVar4;
  lStack_40 = lVar3;
  func_0x000107c6157c(lVar1);
  plVar5 = &lStack_48;
  func_0x000107c61154(plVar5,puVar2);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1007d50a8; end: 1007d512f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d50a8(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  FUN_100083b20(&uStack_38);
  FUN_1007d4fdc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ee9348) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ee9350) = uStack_38;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c6157c(param_2);
  plVar4 = &lStack_48;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1007d5130; end: 1007d5137;  */

void FUN_1007d5130(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112ee93b8,&UNK_10db16818);
  uVar1 = 0;
  FUN_1005c8564();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007d5138; end: 1007d51a7;  */

void FUN_1007d5138(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112ee93b8,&UNK_10db16818);
  uVar1 = 0;
  FUN_1005c8564();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007d51a8; end: 1007d5687;  */

void FUN_1007d51a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110725710;
  ppuVar4 = &PTR_DAT_113035488;
  uVar5 = param_4;
  FUN_1000a3aa4();
  puVar2 = &UNK_110594c10;
  func_0x000107c613fc(&UNK_110594c10,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0x112ee9b18;
  FUN_1000285a8(0x112ee9b18,&UNK_10db17448);
  FUN_1000a6ee8(&UNK_110595708,"CameraFeatureScopeGraphBridgeScopeInitializationPluginKey",0x39,2,
                FUN_1007d58f4,puVar2,uVar3,&UNK_110595708,&PTR_DAT_112eea338);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110594c38;
  func_0x000107c613fc(&UNK_110594c38,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000a6ee8(&UNK_110595378,"CameraSuppressionScopeInitializationPluginKey",0x2d,2,FUN_1007d5c64,
                puVar2,uVar3,&UNK_110595378,&PTR_DAT_112ee9cc8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_8);
  FUN_1000a6ee8(&UNK_110594880,
                "LensDeeplinkSendToControllingServiceProviderWrapperScopeInitializationPluginKey",
                0x4f,2,FUN_1007d6604,param_8,uVar3,&UNK_110594880,&PTR_DAT_112ee9430);
  func_0x000107c61574(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000a6ee8(&UNK_110594900,
                "LensFullScreenUXServiceCameraUIEntryPointWrapperScopeInitializationPluginKey",0x4c,
                2,FUN_1007d66c8,param_9,uVar3,&UNK_110594900,&PTR_DAT_112ee9508);
  func_0x000107c61574(param_9);
  puVar2 = &UNK_110594c60;
  func_0x000107c613fc(&UNK_110594c60,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_10;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_10);
  FUN_1000a6ee8(&UNK_110594588,"SCCameraFeatureScopedServicesScopeInitializationPluginKey",0x39,2,
                0x1007d6ec0,puVar2,uVar3,&UNK_110594588,&PTR_DAT_112ee9368);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_11);
  FUN_1000a6ee8(&UNK_110594980,
                "SCCameraSettingsSnapshotLoggerEntryPointWrapperScopeInitializationPluginKey",0x4b,2
                ,FUN_1007d70d8,param_11,uVar3,&UNK_110594980,&PTR_DAT_112ee95e0);
  func_0x000107c61574(param_11);
  func_0x000107c6157c(param_12);
  FUN_1000a6ee8(&UNK_110594a20,
                "SCLegacyCameraResourceServicesEntryPointWrapperScopeInitializationPluginKey",0x4b,2
                ,FUN_1007d7a0c,param_12,uVar3,&UNK_110594a20,&PTR_DAT_112ee96d0);
  func_0x000107c61574(param_12);
  func_0x000107c6157c(param_13);
  FUN_1000a6ee8(&UNK_110594aa0,
                "SCLensProcessingCameraEventsEntryPointWrapperScopeInitializationPluginKey",0x49,2,
                FUN_1007d7ad0,param_13,uVar3,&UNK_110594aa0,&PTR_DAT_112ee9800);
  func_0x000107c61574(param_13);
  func_0x000107c6157c(param_14);
  FUN_1000a6ee8(&UNK_110594b20,
                "SCSponsoredLensOnCameraWarmupEntryPointWrapperScopeInitializationPluginKey",0x4a,2,
                FUN_1007d957c,param_14,uVar3,&UNK_110594b20,&PTR_DAT_112ee9938);
  func_0x000107c61574(param_14);
  func_0x000107c6157c(param_15);
  FUN_1000a6ee8(&UNK_110594bc0,
                "WebLensRetentionStoreVendingServiceProviderWrapperScopeInitializationPluginKey",
                0x4e,2,FUN_1007da880,param_15,uVar3,&UNK_110594bc0,&PTR_DAT_112ee9a48);
  func_0x000107c61574(param_15);
  uVar3 = 0x112ee9b20;
  FUN_1000285a8(0x112ee9b20,&UNK_10db17450);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  FUN_1000a7f38("SCCameraFeatureScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1007d5688; end: 1007d56c3;  */

void FUN_1007d5688(void)

{
  long unaff_x20;
  
  FUN_1007d51a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1007d56c4; end: 1007d578b;  */

void FUN_1007d56c4(void)

{
  return;
}



/* Entry: 1007d578c; end: 1007d5817;  */

void FUN_1007d578c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d5818; end: 1007d5873;  */

undefined8 FUN_1007d5818(void)

{
  return 0x1b;
}



/* Entry: 1007d5874; end: 1007d58f3;  */

void FUN_1007d5874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105956b0;
  func_0x000107c613fc(&UNK_1105956b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1007d5934,puVar1);
  return;
}



/* Entry: 1007d58f4; end: 1007d5933;  */

void FUN_1007d58f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1007d5874(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100082720("CameraFeatureScopeGraphBridgeScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007d5934; end: 1007d593b;  */

void FUN_1007d5934(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112eea300,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112eea300,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110595748;
  func_0x000107c613fc(&UNK_110595748,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102ac32f4;
  FUN_10058fa64(&UNK_102ac32f4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1007d593c; end: 1007d5a33;  */

void FUN_1007d593c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112eea300,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112eea300,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110595748;
  func_0x000107c613fc(&UNK_110595748,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102ac32f4;
  FUN_10058fa64(&UNK_102ac32f4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1007d5a34; end: 1007d5a57;  */

void FUN_1007d5a34(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d5a58; end: 1007d5a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d5a58(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_1007d4fac();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112eea310) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112eea318) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112eea320) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112eea328) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112eea330) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1007d5a68; end: 1007d5b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d5a68(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_2;
  FUN_1007d4fac();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112eea310) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112eea318) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112eea320) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112eea328) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112eea330) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1007d5b44; end: 1007d5bb3;  */

void FUN_1007d5b44(void)

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



/* Entry: 1007d5bb4; end: 1007d5bbf;  */

undefined ** FUN_1007d5bb4(void)

{
  return &PTR_DAT_113035488;
}



/* Entry: 1007d5bc0; end: 1007d5c63;  */

void FUN_1007d5bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110595308;
  func_0x000107c613fc(&UNK_110595308,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1007d5ca8,puVar1);
  return;
}



/* Entry: 1007d5c64; end: 1007d5ca7;  */

void FUN_1007d5c64(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1007d5bc0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_100082720("CameraSuppressionScopeInitializationPluginPluginProvider",0x38,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007d5ca8; end: 1007d5cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d5ca8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100083b20(&uStack_68,lVar3,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&lStack_70);
  FUN_1007d5e8c();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  FUN_100083b20(&uStack_80);
  uVar6 = uStack_80;
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0e7690);
  uVar5 = uVar6;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar4);
  if ((int)uVar5 == 0) {
    func_0x000107c61170(lStack_70);
    func_0x000107c61170(uStack_68);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(uVar2);
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lStack_70 + _DAT_1130385b0);
    func_0x000107c61174();
    FUN_100083b20(&uStack_80);
    uVar6 = uStack_80;
    func_0x000107c614f0();
    (**(code **)(lStack_78 + 8))();
    func_0x000107c615e8(uStack_80);
    uVar5 = uStack_68;
    FUN_1007d5f8c(uStack_68,lStack_70);
    lVar7 = 0;
    func_0x0001007d6080();
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x20) = uVar5;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined4 *)(lVar7 + 0x2f) = 0;
    *(undefined8 *)(lVar7 + 0x10) = uVar4;
    *(undefined8 *)(lVar7 + 0x18) = uVar6;
    *(long *)(lVar3 + 0x10) = lVar7;
    func_0x000107c6157c();
    FUN_1007d60a0();
    func_0x000107c61574(lVar7);
    func_0x000107c61170(lStack_70);
    func_0x000107c61170(uStack_68);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(uVar2);
  }
  *param_1 = lVar3;
  param_1[1] = (long)&PTR_DAT_110595358;
  return;
}



/* Entry: 1007d5cb4; end: 1007d5e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d5cb4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&lStack_70);
  FUN_1007d5e8c();
  func_0x000107c613fc();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_100083b20(&uStack_80);
  uVar3 = uStack_80;
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0e7690);
  uVar2 = uVar3;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000107c61170(lStack_70);
    func_0x000107c61170(uStack_68);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lStack_70 + _DAT_1130385b0);
    func_0x000107c61174();
    FUN_100083b20(&uStack_80);
    uVar3 = uStack_80;
    func_0x000107c614f0();
    (**(code **)(lStack_78 + 8))();
    func_0x000107c615e8(uStack_80);
    uVar2 = uStack_68;
    FUN_1007d5f8c(uStack_68,lStack_70);
    lVar4 = 0;
    func_0x0001007d6080();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x20) = uVar2;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined4 *)(lVar4 + 0x2f) = 0;
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
    *(long *)(param_2 + 0x10) = lVar4;
    func_0x000107c6157c();
    FUN_1007d60a0();
    func_0x000107c61574(lVar4);
    func_0x000107c61170(lStack_70);
    func_0x000107c61170(uStack_68);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
  }
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_110595358;
  return;
}



/* Entry: 1007d5e8c; end: 1007d5eab;  */

void FUN_1007d5e8c(void)

{
  func_0x000107c61168(&PTR_PTR_112ee9d48);
  return;
}



/* Entry: 1007d5eac; end: 1007d5ee3;  */

void FUN_1007d5eac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_100083b20(&uStack_30);
  uVar1 = *(undefined8 *)(lStack_28 + 8);
  *param_1 = uStack_30;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1007d5ee4; end: 1007d5f03;  */

void FUN_1007d5ee4(void)

{
  func_0x000107c61168(&PTR_PTR_112e9bbc8);
  return;
}



/* Entry: 1007d5f04; end: 1007d5f83;  */

void FUN_1007d5f04(long *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uStack_31;
  
  FUN_1007d5ee4();
  func_0x000107c613fc();
  uStack_31 = 0;
  FUN_1000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  puVar1 = &uStack_31;
  FUN_10042e6a0();
  *(undefined1 **)(param_2 + 0x10) = puVar1;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_11050ba98;
  return;
}



/* Entry: 1007d5f84; end: 1007d5f8b;  */

void FUN_1007d5f84(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1007d5f8c; end: 1007d605f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1007d5f8c(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  
  if ((*(long *)(param_1 + _DAT_113082420) - 1U < 0xd) || (*(long *)(param_1 + _DAT_113082420) != 0)
     ) {
    FUN_1000285a8(0x112d3b3f8,&UNK_10d904aa0);
    plVar3 = (long *)&DAT_113082480;
    pcVar2 = (code *)&UNK_102ac24ec;
    param_2 = param_1;
  }
  else {
    FUN_1000285a8(0x112ee9da8,&UNK_10dc15660);
    pcVar2 = FUN_1008bb24c;
    plVar3 = (long *)&DAT_1130385d8;
  }
  uVar1 = *(undefined8 *)(param_2 + *plVar3);
  func_0x0001000b637c(uVar1);
  FUN_1000d5158(pcVar2,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  return pcVar2;
}



/* Entry: 1007d6060; end: 1007d609f;  */

void FUN_1007d6060(void)

{
  func_0x000107c61168(&PTR_PTR_1129c8400);
  return;
}



/* Entry: 1007d60a0; end: 1007d627b;  */

/* WARNING: Possible PIC construction at 0x0001007d6138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d61b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d61e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d61bc) */
/* WARNING: Removing unreachable block (ram,0x0001007d613c) */
/* WARNING: Removing unreachable block (ram,0x0001007d61e8) */

void FUN_1007d60a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  FUN_1000c2068(PTR___sSbSQsWP_11034dd50);
  pcVar3 = "activate()";
  func_0x0001000c10c0("activate()");
  func_0x000107c61180();
  FUN_100471e0c();
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 1007d627c; end: 1007d629f;  */

void FUN_1007d627c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d62a0; end: 1007d640b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d62a0(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar5 = *(long *)(*unaff_x20 + 0x50);
  lVar9 = *(long *)(lVar5 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (*(char *)((long)unaff_x20 + _DAT_113095338) == '\x01') {
    iVar1 = (int)*(undefined8 *)((long)unaff_x20 + _DAT_113095330);
    FUN_1007d642c();
    if (iVar1 != 0) {
      func_0x000100087f6c(param_1);
      return;
    }
  }
  uVar8 = *(undefined8 *)((long)unaff_x20 + _DAT_113095330);
  func_0x000107c614f0(uVar8);
  puVar2 = &UNK_1107a9628;
  func_0x000107c613fc(&UNK_1107a9628,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  (**(code **)(lVar9 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,lVar5);
  uVar4 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar6 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1107a9650;
  func_0x000107c613fc(&UNK_1107a9650,uVar6 + lVar7,uVar4 | 7);
  *(long *)(puVar3 + 0x10) = lVar5;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  (**(code **)(lVar9 + 0x20))
            (puVar3 + uVar6,&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar5);
  func_0x000107c6157c(puVar2);
  FUN_10090569c(FUN_100bcedac,puVar3,uVar8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 1007d640c; end: 1007d642b;  */

void FUN_1007d640c(void)

{
  FUN_1007d62a0();
  return;
}



/* Entry: 1007d642c; end: 1007d6437;  */

void FUN_1007d642c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCurrentPerformer_1125f9930);
  return;
}



/* Entry: 1007d6438; end: 1007d649b;  */

void FUN_1007d6438(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x30) = uVar1;
    FUN_1007d649c();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1007d649c; end: 1007d6537;  */

/* WARNING: Possible PIC construction at 0x0001008bb444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008bb448) */

void FUN_1007d649c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(byte *)(unaff_x20 + 0x31) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x32) = 0;
  }
  else {
    if (*(char *)(unaff_x20 + 0x30) != '\x01') {
      if (*(char *)(unaff_x20 + 0x32) == '\x01') {
        lVar2 = *(long *)(unaff_x20 + 0x10);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar2 != 0) {
          *(undefined1 *)(unaff_x20 + 0x32) = 0;
          puStack_78 = (undefined *)0x6c69636e6f636572;
          uStack_70 = 0xeb00000000292865;
          func_0x000107c61434(0xeb00000000292865);
          func_0x000107c5fb78(0x2f,0xe100000000000000);
          uStack_48 = 0x43;
          puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar4);
          uVar1 = uStack_70;
          func_0x000107c5fadc(puStack_78,uStack_70);
          func_0x000107c6142c(uVar1);
          puStack_58 = &UNK_102ac27d4;
          uStack_50 = 0;
          puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_70 = 0x42000000;
          pcStack_68 = FUN_1000f3aa0;
          puStack_60 = &UNK_110595418;
          ppuVar3 = &puStack_78;
          func_0x000107c60bc4(ppuVar3);
          func_0x000107c5ba8c(lVar2);
          func_0x000107c60bd0(ppuVar3);
          goto code_r0x000107c615e8;
        }
      }
      return;
    }
    if ((*(byte *)(unaff_x20 + 0x32) & 1) == 0) {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        *(undefined1 *)(unaff_x20 + 0x32) = 1;
        func_0x000107c5be14();
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 1007d6538; end: 1007d6573;  */

void FUN_1007d6538(void)

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



/* Entry: 1007d6574; end: 1007d657f;  */

undefined ** FUN_1007d6574(void)

{
  return &PTR_DAT_113035488;
}



/* Entry: 1007d6580; end: 1007d6603;  */

void FUN_1007d6580(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(param_4,param_3);
  FUN_100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1007d6604; end: 1007d662f;  */

void FUN_1007d6604(void)

{
  FUN_1007d6580();
  return;
}



/* Entry: 1007d6630; end: 1007d6637;  */

void FUN_1007d6630(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102abbed8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007d6638; end: 1007d66bb;  */

void FUN_1007d6638(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102abbed8,param_2,&UNK_102abbedc,param_2,&UNK_102abbf04,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007d66bc; end: 1007d66c7;  */

undefined ** FUN_1007d66bc(void)

{
  return &PTR_DAT_113035488;
}



/* Entry: 1007d66c8; end: 1007d66f3;  */

void FUN_1007d66c8(void)

{
  FUN_1007d6580();
  return;
}



/* Entry: 1007d66f4; end: 1007d66fb;  */

void FUN_1007d66f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102abc06c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007d66fc; end: 1007d677f;  */

void FUN_1007d66fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102abc06c,param_2,FUN_1007d6780,param_2,&UNK_102abc070,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007d6780; end: 1007d67a7;  */

void FUN_1007d6780(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1007d67a8; end: 1007d67b3;  */

void FUN_1007d67a8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001007d4460();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  FUN_1007d6880(0);
  func_0x000107c613fc();
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_1007d68a0(uStack_48,uVar2,uStack_58);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007d67b4; end: 1007d687f;  */

void FUN_1007d67b4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001007d4460();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_1007d6880(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_1007d68a0(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1007d6880; end: 1007d689f;  */

void FUN_1007d6880(void)

{
  func_0x000107c61168(&PTR_PTR_112f5dda0);
  return;
}



/* Entry: 1007d68a0; end: 1007d6c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d68a0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  uVar8 = *unaff_x20;
  unaff_x20[2] = 0;
  FUN_1000d224c(auStack_88);
  lVar4 = lStack_68;
  uVar1 = uStack_70;
  FUN_1000a8868(auStack_88,uStack_70);
  (**(code **)(lVar4 + 8))(uVar1,lVar4);
  func_0x0001000834e4(auStack_88);
  if ((uVar1 & 1) == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return;
  }
  uVar5 = unaff_x20[2];
  unaff_x20[2] = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar5);
  lVar4 = _DAT_1130353e0;
  puVar2 = *(undefined **)(param_1 + _DAT_1130353e0);
  func_0x000107c3f58c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
LAB_1007d69cc:
    FUN_1000285a8(0x112f5dd40,&UNK_10dbb8990);
    func_0x000107c613fc();
    puVar2 = &UNK_103375908;
    FUN_1000bdd8c(&UNK_103375908,0);
  }
  else {
    puVar6 = puVar2;
    func_0x000107c4ac54();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar6 == (undefined *)0x0) goto LAB_1007d69cc;
    FUN_1000285a8(0x112f5dd58,&UNK_10dbb89a8);
    puVar2 = puVar6;
    FUN_1000bda74();
    func_0x000107c61170(puVar6);
  }
  puVar6 = *(undefined **)(param_1 + lVar4);
  func_0x000107c6157c(puVar2);
  func_0x000107c5ea24();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    puVar3 = puVar6;
    func_0x000107c4ac54();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar3 != (undefined *)0x0) {
      FUN_1000285a8(0x112f5dd50,&UNK_10dbb89a0);
      puVar6 = puVar3;
      FUN_1000bda74();
      func_0x000107c61170(puVar3);
      goto LAB_1007d6ab0;
    }
  }
  FUN_1000285a8(0x112f5dd48,&UNK_10dbb8998);
  func_0x000107c613fc();
  puVar6 = &UNK_10337590c;
  FUN_1000bdd8c(&UNK_10337590c,0);
LAB_1007d6ab0:
  FUN_1007d6c28(param_3 + _DAT_112fcaab8,auStack_88);
  uVar7 = *(undefined8 *)(param_2 + _DAT_113082420);
  uStack_98 = 0;
  uStack_90 = 0xe000000000000000;
  func_0x000107c6157c(puVar6);
  func_0x000107c602fc(0x20);
  func_0x000107c5fb78(0xd00000000000001e,0x800000010f1437a0);
  uStack_a0 = uVar7;
  func_0x000107c603d0(&uStack_a0,&uStack_98,&UNK_110781400,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar5 = uStack_90;
  FUN_1007d6c6c(1,uStack_98,uStack_90,uVar8,&PTR_DAT_110646710);
  func_0x000107c6142c(uVar5);
  FUN_1000a8868(auStack_88,uStack_70);
  lVar4 = 0;
  FUN_100768718();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar7;
  *(undefined **)(lVar4 + 0x18) = puVar2;
  *(undefined **)(lVar4 + 0x20) = puVar6;
  (**(code **)(lStack_68 + 0x30))();
  func_0x000107c61574(lVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 1007d6c18; end: 1007d6c1f; -[SCMutablePublicCameraFeatureCatalog captureComponent] */

undefined8 FUN_1007d6c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1007d6c20; end: 1007d6c27; -[SCMutablePublicCameraFeatureCatalog zooming] */

undefined8 FUN_1007d6c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 1007d6c28; end: 1007d6c6b;  */

long FUN_1007d6c28(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1007d6c6c; end: 1007d6c8b;  */

void FUN_1007d6c6c(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001007d6c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1007d6c8c; end: 1007d6d33;  */

void FUN_1007d6c8c(void)

{
  undefined8 uVar1;
  long in_x3;
  undefined8 uVar2;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uVar1 = 0;
  func_0x000107c60714();
  uVar2 = 0xe000000000000000;
  uStack_38 = uVar1;
  if (in_x3 == 0) {
    uVar1 = 0;
  }
  else {
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c5fb78(0x203a,0xe200000000000000);
    lStack_58 = in_x3;
    func_0x000107c603d0(&lStack_58,&uStack_50,PTR___sSvN_11034e250,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_50;
    uVar2 = uStack_48;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 1007d6d34; end: 1007d6d77;  */

void FUN_1007d6d34(undefined8 param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x18);
  uStack_28 = param_1;
  func_0x000107c6157c(uVar1);
  FUN_1007d6d78(&uStack_28);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 1007d6d78; end: 1007d6deb;  */

void FUN_1007d6d78(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  
  FUN_100087bd4(FUN_1007d6e68,auStack_50,PTR___sytN_11034f1b0 + 8);
  FUN_100087f24(param_1);
  return;
}



/* Entry: 1007d6dec; end: 1007d6e67;  */

void FUN_1007d6dec(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x98);
  func_0x000107c61428((long)param_1 + lVar2,auStack_58,0x21,0);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x88) + -8) + 0x18))((long)param_1 + lVar2,param_2);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1007d6e68; end: 1007d6eb3;  */

void FUN_1007d6e68(void)

{
  long unaff_x20;
  
  FUN_1007d6dec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1007d6eb4; end: 1007d6ec7;  */

undefined ** FUN_1007d6eb4(void)

{
  return &PTR_DAT_113035488;
}



/* Entry: 1007d6ec8; end: 1007d6f6f;  */

void FUN_1007d6ec8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110594c88;
  func_0x000107c613fc(&UNK_110594c88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1007d6f70;
  FUN_1000823a8(FUN_1007d6f70,puVar1);
  FUN_100082720("SCCameraFeatureScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1007d6f70; end: 1007d6f77;  */

void FUN_1007d6f70(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110594610;
  func_0x000107c613fc(&UNK_110594610,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102abbc04;
  FUN_10058fa64(&UNK_102abbc04,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1007d6f78; end: 1007d703b;  */

void FUN_1007d6f78(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110594610;
  func_0x000107c613fc(&UNK_110594610,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102abbc04;
  FUN_10058fa64(&UNK_102abbc04,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1007d703c; end: 1007d705f;  */

void FUN_1007d703c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d7060; end: 1007d7097;  */

void FUN_1007d7060(long *param_1)

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



/* Entry: 1007d7098; end: 1007d709f;  */

void FUN_1007d7098(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d70a0; end: 1007d70cb;  */

void FUN_1007d70a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d70cc; end: 1007d70d7;  */

undefined ** FUN_1007d70cc(void)

{
  return &PTR_DAT_113035488;
}



/* Entry: 1007d70d8; end: 1007d7103;  */

void FUN_1007d70d8(void)

{
  FUN_1007d6580();
  return;
}



/* Entry: 1007d7104; end: 1007d710b;  */

void FUN_1007d7104(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102abc490);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007d710c; end: 1007d718f;  */

void FUN_1007d710c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102abc490,param_2,FUN_1007d7190,param_2,&UNK_102abc494,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007d7190; end: 1007d71b7;  */

void FUN_1007d7190(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1007d71b8; end: 1007d71c7;  */

void FUN_1007d71b8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
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
  func_0x0001007d4480();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126abeb8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25a40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar9 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc1b80);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = lVar1;
  return;
}



/* Entry: 1007d71c8; end: 1007d757f;  */

void FUN_1007d71c8(long *param_1,long param_2)

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
  func_0x0001007d4480();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126abeb8;
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
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar8 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc1b80);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 1007d7580; end: 1007d787f; -[SCCameraSettingsSnapshotLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d7580(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_11273fde4;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5b038();
  func_0x000107c61180();
  lVar12 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar12;
  func_0x000107c3f208();
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if ((int)lVar4 != 0) {
    puVar5 = PTR_PTR_1126c8320;
    func_0x000107c610f4();
    lVar12 = (long)_DAT_11273fde8;
    lVar1 = param_1 + lVar12;
    func_0x000107c61148();
    lVar4 = lVar1;
    func_0x000107c3f0f4();
    func_0x000107c61180();
    lVar6 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c3f630();
    func_0x000107c61180();
    lVar8 = param_1;
    func_0x000107c3ca18(param_1);
    func_0x000107c61180();
    lVar2 = param_1 + _DAT_11273fdec;
    func_0x000107c61148(lVar2);
    func_0x000107c4d534();
    lVar3 = param_1 + _DAT_11273fdf0;
    func_0x000107c61148(lVar3);
    lVar9 = lVar3;
    func_0x000107c3eabc();
    func_0x000107c61180();
    lVar12 = param_1 + lVar12;
    func_0x000107c61148(lVar12);
    lVar10 = lVar12;
    func_0x000107c4c238();
    func_0x000107c61180();
    func_0x000107c45d1c();
    uVar11 = *(undefined8 *)(param_1 + _DAT_11273fdf4);
    *(undefined **)(param_1 + _DAT_11273fdf4) = puVar5;
    func_0x000107c61170(uVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar1);
    puVar5 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar11 = *(undefined8 *)(param_1 + _DAT_11273fdf8);
    *(undefined **)(param_1 + _DAT_11273fdf8) = puVar5;
    func_0x000107c61170(uVar11);
    func_0x000107c61144(auStack_68,param_1);
    param_1 = param_1 + _DAT_11273fdfc;
    func_0x000107c61148(param_1);
    lVar1 = param_1;
    func_0x000107c5cb44();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5cb38();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    lVar3 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  return;
}



/* Entry: 1007d7880; end: 1007d7887; -[SCCameraConfigurationImpl simpleFeatureGatingConfig] */

undefined8 FUN_1007d7880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1007d7888; end: 1007d78b7;  */

void FUN_1007d7888(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9ba0);
  func_0x000107c45db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007d78b8; end: 1007d795b; -[SCCameraSimpleUIFeatureGatingConfigurationImpl initWithCircumstanceEngine:appStartExperimentReader:] */

undefined1 *
FUN_1007d78b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8970;
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



/* Entry: 1007d795c; end: 1007d799b; -[SCCameraSimpleUIFeatureGatingConfigurationImpl cameraSettingsSnapshotLoggingEnabled] */

undefined8 FUN_1007d795c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3f208();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1007d799c; end: 1007d79b3; -[SCCameraCircumstanceEngineImpl cameraSettingsSnapshotLoggingEnabled] */

void FUN_1007d799c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de51b8,0,0);
  return;
}



/* Entry: 1007d79b4; end: 1007d79ff;  */

void FUN_1007d79b4(void)

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



/* Entry: 1007d7a00; end: 1007d7a0b;  */

undefined ** FUN_1007d7a00(void)

{
  return &PTR_DAT_113035488;
}



/* Entry: 1007d7a0c; end: 1007d7a37;  */

void FUN_1007d7a0c(void)

{
  FUN_1007d6580();
  return;
}



/* Entry: 1007d7a38; end: 1007d7a3f;  */

void FUN_1007d7a38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102abccbc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007d7a40; end: 1007d7ac3;  */

void FUN_1007d7a40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102abccbc,param_2,&UNK_102abccc0,param_2,&UNK_102abcce8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007d7ac4; end: 1007d7acf;  */

undefined ** FUN_1007d7ac4(void)

{
  return &PTR_DAT_113035488;
}



/* Entry: 1007d7ad0; end: 1007d7afb;  */

void FUN_1007d7ad0(void)

{
  FUN_1007d6580();
  return;
}



/* Entry: 1007d7afc; end: 1007d7b03;  */

void FUN_1007d7afc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102abd5f4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007d7b04; end: 1007d7b87;  */

void FUN_1007d7b04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102abd5f4,param_2,FUN_1007d7b88,param_2,&UNK_102abd5f8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007d7b88; end: 1007d7baf;  */

void FUN_1007d7b88(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1007d7bb0; end: 1007d84b7;  */

void FUN_1007d7bb0(long *param_1,long param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
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
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  func_0x0001007d44c0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  puVar1 = PTR_PTR_1126abec8;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_88);
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
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar11 = uStack_c8;
  func_0x000107c61174(uStack_c8);
  uVar12 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar16 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar17 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c615f0(uStack_88);
  func_0x000107c61174(uVar17);
  uVar16 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0e6e70);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c615e8(uStack_88);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3a1f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef1bc50);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef132d0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f000a30);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef266a0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0dba60);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c3e740(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uStack_88);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  *param_1 = param_2;
  return;
}


