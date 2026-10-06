/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10242e794; end: 10242e7a3; -[_TtC42AdReportAdInfoScopedFactoryServiceProvider30SCAdReportAdInfoScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242e794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e99198));
  return;
}



/* Entry: 10242e7a4; end: 10242e80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242e7a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110506e18;
  func_0x000107c613fc(&UNK_110506e18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10242eae8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10242e810; end: 10242e8ab;  */

void FUN_10242e810(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110506d28;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110506d28;
  return;
}



/* Entry: 10242e8ac; end: 10242e8e3;  */

void FUN_10242e8ac(long *param_1)

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



/* Entry: 10242e8e4; end: 10242e8eb;  */

undefined8 FUN_10242e8e4(void)

{
  return 0x1b;
}



/* Entry: 10242e8ec; end: 10242ea1f;  */

void FUN_10242e8ec(undefined8 *param_1)

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
  puVar1 = &UNK_110506e40;
  func_0x000107c613fc(&UNK_110506e40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10242eac0;
  func_0x00010058fa64(FUN_10242eac0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10242ea20; end: 10242ea4f;  */

undefined ** FUN_10242ea20(void)

{
  return &PTR_DAT_112fee160;
}



/* Entry: 10242ea50; end: 10242ea6f;  */

void FUN_10242ea50(void)

{
  func_0x000107c61168(&PTR_PTR_11283eb00);
  return;
}



/* Entry: 10242ea70; end: 10242eabf;  */

undefined1  [16] FUN_10242ea70(void)

{
  return ZEXT816(0x110506d78);
}



/* Entry: 10242eac0; end: 10242eae7;  */

void FUN_10242eac0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10242eae8; end: 10242eafb;  */

void FUN_10242eae8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10242eafc; end: 10242eee7;  */

void FUN_10242eafc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_70 [2];
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e99210,&UNK_10daa5278);
  puVar1 = auStack_70;
  auStack_70[0] = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102430b08();
  func_0x000100082720("AdReportAdInfoScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e99218,&UNK_10daa5280);
  puVar3 = &UNK_110506ef0;
  func_0x000107c613fc(&UNK_110506ef0,0x88,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  *(undefined8 *)(puVar3 + 0x50) = param_10;
  *(undefined8 *)(puVar3 + 0x58) = param_11;
  *(undefined8 *)(puVar3 + 0x60) = param_12;
  *(undefined8 *)(puVar3 + 0x68) = param_13;
  *(undefined8 *)(puVar3 + 0x70) = param_14;
  *(undefined8 *)(puVar3 + 0x78) = param_15;
  *(undefined8 *)(puVar3 + 0x80) = param_16;
  func_0x000107c6157c(puVar1);
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
  uVar8 = 0x10242ef30;
  func_0x0001000823a8(0x10242ef30,puVar3);
  func_0x000100082720("SCAdReportAdInfoEntryPointWrapperServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10242e8ac;
  func_0x0001000823a8(FUN_10242e8ac,0);
  func_0x000100082720("SCAdReportAdInfoScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e99220,&UNK_10daa5290);
  puVar3 = &UNK_110506f18;
  func_0x000107c613fc(&UNK_110506f18,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_10242ef74;
  func_0x0001000823a8(FUN_10242ef74,puVar3);
  func_0x000100082720("SCAdReportAdInfoScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e991a0,&UNK_10daa5040);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x10242ef80;
  func_0x0001000823a8(0x10242ef80,pcVar5);
  func_0x000100082720("SCAdReportAdInfoScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e99190,&UNK_10daa5030);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x10242ef88;
  func_0x0001000823a8(0x10242ef88,uVar6);
  func_0x000100082720("SCAdReportAdInfoScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110506f40;
  func_0x000107c613fc(&UNK_110506f40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10242ef90;
  func_0x0001000823a8(0x10242ef90,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCAdReportAdInfoScopeEntryPointProvider",0x27,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 10242eee8; end: 10242ef73;  */

void FUN_10242eee8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10242eafc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10242ef74; end: 10242ef97;  */

void FUN_10242ef74(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1024302c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCAdReportAdInfoScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10242ef98; end: 10243005b;  */

void FUN_10242ef98(long *param_1,long param_2)

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
  undefined8 uVar18;
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
  FUN_102430214();
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
  puVar1 = PTR_PTR_1126aa820;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174(uStack_c8);
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar17 = 0x63536f666e496461;
  func_0x000107c5fadc(0x63536f666e496461,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6a80);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efbb930);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c530);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar17);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c3e740(uVar18);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
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
  func_0x000107c61170(uVar15);
  *param_1 = param_2;
  return;
}



/* Entry: 10243005c; end: 102430107;  */

void FUN_10243005c(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102430108; end: 10243010f;  */

undefined8 FUN_102430108(void)

{
  return 0x1b;
}



/* Entry: 102430110; end: 102430193;  */

void FUN_102430110(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102430254,param_2,FUN_102430258,param_2,FUN_102430280,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102430194; end: 1024301e3;  */

undefined8 FUN_102430194(void)

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



/* Entry: 1024301e4; end: 102430213;  */

undefined ** FUN_1024301e4(void)

{
  return &PTR_DAT_112fee160;
}



/* Entry: 102430214; end: 102430233;  */

void FUN_102430214(void)

{
  func_0x000107c61168(&PTR_PTR_112e99290);
  return;
}



/* Entry: 102430234; end: 102430257;  */

undefined1  [16] FUN_102430234(void)

{
  return ZEXT816(0x110506f98);
}



/* Entry: 102430258; end: 10243027f;  */

void FUN_102430258(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102430280; end: 102430287;  */

undefined8 FUN_102430280(void)

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



/* Entry: 102430288; end: 1024302c3;  */

void FUN_102430288(undefined8 *param_1,undefined8 param_2)

{
  FUN_1024302c4();
  func_0x0001000a7f38("SCAdReportAdInfoScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1024302c4; end: 1024304af;  */

void FUN_1024302c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d72b0;
  ppuVar4 = &PTR_DAT_112fee160;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110506fe8;
  func_0x000107c613fc(&UNK_110506fe8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e99360;
  func_0x0001000285a8(0x112e99360,&UNK_10daa5428);
  func_0x0001000a6ee8(&UNK_1105071a8,"AdReportAdInfoScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_1024304b0,puVar2,uVar3,&UNK_1105071a8,&PTR_DAT_112e993f0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110506f98,"SCAdReportAdInfoEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,FUN_102430564,param_3,uVar3,&UNK_110506f98,&PTR_DAT_112e99228);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110507010;
  func_0x000107c613fc(&UNK_110507010,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110506db8,"SCAdReportAdInfoScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_102430614,puVar2,uVar3,&UNK_110506db8,&PTR_DAT_112e991a8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e99368;
  func_0x0001000285a8(0x112e99368,&UNK_10daa5430);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1024304b0; end: 1024304ef;  */

void FUN_1024304b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102430bec(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdReportAdInfoScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024304f0; end: 102430563;  */

void FUN_1024304f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102430650;
  func_0x0001000823a8(0x102430650,param_3);
  func_0x000100082720("SCAdReportAdInfoEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102430564; end: 10243056b;  */

void FUN_102430564(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102430650;
  func_0x0001000823a8();
  func_0x000100082720("SCAdReportAdInfoEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10243056c; end: 102430613;  */

void FUN_10243056c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110507038;
  func_0x000107c613fc(&UNK_110507038,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102430648;
  func_0x0001000823a8(FUN_102430648,puVar1);
  func_0x000100082720("SCAdReportAdInfoScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102430614; end: 10243061b;  */

void FUN_102430614(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110507038;
  func_0x000107c613fc(&UNK_110507038,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102430648;
  func_0x0001000823a8(FUN_102430648,puVar3);
  func_0x000100082720("SCAdReportAdInfoScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10243061c; end: 102430647;  */

void FUN_10243061c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102430648; end: 102430657;  */

void FUN_102430648(undefined8 *param_1)

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
  puVar1 = &UNK_110506e40;
  func_0x000107c613fc(&UNK_110506e40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10242eac0;
  func_0x00010058fa64(FUN_10242eac0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102430658; end: 1024306df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102430658(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102430a18();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e99370) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e99378) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024306e0);
  (*pcVar1)();
}



/* Entry: 1024306e0; end: 10243073f; -[_TtC30AdReportAdInfoScopeGraphBridge45AdReportAdInfoScopeGraphBridgeSaberEntryPoint init] */

void FUN_1024306e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportAdInfoScopeGraphBridge.AdReportAdInfoScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10243070c);
  (*pcVar1)();
}



/* Entry: 102430740; end: 102430777; -[_TtC30AdReportAdInfoScopeGraphBridge45AdReportAdInfoScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010243075c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102430760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102430740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99370));
  return;
}



/* Entry: 102430778; end: 10243079f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102430778(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e99378),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e99370));
  return;
}



/* Entry: 1024307a0; end: 1024307bf;  */

void FUN_1024307a0(void)

{
  func_0x000107c61168(&PTR_PTR_11283ebc0);
  return;
}



/* Entry: 1024307c0; end: 102430847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024307c0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e993a8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e993b0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102430848);
  (*pcVar2)();
}



/* Entry: 102430848; end: 10243092f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102430848(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e993a8);
  *(undefined **)(unaff_x20 + _DAT_112e993a8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e993b0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e993b0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110507108;
  func_0x000107c613fc(&UNK_110507108,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102430934,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102430930; end: 10243093b;  */

void FUN_102430930(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10243093c; end: 10243099b; -[_TtC30AdReportAdInfoScopeGraphBridge45SCAdReportAdInfoScopedServicesSaberEntryPoint init] */

void FUN_10243093c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportAdInfoScopeGraphBridge.SCAdReportAdInfoScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102430968);
  (*pcVar1)();
}



/* Entry: 10243099c; end: 1024309d3; -[_TtC30AdReportAdInfoScopeGraphBridge45SCAdReportAdInfoScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243099c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e993b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e993a8));
  return;
}



/* Entry: 1024309d4; end: 1024309d7;  */

void FUN_1024309d4(void)

{
  return;
}



/* Entry: 1024309d8; end: 1024309f7;  */

void FUN_1024309d8(void)

{
  FUN_102430848();
  return;
}



/* Entry: 1024309f8; end: 102430a17;  */

void FUN_1024309f8(void)

{
  func_0x000107c61168(&PTR_PTR_11283ec88);
  return;
}



/* Entry: 102430a18; end: 102430ae7;  */

undefined8 FUN_102430a18(void)

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
  
  func_0x000107c61428(0x112e993e0,&uStack_40,0x20,0);
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
    FUN_102430ae8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102430ae8; end: 102430b07;  */

void FUN_102430ae8(void)

{
  func_0x000107c61168(&PTR_PTR_11283ed50);
  return;
}



/* Entry: 102430b08; end: 102430b73;  */

void FUN_102430b08(void)

{
  func_0x0001000285a8(0x112e993e8,&UNK_10daa54e8);
  func_0x0001000823a8(0x102430b48,0);
  return;
}



/* Entry: 102430b74; end: 102430baf; -[_TtC30AdReportAdInfoScopeGraphBridge38AdReportAdInfoScopeGraphBridgeServices init] */

void FUN_102430b74(undefined8 param_1)

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



/* Entry: 102430bb0; end: 102430be3;  */

void FUN_102430bb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102430be4; end: 102430beb;  */

undefined8 FUN_102430be4(void)

{
  return 0x1b;
}



/* Entry: 102430bec; end: 102430d63;  */

void FUN_102430bec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110507150;
  func_0x000107c613fc(&UNK_110507150,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102430d64,puVar1);
  return;
}



/* Entry: 102430d64; end: 102430d6b;  */

void FUN_102430d64(undefined8 *param_1)

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
  func_0x000107c61428(0x112e993e0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e993e0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105071e8;
  func_0x000107c613fc(&UNK_1105071e8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102430e18;
  func_0x00010058fa64(0x102430e18,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102430d6c; end: 102430dc7;  */

void FUN_102430d6c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e993e0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e993e0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102430dc8; end: 102430e1f;  */

undefined ** FUN_102430dc8(void)

{
  return &PTR_DAT_112fee160;
}



/* Entry: 102430e20; end: 102430e67; -[SCAdReportAdInfoScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102430e20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99440;
  func_0x000107c61428(param_1 + _DAT_112e99440,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102430e68; end: 102430ebf; -[SCAdReportAdInfoScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102430e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99440;
  func_0x000107c61428(param_1 + _DAT_112e99440,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102430ec0; end: 102430f07; -[SCAdReportAdInfoScopeGraphBridgeSaberEntryPoint adReportAdInfoScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102430ec0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99448;
  func_0x000107c61428(param_1 + _DAT_112e99448,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102430f08; end: 102430f6b; -[SCAdReportAdInfoScopeGraphBridgeSaberEntryPoint setAdReportAdInfoScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102430f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99448;
  func_0x000107c61428(param_1 + _DAT_112e99448,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102430f6c; end: 10243109f;  */

/* WARNING: Possible PIC construction at 0x000102431024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102431040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243105c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102431028) */
/* WARNING: Removing unreachable block (ram,0x000102431044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102430f6c(void)

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
  func_0x000107c3d418();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1024307a0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102430a18();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024310a0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e99370) = lVar5;
    *(long *)(lVar4 + _DAT_112e99378) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1024310a0; end: 1024310c7; -[SCAdReportAdInfoScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1024310a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102430f6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024310c8; end: 10243110b; -[SCAdReportAdInfoScopeGraphBridgeSaberEntryPoint end] */

void FUN_1024310c8(undefined8 param_1)

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



/* Entry: 10243110c; end: 1024312a3;  */

void FUN_10243110c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0f645c0)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f09ba40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdReportAdInfoScopeGraphBridge/SCAdReportAdInfoScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x54,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024312a4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c523a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1024312a4; end: 10243134f; -[SCAdReportAdInfoScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1024312a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10243110c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102431350; end: 1024313bb; -[SCAdReportAdInfoScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102431350(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e99440,0);
  *(undefined8 *)(param_1 + _DAT_112e99448) = 0;
  *(undefined8 *)(param_1 + _DAT_112e99450) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024313bc; end: 1024313ef;  */

void FUN_1024313bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024313f0; end: 102431437; -[SCAdReportAdInfoScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010243141c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102431420) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024313f0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e99440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99448));
  return;
}



/* Entry: 102431438; end: 102431457;  */

void FUN_102431438(void)

{
  func_0x000107c61168(&PTR_PTR_11283ee00);
  return;
}



/* Entry: 102431458; end: 10243149f; -[SCSCAdReportAdInfoScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102431458(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99480;
  func_0x000107c61428(param_1 + _DAT_112e99480,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024314a0; end: 1024314f7; -[SCSCAdReportAdInfoScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024314a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99480;
  func_0x000107c61428(param_1 + _DAT_112e99480,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024314f8; end: 1024315cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024314f8(undefined8 param_1,long param_2)

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
    FUN_1024309f8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e993a8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024315d0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e993b0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e99488);
    *(long **)(unaff_x20 + _DAT_112e99488) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1024315d0; end: 1024315f7; -[SCSCAdReportAdInfoScopedServicesSaberEntryPoint begin] */

void FUN_1024315d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024314f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024315f8; end: 10243176f;  */

/* WARNING: Possible PIC construction at 0x000102431660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024316f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102431664) */
/* WARNING: Removing unreachable block (ram,0x0001024316fc) */
/* WARNING: Removing unreachable block (ram,0x000102431714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024315f8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e99488);
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



/* Entry: 102431770; end: 102431777;  */

void FUN_102431770(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102431778; end: 1024317ab; -[SCSCAdReportAdInfoScopedServicesSaberEntryPoint end] */

void FUN_102431778(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024315f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024317ac; end: 1024318cb;  */

void FUN_1024317ac(long param_1,long param_2,long param_3)

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
                        "AdReportAdInfoScopeGraphBridge/SCSCAdReportAdInfoScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024318cc);
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



/* Entry: 1024318cc; end: 102431977; -[SCSCAdReportAdInfoScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1024318cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024317ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102431978; end: 1024319d7; -[SCSCAdReportAdInfoScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102431978(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e99480,0);
  *(undefined8 *)(param_1 + _DAT_112e99488) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024319d8; end: 102431a0b;  */

void FUN_1024319d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102431a0c; end: 102431a43; -[SCSCAdReportAdInfoScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102431a0c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e99480);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99488));
  return;
}



/* Entry: 102431a44; end: 102431a63;  */

void FUN_102431a44(void)

{
  func_0x000107c61168(&PTR_PTR_11283eec8);
  return;
}



/* Entry: 102431a64; end: 102431acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102431a64(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102431e58();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e994c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102431ad0; end: 102431b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102431ad0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e994c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102431b3c; end: 102431b9b; -[_TtC42AdReportHideAdScopedFactoryServiceProvider30SCAdReportHideAdScopedServices init] */

void FUN_102431b3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportHideAdScopedFactoryServiceProvider.SCAdReportHideAdScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102431b68);
  (*pcVar1)();
}



/* Entry: 102431b9c; end: 102431bab; -[_TtC42AdReportHideAdScopedFactoryServiceProvider30SCAdReportHideAdScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102431b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e994c0));
  return;
}



/* Entry: 102431bac; end: 102431c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102431bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110507400;
  func_0x000107c613fc(&UNK_110507400,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102431ef0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102431c18; end: 102431cb3;  */

void FUN_102431c18(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110507310;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110507310;
  return;
}



/* Entry: 102431cb4; end: 102431ceb;  */

void FUN_102431cb4(long *param_1)

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



/* Entry: 102431cec; end: 102431cf3;  */

undefined8 FUN_102431cec(void)

{
  return 0x1b;
}



/* Entry: 102431cf4; end: 102431e27;  */

void FUN_102431cf4(undefined8 *param_1)

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
  puVar1 = &UNK_110507428;
  func_0x000107c613fc(&UNK_110507428,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102431ec8;
  func_0x00010058fa64(FUN_102431ec8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102431e28; end: 102431e57;  */

undefined ** FUN_102431e28(void)

{
  return &PTR_DAT_112fee208;
}



/* Entry: 102431e58; end: 102431e77;  */

void FUN_102431e58(void)

{
  func_0x000107c61168(&PTR_PTR_11283ef88);
  return;
}



/* Entry: 102431e78; end: 102431ec7;  */

undefined1  [16] FUN_102431e78(void)

{
  return ZEXT816(0x110507360);
}



/* Entry: 102431ec8; end: 102431eef;  */

void FUN_102431ec8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102431ef0; end: 102431ef3;  */

void FUN_102431ef0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102431ef4; end: 102431f9b;  */

/* WARNING: Possible PIC construction at 0x000102431f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102431f88) */

void FUN_102431ef4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105074b0;
  func_0x000107c613fc(&UNK_1105074b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112e99530;
  func_0x0001000285a8(0x112e99530,&UNK_10daa58b0);
  func_0x000107c613fc();
  pcVar3 = FUN_102432328;
  func_0x0001000841fc(FUN_102432328,puVar1,uVar2);
  func_0x000100084214(&UNK_10daa5880,0x2c,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102431f9c; end: 102431fb3;  */

/* WARNING: Possible PIC construction at 0x000102431f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102431f88) */

void FUN_102431f9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1105074b0;
  func_0x000107c613fc(&UNK_1105074b0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112e99530;
  func_0x0001000285a8(0x112e99530,&UNK_10daa58b0);
  func_0x000107c613fc();
  pcVar4 = FUN_102432328;
  func_0x0001000841fc(FUN_102432328,puVar2,uVar3);
  func_0x000100084214(&UNK_10daa5880,0x2c,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102431fb4; end: 102432327;  */

void FUN_102431fb4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e99538,&UNK_10daa58b8);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102433350();
  func_0x000100082720("SCCustomReportV3ScopeExposerSubjectServiceProvider",0x32,2);
  puVar3 = puVar2;
  FUN_1024333dc();
  func_0x000100082720("SCCustomReportV3ScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102431cb4;
  func_0x0001000823a8(FUN_102431cb4,0);
  func_0x000100082720("SCAdReportHideAdScopedServicesCleanupRelayServiceProvider",0x39,2);
  puVar5 = puVar2;
  FUN_102433204();
  func_0x000100082720("AdReportHideAdScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e99540,&UNK_10daa58d0);
  puVar6 = &UNK_1105074d8;
  func_0x000107c613fc(&UNK_1105074d8,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 **)(puVar6 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar3);
  uVar11 = 0x102432330;
  func_0x0001000823a8(0x102432330,puVar6);
  func_0x000100082720("SCAdReportHideAdEntryPointWrapperServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e99548,&UNK_10daa58c0);
  puVar6 = &UNK_110507500;
  func_0x000107c613fc(&UNK_110507500,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_102432378;
  func_0x0001000823a8(FUN_102432378,puVar6);
  func_0x000100082720("SCAdReportHideAdScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e994c8,&UNK_10daa5680);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x102432384;
  func_0x0001000823a8(0x102432384,pcVar7);
  func_0x000100082720("SCAdReportHideAdScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e994b8,&UNK_10daa5670);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10243238c;
  func_0x0001000823a8(0x10243238c,uVar8);
  func_0x000100082720("SCAdReportHideAdScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110507528;
  func_0x000107c613fc(&UNK_110507528,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_1024323c0;
  func_0x0001000823a8(FUN_1024323c0,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCAdReportHideAdScopeEntryPointProvider",0x27,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 102432328; end: 10243233b;  */

void FUN_102432328(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e99538,&UNK_10daa58b8);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102433350();
  func_0x000100082720("SCCustomReportV3ScopeExposerSubjectServiceProvider",0x32,2);
  puVar3 = puVar2;
  FUN_1024333dc();
  func_0x000100082720("SCCustomReportV3ScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102431cb4;
  func_0x0001000823a8(FUN_102431cb4,0);
  func_0x000100082720("SCAdReportHideAdScopedServicesCleanupRelayServiceProvider",0x39,2);
  puVar5 = puVar2;
  FUN_102433204();
  func_0x000100082720("AdReportHideAdScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e99540,&UNK_10daa58d0);
  puVar6 = &UNK_1105074d8;
  func_0x000107c613fc(&UNK_1105074d8,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  *(undefined8 **)(puVar6 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar7 = 0x102432330;
  func_0x0001000823a8(0x102432330,puVar6);
  func_0x000100082720("SCAdReportHideAdEntryPointWrapperServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e99548,&UNK_10daa58c0);
  puVar6 = &UNK_110507500;
  func_0x000107c613fc(&UNK_110507500,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_102432378;
  func_0x0001000823a8(FUN_102432378,puVar6);
  func_0x000100082720("SCAdReportHideAdScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e994c8,&UNK_10daa5680);
  func_0x000107c6157c(pcVar8);
  uVar9 = 0x102432384;
  func_0x0001000823a8(0x102432384,pcVar8);
  func_0x000100082720("SCAdReportHideAdScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e994b8,&UNK_10daa5670);
  func_0x000107c6157c(uVar9);
  uVar11 = 0x10243238c;
  func_0x0001000823a8(0x10243238c,uVar9);
  func_0x000100082720("SCAdReportHideAdScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110507528;
  func_0x000107c613fc(&UNK_110507528,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar11;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_1024323c0;
  func_0x0001000823a8(FUN_1024323c0,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCAdReportHideAdScopeEntryPointProvider",0x27,2);
  *param_1 = pcVar10;
  return;
}


