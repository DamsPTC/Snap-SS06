/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022bf278; end: 1022bf3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bf278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112e7b110;
  func_0x000107c61614(unaff_x20 + _DAT_112e7b110,0);
  lVar3 = _DAT_112e7b118;
  func_0x000107c61614(unaff_x20 + _DAT_112e7b118,0);
  lVar4 = _DAT_112e7b120;
  func_0x000107c61614(unaff_x20 + _DAT_112e7b120,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e7b128);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e7b130);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7b138) = 0;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_98,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_3);
  func_0x000107c61154(&stack0xffffffffffffff58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022bf3a4; end: 1022bf3c3;  */

void FUN_1022bf3a4(void)

{
  func_0x000107c61168(&PTR_PTR_112833108);
  return;
}



/* Entry: 1022bf3c4; end: 1022bf3eb;  */

void FUN_1022bf3c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001022bf3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1022bf3ec; end: 1022bf457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bf3ec(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1022bf7e0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e7b170) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1022bf458; end: 1022bf4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bf458(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7b170) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022bf4c4; end: 1022bf523; -[_TtC39GenAIDreamsScopedFactoryServiceProvider27SCGenAIDreamsScopedServices init] */

void FUN_1022bf4c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsScopedFactoryServiceProvider.SCGenAIDreamsScopedServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022bf4f0);
  (*pcVar1)();
}



/* Entry: 1022bf524; end: 1022bf533; -[_TtC39GenAIDreamsScopedFactoryServiceProvider27SCGenAIDreamsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bf524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7b170));
  return;
}



/* Entry: 1022bf534; end: 1022bf59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bf534(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104f0f30;
  func_0x000107c613fc(&UNK_1104f0f30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1022bf878,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1022bf5a0; end: 1022bf63b;  */

void FUN_1022bf5a0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104f0e40;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104f0e40;
  return;
}



/* Entry: 1022bf63c; end: 1022bf673;  */

void FUN_1022bf63c(long *param_1)

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



/* Entry: 1022bf674; end: 1022bf67b;  */

undefined8 FUN_1022bf674(void)

{
  return 0x1b;
}



/* Entry: 1022bf67c; end: 1022bf7af;  */

void FUN_1022bf67c(undefined8 *param_1)

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
  puVar1 = &UNK_1104f0f58;
  func_0x000107c613fc(&UNK_1104f0f58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1022bf850;
  func_0x00010058fa64(FUN_1022bf850,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1022bf7b0; end: 1022bf7df;  */

undefined ** FUN_1022bf7b0(void)

{
  return &PTR_DAT_113066b80;
}



/* Entry: 1022bf7e0; end: 1022bf7ff;  */

void FUN_1022bf7e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128331f0);
  return;
}



/* Entry: 1022bf800; end: 1022bf84f;  */

undefined1  [16] FUN_1022bf800(void)

{
  return ZEXT816(0x1104f0e90);
}



/* Entry: 1022bf850; end: 1022bf877;  */

void FUN_1022bf850(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1022bf878; end: 1022bf87b;  */

void FUN_1022bf878(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1022bf87c; end: 1022bfda7;  */

void FUN_1022bf87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e7b1d8,&UNK_10da85a50);
  puVar1 = &UNK_1104f0f98;
  func_0x000107c613fc(&UNK_1104f0f98,0x100,7);
  *(undefined8 *)(puVar1 + 0x10) = param_26;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_21;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_27;
  *(undefined8 *)(puVar1 + 0x38) = param_11;
  *(undefined8 *)(puVar1 + 0x40) = param_25;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  *(undefined8 *)(puVar1 + 0x60) = param_15;
  *(undefined8 *)(puVar1 + 0x68) = param_2;
  *(undefined8 *)(puVar1 + 0x70) = param_20;
  *(undefined8 *)(puVar1 + 0x78) = param_29;
  *(undefined8 *)(puVar1 + 0x80) = param_30;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_24;
  *(undefined8 *)(puVar1 + 0x98) = param_23;
  *(undefined8 *)(puVar1 + 0xa0) = param_12;
  *(undefined8 *)(puVar1 + 0xa8) = param_1;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_19;
  *(undefined8 *)(puVar1 + 0xc0) = param_8;
  *(undefined8 *)(puVar1 + 200) = param_28;
  *(undefined8 *)(puVar1 + 0xd0) = param_10;
  *(undefined8 *)(puVar1 + 0xd8) = param_17;
  *(undefined8 *)(puVar1 + 0xe0) = param_13;
  *(undefined8 *)(puVar1 + 0xe8) = param_18;
  *(undefined8 *)(puVar1 + 0xf0) = param_14;
  *(undefined8 *)(puVar1 + 0xf8) = param_3;
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1022bfda8,puVar1);
  return;
}



