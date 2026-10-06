/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c042fc; end: 102c04367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c042fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105b0ba8;
  func_0x000107c613fc(&UNK_1105b0ba8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102c04640,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102c04368; end: 102c04403;  */

void FUN_102c04368(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105b0ab8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105b0ab8;
  return;
}



/* Entry: 102c04404; end: 102c0443b;  */

void FUN_102c04404(long *param_1)

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



/* Entry: 102c0443c; end: 102c04443;  */

undefined8 FUN_102c0443c(void)

{
  return 0x1b;
}



/* Entry: 102c04444; end: 102c04577;  */

void FUN_102c04444(undefined8 *param_1)

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
  puVar1 = &UNK_1105b0bd0;
  func_0x000107c613fc(&UNK_1105b0bd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102c04618;
  func_0x00010058fa64(FUN_102c04618,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c04578; end: 102c045a7;  */

undefined ** FUN_102c04578(void)

{
  return &PTR_DAT_113066dd8;
}



/* Entry: 102c045a8; end: 102c045c7;  */

void FUN_102c045a8(void)

{
  func_0x000107c61168(&PTR_PTR_112896700);
  return;
}



/* Entry: 102c045c8; end: 102c04617;  */

undefined1  [16] FUN_102c045c8(void)

{
  return ZEXT816(0x1105b0b08);
}



/* Entry: 102c04618; end: 102c0463f;  */

void FUN_102c04618(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102c04640; end: 102c04653;  */

void FUN_102c04640(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c04654; end: 102c0584b;  */

void FUN_102c04654(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char *pcVar24;
  code *pcVar25;
  undefined8 uVar26;
  code *pcVar27;
  code *pcVar28;
  code *pcVar29;
  undefined8 uVar30;
  code *pcVar31;
  undefined8 uVar32;
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
  undefined8 auStack_70 [2];
  
  uVar32 = *param_2;
  func_0x0001000285a8(0x112efe998,&UNK_10db31848);
  puVar1 = auStack_70;
  auStack_70[0] = uVar32;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112efe9a0,&UNK_10db31850);
  puVar2 = &UNK_1105b0c80;
  func_0x000107c613fc(&UNK_1105b0c80,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar3 = FUN_102c05a08;
  func_0x0001000823a8(FUN_102c05a08,puVar2);
  pcVar4 = "OperaInternalServiceProviderWrapperServiceProvider";
  func_0x000100082720("OperaInternalServiceProviderWrapperServiceProvider",0x32,2);
  func_0x000102c1fb28();
  pcVar5 = "ActiveOperaSessionScopeExposerSubjectServiceProvider";
  func_0x000100082720("ActiveOperaSessionScopeExposerSubjectServiceProvider",0x34,2);
  FUN_102c1fb74();
  pcVar6 = "SCWDescriptiveRevealScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCWDescriptiveRevealScopeExposerSubjectServiceProvider",0x36,2);
  FUN_102c23c00();
  func_0x000100082720("OperaDebugServicesServiceProvider",0x21,2);
  pcVar7 = pcVar6;
  FUN_102c23a54();
  func_0x000100082720("SCOperaDebugServicesWrapperServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112efe9a8,&UNK_10db31858);
  func_0x000107c6157c(pcVar3);
  uVar32 = 0x102c05a14;
  func_0x0001000823a8(0x102c05a14,pcVar3);
  func_0x000100082720("SCOperaInternalServicesServiceProvider",0x26,2);
  func_0x0001000285a8(0x112efe9b0,&UNK_10db31860);
  puVar2 = &UNK_1105b0ca8;
  func_0x000107c613fc(&UNK_1105b0ca8,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = uVar32;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(uVar32);
  func_0x000107c6157c(param_7);
  uVar8 = 0x102c05a1c;
  func_0x0001000823a8(0x102c05a1c,puVar2);
  func_0x000100082720("SCOperaMediaResolverServiceProviderWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112efe9b8,&UNK_10db32010);
  puVar2 = &UNK_1105b0cd0;
  func_0x000107c613fc(&UNK_1105b0cd0,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar32;
  *(undefined8 *)(puVar2 + 0x20) = param_8;
  *(undefined8 *)(puVar2 + 0x28) = param_9;
  *(char **)(puVar2 + 0x30) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar32);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(pcVar6);
  pcVar9 = FUN_102c05a6c;
  func_0x0001000823a8(FUN_102c05a6c,puVar2);
  func_0x000100082720("SCOperaTrackerServiceProviderWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112efe9c0,&UNK_10db31870);
  puVar2 = &UNK_1105b0cf8;
  func_0x000107c613fc(&UNK_1105b0cf8,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_10);
  uVar10 = 0x102c05a8c;
  func_0x0001000823a8(0x102c05a8c,puVar2);
  func_0x000100082720("SCAdEventStreamsPluginRegistryServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112efe9c8,&UNK_10db31878);
  func_0x000107c6157c(param_11);
  uVar11 = 0x102c05a94;
  func_0x0001000823a8(0x102c05a94,param_11);
  func_0x000100082720("SCLensStoryOperaFeaturePluginRegistryServiceProvider",0x34,2);
  pcVar12 = pcVar4;
  FUN_102c1fb68();
  func_0x000100082720("ActiveOperaSessionScopeExposerObservableServiceProvider",0x37,2);
  pcVar13 = pcVar5;
  FUN_102c1fc00();
  func_0x000100082720("SCWDescriptiveRevealScopeExposerObservableServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar14 = FUN_102c04404;
  func_0x0001000823a8(FUN_102c04404,0);
  func_0x000100082720("SCOperaSessionScopedServicesCleanupRelayServiceProvider",0x37,2);
  uVar15 = uVar10;
  func_0x0001043088ec();
  func_0x000100082720("SCAdEventStreamsPluginSaberServiceServiceProvider",0x31,2);
  func_0x0001000285a8(0x112efe9d0,&UNK_10db31a30);
  puVar2 = &UNK_1105b0d20;
  func_0x000107c613fc(&UNK_1105b0d20,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_12;
  *(undefined8 *)(puVar2 + 0x20) = param_13;
  *(undefined8 *)(puVar2 + 0x28) = uVar15;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(uVar15);
  uVar16 = 0x102c05a9c;
  func_0x0001000823a8(0x102c05a9c,puVar2);
  func_0x000100082720("SCAdUnifiedEventObservableBusEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112efe9d8,&UNK_10db31880);
  func_0x000107c6157c(uVar16);
  uVar17 = 0x102c05aa8;
  func_0x0001000823a8(0x102c05aa8,uVar16);
  func_0x000100082720("SCAdUnifiedEventObservableBusServicesServiceProvider",0x34,2);
  uVar18 = uVar11;
  FUN_102c23460();
  func_0x000100082720("SCLensStoryOperaFeaturePluginSaberServiceServiceProvider",0x38,2);
  func_0x0001000285a8(0x112efe9e0,&UNK_10db31888);
  func_0x000107c6157c(uVar8);
  uVar19 = 0x102c05ab0;
  func_0x0001000823a8(0x102c05ab0,uVar8);
  func_0x000100082720("SCOperaMediaResolverServiceServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112efe9e8,&UNK_10db31890);
  func_0x000107c6157c(pcVar9);
  uVar20 = 0x102c05ab8;
  func_0x0001000823a8(0x102c05ab8,pcVar9);
  func_0x000100082720("SCOperaTrackerServiceServiceProvider",0x24,2);
  FUN_102c2ca08(param_14,param_15,param_16,param_17,param_18,param_19,param_20,param_21,param_12,
                param_22,param_13,param_23,param_24,param_25,param_26,uVar17,param_27,param_4,
                param_28,param_29,param_30,param_31,param_32,param_33,param_34,param_35,puVar1,
                param_36,param_37,param_38,param_39,param_40,param_9,param_41,param_42);
  func_0x000100082720("ActiveOperaSessionScopedFactoryServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112efe9f0,&UNK_10db31898);
  puVar2 = &UNK_1105b0d48;
  func_0x000107c613fc(&UNK_1105b0d48,0x78,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_20;
  *(undefined8 *)(puVar2 + 0x20) = param_23;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_39;
  *(undefined8 *)(puVar2 + 0x38) = param_43;
  *(undefined8 *)(puVar2 + 0x40) = param_47;
  *(undefined8 *)(puVar2 + 0x48) = param_49;
  *(undefined8 *)(puVar2 + 0x50) = param_46;
  *(undefined8 *)(puVar2 + 0x58) = param_45;
  *(undefined8 *)(puVar2 + 0x60) = uVar18;
  *(undefined8 *)(puVar2 + 0x68) = param_48;
  *(undefined8 *)(puVar2 + 0x70) = param_44;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_44);
  pcVar21 = FUN_102c05ac0;
  func_0x0001000823a8(FUN_102c05ac0,puVar2);
  func_0x000100082720("SCOperaFeaturePluginRegistryServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112efe9f8,&UNK_10db318a0);
  puVar2 = &UNK_1105b0d70;
  func_0x000107c613fc(&UNK_1105b0d70,0xa8,7);
  *(undefined8 *)(puVar2 + 0x10) = param_51;
  *(undefined8 *)(puVar2 + 0x18) = param_31;
  *(undefined8 *)(puVar2 + 0x20) = param_50;
  *(undefined8 *)(puVar2 + 0x28) = param_55;
  *(undefined8 *)(puVar2 + 0x30) = param_46;
  *(undefined8 *)(puVar2 + 0x38) = param_45;
  *(undefined8 *)(puVar2 + 0x40) = param_53;
  *(undefined8 *)(puVar2 + 0x48) = param_34;
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  *(undefined8 *)(puVar2 + 0x58) = param_30;
  *(undefined8 *)(puVar2 + 0x60) = param_57;
  *(undefined8 *)(puVar2 + 0x68) = param_56;
  *(undefined8 *)(puVar2 + 0x70) = param_52;
  *(undefined8 *)(puVar2 + 0x78) = param_58;
  *(char **)(puVar2 + 0x80) = pcVar13;
  *(undefined8 **)(puVar2 + 0x88) = puVar1;
  *(undefined8 *)(puVar2 + 0x90) = uVar32;
  *(undefined8 *)(puVar2 + 0x98) = param_59;
  *(undefined8 *)(puVar2 + 0xa0) = param_54;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(uVar32);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_54);
  uVar22 = 0x102c05afc;
  func_0x0001000823a8(0x102c05afc,puVar2);
  func_0x000100082720("SCOperaLayerViewControllerFactoryPluginRegistryServiceProvider",0x3e,2);
  uVar23 = param_14;
  func_0x00010442b3b4();
  func_0x000100082720("ActiveOperaSessionScopeServicesServiceProvider",0x2e,2);
  pcVar24 = pcVar4;
  FUN_102c1f774(pcVar4,uVar17,pcVar7,uVar32,uVar19,uVar20,pcVar5);
  func_0x000100082720("OperaSessionScopeGraphBridgeServicesServiceProvider",0x33,2);
  pcVar25 = pcVar21;
  FUN_102cb7a84();
  func_0x000100082720("SCOperaFeaturePluginSaberServiceServiceProvider",0x2f,2);
  uVar26 = uVar22;
  func_0x000103b9f144();
  func_0x000100082720("SCOperaLayerViewControllerFactoryPluginSaberServiceServiceProvider",0x42,2);
  func_0x0001000285a8(0x112efea00,&UNK_10db31d80);
  puVar2 = &UNK_1105b0d98;
  func_0x000107c613fc(&UNK_1105b0d98,0x178,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_22;
  *(undefined8 *)(puVar2 + 0x20) = param_60;
  *(undefined8 *)(puVar2 + 0x28) = param_61;
  *(undefined8 *)(puVar2 + 0x30) = param_62;
  *(undefined8 *)(puVar2 + 0x38) = param_63;
  *(undefined8 *)(puVar2 + 0x40) = param_64;
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  *(undefined8 *)(puVar2 + 0x50) = param_52;
  *(undefined8 *)(puVar2 + 0x58) = param_39;
  *(undefined8 *)(puVar2 + 0x60) = param_34;
  *(undefined8 *)(puVar2 + 0x68) = param_65;
  *(undefined8 *)(puVar2 + 0x70) = param_66;
  *(undefined8 *)(puVar2 + 0x78) = param_67;
  *(undefined8 *)(puVar2 + 0x80) = param_68;
  *(undefined8 *)(puVar2 + 0x88) = param_69;
  *(undefined8 *)(puVar2 + 0x90) = param_70;
  *(undefined8 *)(puVar2 + 0x98) = param_71;
  *(undefined8 *)(puVar2 + 0xa0) = in_stack_000001f0;
  *(undefined8 *)(puVar2 + 0xa8) = uVar20;
  *(undefined8 *)(puVar2 + 0xb0) = in_stack_000001f8;
  *(undefined8 *)(puVar2 + 0xb8) = param_8;
  *(undefined8 *)(puVar2 + 0xc0) = in_stack_00000200;
  *(undefined8 *)(puVar2 + 200) = param_31;
  *(undefined8 *)(puVar2 + 0xd0) = in_stack_00000208;
  *(undefined8 *)(puVar2 + 0xd8) = uVar32;
  *(undefined8 *)(puVar2 + 0xe0) = param_5;
  *(undefined8 *)(puVar2 + 0xe8) = param_3;
  *(undefined8 *)(puVar2 + 0xf0) = in_stack_00000210;
  *(undefined8 *)(puVar2 + 0xf8) = uVar19;
  *(undefined8 *)(puVar2 + 0x100) = in_stack_00000218;
  *(undefined8 *)(puVar2 + 0x108) = param_9;
  *(char **)(puVar2 + 0x110) = pcVar6;
  *(undefined8 *)(puVar2 + 0x118) = in_stack_00000220;
  *(undefined8 *)(puVar2 + 0x120) = in_stack_00000228;
  *(undefined8 *)(puVar2 + 0x128) = in_stack_00000230;
  *(undefined8 *)(puVar2 + 0x130) = param_40;
  *(undefined8 *)(puVar2 + 0x138) = in_stack_00000238;
  *(undefined8 *)(puVar2 + 0x140) = in_stack_00000240;
  *(undefined8 *)(puVar2 + 0x148) = in_stack_00000248;
  *(undefined8 *)(puVar2 + 0x150) = param_43;
  *(code **)(puVar2 + 0x158) = pcVar25;
  *(undefined8 *)(puVar2 + 0x160) = uVar26;
  *(undefined8 *)(puVar2 + 0x168) = uVar23;
  *(char **)(puVar2 + 0x170) = pcVar12;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(uVar32);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(pcVar25);
  func_0x000107c6157c(uVar26);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(pcVar12);
  pcVar27 = FUN_102c05b48;
  func_0x0001000823a8(FUN_102c05b48,puVar2);
  func_0x000100082720("SCOperaSessionEntryPointWrapperServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112efea08,&UNK_10db318b0);
  puVar2 = &UNK_1105b0dc0;
  func_0x000107c613fc(&UNK_1105b0dc0,0x68,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar24;
  *(undefined8 *)(puVar2 + 0x28) = uVar16;
  *(undefined8 *)(puVar2 + 0x30) = uVar8;
  *(undefined8 *)(puVar2 + 0x38) = param_36;
  *(undefined8 *)(puVar2 + 0x40) = uVar20;
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  *(code **)(puVar2 + 0x50) = pcVar27;
  *(code **)(puVar2 + 0x58) = pcVar14;
  *(code **)(puVar2 + 0x60) = pcVar9;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(pcVar24);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(pcVar27);
  func_0x000107c6157c(pcVar14);
  pcVar28 = FUN_102c05bcc;
  func_0x0001000823a8(FUN_102c05bcc,puVar2);
  func_0x000100082720("SCOperaSessionScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112efe928,&UNK_10db31610);
  func_0x000107c6157c(pcVar28);
  pcVar29 = FUN_102c05c08;
  func_0x0001000823a8(FUN_102c05c08,pcVar28);
  func_0x000100082720("SCOperaSessionScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112efe918,&UNK_10db31600);
  func_0x000107c6157c(pcVar29);
  uVar30 = 0x102c05c10;
  func_0x0001000823a8(0x102c05c10,pcVar29);
  func_0x000100082720("SCOperaSessionScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105b0de8;
  func_0x000107c613fc(&UNK_1105b0de8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar30;
  *(code **)(puVar2 + 0x18) = pcVar14;
  func_0x000107c6157c(pcVar14);
  pcVar31 = FUN_102c05c44;
  func_0x0001000823a8(FUN_102c05c44,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar32);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(param_14);
  func_0x000107c61574(pcVar21);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(pcVar29);
  func_0x000100082720("SCOperaSessionScopeEntryPointProvider",0x25,2);
  *param_1 = pcVar31;
  return;
}



/* Entry: 102c0584c; end: 102c05a07;  */

void FUN_102c0584c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102c04654(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 102c05a08; end: 102c05a27;  */

void FUN_102c05a08(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102c05f5c();
  func_0x000107c613fc();
  FUN_102c05d34(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c05a28; end: 102c05a6b;  */

void FUN_102c05a28(void)

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



/* Entry: 102c05a6c; end: 102c05abf;  */

void FUN_102c05a6c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
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
  FUN_102c0acac();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126ac150;
  func_0x000107c610f8();
  func_0x000107c615f0(uStack_88);
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
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0fe220);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0fe2a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = 0x112efecd8;
  func_0x0001000285a8(0x112efecd8,&UNK_10db32020);
  func_0x000107c60184();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0fe3e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uStack_88);
  *(undefined **)(lVar1 + 0x38) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 102c05ac0; end: 102c05b47;  */

void FUN_102c05ac0(void)

{
  long unaff_x20;
  
  FUN_102c0af04(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102c05b48; end: 102c05bcb;  */

void FUN_102c05b48(void)

{
  long unaff_x20;
  
  FUN_102c06e70(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 102c05bcc; end: 102c05c07;  */

void FUN_102c05bcc(void)

{
  long unaff_x20;
  
  FUN_102c0b600(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102c05c08; end: 102c05c17;  */

void FUN_102c05c08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112efe980,&UNK_10db317f8);
  uVar1 = 0;
  func_0x00010036def4();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c05c18; end: 102c05c43;  */

void FUN_102c05c18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c05c44; end: 102c05c4b;  */

void FUN_102c05c44(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105b0ab8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105b0ab8;
  return;
}



/* Entry: 102c05c4c; end: 102c05cdf;  */

void FUN_102c05c4c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102c05f5c();
  func_0x000107c613fc();
  FUN_102c05d34(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102c05ce0; end: 102c05d33;  */

undefined8 FUN_102c05ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102c05d34(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102c05d34; end: 102c05e0f;  */

void FUN_102c05d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_102cb6d54(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb6b7c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_102cb6b8c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102c05e10; end: 102c05e4b;  */

void FUN_102c05e10(void)

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



/* Entry: 102c05e4c; end: 102c05e9f;  */

void FUN_102c05e4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c05ea0; end: 102c05ea7;  */

undefined8 FUN_102c05ea0(void)

{
  return 0x1b;
}



/* Entry: 102c05ea8; end: 102c05f2b;  */

void FUN_102c05ea8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x102c05fac,param_2,FUN_102c05fb0,param_2,0x102c05fd8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c05f2c; end: 102c05f5b;  */

undefined ** FUN_102c05f2c(void)

{
  return &PTR_DAT_113066dd8;
}



/* Entry: 102c05f5c; end: 102c05f7b;  */

void FUN_102c05f5c(void)

{
  func_0x000107c61168(&PTR_PTR_112efea78);
  return;
}



/* Entry: 102c05f7c; end: 102c05faf;  */

undefined1  [16] FUN_102c05f7c(void)

{
  return ZEXT816(0x1105b0e40);
}



/* Entry: 102c05fb0; end: 102c06003;  */

void FUN_102c05fb0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c06004; end: 102c0615b;  */

void FUN_102c06004(undefined8 *param_1)

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
  FUN_102c065ac();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102c062ec(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c0615c; end: 102c061a7;  */

void FUN_102c0615c(void)

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



/* Entry: 102c061a8; end: 102c061fb;  */

void FUN_102c061a8(undefined8 *param_1)

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



/* Entry: 102c061fc; end: 102c06203;  */

undefined8 FUN_102c061fc(void)

{
  return 0x1b;
}



/* Entry: 102c06204; end: 102c06287;  */

void FUN_102c06204(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x102c065fc,param_2,FUN_102c06600,param_2,FUN_102c06628,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c06288; end: 102c062d7;  */

undefined8 FUN_102c06288(void)

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



/* Entry: 102c062d8; end: 102c062eb;  */

void FUN_102c062d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105b0ea0;
  return;
}



/* Entry: 102c062ec; end: 102c0658f;  */

void FUN_102c062ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar2 = PTR_PTR_1126ac138;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0fe220);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbba10);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0fe240);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0fe270);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c06590);
  (*pcVar1)();
}



/* Entry: 102c06590; end: 102c065ab;  */

undefined ** FUN_102c06590(void)

{
  return &PTR_DAT_113066dd8;
}



/* Entry: 102c065ac; end: 102c065cb;  */

void FUN_102c065ac(void)

{
  func_0x000107c61168(&PTR_PTR_112efeb58);
  return;
}



/* Entry: 102c065cc; end: 102c065ff;  */

undefined1  [16] FUN_102c065cc(void)

{
  return ZEXT816(0x1105b0ee0);
}



/* Entry: 102c06600; end: 102c06627;  */

void FUN_102c06600(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c06628; end: 102c0662f;  */

undefined8 FUN_102c06628(void)

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



/* Entry: 102c06630; end: 102c06c3f;  */

void FUN_102c06630(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
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
  FUN_102c06dec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126ac140;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0fe220);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0fe2a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0fe2c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 102c06c40; end: 102c06c8b;  */

void FUN_102c06c40(void)

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



/* Entry: 102c06c8c; end: 102c06cdf;  */

void FUN_102c06c8c(undefined8 *param_1)

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



/* Entry: 102c06ce0; end: 102c06ce7;  */

undefined8 FUN_102c06ce0(void)

{
  return 0x1b;
}



/* Entry: 102c06ce8; end: 102c06d6b;  */

void FUN_102c06ce8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x102c06e3c,param_2,FUN_102c06e40,param_2,FUN_102c06e68,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c06d6c; end: 102c06dbb;  */

undefined8 FUN_102c06d6c(void)

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



/* Entry: 102c06dbc; end: 102c06deb;  */

undefined ** FUN_102c06dbc(void)

{
  return &PTR_DAT_113066dd8;
}



/* Entry: 102c06dec; end: 102c06e0b;  */

void FUN_102c06dec(void)

{
  func_0x000107c61168(&PTR_PTR_112efec48);
  return;
}



/* Entry: 102c06e0c; end: 102c06e3f;  */

undefined1  [16] FUN_102c06e0c(void)

{
  return ZEXT816(0x1105b0f80);
}



/* Entry: 102c06e40; end: 102c06e67;  */

void FUN_102c06e40(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c06e68; end: 102c06e6f;  */

undefined8 FUN_102c06e68(void)

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



/* Entry: 102c06e70; end: 102c0a18f;  */

void FUN_102c06e70(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
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
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  func_0x000100083b20(&uStack_1b0);
  func_0x000100083b20(&uStack_1b8);
  func_0x000100083b20(&uStack_1c0);
  func_0x000100083b20(&uStack_1c8);
  func_0x000100083b20(&uStack_1d0);
  FUN_102c0a438();
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
  *(undefined8 *)(param_2 + 0xb8) = uStack_110;
  *(undefined8 *)(param_2 + 0xc0) = uStack_118;
  *(undefined8 *)(param_2 + 200) = uStack_120;
  *(undefined8 *)(param_2 + 0xd0) = uStack_128;
  *(undefined8 *)(param_2 + 0xd8) = uStack_130;
  *(undefined8 *)(param_2 + 0xe0) = uStack_138;
  *(undefined8 *)(param_2 + 0xe8) = uStack_140;
  *(undefined8 *)(param_2 + 0xf0) = uStack_148;
  *(undefined8 *)(param_2 + 0xf8) = uStack_150;
  *(undefined8 *)(param_2 + 0x100) = uStack_158;
  *(undefined8 *)(param_2 + 0x108) = uStack_160;
  *(undefined8 *)(param_2 + 0x110) = uStack_168;
  *(undefined8 *)(param_2 + 0x118) = uStack_170;
  *(undefined8 *)(param_2 + 0x120) = uStack_178;
  *(undefined8 *)(param_2 + 0x128) = uStack_180;
  *(undefined8 *)(param_2 + 0x130) = uStack_188;
  *(undefined8 *)(param_2 + 0x138) = uStack_190;
  *(undefined8 *)(param_2 + 0x140) = uStack_198;
  *(undefined8 *)(param_2 + 0x148) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x150) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x158) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x160) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x168) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x170) = uStack_1c8;
  func_0x0001000285a8(0x112efecd0,&UNK_10db31d88);
  func_0x000107c610f8();
  func_0x000107c615f0(uStack_170);
  uVar35 = uStack_178;
  func_0x000107c61174();
  uVar36 = uStack_180;
  func_0x000107c61174();
  uVar37 = uStack_188;
  func_0x000107c61174();
  uVar38 = uStack_190;
  func_0x000107c61174();
  uVar39 = uStack_198;
  func_0x000107c61174();
  uVar40 = uStack_1a0;
  func_0x000107c61174();
  uVar41 = uStack_1a8;
  func_0x000107c61174();
  uVar42 = uStack_1b0;
  func_0x000107c61174();
  uVar43 = uStack_1b8;
  func_0x000107c61174();
  uVar44 = uStack_1c0;
  func_0x000107c61174();
  uVar45 = uStack_1c8;
  func_0x000107c61174();
  func_0x000107c6157c(uStack_1d0);
  uVar21 = uStack_78;
  func_0x000107c61174();
  uVar22 = uStack_80;
  func_0x000107c61174();
  uVar23 = uStack_88;
  func_0x000107c61174();
  uVar24 = uStack_90;
  func_0x000107c61174();
  uVar25 = uStack_98;
  func_0x000107c61174();
  uVar1 = uStack_a0;
  func_0x000107c61174();
  uVar2 = uStack_a8;
  func_0x000107c61174();
  uVar3 = uStack_b0;
  func_0x000107c61174();
  uVar4 = uStack_b8;
  func_0x000107c61174();
  uVar5 = uStack_c0;
  func_0x000107c61174();
  uVar6 = uStack_c8;
  func_0x000107c61174();
  uVar7 = uStack_d0;
  func_0x000107c61174();
  uVar8 = uStack_d8;
  func_0x000107c61174();
  uVar9 = uStack_e0;
  func_0x000107c61174();
  uVar10 = uStack_e8;
  func_0x000107c61174();
  uVar11 = uStack_f0;
  func_0x000107c61174();
  uVar12 = uStack_f8;
  func_0x000107c61174();
  uVar13 = uStack_100;
  func_0x000107c61174();
  uVar14 = uStack_108;
  func_0x000107c61174();
  uVar15 = uStack_110;
  func_0x000107c61174();
  uVar16 = uStack_118;
  func_0x000107c61174();
  uVar26 = uStack_120;
  func_0x000107c61174();
  uVar27 = uStack_128;
  func_0x000107c61174();
  uVar28 = uStack_130;
  func_0x000107c61174();
  uVar29 = uStack_138;
  func_0x000107c61174();
  uVar30 = uStack_140;
  func_0x000107c61174();
  uVar31 = uStack_148;
  func_0x000107c61174();
  uVar32 = uStack_150;
  func_0x000107c61174();
  uVar33 = uStack_158;
  func_0x000107c61174();
  uVar17 = uStack_160;
  func_0x000107c61174();
  uVar34 = uStack_168;
  func_0x000107c61174();
  uVar20 = uStack_1d0;
  func_0x00010017da58();
  puVar18 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar20);
  *(undefined **)(param_2 + 0x18) = puVar18;
  puVar18 = PTR_PTR_1126ac148;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar18;
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  uVar20 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0fe220);
  func_0x000107c5a49c(puVar18);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000010;
  uVar20 = uVar49;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar20);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000013;
  uVar20 = uVar48;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar20);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd000000000000012;
  uVar20 = uVar47;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef20500);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03f020);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4730);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar46);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar46 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar46);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = uVar49;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar20);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6a80);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc82c0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar46);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f03ef90);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc0750);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar46 = 0x6553726579616c70;
  func_0x000107c5fadc(0x6553726579616c70,0xee00736563697672);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar46 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03efc0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0fe2e0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0fe300);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar48);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03efe0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar46);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar46);
  uVar20 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f03f000);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar49);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0fe2a0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar46);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = uVar47;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f007040);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar47);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0fe320);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar20);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar20 = 0x112dca948;
  func_0x0001000285a8(0x112dca948,&UNK_10d99f4a0);
  func_0x000107c60184();
  uVar48 = 0x5372657070696c66;
  func_0x000107c5fadc(0x5372657070696c66,0xef73656369767265);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c615e8(uVar20);
  func_0x000107c61170(uVar48);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar46);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar46);
  uVar20 = 0x112efecd8;
  func_0x0001000285a8(0x112efecd8,&UNK_10db32020);
  func_0x000107c60184();
  uVar48 = 0x7265536775626564;
  func_0x000107c5fadc(0x7265536775626564,0xed00007365636976);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c615e8(uVar20);
  func_0x000107c61170(uVar48);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar46 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar46);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef17900);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar20);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a580);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f007080);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar46);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3e7f0);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0fe340);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar46);
  uVar46 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f0fe360);
  func_0x000107c5a49c(uVar46);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar46 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0fe3a0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar46);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  uVar46 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0fe3c0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar48);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar1);
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
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar34);
  func_0x000107c615e8(uStack_170);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar45);
  func_0x000107c61574(uStack_1d0);
  *param_1 = param_2;
  return;
}



