/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10258a7c0; end: 10258a82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258a7c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110522cd0;
  func_0x000107c613fc(&UNK_110522cd0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10258ab04,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10258a82c; end: 10258a8c7;  */

void FUN_10258a82c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110522be0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110522be0;
  return;
}



/* Entry: 10258a8c8; end: 10258a8ff;  */

void FUN_10258a8c8(long *param_1)

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



/* Entry: 10258a900; end: 10258a907;  */

undefined8 FUN_10258a900(void)

{
  return 0x1b;
}



/* Entry: 10258a908; end: 10258aa3b;  */

void FUN_10258a908(undefined8 *param_1)

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
  puVar1 = &UNK_110522cf8;
  func_0x000107c613fc(&UNK_110522cf8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10258aadc;
  func_0x00010058fa64(FUN_10258aadc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10258aa3c; end: 10258aa6b;  */

undefined ** FUN_10258aa3c(void)

{
  return &PTR_DAT_113066b38;
}



/* Entry: 10258aa6c; end: 10258aa8b;  */

void FUN_10258aa6c(void)

{
  func_0x000107c61168(&PTR_PTR_11284f868);
  return;
}



/* Entry: 10258aa8c; end: 10258aadb;  */

undefined1  [16] FUN_10258aa8c(void)

{
  return ZEXT816(0x110522c30);
}



/* Entry: 10258aadc; end: 10258ab03;  */

void FUN_10258aadc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10258ab04; end: 10258ab17;  */

void FUN_10258ab04(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10258ab18; end: 10258b50f;  */

void FUN_10258ab18(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_49,undefined8 param_50,undefined8 param_51)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000410;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 auStack_70 [2];
  
  uVar13 = *param_2;
  func_0x0001000285a8(0x112ea6cb8,&UNK_10daba050);
  puVar1 = auStack_70;
  auStack_70[0] = uVar13;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001027059a8();
  func_0x000100082720("SCMapViewScopeExposerSubjectServiceProvider",0x2b,2);
  FUN_10258cdbc(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,param_21,
                param_22,param_23,param_24,param_25,param_26,param_27,param_28,param_29,param_30,
                param_31,param_32,param_33,param_34,param_35,param_36,param_37,param_38,param_39,
                param_40,param_41,param_42,param_43,param_44,param_45,param_46,param_47,param_48,
                param_49,param_50,param_51);
  func_0x000100082720("SCMapViewScopedFactoryServiceProvider",0x25,2);
  FUN_10271005c(in_stack_000004e8,puVar1,in_stack_00000410,in_stack_000004f0);
  func_0x000100082720("SecondaryLocationDeviceMapViewScopedFactoryServiceProvider",0x3a,2);
  puVar3 = puVar2;
  func_0x000102705a34();
  func_0x000100082720("SCMapViewScopeExposerObservableServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10258a8c8;
  func_0x0001000823a8(FUN_10258a8c8,0);
  func_0x000100082720("SCFullMapScopedServicesCleanupRelayServiceProvider",0x32,2);
  uVar5 = in_stack_000004e8;
  func_0x000102710cf4();
  func_0x000100082720("SecondaryLocationDeviceMapViewBuilderServiceProvider",0x34,2);
  uVar6 = uVar5;
  FUN_102710c7c();
  func_0x000100082720("SecondaryLocationDeviceMapViewFactoryServiceProvider",0x34,2);
  uVar7 = param_3;
  func_0x00010438fa28();
  func_0x000100082720("SCMapViewScopeServicesServiceProvider",0x25,2);
  puVar8 = puVar2;
  FUN_1027057fc(puVar2,uVar7);
  func_0x000100082720("FullMapScopeGraphBridgeServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112ea6cc0,&UNK_10daba060);
  puVar12 = &UNK_110522da8;
  func_0x000107c613fc(&UNK_110522da8,0x48,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar1;
  *(undefined8 *)(puVar12 + 0x18) = param_33;
  *(undefined8 *)(puVar12 + 0x20) = uVar7;
  *(undefined8 *)(puVar12 + 0x28) = param_37;
  *(undefined8 *)(puVar12 + 0x30) = in_stack_00000358;
  *(undefined8 *)(puVar12 + 0x38) = uVar6;
  *(undefined8 **)(puVar12 + 0x40) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(puVar3);
  pcVar9 = FUN_10258bad0;
  func_0x0001000823a8(FUN_10258bad0,puVar12);
  func_0x000100082720("SCFullMapEntryPointWrapperServiceProvider",0x29,2);
  func_0x0001000285a8(0x112ea6cc8,&UNK_10daba068);
  puVar12 = &UNK_110522dd0;
  func_0x000107c613fc(&UNK_110522dd0,0x30,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar1;
  *(undefined8 **)(puVar12 + 0x18) = puVar8;
  *(code **)(puVar12 + 0x20) = pcVar9;
  *(code **)(puVar12 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(pcVar4);
  uVar13 = 0x10258bae4;
  func_0x0001000823a8(0x10258bae4,puVar12);
  func_0x000100082720("SCFullMapScopeInitializationPluginRegistryServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ea6c48,&UNK_10dab9e20);
  func_0x000107c6157c(uVar13);
  uVar10 = 0x10258baf0;
  func_0x0001000823a8(0x10258baf0,uVar13);
  func_0x000100082720("SCFullMapScopeInitializationServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112ea6c38,&UNK_10dab9e10);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x10258baf8;
  func_0x0001000823a8(0x10258baf8,uVar10);
  func_0x000100082720("SCFullMapScopedServicesServiceProvider",0x26,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar12 = &UNK_110522df8;
  func_0x000107c613fc(&UNK_110522df8,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar11;
  *(code **)(puVar12 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar11 = 0x10258bb00;
  func_0x0001000823a8(0x10258bb00,puVar12);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(in_stack_000004e8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCFullMapScopeEntryPointProvider",0x20,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 10258b510; end: 10258bacf;  */

void FUN_10258b510(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10258ab18(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 10258bad0; end: 10258bb07;  */

void FUN_10258bad0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_10258c4e8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_88;
  *(undefined8 *)(lVar1 + 0x40) = uStack_90;
  func_0x0001000285a8(0x112ea6cd0,&UNK_10daba078);
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
  uVar9 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(lVar1 + 0x18) = puVar7;
  puVar7 = PTR_PTR_1126aaaf0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x65706f635370616d;
  func_0x000107c5fadc(0x65706f635370616d,0xe800000000000000);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0ab2e0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00c4d0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f00c5b0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f0ab300);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar9);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0ab330);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_98);
  *param_1 = lVar1;
  return;
}



/* Entry: 10258bb08; end: 10258c36f;  */

void FUN_10258bb08(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  FUN_10258c4e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  func_0x0001000285a8(0x112ea6cd0,&UNK_10daba078);
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
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x18) = puVar6;
  puVar6 = PTR_PTR_1126aaaf0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x65706f635370616d;
  func_0x000107c5fadc(0x65706f635370616d,0xe800000000000000);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0ab2e0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00c4d0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f00c5b0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f0ab300);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar8);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0ab330);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_98);
  *param_1 = param_2;
  return;
}



/* Entry: 10258c370; end: 10258c3db;  */

void FUN_10258c370(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10258c3dc; end: 10258c3e3;  */

undefined8 FUN_10258c3dc(void)

{
  return 0x1b;
}



/* Entry: 10258c3e4; end: 10258c467;  */

void FUN_10258c3e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10258c528,param_2,FUN_10258c52c,param_2,FUN_10258c554,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10258c468; end: 10258c4b7;  */

undefined8 FUN_10258c468(void)

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



/* Entry: 10258c4b8; end: 10258c4e7;  */

undefined ** FUN_10258c4b8(void)

{
  return &PTR_DAT_113066b38;
}



/* Entry: 10258c4e8; end: 10258c507;  */

void FUN_10258c4e8(void)

{
  func_0x000107c61168(&PTR_PTR_112ea6d40);
  return;
}



/* Entry: 10258c508; end: 10258c52b;  */

undefined1  [16] FUN_10258c508(void)

{
  return ZEXT816(0x110522e50);
}



/* Entry: 10258c52c; end: 10258c553;  */

void FUN_10258c52c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10258c554; end: 10258c55b;  */

undefined8 FUN_10258c554(void)

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



/* Entry: 10258c55c; end: 10258c597;  */

void FUN_10258c55c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10258c598();
  func_0x0001000a7f38("SCFullMapScopeInitializationPluginRegistryServiceProvider",0x39,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10258c598; end: 10258c783;  */

void FUN_10258c598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d528;
  ppuVar4 = &PTR_DAT_113066b38;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110522ea0;
  func_0x000107c613fc(&UNK_110522ea0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ea6dd0;
  func_0x0001000285a8(0x112ea6dd0,&UNK_10daba1c0);
  func_0x0001000a6ee8(&UNK_11053e820,"FullMapScopeGraphBridgeScopeInitializationPluginKey",0x33,2,
                      FUN_10258c784,puVar2,uVar3,&UNK_11053e820,&PTR_DAT_112eb9ef8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110522e50,"SCFullMapEntryPointWrapperScopeInitializationPluginKey",0x36,2
                      ,FUN_10258c838,param_3,uVar3,&UNK_110522e50,&PTR_DAT_112ea6cd8);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110522ec8;
  func_0x000107c613fc(&UNK_110522ec8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110522c70,"SCFullMapScopedServicesScopeInitializationPluginKey",0x33,2,
                      FUN_10258c8e8,puVar2,uVar3,&UNK_110522c70,&PTR_DAT_112ea6c50);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ea6dd8;
  func_0x0001000285a8(0x112ea6dd8,&UNK_10daba1c8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10258c784; end: 10258c7c3;  */

void FUN_10258c784(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102705abc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FullMapScopeGraphBridgeScopeInitializationPluginProvider",0x38,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10258c7c4; end: 10258c837;  */

void FUN_10258c7c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10258c924;
  func_0x0001000823a8(0x10258c924,param_3);
  func_0x000100082720("SCFullMapEntryPointWrapperScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10258c838; end: 10258c83f;  */

void FUN_10258c838(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10258c924;
  func_0x0001000823a8();
  func_0x000100082720("SCFullMapEntryPointWrapperScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10258c840; end: 10258c8e7;  */

void FUN_10258c840(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110522ef0;
  func_0x000107c613fc(&UNK_110522ef0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10258c91c;
  func_0x0001000823a8(FUN_10258c91c,puVar1);
  func_0x000100082720("SCFullMapScopedServicesScopeInitializationPluginProvider",0x38,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10258c8e8; end: 10258c8ef;  */

void FUN_10258c8e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110522ef0;
  func_0x000107c613fc(&UNK_110522ef0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10258c91c;
  func_0x0001000823a8(FUN_10258c91c,puVar3);
  func_0x000100082720("SCFullMapScopedServicesScopeInitializationPluginProvider",0x38,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10258c8f0; end: 10258c91b;  */

void FUN_10258c8f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10258c91c; end: 10258c92b;  */

void FUN_10258c91c(undefined8 *param_1)

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
  puVar1 = &UNK_110522cf8;
  func_0x000107c613fc(&UNK_110522cf8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10258aadc;
  func_0x00010058fa64(FUN_10258aadc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10258c92c; end: 10258c997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258c92c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10258cd20();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea6de8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10258c998; end: 10258ca03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258c998(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6de8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10258ca04; end: 10258ca63; -[_TtC35MapViewScopedFactoryServiceProvider23SCMapViewScopedServices init] */

void FUN_10258ca04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapViewScopedFactoryServiceProvider.SCMapViewScopedServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10258ca30);
  (*pcVar1)();
}



/* Entry: 10258ca64; end: 10258ca73; -[_TtC35MapViewScopedFactoryServiceProvider23SCMapViewScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258ca64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea6de8));
  return;
}



/* Entry: 10258ca74; end: 10258cadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258ca74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105230d0;
  func_0x000107c613fc(&UNK_1105230d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10258cdb8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10258cae0; end: 10258cb7b;  */

void FUN_10258cae0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110522fe0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110522fe0;
  return;
}



/* Entry: 10258cb7c; end: 10258cbb3;  */

void FUN_10258cb7c(long *param_1)

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



/* Entry: 10258cbb4; end: 10258cbbb;  */

undefined8 FUN_10258cbb4(void)

{
  return 0x1b;
}



/* Entry: 10258cbbc; end: 10258ccef;  */

void FUN_10258cbbc(undefined8 *param_1)

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
  puVar1 = &UNK_1105230f8;
  func_0x000107c613fc(&UNK_1105230f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10258cd90;
  func_0x00010058fa64(FUN_10258cd90,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10258ccf0; end: 10258cd1f;  */

undefined ** FUN_10258ccf0(void)

{
  return &PTR_DAT_113066d90;
}



/* Entry: 10258cd20; end: 10258cd3f;  */

void FUN_10258cd20(void)

{
  func_0x000107c61168(&PTR_PTR_11284f928);
  return;
}



/* Entry: 10258cd40; end: 10258cd8f;  */

undefined1  [16] FUN_10258cd40(void)

{
  return ZEXT816(0x110523030);
}



/* Entry: 10258cd90; end: 10258cdb7;  */

void FUN_10258cd90(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10258cdb8; end: 10258cdbb;  */

void FUN_10258cdb8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10258cdbc; end: 10258eaf7;  */

void FUN_10258cdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_69,undefined8 param_70)

{
  undefined *puVar1;
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
  
  func_0x0001000285a8(0x112ea6e50,&UNK_10daba3d0);
  puVar1 = &UNK_110523138;
  func_0x000107c613fc(&UNK_110523138,0x538,7);
  *(undefined8 *)(puVar1 + 0x10) = in_stack_000004a8;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000400;
  *(undefined8 *)(puVar1 + 0x20) = param_31;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x30) = param_14;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000430;
  *(undefined8 *)(puVar1 + 0x40) = param_62;
  *(undefined8 *)(puVar1 + 0x48) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x50) = in_stack_00000410;
  *(undefined8 *)(puVar1 + 0x58) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x60) = param_70;
  *(undefined8 *)(puVar1 + 0x68) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x70) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x78) = param_35;
  *(undefined8 *)(puVar1 + 0x80) = param_32;
  *(undefined8 *)(puVar1 + 0x88) = in_stack_00000420;
  *(undefined8 *)(puVar1 + 0x90) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x98) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0xa0) = param_63;
  *(undefined8 *)(puVar1 + 0xa8) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0xb0) = param_6;
  *(undefined8 *)(puVar1 + 0xb8) = param_24;
  *(undefined8 *)(puVar1 + 0xc0) = param_50;
  *(undefined8 *)(puVar1 + 200) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0xd0) = in_stack_00000438;
  *(undefined8 *)(puVar1 + 0xd8) = param_15;
  *(undefined8 *)(puVar1 + 0xe0) = param_54;
  *(undefined8 *)(puVar1 + 0xe8) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0xf0) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0xf8) = in_stack_000004b0;
  *(undefined8 *)(puVar1 + 0x100) = param_38;
  *(undefined8 *)(puVar1 + 0x108) = param_45;
  *(undefined8 *)(puVar1 + 0x110) = param_64;
  *(undefined8 *)(puVar1 + 0x118) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x120) = in_stack_00000478;
  *(undefined8 *)(puVar1 + 0x128) = param_4;
  *(undefined8 *)(puVar1 + 0x130) = param_26;
  *(undefined8 *)(puVar1 + 0x138) = param_25;
  *(undefined8 *)(puVar1 + 0x140) = in_stack_00000418;
  *(undefined8 *)(puVar1 + 0x148) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x150) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 0x158) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x160) = param_66;
  *(undefined8 *)(puVar1 + 0x168) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x170) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x178) = param_2;
  *(undefined8 *)(puVar1 + 0x180) = param_67;
  *(undefined8 *)(puVar1 + 0x188) = in_stack_000004d0;
  *(undefined8 *)(puVar1 + 400) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x198) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x1a0) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x1a8) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x1b0) = param_40;
  *(undefined8 *)(puVar1 + 0x1b8) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x1c0) = in_stack_00000428;
  *(undefined8 *)(puVar1 + 0x1c8) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x1d0) = param_33;
  *(undefined8 *)(puVar1 + 0x1d8) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x1e0) = in_stack_00000448;
  *(undefined8 *)(puVar1 + 0x1e8) = param_49;
  *(undefined8 *)(puVar1 + 0x1f0) = in_stack_00000408;
  *(undefined8 *)(puVar1 + 0x1f8) = in_stack_000004d8;
  *(undefined8 *)(puVar1 + 0x200) = in_stack_00000468;
  *(undefined8 *)(puVar1 + 0x208) = param_10;
  *(undefined8 *)(puVar1 + 0x210) = param_68;
  *(undefined8 *)(puVar1 + 0x218) = in_stack_00000488;
  *(undefined8 *)(puVar1 + 0x220) = param_9;
  *(undefined8 *)(puVar1 + 0x228) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x230) = param_27;
  *(undefined8 *)(puVar1 + 0x238) = param_65;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x250) = param_37;
  *(undefined8 *)(puVar1 + 600) = param_16;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000458;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x288) = param_18;
  *(undefined8 *)(puVar1 + 0x290) = param_23;
  *(undefined8 *)(puVar1 + 0x298) = param_42;
  *(undefined8 *)(puVar1 + 0x2a0) = param_43;
  *(undefined8 *)(puVar1 + 0x2a8) = param_47;
  *(undefined8 *)(puVar1 + 0x2b0) = param_51;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_000003f8;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_00000450;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x300) = param_1;
  *(undefined8 *)(puVar1 + 0x308) = param_5;
  *(undefined8 *)(puVar1 + 0x310) = param_22;
  *(undefined8 *)(puVar1 + 0x318) = param_28;
  *(undefined8 *)(puVar1 + 800) = param_29;
  *(undefined8 *)(puVar1 + 0x328) = param_69;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_00000480;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_00000490;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_00000498;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000004a0;
  *(undefined8 *)(puVar1 + 0x350) = param_11;
  *(undefined8 *)(puVar1 + 0x358) = param_52;
  *(undefined8 *)(puVar1 + 0x360) = param_41;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x370) = param_17;
  *(undefined8 *)(puVar1 + 0x378) = param_36;
  *(undefined8 *)(puVar1 + 0x380) = param_44;
  *(undefined8 *)(puVar1 + 0x388) = param_48;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_000004c0;
  *(undefined8 *)(puVar1 + 0x398) = param_57;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 0x3a8) = param_12;
  *(undefined8 *)(puVar1 + 0x3b0) = param_13;
  *(undefined8 *)(puVar1 + 0x3b8) = param_46;
  *(undefined8 *)(puVar1 + 0x3c0) = param_56;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_000004e0;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 1000) = param_3;
  *(undefined8 *)(puVar1 + 0x3f0) = param_7;
  *(undefined8 *)(puVar1 + 0x3f8) = param_8;
  *(undefined8 *)(puVar1 + 0x400) = param_30;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_00000440;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_00000460;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_00000470;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x450) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x458) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x460) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x468) = param_39;
  *(undefined8 *)(puVar1 + 0x470) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0x478) = param_55;
  *(undefined8 *)(puVar1 + 0x480) = param_59;
  *(undefined8 *)(puVar1 + 0x488) = param_60;
  *(undefined8 *)(puVar1 + 0x490) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x498) = param_21;
  *(undefined8 *)(puVar1 + 0x4a0) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x4a8) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x4b0) = param_61;
  *(undefined8 *)(puVar1 + 0x4b8) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x4c0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x4c8) = param_53;
  *(undefined8 *)(puVar1 + 0x4d0) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x4d8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x4e0) = in_stack_000004c8;
  *(undefined8 *)(puVar1 + 0x4e8) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 0x4f0) = param_34;
  *(undefined8 *)(puVar1 + 0x4f8) = param_20;
  *(undefined8 *)(puVar1 + 0x500) = in_stack_000004b8;
  *(undefined8 *)(puVar1 + 0x508) = param_19;
  *(undefined8 *)(puVar1 + 0x510) = param_58;
  *(undefined8 *)(puVar1 + 0x518) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x520) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x528) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x530) = in_stack_000002a0;
  func_0x000107c6157c(in_stack_000004a8);
  func_0x000107c6157c(in_stack_00000400);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(in_stack_00000430);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(in_stack_00000410);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(in_stack_00000378);
  func_0x000107c6157c(in_stack_000003e0);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(in_stack_00000420);
  func_0x000107c6157c(in_stack_000002d0);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(in_stack_000003a0);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_00000438);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_00000368);
  func_0x000107c6157c(in_stack_000004b0);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(in_stack_00000388);
  func_0x000107c6157c(in_stack_00000478);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(in_stack_00000418);
  func_0x000107c6157c(in_stack_00000340);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(in_stack_000002e8);
  func_0x000107c6157c(in_stack_00000300);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(in_stack_000004d0);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_000002d8);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000428);
  func_0x000107c6157c(in_stack_000003d8);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_00000448);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(in_stack_00000408);
  func_0x000107c6157c(in_stack_000004d8);
  func_0x000107c6157c(in_stack_00000468);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(in_stack_00000488);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(in_stack_00000318);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(in_stack_00000458);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_00000350);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(in_stack_00000348);
  func_0x000107c6157c(in_stack_000003b0);
  func_0x000107c6157c(in_stack_000003b8);
  func_0x000107c6157c(in_stack_000003f8);
  func_0x000107c6157c(in_stack_00000450);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(in_stack_00000480);
  func_0x000107c6157c(in_stack_00000490);
  func_0x000107c6157c(in_stack_00000498);
  func_0x000107c6157c(in_stack_000004a0);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(in_stack_00000338);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(in_stack_000004c0);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(in_stack_000002c8);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_000003e8);
  func_0x000107c6157c(in_stack_000004e0);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(in_stack_00000328);
  func_0x000107c6157c(in_stack_00000330);
  func_0x000107c6157c(in_stack_00000370);
  func_0x000107c6157c(in_stack_00000440);
  func_0x000107c6157c(in_stack_00000460);
  func_0x000107c6157c(in_stack_00000470);
  func_0x000107c6157c(in_stack_000003a8);
  func_0x000107c6157c(in_stack_000002f0);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(in_stack_00000398);
  func_0x000107c6157c(in_stack_000003f0);
  func_0x000107c6157c(in_stack_00000310);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(in_stack_000003c0);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(in_stack_000002c0);
  func_0x000107c6157c(in_stack_00000360);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(in_stack_00000308);
  func_0x000107c6157c(in_stack_00000380);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(in_stack_00000320);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(in_stack_000004c8);
  func_0x000107c6157c(in_stack_00000390);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(in_stack_000004b8);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(in_stack_000003d0);
  func_0x000107c6157c(in_stack_000003c8);
  func_0x000107c6157c(in_stack_000002f8);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x0001000823a8(FUN_10258eaf8,puVar1);
  return;
}



