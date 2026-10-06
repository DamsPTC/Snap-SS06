/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037173d8; end: 1037174f7;  */

void FUN_1037173d8(long param_1,long param_2,long param_3)

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
                        "UserEducationTrayScopeGraphBridge/SCSCUserEducationTrayScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1037174f8);
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



/* Entry: 1037174f8; end: 1037175a3; -[SCSCUserEducationTrayScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1037174f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037173d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037175a4; end: 103717603; -[SCSCUserEducationTrayScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037175a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f8b5e0,0);
  *(undefined8 *)(param_1 + _DAT_112f8b5e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103717604; end: 103717637;  */

void FUN_103717604(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103717638; end: 10371766f; -[SCSCUserEducationTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103717638(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f8b5e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8b5e8));
  return;
}



/* Entry: 103717670; end: 10371768f;  */

void FUN_103717670(void)

{
  func_0x000107c61168(&PTR_PTR_1128e6ca8);
  return;
}



/* Entry: 103717690; end: 1037176fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103717690(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103717a84();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f8b620) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1037176fc; end: 103717767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037176fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8b620) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103717768; end: 1037177c7; -[_TtC71UserNavStartupCompleteScope_UserJobProviderScopedFactoryServiceProvider59SCUserNavStartupCompleteScope_UserJobProviderScopedServices init] */

void FUN_103717768(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserNavStartupCompleteScope_UserJobProviderScopedFactoryServiceProvider.SCUserNavStartupCompleteScope_UserJobProviderScopedServices"
                      ,0x83,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103717794);
  (*pcVar1)();
}



/* Entry: 1037177c8; end: 1037177d7; -[_TtC71UserNavStartupCompleteScope_UserJobProviderScopedFactoryServiceProvider59SCUserNavStartupCompleteScope_UserJobProviderScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037177c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8b620));
  return;
}



/* Entry: 1037177d8; end: 103717843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037177d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110687900;
  func_0x000107c613fc(&UNK_110687900,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103717b1c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103717844; end: 1037178df;  */

void FUN_103717844(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110687810;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110687810;
  return;
}



/* Entry: 1037178e0; end: 103717917;  */

void FUN_1037178e0(long *param_1)

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



/* Entry: 103717918; end: 10371791f;  */

undefined8 FUN_103717918(void)

{
  return 0x1b;
}



/* Entry: 103717920; end: 103717a53;  */