/* Entry: 102c0a190; end: 102c0a32b;  */

void FUN_102c0a190(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  return;
}



/* Entry: 102c0a32c; end: 102c0a333;  */

undefined8 FUN_102c0a32c(void)

{
  return 0x1b;
}



/* Entry: 102c0a334; end: 102c0a3b7;  */

void FUN_102c0a334(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102c0a478,param_2,FUN_102c0a47c,param_2,FUN_102c0a4a4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c0a3b8; end: 102c0a407;  */

undefined8 FUN_102c0a3b8(void)

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



/* Entry: 102c0a408; end: 102c0a437;  */

undefined ** FUN_102c0a408(void)

{
  return &PTR_DAT_113066dd8;
}



/* Entry: 102c0a438; end: 102c0a457;  */

void FUN_102c0a438(void)

{
  func_0x000107c61168(&PTR_PTR_112efed48);
  return;
}



/* Entry: 102c0a458; end: 102c0a47b;  */

undefined1  [16] FUN_102c0a458(void)

{
  return ZEXT816(0x1105b1020);
}



/* Entry: 102c0a47c; end: 102c0a4a3;  */

void FUN_102c0a47c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c0a4a4; end: 102c0a4ab;  */

undefined8 FUN_102c0a4a4(void)

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



/* Entry: 102c0a4ac; end: 102c0aaff;  */

void FUN_102c0a4ac(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
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
  FUN_102c0acac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126ac150;
  func_0x000107c610f8();
  func_0x000107c615f0(uStack_88);
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0fe220);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0fe2a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  uVar6 = 0x112efecd8;
  func_0x0001000285a8(0x112efecd8,&UNK_10db32020);
  func_0x000107c60184();
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0fe3e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uStack_88);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 102c0ab00; end: 102c0ab4b;  */