/* Entry: 10258eaf8; end: 10258ee3b;  */

void FUN_10258eaf8(void)

{
  long unaff_x20;
  
  func_0x00010258dc70(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                      *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                      *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                      *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                      *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                      *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                      *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 10258ee3c; end: 10258ee4b;  */

undefined1  [16] FUN_10258ee3c(void)

{
  return ZEXT816(0x110523160);
}



/* Entry: 10258ee4c; end: 102593a8f;  */

void FUN_10258ee4c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  char *pcVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  char *pcVar41;
  char *pcVar42;
  char *pcVar43;
  char *pcVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  char *pcVar52;
  char *pcVar53;
  char *pcVar54;
  char *pcVar55;
  char *pcVar56;
  char *pcVar57;
  char *pcVar58;
  char *pcVar59;
  char *pcVar60;
  char *pcVar61;
  char *pcVar62;
  char *pcVar63;
  char *pcVar64;
  char *pcVar65;
  char *pcVar66;
  char *pcVar67;
  char *pcVar68;
  char *pcVar69;
  char *pcVar70;
  char *pcVar71;
  char *pcVar72;
  char *pcVar73;
  char *pcVar74;
  char *pcVar75;
  char *pcVar76;
  char *pcVar77;
  char *pcVar78;
  char *pcVar79;
  char *pcVar80;
  char *pcVar81;
  char *pcVar82;
  char *pcVar83;
  char *pcVar84;
  char *pcVar85;
  char *pcVar86;
  char *pcVar87;
  char *pcVar88;
  char *pcVar89;
  code *pcVar90;
  char *pcVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  code *pcVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  code *pcVar114;
  code *pcVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  code *pcVar127;
  undefined8 uVar128;
  undefined8 uVar129;
  undefined8 uVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  undefined8 uVar133;
  undefined8 uVar134;
  undefined8 uVar135;
  undefined8 uVar136;
  code *pcVar137;
  code *pcVar138;
  undefined8 uVar139;
  undefined8 uVar140;
  undefined8 uVar141;
  undefined8 uVar142;
  undefined8 uVar143;
  undefined8 uVar144;
  code *pcVar145;
  undefined8 uVar146;
  code *pcVar147;
  undefined8 uVar148;
  undefined8 uVar149;
  undefined8 uVar150;
  undefined8 uVar151;
  undefined8 uVar152;
  undefined8 uVar153;
  undefined8 uVar154;
  undefined8 uVar155;
  undefined8 uVar156;
  undefined8 uVar157;
  undefined8 uVar158;
  undefined8 uVar159;
  undefined8 uVar160;
  undefined8 uVar161;
  undefined8 uVar162;
  undefined8 uVar163;
  undefined8 uVar164;
  code *pcVar165;
  code *pcVar166;
  code *pcVar167;
  undefined8 uVar168;
  undefined8 uVar169;
  undefined8 uVar170;
  undefined8 uVar171;
  code *pcVar172;
  undefined8 uVar173;
  undefined8 uVar174;
  undefined8 uVar175;
  undefined8 uVar176;
  char *pcVar177;
  undefined *puVar178;
  code *pcVar179;
  code *pcVar180;
  code *pcVar181;
  undefined8 uVar182;
  code *pcVar183;
  undefined8 uVar184;
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
  undefined8 auStack_70 [2];
  
  uVar184 = *param_2;
  func_0x0001000285a8(0x112ea6e60,&UNK_10daba410);
  puVar1 = auStack_70;
  auStack_70[0] = uVar184;
  func_0x0001000838ec();
  FUN_1026fef0c();
  func_0x000100082720("InferredConfirmationPlaceSharingExposerServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ea6e68,&UNK_10dabaab0);
  puVar178 = &UNK_1105231a8;
  func_0x000107c613fc(&UNK_1105231a8,0x20,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102594588;
  func_0x0001000823a8(FUN_102594588,puVar178);
  func_0x000100082720("MapAdsPromotedPlaceLoggerServiceProviderWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ea6e70,&UNK_10daba420);
  func_0x000107c6157c(pcVar2);
  uVar184 = 0x102594590;
  func_0x0001000823a8(0x102594590,pcVar2);
  func_0x000100082720("MapAdsPromotedPlaceLoggerServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ea6e78,&UNK_10dabae60);
  puVar178 = &UNK_1105231d0;
  func_0x000107c613fc(&UNK_1105231d0,0x20,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  uVar3 = 0x102594598;
  func_0x0001000823a8(0x102594598,puVar178);
  func_0x000100082720("MapAdsStudyConfigurationServicesProviderWrapperServiceProvider",0x3e,2);
  FUN_102663260(param_6,param_7,param_8);
  pcVar4 = "MapFootstepsMemorySyncServiceProvider";
  func_0x000100082720("MapFootstepsMemorySyncServiceProvider",0x25,2);
  FUN_1026c8208();
  pcVar5 = "MapFriendLoadGrapheneMetricReporterServiceProvider";
  func_0x000100082720("MapFriendLoadGrapheneMetricReporterServiceProvider",0x32,2);
  FUN_1026c8498();
  func_0x000100082720("MapReadyGrapheneMetricReporterServiceProvider",0x2d,2);
  uVar6 = param_9;
  FUN_1026dc5f0(param_9,param_10,param_11);
  pcVar7 = "MapUserStateProviderServiceProvider";
  func_0x000100082720("MapUserStateProviderServiceProvider",0x23,2);
  func_0x0001025c82b0();
  pcVar8 = "AdAttachmentHandlerScopeExposerSubjectServiceProvider";
  func_0x000100082720("AdAttachmentHandlerScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1025c82fc();
  pcVar9 = "MapScreenshotScopeExposerSubjectServiceProvider";
  func_0x000100082720("MapScreenshotScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_1025c8348();
  pcVar10 = "MapWidgetOnboardingScopeExposerSubjectServiceProvider";
  func_0x000100082720("MapWidgetOnboardingScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1025c8394();
  pcVar11 = "PlusGiftingScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusGiftingScopeExposerSubjectServiceProvider",0x2d,2);
  func_0x0001025c8414();
  pcVar12 = "PlusMapCarsAndPetsScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusMapCarsAndPetsScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1025c8460();
  pcVar13 = "SCAdOperaSessionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCAdOperaSessionScopeExposerSubjectServiceProvider",0x32,2);
  FUN_1025c84ac();
  pcVar14 = "SCAddFriendsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCAddFriendsScopeExposerSubjectServiceProvider",0x2e,2);
  FUN_1025c84f8();
  pcVar15 = "SCBitmojiCreateFlowScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBitmojiCreateFlowScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1025c8544();
  pcVar16 = "SCBloopsReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBloopsReportScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1025c8590();
  pcVar17 = "SCCaaSCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCaaSCameraScopeExposerSubjectServiceProvider",0x2e,2);
  FUN_1025c85dc();
  pcVar18 = "SCChatCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatCameraScopeExposerSubjectServiceProvider",0x2e,2);
  FUN_1025c8628();
  pcVar19 = "SCChatScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatScopeExposerSubjectServiceProvider",0x28,2);
  FUN_1025c8674();
  pcVar20 = "SCCreateChatScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCreateChatScopeExposerSubjectServiceProvider",0x2e,2);
  FUN_1025c86c0();
  pcVar21 = "SCDeleteStorySnapScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDeleteStorySnapScopeExposerSubjectServiceProvider",0x33,2);
  FUN_1025c870c();
  pcVar22 = "SCFriendProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendProfileScopeExposerSubjectServiceProvider",0x31,2);
  FUN_1025c8758();
  pcVar23 = "SCMapAddressSelectionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapAddressSelectionScopeExposerSubjectServiceProvider",0x37,2);
  FUN_1025c87a4();
  pcVar24 = "SCMapBitmojiTrayScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapBitmojiTrayScopeExposerSubjectServiceProvider",0x32,2);
  FUN_1025c87f0();
  pcVar25 = "SCMapDirectionsSheetScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapDirectionsSheetScopeExposerSubjectServiceProvider",0x36,2);
  FUN_1025c883c();
  pcVar26 = "SCMapFocusedDropScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapFocusedDropScopeExposerSubjectServiceProvider",0x32,2);
  FUN_1025c8888();
  pcVar27 = "SCMapFriendFocusViewScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapFriendFocusViewScopeExposerSubjectServiceProvider",0x36,2);
  FUN_1025c88d4();
  pcVar28 = "SCMapFriendPickerScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapFriendPickerScopeExposerSubjectServiceProvider",0x33,2);
  FUN_1025c8920();
  pcVar29 = "SCMapGroupFocusViewScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapGroupFocusViewScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1025c896c();
  pcVar30 = "SCMapHomeProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapHomeProfileScopeExposerSubjectServiceProvider",0x32,2);
  FUN_1025c89b8();
  pcVar31 = "SCMapHomeWorkSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapHomeWorkSettingsScopeExposerSubjectServiceProvider",0x37,2);
  FUN_1025c8a04();
  pcVar32 = "SCMapPlaceDiscoveryScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapPlaceDiscoveryScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1025c8a50();
  pcVar33 = "SCMapPlaceProfileV2ScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapPlaceProfileV2ScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1025c8a9c();
  pcVar34 = "SCMapPlaceSuggestAttributeTrayScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapPlaceSuggestAttributeTrayScopeExposerSubjectServiceProvider",0x40,2);
  FUN_1025c8ae8();
  pcVar35 = "SCMapStoryPlaybackScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMapStoryPlaybackScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1025c8b34();
  pcVar36 = "SCMyStorySettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMyStorySettingsScopeExposerSubjectServiceProvider",0x33,2);
  FUN_1025c8b80();
  pcVar37 = "SCOperaSessionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCOperaSessionScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1025c8bcc();
  pcVar38 = "SCSafetyReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSafetyReportScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1025c8c18();
  pcVar39 = "SCSaveStoryScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSaveStoryScopeExposerSubjectServiceProvider",0x2d,2);
  FUN_1025c8c64();
  pcVar40 = "SCStandardExternalContentShareScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCStandardExternalContentShareScopeExposerSubjectServiceProvider",0x40,2);
  FUN_1025c8cb0();
  pcVar41 = "SCStoryShareScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCStoryShareScopeExposerSubjectServiceProvider",0x2e,2);
  FUN_1025c8cfc();
  pcVar42 = "SCTopicViewerMusicScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCTopicViewerMusicScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1025c8d48();
  pcVar43 = "SCVenueEditorScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCVenueEditorScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_1025c8d94();
  pcVar44 = "SnapshotScopeExposerSubjectServiceProvider";
  func_0x000100082720("SnapshotScopeExposerSubjectServiceProvider",0x2a,2);
  FUN_1025c8de0();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112ea6e80,&UNK_10daba430);
  puVar178 = &UNK_1105231f8;
  func_0x000107c613fc(&UNK_1105231f8,0x88,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_5;
  *(undefined8 *)(puVar178 + 0x20) = param_12;
  *(undefined8 *)(puVar178 + 0x28) = param_13;
  *(undefined8 *)(puVar178 + 0x30) = param_14;
  *(undefined8 *)(puVar178 + 0x38) = param_15;
  *(undefined8 *)(puVar178 + 0x40) = param_16;
  *(undefined8 *)(puVar178 + 0x48) = param_17;
  *(undefined8 *)(puVar178 + 0x50) = param_18;
  *(undefined8 *)(puVar178 + 0x58) = param_19;
  *(undefined8 *)(puVar178 + 0x60) = param_20;
  *(undefined8 *)(puVar178 + 0x68) = param_21;
  *(undefined8 *)(puVar178 + 0x70) = param_11;
  *(undefined8 *)(puVar178 + 0x78) = param_22;
  *(undefined8 *)(puVar178 + 0x80) = param_23;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
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
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  uVar45 = 0x1025945a0;
  func_0x0001000823a8(0x1025945a0,puVar178);
  func_0x000100082720("SCMapViewEntryPointWrapperServiceProvider",0x29,2);
  func_0x0001000285a8(0x112ea6e88,&UNK_10daba438);
  func_0x000107c6157c(uVar45);
  uVar46 = 0x1025945ac;
  func_0x0001000823a8(0x1025945ac,uVar45);
  func_0x000100082720("SCMapViewServicesServiceProvider",0x20,2);
  uVar47 = param_24;
  FUN_102600468(param_24,param_25,param_10);
  func_0x000100082720("MapArrivalNotificationsUpsellScopedFactoryServiceProvider",0x39,2);
  uVar48 = param_25;
  FUN_10266d940(param_25,param_21,param_26,param_27);
  func_0x000100082720("MapInferredSchoolOnboardingScopedFactoryServiceProvider",0x37,2);
  uVar49 = uVar46;
  func_0x000102679c98();
  func_0x000100082720("MapLiveSnapshotScopedFactoryServiceProvider",0x2b,2);
  uVar50 = param_28;
  FUN_102693e58(param_28,param_25,param_29,param_30,param_10,param_27);
  func_0x000100082720("MapRequestRealTimeLocationScopedFactoryServiceProvider",0x36,2);
  uVar51 = param_25;
  FUN_1026dee0c(param_25,param_29,param_30,param_31,param_8,param_32);
  func_0x000100082720("MapVisitedBySharingScopedFactoryServiceProvider",0x2f,2);
  FUN_1026cc5d4(param_33,param_34,param_35,param_10,param_36,param_4,param_27,param_37);
  func_0x000100082720("ShareBackBannerScopedFactoryServiceProvider",0x2b,2);
  pcVar52 = pcVar7;
  FUN_1025c82f0();
  func_0x000100082720("AdAttachmentHandlerScopeExposerObservableServiceProvider",0x38,2);
  pcVar53 = pcVar8;
  FUN_1025c833c();
  func_0x000100082720("MapScreenshotScopeExposerObservableServiceProvider",0x32,2);
  pcVar54 = pcVar9;
  FUN_1025c8388();
  func_0x000100082720("MapWidgetOnboardingScopeExposerObservableServiceProvider",0x38,2);
  pcVar55 = pcVar10;
  FUN_1025c83d4();
  func_0x000100082720("PlusGiftingScopeExposerObservableServiceProvider",0x30,2);
  pcVar56 = pcVar11;
  FUN_1025c8454();
  func_0x000100082720("PlusMapCarsAndPetsScopeExposerObservableServiceProvider",0x37,2);
  pcVar57 = pcVar12;
  FUN_1025c84a0();
  func_0x000100082720("SCAdOperaSessionScopeExposerObservableServiceProvider",0x35,2);
  pcVar58 = pcVar13;
  FUN_1025c84ec();
  func_0x000100082720("SCAddFriendsScopeExposerObservableServiceProvider",0x31,2);
  pcVar59 = pcVar14;
  FUN_1025c8538();
  func_0x000100082720("SCBitmojiCreateFlowScopeExposerObservableServiceProvider",0x38,2);
  pcVar60 = pcVar15;
  FUN_1025c8584();
  func_0x000100082720("SCBloopsReportScopeExposerObservableServiceProvider",0x33,2);
  pcVar61 = pcVar16;
  FUN_1025c85d0();
  func_0x000100082720("SCCaaSCameraScopeExposerObservableServiceProvider",0x31,2);
  pcVar62 = pcVar17;
  FUN_1025c861c();
  func_0x000100082720("SCChatCameraScopeExposerObservableServiceProvider",0x31,2);
  pcVar63 = pcVar18;
  FUN_1025c8668();
  func_0x000100082720("SCChatScopeExposerObservableServiceProvider",0x2b,2);
  pcVar64 = pcVar19;
  FUN_1025c86b4();
  func_0x000100082720("SCCreateChatScopeExposerObservableServiceProvider",0x31,2);
  pcVar65 = pcVar20;
  FUN_1025c8700();
  func_0x000100082720("SCDeleteStorySnapScopeExposerObservableServiceProvider",0x36,2);
  pcVar66 = pcVar21;
  FUN_1025c874c();
  func_0x000100082720("SCFriendProfileScopeExposerObservableServiceProvider",0x34,2);
  pcVar67 = pcVar22;
  FUN_1025c8798();
  func_0x000100082720("SCMapAddressSelectionScopeExposerObservableServiceProvider",0x3a,2);
  pcVar68 = pcVar23;
  FUN_1025c87e4();
  func_0x000100082720("SCMapBitmojiTrayScopeExposerObservableServiceProvider",0x35,2);
  pcVar69 = pcVar24;
  FUN_1025c8830();
  func_0x000100082720("SCMapDirectionsSheetScopeExposerObservableServiceProvider",0x39,2);
  pcVar70 = pcVar25;
  FUN_1025c887c();
  func_0x000100082720("SCMapFocusedDropScopeExposerObservableServiceProvider",0x35,2);
  pcVar71 = pcVar26;
  FUN_1025c88c8();
  func_0x000100082720("SCMapFriendFocusViewScopeExposerObservableServiceProvider",0x39,2);
  pcVar72 = pcVar27;
  FUN_1025c8914();
  func_0x000100082720("SCMapFriendPickerScopeExposerObservableServiceProvider",0x36,2);
  pcVar73 = pcVar28;
  FUN_1025c8960();
  func_0x000100082720("SCMapGroupFocusViewScopeExposerObservableServiceProvider",0x38,2);
  pcVar74 = pcVar29;
  FUN_1025c89ac();
  func_0x000100082720("SCMapHomeProfileScopeExposerObservableServiceProvider",0x35,2);
  pcVar75 = pcVar30;
  FUN_1025c89f8();
  func_0x000100082720("SCMapHomeWorkSettingsScopeExposerObservableServiceProvider",0x3a,2);
  pcVar76 = pcVar31;
  FUN_1025c8a44();
  func_0x000100082720("SCMapPlaceDiscoveryScopeExposerObservableServiceProvider",0x38,2);
  pcVar77 = pcVar32;
  FUN_1025c8a90();
  func_0x000100082720("SCMapPlaceProfileV2ScopeExposerObservableServiceProvider",0x38,2);
  pcVar78 = pcVar33;
  FUN_1025c8adc();
  func_0x000100082720("SCMapPlaceSuggestAttributeTrayScopeExposerObservableServiceProvider",0x43,2);
  pcVar79 = pcVar34;
  FUN_1025c8b28();
  func_0x000100082720("SCMapStoryPlaybackScopeExposerObservableServiceProvider",0x37,2);
  pcVar80 = pcVar35;
  FUN_1025c8b74();
  func_0x000100082720("SCMyStorySettingsScopeExposerObservableServiceProvider",0x36,2);
  pcVar81 = pcVar36;
  FUN_1025c8bc0();
  func_0x000100082720("SCOperaSessionScopeExposerObservableServiceProvider",0x33,2);
  pcVar82 = pcVar37;
  FUN_1025c8c0c();
  func_0x000100082720("SCSafetyReportScopeExposerObservableServiceProvider",0x33,2);
  pcVar83 = pcVar38;
  FUN_1025c8c58();
  func_0x000100082720("SCSaveStoryScopeExposerObservableServiceProvider",0x30,2);
  pcVar84 = pcVar39;
  FUN_1025c8ca4();
  func_0x000100082720("SCStandardExternalContentShareScopeExposerObservableServiceProvider",0x43,2);
  pcVar85 = pcVar40;
  FUN_1025c8cf0();
  func_0x000100082720("SCStoryShareScopeExposerObservableServiceProvider",0x31,2);
  pcVar86 = pcVar41;
  FUN_1025c8d3c();
  func_0x000100082720("SCTopicViewerMusicScopeExposerObservableServiceProvider",0x37,2);
  pcVar87 = pcVar42;
  FUN_1025c8d88();
  func_0x000100082720("SCVenueEditorScopeExposerObservableServiceProvider",0x32,2);
  pcVar88 = pcVar43;
  FUN_1025c8dd4();
  func_0x000100082720("SnapshotScopeExposerObservableServiceProvider",0x2d,2);
  pcVar89 = pcVar44;
  FUN_1025c8e6c();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar90 = FUN_10258cb7c;
  func_0x0001000823a8(FUN_10258cb7c,0);
  func_0x000100082720("SCMapViewScopedServicesCleanupRelayServiceProvider",0x32,2);
  pcVar91 = pcVar61;
  func_0x0001026feed8();
  func_0x000100082720("InferredConfirmationCameraExposerServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ea6e90,&UNK_10daba8b0);
  puVar178 = &UNK_110523220;
  func_0x000107c613fc(&UNK_110523220,0x40,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_38;
  *(undefined8 *)(puVar178 + 0x20) = param_39;
  *(undefined8 *)(puVar178 + 0x28) = param_40;
  *(undefined8 *)(puVar178 + 0x30) = param_41;
  *(undefined8 *)(puVar178 + 0x38) = uVar184;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(uVar184);
  uVar92 = 0x1025945b4;
  func_0x0001000823a8(0x1025945b4,puVar178);
  func_0x000100082720("MapAdsPromotedPlaceAdResponseParserServicesProviderWrapperServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112ea6e98,&UNK_10daba440);
  func_0x000107c6157c(uVar3);
  uVar93 = 0x1025945c0;
  func_0x0001000823a8(0x1025945c0,uVar3);
  func_0x000100082720("MapAdsStudyConfigurationServicesServiceProvider",0x2f,2);
  uVar94 = uVar46;
  FUN_10262a548(uVar46,param_9,param_42,param_34);
  func_0x000100082720("MapAppTriggerObserverServiceProvider",0x24,2);
  uVar95 = uVar47;
  FUN_1026e3208();
  func_0x000100082720("MapArrivalNotificationsUpsellFactoryServiceServiceProvider",0x3a,2);
  uVar96 = uVar48;
  FUN_1026e2768();
  func_0x000100082720("MapInferredSchoolOnboardingFactoryServiceServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ea6ea0,&UNK_10dabb000);
  puVar178 = &UNK_110523248;
  func_0x000107c613fc(&UNK_110523248,0x30,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_43;
  *(undefined8 *)(puVar178 + 0x20) = uVar46;
  *(undefined8 *)(puVar178 + 0x28) = param_44;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_44);
  uVar97 = 0x1025945c8;
  func_0x0001000823a8(0x1025945c8,puVar178);
  func_0x000100082720("MapLensLauncherEntryPointWrapperServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112ea6ea8,&UNK_10daba450);
  puVar178 = &UNK_110523270;
  func_0x000107c613fc(&UNK_110523270,0x38,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_45;
  *(undefined8 *)(puVar178 + 0x20) = uVar46;
  *(undefined8 *)(puVar178 + 0x28) = param_46;
  *(undefined8 *)(puVar178 + 0x30) = param_47;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  uVar98 = 0x1025945d4;
  func_0x0001000823a8(0x1025945d4,puVar178);
  func_0x000100082720("MapMemoriesPlaybackEntryPointWrapperServiceProvider",0x33,2);
  uVar99 = uVar50;
  func_0x0001026e38f4();
  func_0x000100082720("MapRequestRealTimeLocationFactoryServiceServiceProvider",0x37,2);
  uVar100 = uVar51;
  FUN_1026df12c();
  func_0x000100082720("MapVisitedBySharingBuilderServiceProvider",0x29,2);
  uVar101 = uVar100;
  FUN_1026df360();
  func_0x000100082720("MapVisitedBySharingFactoryServiceProvider",0x29,2);
  func_0x0001000285a8(0x112ea6eb0,&UNK_10dabb290);
  puVar178 = &UNK_110523298;
  func_0x000107c613fc(&UNK_110523298,0x40,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_48;
  *(undefined8 *)(puVar178 + 0x20) = param_49;
  *(undefined8 *)(puVar178 + 0x28) = uVar93;
  *(undefined8 *)(puVar178 + 0x30) = uVar184;
  *(undefined8 *)(puVar178 + 0x38) = param_50;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar184);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(uVar93);
  func_0x000107c6157c(param_50);
  uVar102 = 0x1025945e0;
  func_0x0001000823a8(0x1025945e0,puVar178);
  func_0x000100082720("PromotedPlaceTrackerEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ea6eb8,&UNK_10daba460);
  func_0x000107c6157c(uVar102);
  uVar103 = 0x1025945ec;
  func_0x0001000823a8(0x1025945ec,uVar102);
  func_0x000100082720("PromotedPlaceTrackerServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112ea6ec0,&UNK_10dabbb70);
  puVar178 = &UNK_1105232c0;
  func_0x000107c613fc(&UNK_1105232c0,0x28,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar46;
  *(undefined8 *)(puVar178 + 0x20) = param_16;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(uVar46);
  uVar104 = 0x1025945f4;
  func_0x0001000823a8(0x1025945f4,puVar178);
  func_0x000100082720("SCMapDropsAnnotationServiceProviderWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ea6ec8,&UNK_10daba470);
  func_0x000107c6157c(uVar104);
  uVar105 = 0x102594600;
  func_0x0001000823a8(0x102594600,uVar104);
  func_0x000100082720("SCMapDropsAnnotationServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112ea6ed0,&UNK_10dabc010);
  puVar178 = &UNK_1105232e8;
  func_0x000107c613fc(&UNK_1105232e8,0x28,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar46;
  *(undefined8 *)(puVar178 + 0x20) = param_16;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(uVar46);
  uVar106 = 0x102594608;
  func_0x0001000823a8(0x102594608,puVar178);
  func_0x000100082720("SCMapGestureServicesEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ea6ed8,&UNK_10daba480);
  puVar178 = &UNK_110523310;
  func_0x000107c613fc(&UNK_110523310,0x28,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar46;
  *(undefined8 *)(puVar178 + 0x20) = param_51;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_51);
  uVar107 = 0x102594614;
  func_0x0001000823a8(0x102594614,puVar178);
  func_0x000100082720("SCMapPlacesContentServicesMapSetupEntryPointWrapperServiceProvider",0x42,2);
  func_0x0001000285a8(0x112ea6ee0,&UNK_10dabcbc0);
  puVar178 = &UNK_110523338;
  func_0x000107c613fc(&UNK_110523338,0x28,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_19;
  *(undefined8 *)(puVar178 + 0x20) = uVar46;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(uVar46);
  pcVar108 = FUN_102594654;
  func_0x0001000823a8(FUN_102594654,puVar178);
  func_0x000100082720("SCMapTileEvictionEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112ea6ee8,&UNK_10daba490);
  puVar178 = &UNK_110523360;
  func_0x000107c613fc(&UNK_110523360,0x38,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar46;
  *(undefined8 *)(puVar178 + 0x20) = param_52;
  *(undefined8 *)(puVar178 + 0x28) = param_53;
  *(undefined8 *)(puVar178 + 0x30) = param_54;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  uVar109 = 0x102594660;
  func_0x0001000823a8(0x102594660,puVar178);
  func_0x000100082720("SCMapValisViewportPublishingEntryPointWrapperServiceProvider",0x3c,2);
  uVar110 = param_24;
  FUN_102667df4(param_24,param_55,param_56,param_44,param_10,param_53,param_51,param_57,pcVar61);
  func_0x000100082720("MapGenAISnapScopedFactoryServiceProvider",0x28,2);
  func_0x0001000285a8(0x112ea6ef0,&UNK_10daba498);
  func_0x000107c6157c(uVar92);
  uVar111 = 0x10259466c;
  func_0x0001000823a8(0x10259466c,uVar92);
  func_0x000100082720("MapAdsPromotedPlaceAdResponseParserServicesServiceProvider",0x3a,2);
  uVar112 = uVar110;
  FUN_10266d53c();
  func_0x000100082720("MapGenAISnapFactoryServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112ea6ef8,&UNK_10daba4a0);
  func_0x000107c6157c(uVar106);
  uVar113 = 0x102594674;
  func_0x0001000823a8(0x102594674,uVar106);
  func_0x000100082720("SCMapGestureServicesServiceProvider",0x23,2);
  func_0x0001000285a8(0x112ea6f00,&UNK_10dabc1a0);
  puVar178 = &UNK_110523388;
  func_0x000107c613fc(&UNK_110523388,0x88,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_45;
  *(undefined8 *)(puVar178 + 0x20) = uVar46;
  *(undefined8 *)(puVar178 + 0x28) = param_54;
  *(undefined8 *)(puVar178 + 0x30) = param_53;
  *(undefined8 *)(puVar178 + 0x38) = param_4;
  *(undefined8 *)(puVar178 + 0x40) = param_58;
  *(undefined8 *)(puVar178 + 0x48) = param_11;
  *(undefined8 *)(puVar178 + 0x50) = param_24;
  *(undefined8 *)(puVar178 + 0x58) = uVar113;
  *(undefined8 *)(puVar178 + 0x60) = param_10;
  *(undefined8 *)(puVar178 + 0x68) = param_59;
  *(undefined8 *)(puVar178 + 0x70) = param_60;
  *(undefined8 *)(puVar178 + 0x78) = param_5;
  *(undefined8 *)(puVar178 + 0x80) = param_49;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(uVar113);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  pcVar114 = FUN_102594710;
  func_0x0001000823a8(FUN_102594710,puVar178);
  func_0x000100082720("SCMapLoggingServicesEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ea6f08,&UNK_10daba4b0);
  puVar178 = &UNK_1105233b0;
  func_0x000107c613fc(&UNK_1105233b0,0x30,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar46;
  *(undefined8 *)(puVar178 + 0x20) = uVar113;
  *(undefined8 *)(puVar178 + 0x28) = param_17;
  func_0x000107c6157c();
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(uVar113);
  pcVar115 = FUN_102594764;
  func_0x0001000823a8(FUN_102594764,puVar178);
  func_0x000100082720("SCMapBitmojiLayerServiceProviderWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ea6f10,&UNK_10daba4b8);
  func_0x000107c6157c(pcVar115);
  uVar116 = 0x102594770;
  func_0x0001000823a8(0x102594770,pcVar115);
  func_0x000100082720("SCMapBitmojiLayerServicesServiceProvider",0x28,2);
  func_0x0001000285a8(0x112ea6f18,&UNK_10daba4c0);
  func_0x000107c6157c(pcVar114);
  uVar117 = 0x102594778;
  func_0x0001000823a8(0x102594778,pcVar114);
  func_0x000100082720("SCMapLoggingServicesServiceProvider",0x23,2);
  uVar118 = uVar117;
  FUN_102615f54(uVar117,uVar46,param_61);
  func_0x000100082720("FullMapCustomizationTrayScopedFactoryServiceProvider",0x34,2);
  uVar119 = param_6;
  FUN_102663474(param_6,param_24,param_62,param_9,uVar117,param_63,param_64);
  func_0x000100082720("MapFootstepsOnboardingScopedFactoryServiceProvider",0x32,2);
  uVar120 = param_24;
  FUN_102670394(param_24,param_34,uVar113,uVar117,param_53,uVar46,param_11);
  func_0x0001002acff8("MapInitialViewportCoordinatorServiceProvider",0x2c,2);
  uVar121 = uVar118;
  func_0x0001026199ec();
  func_0x000100082720("FullMapCustomizationTrayBuilderServiceProvider",0x2e,2);
  uVar122 = uVar121;
  func_0x000102619974();
  func_0x000100082720("FullMapCustomizationTrayFactoryServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112ea6f20,&UNK_10daba6e0);
  puVar178 = &UNK_1105233d8;
  func_0x000107c613fc(&UNK_1105233d8,0x20,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar117;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar117);
  uVar123 = 0x102594780;
  func_0x0001000823a8(0x102594780,puVar178);
  func_0x000100082720("MapAdTrackingServicesEntryPointWrapperServiceProvider",0x35,2);
  FUN_102635c60(param_65,param_24,uVar117);
  func_0x000100082720("MapExternalMusicServicesSaberServiceProvider",0x2c,2);
  uVar124 = uVar120;
  FUN_102678fc4();
  func_0x000100082720("MapInitialViewportServicesSaberServiceProvider",0x2e,2);
  uVar125 = uVar117;
  FUN_102679104(uVar117,param_64);
  func_0x000100082720("MapLayerLoggingImplServiceProvider",0x22,2);
  uVar126 = param_11;
  FUN_1026dabcc(param_11,param_34,param_9,param_54,uVar119,param_64,uVar117);
  func_0x000100082720("MeTrayUpsellProviderServiceProvider",0x23,2);
  func_0x0001000285a8(0x112ea6f28,&UNK_10daba4d0);
  puVar178 = &UNK_110523400;
  func_0x000107c613fc(&UNK_110523400,0x30,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_4;
  *(undefined8 *)(puVar178 + 0x20) = uVar117;
  *(undefined8 *)(puVar178 + 0x28) = param_53;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(uVar117);
  pcVar127 = FUN_1025947c4;
  func_0x0001000823a8(FUN_1025947c4,puVar178);
  func_0x000100082720("SCMapFocusViewLoggingServiceProviderWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112ea6f30,&UNK_10daba4d8);
  func_0x000107c6157c(pcVar127);
  uVar128 = 0x1025947d0;
  func_0x0001000823a8(0x1025947d0,pcVar127);
  func_0x000100082720("SCMapFocusViewLoggingServicesServiceProvider",0x2c,2);
  uVar129 = param_66;
  FUN_1026b8314(param_66,param_65,param_28,param_5,param_34,param_21,param_45,param_67,uVar117,
                param_53,param_19,uVar46,param_63,param_68);
  func_0x000100082720("FullMapDataBridgeScopedFactoryServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112ea6f38,&UNK_10daba4e0);
  puVar178 = &UNK_110523428;
  func_0x000107c613fc(&UNK_110523428,0x68,7);
  *(undefined8 *)(puVar178 + 0x10) = param_45;
  *(undefined8 *)(puVar178 + 0x18) = uVar47;
  *(undefined8 *)(puVar178 + 0x20) = param_65;
  *(undefined8 *)(puVar178 + 0x28) = param_34;
  *(undefined8 *)(puVar178 + 0x30) = param_9;
  *(undefined8 *)(puVar178 + 0x38) = uVar119;
  *(undefined8 *)(puVar178 + 0x40) = param_54;
  *(undefined8 *)(puVar178 + 0x48) = param_70;
  *(undefined8 *)(puVar178 + 0x50) = param_33;
  *(undefined8 *)(puVar178 + 0x58) = uVar117;
  *(undefined8 *)(puVar178 + 0x60) = param_69;
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(uVar117);
  func_0x000107c6157c(uVar47);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(uVar119);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_69);
  uVar130 = 0x1025947d8;
  func_0x0001000823a8(0x1025947d8,puVar178);
  func_0x000100082720("MapStartupPromptTypeRegistryServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112ea6f40,&UNK_10daba4e8);
  func_0x000107c6157c(uVar123);
  uVar131 = 0x1025947e4;
  func_0x0001000823a8(0x1025947e4,uVar123);
  func_0x000100082720("MapAdEventPublishingServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112ea6f48,&UNK_10daba4f0);
  func_0x000107c6157c(uVar123);
  uVar132 = 0x1025947ec;
  func_0x0001000823a8(0x1025947ec,uVar123);
  func_0x000100082720("MapAdLoggingServicesServiceProvider",0x23,2);
  func_0x0001000285a8(0x112ea6f50,&UNK_10daba580);
  puVar178 = &UNK_110523450;
  func_0x000107c613fc(&UNK_110523450,0x38,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_45;
  *(undefined8 *)(puVar178 + 0x20) = uVar46;
  *(undefined8 *)(puVar178 + 0x28) = uVar117;
  *(undefined8 *)(puVar178 + 0x30) = uVar132;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(uVar117);
  func_0x000107c6157c(uVar132);
  uVar133 = 0x1025947f4;
  func_0x0001000823a8(0x1025947f4,puVar178);
  func_0x000100082720("MapAdSDKEventLoggingEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ea6f58,&UNK_10daba500);
  puVar178 = &UNK_110523478;
  func_0x000107c613fc(&UNK_110523478,0x58,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar131;
  *(undefined8 *)(puVar178 + 0x20) = uVar93;
  *(undefined8 *)(puVar178 + 0x28) = uVar111;
  *(undefined8 *)(puVar178 + 0x30) = uVar117;
  *(undefined8 *)(puVar178 + 0x38) = uVar184;
  *(undefined8 *)(puVar178 + 0x40) = uVar103;
  *(undefined8 *)(puVar178 + 0x48) = param_71;
  *(char **)(puVar178 + 0x50) = pcVar57;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar184);
  func_0x000107c6157c(uVar93);
  func_0x000107c6157c(uVar117);
  func_0x000107c6157c(uVar131);
  func_0x000107c6157c(uVar111);
  func_0x000107c6157c(uVar103);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(pcVar57);
  uVar134 = 0x102594800;
  func_0x0001000823a8(0x102594800,puVar178);
  func_0x000100082720("MapAdsPromotedPlaceWorkflowImplEntryPointWrapperServiceProvider",0x3f,2);
  uVar135 = uVar129;
  FUN_1026b8220();
  func_0x000100082720("MapSDKDataBridgingFactoryServicesServiceProvider",0x30,2);
  uVar136 = uVar126;
  func_0x0001026dab30();
  func_0x000100082720("MapUpsellServiceProvider",0x18,2);
  func_0x0001000285a8(0x112ea6f60,&UNK_10dabc850);
  puVar178 = &UNK_1105234a0;
  func_0x000107c613fc(&UNK_1105234a0,0xe0,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar117;
  *(undefined8 *)(puVar178 + 0x20) = param_5;
  *(undefined8 *)(puVar178 + 0x28) = param_11;
  *(undefined8 *)(puVar178 + 0x30) = in_stack_000001f0;
  *(undefined8 *)(puVar178 + 0x38) = param_35;
  *(undefined8 *)(puVar178 + 0x40) = param_24;
  *(undefined8 *)(puVar178 + 0x48) = param_54;
  *(undefined8 *)(puVar178 + 0x50) = param_52;
  *(undefined8 *)(puVar178 + 0x58) = in_stack_000001f8;
  *(undefined8 *)(puVar178 + 0x60) = param_58;
  *(undefined8 *)(puVar178 + 0x68) = in_stack_00000200;
  *(undefined8 *)(puVar178 + 0x70) = in_stack_00000208;
  *(undefined8 *)(puVar178 + 0x78) = param_60;
  *(undefined8 *)(puVar178 + 0x80) = param_19;
  *(undefined8 *)(puVar178 + 0x88) = param_67;
  *(undefined8 *)(puVar178 + 0x90) = uVar46;
  *(undefined8 *)(puVar178 + 0x98) = param_16;
  *(undefined8 *)(puVar178 + 0xa0) = param_53;
  *(undefined8 *)(puVar178 + 0xa8) = param_21;
  *(undefined8 *)(puVar178 + 0xb0) = param_36;
  *(undefined8 *)(puVar178 + 0xb8) = param_63;
  *(undefined8 *)(puVar178 + 0xc0) = param_65;
  *(undefined8 *)(puVar178 + 200) = param_66;
  *(undefined8 *)(puVar178 + 0xd0) = uVar135;
  *(undefined8 *)(puVar178 + 0xd8) = param_28;
  func_0x000107c6157c();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(uVar117);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(uVar135);
  func_0x000107c6157c(param_28);
  pcVar137 = FUN_10259480c;
  func_0x0001000823a8(FUN_10259480c,puVar178);
  func_0x000100082720("SCMapSDKDataBridgingEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ea6f68,&UNK_10daba510);
  func_0x000107c6157c(uVar134);
  pcVar138 = FUN_102594860;
  func_0x0001000823a8(FUN_102594860,uVar134);
  func_0x000100082720("MapAdsPromotedPlaceDataRepositoryServicesServiceProvider",0x38,2);
  uVar139 = param_24;
  FUN_102614800(param_24,param_10,param_53,uVar136,in_stack_00000210,param_34,param_9);
  func_0x000100082720("MapChromeV2BitmojiButtonsServiceProvider",0x28,2);
  uVar140 = uVar46;
  FUN_102614bec(uVar46,param_34,in_stack_00000218,uVar139);
  func_0x000100082720("MapChromeV2CloudFooterTrayServiceProvider",0x29,2);
  uVar141 = param_45;
  FUN_102614e78(param_45,param_25,in_stack_00000220,in_stack_00000228,uVar46,param_10,param_53,
                param_24,param_34,param_9,uVar136,uVar117,param_60,param_63,in_stack_00000208,
                param_11,param_47,uVar113,param_54,param_19,param_16,in_stack_00000230,
                in_stack_00000238,uVar139,uVar140);
  func_0x000100082720("MapChromeV2ServiceProvider",0x1a,2);
  uVar142 = uVar141;
  FUN_102614ddc();
  func_0x000100082720("MapChromeV2ServicesServiceProvider",0x22,2);
  uVar143 = uVar141;
  func_0x0001026936e0();
  func_0x000100082720("MapReactionFeedbackPerformerServiceProvider",0x2b,2);
  uVar144 = uVar143;
  FUN_102693674();
  func_0x000100082720("MapReactionFeedbackServiceProvider",0x22,2);
  func_0x0001000285a8(0x112ea6f70,&UNK_10dabc390);
  puVar178 = &UNK_1105234c8;
  func_0x000107c613fc(&UNK_1105234c8,0x38,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar46;
  *(undefined8 *)(puVar178 + 0x20) = uVar113;
  *(undefined8 *)(puVar178 + 0x28) = param_47;
  *(undefined8 *)(puVar178 + 0x30) = uVar142;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(uVar113);
  func_0x000107c6157c(uVar142);
  pcVar145 = FUN_1025948ac;
  func_0x0001000823a8(FUN_1025948ac,puVar178);
  func_0x000100082720("SCMapMultiTrayServicesEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ea6f78,&UNK_10daba520);
  func_0x000107c6157c(pcVar145);
  uVar146 = 0x1025948cc;
  func_0x0001000823a8(0x1025948cc,pcVar145);
  func_0x000100082720("SCMapMultiTrayServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112ea6f80,&UNK_10dabd020);
  puVar178 = &UNK_1105234f0;
  func_0x000107c613fc(&UNK_1105234f0,0x68,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar46;
  *(undefined8 *)(puVar178 + 0x20) = uVar146;
  *(undefined8 *)(puVar178 + 0x28) = uVar117;
  *(undefined8 *)(puVar178 + 0x30) = param_4;
  *(undefined8 *)(puVar178 + 0x38) = param_11;
  *(undefined8 *)(puVar178 + 0x40) = param_15;
  *(undefined8 *)(puVar178 + 0x48) = param_17;
  *(undefined8 *)(puVar178 + 0x50) = param_53;
  *(undefined8 *)(puVar178 + 0x58) = param_5;
  *(undefined8 *)(puVar178 + 0x60) = uVar113;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(uVar113);
  func_0x000107c6157c(uVar117);
  func_0x000107c6157c(uVar146);
  pcVar147 = FUN_102594948;
  func_0x0001000823a8(FUN_102594948,puVar178);
  func_0x000100082720("SCMapViewportItemsRegistryServicesEntryPointWrapperServiceProvider",0x42,2);
  uVar148 = param_66;
  FUN_1025ae678(param_66,param_65,uVar112,param_28,uVar144,in_stack_00000240,in_stack_00000248,
                param_24,param_5,in_stack_00000250,in_stack_00000258,param_34,in_stack_00000260,
                param_25,in_stack_00000268,in_stack_000001f0,param_54,uVar116,in_stack_00000270,
                uVar128,uVar113,in_stack_00000278,in_stack_00000200,uVar117,uVar146,
                in_stack_00000280,param_10,param_53,param_60,param_19,param_52,uVar46,
                in_stack_00000288,param_36,in_stack_00000290,in_stack_00000298,in_stack_000002a0,
                param_11,param_27,uVar118,in_stack_000002a8,uVar49,param_37,pcVar55,pcVar62,pcVar63,
                pcVar64,pcVar66,pcVar69,pcVar86,pcVar88);
  func_0x000100082720("MapFocusCardsScopedFactoryServiceProvider",0x29,2);
  uVar149 = param_24;
  FUN_102665198(param_24,param_55,param_25,in_stack_000002b0,uVar146,param_10,param_53,param_60,
                uVar46,pcVar61);
  func_0x000100082720("MapFootstepsTrayScopedFactoryServiceProvider",0x2c,2);
  uVar150 = uVar125;
  FUN_10267c818(uVar125,param_25,uVar146,uVar46);
  func_0x000100082720("MapMemoriesWorkflowScopedFactoryServiceProvider",0x2f,2);
  FUN_1025c24d4(in_stack_000002b8,in_stack_000002c0,uVar132,pcVar138,uVar184,uVar93,
                in_stack_000002c8,in_stack_00000248,uVar103,param_71,in_stack_000002d0,
                in_stack_000002d8,param_5,in_stack_000002e0,uVar113,uVar117,uVar146,param_51,uVar46,
                in_stack_00000230,in_stack_000002e8,pcVar52,in_stack_000002f0,pcVar57,
                in_stack_000002f8,in_stack_00000300);
  func_0x000100082720("MapPlaceProfilePresenterScopedFactoryServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ea6f88,&UNK_10daba530);
  puVar178 = &UNK_110523518;
  func_0x000107c613fc(&UNK_110523518,0xa8,7);
  *(undefined8 *)(puVar178 + 0x10) = param_34;
  *(undefined8 *)(puVar178 + 0x18) = param_9;
  *(undefined8 *)(puVar178 + 0x20) = uVar119;
  *(undefined8 *)(puVar178 + 0x28) = param_24;
  *(undefined8 *)(puVar178 + 0x30) = in_stack_00000310;
  *(char **)(puVar178 + 0x38) = pcVar72;
  *(undefined8 *)(puVar178 + 0x40) = param_54;
  *(undefined8 *)(puVar178 + 0x48) = in_stack_00000308;
  *(undefined8 *)(puVar178 + 0x50) = in_stack_000002b0;
  *(undefined8 *)(puVar178 + 0x58) = uVar117;
  *(undefined8 *)(puVar178 + 0x60) = param_10;
  *(undefined8 *)(puVar178 + 0x68) = param_53;
  *(undefined8 *)(puVar178 + 0x70) = param_70;
  *(undefined8 *)(puVar178 + 0x78) = uVar146;
  *(undefined8 *)(puVar178 + 0x80) = param_11;
  *(undefined8 *)(puVar178 + 0x88) = param_19;
  *(undefined8 *)(puVar178 + 0x90) = param_33;
  *(undefined8 *)(puVar178 + 0x98) = param_65;
  *(undefined8 *)(puVar178 + 0xa0) = param_69;
  func_0x000107c6157c();
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(uVar117);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(uVar119);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(uVar146);
  func_0x000107c6157c(in_stack_00000310);
  func_0x000107c6157c(pcVar72);
  func_0x000107c6157c(in_stack_00000308);
  func_0x000107c6157c(in_stack_000002b0);
  uVar151 = 0x102594994;
  func_0x0001000823a8(0x102594994,puVar178);
  func_0x000100082720("MapStartupPromptPluginRegistryServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112ea6f90,&UNK_10daba538);
  puVar178 = &UNK_110523540;
  func_0x000107c613fc(&UNK_110523540,0xb8,7);
  *(undefined8 *)(puVar178 + 0x10) = param_54;
  *(undefined8 *)(puVar178 + 0x18) = uVar46;
  *(undefined8 *)(puVar178 + 0x20) = in_stack_00000320;
  *(undefined8 *)(puVar178 + 0x28) = param_34;
  *(undefined8 *)(puVar178 + 0x30) = param_53;
  *(undefined8 *)(puVar178 + 0x38) = param_45;
  *(char **)(puVar178 + 0x40) = pcVar4;
  *(undefined8 *)(puVar178 + 0x48) = uVar117;
  *(char **)(puVar178 + 0x50) = pcVar5;
  *(undefined8 *)(puVar178 + 0x58) = param_24;
  *(undefined8 *)(puVar178 + 0x60) = param_55;
  *(undefined8 *)(puVar178 + 0x68) = in_stack_00000318;
  *(char **)(puVar178 + 0x70) = pcVar91;
  *(undefined8 *)(puVar178 + 0x78) = in_stack_000002b0;
  *(undefined8 *)(puVar178 + 0x80) = param_10;
  *(undefined8 *)(puVar178 + 0x88) = param_3;
  *(undefined8 *)(puVar178 + 0x90) = param_51;
  *(undefined8 *)(puVar178 + 0x98) = uVar142;
  *(undefined8 *)(puVar178 + 0xa0) = uVar146;
  *(undefined8 *)(puVar178 + 0xa8) = param_5;
  *(undefined8 *)(puVar178 + 0xb0) = uVar113;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(uVar113);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(uVar117);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(uVar142);
  func_0x000107c6157c(uVar146);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_00000320);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(in_stack_00000318);
  func_0x000107c6157c(pcVar91);
  func_0x000107c6157c(param_3);
  uVar152 = 0x1025949e0;
  func_0x0001000823a8(0x1025949e0,puVar178);
  func_0x000100082720("MapViewLifecyclePluginRegistryServiceProvider",0x2d,2);
  FUN_1025b3bd8(param_66,uVar122,param_65,in_stack_00000328,uVar144,uVar136,in_stack_000002c8,
                param_24,param_5,in_stack_00000330,in_stack_00000208,in_stack_00000338,
                in_stack_00000340,param_25,param_21,param_13,param_54,param_26,uVar117,uVar146,
                param_10,param_53,param_60,in_stack_00000230,in_stack_00000348);
  func_0x000100082720("SCMapBitmojiTrayScopedFactoryServiceProvider",0x2c,2);
  uVar153 = uVar122;
  FUN_1025bed90(uVar122,in_stack_000002c8,param_24,param_25,in_stack_00000350,param_21,param_26,
                uVar117,uVar146,param_10,uVar46,in_stack_00000230,param_4);
  func_0x000100082720("SCMapHomeProfileScopedFactoryServiceProvider",0x2c,2);
  uVar154 = uVar148;
  FUN_10265c150();
  func_0x000100082720("MapFocusCardsBuilderServiceProvider",0x23,2);
  uVar155 = uVar154;
  FUN_10265c384();
  func_0x000100082720("MapFocusCardsFactoryServiceProvider",0x23,2);
  uVar156 = uVar149;
  func_0x0001026655fc();
  func_0x000100082720("MapFootstepsTrayBuilderServiceProvider",0x26,2);
  uVar157 = uVar156;
  FUN_102665584();
  func_0x000100082720("MapFootstepsTrayFactoryServiceProvider",0x26,2);
  uVar158 = uVar150;
  FUN_10267ca78();
  func_0x000100082720("MapMemoriesWorkflowBuilderServiceProvider",0x29,2);
  uVar159 = uVar158;
  FUN_10267e068();
  func_0x000100082720("MapMemoriesWorkflowServicesServiceProvider",0x2a,2);
  uVar160 = in_stack_000002b8;
  FUN_1026872e0();
  func_0x000100082720("MapPlaceProfileFactoryServiceProvider",0x25,2);
  uVar161 = uVar152;
  func_0x000102700ec0();
  func_0x000100082720("MapViewLifecycleBroadcasterFactoryImplementationServiceProvider",0x3f,2);
  uVar162 = uVar161;
  FUN_10270137c();
  func_0x000100082720("MapViewLifecycleServicesServiceProvider",0x27,2);
  uVar163 = param_66;
  func_0x00010437ba6c();
  func_0x000100082720("SCMapBitmojiTrayScopeServicesServiceProvider",0x2c,2);
  uVar164 = uVar153;
  func_0x00010438bcc8();
  func_0x000100082720("SCMapHomeProfileScopeServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112ea6f98,&UNK_10daba540);
  puVar178 = &UNK_110523568;
  func_0x000107c613fc(&UNK_110523568,0x40,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar46;
  *(undefined8 *)(puVar178 + 0x20) = uVar113;
  *(undefined8 *)(puVar178 + 0x28) = param_5;
  *(undefined8 *)(puVar178 + 0x30) = uVar117;
  *(undefined8 *)(puVar178 + 0x38) = uVar160;
  func_0x000107c6157c();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(uVar113);
  func_0x000107c6157c(uVar117);
  func_0x000107c6157c(uVar160);
  pcVar165 = FUN_102594a78;
  func_0x0001000823a8(FUN_102594a78,puVar178);
  func_0x000100082720("SCMapPlacesBasemapServicesEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112ea6fa0,&UNK_10dabca60);
  puVar178 = &UNK_110523590;
  func_0x000107c613fc(&UNK_110523590,0x58,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = uVar46;
  *(undefined8 *)(puVar178 + 0x20) = uVar113;
  *(undefined8 *)(puVar178 + 0x28) = in_stack_00000228;
  *(undefined8 *)(puVar178 + 0x30) = param_5;
  *(undefined8 *)(puVar178 + 0x38) = uVar117;
  *(undefined8 *)(puVar178 + 0x40) = uVar160;
  *(undefined8 *)(puVar178 + 0x48) = in_stack_00000358;
  *(char **)(puVar178 + 0x50) = pcVar79;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(uVar113);
  func_0x000107c6157c(uVar117);
  func_0x000107c6157c(uVar160);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(pcVar79);
  pcVar166 = FUN_102594afc;
  func_0x0001000823a8(FUN_102594afc,puVar178);
  func_0x000100082720("SCMapTapToPlayEntryPointWrapperServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112ea6fa8,&UNK_10daba550);
  func_0x000107c6157c(pcVar147);
  pcVar167 = FUN_102594b40;
  func_0x0001000823a8(FUN_102594b40,pcVar147);
  func_0x000100082720("SCMapViewportItemsRegistryServicesServiceProvider",0x31,2);
  FUN_1025b9a64(in_stack_00000360,in_stack_00000368,uVar160,param_5,param_17,in_stack_00000370,
                in_stack_00000260,param_25,in_stack_00000378,in_stack_00000220,in_stack_00000270,
                uVar105,in_stack_00000380,uVar117,uVar146,param_51,in_stack_00000228,uVar46,
                in_stack_00000388,param_4,param_11,param_27,in_stack_00000390);
  func_0x000100082720("SCMapFocusedDropScopedFactoryServiceProvider",0x2c,2);
  uVar168 = in_stack_00000360;
  func_0x00010438b428();
  func_0x000100082720("SCMapFocusedDropScopeServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112ea6fb0,&UNK_10daba558);
  func_0x000107c6157c(pcVar165);
  uVar169 = 0x102594b48;
  func_0x0001000823a8(0x102594b48,pcVar165);
  func_0x000100082720("SCMapPlacesBasemapServicesServiceProvider",0x29,2);
  uVar170 = param_5;
  FUN_1025afe84(param_5,param_17,param_25,in_stack_00000380,uVar168,uVar113,uVar117,uVar146,
                in_stack_00000398,uVar46,param_36,param_4,param_63,param_11);
  func_0x000100082720("SCMapAddressSelectionScopedFactoryServiceProvider",0x31,2);
  uVar171 = uVar170;
  func_0x00010437b288();
  func_0x000100082720("SCMapAddressSelectionScopeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112ea6fb8,&UNK_10daba560);
  puVar178 = &UNK_1105235b8;
  func_0x000107c613fc(&UNK_1105235b8,0x78,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_24;
  *(undefined8 *)(puVar178 + 0x20) = uVar105;
  *(undefined8 *)(puVar178 + 0x28) = in_stack_00000380;
  *(undefined8 *)(puVar178 + 0x30) = uVar113;
  *(undefined8 *)(puVar178 + 0x38) = uVar46;
  *(undefined8 *)(puVar178 + 0x40) = param_10;
  *(undefined8 *)(puVar178 + 0x48) = param_27;
  *(undefined8 *)(puVar178 + 0x50) = param_17;
  *(undefined8 *)(puVar178 + 0x58) = param_5;
  *(undefined8 *)(puVar178 + 0x60) = uVar142;
  *(undefined8 *)(puVar178 + 0x68) = uVar168;
  *(char **)(puVar178 + 0x70) = pcVar70;
  func_0x000107c6157c();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(uVar113);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(uVar142);
  func_0x000107c6157c(uVar105);
  func_0x000107c6157c(in_stack_00000380);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar70);
  pcVar172 = FUN_102594b50;
  func_0x0001000823a8(FUN_102594b50,puVar178);
  func_0x000100082720("SCMapDropsEntryPointWrapperServiceProvider",0x2a,2);
  uVar173 = in_stack_000003a0;
  FUN_102696750(in_stack_000003a0,in_stack_000003a8,in_stack_000003b0,uVar140,param_65,param_24,
                in_stack_000003b8,param_55,in_stack_00000318,in_stack_00000258,param_34,param_9,
                param_45,in_stack_000002e0,uVar171,in_stack_000002b0,uVar163,uVar168,uVar113,uVar164
                ,uVar117,uVar146,param_10,param_53,uVar169,param_60,param_19,uVar46,
                in_stack_000003c0,in_stack_000003c8,in_stack_000003d0,in_stack_00000290,
                in_stack_00000298,in_stack_000002a0,param_11,param_8,uVar118,in_stack_000003d8,
                uVar47,uVar148,uVar149,uVar48,uVar150,in_stack_000002b8,uVar50,uVar130,
                in_stack_000003e0,in_stack_000003e8,param_37,pcVar58,pcVar59,pcVar61,pcVar63,pcVar66
                ,pcVar67,pcVar68,pcVar70,pcVar74,pcVar76,pcVar81,pcVar86,pcVar89,uVar120);
  func_0x000100082720("MapRouterScopedFactoryServiceProvider",0x25,2);
  uVar174 = param_24;
  FUN_10262a054(param_24,param_11,param_45,uVar141,param_53,uVar173,uVar94,param_34);
  func_0x000100082720("MapDestinationServiceProvider",0x1d,2);
  uVar175 = uVar174;
  FUN_10262a4a0();
  func_0x000100082720("MapDestinationServicesServiceProvider",0x25,2);
  uVar176 = uVar173;
  FUN_1026b7d00();
  func_0x000100082720("MapRoutingFactoryServiceProvider",0x20,2);
  pcVar177 = pcVar7;
  FUN_1025c68e4(pcVar7,uVar122,uVar131,uVar132,pcVar138,uVar184,uVar93,uVar142,uVar175,param_65,
                uVar155,uVar157,uVar112,uVar159,uVar160,uVar144,uVar176,uVar135,pcVar8,uVar136,
                uVar162,uVar101,pcVar9,pcVar10,pcVar11,uVar103,pcVar12,pcVar13,pcVar14,pcVar15,
                pcVar16,pcVar17,pcVar18,pcVar19,pcVar20,pcVar21,pcVar22,uVar171,uVar116,pcVar23,
                uVar163,pcVar24,uVar105,uVar128,pcVar25,uVar168,pcVar26,pcVar27,uVar113,pcVar28,
                pcVar29,uVar164,pcVar30,uVar117,uVar146,pcVar31,pcVar32,pcVar33,uVar169,pcVar34,
                uVar46,pcVar167,pcVar35,pcVar36,pcVar37,pcVar38,pcVar39,pcVar40,pcVar41,pcVar42);
  func_0x000100082720("MapViewScopeGraphBridgeServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112ea6fc0,&UNK_10dabb440);
  puVar178 = &UNK_1105235e0;
  func_0x000107c613fc(&UNK_1105235e0,0x3f0,7);
  *(undefined8 **)(puVar178 + 0x10) = puVar1;
  *(undefined8 *)(puVar178 + 0x18) = param_45;
  *(undefined8 *)(puVar178 + 0x20) = param_24;
  *(undefined8 *)(puVar178 + 0x28) = in_stack_000003a0;
  *(undefined8 *)(puVar178 + 0x30) = in_stack_000003f0;
  *(undefined8 *)(puVar178 + 0x38) = param_47;
  *(undefined8 *)(puVar178 + 0x40) = param_21;
  *(undefined8 *)(puVar178 + 0x48) = param_5;
  *(undefined8 *)(puVar178 + 0x50) = param_10;
  *(undefined8 *)(puVar178 + 0x58) = in_stack_000002b0;
  *(undefined8 *)(puVar178 + 0x60) = param_59;
  *(undefined8 *)(puVar178 + 0x68) = param_4;
  *(undefined8 *)(puVar178 + 0x70) = param_54;
  *(undefined8 *)(puVar178 + 0x78) = in_stack_000003f8;
  *(undefined8 *)(puVar178 + 0x80) = in_stack_00000298;
  *(undefined8 *)(puVar178 + 0x88) = in_stack_00000400;
  *(undefined8 *)(puVar178 + 0x90) = in_stack_00000408;
  *(undefined8 *)(puVar178 + 0x98) = in_stack_00000410;
  *(undefined8 *)(puVar178 + 0xa0) = in_stack_00000418;
  *(undefined8 *)(puVar178 + 0xa8) = in_stack_00000420;
  *(undefined8 *)(puVar178 + 0xb0) = in_stack_00000428;
  *(undefined8 *)(puVar178 + 0xb8) = in_stack_00000430;
  *(undefined8 *)(puVar178 + 0xc0) = param_53;
  *(undefined8 *)(puVar178 + 200) = param_60;
  *(undefined8 *)(puVar178 + 0xd0) = in_stack_00000290;
  *(undefined8 *)(puVar178 + 0xd8) = in_stack_00000438;
  *(undefined8 *)(puVar178 + 0xe0) = in_stack_00000440;
  *(undefined8 *)(puVar178 + 0xe8) = param_19;
  *(undefined8 *)(puVar178 + 0xf0) = uVar46;
  *(undefined8 *)(puVar178 + 0xf8) = uVar113;
  *(undefined8 *)(puVar178 + 0x100) = uVar146;
  *(undefined8 *)(puVar178 + 0x108) = in_stack_00000350;
  *(undefined8 *)(puVar178 + 0x110) = in_stack_00000448;
  *(undefined8 *)(puVar178 + 0x118) = uVar117;
  *(undefined8 *)(puVar178 + 0x120) = param_58;
  *(undefined8 *)(puVar178 + 0x128) = param_63;
  *(undefined8 *)(puVar178 + 0x130) = in_stack_00000450;
  *(undefined8 *)(puVar178 + 0x138) = param_11;
  *(undefined8 *)(puVar178 + 0x140) = param_36;
  *(undefined8 *)(puVar178 + 0x148) = in_stack_00000228;
  *(undefined8 *)(puVar178 + 0x150) = in_stack_00000458;
  *(undefined8 *)(puVar178 + 0x158) = param_30;
  *(undefined8 *)(puVar178 + 0x160) = param_29;
  *(undefined8 *)(puVar178 + 0x168) = param_18;
  *(undefined8 *)(puVar178 + 0x170) = in_stack_00000460;
  *(undefined8 *)(puVar178 + 0x178) = in_stack_00000468;
  *(undefined8 *)(puVar178 + 0x180) = in_stack_00000470;
  *(undefined8 *)(puVar178 + 0x188) = in_stack_00000478;
  *(undefined8 *)(puVar178 + 400) = uVar169;
  *(undefined8 *)(puVar178 + 0x198) = in_stack_00000480;
  *(code **)(puVar178 + 0x1a0) = pcVar167;
  *(undefined8 *)(puVar178 + 0x1a8) = in_stack_00000230;
  *(undefined8 *)(puVar178 + 0x1b0) = param_15;
  *(undefined8 *)(puVar178 + 0x1b8) = in_stack_000003c8;
  *(undefined8 *)(puVar178 + 0x1c0) = uVar116;
  *(undefined8 *)(puVar178 + 0x1c8) = in_stack_000001f8;
  *(undefined8 *)(puVar178 + 0x1d0) = in_stack_00000488;
  *(undefined8 *)(puVar178 + 0x1d8) = in_stack_000002e0;
  *(undefined8 *)(puVar178 + 0x1e0) = in_stack_00000490;
  *(undefined8 *)(puVar178 + 0x1e8) = in_stack_00000498;
  *(undefined8 *)(puVar178 + 0x1f0) = in_stack_000004a0;
  *(undefined8 *)(puVar178 + 0x1f8) = uVar142;
  *(undefined8 *)(puVar178 + 0x200) = uVar162;
  *(undefined8 *)(puVar178 + 0x208) = in_stack_000004a8;
  *(undefined8 *)(puVar178 + 0x210) = uVar155;
  *(undefined8 *)(puVar178 + 0x218) = uVar159;
  *(undefined8 *)(puVar178 + 0x220) = uVar160;
  *(undefined8 *)(puVar178 + 0x228) = uVar96;
  *(undefined8 *)(puVar178 + 0x230) = in_stack_000004b0;
  *(undefined8 *)(puVar178 + 0x238) = param_65;
  *(undefined8 *)(puVar178 + 0x240) = in_stack_00000288;
  *(undefined8 *)(puVar178 + 0x248) = uVar95;
  *(undefined8 *)(puVar178 + 0x250) = uVar99;
  *(undefined8 *)(puVar178 + 600) = in_stack_00000238;
  *(undefined8 *)(puVar178 + 0x260) = in_stack_00000258;
  *(undefined8 *)(puVar178 + 0x268) = uVar176;
  *(undefined8 *)(puVar178 + 0x270) = uVar124;
  *(undefined8 *)(puVar178 + 0x278) = uVar175;
  *(undefined8 *)(puVar178 + 0x280) = uVar157;
  *(undefined8 *)(puVar178 + 0x288) = in_stack_000004b8;
  *(undefined8 *)(puVar178 + 0x290) = uVar122;
  *(undefined8 *)(puVar178 + 0x298) = in_stack_00000348;
  *(undefined8 *)(puVar178 + 0x2a0) = uVar163;
  *(undefined8 *)(puVar178 + 0x2a8) = in_stack_000004c0;
  *(undefined8 *)(puVar178 + 0x2b0) = uVar171;
  *(undefined8 *)(puVar178 + 0x2b8) = uVar168;
  *(undefined8 *)(puVar178 + 0x2c0) = uVar164;
  *(undefined8 *)(puVar178 + 0x2c8) = in_stack_000004c8;
  *(undefined8 *)(puVar178 + 0x2d0) = in_stack_00000358;
  *(undefined8 *)(puVar178 + 0x2d8) = in_stack_000003b8;
  *(undefined8 *)(puVar178 + 0x2e0) = in_stack_000003c0;
  *(undefined8 *)(puVar178 + 0x2e8) = in_stack_000002a0;
  *(undefined8 *)(puVar178 + 0x2f0) = in_stack_000004d0;
  *(undefined8 *)(puVar178 + 0x2f8) = in_stack_000003d0;
  *(undefined8 *)(puVar178 + 0x300) = in_stack_000004d8;
  *(undefined8 *)(puVar178 + 0x308) = in_stack_000004e0;
  *(undefined8 *)(puVar178 + 0x310) = param_55;
  *(undefined8 *)(puVar178 + 0x318) = in_stack_000004e8;
  *(char **)(puVar178 + 800) = pcVar83;
  *(char **)(puVar178 + 0x328) = pcVar65;
  *(char **)(puVar178 + 0x330) = pcVar85;
  *(char **)(puVar178 + 0x338) = pcVar80;
  *(char **)(puVar178 + 0x340) = pcVar66;
  *(char **)(puVar178 + 0x348) = pcVar63;
  *(char **)(puVar178 + 0x350) = pcVar59;
  *(char **)(puVar178 + 0x358) = pcVar79;
  *(char **)(puVar178 + 0x360) = pcVar58;
  *(char **)(puVar178 + 0x368) = pcVar84;
  *(char **)(puVar178 + 0x370) = pcVar76;
  *(char **)(puVar178 + 0x378) = pcVar82;
  *(char **)(puVar178 + 0x380) = pcVar68;
  *(char **)(puVar178 + 0x388) = pcVar81;
  *(char **)(puVar178 + 0x390) = pcVar70;
  *(char **)(puVar178 + 0x398) = pcVar67;
  *(char **)(puVar178 + 0x3a0) = pcVar60;
  *(char **)(puVar178 + 0x3a8) = pcVar77;
  *(char **)(puVar178 + 0x3b0) = pcVar89;
  *(char **)(puVar178 + 0x3b8) = pcVar71;
  *(char **)(puVar178 + 0x3c0) = pcVar73;
  *(char **)(puVar178 + 0x3c8) = pcVar54;
  *(char **)(puVar178 + 0x3d0) = pcVar74;
  *(char **)(puVar178 + 0x3d8) = pcVar61;
  *(char **)(puVar178 + 0x3e0) = pcVar53;
  *(char **)(puVar178 + 1000) = pcVar86;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(uVar113);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(uVar117);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(uVar142);
  func_0x000107c6157c(uVar146);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(uVar160);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(pcVar79);
  func_0x000107c6157c(uVar168);
  func_0x000107c6157c(pcVar70);
  func_0x000107c6157c(in_stack_000003a0);
  func_0x000107c6157c(in_stack_000003f0);
  func_0x000107c6157c(in_stack_000003f8);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(in_stack_00000400);
  func_0x000107c6157c(in_stack_00000408);
  func_0x000107c6157c(in_stack_00000410);
  func_0x000107c6157c(in_stack_00000418);
  func_0x000107c6157c(in_stack_00000420);
  func_0x000107c6157c(in_stack_00000428);
  func_0x000107c6157c(in_stack_00000430);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000438);
  func_0x000107c6157c(in_stack_00000440);
  func_0x000107c6157c(in_stack_00000350);
  func_0x000107c6157c(in_stack_00000448);
  func_0x000107c6157c(in_stack_00000450);
  func_0x000107c6157c(in_stack_00000458);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(in_stack_00000460);
  func_0x000107c6157c(in_stack_00000468);
  func_0x000107c6157c(in_stack_00000470);
  func_0x000107c6157c(in_stack_00000478);
  func_0x000107c6157c(uVar169);
  func_0x000107c6157c(in_stack_00000480);
  func_0x000107c6157c(pcVar167);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_000003c8);
  func_0x000107c6157c(uVar116);
  func_0x000107c6157c(in_stack_00000488);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(in_stack_00000490);
  func_0x000107c6157c(in_stack_00000498);
  func_0x000107c6157c(in_stack_000004a0);
  func_0x000107c6157c(uVar162);
  func_0x000107c6157c(in_stack_000004a8);
  func_0x000107c6157c(uVar155);
  func_0x000107c6157c(uVar159);
  func_0x000107c6157c(uVar96);
  func_0x000107c6157c(in_stack_000004b0);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(uVar95);
  func_0x000107c6157c(uVar99);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(uVar176);
  func_0x000107c6157c(uVar124);
  func_0x000107c6157c(uVar175);
  func_0x000107c6157c(uVar157);
  func_0x000107c6157c(in_stack_000004b8);
  func_0x000107c6157c(uVar122);
  func_0x000107c6157c(in_stack_00000348);
  func_0x000107c6157c(uVar163);
  func_0x000107c6157c(in_stack_000004c0);
  func_0x000107c6157c(uVar171);
  func_0x000107c6157c(uVar164);
  func_0x000107c6157c(in_stack_000004c8);
  func_0x000107c6157c(in_stack_000003b8);
  func_0x000107c6157c(in_stack_000003c0);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(in_stack_000004d0);
  func_0x000107c6157c(in_stack_000003d0);
  func_0x000107c6157c(in_stack_000004d8);
  func_0x000107c6157c(in_stack_000004e0);
  func_0x000107c6157c(in_stack_000004e8);
  func_0x000107c6157c(pcVar83);
  func_0x000107c6157c(pcVar65);
  func_0x000107c6157c(pcVar85);
  func_0x000107c6157c(pcVar80);
  func_0x000107c6157c(pcVar66);
  func_0x000107c6157c(pcVar63);
  func_0x000107c6157c(pcVar59);
  func_0x000107c6157c(pcVar58);
  func_0x000107c6157c(pcVar84);
  func_0x000107c6157c(pcVar76);
  func_0x000107c6157c(pcVar82);
  func_0x000107c6157c(pcVar68);
  func_0x000107c6157c(pcVar81);
  func_0x000107c6157c(pcVar67);
  func_0x000107c6157c(pcVar60);
  func_0x000107c6157c(pcVar77);
  func_0x000107c6157c(pcVar89);
  func_0x000107c6157c(pcVar71);
  func_0x000107c6157c(pcVar73);
  func_0x000107c6157c(pcVar54);
  func_0x000107c6157c(pcVar74);
  func_0x000107c6157c(pcVar61);
  func_0x000107c6157c(pcVar53);
  func_0x000107c6157c(pcVar86);
  pcVar179 = FUN_102594b8c;
  func_0x0001000823a8(FUN_102594b8c,puVar178);
  func_0x000100082720("SCFullMapScopeEntryPointWrapperServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112ea6fc8,&UNK_10daba570);
  puVar178 = &UNK_110523608;
  func_0x000107c613fc(&UNK_110523608,0x118,7);
  *(undefined8 *)(puVar178 + 0x10) = uVar133;
  *(undefined8 *)(puVar178 + 0x18) = uVar123;
  *(undefined8 *)(puVar178 + 0x20) = uVar92;
  *(code **)(puVar178 + 0x28) = pcVar2;
  *(undefined8 *)(puVar178 + 0x30) = uVar134;
  *(undefined8 *)(puVar178 + 0x38) = uVar3;
  *(undefined8 *)(puVar178 + 0x40) = uVar97;
  *(undefined8 *)(puVar178 + 0x48) = uVar98;
  *(undefined8 *)(puVar178 + 0x50) = param_45;
  *(undefined8 *)(puVar178 + 0x58) = uVar46;
  *(undefined8 *)(puVar178 + 0x60) = param_59;
  *(undefined8 *)(puVar178 + 0x68) = param_34;
  *(undefined8 *)(puVar178 + 0x70) = uVar151;
  *(undefined8 **)(puVar178 + 0x78) = puVar1;
  *(char **)(puVar178 + 0x80) = pcVar177;
  *(undefined8 *)(puVar178 + 0x88) = uVar102;
  *(code **)(puVar178 + 0x90) = pcVar179;
  *(code **)(puVar178 + 0x98) = pcVar115;
  *(undefined8 *)(puVar178 + 0xa0) = uVar104;
  *(code **)(puVar178 + 0xa8) = pcVar172;
  *(code **)(puVar178 + 0xb0) = pcVar127;
  *(undefined8 *)(puVar178 + 0xb8) = uVar106;
  *(code **)(puVar178 + 0xc0) = pcVar114;
  *(code **)(puVar178 + 200) = pcVar145;
  *(code **)(puVar178 + 0xd0) = pcVar165;
  *(undefined8 *)(puVar178 + 0xd8) = uVar107;
  *(code **)(puVar178 + 0xe0) = pcVar137;
  *(code **)(puVar178 + 0xe8) = pcVar166;
  *(code **)(puVar178 + 0xf0) = pcVar108;
  *(undefined8 *)(puVar178 + 0xf8) = uVar109;
  *(undefined8 *)(puVar178 + 0x100) = uVar45;
  *(code **)(puVar178 + 0x108) = pcVar90;
  *(code **)(puVar178 + 0x110) = pcVar147;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar45);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(uVar102);
  func_0x000107c6157c(uVar104);
  func_0x000107c6157c(uVar92);
  func_0x000107c6157c(uVar106);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(pcVar115);
  func_0x000107c6157c(pcVar114);
  func_0x000107c6157c(pcVar127);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(uVar123);
  func_0x000107c6157c(uVar134);
  func_0x000107c6157c(pcVar145);
  func_0x000107c6157c(pcVar147);
  func_0x000107c6157c(pcVar165);
  func_0x000107c6157c(uVar133);
  func_0x000107c6157c(uVar97);
  func_0x000107c6157c(uVar98);
  func_0x000107c6157c(uVar151);
  func_0x000107c6157c(pcVar177);
  func_0x000107c6157c(pcVar179);
  func_0x000107c6157c(pcVar172);
  func_0x000107c6157c(uVar107);
  func_0x000107c6157c(pcVar137);
  func_0x000107c6157c(pcVar166);
  func_0x000107c6157c(pcVar108);
  func_0x000107c6157c(uVar109);
  func_0x000107c6157c(pcVar90);
  pcVar180 = FUN_102594d88;
  func_0x0001000823a8(FUN_102594d88,puVar178);
  func_0x000100082720("SCMapViewScopeInitializationPluginRegistryServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ea6df0,&UNK_10daba1e0);
  func_0x000107c6157c(pcVar180);
  pcVar181 = FUN_102594dec;
  func_0x0001000823a8(FUN_102594dec,pcVar180);
  func_0x000100082720("SCMapViewScopeInitializationServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112ea6de0,&UNK_10daba1d0);
  func_0x000107c6157c(pcVar181);
  uVar182 = 0x102594df4;
  func_0x0001000823a8(0x102594df4,pcVar181);
  func_0x000100082720("SCMapViewScopedServicesServiceProvider",0x26,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar178 = &UNK_110523630;
  func_0x000107c613fc(&UNK_110523630,0x20,7);
  *(undefined8 *)(puVar178 + 0x10) = uVar182;
  *(code **)(puVar178 + 0x18) = pcVar90;
  func_0x000107c6157c(pcVar90);
  pcVar183 = FUN_102594e28;
  func_0x0001000823a8(FUN_102594e28,puVar178);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar184);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(param_6);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(pcVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(pcVar26);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(pcVar29);
  func_0x000107c61574(pcVar30);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(pcVar32);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(pcVar34);
  func_0x000107c61574(pcVar35);
  func_0x000107c61574(pcVar36);
  func_0x000107c61574(pcVar37);
  func_0x000107c61574(pcVar38);
  func_0x000107c61574(pcVar39);
  func_0x000107c61574(pcVar40);
  func_0x000107c61574(pcVar41);
  func_0x000107c61574(pcVar42);
  func_0x000107c61574(pcVar43);
  func_0x000107c61574(pcVar44);
  func_0x000107c61574(uVar45);
  func_0x000107c61574(uVar46);
  func_0x000107c61574(uVar47);
  func_0x000107c61574(uVar48);
  func_0x000107c61574(uVar49);
  func_0x000107c61574(uVar50);
  func_0x000107c61574(uVar51);
  func_0x000107c61574(param_33);
  func_0x000107c61574(pcVar52);
  func_0x000107c61574(pcVar53);
  func_0x000107c61574(pcVar54);
  func_0x000107c61574(pcVar55);
  func_0x000107c61574(pcVar56);
  func_0x000107c61574(pcVar57);
  func_0x000107c61574(pcVar58);
  func_0x000107c61574(pcVar59);
  func_0x000107c61574(pcVar60);
  func_0x000107c61574(pcVar61);
  func_0x000107c61574(pcVar62);
  func_0x000107c61574(pcVar63);
  func_0x000107c61574(pcVar64);
  func_0x000107c61574(pcVar65);
  func_0x000107c61574(pcVar66);
  func_0x000107c61574(pcVar67);
  func_0x000107c61574(pcVar68);
  func_0x000107c61574(pcVar69);
  func_0x000107c61574(pcVar70);
  func_0x000107c61574(pcVar71);
  func_0x000107c61574(pcVar72);
  func_0x000107c61574(pcVar73);
  func_0x000107c61574(pcVar74);
  func_0x000107c61574(pcVar75);
  func_0x000107c61574(pcVar76);
  func_0x000107c61574(pcVar77);
  func_0x000107c61574(pcVar78);
  func_0x000107c61574(pcVar79);
  func_0x000107c61574(pcVar80);
  func_0x000107c61574(pcVar81);
  func_0x000107c61574(pcVar82);
  func_0x000107c61574(pcVar83);
  func_0x000107c61574(pcVar84);
  func_0x000107c61574(pcVar85);
  func_0x000107c61574(pcVar86);
  func_0x000107c61574(pcVar87);
  func_0x000107c61574(pcVar88);
  func_0x000107c61574(pcVar89);
  func_0x000107c61574(pcVar90);
  func_0x000107c61574(pcVar91);
  func_0x000107c61574(uVar92);
  func_0x000107c61574(uVar93);
  func_0x000107c61574(uVar94);
  func_0x000107c61574(uVar95);
  func_0x000107c61574(uVar96);
  func_0x000107c61574(uVar97);
  func_0x000107c61574(uVar98);
  func_0x000107c61574(uVar99);
  func_0x000107c61574(uVar100);
  func_0x000107c61574(uVar101);
  func_0x000107c61574(uVar102);
  func_0x000107c61574(uVar103);
  func_0x000107c61574(uVar104);
  func_0x000107c61574(uVar105);
  func_0x000107c61574(uVar106);
  func_0x000107c61574(uVar107);
  func_0x000107c61574(pcVar108);
  func_0x000107c61574(uVar109);
  func_0x000107c61574(uVar110);
  func_0x000107c61574(uVar111);
  func_0x000107c61574(uVar112);
  func_0x000107c61574(uVar113);
  func_0x000107c61574(pcVar114);
  func_0x000107c61574(pcVar115);
  func_0x000107c61574(uVar116);
  func_0x000107c61574(uVar117);
  func_0x000107c61574(uVar118);
  func_0x000107c61574(uVar119);
  func_0x000107c61574(uVar120);
  func_0x000107c61574(uVar121);
  func_0x000107c61574(uVar122);
  func_0x000107c61574(uVar123);
  func_0x000107c61574(param_65);
  func_0x000107c61574(uVar124);
  func_0x000107c61574(uVar125);
  func_0x000107c61574(uVar126);
  func_0x000107c61574(pcVar127);
  func_0x000107c61574(uVar128);
  func_0x000107c61574(uVar129);
  func_0x000107c61574(uVar130);
  func_0x000107c61574(uVar131);
  func_0x000107c61574(uVar132);
  func_0x000107c61574(uVar133);
  func_0x000107c61574(uVar134);
  func_0x000107c61574(uVar135);
  func_0x000107c61574(uVar136);
  func_0x000107c61574(pcVar137);
  func_0x000107c61574(pcVar138);
  func_0x000107c61574(uVar139);
  func_0x000107c61574(uVar140);
  func_0x000107c61574(uVar141);
  func_0x000107c61574(uVar142);
  func_0x000107c61574(uVar143);
  func_0x000107c61574(uVar144);
  func_0x000107c61574(pcVar145);
  func_0x000107c61574(uVar146);
  func_0x000107c61574(pcVar147);
  func_0x000107c61574(uVar148);
  func_0x000107c61574(uVar149);
  func_0x000107c61574(uVar150);
  func_0x000107c61574(in_stack_000002b8);
  func_0x000107c61574(uVar151);
  func_0x000107c61574(uVar152);
  func_0x000107c61574(param_66);
  func_0x000107c61574(uVar153);
  func_0x000107c61574(uVar154);
  func_0x000107c61574(uVar155);
  func_0x000107c61574(uVar156);
  func_0x000107c61574(uVar157);
  func_0x000107c61574(uVar158);
  func_0x000107c61574(uVar159);
  func_0x000107c61574(uVar160);
  func_0x000107c61574(uVar161);
  func_0x000107c61574(uVar162);
  func_0x000107c61574(uVar163);
  func_0x000107c61574(uVar164);
  func_0x000107c61574(pcVar165);
  func_0x000107c61574(pcVar166);
  func_0x000107c61574(pcVar167);
  func_0x000107c61574(in_stack_00000360);
  func_0x000107c61574(uVar168);
  func_0x000107c61574(uVar169);
  func_0x000107c61574(uVar170);
  func_0x000107c61574(uVar171);
  func_0x000107c61574(pcVar172);
  func_0x000107c61574(uVar173);
  func_0x000107c61574(uVar174);
  func_0x000107c61574(uVar175);
  func_0x000107c61574(uVar176);
  func_0x000107c61574(pcVar177);
  func_0x000107c61574(pcVar179);
  func_0x000107c61574(pcVar180);
  func_0x000107c61574(pcVar181);
  func_0x000100082720("SCMapViewScopeEntryPointProvider",0x20,2);
  *param_1 = pcVar183;
  return;
}



/* Entry: 102593a90; end: 102593fd3;  */

void FUN_102593a90(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102593fd4; end: 102594587;  */

void FUN_102593fd4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10258ee4c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 102594588; end: 10259461f;  */

void FUN_102594588(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  FUN_102595e74();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x0001025e42b8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001025e40a8();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_1025e40d0();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 102594620; end: 102594653;  */

void FUN_102594620(void)

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



/* Entry: 102594654; end: 10259467b;  */

void FUN_102594654(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1025a9dc8();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1025a9c04(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10259467c; end: 10259470f;  */

void FUN_10259467c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102594710; end: 10259471b;  */

void FUN_102594710(void)

{
  long unaff_x20;
  
  FUN_1025a4078(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10259471c; end: 102594763;  */

void FUN_10259471c(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
             *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
             *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102594764; end: 102594787;  */

void FUN_102594764(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_1025a1ca8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126aab00;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x537765695670616d;
  uVar8 = uVar7;
  func_0x000107c5fadc(0x537765695670616d,0xec00000065706f63);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  func_0x000107c5fadc(0x537765695670616d,0xef73656369767265);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef27f20);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 102594788; end: 1025947c3;  */

void FUN_102594788(void)

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



/* Entry: 1025947c4; end: 10259480b;  */

void FUN_1025947c4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_1025a3a70();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126aab18;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x537765695670616d;
  func_0x000107c5fadc(0x537765695670616d,0xec00000065706f63);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef28040);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0ad9f0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10259480c; end: 10259485f;  */

void FUN_10259480c(void)

{
  long unaff_x20;
  
  FUN_1025a6d9c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8));
  return;
}



/* Entry: 102594860; end: 102594867;  */

void FUN_102594860(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102594868; end: 1025948ab;  */

void FUN_102594868(void)

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



/* Entry: 1025948ac; end: 1025948d3;  */

void FUN_1025948ac(void)

{
  long unaff_x20;
  
  FUN_1025a54f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1025948d4; end: 102594947;  */

void FUN_1025948d4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102594948; end: 102594953;  */

void FUN_102594948(void)

{
  long unaff_x20;
  
  FUN_1025aba84(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102594954; end: 102594a77;  */

void FUN_102594954(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102594a78; end: 102594a97;  */

void FUN_102594a78(void)

{
  long unaff_x20;
  
  FUN_1025a5e78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 102594a98; end: 102594afb;  */

void FUN_102594a98(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102594afc; end: 102594b07;  */

void FUN_102594afc(void)

{
  long unaff_x20;
  
  FUN_1025a8d14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102594b08; end: 102594b3f;  */

void FUN_102594b08(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102594b40; end: 102594b4f;  */

void FUN_102594b40(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102594b50; end: 102594b8b;  */

void FUN_102594b50(void)

{
  long unaff_x20;
  
  FUN_1025a2214(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102594b8c; end: 102594d87;  */

void FUN_102594b8c(void)

{
  long unaff_x20;
  
  FUN_102597854(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 102594d88; end: 102594deb;  */

void FUN_102594d88(void)

{
  long unaff_x20;
  
  FUN_1025ad488(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x110));
  return;
}



/* Entry: 102594dec; end: 102594dfb;  */

void FUN_102594dec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112ea6e48,&UNK_10daba3c0);
  uVar1 = 0;
  func_0x00010438fc04();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102594dfc; end: 102594e27;  */

void FUN_102594dfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102594e28; end: 102594e2f;  */

void FUN_102594e28(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110522fe0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110522fe0;
  return;
}



/* Entry: 102594e30; end: 102595013;  */

void FUN_102594e30(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_102595114();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  FUN_1025fabf4(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  func_0x0001025fa624(uStack_58,uVar1,uVar2,uVar3,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 102595014; end: 102595057;  */

void FUN_102595014(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102595058; end: 10259505f;  */

undefined8 FUN_102595058(void)

{
  return 0x1b;
}



/* Entry: 102595060; end: 1025950e3;  */

void FUN_102595060(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102595154,param_2,FUN_102595158,param_2,0x102595180,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1025950e4; end: 102595113;  */

undefined ** FUN_1025950e4(void)

{
  return &PTR_DAT_113066d90;
}



/* Entry: 102595114; end: 102595133;  */

void FUN_102595114(void)

{
  func_0x000107c61168(&PTR_PTR_112ea7038);
  return;
}



/* Entry: 102595134; end: 102595157;  */

undefined1  [16] FUN_102595134(void)

{
  return ZEXT816(0x110523688);
}



/* Entry: 102595158; end: 1025951ab;  */

void FUN_102595158(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1025951ac; end: 102595293;  */

void FUN_1025951ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_102595558();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102595428(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102595294; end: 1025952df;  */

void FUN_102595294(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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



/* Entry: 1025952e0; end: 102595387;  */

void FUN_1025952e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102595388; end: 10259538f;  */

undefined8 FUN_102595388(void)

{
  return 0x1b;
}



/* Entry: 102595390; end: 102595413;  */

void FUN_102595390(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1025955b8,param_2,FUN_1025955bc,param_2,0x1025955e4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102595414; end: 102595427;  */

void FUN_102595414(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105236c8;
  return;
}



/* Entry: 102595428; end: 10259553b;  */

void FUN_102595428(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10260027c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  FUN_1025ffd20(param_1,param_2,uVar4,puVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102595538);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x30) = lVar3;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10259553c);
  (*pcVar1)();
}



/* Entry: 10259553c; end: 102595557;  */

undefined ** FUN_10259553c(void)

{
  return &PTR_DAT_113066d90;
}



/* Entry: 102595558; end: 102595577;  */

void FUN_102595558(void)

{
  func_0x000107c61168(&PTR_PTR_112ea7120);
  return;
}



/* Entry: 102595578; end: 1025955bb;  */

undefined1  [16] FUN_102595578(void)

{
  return ZEXT816(0x110523708);
}



/* Entry: 1025955bc; end: 10259560f;  */

void FUN_1025955bc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102595610; end: 10259596f;  */

void FUN_102595610(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_102595aec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_1025e27d4(0);
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
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  func_0x0001025e25ac();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  func_0x0001025e261c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 102595970; end: 1025959db;  */

void FUN_102595970(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}