void FUN_103717920(undefined8 *param_1)

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
  puVar1 = &UNK_110687928;
  func_0x000107c613fc(&UNK_110687928,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103717af4;
  func_0x00010058fa64(FUN_103717af4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103717a54; end: 103717a83;  */

undefined ** FUN_103717a54(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 103717a84; end: 103717aa3;  */

void FUN_103717a84(void)

{
  func_0x000107c61168(&PTR_PTR_1128e6d68);
  return;
}



/* Entry: 103717aa4; end: 103717af3;  */

undefined1  [16] FUN_103717aa4(void)

{
  return ZEXT816(0x110687860);
}



/* Entry: 103717af4; end: 103717b1b;  */

void FUN_103717af4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103717b1c; end: 103717b2f;  */

void FUN_103717b1c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103717b30; end: 103719bdf;  */

void FUN_103717b30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
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
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
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
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  char *pcVar48;
  char *pcVar49;
  code *pcVar50;
  code *pcVar51;
  undefined8 uVar52;
  char *pcVar53;
  undefined8 uVar54;
  code *pcVar55;
  char *pcVar56;
  code *pcVar57;
  code *pcVar58;
  code *pcVar59;
  undefined8 uVar60;
  code *pcVar61;
  undefined8 uVar62;
  undefined8 auStack_70 [2];
  
  uVar62 = *param_2;
  func_0x0001000285a8(0x112f8b698,&UNK_10dc00dd8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar62;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f8b6a0,&UNK_10dc00de0);
  puVar2 = &UNK_1106879d8;
  func_0x000107c613fc(&UNK_1106879d8,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar3 = FUN_103719ca0;
  func_0x0001000823a8(FUN_103719ca0,puVar2);
  func_0x000100082720("AdInitJobProviderEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f8b6a8,&UNK_10dc010a0);
  puVar2 = &UNK_110687a00;
  func_0x000107c613fc(&UNK_110687a00,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  uVar62 = 0x103719cac;
  func_0x0001000823a8(0x103719cac,puVar2);
  func_0x000100082720("AttributionServicesHookEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f8b6b0,&UNK_10dc00df0);
  puVar2 = &UNK_110687a28;
  func_0x000107c613fc(&UNK_110687a28,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  uVar4 = 0x103719cb4;
  func_0x0001000823a8(0x103719cb4,puVar2);
  func_0x000100082720("BatteryLoggingServicesHookEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f8b6b8,&UNK_10dc01330);
  puVar2 = &UNK_110687a50;
  func_0x000107c613fc(&UNK_110687a50,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  uVar5 = 0x103719cbc;
  func_0x0001000823a8(0x103719cbc,puVar2);
  func_0x000100082720("BitmojiAvatarGLBPrefetchingEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f8b6c0,&UNK_10dc00e00);
  puVar2 = &UNK_110687a78;
  func_0x000107c613fc(&UNK_110687a78,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  uVar6 = 0x103719cc8;
  func_0x0001000823a8(0x103719cc8,puVar2);
  func_0x000100082720("BitmojiLensPrefetchingEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f8b6c8,&UNK_10dc015e0);
  puVar2 = &UNK_110687aa0;
  func_0x000107c613fc(&UNK_110687aa0,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_10);
  uVar7 = 0x103719cd4;
  func_0x0001000823a8(0x103719cd4,puVar2);
  func_0x000100082720("ContentSyncCacheJobEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f8b6d0,&UNK_10dc00e10);
  puVar2 = &UNK_110687ac8;
  func_0x000107c613fc(&UNK_110687ac8,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar8 = 0x103719ce0;
  func_0x0001000823a8(0x103719ce0,puVar2);
  func_0x000100082720("DeviceTriggeredNotificationsJobEntryPointWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f8b6d8,&UNK_10dc019f0);
  puVar2 = &UNK_110687af0;
  func_0x000107c613fc(&UNK_110687af0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x103719ce8;
  func_0x0001000823a8(0x103719ce8,puVar2);
  func_0x000100082720("GamesFriendsFeedPruneJobEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f8b6e0,&UNK_10dc00e20);
  puVar2 = &UNK_110687b18;
  func_0x000107c613fc(&UNK_110687b18,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_11;
  *(undefined8 *)(puVar2 + 0x20) = param_12;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  uVar10 = 0x103719cf0;
  func_0x0001000823a8(0x103719cf0,puVar2);
  func_0x000100082720("MemPlatBackupRecurringCheckinSchedulerEntryPointWrapperServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f8b6e8,&UNK_10dc01cd0);
  puVar2 = &UNK_110687b40;
  func_0x000107c613fc(&UNK_110687b40,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar11 = 0x103719cfc;
  func_0x0001000823a8(0x103719cfc,puVar2);
  func_0x000100082720("MemoriesCRFeaturedStoryBackgroundJobProviderEntryPointWrapperServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112f8b6f0,&UNK_10dc00e30);
  puVar2 = &UNK_110687b68;
  func_0x000107c613fc(&UNK_110687b68,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_13;
  *(undefined8 *)(puVar2 + 0x20) = param_14;
  *(undefined8 *)(puVar2 + 0x28) = param_15;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  uVar12 = 0x103719d04;
  func_0x0001000823a8(0x103719d04,puVar2);
  func_0x000100082720("MemoriesOpportunisticRetranscodeOrchestrationJobProcessEntryPointWrapperServiceProvider"
                      ,0x57,2);
  func_0x0001000285a8(0x112f8b6f8,&UNK_10dc02030);
  puVar2 = &UNK_110687b90;
  func_0x000107c613fc(&UNK_110687b90,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar13 = 0x103719d10;
  func_0x0001000823a8(0x103719d10,puVar2);
  func_0x000100082720("NSEInactivityCheckJobEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f8b700,&UNK_10dc00e40);
  puVar2 = &UNK_110687bb8;
  func_0x000107c613fc(&UNK_110687bb8,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_16;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_16);
  uVar14 = 0x103719d18;
  func_0x0001000823a8(0x103719d18,puVar2);
  func_0x000100082720("NetworkBandwidthEstimatorServicesHookEntryPointWrapperServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f8b708,&UNK_10dc02300);
  puVar2 = &UNK_110687be0;
  func_0x000107c613fc(&UNK_110687be0,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  uVar15 = 0x103719d20;
  func_0x0001000823a8(0x103719d20,puVar2);
  func_0x000100082720("NotificationRecoveryJobEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f8b710,&UNK_10dc00e50);
  puVar2 = &UNK_110687c08;
  func_0x000107c613fc(&UNK_110687c08,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_17;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_17);
  uVar16 = 0x103719d2c;
  func_0x0001000823a8(0x103719d2c,puVar2);
  func_0x000100082720("NotificationRedriveJobEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f8b718,&UNK_10dc026e0);
  puVar2 = &UNK_110687c30;
  func_0x000107c613fc(&UNK_110687c30,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_10);
  uVar17 = 0x103719d38;
  func_0x0001000823a8(0x103719d38,puVar2);
  pcVar18 = "PostableContentDestinationsDataJobProcessorEntryPointWrapperServiceProvider";
  func_0x000100082720("PostableContentDestinationsDataJobProcessorEntryPointWrapperServiceProvider",
                      0x4b,2);
  func_0x00010372a27c();
  pcVar19 = "DeclaredAgeVerificationScopeExposerSubjectServiceProvider";
  func_0x000100082720("DeclaredAgeVerificationScopeExposerSubjectServiceProvider",0x39,2);
  FUN_10372a2d8();
  pcVar20 = "SCPasskeyEnrollmentScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCPasskeyEnrollmentScopeExposerSubjectServiceProvider",0x35,2);
  func_0x00010372a368();
  func_0x000100082720("SCUserJobProviderScopeExposerSubjectServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f8b720,&UNK_10dc00e60);
  puVar2 = &UNK_110687c58;
  func_0x000107c613fc(&UNK_110687c58,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_18;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_18);
  uVar21 = 0x103719d44;
  func_0x0001000823a8(0x103719d44,puVar2);
  func_0x000100082720("ResendMessagesBackgroundJobEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f8b728,&UNK_10dc029d0);
  puVar2 = &UNK_110687c80;
  func_0x000107c613fc(&UNK_110687c80,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_19;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_19);
  uVar22 = 0x103719d50;
  func_0x0001000823a8(0x103719d50,puVar2);
  func_0x000100082720("SCAppInstallUpdateConversionValueUserJobProviderEntryPointWrapperServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x112f8b730,&UNK_10dc00e70);
  puVar2 = &UNK_110687ca8;
  func_0x000107c613fc(&UNK_110687ca8,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_20;
  *(undefined8 *)(puVar2 + 0x20) = param_21;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_22;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  uVar23 = 0x103719d5c;
  func_0x0001000823a8(0x103719d5c,puVar2);
  func_0x000100082720("SCCommerceScreenshopMemoriesBackgroundFetcherEntryPointWrapperServiceProvider"
                      ,0x4d,2);
  func_0x0001000285a8(0x112f8b738,&UNK_10dc02d30);
  puVar2 = &UNK_110687cd0;
  func_0x000107c613fc(&UNK_110687cd0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_23;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_23);
  uVar24 = 0x103719d68;
  func_0x0001000823a8(0x103719d68,puVar2);
  func_0x000100082720("SCComposerModuleJobProcessorEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f8b740,&UNK_10dc00e80);
  puVar2 = &UNK_110687cf8;
  func_0x000107c613fc(&UNK_110687cf8,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar25 = 0x103719d70;
  func_0x0001000823a8(0x103719d70,puVar2);
  func_0x000100082720("SCContextPostSnapDataCleanUpJobEntryPointWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f8b748,&UNK_10dc02fe0);
  puVar2 = &UNK_110687d20;
  func_0x000107c613fc(&UNK_110687d20,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_24;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_25;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  uVar26 = 0x103719d78;
  func_0x0001000823a8(0x103719d78,puVar2);
  func_0x000100082720("SCDurableDeviceIDPostAuthLoggingEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f8b750,&UNK_10dc00e90);
  puVar2 = &UNK_110687d48;
  func_0x000107c613fc(&UNK_110687d48,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_18;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_18);
  uVar27 = 0x103719d84;
  func_0x0001000823a8(0x103719d84,puVar2);
  func_0x000100082720("SCFriendsFeedChatMediaPrefetchJobProviderEntryPointWrapperServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112f8b758,&UNK_10dc03300);
  puVar2 = &UNK_110687d70;
  func_0x000107c613fc(&UNK_110687d70,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  uVar28 = 0x103719d90;
  func_0x0001000823a8(0x103719d90,puVar2);
  func_0x000100082720("SCLensFriendsFeedContextCleanUpJobEntryPointWrapperServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f8b760,&UNK_10dc00ea0);
  puVar2 = &UNK_110687d98;
  func_0x000107c613fc(&UNK_110687d98,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar29 = 0x103719d9c;
  func_0x0001000823a8(0x103719d9c,puVar2);
  func_0x000100082720("SCLensRemoteAssetsUploadOperationStoreCleanupJobEntryPointWrapperServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x112f8b768,&UNK_10dc03630);
  puVar2 = &UNK_110687dc0;
  func_0x000107c613fc(&UNK_110687dc0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar30 = 0x103719da4;
  func_0x0001000823a8(0x103719da4,puVar2);
  func_0x000100082720("SCLogAppBackgroundEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f8b770,&UNK_10dc00eb0);
  puVar2 = &UNK_110687de8;
  func_0x000107c613fc(&UNK_110687de8,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  uVar31 = 0x103719dac;
  func_0x0001000823a8(0x103719dac,puVar2);
  func_0x000100082720("SCMapStylePrefetchEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f8b778,&UNK_10dc038a0);
  puVar2 = &UNK_110687e10;
  func_0x000107c613fc(&UNK_110687e10,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_12;
  *(undefined8 *)(puVar2 + 0x28) = param_26;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_26);
  uVar32 = 0x103719db8;
  func_0x0001000823a8(0x103719db8,puVar2);
  func_0x000100082720("SCMemoriesCameraRollIndexBackgroundJobProviderEntryPointWrapperServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112f8b780,&UNK_10dc00ec0);
  puVar2 = &UNK_110687e38;
  func_0x000107c613fc(&UNK_110687e38,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_12;
  *(undefined8 *)(puVar2 + 0x28) = param_26;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_26);
  uVar33 = 0x103719dc4;
  func_0x0001000823a8(0x103719dc4,puVar2);
  func_0x000100082720("SCMemoriesCameraRollUploadBackgroundJobProviderEntryPointWrapperServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112f8b788,&UNK_10dc03c00);
  puVar2 = &UNK_110687e60;
  func_0x000107c613fc(&UNK_110687e60,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_24;
  *(undefined8 *)(puVar2 + 0x20) = param_27;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_27);
  uVar34 = 0x103719dd0;
  func_0x0001000823a8(0x103719dd0,puVar2);
  func_0x000100082720("SCNotificationDataDeltaSyncProcessorDataSyncerEntryPointWrapperServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112f8b790,&UNK_10dc00ed0);
  puVar2 = &UNK_110687e88;
  func_0x000107c613fc(&UNK_110687e88,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_28;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_29;
  *(undefined8 *)(puVar2 + 0x30) = param_30;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  uVar35 = 0x103719ddc;
  func_0x0001000823a8(0x103719ddc,puVar2);
  func_0x000100082720("SCOneTapLoginRegistryJobSchedulerEntryPointWrapperServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f8b798,&UNK_10dc03f30);
  puVar2 = &UNK_110687eb0;
  func_0x000107c613fc(&UNK_110687eb0,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_31;
  *(undefined8 *)(puVar2 + 0x20) = param_32;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  uVar36 = 0x103719de8;
  func_0x0001000823a8(0x103719de8,puVar2);
  func_0x000100082720("SCPermissionSettingsBackgroundReportingEntryPointWrapperServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f8b7a0,&UNK_10dc00ee0);
  puVar2 = &UNK_110687ed8;
  func_0x000107c613fc(&UNK_110687ed8,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_33;
  *(undefined8 *)(puVar2 + 0x28) = param_34;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  uVar37 = 0x103719df4;
  func_0x0001000823a8(0x103719df4,puVar2);
  func_0x000100082720("SCPlusMerlinJobProcessorEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f8b7a8,&UNK_10dc04220);
  puVar2 = &UNK_110687f00;
  func_0x000107c613fc(&UNK_110687f00,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_33;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_33);
  uVar38 = 0x103719e00;
  func_0x0001000823a8(0x103719e00,puVar2);
  func_0x000100082720("SCPlusServicesJobProcessorEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f8b7b0,&UNK_10dc00ef0);
  puVar2 = &UNK_110687f28;
  func_0x000107c613fc(&UNK_110687f28,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar39 = 0x103719e0c;
  func_0x0001000823a8(0x103719e0c,puVar2);
  func_0x000100082720("SCPlusStoreKitJobProcessorEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f8b7b8,&UNK_10dc044c0);
  puVar2 = &UNK_110687f50;
  func_0x000107c613fc(&UNK_110687f50,0x48,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_24;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_35;
  *(undefined8 *)(puVar2 + 0x30) = param_36;
  *(undefined8 *)(puVar2 + 0x38) = param_37;
  *(undefined8 *)(puVar2 + 0x40) = param_38;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  uVar40 = 0x103719e14;
  func_0x0001000823a8(0x103719e14,puVar2);
  func_0x000100082720("SCRecipientDeviceCapabilityEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f8b7c0,&UNK_10dc00f00);
  func_0x000107c6157c(uVar40);
  uVar41 = 0x103719e28;
  func_0x0001000823a8(0x103719e28,uVar40);
  func_0x000100082720("SCRecipientDeviceCapabilityServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f8b7c8,&UNK_10dc04690);
  puVar2 = &UNK_110687f78;
  func_0x000107c613fc(&UNK_110687f78,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_38;
  *(undefined8 *)(puVar2 + 0x20) = param_37;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  uVar42 = 0x103719e30;
  func_0x0001000823a8(0x103719e30,puVar2);
  func_0x000100082720("SCSnapchattersAddFriendsJobProviderEntryPointWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f8b7d0,&UNK_10dc00f10);
  puVar2 = &UNK_110687fa0;
  func_0x000107c613fc(&UNK_110687fa0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar43 = 0x103719e3c;
  func_0x0001000823a8(0x103719e3c,puVar2);
  func_0x000100082720("SCSnapchattersPublicInfoJobProviderEntryPointWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f8b7d8,&UNK_10dc049b0);
  puVar2 = &UNK_110687fc8;
  func_0x000107c613fc(&UNK_110687fc8,0x50,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_39;
  *(undefined8 *)(puVar2 + 0x28) = param_10;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_40;
  *(undefined8 *)(puVar2 + 0x40) = param_41;
  *(undefined8 *)(puVar2 + 0x48) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  uVar44 = 0x103719e44;
  func_0x0001000823a8(0x103719e44,puVar2);
  func_0x000100082720("SCSpotlightPrefetchJobsEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f8b7e0,&UNK_10dc00f20);
  puVar2 = &UNK_110687ff0;
  func_0x000107c613fc(&UNK_110687ff0,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_42;
  *(undefined8 *)(puVar2 + 0x20) = uVar41;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(uVar41);
  uVar45 = 0x103719e58;
  func_0x0001000823a8(0x103719e58,puVar2);
  func_0x000100082720("SCSupportsHevcPropertyHandlerEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f8b7e8,&UNK_10dc04c80);
  puVar2 = &UNK_110688018;
  func_0x000107c613fc(&UNK_110688018,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_43;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_43);
  uVar46 = 0x103719e64;
  func_0x0001000823a8(0x103719e64,puVar2);
  func_0x000100082720("SCTermsOfUseAcceptedVersionSyncEntryPointWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f8b7f0,&UNK_10dc00f30);
  puVar2 = &UNK_110688040;
  func_0x000107c613fc(&UNK_110688040,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar47 = 0x103719e70;
  func_0x0001000823a8(0x103719e70,puVar2);
  func_0x000100082720("SCTermsOfUseHtmlBackgroundFetcherEntryPointWrapperServiceProvider",0x41,2);
  pcVar48 = pcVar18;
  FUN_10372a2bc();
  func_0x000100082720("DeclaredAgeVerificationScopeExposerObservableServiceProvider",0x3c,2);
  pcVar49 = pcVar19;
  FUN_10372a318();
  func_0x000100082720("SCPasskeyEnrollmentScopeExposerObservableServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar50 = FUN_1037178e0;
  func_0x0001000823a8(FUN_1037178e0,0);
  func_0x000100082720("SCUserNavStartupCompleteScope_UserJobProviderScopedServicesCleanupRelayServiceProvider"
                      ,0x56,2);
  func_0x0001000285a8(0x112f8b7f8,&UNK_10dc00f40);
  puVar2 = &UNK_110688068;
  func_0x000107c613fc(&UNK_110688068,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_44;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_44);
  pcVar51 = FUN_103719eac;
  func_0x0001000823a8(FUN_103719eac,puVar2);
  func_0x000100082720("SendToRankingRecentsSyncingEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f8b800,&UNK_10dc05210);
  puVar2 = &UNK_110688090;
  func_0x000107c613fc(&UNK_110688090,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_45;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_45);
  uVar52 = 0x103719eb8;
  func_0x0001000823a8(0x103719eb8,puVar2);
  func_0x000100082720("SpectrumServicesHookEntryPointWrapperServiceProvider",0x34,2);
  pcVar53 = pcVar18;
  FUN_103729fcc(pcVar18,pcVar19,uVar41,pcVar20);
  func_0x000100082720("UserNavStartupCompleteScope_UserJobProviderScopeGraphBridgeServicesServiceProvider"
                      ,0x52,2);
  func_0x0001000285a8(0x112f8b808,&UNK_10dc00f50);
  puVar2 = &UNK_1106880b8;
  func_0x000107c613fc(&UNK_1106880b8,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(undefined8 *)(puVar2 + 0x20) = param_20;
  *(undefined8 *)(puVar2 + 0x28) = param_46;
  *(char **)(puVar2 + 0x30) = pcVar48;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(pcVar48);
  uVar54 = 0x103719ec0;
  func_0x0001000823a8(0x103719ec0,puVar2);
  func_0x000100082720("DeclaredAgeVerificationResumeEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f8b810,&UNK_10dc02590);
  puVar2 = &UNK_1106880e0;
  func_0x000107c613fc(&UNK_1106880e0,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_24;
  *(undefined8 *)(puVar2 + 0x20) = param_46;
  *(char **)(puVar2 + 0x28) = pcVar49;
  func_0x000107c6157c();
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(pcVar49);
  pcVar55 = FUN_103719f08;
  func_0x0001000823a8(FUN_103719f08,puVar2);
  func_0x000100082720("PasskeyAutoUpgradeEntryPointWrapperServiceProvider",0x32,2);
  pcVar56 = pcVar20;
  FUN_10372a3f8();
  func_0x000100082720("SCUserJobProviderScopeExposerObservableServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f8b818,&UNK_10dc00f60);
  puVar2 = &UNK_110688108;
  func_0x000107c613fc(&UNK_110688108,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_35;
  *(undefined8 *)(puVar2 + 0x28) = param_47;
  *(char **)(puVar2 + 0x30) = pcVar56;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(pcVar56);
  pcVar57 = FUN_103719f58;
  func_0x0001000823a8(FUN_103719f58,puVar2);
  func_0x000100082720("SCUserJobProviderEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f8b820,&UNK_10dc00f68);
  puVar2 = &UNK_110688130;
  func_0x000107c613fc(&UNK_110688130,0x1a0,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar62;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  *(undefined8 *)(puVar2 + 0x38) = uVar7;
  *(undefined8 *)(puVar2 + 0x40) = uVar54;
  *(undefined8 *)(puVar2 + 0x48) = uVar8;
  *(undefined8 *)(puVar2 + 0x50) = uVar9;
  *(undefined8 *)(puVar2 + 0x58) = uVar10;
  *(undefined8 *)(puVar2 + 0x60) = uVar11;
  *(undefined8 *)(puVar2 + 0x68) = uVar12;
  *(undefined8 *)(puVar2 + 0x70) = uVar13;
  *(undefined8 *)(puVar2 + 0x78) = uVar14;
  *(undefined8 *)(puVar2 + 0x80) = uVar15;
  *(undefined8 *)(puVar2 + 0x88) = uVar16;
  *(code **)(puVar2 + 0x90) = pcVar55;
  *(undefined8 *)(puVar2 + 0x98) = uVar17;
  *(undefined8 *)(puVar2 + 0xa0) = uVar21;
  *(undefined8 *)(puVar2 + 0xa8) = uVar22;
  *(undefined8 *)(puVar2 + 0xb0) = uVar23;
  *(undefined8 *)(puVar2 + 0xb8) = uVar24;
  *(undefined8 *)(puVar2 + 0xc0) = uVar25;
  *(undefined8 *)(puVar2 + 200) = uVar26;
  *(undefined8 *)(puVar2 + 0xd0) = uVar27;
  *(undefined8 *)(puVar2 + 0xd8) = uVar28;
  *(undefined8 *)(puVar2 + 0xe0) = uVar29;
  *(undefined8 *)(puVar2 + 0xe8) = uVar30;
  *(undefined8 *)(puVar2 + 0xf0) = uVar31;
  *(undefined8 *)(puVar2 + 0xf8) = uVar32;
  *(undefined8 *)(puVar2 + 0x100) = uVar33;
  *(undefined8 *)(puVar2 + 0x108) = uVar34;
  *(undefined8 *)(puVar2 + 0x110) = uVar35;
  *(undefined8 *)(puVar2 + 0x118) = uVar36;
  *(undefined8 *)(puVar2 + 0x120) = uVar37;
  *(undefined8 *)(puVar2 + 0x128) = uVar38;
  *(undefined8 *)(puVar2 + 0x130) = uVar39;
  *(undefined8 *)(puVar2 + 0x138) = uVar40;
  *(undefined8 *)(puVar2 + 0x140) = uVar42;
  *(undefined8 *)(puVar2 + 0x148) = uVar43;
  *(undefined8 *)(puVar2 + 0x150) = uVar44;
  *(undefined8 *)(puVar2 + 0x158) = uVar45;
  *(undefined8 *)(puVar2 + 0x160) = uVar46;
  *(undefined8 *)(puVar2 + 0x168) = uVar47;
  *(code **)(puVar2 + 0x170) = pcVar57;
  *(undefined8 **)(puVar2 + 0x178) = puVar1;
  *(code **)(puVar2 + 0x180) = pcVar50;
  *(code **)(puVar2 + 0x188) = pcVar51;
  *(undefined8 *)(puVar2 + 400) = uVar52;
  *(char **)(puVar2 + 0x198) = pcVar53;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar40);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar62);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar54);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(pcVar55);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(uVar24);
  func_0x000107c6157c(uVar25);
  func_0x000107c6157c(uVar26);
  func_0x000107c6157c(uVar27);
  func_0x000107c6157c(uVar28);
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(uVar30);
  func_0x000107c6157c(uVar31);
  func_0x000107c6157c(uVar32);
  func_0x000107c6157c(uVar33);
  func_0x000107c6157c(uVar34);
  func_0x000107c6157c(uVar35);
  func_0x000107c6157c(uVar36);
  func_0x000107c6157c(uVar37);
  func_0x000107c6157c(uVar38);
  func_0x000107c6157c(uVar39);
  func_0x000107c6157c(uVar42);
  func_0x000107c6157c(uVar43);
  func_0x000107c6157c(uVar44);
  func_0x000107c6157c(uVar45);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(uVar47);
  func_0x000107c6157c(pcVar57);
  func_0x000107c6157c(pcVar50);
  func_0x000107c6157c(pcVar51);
  func_0x000107c6157c(uVar52);
  func_0x000107c6157c(pcVar53);
  pcVar58 = FUN_103719f78;
  func_0x0001000823a8(FUN_103719f78,puVar2);
  func_0x000100082720("SCUserNavStartupCompleteScope_UserJobProviderScopeInitializationPluginRegistryServiceProvider"
                      ,0x5d,2);
  func_0x0001000285a8(0x112f8b628,&UNK_10dc00a80);
  func_0x000107c6157c(pcVar58);
  pcVar59 = FUN_10371a004;
  func_0x0001000823a8(FUN_10371a004,pcVar58);
  func_0x000100082720("SCUserNavStartupCompleteScope_UserJobProviderScopeInitializationServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112f8b618,&UNK_10dc00a70);
  func_0x000107c6157c(pcVar59);
  uVar60 = 0x10371a00c;
  func_0x0001000823a8(0x10371a00c,pcVar59);
  func_0x000100082720("SCUserNavStartupCompleteScope_UserJobProviderScopedServicesServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110688158;
  func_0x000107c613fc(&UNK_110688158,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar60;
  *(code **)(puVar2 + 0x18) = pcVar50;
  func_0x000107c6157c(pcVar50);
  pcVar61 = FUN_10371a040;
  func_0x0001000823a8(FUN_10371a040,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar62);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(uVar25);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(uVar27);
  func_0x000107c61574(uVar28);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar30);
  func_0x000107c61574(uVar31);
  func_0x000107c61574(uVar32);
  func_0x000107c61574(uVar33);
  func_0x000107c61574(uVar34);
  func_0x000107c61574(uVar35);
  func_0x000107c61574(uVar36);
  func_0x000107c61574(uVar37);
  func_0x000107c61574(uVar38);
  func_0x000107c61574(uVar39);
  func_0x000107c61574(uVar40);
  func_0x000107c61574(uVar41);
  func_0x000107c61574(uVar42);
  func_0x000107c61574(uVar43);
  func_0x000107c61574(uVar44);
  func_0x000107c61574(uVar45);
  func_0x000107c61574(uVar46);
  func_0x000107c61574(uVar47);
  func_0x000107c61574(pcVar48);
  func_0x000107c61574(pcVar49);
  func_0x000107c61574(pcVar50);
  func_0x000107c61574(pcVar51);
  func_0x000107c61574(uVar52);
  func_0x000107c61574(pcVar53);
  func_0x000107c61574(uVar54);
  func_0x000107c61574(pcVar55);
  func_0x000107c61574(pcVar56);
  func_0x000107c61574(pcVar57);
  func_0x000107c61574(pcVar58);
  func_0x000107c61574(pcVar59);
  func_0x000100082720("SCUserNavStartupCompleteScope_UserJobProviderScopeEntryPointProvider",0x44,2)
  ;
  *param_1 = pcVar61;
  return;
}



/* Entry: 103719be0; end: 103719c9f;  */

void FUN_103719be0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103717b30(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x170));
  return;
}



/* Entry: 103719ca0; end: 103719e77;  */

void FUN_103719ca0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_10371a33c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_10372d6e4(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x00010372d2c8();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_10372d2fc();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 103719e78; end: 103719eab;  */

void FUN_103719e78(void)

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



/* Entry: 103719eac; end: 103719ecb;  */

void FUN_103719eac(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_103727820();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_103788984(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x0001037887a0();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_1037887d4();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 103719ecc; end: 103719f07;  */

void FUN_103719ecc(void)

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



/* Entry: 103719f08; end: 103719f13;  */

void FUN_103719f08(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_10371d788();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_60;
  *(undefined8 *)(lVar1 + 0x28) = uStack_68;
  func_0x0001000285a8(0x112f5fed8,&UNK_10dbbba08);
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c6157c(uStack_70);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(lVar1 + 0x18) = puVar5;
  FUN_10372c928(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar4;
  func_0x00010372c488();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  func_0x000107c6157c();
  func_0x00010372c4c8();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_70);
  func_0x000107c61574(uVar6);
  *param_1 = lVar1;
  return;
}



/* Entry: 103719f14; end: 103719f57;  */

void FUN_103719f14(void)

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



/* Entry: 103719f58; end: 103719f77;  */

void FUN_103719f58(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1037274b8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112f8ddb8,&UNK_10dc04f68);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar8 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010025a71c();
  puVar5 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar1 + 0x18) = puVar5;
  puVar6 = PTR_PTR_1126ad620;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efce9e0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef32c60);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f15f610);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar5);
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f15f640);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_88);
  *param_1 = lVar1;
  return;
}



/* Entry: 103719f78; end: 10371a003;  */

void FUN_103719f78(void)

{
  long unaff_x20;
  
  FUN_103727bc8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198));
  return;
}



/* Entry: 10371a004; end: 10371a013;  */

void FUN_10371a004(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112f8b680,&UNK_10dc00d60);
  uVar1 = 0;
  func_0x00010036b360();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10371a014; end: 10371a03f;  */

void FUN_10371a014(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10371a040; end: 10371a047;  */

void FUN_10371a040(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110687810;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110687810;
  return;
}



/* Entry: 10371a048; end: 10371a16b;  */

void FUN_10371a048(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_10371a33c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_10372d6e4(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x00010372d2c8();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  FUN_10372d2fc();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 10371a16c; end: 10371a24b;  */

long FUN_10371a16c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10372d6e4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010372d2c8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_10372d2fc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 10371a24c; end: 10371a27f;  */

void FUN_10371a24c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371a280; end: 10371a287;  */

undefined8 FUN_10371a280(void)

{
  return 0x1b;
}



/* Entry: 10371a288; end: 10371a30b;  */

void FUN_10371a288(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371a37c,param_2,FUN_10371a380,param_2,0x10371a3a8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371a30c; end: 10371a33b;  */

undefined ** FUN_10371a30c(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371a33c; end: 10371a35b;  */

void FUN_10371a33c(void)

{
  func_0x000107c61168(&PTR_PTR_112f8b890);
  return;
}



/* Entry: 10371a35c; end: 10371a37f;  */

undefined1  [16] FUN_10371a35c(void)

{
  return ZEXT816(0x1106881b0);
}



/* Entry: 10371a380; end: 10371a3d3;  */

void FUN_10371a380(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371a3d4; end: 10371a4af;  */

void FUN_10371a3d4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10371a640();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1037991c8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000103798e6c();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  func_0x000107c6157c();
  FUN_103798e94();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 10371a4b0; end: 10371a557;  */

long FUN_10371a4b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_1037991c8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103798e6c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_103798e94();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 10371a558; end: 10371a583;  */

void FUN_10371a558(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371a584; end: 10371a58b;  */

undefined8 FUN_10371a584(void)

{
  return 0x1b;
}



/* Entry: 10371a58c; end: 10371a60f;  */

void FUN_10371a58c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371a680,param_2,FUN_10371a684,param_2,0x10371a6ac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371a610; end: 10371a63f;  */

undefined ** FUN_10371a610(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371a640; end: 10371a65f;  */

void FUN_10371a640(void)

{
  func_0x000107c61168(&PTR_PTR_112f8b968);
  return;
}



/* Entry: 10371a660; end: 10371a683;  */

undefined1  [16] FUN_10371a660(void)

{
  return ZEXT816(0x110688230);
}



/* Entry: 10371a684; end: 10371a6d7;  */

void FUN_10371a684(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371a6d8; end: 10371a7b7;  */

void FUN_10371a6d8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10371a950();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1037994a4(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1037993c8(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  func_0x000107c6157c(uVar1);
  FUN_1037993d4();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 10371a7b8; end: 10371a867;  */

long FUN_10371a7b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_1037994a4(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1037993c8(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_1037993d4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 10371a868; end: 10371a893;  */

void FUN_10371a868(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371a894; end: 10371a89b;  */

undefined8 FUN_10371a894(void)

{
  return 0x1b;
}



/* Entry: 10371a89c; end: 10371a91f;  */

void FUN_10371a89c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371a990,param_2,FUN_10371a994,param_2,0x10371a9bc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371a920; end: 10371a94f;  */

undefined ** FUN_10371a920(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371a950; end: 10371a96f;  */

void FUN_10371a950(void)

{
  func_0x000107c61168(&PTR_PTR_112f8ba38);
  return;
}



/* Entry: 10371a970; end: 10371a993;  */

undefined1  [16] FUN_10371a970(void)

{
  return ZEXT816(0x1106882b0);
}



/* Entry: 10371a994; end: 10371a9e7;  */

void FUN_10371a994(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371a9e8; end: 10371ab0b;  */

void FUN_10371a9e8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_10371acdc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_10373091c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x00010373040c();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  func_0x000103730488();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 10371ab0c; end: 10371abeb;  */

long FUN_10371ab0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10373091c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010373040c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x000103730488();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 10371abec; end: 10371ac1f;  */

void FUN_10371abec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371ac20; end: 10371ac27;  */

undefined8 FUN_10371ac20(void)

{
  return 0x1b;
}



/* Entry: 10371ac28; end: 10371acab;  */

void FUN_10371ac28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371ad1c,param_2,FUN_10371ad20,param_2,0x10371ad48,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371acac; end: 10371acdb;  */

undefined ** FUN_10371acac(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371acdc; end: 10371acfb;  */

void FUN_10371acdc(void)

{
  func_0x000107c61168(&PTR_PTR_112f8bb08);
  return;
}



/* Entry: 10371acfc; end: 10371ad1f;  */

undefined1  [16] FUN_10371acfc(void)

{
  return ZEXT816(0x110688330);
}



/* Entry: 10371ad20; end: 10371ad73;  */

void FUN_10371ad20(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371ad74; end: 10371afef;  */

void FUN_10371ad74(long *param_1,long param_2)

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
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_10371b0e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10372f77c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x00010372f2b4();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_10372f310();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 10371aff0; end: 10371b02b;  */

void FUN_10371aff0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371b02c; end: 10371b033;  */

undefined8 FUN_10371b02c(void)

{
  return 0x1b;
}



/* Entry: 10371b034; end: 10371b0b7;  */

void FUN_10371b034(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371b128,param_2,FUN_10371b12c,param_2,0x10371b154,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371b0b8; end: 10371b0e7;  */

undefined ** FUN_10371b0b8(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371b0e8; end: 10371b107;  */

void FUN_10371b0e8(void)

{
  func_0x000107c61168(&PTR_PTR_112f8bbe0);
  return;
}



/* Entry: 10371b108; end: 10371b12b;  */

undefined1  [16] FUN_10371b108(void)

{
  return ZEXT816(0x1106883b0);
}



/* Entry: 10371b12c; end: 10371b17f;  */

void FUN_10371b12c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371b180; end: 10371b2a3;  */

void FUN_10371b180(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_10371b474();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_10373324c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x00010373248c();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  FUN_1037324e4();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 10371b2a4; end: 10371b383;  */

long FUN_10371b2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10373324c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010373248c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_1037324e4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 10371b384; end: 10371b3b7;  */

void FUN_10371b384(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371b3b8; end: 10371b3bf;  */

undefined8 FUN_10371b3b8(void)

{
  return 0x1b;
}



/* Entry: 10371b3c0; end: 10371b443;  */

void FUN_10371b3c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371b4b4,param_2,FUN_10371b4b8,param_2,0x10371b4e0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371b444; end: 10371b473;  */

undefined ** FUN_10371b444(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371b474; end: 10371b493;  */

void FUN_10371b474(void)

{
  func_0x000107c61168(&PTR_PTR_112f8bcc0);
  return;
}



/* Entry: 10371b494; end: 10371b4b7;  */

undefined1  [16] FUN_10371b494(void)

{
  return ZEXT816(0x110688430);
}



/* Entry: 10371b4b8; end: 10371b50b;  */

void FUN_10371b4b8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371b50c; end: 10371b6e3;  */

void FUN_10371b50c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  FUN_10371b95c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e9bcf0,&UNK_10daa9ad8);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  FUN_10372dbfc(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar4 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar4;
  func_0x00010372d864();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  func_0x000107c61174();
  func_0x00010372d914();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 10371b6e4; end: 10371b85b;  */

long FUN_10371b6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x0001000285a8(0x112e9bcf0,&UNK_10daa9ad8);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_10372dbfc(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010372d864();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  func_0x00010372d914();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 10371b85c; end: 10371b89f;  */

void FUN_10371b85c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371b8a0; end: 10371b8a7;  */

undefined8 FUN_10371b8a0(void)

{
  return 0x1b;
}



/* Entry: 10371b8a8; end: 10371b92b;  */

void FUN_10371b8a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371b99c,param_2,FUN_10371b9a0,param_2,0x10371b9c8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371b92c; end: 10371b95b;  */

undefined ** FUN_10371b92c(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371b95c; end: 10371b97b;  */

void FUN_10371b95c(void)

{
  func_0x000107c61168(&PTR_PTR_112f8bd98);
  return;
}



/* Entry: 10371b97c; end: 10371b99f;  */

undefined1  [16] FUN_10371b97c(void)

{
  return ZEXT816(0x1106884b0);
}



/* Entry: 10371b9a0; end: 10371b9f3;  */

void FUN_10371b9a0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371b9f4; end: 10371ba97;  */

void FUN_10371b9f4(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10371bbf4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_103742c18(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  func_0x000103742880(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10371ba98; end: 10371bb0b;  */

long FUN_10371ba98(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_103742c18(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000103742880(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10371bb0c; end: 10371bb37;  */

void FUN_10371bb0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371bb38; end: 10371bb3f;  */

undefined8 FUN_10371bb38(void)

{
  return 0x1b;
}



/* Entry: 10371bb40; end: 10371bbc3;  */

void FUN_10371bb40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371bc34,param_2,FUN_10371bc38,param_2,0x10371bc60,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


