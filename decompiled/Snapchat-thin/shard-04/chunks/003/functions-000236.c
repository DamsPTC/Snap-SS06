/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10338ad74; end: 10338ad8b;  */

/* WARNING: Possible PIC construction at 0x00010338ad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338ad60) */

void FUN_10338ad74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1106484d0;
  func_0x000107c613fc(&UNK_1106484d0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112f5f6e8;
  func_0x0001000285a8(0x112f5f6e8,&UNK_10dbbab50);
  func_0x000107c613fc();
  pcVar4 = FUN_10338b100;
  func_0x0001000841fc(FUN_10338b100,puVar2,uVar3);
  func_0x000100084214(&UNK_10dbbab20,0x29,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10338ad8c; end: 10338b0ff;  */

void FUN_10338ad8c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x0001000285a8(0x112f5f6f0,&UNK_10dbbab58);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10338c128();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_10338c1b4();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10338aa48;
  func_0x0001000823a8(FUN_10338aa48,0);
  func_0x000100082720("SCMusicCameraScopedServicesCleanupRelayServiceProvider",0x36,2);
  puVar5 = puVar2;
  FUN_10338bfdc();
  func_0x000100082720("MusicCameraScopeGraphBridgeServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f5f6f8,&UNK_10dbbab70);
  puVar6 = &UNK_1106484f8;
  func_0x000107c613fc(&UNK_1106484f8,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 **)(puVar6 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar3);
  uVar11 = 0x10338b108;
  func_0x0001000823a8(0x10338b108,puVar6);
  func_0x000100082720("SCMusicCameraUIEntryPointWrapperServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f5f700,&UNK_10dbbab60);
  puVar6 = &UNK_110648520;
  func_0x000107c613fc(&UNK_110648520,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar11;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar11);
  pcVar7 = FUN_10338b150;
  func_0x0001000823a8(FUN_10338b150,puVar6);
  func_0x000100082720("SCMusicCameraScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f5f678,&UNK_10dbba920);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x10338b15c;
  func_0x0001000823a8(0x10338b15c,pcVar7);
  func_0x000100082720("SCMusicCameraScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f5f668,&UNK_10dbba910);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10338b164;
  func_0x0001000823a8(0x10338b164,uVar8);
  func_0x000100082720("SCMusicCameraScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110648548;
  func_0x000107c613fc(&UNK_110648548,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_10338b198;
  func_0x0001000823a8(FUN_10338b198,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCMusicCameraScopeEntryPointProvider",0x24,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 10338b100; end: 10338b113;  */

void FUN_10338b100(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001000285a8(0x112f5f6f0,&UNK_10dbbab58);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10338c128();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_10338c1b4();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10338aa48;
  func_0x0001000823a8(FUN_10338aa48,0);
  func_0x000100082720("SCMusicCameraScopedServicesCleanupRelayServiceProvider",0x36,2);
  puVar5 = puVar2;
  FUN_10338bfdc();
  func_0x000100082720("MusicCameraScopeGraphBridgeServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f5f6f8,&UNK_10dbbab70);
  puVar6 = &UNK_1106484f8;
  func_0x000107c613fc(&UNK_1106484f8,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  *(undefined8 **)(puVar6 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar7 = 0x10338b108;
  func_0x0001000823a8(0x10338b108,puVar6);
  func_0x000100082720("SCMusicCameraUIEntryPointWrapperServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f5f700,&UNK_10dbbab60);
  puVar6 = &UNK_110648520;
  func_0x000107c613fc(&UNK_110648520,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar7);
  pcVar8 = FUN_10338b150;
  func_0x0001000823a8(FUN_10338b150,puVar6);
  func_0x000100082720("SCMusicCameraScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f5f678,&UNK_10dbba920);
  func_0x000107c6157c(pcVar8);
  uVar9 = 0x10338b15c;
  func_0x0001000823a8(0x10338b15c,pcVar8);
  func_0x000100082720("SCMusicCameraScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f5f668,&UNK_10dbba910);
  func_0x000107c6157c(uVar9);
  uVar11 = 0x10338b164;
  func_0x0001000823a8(0x10338b164,uVar9);
  func_0x000100082720("SCMusicCameraScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110648548;
  func_0x000107c613fc(&UNK_110648548,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar11;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_10338b198;
  func_0x0001000823a8(FUN_10338b198,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCMusicCameraScopeEntryPointProvider",0x24,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 10338b114; end: 10338b14f;  */

void FUN_10338b114(void)

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



/* Entry: 10338b150; end: 10338b16b;  */

void FUN_10338b150(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10338b744(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCMusicCameraScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10338b16c; end: 10338b197;  */

void FUN_10338b16c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10338b198; end: 10338b19f;  */

void FUN_10338b198(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110648330;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110648330;
  return;
}



/* Entry: 10338b1a0; end: 10338b2f7;  */

void FUN_10338b1a0(undefined8 *param_1)

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
  FUN_10338b694();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10338b424(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 10338b2f8; end: 10338b333;  */

void FUN_10338b2f8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10338b334; end: 10338b33b;  */

undefined8 FUN_10338b334(void)

{
  return 0x1b;
}



/* Entry: 10338b33c; end: 10338b3bf;  */

void FUN_10338b33c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10338b6d4,param_2,FUN_10338b6d8,param_2,FUN_10338b700,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10338b3c0; end: 10338b40f;  */

undefined8 FUN_10338b3c0(void)

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



/* Entry: 10338b410; end: 10338b423;  */

void FUN_10338b410(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110648560;
  return;
}



/* Entry: 10338b424; end: 10338b677;  */

void FUN_10338b424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  func_0x0001000285a8(0x112e4bb30,&UNK_10da45170);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ad1b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536172656d6163;
  func_0x000107c5fadc(0x63536172656d6163,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0714b0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0714d0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10338b678; end: 10338b693;  */

undefined ** FUN_10338b678(void)

{
  return &PTR_DAT_112f8ac70;
}



/* Entry: 10338b694; end: 10338b6b3;  */

void FUN_10338b694(void)

{
  func_0x000107c61168(&PTR_PTR_112f5f770);
  return;
}



/* Entry: 10338b6b4; end: 10338b6d7;  */

undefined1  [16] FUN_10338b6b4(void)

{
  return ZEXT816(0x1106485a0);
}



/* Entry: 10338b6d8; end: 10338b6ff;  */

void FUN_10338b6d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10338b700; end: 10338b707;  */

undefined8 FUN_10338b700(void)

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



/* Entry: 10338b708; end: 10338b743;  */

void FUN_10338b708(undefined8 *param_1,undefined8 param_2)

{
  FUN_10338b744();
  func_0x0001000a7f38("SCMusicCameraScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10338b744; end: 10338b92f;  */

void FUN_10338b744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106867b0;
  ppuVar4 = &PTR_DAT_112f8ac70;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1106485f0;
  func_0x000107c613fc(&UNK_1106485f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f5f7e8;
  func_0x0001000285a8(0x112f5f7e8,&UNK_10dbbaca8);
  func_0x0001000a6ee8(&UNK_110648810,"MusicCameraScopeGraphBridgeScopeInitializationPluginKey",0x37,
                      2,FUN_10338b930,puVar2,uVar3,&UNK_110648810,&PTR_DAT_112f5f880);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110648618;
  func_0x000107c613fc(&UNK_110648618,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106483c0,"SCMusicCameraScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_10338ba18,puVar2,uVar3,&UNK_1106483c0,&PTR_DAT_112f5f680);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106485a0,"SCMusicCameraUIEntryPointWrapperScopeInitializationPluginKey",
                      0x3c,2,FUN_10338ba94,param_4,uVar3,&UNK_1106485a0,&PTR_DAT_112f5f708);
  func_0x000107c61574(param_4);
  uVar3 = 0x112f5f7f0;
  func_0x0001000285a8(0x112f5f7f0,&UNK_10dbbacb0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10338b930; end: 10338b96f;  */

void FUN_10338b930(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10338c25c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MusicCameraScopeGraphBridgeScopeInitializationPluginProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10338b970; end: 10338ba17;  */

void FUN_10338b970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110648640;
  func_0x000107c613fc(&UNK_110648640,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10338bad0;
  func_0x0001000823a8(FUN_10338bad0,puVar1);
  func_0x000100082720("SCMusicCameraScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10338ba18; end: 10338ba1f;  */

void FUN_10338ba18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110648640;
  func_0x000107c613fc(&UNK_110648640,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10338bad0;
  func_0x0001000823a8(FUN_10338bad0,puVar3);
  func_0x000100082720("SCMusicCameraScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10338ba20; end: 10338ba93;  */

void FUN_10338ba20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10338ba9c;
  func_0x0001000823a8(0x10338ba9c,param_3);
  func_0x000100082720("SCMusicCameraUIEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10338ba94; end: 10338baa3;  */

void FUN_10338ba94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10338ba9c;
  func_0x0001000823a8();
  func_0x000100082720("SCMusicCameraUIEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10338baa4; end: 10338bacf;  */

void FUN_10338baa4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10338bad0; end: 10338bad7;  */

void FUN_10338bad0(undefined8 *param_1)

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
  puVar1 = &UNK_110648448;
  func_0x000107c613fc(&UNK_110648448,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10338aca0;
  func_0x00010058fa64(FUN_10338aca0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10338bad8; end: 10338bbb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10338bad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10338beec();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f5f7f8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f5f800) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338bbb4);
  (*pcVar1)();
}



/* Entry: 10338bbb4; end: 10338bc13; -[_TtC27MusicCameraScopeGraphBridge42MusicCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_10338bbb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicCameraScopeGraphBridge.MusicCameraScopeGraphBridgeSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338bbe0);
  (*pcVar1)();
}



/* Entry: 10338bc14; end: 10338bc4b; -[_TtC27MusicCameraScopeGraphBridge42MusicCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010338bc30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338bc34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338bc14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5f7f8));
  return;
}



/* Entry: 10338bc4c; end: 10338bc73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338bc4c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f5f800),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f5f7f8));
  return;
}



/* Entry: 10338bc74; end: 10338bc93;  */

void FUN_10338bc74(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3400);
  return;
}



/* Entry: 10338bc94; end: 10338bd1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10338bc94(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5f830) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f5f838);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10338bd1c);
  (*pcVar2)();
}



/* Entry: 10338bd1c; end: 10338be03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10338bd1c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5f830);
  *(undefined **)(unaff_x20 + _DAT_112f5f830) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5f838);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5f838))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110648730;
  func_0x000107c613fc(&UNK_110648730,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10338be08,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10338be04; end: 10338be0f;  */

void FUN_10338be04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10338be10; end: 10338be6f; -[_TtC27MusicCameraScopeGraphBridge42SCMusicCameraScopedServicesSaberEntryPoint init] */

void FUN_10338be10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicCameraScopeGraphBridge.SCMusicCameraScopedServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338be3c);
  (*pcVar1)();
}



/* Entry: 10338be70; end: 10338bea7; -[_TtC27MusicCameraScopeGraphBridge42SCMusicCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338be70(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5f838));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5f830));
  return;
}



/* Entry: 10338bea8; end: 10338beab;  */

void FUN_10338bea8(void)

{
  return;
}



/* Entry: 10338beac; end: 10338becb;  */

void FUN_10338beac(void)

{
  FUN_10338bd1c();
  return;
}



/* Entry: 10338becc; end: 10338beeb;  */

void FUN_10338becc(void)

{
  func_0x000107c61168(&PTR_PTR_1128d34c8);
  return;
}



/* Entry: 10338beec; end: 10338bfbb;  */

undefined8 FUN_10338beec(void)

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
  
  func_0x000107c61428(0x112f5f868,&uStack_40,0x20,0);
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
    FUN_10338bfbc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10338bfbc; end: 10338bfdb;  */

void FUN_10338bfbc(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3590);
  return;
}



/* Entry: 10338bfdc; end: 10338bff7;  */

void FUN_10338bfdc(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5f870,&UNK_10dbbad68);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10338c064,param_1);
  return;
}



/* Entry: 10338bff8; end: 10338c063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338bff8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10338bfbc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f5f878) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10338c064; end: 10338c06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338c064(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10338bfbc();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f5f878) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10338c06c; end: 10338c0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338c06c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5f878) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10338c0b8; end: 10338c117; -[_TtC27MusicCameraScopeGraphBridge35MusicCameraScopeGraphBridgeServices init] */

void FUN_10338c0b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicCameraScopeGraphBridge.MusicCameraScopeGraphBridgeServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338c0e4);
  (*pcVar1)();
}



/* Entry: 10338c118; end: 10338c127; -[_TtC27MusicCameraScopeGraphBridge35MusicCameraScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338c118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5f878));
  return;
}



/* Entry: 10338c128; end: 10338c1b3;  */

void FUN_10338c128(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10338c168,0);
  return;
}



/* Entry: 10338c1b4; end: 10338c1cf;  */

void FUN_10338c1b4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10338c220,param_1);
  return;
}



/* Entry: 10338c1d0; end: 10338c21f;  */

void FUN_10338c1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10338c220; end: 10338c253;  */

void FUN_10338c220(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10338c254; end: 10338c25b;  */

undefined8 FUN_10338c254(void)

{
  return 0x1b;
}



/* Entry: 10338c25c; end: 10338c3d3;  */

void FUN_10338c25c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110648778;
  func_0x000107c613fc(&UNK_110648778,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10338c3d4,puVar1);
  return;
}



/* Entry: 10338c3d4; end: 10338c3db;  */

void FUN_10338c3d4(undefined8 *param_1)

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
  func_0x000107c61428(0x112f5f868,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f5f868,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110648850;
  func_0x000107c613fc(&UNK_110648850,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10338c4a8;
  func_0x00010058fa64(0x10338c4a8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10338c3dc; end: 10338c437;  */

void FUN_10338c3dc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f5f868,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f5f868,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10338c438; end: 10338c4af;  */

undefined ** FUN_10338c438(void)

{
  return &PTR_DAT_112f8ac70;
}



/* Entry: 10338c4b0; end: 10338c4f7; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338c4b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5f8d0;
  func_0x000107c61428(param_1 + _DAT_112f5f8d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10338c4f8; end: 10338c54f; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338c4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5f8d0;
  func_0x000107c61428(param_1 + _DAT_112f5f8d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10338c550; end: 10338c597; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338c550(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5f8d8;
  func_0x000107c61428(param_1 + _DAT_112f5f8d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10338c598; end: 10338c5a3; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338c598(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5f8d8;
  func_0x000107c61428(param_1 + _DAT_112f5f8d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10338c5a4; end: 10338c5eb; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint musicCameraScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338c5a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5f8e0;
  func_0x000107c61428(param_1 + _DAT_112f5f8e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10338c5ec; end: 10338c5f7; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint setMusicCameraScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338c5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5f8e0;
  func_0x000107c61428(param_1 + _DAT_112f5f8e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10338c5f8; end: 10338c657;  */

void FUN_10338c5f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10338c658; end: 10338c813;  */

/* WARNING: Possible PIC construction at 0x00010338c770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338c794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338c7a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338c7e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338c7a8) */
/* WARNING: Removing unreachable block (ram,0x00010338c798) */
/* WARNING: Removing unreachable block (ram,0x00010338c774) */
/* WARNING: Removing unreachable block (ram,0x00010338c7ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338c658(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50b40();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4d1fc();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10338bc74();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10338beec();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10338c814);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f5f7f8) = lVar5;
      *(long *)(lVar3 + _DAT_112f5f800) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10338c814; end: 10338c83b; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10338c814(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10338c658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10338c83c; end: 10338c87f; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint end] */

void FUN_10338c83c(undefined8 param_1)

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



/* Entry: 10338c880; end: 10338ca83;  */

void FUN_10338c880(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0faf8f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f050710,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0ebace0)) &&
           (func_0x000107c605b8(0xd00000000000002a,0x800000010f145320,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MusicCameraScopeGraphBridge/SCMusicCameraScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x4e,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10338ca84);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56820();
        goto LAB_10338c90c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580e8();
  }
LAB_10338c90c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10338ca84; end: 10338cb2f; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10338ca84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10338c880(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10338cb30; end: 10338cba7; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338cb30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5f8d0,0);
  *(undefined8 *)(param_1 + _DAT_112f5f8d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5f8e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5f8e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10338cba8; end: 10338cbdb;  */

void FUN_10338cba8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10338cbdc; end: 10338cc33; -[SCMusicCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010338cc08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338cc0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338cbdc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5f8d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5f8d8));
  return;
}



/* Entry: 10338cc34; end: 10338cc53;  */

void FUN_10338cc34(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3650);
  return;
}



/* Entry: 10338cc54; end: 10338cc9b; -[SCSCMusicCameraScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338cc54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5f918;
  func_0x000107c61428(param_1 + _DAT_112f5f918,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10338cc9c; end: 10338ccf3; -[SCSCMusicCameraScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338cc9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5f918;
  func_0x000107c61428(param_1 + _DAT_112f5f918,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10338ccf4; end: 10338cdcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338ccf4(undefined8 param_1,long param_2)

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
    FUN_10338becc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f5f830) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10338cdcc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f5f838);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f5f920);
    *(long **)(unaff_x20 + _DAT_112f5f920) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10338cdcc; end: 10338cdf3; -[SCSCMusicCameraScopedServicesSaberEntryPoint begin] */

void FUN_10338cdcc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10338ccf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10338cdf4; end: 10338cf6b;  */

/* WARNING: Possible PIC construction at 0x00010338ce5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338cef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338ce60) */
/* WARNING: Removing unreachable block (ram,0x00010338cef8) */
/* WARNING: Removing unreachable block (ram,0x00010338cf10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338cdf4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5f920);
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



/* Entry: 10338cf6c; end: 10338cf73;  */

void FUN_10338cf6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10338cf74; end: 10338cfa7; -[SCSCMusicCameraScopedServicesSaberEntryPoint end] */

void FUN_10338cf74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10338cdf4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10338cfa8; end: 10338d0c7;  */

void FUN_10338cfa8(long param_1,long param_2,long param_3)

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
                        "MusicCameraScopeGraphBridge/SCSCMusicCameraScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10338d0c8);
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



/* Entry: 10338d0c8; end: 10338d173; -[SCSCMusicCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10338d0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10338cfa8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10338d174; end: 10338d1d3; -[SCSCMusicCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338d174(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5f918,0);
  *(undefined8 *)(param_1 + _DAT_112f5f920) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10338d1d4; end: 10338d207;  */

void FUN_10338d1d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10338d208; end: 10338d23f; -[SCSCMusicCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338d208(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5f918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5f920));
  return;
}



/* Entry: 10338d240; end: 10338d25f;  */

void FUN_10338d240(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3720);
  return;
}



/* Entry: 10338d260; end: 10338d2cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338d260(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10338d654();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f5f958) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10338d2cc; end: 10338d337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338d2cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5f958) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10338d338; end: 10338d397; -[_TtC45MutualFriendsPageScopedFactoryServiceProvider31MutualFriendsPageScopedServices init] */

void FUN_10338d338(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsPageScopedFactoryServiceProvider.MutualFriendsPageScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338d364);
  (*pcVar1)();
}



/* Entry: 10338d398; end: 10338d3a7; -[_TtC45MutualFriendsPageScopedFactoryServiceProvider31MutualFriendsPageScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338d398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5f958));
  return;
}



/* Entry: 10338d3a8; end: 10338d413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338d3a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110648a68;
  func_0x000107c613fc(&UNK_110648a68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10338d6ec,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10338d414; end: 10338d4af;  */

void FUN_10338d414(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110648978;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110648978;
  return;
}



/* Entry: 10338d4b0; end: 10338d4e7;  */

void FUN_10338d4b0(long *param_1)

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



/* Entry: 10338d4e8; end: 10338d4ef;  */

undefined8 FUN_10338d4e8(void)

{
  return 0x1b;
}



/* Entry: 10338d4f0; end: 10338d623;  */

void FUN_10338d4f0(undefined8 *param_1)

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
  puVar1 = &UNK_110648a90;
  func_0x000107c613fc(&UNK_110648a90,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10338d6c4;
  func_0x00010058fa64(FUN_10338d6c4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10338d624; end: 10338d653;  */

undefined ** FUN_10338d624(void)

{
  return &PTR_DAT_1130666b8;
}



/* Entry: 10338d654; end: 10338d673;  */

void FUN_10338d654(void)

{
  func_0x000107c61168(&PTR_PTR_1128d37e0);
  return;
}



/* Entry: 10338d674; end: 10338d6c3;  */

undefined1  [16] FUN_10338d674(void)

{
  return ZEXT816(0x1106489c8);
}



/* Entry: 10338d6c4; end: 10338d6eb;  */

void FUN_10338d6c4(void)

{
  func_0x00010058fc80(0,0);
  return;
}


