/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015077d4; end: 10150792b;  */

void FUN_1015077d4(undefined8 *param_1)

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
  FUN_101507d7c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101507abc(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 10150792c; end: 101507977;  */

void FUN_10150792c(void)

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



/* Entry: 101507978; end: 1015079cb;  */

void FUN_101507978(undefined8 *param_1)

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



/* Entry: 1015079cc; end: 1015079d3;  */

undefined8 FUN_1015079cc(void)

{
  return 0x1b;
}



/* Entry: 1015079d4; end: 101507a57;  */

void FUN_1015079d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101507dcc,param_2,FUN_101507dd0,param_2,FUN_101507df8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101507a58; end: 101507aa7;  */

undefined8 FUN_101507a58(void)

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



/* Entry: 101507aa8; end: 101507abb;  */

void FUN_101507aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1103d4cf8;
  return;
}



/* Entry: 101507abc; end: 101507d5f;  */

void FUN_101507abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
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
  puVar2 = PTR_PTR_1126a7618;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef10af0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef8a600);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef8a620);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101507d60);
  (*pcVar1)();
}



/* Entry: 101507d60; end: 101507d7b;  */

undefined ** FUN_101507d60(void)

{
  return &PTR_DAT_113067048;
}



/* Entry: 101507d7c; end: 101507d9b;  */

void FUN_101507d7c(void)

{
  func_0x000107c61168(&PTR_PTR_112dacda8);
  return;
}



/* Entry: 101507d9c; end: 101507dcf;  */

undefined1  [16] FUN_101507d9c(void)

{
  return ZEXT816(0x1103d4d38);
}



/* Entry: 101507dd0; end: 101507df7;  */

void FUN_101507dd0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101507df8; end: 101507dff;  */

undefined8 FUN_101507df8(void)

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



/* Entry: 101507e00; end: 10150862b;  */