/* Entry: 1022bfda8; end: 1022bfe03;  */

void FUN_1022bfda8(void)

{
  long unaff_x20;
  
  func_0x0001022bfb08(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8));
  return;
}



/* Entry: 1022bfe04; end: 1022bfe13;  */

undefined1  [16] FUN_1022bfe04(void)

{
  return ZEXT816(0x1104f0fc0);
}



/* Entry: 1022bfe14; end: 1022c06f7;  */

void FUN_1022bfe14(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  code *pcVar16;
  code *pcVar17;
  char *pcVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 auStack_70 [2];
  
  uVar23 = *param_2;
  func_0x0001000285a8(0x112e7b1e8,&UNK_10da85a98);
  puVar1 = auStack_70;
  auStack_70[0] = uVar23;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e7b1f0,&UNK_10da85aa0);
  puVar2 = &UNK_1104f1008;
  func_0x000107c613fc(&UNK_1104f1008,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  pcVar3 = FUN_1022c087c;
  func_0x0001000823a8(FUN_1022c087c,puVar2);
  func_0x000100082720("GenAIDreamsAnimationsServiceProviderWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e7b1f8,&UNK_10da85e90);
  puVar2 = &UNK_1104f1030;
  func_0x000107c613fc(&UNK_1104f1030,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar23 = 0x1022c0884;
  func_0x0001000823a8(0x1022c0884,puVar2);
  pcVar4 = "GenAIDreamsSendServiceProviderWrapperServiceProvider";
  func_0x000100082720("GenAIDreamsSendServiceProviderWrapperServiceProvider",0x34,2);
  func_0x0001022c380c();
  pcVar5 = "PlusSubscribeScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusSubscribeScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_1022c3858();
  pcVar6 = "SCGenAIDreamsOnboardingScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCGenAIDreamsOnboardingScopeExposerSubjectServiceProvider",0x39,2);
  FUN_1022c38a4();
  pcVar7 = "SCGenerativeAIOnboardingScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCGenerativeAIOnboardingScopeExposerSubjectServiceProvider",0x3a,2);
  FUN_1022c38f0();
  pcVar8 = "SCSelfieOnboardingSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSelfieOnboardingSettingsScopeExposerSubjectServiceProvider",0x3c,2);
  FUN_1022c393c();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112e7b200,&UNK_10da85ab0);
  func_0x000107c6157c(uVar23);
  uVar9 = 0x1022c0894;
  func_0x0001000823a8(0x1022c0894,uVar23);
  func_0x000100082720("SCDreamsSendServicesServiceProvider",0x23,2);
  func_0x0001000285a8(0x112e7b208,&UNK_10da85ab8);
  func_0x000107c6157c(pcVar3);
  uVar10 = 0x1022c089c;
  func_0x0001000823a8(0x1022c089c,pcVar3);
  func_0x000100082720("SCGenAIDreamsAnimationsServicesServiceProvider",0x2e,2);
  pcVar11 = pcVar4;
  FUN_1022c384c();
  func_0x000100082720("PlusSubscribeScopeExposerObservableServiceProvider",0x32,2);
  pcVar12 = pcVar5;
  FUN_1022c3898();
  func_0x000100082720("SCGenAIDreamsOnboardingScopeExposerObservableServiceProvider",0x3c,2);
  pcVar13 = pcVar6;
  FUN_1022c38e4();
  func_0x000100082720("SCGenerativeAIOnboardingScopeExposerObservableServiceProvider",0x3d,2);
  pcVar14 = pcVar7;
  FUN_1022c3930();
  func_0x000100082720("SCSelfieOnboardingSettingsScopeExposerObservableServiceProvider",0x3f,2);
  pcVar15 = pcVar8;
  FUN_1022c39c8();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar16 = FUN_1022bf63c;
  func_0x0001000823a8(FUN_1022bf63c,0);
  func_0x000100082720("SCGenAIDreamsScopedServicesCleanupRelayServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e7b210,&UNK_10da85c50);
  puVar2 = &UNK_1104f1058;
  func_0x000107c613fc(&UNK_1104f1058,0x118,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(undefined8 *)(puVar2 + 0x20) = param_9;
  *(undefined8 *)(puVar2 + 0x28) = param_10;
  *(undefined8 *)(puVar2 + 0x30) = param_11;
  *(undefined8 *)(puVar2 + 0x38) = param_12;
  *(undefined8 *)(puVar2 + 0x40) = param_13;
  *(undefined8 *)(puVar2 + 0x48) = param_14;
  *(undefined8 *)(puVar2 + 0x50) = param_15;
  *(undefined8 *)(puVar2 + 0x58) = param_16;
  *(undefined8 *)(puVar2 + 0x60) = param_17;
  *(undefined8 *)(puVar2 + 0x68) = param_18;
  *(undefined8 *)(puVar2 + 0x70) = uVar10;
  *(undefined8 *)(puVar2 + 0x78) = uVar9;
  *(undefined8 *)(puVar2 + 0x80) = param_19;
  *(undefined8 *)(puVar2 + 0x88) = param_20;
  *(undefined8 *)(puVar2 + 0x90) = param_21;
  *(undefined8 *)(puVar2 + 0x98) = param_22;
  *(undefined8 *)(puVar2 + 0xa0) = param_23;
  *(undefined8 *)(puVar2 + 0xa8) = param_24;
  *(undefined8 *)(puVar2 + 0xb0) = param_25;
  *(undefined8 *)(puVar2 + 0xb8) = param_26;
  *(undefined8 *)(puVar2 + 0xc0) = param_27;
  *(undefined8 *)(puVar2 + 200) = param_28;
  *(undefined8 *)(puVar2 + 0xd0) = param_29;
  *(undefined8 *)(puVar2 + 0xd8) = param_30;
  *(undefined8 *)(puVar2 + 0xe0) = param_31;
  *(undefined8 *)(puVar2 + 0xe8) = param_32;
  *(char **)(puVar2 + 0xf0) = pcVar12;
  *(char **)(puVar2 + 0xf8) = pcVar14;
  *(char **)(puVar2 + 0x100) = pcVar11;
  *(char **)(puVar2 + 0x108) = pcVar15;
  *(char **)(puVar2 + 0x110) = pcVar13;
  func_0x000107c6157c(puVar1);
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
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(pcVar14);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(pcVar15);
  func_0x000107c6157c(pcVar13);
  pcVar17 = FUN_1022c08a4;
  func_0x0001000823a8(FUN_1022c08a4,puVar2);
  func_0x000100082720("GenAIDreamsScopeEntryPointWrapperServiceProvider",0x30,2);
  pcVar18 = pcVar4;
  FUN_1022c3458(pcVar4,uVar9,uVar10,pcVar5,pcVar6,pcVar7,pcVar8);
  func_0x000100082720("GenAIDreamsScopeGraphBridgeServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e7b218,&UNK_10da85ac0);
  puVar2 = &UNK_1104f1080;
  func_0x000107c613fc(&UNK_1104f1080,0x40,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(code **)(puVar2 + 0x18) = pcVar17;
  *(undefined8 **)(puVar2 + 0x20) = puVar1;
  *(char **)(puVar2 + 0x28) = pcVar18;
  *(undefined8 *)(puVar2 + 0x30) = uVar23;
  *(code **)(puVar2 + 0x38) = pcVar16;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar17);
  func_0x000107c6157c(pcVar18);
  func_0x000107c6157c(pcVar16);
  pcVar19 = FUN_1022c0908;
  func_0x0001000823a8(FUN_1022c0908,puVar2);
  func_0x000100082720("SCGenAIDreamsScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e7b178,&UNK_10da85860);
  func_0x000107c6157c(pcVar19);
  uVar20 = 0x1022c0918;
  func_0x0001000823a8(0x1022c0918,pcVar19);
  func_0x000100082720("SCGenAIDreamsScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e7b168,&UNK_10da85850);
  func_0x000107c6157c(uVar20);
  uVar21 = 0x1022c0920;
  func_0x0001000823a8(0x1022c0920,uVar20);
  func_0x000100082720("SCGenAIDreamsScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104f10a8;
  func_0x000107c613fc(&UNK_1104f10a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar21;
  *(code **)(puVar2 + 0x18) = pcVar16;
  func_0x000107c6157c(pcVar16);
  pcVar22 = FUN_1022c0954;
  func_0x0001000823a8(FUN_1022c0954,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(uVar20);
  func_0x000100082720("SCGenAIDreamsScopeEntryPointProvider",0x24,2);
  *param_1 = pcVar22;
  return;
}



/* Entry: 1022c06f8; end: 1022c087b;  */

void FUN_1022c06f8(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022c087c; end: 1022c08a3;  */

void FUN_1022c087c(long *param_1)

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
  FUN_1022c0c3c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x0001022c8a08(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001022c889c();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_1022c88c4();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 1022c08a4; end: 1022c0907;  */

void FUN_1022c08a4(void)

{
  long unaff_x20;
  
  FUN_1022c0ce4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 1022c0908; end: 1022c0927;  */

void FUN_1022c0908(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar7 = &UNK_11074d5a0;
  ppuVar10 = &PTR_DAT_113066b80;
  uVar11 = uVar2;
  func_0x0001000a3aa4();
  func_0x000107c6157c(uVar1);
  uVar8 = 0x112e7b5b8;
  func_0x0001000285a8(0x112e7b5b8,&UNK_10da86028);
  func_0x0001000a6ee8(&UNK_1104f1120,
                      "GenAIDreamsAnimationsServiceProviderWrapperScopeInitializationPluginKey",0x47
                      ,2,FUN_1022c29bc,uVar1,uVar8,&UNK_1104f1120,&PTR_DAT_112e7b220);
  func_0x000107c61574(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x0001000a6ee8(&UNK_1104f11a0,"GenAIDreamsScopeEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,0x1022c29e8,uVar4,uVar8,&UNK_1104f11a0,&PTR_DAT_112e7b300);
  func_0x000107c61574(uVar4);
  puVar9 = &UNK_1104f1290;
  func_0x000107c613fc(&UNK_1104f1290,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar2;
  *(undefined8 *)(puVar9 + 0x18) = uVar5;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x0001000a6ee8(&UNK_1104f1638,"GenAIDreamsScopeGraphBridgeScopeInitializationPluginKey",0x37,
                      2,FUN_1022c2a14,puVar9,uVar8,&UNK_1104f1638,&PTR_DAT_112e7b820);
  func_0x000107c61574(puVar9);
  func_0x000107c6157c(uVar3);
  func_0x0001000a6ee8(&UNK_1104f1240,
                      "GenAIDreamsSendServiceProviderWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_1022c2ad8,uVar3,uVar8,&UNK_1104f1240,&PTR_DAT_112e7b4c8);
  func_0x000107c61574(uVar3);
  puVar9 = &UNK_1104f12b8;
  func_0x000107c613fc(&UNK_1104f12b8,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar2;
  *(undefined8 *)(puVar9 + 0x18) = uVar6;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x0001000a6ee8(&UNK_1104f0ed0,"SCGenAIDreamsScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_1022c2bac,puVar9,uVar8,&UNK_1104f0ed0,&PTR_DAT_112e7b180);
  func_0x000107c61574(puVar9);
  uVar8 = 0x112e7b5c0;
  func_0x0001000285a8(0x112e7b5c0,&UNK_10da86030);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar7,ppuVar10,uVar11,uVar8);
  func_0x0001000a7f38("SCGenAIDreamsScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = puVar7;
  return;
}



/* Entry: 1022c0928; end: 1022c0953;  */

void FUN_1022c0928(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022c0954; end: 1022c095b;  */

void FUN_1022c0954(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104f0e40;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104f0e40;
  return;
}



/* Entry: 1022c095c; end: 1022c0af7;  */

void FUN_1022c095c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1022c0c3c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x0001022c8a08(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x0001022c889c();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_1022c88c4();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1022c0af8; end: 1022c0b2b;  */

void FUN_1022c0af8(void)

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



/* Entry: 1022c0b2c; end: 1022c0b7f;  */

void FUN_1022c0b2c(undefined8 *param_1)

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



/* Entry: 1022c0b80; end: 1022c0b87;  */

undefined8 FUN_1022c0b80(void)

{
  return 0x1b;
}



/* Entry: 1022c0b88; end: 1022c0c0b;  */

void FUN_1022c0b88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022c0c8c,param_2,FUN_1022c0c90,param_2,0x1022c0cb8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022c0c0c; end: 1022c0c3b;  */

undefined ** FUN_1022c0c0c(void)

{
  return &PTR_DAT_113066b80;
}



/* Entry: 1022c0c3c; end: 1022c0c5b;  */

void FUN_1022c0c3c(void)

{
  func_0x000107c61168(&PTR_PTR_112e7b288);
  return;
}



/* Entry: 1022c0c5c; end: 1022c0c8f;  */

undefined1  [16] FUN_1022c0c5c(void)

{
  return ZEXT816(0x1104f1100);
}



/* Entry: 1022c0c90; end: 1022c0ce3;  */

void FUN_1022c0c90(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022c0ce4; end: 1022c1f4b;  */

void FUN_1022c0ce4(long *param_1,long param_2)

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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
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
  FUN_1022c218c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x40) = uStack_78;
  *(undefined8 *)(param_2 + 0x48) = uStack_80;
  *(undefined8 *)(param_2 + 0x50) = uStack_88;
  *(undefined8 *)(param_2 + 0x58) = uStack_90;
  *(undefined8 *)(param_2 + 0x60) = uStack_98;
  *(undefined8 *)(param_2 + 0x68) = uStack_a0;
  *(undefined8 *)(param_2 + 0x70) = uStack_a8;
  *(undefined8 *)(param_2 + 0x78) = uStack_b0;
  *(undefined8 *)(param_2 + 0x80) = uStack_b8;
  *(undefined8 *)(param_2 + 0x88) = uStack_c0;
  *(undefined8 *)(param_2 + 0x90) = uStack_c8;
  *(undefined8 *)(param_2 + 0x98) = uStack_d0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_d8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_e0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xc0) = uStack_f8;
  *(undefined8 *)(param_2 + 200) = uStack_100;
  *(undefined8 *)(param_2 + 0xd0) = uStack_108;
  *(undefined8 *)(param_2 + 0xd8) = uStack_110;
  *(undefined8 *)(param_2 + 0xe0) = uStack_118;
  *(undefined8 *)(param_2 + 0xe8) = uStack_120;
  *(undefined8 *)(param_2 + 0xf0) = uStack_128;
  *(undefined8 *)(param_2 + 0xf8) = uStack_130;
  *(undefined8 *)(param_2 + 0x100) = uStack_138;
  *(undefined8 *)(param_2 + 0x108) = uStack_140;
  *(undefined8 *)(param_2 + 0x110) = uStack_148;
  func_0x0001000285a8(0x112e7b2f8,&UNK_10da85c58);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
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
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c61174();
  uVar17 = uStack_f8;
  func_0x000107c61174();
  uVar18 = uStack_100;
  func_0x000107c61174();
  uVar19 = uStack_108;
  func_0x000107c61174();
  uVar20 = uStack_110;
  func_0x000107c61174();
  uVar21 = uStack_118;
  func_0x000107c61174();
  uVar22 = uStack_120;
  func_0x000107c61174();
  uVar23 = uStack_128;
  func_0x000107c61174();
  uVar24 = uStack_130;
  func_0x000107c61174();
  uVar25 = uStack_138;
  func_0x000107c61174();
  uVar26 = uStack_140;
  func_0x000107c61174();
  uVar27 = uStack_148;
  func_0x000107c61174();
  uVar29 = uStack_150;
  func_0x000107c6157c(uStack_150);
  func_0x00010017da58();
  puVar30 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar29);
  *(undefined **)(param_2 + 0x18) = puVar30;
  func_0x0001000285a8(0x112e60be0,&UNK_10da68e90);
  func_0x000107c610f8();
  uVar29 = uStack_158;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar31 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar29);
  *(undefined **)(param_2 + 0x20) = puVar31;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar29 = uStack_160;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar32 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar29);
  *(undefined **)(param_2 + 0x28) = puVar32;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar29 = uStack_168;
  func_0x000107c6157c(uStack_168);
  func_0x00010017da58();
  puVar33 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar29);
  *(undefined **)(param_2 + 0x30) = puVar33;
  func_0x0001000285a8(0x112e78408,&UNK_10da81bc0);
  func_0x000107c610f8();
  uVar29 = uStack_170;
  func_0x000107c6157c(uStack_170);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar29);
  *(undefined **)(param_2 + 0x38) = puVar28;
  func_0x0001022d012c();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar34 = uVar29;
  func_0x0001022cf238(uVar29,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                      uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,
                      uVar23,uVar24,uVar25,uVar26,uVar27,puVar30,puVar31,puVar32,puVar33,puVar28);
  *(undefined8 *)(param_2 + 0x10) = uVar34;
  func_0x000107c6157c();
  FUN_1022cffc8();
  func_0x000107c61170(uVar29);
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
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61574(uStack_150);
  func_0x000107c61574(uStack_158);
  func_0x000107c61574(uStack_160);
  func_0x000107c61574(uStack_168);
  func_0x000107c61574(uStack_170);
  func_0x000107c61574(uVar34);
  *param_1 = param_2;
  return;
}



/* Entry: 1022c1f4c; end: 1022c2087;  */

void FUN_1022c1f4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 1022c2088; end: 1022c208f;  */

undefined8 FUN_1022c2088(void)

{
  return 0x1b;
}



/* Entry: 1022c2090; end: 1022c2113;  */

void FUN_1022c2090(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1022c21cc,param_2,FUN_1022c21d0,param_2,FUN_1022c21f8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022c2114; end: 1022c215b;  */

undefined8 FUN_1022c2114(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1022d0010();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1022c215c; end: 1022c218b;  */

undefined ** FUN_1022c215c(void)

{
  return &PTR_DAT_113066b80;
}



/* Entry: 1022c218c; end: 1022c21ab;  */

void FUN_1022c218c(void)

{
  func_0x000107c61168(&PTR_PTR_112e7b368);
  return;
}



/* Entry: 1022c21ac; end: 1022c21cf;  */

undefined1  [16] FUN_1022c21ac(void)

{
  return ZEXT816(0x1104f11a0);
}



/* Entry: 1022c21d0; end: 1022c21f7;  */

void FUN_1022c21d0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022c21f8; end: 1022c21ff;  */

undefined8 FUN_1022c21f8(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1022d0010();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1022c2200; end: 1022c23a7;  */

void FUN_1022c2200(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  FUN_1022c2650();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_1022ca4ac(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x0001022ca198();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_1022ca1e0();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1022c23a8; end: 1022c24f3;  */

long FUN_1022c23a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_1022ca4ac(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001022ca198();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1022ca1e0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 1022c24f4; end: 1022c253f;  */

void FUN_1022c24f4(void)

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



/* Entry: 1022c2540; end: 1022c2593;  */

void FUN_1022c2540(undefined8 *param_1)

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



/* Entry: 1022c2594; end: 1022c259b;  */

undefined8 FUN_1022c2594(void)

{
  return 0x1b;
}



/* Entry: 1022c259c; end: 1022c261f;  */

void FUN_1022c259c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022c26a0,param_2,FUN_1022c26a4,param_2,0x1022c26cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022c2620; end: 1022c264f;  */

undefined ** FUN_1022c2620(void)

{
  return &PTR_DAT_113066b80;
}



/* Entry: 1022c2650; end: 1022c266f;  */

void FUN_1022c2650(void)

{
  func_0x000107c61168(&PTR_PTR_112e7b530);
  return;
}



/* Entry: 1022c2670; end: 1022c26a3;  */

undefined1  [16] FUN_1022c2670(void)

{
  return ZEXT816(0x1104f1220);
}



/* Entry: 1022c26a4; end: 1022c26f7;  */

void FUN_1022c26a4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022c26f8; end: 1022c29bb;  */

void FUN_1022c26f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d5a0;
  ppuVar4 = &PTR_DAT_113066b80;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112e7b5b8;
  func_0x0001000285a8(0x112e7b5b8,&UNK_10da86028);
  func_0x0001000a6ee8(&UNK_1104f1120,
                      "GenAIDreamsAnimationsServiceProviderWrapperScopeInitializationPluginKey",0x47
                      ,2,FUN_1022c29bc,param_2,uVar2,&UNK_1104f1120,&PTR_DAT_112e7b220);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104f11a0,"GenAIDreamsScopeEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,0x1022c29e8,param_3,uVar2,&UNK_1104f11a0,&PTR_DAT_112e7b300);
  func_0x000107c61574(param_3);
  puVar3 = &UNK_1104f1290;
  func_0x000107c613fc(&UNK_1104f1290,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1104f1638,"GenAIDreamsScopeGraphBridgeScopeInitializationPluginKey",0x37,
                      2,FUN_1022c2a14,puVar3,uVar2,&UNK_1104f1638,&PTR_DAT_112e7b820);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1104f1240,
                      "GenAIDreamsSendServiceProviderWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_1022c2ad8,param_6,uVar2,&UNK_1104f1240,&PTR_DAT_112e7b4c8);
  func_0x000107c61574(param_6);
  puVar3 = &UNK_1104f12b8;
  func_0x000107c613fc(&UNK_1104f12b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_7;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1104f0ed0,"SCGenAIDreamsScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_1022c2bac,puVar3,uVar2,&UNK_1104f0ed0,&PTR_DAT_112e7b180);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e7b5c0;
  func_0x0001000285a8(0x112e7b5c0,&UNK_10da86030);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCGenAIDreamsScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1022c29bc; end: 1022c2a13;  */

void FUN_1022c29bc(void)

{
  FUN_1022c2a54();
  return;
}



/* Entry: 1022c2a14; end: 1022c2a53;  */

void FUN_1022c2a14(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1022c3a68(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("GenAIDreamsScopeGraphBridgeScopeInitializationPluginProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022c2a54; end: 1022c2ad7;  */

void FUN_1022c2a54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1022c2ad8; end: 1022c2b03;  */

void FUN_1022c2ad8(void)

{
  FUN_1022c2a54();
  return;
}



/* Entry: 1022c2b04; end: 1022c2bab;  */

void FUN_1022c2b04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104f12e0;
  func_0x000107c613fc(&UNK_1104f12e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1022c2be0;
  func_0x0001000823a8(FUN_1022c2be0,puVar1);
  func_0x000100082720("SCGenAIDreamsScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1022c2bac; end: 1022c2bb3;  */

void FUN_1022c2bac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104f12e0;
  func_0x000107c613fc(&UNK_1104f12e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1022c2be0;
  func_0x0001000823a8(FUN_1022c2be0,puVar3);
  func_0x000100082720("SCGenAIDreamsScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1022c2bb4; end: 1022c2bdf;  */

void FUN_1022c2bb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022c2be0; end: 1022c2bff;  */

void FUN_1022c2be0(undefined8 *param_1)

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
  puVar1 = &UNK_1104f0f58;
  func_0x000107c613fc(&UNK_1104f0f58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1022bf850;
  func_0x00010058fa64(FUN_1022bf850,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1022c2c00; end: 1022c2dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1022c2c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1022c3368();
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
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e7b5c8) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e7b5d0) = param_7;
    puVar4 = auStack_80;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022c2dd8);
  (*pcVar2)();
}



/* Entry: 1022c2dd8; end: 1022c2e37; -[_TtC27GenAIDreamsScopeGraphBridge42GenAIDreamsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1022c2dd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsScopeGraphBridge.GenAIDreamsScopeGraphBridgeSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c2e04);
  (*pcVar1)();
}



/* Entry: 1022c2e38; end: 1022c2e6f; -[_TtC27GenAIDreamsScopeGraphBridge42GenAIDreamsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022c2e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c2e58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c2e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7b5c8));
  return;
}



/* Entry: 1022c2e70; end: 1022c2e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c2e70(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e7b5d0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e7b5c8));
  return;
}



/* Entry: 1022c2e98; end: 1022c2eb7;  */

void FUN_1022c2e98(void)

{
  func_0x000107c61168(&PTR_PTR_1128332b0);
  return;
}



/* Entry: 1022c2eb8; end: 1022c2f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022c2eb8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e7b7f0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1022c2f1c; end: 1022c2f23;  */

void FUN_1022c2f1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1022c2f24; end: 1022c2fc3;  */

void FUN_1022c2f24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022c2fc4; end: 1022c2fe3;  */

void FUN_1022c2fc4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1022c2fe4; end: 1022c3047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022c2fe4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e7b7f8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1022c3048; end: 1022c304f;  */

void FUN_1022c3048(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1022c3050; end: 1022c30ef;  */

void FUN_1022c3050(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022c30f0; end: 1022c310f;  */

void FUN_1022c30f0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1022c3110; end: 1022c3197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022c3110(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7b7a0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e7b7a8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022c3198);
  (*pcVar2)();
}



/* Entry: 1022c3198; end: 1022c327f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022c3198(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e7b7a0);
  *(undefined **)(unaff_x20 + _DAT_112e7b7a0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e7b7a8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e7b7a8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104f1430;
  func_0x000107c613fc(&UNK_1104f1430,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1022c3284,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1022c3280; end: 1022c328b;  */

void FUN_1022c3280(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1022c328c; end: 1022c32eb; -[_TtC27GenAIDreamsScopeGraphBridge42SCGenAIDreamsScopedServicesSaberEntryPoint init] */

void FUN_1022c328c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsScopeGraphBridge.SCGenAIDreamsScopedServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c32b8);
  (*pcVar1)();
}



/* Entry: 1022c32ec; end: 1022c3323; -[_TtC27GenAIDreamsScopeGraphBridge42SCGenAIDreamsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c32ec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e7b7a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7b7a0));
  return;
}



/* Entry: 1022c3324; end: 1022c3327;  */

void FUN_1022c3324(void)

{
  return;
}



/* Entry: 1022c3328; end: 1022c3347;  */

void FUN_1022c3328(void)

{
  FUN_1022c3198();
  return;
}



/* Entry: 1022c3348; end: 1022c3367;  */

void FUN_1022c3348(void)

{
  func_0x000107c61168(&PTR_PTR_112833378);
  return;
}



/* Entry: 1022c3368; end: 1022c3437;  */

undefined8 FUN_1022c3368(void)

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
  
  func_0x000107c61428(0x112e7b7d8,&uStack_40,0x20,0);
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
    FUN_1022c3438();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1022c3438; end: 1022c3457;  */

void FUN_1022c3438(void)

{
  func_0x000107c61168(&PTR_PTR_112833440);
  return;
}



/* Entry: 1022c3458; end: 1022c364b;  */

void FUN_1022c3458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e7b7e0,&UNK_10da86178);
  puVar1 = &UNK_1104f1478;
  func_0x000107c613fc(&UNK_1104f1478,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_1022c364c,puVar1);
  return;
}



/* Entry: 1022c364c; end: 1022c365f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c364c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar10 = &lStack_70;
  lVar8 = lVar1;
  FUN_1022c3438();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112e7b7e8) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112e7b7f0) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112e7b7f8) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112e7b800) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112e7b808) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112e7b810) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112e7b818) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar11);
  func_0x000107c61154(&lStack_70,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 1022c3660; end: 1022c3723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7b7e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b7f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b7f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b800) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b808) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b810) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b818) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022c3724; end: 1022c3783; -[_TtC27GenAIDreamsScopeGraphBridge35GenAIDreamsScopeGraphBridgeServices init] */

void FUN_1022c3724(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsScopeGraphBridge.GenAIDreamsScopeGraphBridgeServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c3750);
  (*pcVar1)();
}



/* Entry: 1022c3784; end: 1022c384b; -[_TtC27GenAIDreamsScopeGraphBridge35GenAIDreamsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022c37a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c37c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c37e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c37c4) */
/* WARNING: Removing unreachable block (ram,0x0001022c37a4) */
/* WARNING: Removing unreachable block (ram,0x0001022c37e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7b7f0));
  return;
}



/* Entry: 1022c384c; end: 1022c3857;  */

void FUN_1022c384c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1022c3d48,param_1);
  return;
}



/* Entry: 1022c3858; end: 1022c3897;  */

void FUN_1022c3858(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022c3d4c,0);
  return;
}



/* Entry: 1022c3898; end: 1022c38a3;  */

void FUN_1022c3898(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1022c3d3c,param_1);
  return;
}



/* Entry: 1022c38a4; end: 1022c38e3;  */

void FUN_1022c38a4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022c3d54,0);
  return;
}



/* Entry: 1022c38e4; end: 1022c38ef;  */

void FUN_1022c38e4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1022c3d40,param_1);
  return;
}



/* Entry: 1022c38f0; end: 1022c392f;  */

void FUN_1022c38f0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022c3d58,0);
  return;
}



/* Entry: 1022c3930; end: 1022c393b;  */

void FUN_1022c3930(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1022c3d44,param_1);
  return;
}


