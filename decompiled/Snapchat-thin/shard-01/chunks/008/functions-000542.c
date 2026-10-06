/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015185a8; end: 101518653; -[SCSCPhoneCodeScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1015185a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101518488(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101518654; end: 1015186b3; -[SCSCPhoneCodeScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101518654(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daeb58,0);
  *(undefined8 *)(param_1 + _DAT_112daeb60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1015186b4; end: 1015186e7;  */

void FUN_1015186b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1015186e8; end: 10151871f; -[SCSCPhoneCodeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015186e8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daeb58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daeb60));
  return;
}



/* Entry: 101518720; end: 10151873f;  */

void FUN_101518720(void)

{
  func_0x000107c61168(&PTR_PTR_1127deb10);
  return;
}



/* Entry: 101518740; end: 1015187ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101518740(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101518b34();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112daeb98) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1015187ac; end: 101518817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015187ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daeb98) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101518818; end: 101518877; -[_TtC40RegistrationScopedFactoryServiceProvider28SCRegistrationScopedServices init] */

void FUN_101518818(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RegistrationScopedFactoryServiceProvider.SCRegistrationScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101518844);
  (*pcVar1)();
}



/* Entry: 101518878; end: 101518887; -[_TtC40RegistrationScopedFactoryServiceProvider28SCRegistrationScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101518878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112daeb98));
  return;
}



/* Entry: 101518888; end: 1015188f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101518888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103d61f8;
  func_0x000107c613fc(&UNK_1103d61f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101518bcc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1015188f4; end: 10151898f;  */

void FUN_1015188f4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d6108;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d6108;
  return;
}



/* Entry: 101518990; end: 1015189c7;  */

void FUN_101518990(long *param_1)

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



/* Entry: 1015189c8; end: 1015189cf;  */

undefined8 FUN_1015189c8(void)

{
  return 0x1b;
}



/* Entry: 1015189d0; end: 101518b03;  */

void FUN_1015189d0(undefined8 *param_1)

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
  puVar1 = &UNK_1103d6220;
  func_0x000107c613fc(&UNK_1103d6220,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101518ba4;
  func_0x00010058fa64(FUN_101518ba4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101518b04; end: 101518b33;  */

undefined ** FUN_101518b04(void)

{
  return &PTR_DAT_113066e80;
}



/* Entry: 101518b34; end: 101518b53;  */

void FUN_101518b34(void)

{
  func_0x000107c61168(&PTR_PTR_1127debd0);
  return;
}



/* Entry: 101518b54; end: 101518ba3;  */

undefined1  [16] FUN_101518b54(void)

{
  return ZEXT816(0x1103d6158);
}



/* Entry: 101518ba4; end: 101518bcb;  */

void FUN_101518ba4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101518bcc; end: 101518bcf;  */

void FUN_101518bcc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101518bd0; end: 101518fc7;  */

void FUN_101518bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112daec00,&UNK_10d957540);
  puVar1 = &UNK_1103d6260;
  func_0x000107c613fc(&UNK_1103d6260,0xc0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_20;
  *(undefined8 *)(puVar1 + 0x18) = param_11;
  *(undefined8 *)(puVar1 + 0x20) = param_14;
  *(undefined8 *)(puVar1 + 0x28) = param_13;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_21;
  *(undefined8 *)(puVar1 + 0x40) = param_12;
  *(undefined8 *)(puVar1 + 0x48) = param_19;
  *(undefined8 *)(puVar1 + 0x50) = param_17;
  *(undefined8 *)(puVar1 + 0x58) = param_16;
  *(undefined8 *)(puVar1 + 0x60) = param_10;
  *(undefined8 *)(puVar1 + 0x68) = param_18;
  *(undefined8 *)(puVar1 + 0x70) = param_7;
  *(undefined8 *)(puVar1 + 0x78) = param_8;
  *(undefined8 *)(puVar1 + 0x80) = param_4;
  *(undefined8 *)(puVar1 + 0x88) = param_9;
  *(undefined8 *)(puVar1 + 0x90) = param_3;
  *(undefined8 *)(puVar1 + 0x98) = param_2;
  *(undefined8 *)(puVar1 + 0xa0) = param_1;
  *(undefined8 *)(puVar1 + 0xa8) = param_22;
  *(undefined8 *)(puVar1 + 0xb0) = param_6;
  *(undefined8 *)(puVar1 + 0xb8) = param_15;
  func_0x000107c6157c();
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_15);
  func_0x0001000823a8(FUN_101518fc8,puVar1);
  return;
}