void FUN_101507e00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dd98;
  ppuVar4 = &PTR_DAT_113067048;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112dace30;
  func_0x0001000285a8(0x112dace30,&UNK_10d955dd0);
  func_0x0001000a6ee8(&UNK_1103d42d8,
                      "AuthFlowTreatmentInfoServicesProviderWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_10150862c,param_2,uVar2,&UNK_1103d42d8,&PTR_DAT_112dabd20);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1103d4378,
                      "AuthenticationOrchestrationServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x50,2,0x101508658,param_3,uVar2,&UNK_1103d4378,&PTR_DAT_112dabdf0);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1103d4418,
                      "BitmojiUnauthenticatedContentManagerFetchServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x5e,2,0x101508684,param_4,uVar2,&UNK_1103d4418,&PTR_DAT_112dabed0);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1103d44b8,"SCAppAttestEntryPointWrapperScopeInitializationPluginKey",0x38
                      ,2,0x1015086b0,param_5,uVar2,&UNK_1103d44b8,&PTR_DAT_112dabfb0);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1103d4558,
                      "SCAuthenticationFlowLoggerServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x4c,2,0x1015086dc,param_6,uVar2,&UNK_1103d4558,&PTR_DAT_112dac0a0);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1103d45d8,
                      "SCConfigDeauthProviderEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      0x101508708,param_7,uVar2,&UNK_1103d45d8,&PTR_DAT_112dac1a8);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_1103d4678,
                      "SCDeepLinkTIVNonceServiceProviderWrapperScopeInitializationPluginKey",0x44,2,
                      0x101508734,param_8,uVar2,&UNK_1103d4678,&PTR_DAT_112dac278);
  func_0x000107c61574(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_1103d46f8,
                      "SCFideliusUnauthenticatedEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,0x101508760,param_9,uVar2,&UNK_1103d46f8,&PTR_DAT_112dac348);
  func_0x000107c61574(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_1103d4778,
                      "SCNotificationActionHandlerUnauthenticatedScopedEntryPointWrapperScopeInitializationPluginKey"
                      ,0x5d,2,0x10150878c,param_10,uVar2,&UNK_1103d4778,&PTR_DAT_112dac418);
  func_0x000107c61574(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000a6ee8(&UNK_1103d4818,
                      "SCOdlvLoggerServicesProviderWrapperScopeInitializationPluginKey",0x3f,2,
                      0x1015087b8,param_11,uVar2,&UNK_1103d4818,&PTR_DAT_112dac4f8);
  func_0x000107c61574(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000a6ee8(&UNK_1103d4898,
                      "SCPostponedApplicationDidBecomeActiveUnauthenticatedEntryPointWrapperScopeInitializationPluginKey"
                      ,0x61,2,0x1015087e4,param_12,uVar2,&UNK_1103d4898,&PTR_DAT_112dac600);
  func_0x000107c61574(param_12);
  func_0x000107c6157c(param_13);
  func_0x0001000a6ee8(&UNK_1103d4938,
                      "SCPreLoginAttestationServiceEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,0x101508810,param_13,uVar2,&UNK_1103d4938,&PTR_DAT_112dac6d0);
  func_0x000107c61574(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000a6ee8(&UNK_1103d49d8,
                      "SCRedirectToRegInfoServicesEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,0x10150883c,param_14,uVar2,&UNK_1103d49d8,&PTR_DAT_112dac7b8);
  func_0x000107c61574(param_14);
  func_0x000107c6157c(param_15);
  func_0x0001000a6ee8(&UNK_1103d4a78,
                      "SCRegistrationLoggerServicesEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,0x101508868,param_15,uVar2,&UNK_1103d4a78,&PTR_DAT_112dac890);
  func_0x000107c61574(param_15);
  func_0x000107c6157c(param_16);
  func_0x0001000a6ee8(&UNK_1103d4b18,
                      "SCUnauthShortLinkServiceProviderWrapperScopeInitializationPluginKey",0x43,2,
                      0x101508894,param_16,uVar2,&UNK_1103d4b18,&PTR_DAT_112dac9c8);
  func_0x000107c61574(param_16);
  func_0x000107c6157c(param_17);
  func_0x0001000a6ee8(&UNK_1103d4b98,
                      "SCUnauthenticatedBadgeEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      0x1015088c0,param_17,uVar2,&UNK_1103d4b98,&PTR_DAT_112dacac0);
  func_0x000107c61574(param_17);
  func_0x000107c6157c(param_18);
  func_0x0001000a6ee8(&UNK_1103d4c38,
                      "SCUnauthenticatedContactPermissionInfoServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x5b,2,0x1015088ec,param_18,uVar2,&UNK_1103d4c38,&PTR_DAT_112dacb88);
  func_0x000107c61574(param_18);
  func_0x000107c6157c(param_19);
  func_0x0001000a6ee8(&UNK_1103d4cb8,
                      "SCUnauthenticatedJobSchedulerEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,0x101508918,param_19,uVar2,&UNK_1103d4cb8,&PTR_DAT_112dacc68);
  func_0x000107c61574(param_19);
  puVar3 = &UNK_1103d4da8;
  func_0x000107c613fc(&UNK_1103d4da8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_20;
  *(undefined8 *)(puVar3 + 0x18) = param_21;
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x0001000a6ee8(&UNK_1103d3ea8,"SCUnauthenticatedScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_1015089ec,puVar3,uVar2,&UNK_1103d3ea8,&PTR_DAT_112dabba8);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_22);
  func_0x0001000a6ee8(&UNK_1103d4d58,
                      "SCUnauthenticatedStorageEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_101508a78,param_22,uVar2,&UNK_1103d4d58,&PTR_DAT_112dacd40);
  func_0x000107c61574(param_22);
  puVar3 = &UNK_1103d4dd0;
  func_0x000107c613fc(&UNK_1103d4dd0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_20;
  *(undefined8 *)(puVar3 + 0x18) = param_23;
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_23);
  func_0x0001000a6ee8(&UNK_1103d5268,"UnauthenticatedScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_101508aa4,puVar3,uVar2,&UNK_1103d5268,&PTR_DAT_112dad9a0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112dace38;
  func_0x0001000285a8(0x112dace38,&UNK_10d955dd8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCUnauthenticatedScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10150862c; end: 101508943;  */

void FUN_10150862c(void)

{
  FUN_1015089f4();
  return;
}



/* Entry: 101508944; end: 1015089eb;  */

void FUN_101508944(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d4df8;
  func_0x000107c613fc(&UNK_1103d4df8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101508b18;
  func_0x0001000823a8(FUN_101508b18,puVar1);
  func_0x000100082720("SCUnauthenticatedScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1015089ec; end: 1015089f3;  */

void FUN_1015089ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1103d4df8;
  func_0x000107c613fc(&UNK_1103d4df8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101508b18;
  func_0x0001000823a8(FUN_101508b18,puVar3);
  func_0x000100082720("SCUnauthenticatedScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1015089f4; end: 101508a77;  */

void FUN_1015089f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 101508a78; end: 101508aa3;  */

void FUN_101508a78(void)

{
  FUN_1015089f4();
  return;
}



/* Entry: 101508aa4; end: 101508ae3;  */

void FUN_101508aa4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10150b25c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("UnauthenticatedScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101508ae4; end: 101508aeb;  */

void FUN_101508ae4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x101507dcc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101508aec; end: 101508b17;  */

void FUN_101508aec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101508b18; end: 101508baf;  */

void FUN_101508b18(undefined8 *param_1)

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
  puVar1 = &UNK_1103d3f30;
  func_0x000107c613fc(&UNK_1103d3f30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1014fed98;
  func_0x00010058fa64(FUN_1014fed98,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101508bb0; end: 101508d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101508bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_10150a778();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112dace40) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112dace48) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101508d0c);
  (*pcVar2)();
}



/* Entry: 101508d0c; end: 101508d6b; -[_TtC31UnauthenticatedScopeGraphBridge46UnauthenticatedScopeGraphBridgeSaberEntryPoint init] */

void FUN_101508d0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnauthenticatedScopeGraphBridge.UnauthenticatedScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101508d38);
  (*pcVar1)();
}



/* Entry: 101508d6c; end: 101508da3; -[_TtC31UnauthenticatedScopeGraphBridge46UnauthenticatedScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101508d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101508d8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101508d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dace40));
  return;
}



/* Entry: 101508da4; end: 101508dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101508da4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112dace48),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112dace40));
  return;
}



/* Entry: 101508dcc; end: 101508deb;  */

void FUN_101508dcc(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd2f0);
  return;
}



/* Entry: 101508dec; end: 101508e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101508dec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112dad910);
  *(undefined8 *)(unaff_x20 + _DAT_112dace78) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dace80) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101508e88; end: 101508ee7; -[_TtC31UnauthenticatedScopeGraphBridge34SCAppAttestServicesSaberEntryPoint init] */

void FUN_101508e88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnauthenticatedScopeGraphBridge.SCAppAttestServicesSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101508eb4);
  (*pcVar1)();
}



/* Entry: 101508ee8; end: 101508f7b; -[_TtC31UnauthenticatedScopeGraphBridge34SCAppAttestServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101508ee8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dace78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dace80));
  return;
}



/* Entry: 101508f7c; end: 101508f83;  */

undefined8 FUN_101508f7c(void)

{
  return 0;
}



/* Entry: 101508f84; end: 101508fa3;  */

void FUN_101508f84(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd3b8);
  return;
}



/* Entry: 101508fa4; end: 10150903f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101508fa4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112dad920);
  *(undefined8 *)(unaff_x20 + _DAT_112daceb0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112daceb8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101509040; end: 10150909f; -[_TtC31UnauthenticatedScopeGraphBridge52SCAuthenticationOrchestrationServicesSaberEntryPoint init] */

void FUN_101509040(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnauthenticatedScopeGraphBridge.SCAuthenticationOrchestrationServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10150906c);
  (*pcVar1)();
}



/* Entry: 1015090a0; end: 101509133; -[_TtC31UnauthenticatedScopeGraphBridge52SCAuthenticationOrchestrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015090a0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112daceb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daceb8));
  return;
}



/* Entry: 101509134; end: 10150913b;  */

undefined8 FUN_101509134(void)

{
  return 0;
}



/* Entry: 10150913c; end: 10150915b;  */

void FUN_10150913c(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd480);
  return;
}



/* Entry: 10150915c; end: 1015091f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10150915c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112dad928);
  *(undefined8 *)(unaff_x20 + _DAT_112dacee8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dacef0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1015091f8; end: 101509257; -[_TtC31UnauthenticatedScopeGraphBridge52SCBitmojiUnauthenticatedFetchServicesSaberEntryPoint init] */

void FUN_1015091f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnauthenticatedScopeGraphBridge.SCBitmojiUnauthenticatedFetchServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101509224);
  (*pcVar1)();
}



/* Entry: 101509258; end: 1015092eb; -[_TtC31UnauthenticatedScopeGraphBridge52SCBitmojiUnauthenticatedFetchServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101509258(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dacee8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dacef0));
  return;
}



/* Entry: 1015092ec; end: 1015092f3;  */

undefined8 FUN_1015092ec(void)

{
  return 0;
}



/* Entry: 1015092f4; end: 101509313;  */

void FUN_1015092f4(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd548);
  return;
}



/* Entry: 101509314; end: 1015093af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101509314(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112dad950);
  *(undefined8 *)(unaff_x20 + _DAT_112dacf20) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dacf28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1015093b0; end: 10150940f; -[_TtC31UnauthenticatedScopeGraphBridge43SCPreLoginAttestationServiceSaberEntryPoint init] */

void FUN_1015093b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnauthenticatedScopeGraphBridge.SCPreLoginAttestationServiceSaberEntryPoint",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015093dc);
  (*pcVar1)();
}



/* Entry: 101509410; end: 1015094a3; -[_TtC31UnauthenticatedScopeGraphBridge43SCPreLoginAttestationServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101509410(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dacf20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dacf28));
  return;
}



/* Entry: 1015094a4; end: 1015094ab;  */

undefined8 FUN_1015094a4(void)

{
  return 0;
}



/* Entry: 1015094ac; end: 1015094cb;  */

void FUN_1015094ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd610);
  return;
}



/* Entry: 1015094cc; end: 101509567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1015094cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112dad960);
  *(undefined8 *)(unaff_x20 + _DAT_112dacf58) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dacf60) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101509568; end: 1015095c7; -[_TtC31UnauthenticatedScopeGraphBridge43SCRegistrationLoggerServicesSaberEntryPoint init] */

void FUN_101509568(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnauthenticatedScopeGraphBridge.SCRegistrationLoggerServicesSaberEntryPoint",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101509594);
  (*pcVar1)();
}



/* Entry: 1015095c8; end: 10150965b; -[_TtC31UnauthenticatedScopeGraphBridge43SCRegistrationLoggerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015095c8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dacf58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dacf60));
  return;
}



/* Entry: 10150965c; end: 101509663;  */

undefined8 FUN_10150965c(void)

{
  return 0;
}



/* Entry: 101509664; end: 101509683;  */

void FUN_101509664(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd6d8);
  return;
}



/* Entry: 101509684; end: 10150971f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101509684(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112dad988);
  *(undefined8 *)(unaff_x20 + _DAT_112dacf90) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dacf98) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101509720; end: 10150977f; -[_TtC31UnauthenticatedScopeGraphBridge47SCUnauthenticatedStorageServicesSaberEntryPoint init] */

void FUN_101509720(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnauthenticatedScopeGraphBridge.SCUnauthenticatedStorageServicesSaberEntryPoint"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10150974c);
  (*pcVar1)();
}



/* Entry: 101509780; end: 101509813; -[_TtC31UnauthenticatedScopeGraphBridge47SCUnauthenticatedStorageServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101509780(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dacf90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dacf98));
  return;
}



/* Entry: 101509814; end: 10150981b;  */

undefined8 FUN_101509814(void)

{
  return 0;
}



/* Entry: 10150981c; end: 10150983b;  */

void FUN_10150981c(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd7a0);
  return;
}



/* Entry: 10150983c; end: 10150989f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10150983c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad900);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1015098a0; end: 1015098a7;  */

void FUN_1015098a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1015098a8; end: 101509947;  */

void FUN_1015098a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101509948; end: 101509967;  */

void FUN_101509948(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101509968; end: 1015099cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101509968(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad908);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1015099cc; end: 1015099d3;  */

void FUN_1015099cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1015099d4; end: 101509a73;  */

void FUN_1015099d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101509a74; end: 101509a93;  */

void FUN_101509a74(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101509a94; end: 101509af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101509a94(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad918);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101509af8; end: 101509aff;  */

void FUN_101509af8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101509b00; end: 101509b9f;  */

void FUN_101509b00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101509ba0; end: 101509bbf;  */

void FUN_101509ba0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101509bc0; end: 101509c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101509bc0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad930);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101509c24; end: 101509c2b;  */

void FUN_101509c24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101509c2c; end: 101509ccb;  */

void FUN_101509c2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101509ccc; end: 101509ceb;  */

void FUN_101509ccc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101509cec; end: 101509d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101509cec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad938);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101509d50; end: 101509d57;  */

void FUN_101509d50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101509d58; end: 101509df7;  */

void FUN_101509d58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101509df8; end: 101509e17;  */

void FUN_101509df8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101509e18; end: 101509e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101509e18(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad948);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101509e7c; end: 101509e83;  */

void FUN_101509e7c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101509e84; end: 101509f23;  */

void FUN_101509e84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101509f24; end: 101509f43;  */

void FUN_101509f24(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101509f44; end: 101509fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101509f44(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad958);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101509fa8; end: 101509faf;  */

void FUN_101509fa8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101509fb0; end: 10150a04f;  */

void FUN_101509fb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10150a050; end: 10150a06f;  */

void FUN_10150a050(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10150a070; end: 10150a0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10150a070(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad970);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10150a0d4; end: 10150a0db;  */

void FUN_10150a0d4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10150a0dc; end: 10150a17b;  */

void FUN_10150a0dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10150a17c; end: 10150a19b;  */

void FUN_10150a17c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10150a19c; end: 10150a1ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10150a19c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad978);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10150a200; end: 10150a207;  */

void FUN_10150a200(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10150a208; end: 10150a2a7;  */

void FUN_10150a208(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10150a2a8; end: 10150a2c7;  */

void FUN_10150a2a8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10150a2c8; end: 10150a32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10150a2c8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad980);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10150a32c; end: 10150a333;  */

void FUN_10150a32c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10150a334; end: 10150a3d3;  */

void FUN_10150a334(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10150a3d4; end: 10150a3f3;  */

void FUN_10150a3d4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10150a3f4; end: 10150a457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10150a3f4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dad998);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10150a458; end: 10150a45f;  */

void FUN_10150a458(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