void FUN_102c0ab00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c0ab4c; end: 102c0ab9f;  */

void FUN_102c0ab4c(undefined8 *param_1)

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



/* Entry: 102c0aba0; end: 102c0aba7;  */

undefined8 FUN_102c0aba0(void)

{
  return 0x1b;
}



/* Entry: 102c0aba8; end: 102c0ac2b;  */

void FUN_102c0aba8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x102c0acfc,param_2,FUN_102c0ad00,param_2,FUN_102c0ad28,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c0ac2c; end: 102c0ac7b;  */

undefined8 FUN_102c0ac2c(void)

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



/* Entry: 102c0ac7c; end: 102c0acab;  */

undefined ** FUN_102c0ac7c(void)

{
  return &PTR_DAT_113066dd8;
}



/* Entry: 102c0acac; end: 102c0accb;  */

void FUN_102c0acac(void)

{
  func_0x000107c61168(&PTR_PTR_112efef70);
  return;
}



/* Entry: 102c0accc; end: 102c0acff;  */

undefined1  [16] FUN_102c0accc(void)

{
  return ZEXT816(0x1105b10a0);
}



/* Entry: 102c0ad00; end: 102c0ad27;  */

void FUN_102c0ad00(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c0ad28; end: 102c0ad2f;  */

undefined8 FUN_102c0ad28(void)

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



/* Entry: 102c0ad30; end: 102c0add7;  */

/* WARNING: Possible PIC construction at 0x000102c0adc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0adc4) */

void FUN_102c0ad30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105b1110;
  func_0x000107c613fc(&UNK_1105b1110,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112efeff8;
  func_0x0001000285a8(0x112efeff8,&UNK_10db321b8);
  func_0x000107c613fc();
  pcVar3 = FUN_102c0ae40;
  func_0x0001000841fc(FUN_102c0ae40,puVar1,uVar2);
  func_0x000100084214("SCAdEventStreamsPluginRegistryServiceProvider",0x2d,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102c0add8; end: 102c0ae3f;  */

void FUN_102c0add8(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    FUN_102c0bd00();
    pcVar1 = "SCAdWebviewEventStreamsPluginProvider";
    uVar2 = 0x25;
    param_3 = param_4;
  }
  else {
    FUN_102c0bdd4();
    pcVar1 = "SCAdOperaEventStreamsPluginProvider";
    uVar2 = 0x23;
  }
  func_0x000100082720(pcVar1,uVar2,2);
  *param_1 = param_3;
  return;
}



/* Entry: 102c0ae40; end: 102c0ae47;  */

void FUN_102c0ae40(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*param_2 == '\x01') {
    FUN_102c0bd00();
    pcVar3 = "SCAdWebviewEventStreamsPluginProvider";
    uVar4 = 0x25;
    uVar2 = uVar1;
  }
  else {
    FUN_102c0bdd4();
    pcVar3 = "SCAdOperaEventStreamsPluginProvider";
    uVar4 = 0x23;
  }
  func_0x000100082720(pcVar3,uVar4,2);
  *param_1 = uVar2;
  return;
}



/* Entry: 102c0ae48; end: 102c0aec3;  */

void FUN_102c0ae48(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112eff000,&UNK_10db321c0);
  func_0x000107c613fc();
  pcVar1 = FUN_102c0aec4;
  func_0x0001000841fc(FUN_102c0aec4,param_2);
  func_0x000100084214("SCLensStoryOperaFeaturePluginRegistryServiceProvider",0x34,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102c0aec4; end: 102c0af03;  */

void FUN_102c0aec4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_102c123a4();
  func_0x000100082720("SCLensStoryOperaDiscoverPluginProvider",0x26,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102c0af04; end: 102c0b06f;  */

/* WARNING: Possible PIC construction at 0x000102c0aff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0b034) */
/* WARNING: Removing unreachable block (ram,0x000102c0b024) */
/* WARNING: Removing unreachable block (ram,0x000102c0b014) */
/* WARNING: Removing unreachable block (ram,0x000102c0b004) */
/* WARNING: Removing unreachable block (ram,0x000102c0aff4) */
/* WARNING: Removing unreachable block (ram,0x000102c0b044) */

void FUN_102c0af04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105b1138;
  func_0x000107c613fc(&UNK_1105b1138,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  uVar2 = 0x112eff008;
  func_0x0001000285a8(0x112eff008,&UNK_10db321c8);
  func_0x000107c613fc();
  pcVar3 = FUN_102c0b190;
  func_0x0001000841fc(FUN_102c0b190,puVar1,uVar2);
  func_0x000100084214("SCOperaFeaturePluginRegistryServiceProvider",0x2b,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102c0b070; end: 102c0b18f;  */

void FUN_102c0b070(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      FUN_102c0bea8(param_3,param_4,param_5,param_6);
      pcVar2 = "SCAdOperaFeaturePluginProvider";
      uVar3 = 0x1e;
    }
    else {
      if (bVar1 != 1) {
        param_3 = 0;
        goto LAB_102c0b180;
      }
      FUN_102c110a4();
      pcVar2 = "ChatToSongOperaPluginProvider";
      uVar3 = 0x1d;
      param_3 = param_7;
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 == 3) {
      FUN_102c1aa58(param_6,param_8);
      pcVar2 = "ContentDeliveryOperaPluginProvider";
      uVar3 = 0x22;
      param_3 = param_6;
    }
    else {
      FUN_102c1b5fc(param_9,param_10);
      pcVar2 = "SCRepostOperaFeaturePluginProvider";
      uVar3 = 0x22;
      param_3 = param_9;
    }
  }
  else if (bVar1 == 5) {
    FUN_102c135e0(param_11,param_12,param_13);
    pcVar2 = "LensStoryOperaPluginProvider";
    uVar3 = 0x1c;
    param_3 = param_11;
  }
  else {
    FUN_102c0c36c(param_6,param_14,param_15);
    pcVar2 = "SCSpotlightRecentInteractionsOperaPluginProvider";
    uVar3 = 0x30;
    param_3 = param_6;
  }
  func_0x000100082720(pcVar2,uVar3,2);
LAB_102c0b180:
  *param_1 = param_3;
  return;
}



/* Entry: 102c0b190; end: 102c0b1cf;  */

void FUN_102c0b190(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102c0b070(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102c0b1d0; end: 102c0b3b7;  */

/* WARNING: Possible PIC construction at 0x000102c0b308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0b388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0b37c) */
/* WARNING: Removing unreachable block (ram,0x000102c0b36c) */
/* WARNING: Removing unreachable block (ram,0x000102c0b35c) */
/* WARNING: Removing unreachable block (ram,0x000102c0b34c) */
/* WARNING: Removing unreachable block (ram,0x000102c0b33c) */
/* WARNING: Removing unreachable block (ram,0x000102c0b32c) */
/* WARNING: Removing unreachable block (ram,0x000102c0b31c) */
/* WARNING: Removing unreachable block (ram,0x000102c0b30c) */
/* WARNING: Removing unreachable block (ram,0x000102c0b38c) */

void FUN_102c0b1d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105b1160;
  func_0x000107c613fc(&UNK_1105b1160,0xa8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  uVar2 = 0x112eff010;
  func_0x0001000285a8(0x112eff010,&UNK_10db321e0);
  func_0x000107c613fc();
  pcVar3 = FUN_102c0b5ac;
  func_0x0001000841fc(FUN_102c0b5ac,puVar1,uVar2);
  func_0x000100084214("SCOperaLayerViewControllerFactoryPluginRegistryServiceProvider",0x3e,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102c0b3b8; end: 102c0b5ab;  */

void FUN_102c0b3b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte *param_7,char *param_8,code *param_9,
                  code *param_10,code *param_11,code *param_12,code *param_13,code *param_14,
                  code *param_15,undefined8 param_16,undefined8 *param_17,undefined8 param_18,
                  undefined8 param_19,code *param_20,code *param_21,code *param_22,code *param_23,
                  undefined8 param_24,undefined8 *param_25,char *param_26)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  code *pcVar19;
  undefined8 *puVar20;
  undefined *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  code *pcVar22;
  code *unaff_x25;
  code *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined **unaff_x29;
  code *unaff_x30;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 in_register_00005088;
  undefined1 auStack_b0 [96];
  undefined1 *puStack_50;
  
  puVar2 = &stack0xffffffffffffffc0;
  uVar21 = (ulong)*param_7;
  pcVar15 = (code *)&UNK_10db321d0;
  pcVar22 = (code *)(ulong)(byte)(&UNK_10db321d0)[uVar21];
  lVar1 = (long)pcVar22 * 4 + 0x102c0b408;
  puVar3 = &stack0xffffffffffffffc0;
  puVar4 = &stack0xffffffffffffffc0;
  puVar5 = &stack0xffffffffffffffc0;
  puVar6 = &stack0xffffffffffffffc0;
  puVar7 = &stack0xffffffffffffffc0;
  puVar8 = &stack0xffffffffffffffc0;
  puVar9 = &stack0xffffffffffffffc0;
  puVar10 = &stack0xffffffffffffffc0;
  puVar11 = &stack0xffffffffffffffc0;
  puVar12 = &stack0xffffffffffffffc0;
  puVar13 = (undefined8 *)&stack0xffffffffffffffc0;
  pcVar14 = param_26;
  pcVar18 = (code *)param_8;
  pcVar19 = param_9;
  puVar20 = param_25;
  switch(*param_7) {
  default:
    FUN_102c10fd0();
    pcVar14 = "SCAddSoundPillOperaPluginProvider";
    pcVar18 = (code *)0x21;
    param_15 = (code *)param_8;
    break;
  case 1:
    func_0x000102c10efc();
    pcVar14 = "SCChatMediaCarouselOperaPluginProvider";
    pcVar18 = (code *)0x26;
    param_15 = param_9;
    break;
  case 2:
    FUN_102c1b70c();
    pcVar14 = "OperaDemoLayerViewControllerFactoryPluginProvider";
    pcVar18 = (code *)0x31;
    param_15 = param_10;
    break;
  case 3:
    FUN_102c1bad4();
    param_15 = (code *)param_26;
  case 0xa4:
    pcVar14 = "SCOperaDefaultLayerViewControllerFactoryPluginProvider";
    pcVar18 = (code *)0x36;
    break;
  case 4:
    FUN_102c1b528();
    pcVar14 = "SCOperaPreviewToolbarPluginProvider";
    pcVar18 = (code *)0x23;
    param_15 = param_11;
    break;
  case 5:
    param_26 = (char *)param_12;
    param_8 = (char *)param_13;
  case 0x42:
  case 0x72:
  case 0xb2:
    FUN_102c124a0(param_26,param_8);
  case 0xf3:
    param_15 = (code *)param_26;
  case 0x41:
  case 0x71:
  case 0xb1:
  case 0xe1:
    param_26 = "SCOperaLayerViewControllerFactoryPluginRegistryServiceProvider";
  case 0x14:
    param_26 = param_26 + 0x760;
  case 0x4b:
  case 0x79:
    pcVar18 = (code *)0x36;
    pcVar14 = param_26;
  case 0xb9:
    break;
  case 6:
    FUN_102c0f7dc();
    pcVar14 = "MemoriesOperaInteractionButtonsLayerPluginProvider";
    pcVar18 = (code *)0x32;
    param_15 = (code *)param_26;
    break;
  case 7:
    FUN_102c0c4f0();
    pcVar14 = "MemTwoSnapPlaybackLayerViewControllerFactoryPluginProvider";
    param_15 = (code *)param_26;
  case 0xd4:
    pcVar18 = (code *)0x3a;
    break;
  case 8:
    param_26 = (char *)param_14;
    param_8 = (char *)param_15;
  case 0x44:
    FUN_102c0c004(param_26,param_8,param_16,param_17,param_9,param_18,param_19);
    pcVar14 = "SCOperaPayToPromoteButtonPluginProvider";
    pcVar18 = (code *)0x27;
    param_15 = (code *)param_26;
    break;
  case 9:
    param_26 = (char *)param_10;
    param_8 = (char *)param_20;
  case 0x34:
    FUN_102c1b860(param_26,param_8);
    pcVar14 = "SCOperaSoundMarkerLayerViewControllerFactoryPluginProvider";
    pcVar18 = (code *)0x3a;
    param_15 = (code *)param_26;
    break;
  case 10:
    param_26 = (char *)param_21;
    param_8 = (char *)param_22;
  case 0x74:
  case 0xb4:
  case 0xe2:
    FUN_102c1bdb4(param_26,param_8);
  case 0x57:
  case 0x5d:
  case 0x85:
  case 0x8b:
  case 0xc0:
  case 0xc6:
  case 0xe7:
  case 0xec:
  case 0xf9:
  case 0xff:
    pcVar14 = "SensitiveContentWarningOperaLayerFactoryPluginProvider";
    param_15 = (code *)param_26;
  case 0x40:
  case 0x50:
  case 0x70:
  case 0x7e:
  case 0xb0:
  case 0xe0:
    pcVar18 = (code *)0x36;
  case 0xea:
    break;
  case 0xb:
    FUN_102c1bb54(param_23,param_24,param_25);
    param_15 = param_23;
  case 0x1c:
  case 0x24:
    pcVar14 = "SingleSnapPlayerOperaLayerFactoryPluginProvider";
    pcVar18 = (code *)0x2f;
    break;
  case 0xc:
    FUN_102c0c2a4();
    pcVar14 = "SpotlightCustomInterstitialsLayerViewControllerFactoryPluginProvider";
    pcVar18 = (code *)0x44;
    param_15 = (code *)param_26;
    break;
  case 0x43:
  case 0x62:
  case 0x73:
  case 0x90:
  case 0xb3:
  case 0xcb:
    return;
  case 0x45:
  case 0x49:
  case 0x4d:
  case 0x53:
  case 99:
  case 0x76:
  case 0x7b:
  case 0x81:
  case 0x91:
  case 0xb6:
  case 0xba:
  case 0xbf:
  case 0xcc:
  case 0xe4:
  case 0xf2:
    return;
  case 0x46:
    goto code_r0x000102c0b590;
  case 0x48:
  case 0x5b:
  case 0x61:
  case 0x89:
  case 0x8f:
  case 0xc4:
  case 0xca:
  case 0xfd:
    puVar2 = auStack_b0;
    puStack_50 = &stack0xfffffffffffffff0;
  case 0x58:
  case 0x86:
  case 0xc1:
  case 0xfa:
    puVar3 = puVar2;
  case 0x55:
  case 0x83:
  case 0xef:
    puVar4 = puVar3;
  case 0x4e:
  case 0x5c:
  case 0x7c:
  case 0x8a:
  case 0xc5:
  case 0xf8:
  case 0xfe:
    puVar5 = puVar4;
  case 0x5f:
  case 0x8d:
  case 200:
  case 0xeb:
  case 0xee:
  case 0xf0:
  case 0xf7:
    puVar6 = puVar5;
  case 0x75:
  case 0xb5:
  case 0xe3:
    in_register_00005008 = *(undefined8 *)(param_15 + 0x50);
    param_2 = *(undefined8 *)(param_15 + 0x48);
    in_register_00005028 = *(undefined8 *)(param_15 + 0x60);
    param_3 = *(undefined8 *)(param_15 + 0x58);
    puVar7 = puVar6;
  case 0x52:
  case 0x5e:
  case 100:
  case 0x77:
  case 0x80:
  case 0x8c:
  case 0x92:
  case 0xb7:
  case 0xbe:
  case 199:
  case 0xcd:
  case 0xe5:
  case 0xed:
    in_register_00005048 = *(undefined8 *)(param_15 + 0x70);
    param_4 = *(undefined8 *)(param_15 + 0x68);
    puVar8 = puVar7;
  case 0x56:
  case 0x84:
    in_register_00005068 = *(undefined8 *)(param_15 + 0x80);
    param_5 = *(undefined8 *)(param_15 + 0x78);
    puVar9 = puVar8;
  case 0x4f:
  case 0x51:
  case 0x7d:
  case 0x7f:
  case 0xbc:
  case 0xf1:
  case 0xf5:
  case 0xf6:
    in_register_00005088 = *(undefined8 *)(param_15 + 0x90);
    param_6 = *(undefined8 *)(param_15 + 0x88);
    puVar10 = puVar9;
  case 0x59:
  case 0x87:
  case 0xbd:
  case 0xc2:
  case 0xf4:
  case 0xfb:
    param_24 = *(undefined8 *)(param_15 + 0x98);
    param_23 = *(code **)(param_15 + 0xa0);
    puVar11 = puVar10;
  case 0x47:
  case 0x4c:
  case 0x60:
  case 0x7a:
  case 0x8e:
  case 0xc9:
    *(undefined8 *)(puVar11 + 0x50) = param_24;
    *(code **)(puVar11 + 0x58) = param_23;
    puVar12 = puVar11;
  case 0x4a:
    *(undefined8 *)(puVar12 + 0x38) = in_register_00005068;
    *(undefined8 *)(puVar12 + 0x30) = param_5;
    *(undefined8 *)(puVar12 + 0x48) = in_register_00005088;
    *(undefined8 *)(puVar12 + 0x40) = param_6;
    *(undefined8 *)(puVar12 + 0x18) = in_register_00005028;
    *(undefined8 *)(puVar12 + 0x10) = param_3;
    *(undefined8 *)(puVar12 + 0x28) = in_register_00005048;
    *(undefined8 *)(puVar12 + 0x20) = param_4;
    puVar13 = (undefined8 *)puVar12;
  case 0xe9:
    puVar13[1] = in_register_00005008;
    *puVar13 = param_2;
    FUN_102c0b3b8();
    return;
  case 0x54:
  case 0x78:
  case 0x82:
  case 0xb8:
  case 0xbb:
  case 0xe6:
  case 0xe8:
    break;
  case 0x5a:
  case 0x88:
  case 0xc3:
  case 0xfc:
    return;
  case 0xa0:
    puVar20 = param_17;
    unaff_x20 = param_25;
  case 0x10:
    unaff_x25 = param_15;
    unaff_x22 = param_16;
    unaff_x21 = puVar20;
  case 0xd0:
    unaff_x19 = &UNK_11074d988;
    unaff_x29 = &PTR_DAT_113066dd8;
    func_0x0001000a3aa4();
    func_0x000107c6157c();
    pcVar15 = (code *)0x112eff018;
    func_0x0001000285a8(0x112eff018,&UNK_10db321e8);
    func_0x0001000a6ee8(&UNK_1105b0e60,
                        "OperaInternalServiceProviderWrapperScopeInitializationPluginKey",0x3f,2,
                        FUN_102c0ba10);
    func_0x000107c61574();
    unaff_x26 = (code *)&UNK_1105b1188;
    func_0x000107c613fc(&UNK_1105b1188,0x20,7);
    *(long *)(unaff_x26 + 0x10) = lVar1;
    *(ulong *)(unaff_x26 + 0x18) = uVar21;
    func_0x000107c6157c(lVar1);
    func_0x000107c6157c(uVar21);
    param_8 = "OperaSessionScopeGraphBridgeScopeInitializationPluginKey";
    param_11 = FUN_102c0ba3c;
    param_26 = &UNK_1105b37d0;
    pcVar19 = (code *)0x38;
    param_10 = (code *)0x2;
    unaff_x30 = param_9;
  case 0x11:
  case 0x19:
  case 0x21:
  case 0x31:
  case 0xa1:
  case 0xd1:
    param_12 = unaff_x26;
    param_13 = pcVar15;
    pcVar15 = param_13;
    unaff_x26 = param_12;
  case 0x18:
    func_0x0001000a6ee8(param_26,param_8,pcVar19,param_10,param_11,param_12,param_13,param_26);
    func_0x000107c61574(unaff_x26);
  case 0x30:
    func_0x000107c6157c(pcVar22);
  case 0x20:
    param_8 = "SCAdUnifiedEventObservableBusEntryPointWrapperScopeInitializationPluginKey";
    param_11 = FUN_102c0ba7c;
    param_26 = &UNK_1105b0f00;
    param_9 = (code *)0x4a;
    param_10 = (code *)0x2;
    param_12 = pcVar22;
  case 0x12:
  case 0x1a:
  case 0x22:
  case 0x32:
  case 0xa2:
  case 0xd2:
    func_0x0001000a6ee8(param_26,param_8,param_9,param_10,param_11,param_12,pcVar15,param_26);
    func_0x000107c61574(pcVar22);
    func_0x000107c6157c(param_1);
    func_0x0001000a6ee8(&UNK_1105b0fa0,
                        "SCOperaMediaResolverServiceProviderWrapperScopeInitializationPluginKey",
                        0x46,2,0x102c0baa8,param_1,pcVar15,&UNK_1105b0fa0);
    func_0x000107c61574(param_1);
    puVar16 = &UNK_1105b11b0;
    func_0x000107c613fc(&UNK_1105b11b0,0x28,7);
    *(undefined8 *)(puVar16 + 0x10) = unaff_x28;
    *(undefined8 *)(puVar16 + 0x18) = unaff_x27;
    *(undefined8 *)(puVar16 + 0x20) = unaff_x23;
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c(unaff_x23);
    func_0x0001000a6ee8(&UNK_1105bd760,"SCOperaS2RScopeInitializationPluginKey",0x26,2,FUN_102c0bad4
                        ,puVar16,pcVar15,&UNK_1105bd760);
    func_0x000107c61574(puVar16);
    func_0x000107c6157c(unaff_x25);
    func_0x0001000a6ee8(&UNK_1105b1020,"SCOperaSessionEntryPointWrapperScopeInitializationPluginKey"
                        ,0x3b,2,FUN_102c0bb18,unaff_x25,pcVar15,&UNK_1105b1020);
    func_0x000107c61574(unaff_x25);
    puVar16 = &UNK_1105b11d8;
    func_0x000107c613fc(&UNK_1105b11d8,0x20,7);
    *(long *)(puVar16 + 0x10) = lVar1;
    *(undefined8 *)(puVar16 + 0x18) = unaff_x22;
    func_0x000107c6157c(lVar1);
    func_0x000107c6157c(unaff_x22);
    func_0x0001000a6ee8(&UNK_1105b0b48,"SCOperaSessionScopedServicesScopeInitializationPluginKey",
                        0x38,2,FUN_102c0bbec,puVar16,pcVar15,&UNK_1105b0b48);
    func_0x000107c61574(puVar16);
    func_0x000107c6157c(unaff_x21);
    func_0x0001000a6ee8(&UNK_1105b10c0,
                        "SCOperaTrackerServiceProviderWrapperScopeInitializationPluginKey",0x40,2,
                        FUN_102c0bc78,unaff_x21,pcVar15,&UNK_1105b10c0);
    func_0x000107c61574(unaff_x21);
    uVar17 = 0x112eff020;
    func_0x0001000285a8(0x112eff020,&UNK_10db321f0);
    func_0x000107c613fc();
    func_0x0001000a7f1c(unaff_x19,unaff_x29,unaff_x30,uVar17);
    func_0x0001000a7f38("SCOperaSessionScopeInitializationPluginRegistryServiceProvider",0x3e,2);
    *unaff_x20 = unaff_x19;
    return;
  }
  param_9 = (code *)0x2;
code_r0x000102c0b590:
  func_0x000100082720(pcVar14,pcVar18,param_9);
  *param_1 = param_15;
  return;
}



/* Entry: 102c0b5ac; end: 102c0b5ff;  */

void FUN_102c0b5ac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102c0b3b8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 102c0b600; end: 102c0ba0f;  */

void FUN_102c0b600(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d988;
  ppuVar4 = &PTR_DAT_113066dd8;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112eff018;
  func_0x0001000285a8(0x112eff018,&UNK_10db321e8);
  func_0x0001000a6ee8(&UNK_1105b0e60,
                      "OperaInternalServiceProviderWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_102c0ba10,param_2,uVar2,&UNK_1105b0e60,&PTR_DAT_112efea10);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_1105b1188;
  func_0x000107c613fc(&UNK_1105b1188,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105b37d0,"OperaSessionScopeGraphBridgeScopeInitializationPluginKey",0x38
                      ,2,FUN_102c0ba3c,puVar3,uVar2,&UNK_1105b37d0,&PTR_DAT_112f00350);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1105b0f00,
                      "SCAdUnifiedEventObservableBusEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_102c0ba7c,param_5,uVar2,&UNK_1105b0f00,&PTR_DAT_112efeaf0);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1105b0fa0,
                      "SCOperaMediaResolverServiceProviderWrapperScopeInitializationPluginKey",0x46,
                      2,0x102c0baa8,param_6,uVar2,&UNK_1105b0fa0,&PTR_DAT_112efebe0);
  func_0x000107c61574(param_6);
  puVar3 = &UNK_1105b11b0;
  func_0x000107c613fc(&UNK_1105b11b0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  *(undefined8 *)(puVar3 + 0x20) = param_9;
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_1105bd760,"SCOperaS2RScopeInitializationPluginKey",0x26,2,FUN_102c0bad4,
                      puVar3,uVar2,&UNK_1105bd760,&PTR_DAT_112f0a2a0);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_1105b1020,"SCOperaSessionEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,FUN_102c0bb18,param_10,uVar2,&UNK_1105b1020,&PTR_DAT_112efece0);
  func_0x000107c61574(param_10);
  puVar3 = &UNK_1105b11d8;
  func_0x000107c613fc(&UNK_1105b11d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_11;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_11);
  func_0x0001000a6ee8(&UNK_1105b0b48,"SCOperaSessionScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_102c0bbec,puVar3,uVar2,&UNK_1105b0b48,&PTR_DAT_112efe930);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_12);
  func_0x0001000a6ee8(&UNK_1105b10c0,
                      "SCOperaTrackerServiceProviderWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_102c0bc78,param_12,uVar2,&UNK_1105b10c0,&PTR_DAT_112efef08);
  func_0x000107c61574(param_12);
  uVar2 = 0x112eff020;
  func_0x0001000285a8(0x112eff020,&UNK_10db321f0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCOperaSessionScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102c0ba10; end: 102c0ba3b;  */

void FUN_102c0ba10(void)

{
  FUN_102c0bbf4();
  return;
}



/* Entry: 102c0ba3c; end: 102c0ba7b;  */

void FUN_102c0ba3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102c1fca0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("OperaSessionScopeGraphBridgeScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c0ba7c; end: 102c0bad3;  */

void FUN_102c0ba7c(void)

{
  FUN_102c0bbf4();
  return;
}



/* Entry: 102c0bad4; end: 102c0bb17;  */

void FUN_102c0bad4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102cb6e74(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100082720("SCOperaS2RScopeInitializationPluginPluginProvider",0x31,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c0bb18; end: 102c0bb43;  */

void FUN_102c0bb18(void)

{
  FUN_102c0bbf4();
  return;
}



/* Entry: 102c0bb44; end: 102c0bbeb;  */

void FUN_102c0bb44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105b1200;
  func_0x000107c613fc(&UNK_1105b1200,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102c0bcd8;
  func_0x0001000823a8(FUN_102c0bcd8,puVar1);
  func_0x000100082720("SCOperaSessionScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102c0bbec; end: 102c0bbf3;  */

void FUN_102c0bbec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105b1200;
  func_0x000107c613fc(&UNK_1105b1200,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102c0bcd8;
  func_0x0001000823a8(FUN_102c0bcd8,puVar3);
  func_0x000100082720("SCOperaSessionScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102c0bbf4; end: 102c0bc77;  */

void FUN_102c0bbf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 102c0bc78; end: 102c0bca3;  */

void FUN_102c0bc78(void)

{
  FUN_102c0bbf4();
  return;
}



/* Entry: 102c0bca4; end: 102c0bcab;  */

void FUN_102c0bca4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  func_0x0001005d8744(1,0x102c0acfc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c0bcac; end: 102c0bcd7;  */

void FUN_102c0bcac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