/* Entry: 101518fc8; end: 101519013;  */

void FUN_101518fc8(void)

{
  long unaff_x20;
  
  func_0x000101518dbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 101519014; end: 101519023;  */

undefined1  [16] FUN_101519014(void)

{
  return ZEXT816(0x1103d6288);
}



/* Entry: 101519024; end: 101519603;  */

void FUN_101519024(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 auStack_70 [2];
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112daec10,&UNK_10d957588);
  puVar1 = auStack_70;
  auStack_70[0] = uVar12;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112daec18,&UNK_10d957590);
  puVar2 = &UNK_1103d62d0;
  func_0x000107c613fc(&UNK_1103d62d0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  pcVar3 = FUN_101519730;
  func_0x0001000823a8(FUN_101519730,puVar2);
  func_0x000100082720("RegistrationResourcePrefetchFeatureEntryPointWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x112daec20,&UNK_10d957740);
  puVar2 = &UNK_1103d62f8;
  func_0x000107c613fc(&UNK_1103d62f8,0xb0,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_9;
  *(undefined8 *)(puVar2 + 0x48) = param_10;
  *(undefined8 *)(puVar2 + 0x50) = param_11;
  *(undefined8 *)(puVar2 + 0x58) = param_12;
  *(undefined8 *)(puVar2 + 0x60) = param_13;
  *(undefined8 *)(puVar2 + 0x68) = param_14;
  *(undefined8 *)(puVar2 + 0x70) = param_15;
  *(undefined8 *)(puVar2 + 0x78) = param_16;
  *(undefined8 *)(puVar2 + 0x80) = param_17;
  *(undefined8 *)(puVar2 + 0x88) = param_18;
  *(undefined8 *)(puVar2 + 0x90) = param_19;
  *(undefined8 *)(puVar2 + 0x98) = param_20;
  *(undefined8 *)(puVar2 + 0xa0) = param_21;
  *(undefined8 *)(puVar2 + 0xa8) = param_22;
  func_0x000107c6157c(puVar1);
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
  pcVar4 = FUN_101519738;
  func_0x0001000823a8(FUN_101519738,puVar2);
  func_0x000100082720("SCRegistrationServicesEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112daec28,&UNK_10d9575a0);
  puVar2 = &UNK_1103d6320;
  func_0x000107c613fc(&UNK_1103d6320,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  *(undefined8 *)(puVar2 + 0x20) = param_23;
  *(undefined8 *)(puVar2 + 0x28) = param_24;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  pcVar5 = FUN_101519784;
  func_0x0001000823a8(FUN_101519784,puVar2);
  func_0x000100082720("ScheduleReRegistrationNotificationRegistrationScopedEntryPointWrapperServiceProvider"
                      ,0x54,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_101518990;
  func_0x0001000823a8(FUN_101518990,0);
  func_0x000100082720("SCRegistrationScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daec30,&UNK_10d9575b0);
  func_0x000107c6157c(pcVar4);
  uVar12 = 0x101519790;
  func_0x0001000823a8(0x101519790,pcVar4);
  func_0x000100082720("SCRegistrationServicesServiceProvider",0x25,2);
  uVar7 = uVar12;
  FUN_10151c358();
  func_0x000100082720("RegistrationScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daec38,&UNK_10d9575b8);
  puVar2 = &UNK_1103d6348;
  func_0x000107c613fc(&UNK_1103d6348,0x40,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(code **)(puVar2 + 0x28) = pcVar6;
  *(code **)(puVar2 + 0x30) = pcVar4;
  *(code **)(puVar2 + 0x38) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x101519798;
  func_0x0001000823a8(0x101519798,puVar2);
  func_0x000100082720("SCRegistrationScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112daeba0,&UNK_10d957350);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1015197a8;
  func_0x0001000823a8(0x1015197a8,uVar8);
  func_0x000100082720("SCRegistrationScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daeb90,&UNK_10d957340);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1015197b0;
  func_0x0001000823a8(0x1015197b0,uVar9);
  func_0x000100082720("SCRegistrationScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1103d6370;
  func_0x000107c613fc(&UNK_1103d6370,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  *(code **)(puVar2 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  pcVar11 = FUN_1015197e4;
  func_0x0001000823a8(FUN_1015197e4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCRegistrationScopeEntryPointProvider",0x25,2);
  *param_1 = pcVar11;
  return;
}



/* Entry: 101519604; end: 10151972f;  */

void FUN_101519604(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101519730; end: 101519737;  */

void FUN_101519730(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  FUN_101519a58();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_101520ef0(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000101520c94();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  func_0x000107c6157c();
  FUN_101520cbc();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = lVar1;
  return;
}



/* Entry: 101519738; end: 101519783;  */

void FUN_101519738(void)

{
  long unaff_x20;
  
  FUN_101519af0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 101519784; end: 1015197b7;  */

void FUN_101519784(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  FUN_10151b7dc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  func_0x000101a794a0(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  func_0x000101a791d0(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 1015197b8; end: 1015197e3;  */

void FUN_1015197b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1015197e4; end: 1015197eb;  */

void FUN_1015197e4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d6108;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d6108;
  return;
}



/* Entry: 1015197ec; end: 1015198c7;  */

void FUN_1015197ec(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_101519a58();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_101520ef0(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000101520c94();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  func_0x000107c6157c();
  FUN_101520cbc();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 1015198c8; end: 10151996f;  */

long FUN_1015198c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_101520ef0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101520c94();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_101520cbc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 101519970; end: 10151999b;  */

void FUN_101519970(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10151999c; end: 1015199a3;  */

undefined8 FUN_10151999c(void)

{
  return 0x1b;
}



/* Entry: 1015199a4; end: 101519a27;  */

void FUN_1015199a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101519a98,param_2,FUN_101519a9c,param_2,0x101519ac4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101519a28; end: 101519a57;  */

undefined ** FUN_101519a28(void)

{
  return &PTR_DAT_113066e80;
}



/* Entry: 101519a58; end: 101519a77;  */

void FUN_101519a58(void)

{
  func_0x000107c61168(&PTR_PTR_112daeca8);
  return;
}



/* Entry: 101519a78; end: 101519a9b;  */

undefined1  [16] FUN_101519a78(void)

{
  return ZEXT816(0x1103d63c8);
}



/* Entry: 101519a9c; end: 101519aef;  */

void FUN_101519a9c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101519af0; end: 10151b277;  */

void FUN_101519af0(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  FUN_10151b4bc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_100;
  *(undefined8 *)(param_2 + 0xb0) = uStack_108;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_c0);
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174();
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar19 = uStack_100;
  func_0x000107c61174();
  uVar20 = uStack_108;
  func_0x000107c61174(uStack_108);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7638;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar21 = auStack_70[0];
  func_0x000107c61174();
  uVar26 = 0xd000000000000011;
  uVar22 = uVar26;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef8cc80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000013;
  uVar22 = uVar24;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3dac0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef17060);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar22 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3db40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar22 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar22 = uVar24;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3dba0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef8cca0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar22);
  func_0x000107c615f0(uStack_c0);
  func_0x000107c61174(puVar2);
  uVar22 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3db20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uStack_c0);
  func_0x000107c61170(uVar22);
  uVar23 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef17040);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3db00);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef12d70);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar22);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar23);
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef3daa0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar26);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar23);
  uVar22 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef16f70);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar22);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar22 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef8ccc0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef170a0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef8ccf0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar22);
  func_0x000107c61174(uVar20);
  func_0x000107c61174(uVar23);
  uVar22 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar22);
  lVar25 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar23);
  func_0x000107c61174();
  uVar22 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef8cd10);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(uVar22);
  func_0x000107c3e740(uVar23);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar25 != 0) {
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c615e8(uStack_c0);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    *(long *)(param_2 + 0xb8) = lVar25;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10151a784);
  (*pcVar1)();
}



/* Entry: 10151b278; end: 10151b35b;  */

void FUN_10151b278(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 10151b35c; end: 10151b3af;  */

void FUN_10151b35c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10151b3b0; end: 10151b3b7;  */

undefined8 FUN_10151b3b0(void)

{
  return 0x1b;
}



/* Entry: 10151b3b8; end: 10151b43b;  */

void FUN_10151b3b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x10151b50c,param_2,FUN_10151b510,param_2,FUN_10151b538,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10151b43c; end: 10151b48b;  */

undefined8 FUN_10151b43c(void)

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



/* Entry: 10151b48c; end: 10151b4bb;  */

undefined ** FUN_10151b48c(void)

{
  return &PTR_DAT_113066e80;
}



/* Entry: 10151b4bc; end: 10151b4db;  */

void FUN_10151b4bc(void)

{
  func_0x000107c61168(&PTR_PTR_112daed78);
  return;
}



/* Entry: 10151b4dc; end: 10151b50f;  */

undefined1  [16] FUN_10151b4dc(void)

{
  return ZEXT816(0x1103d6448);
}



/* Entry: 10151b510; end: 10151b537;  */

void FUN_10151b510(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10151b538; end: 10151b53f;  */

undefined8 FUN_10151b538(void)

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



/* Entry: 10151b540; end: 10151b63b;  */

void FUN_10151b540(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_10151b7dc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  func_0x000101a794a0(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  func_0x000101a791d0(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 10151b63c; end: 10151b6e3;  */

long FUN_10151b63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x000101a794a0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000101a791d0(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10151b6e4; end: 10151b71f;  */

void FUN_10151b6e4(void)

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



/* Entry: 10151b720; end: 10151b727;  */

undefined8 FUN_10151b720(void)

{
  return 0x1b;
}



/* Entry: 10151b728; end: 10151b7ab;  */

void FUN_10151b728(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10151b81c,param_2,FUN_10151b820,param_2,0x10151b848,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10151b7ac; end: 10151b7db;  */

undefined ** FUN_10151b7ac(void)

{
  return &PTR_DAT_113066e80;
}



/* Entry: 10151b7dc; end: 10151b7fb;  */

void FUN_10151b7dc(void)

{
  func_0x000107c61168(&PTR_PTR_112daeee8);
  return;
}



/* Entry: 10151b7fc; end: 10151b81f;  */

undefined1  [16] FUN_10151b7fc(void)

{
  return ZEXT816(0x1103d64e8);
}



/* Entry: 10151b820; end: 10151b873;  */

void FUN_10151b820(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10151b874; end: 10151bb37;  */

void FUN_10151b874(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074daa0;
  ppuVar4 = &PTR_DAT_113066e80;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112daef60;
  func_0x0001000285a8(0x112daef60,&UNK_10d957b28);
  func_0x0001000a6ee8(&UNK_1103d63c8,
                      "RegistrationResourcePrefetchFeatureEntryPointWrapperScopeInitializationPluginKey"
                      ,0x50,2,FUN_10151bb38,param_2,uVar2,&UNK_1103d63c8,&PTR_DAT_112daec40);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_1103d6538;
  func_0x000107c613fc(&UNK_1103d6538,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1103d6760,"RegistrationScopeGraphBridgeScopeInitializationPluginKey",0x38
                      ,2,FUN_10151bb64,puVar3,uVar2,&UNK_1103d6760,&PTR_DAT_112daf0c8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1103d6560;
  func_0x000107c613fc(&UNK_1103d6560,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1103d6198,"SCRegistrationScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_10151bc4c,puVar3,uVar2,&UNK_1103d6198,&PTR_DAT_112daeba8);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1103d6468,
                      "SCRegistrationServicesEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_10151bc54,param_6,uVar2,&UNK_1103d6468,&PTR_DAT_112daed10);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1103d64e8,
                      "ScheduleReRegistrationNotificationRegistrationScopedEntryPointWrapperScopeInitializationPluginKey"
                      ,0x61,2,FUN_10151bd04,param_7,uVar2,&UNK_1103d64e8,&PTR_DAT_112daee80);
  func_0x000107c61574(param_7);
  uVar2 = 0x112daef68;
  func_0x0001000285a8(0x112daef68,&UNK_10d957b30);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCRegistrationScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10151bb38; end: 10151bb63;  */

void FUN_10151bb38(void)

{
  FUN_10151bc80();
  return;
}



/* Entry: 10151bb64; end: 10151bba3;  */

void FUN_10151bb64(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10151c4dc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("RegistrationScopeGraphBridgeScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10151bba4; end: 10151bc4b;  */

void FUN_10151bba4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d6588;
  func_0x000107c613fc(&UNK_1103d6588,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10151bd6c;
  func_0x0001000823a8(FUN_10151bd6c,puVar1);
  func_0x000100082720("SCRegistrationScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10151bc4c; end: 10151bc53;  */

void FUN_10151bc4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1103d6588;
  func_0x000107c613fc(&UNK_1103d6588,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10151bd6c;
  func_0x0001000823a8(FUN_10151bd6c,puVar3);
  func_0x000100082720("SCRegistrationScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10151bc54; end: 10151bc7f;  */

void FUN_10151bc54(void)

{
  FUN_10151bc80();
  return;
}



/* Entry: 10151bc80; end: 10151bd03;  */

void FUN_10151bc80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 10151bd04; end: 10151bd2f;  */

void FUN_10151bd04(void)

{
  FUN_10151bc80();
  return;
}



/* Entry: 10151bd30; end: 10151bd3f;  */

void FUN_10151bd30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x10151b81c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10151bd40; end: 10151bd6b;  */

void FUN_10151bd40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10151bd6c; end: 10151bd7b;  */

void FUN_10151bd6c(undefined8 *param_1)

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
  puVar1 = &UNK_1103d6220;
  func_0x000107c613fc(&UNK_1103d6220,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101518ba4;
  func_0x00010058fa64(FUN_101518ba4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10151bd7c; end: 10151be03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10151bd7c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10151c268();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112daef70) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112daef78) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10151be04);
  (*pcVar1)();
}



/* Entry: 10151be04; end: 10151be63; -[_TtC28RegistrationScopeGraphBridge43RegistrationScopeGraphBridgeSaberEntryPoint init] */

void FUN_10151be04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RegistrationScopeGraphBridge.RegistrationScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10151be30);
  (*pcVar1)();
}



/* Entry: 10151be64; end: 10151be9b; -[_TtC28RegistrationScopeGraphBridge43RegistrationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010151be80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010151be84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151be64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daef70));
  return;
}



/* Entry: 10151be9c; end: 10151bec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151be9c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112daef78),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112daef70));
  return;
}



/* Entry: 10151bec4; end: 10151bee3;  */

void FUN_10151bec4(void)

{
  func_0x000107c61168(&PTR_PTR_1127dec90);
  return;
}



/* Entry: 10151bee4; end: 10151bf47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10151bee4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112daf0c0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10151bf48; end: 10151bf4f;  */

void FUN_10151bf48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10151bf50; end: 10151bfef;  */

void FUN_10151bf50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10151bff0; end: 10151c00f;  */

void FUN_10151bff0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10151c010; end: 10151c097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10151c010(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daf078) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112daf080);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10151c098);
  (*pcVar2)();
}



/* Entry: 10151c098; end: 10151c17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10151c098(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daf078);
  *(undefined **)(unaff_x20 + _DAT_112daf078) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daf080);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112daf080))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1103d66c0;
  func_0x000107c613fc(&UNK_1103d66c0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10151c184,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10151c180; end: 10151c18b;  */

void FUN_10151c180(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10151c18c; end: 10151c1eb; -[_TtC28RegistrationScopeGraphBridge43SCRegistrationScopedServicesSaberEntryPoint init] */

void FUN_10151c18c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RegistrationScopeGraphBridge.SCRegistrationScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10151c1b8);
  (*pcVar1)();
}



/* Entry: 10151c1ec; end: 10151c223; -[_TtC28RegistrationScopeGraphBridge43SCRegistrationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c1ec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112daf080));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daf078));
  return;
}



/* Entry: 10151c224; end: 10151c227;  */

void FUN_10151c224(void)

{
  return;
}



/* Entry: 10151c228; end: 10151c247;  */

void FUN_10151c228(void)

{
  FUN_10151c098();
  return;
}



/* Entry: 10151c248; end: 10151c267;  */

void FUN_10151c248(void)

{
  func_0x000107c61168(&PTR_PTR_1127ded58);
  return;
}



/* Entry: 10151c268; end: 10151c337;  */

undefined8 FUN_10151c268(void)

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
  
  func_0x000107c61428(0x112daf0b0,&uStack_40,0x20,0);
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
    FUN_10151c338();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10151c338; end: 10151c357;  */

void FUN_10151c338(void)

{
  func_0x000107c61168(&PTR_PTR_1127dee20);
  return;
}



/* Entry: 10151c358; end: 10151c3a3;  */

void FUN_10151c358(undefined8 param_1)

{
  func_0x0001000285a8(0x112daf0b8,&UNK_10d957c28);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10151c410,param_1);
  return;
}



/* Entry: 10151c3a4; end: 10151c40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c3a4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10151c338();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112daf0c0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10151c410; end: 10151c417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c410(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10151c338();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112daf0c0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10151c418; end: 10151c463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c418(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daf0c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10151c464; end: 10151c4c3; -[_TtC28RegistrationScopeGraphBridge36RegistrationScopeGraphBridgeServices init] */

void FUN_10151c464(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RegistrationScopeGraphBridge.RegistrationScopeGraphBridgeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10151c490);
  (*pcVar1)();
}



/* Entry: 10151c4c4; end: 10151c4db; -[_TtC28RegistrationScopeGraphBridge36RegistrationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112daf0c0));
  return;
}



/* Entry: 10151c4dc; end: 10151c653;  */

void FUN_10151c4dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d6708;
  func_0x000107c613fc(&UNK_1103d6708,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10151c654,puVar1);
  return;
}



/* Entry: 10151c654; end: 10151c65b;  */

void FUN_10151c654(undefined8 *param_1)

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
  func_0x000107c61428(0x112daf0b0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112daf0b0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1103d67a0;
  func_0x000107c613fc(&UNK_1103d67a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10151c708;
  func_0x00010058fa64(0x10151c708,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10151c65c; end: 10151c6b7;  */

void FUN_10151c65c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112daf0b0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112daf0b0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10151c6b8; end: 10151c70f;  */

undefined ** FUN_10151c6b8(void)

{
  return &PTR_DAT_113066e80;
}



/* Entry: 10151c710; end: 10151c757; -[SCRegistrationScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c710(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daf118;
  func_0x000107c61428(param_1 + _DAT_112daf118,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10151c758; end: 10151c7af; -[SCRegistrationScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c758(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daf118;
  func_0x000107c61428(param_1 + _DAT_112daf118,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


