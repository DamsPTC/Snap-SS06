/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10242b5a4; end: 10242b60f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242b5a4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10242b998();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e98e78) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10242b610; end: 10242b67b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242b610(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e98e78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10242b67c; end: 10242b6db; -[_TtC41AdApplePromptScopedFactoryServiceProvider27AdApplePromptScopedServices init] */

void FUN_10242b67c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdApplePromptScopedFactoryServiceProvider.AdApplePromptScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10242b6a8);
  (*pcVar1)();
}



/* Entry: 10242b6dc; end: 10242b6eb; -[_TtC41AdApplePromptScopedFactoryServiceProvider27AdApplePromptScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242b6dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e98e78));
  return;
}



/* Entry: 10242b6ec; end: 10242b757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242b6ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105066c8;
  func_0x000107c613fc(&UNK_1105066c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10242ba30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10242b758; end: 10242b7f3;  */

void FUN_10242b758(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105065d8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105065d8;
  return;
}



/* Entry: 10242b7f4; end: 10242b82b;  */

void FUN_10242b7f4(long *param_1)

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



/* Entry: 10242b82c; end: 10242b833;  */

undefined8 FUN_10242b82c(void)

{
  return 0x1b;
}



/* Entry: 10242b834; end: 10242b967;  */

void FUN_10242b834(undefined8 *param_1)

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
  puVar1 = &UNK_1105066f0;
  func_0x000107c613fc(&UNK_1105066f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10242ba08;
  func_0x00010058fa64(FUN_10242ba08,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10242b968; end: 10242b997;  */

undefined ** FUN_10242b968(void)

{
  return &PTR_DAT_112f20c00;
}



/* Entry: 10242b998; end: 10242b9b7;  */

void FUN_10242b998(void)

{
  func_0x000107c61168(&PTR_PTR_11283e5a0);
  return;
}



/* Entry: 10242b9b8; end: 10242ba07;  */

undefined1  [16] FUN_10242b9b8(void)

{
  return ZEXT816(0x110506628);
}



/* Entry: 10242ba08; end: 10242ba2f;  */

void FUN_10242ba08(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10242ba30; end: 10242ba43;  */

void FUN_10242ba30(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10242ba44; end: 10242bd6b;  */

void FUN_10242ba44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e98ef0,&UNK_10daa4c38);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10242cdf8();
  func_0x000100082720("AdApplePromptScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e98ef8,&UNK_10daa4c40);
  puVar3 = &UNK_1105067a0;
  func_0x000107c613fc(&UNK_1105067a0,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar8 = 0x10242bd78;
  func_0x0001000823a8(0x10242bd78,puVar3);
  func_0x000100082720("SCAdApplePromptEntryPointWrapperServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10242b7f4;
  func_0x0001000823a8(FUN_10242b7f4,0);
  func_0x000100082720("AdApplePromptScopedServicesCleanupRelayServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e98f00,&UNK_10daa4c50);
  puVar3 = &UNK_1105067c8;
  func_0x000107c613fc(&UNK_1105067c8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar8);
  uVar5 = 0x10242bd88;
  func_0x0001000823a8(0x10242bd88,puVar3);
  func_0x000100082720("AdApplePromptScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e98e80,&UNK_10daa4a00);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x10242bd94;
  func_0x0001000823a8(0x10242bd94,uVar5);
  func_0x000100082720("AdApplePromptScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e98e70,&UNK_10daa49f0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x10242bd9c;
  func_0x0001000823a8(0x10242bd9c,uVar6);
  func_0x000100082720("AdApplePromptScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1105067f0;
  func_0x000107c613fc(&UNK_1105067f0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10242bda4;
  func_0x0001000823a8(0x10242bda4,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("AdApplePromptScopeEntryPointProvider",0x24,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 10242bd6c; end: 10242bdab;  */

void FUN_10242bd6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e98ef0,&UNK_10daa4c38);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10242cdf8();
  func_0x000100082720("AdApplePromptScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e98ef8,&UNK_10daa4c40);
  puVar3 = &UNK_1105067a0;
  func_0x000107c613fc(&UNK_1105067a0,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x30) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  uVar4 = 0x10242bd78;
  func_0x0001000823a8(0x10242bd78,puVar3);
  func_0x000100082720("SCAdApplePromptEntryPointWrapperServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_10242b7f4;
  func_0x0001000823a8(FUN_10242b7f4,0);
  func_0x000100082720("AdApplePromptScopedServicesCleanupRelayServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e98f00,&UNK_10daa4c50);
  puVar3 = &UNK_1105067c8;
  func_0x000107c613fc(&UNK_1105067c8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar5;
  *(undefined8 *)(puVar3 + 0x28) = uVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(uVar4);
  uVar6 = 0x10242bd88;
  func_0x0001000823a8(0x10242bd88,puVar3);
  func_0x000100082720("AdApplePromptScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e98e80,&UNK_10daa4a00);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x10242bd94;
  func_0x0001000823a8(0x10242bd94,uVar6);
  func_0x000100082720("AdApplePromptScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e98e70,&UNK_10daa49f0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10242bd9c;
  func_0x0001000823a8(0x10242bd9c,uVar7);
  func_0x000100082720("AdApplePromptScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1105067f0;
  func_0x000107c613fc(&UNK_1105067f0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x10242bda4;
  func_0x0001000823a8(0x10242bda4,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("AdApplePromptScopeEntryPointProvider",0x24,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 10242bdac; end: 10242c3b3;  */

void FUN_10242bdac(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10242c504();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126aa818;
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
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f09b250);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar8 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 10242c3b4; end: 10242c3f7;  */

void FUN_10242c3b4(void)

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



/* Entry: 10242c3f8; end: 10242c3ff;  */

undefined8 FUN_10242c3f8(void)

{
  return 0x1b;
}



/* Entry: 10242c400; end: 10242c483;  */

void FUN_10242c400(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10242c544,param_2,FUN_10242c548,param_2,FUN_10242c570,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10242c484; end: 10242c4d3;  */

undefined8 FUN_10242c484(void)

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



/* Entry: 10242c4d4; end: 10242c503;  */

void FUN_10242c4d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110506808;
  return;
}



/* Entry: 10242c504; end: 10242c523;  */

void FUN_10242c504(void)

{
  func_0x000107c61168(&PTR_PTR_112e98f70);
  return;
}



/* Entry: 10242c524; end: 10242c547;  */

undefined1  [16] FUN_10242c524(void)

{
  return ZEXT816(0x110506848);
}



/* Entry: 10242c548; end: 10242c56f;  */

void FUN_10242c548(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10242c570; end: 10242c577;  */

undefined8 FUN_10242c570(void)

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



/* Entry: 10242c578; end: 10242c5b3;  */

void FUN_10242c578(undefined8 *param_1,undefined8 param_2)

{
  FUN_10242c5b4();
  func_0x0001000a7f38("AdApplePromptScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10242c5b4; end: 10242c79f;  */

void FUN_10242c5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105dccb8;
  ppuVar4 = &PTR_DAT_112f20c00;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110506898;
  func_0x000107c613fc(&UNK_110506898,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e98ff0;
  func_0x0001000285a8(0x112e98ff0,&UNK_10daa4d98);
  func_0x0001000a6ee8(&UNK_110506a50,"AdApplePromptScopeGraphBridgeScopeInitializationPluginKey",
                      0x39,2,FUN_10242c7a0,puVar2,uVar3,&UNK_110506a50,&PTR_DAT_112e99080);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1105068c0;
  func_0x000107c613fc(&UNK_1105068c0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110506668,"AdApplePromptScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_10242c888,puVar2,uVar3,&UNK_110506668,&PTR_DAT_112e98e88);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110506848,"SCAdApplePromptEntryPointWrapperScopeInitializationPluginKey",
                      0x3c,2,FUN_10242c904,param_4,uVar3,&UNK_110506848,&PTR_DAT_112e98f08);
  func_0x000107c61574(param_4);
  uVar3 = 0x112e98ff8;
  func_0x0001000285a8(0x112e98ff8,&UNK_10daa4da0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10242c7a0; end: 10242c7df;  */

void FUN_10242c7a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10242cedc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdApplePromptScopeGraphBridgeScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10242c7e0; end: 10242c887;  */

void FUN_10242c7e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105068e8;
  func_0x000107c613fc(&UNK_1105068e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10242c940;
  func_0x0001000823a8(FUN_10242c940,puVar1);
  func_0x000100082720("AdApplePromptScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10242c888; end: 10242c88f;  */

void FUN_10242c888(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105068e8;
  func_0x000107c613fc(&UNK_1105068e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10242c940;
  func_0x0001000823a8(FUN_10242c940,puVar3);
  func_0x000100082720("AdApplePromptScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10242c890; end: 10242c903;  */

void FUN_10242c890(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10242c90c;
  func_0x0001000823a8(0x10242c90c,param_3);
  func_0x000100082720("SCAdApplePromptEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10242c904; end: 10242c913;  */

void FUN_10242c904(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10242c90c;
  func_0x0001000823a8();
  func_0x000100082720("SCAdApplePromptEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10242c914; end: 10242c93f;  */

void FUN_10242c914(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10242c940; end: 10242c947;  */

void FUN_10242c940(undefined8 *param_1)

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
  puVar1 = &UNK_1105066f0;
  func_0x000107c613fc(&UNK_1105066f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10242ba08;
  func_0x00010058fa64(FUN_10242ba08,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10242c948; end: 10242c9cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10242c948(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10242cd08();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e99000) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e99008) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10242c9d0);
  (*pcVar1)();
}



/* Entry: 10242c9d0; end: 10242ca2f; -[_TtC29AdApplePromptScopeGraphBridge44AdApplePromptScopeGraphBridgeSaberEntryPoint init] */

void FUN_10242c9d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdApplePromptScopeGraphBridge.AdApplePromptScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10242c9fc);
  (*pcVar1)();
}



/* Entry: 10242ca30; end: 10242ca67; -[_TtC29AdApplePromptScopeGraphBridge44AdApplePromptScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010242ca4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010242ca50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242ca30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99000));
  return;
}



/* Entry: 10242ca68; end: 10242ca8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242ca68(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e99008),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e99000));
  return;
}



/* Entry: 10242ca90; end: 10242caaf;  */

void FUN_10242ca90(void)

{
  func_0x000107c61168(&PTR_PTR_11283e660);
  return;
}



/* Entry: 10242cab0; end: 10242cb37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10242cab0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e99038) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e99040);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10242cb38);
  (*pcVar2)();
}



/* Entry: 10242cb38; end: 10242cc1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10242cb38(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e99038);
  *(undefined **)(unaff_x20 + _DAT_112e99038) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e99040);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e99040))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105069b0;
  func_0x000107c613fc(&UNK_1105069b0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10242cc24,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10242cc20; end: 10242cc2b;  */

void FUN_10242cc20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10242cc2c; end: 10242cc8b; -[_TtC29AdApplePromptScopeGraphBridge42AdApplePromptScopedServicesSaberEntryPoint init] */

void FUN_10242cc2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdApplePromptScopeGraphBridge.AdApplePromptScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10242cc58);
  (*pcVar1)();
}



/* Entry: 10242cc8c; end: 10242ccc3; -[_TtC29AdApplePromptScopeGraphBridge42AdApplePromptScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242cc8c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e99040));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99038));
  return;
}



/* Entry: 10242ccc4; end: 10242ccc7;  */

void FUN_10242ccc4(void)

{
  return;
}



/* Entry: 10242ccc8; end: 10242cce7;  */

void FUN_10242ccc8(void)

{
  FUN_10242cb38();
  return;
}



/* Entry: 10242cce8; end: 10242cd07;  */

void FUN_10242cce8(void)

{
  func_0x000107c61168(&PTR_PTR_11283e728);
  return;
}



/* Entry: 10242cd08; end: 10242cdd7;  */

undefined8 FUN_10242cd08(void)

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
  
  func_0x000107c61428(0x112e99070,&uStack_40,0x20,0);
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
    FUN_10242cdd8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10242cdd8; end: 10242cdf7;  */

void FUN_10242cdd8(void)

{
  func_0x000107c61168(&PTR_PTR_11283e7f0);
  return;
}



/* Entry: 10242cdf8; end: 10242ce63;  */

void FUN_10242cdf8(void)

{
  func_0x0001000285a8(0x112e99078,&UNK_10daa4e58);
  func_0x0001000823a8(0x10242ce38,0);
  return;
}



/* Entry: 10242ce64; end: 10242ce9f; -[_TtC29AdApplePromptScopeGraphBridge37AdApplePromptScopeGraphBridgeServices init] */

void FUN_10242ce64(undefined8 param_1)

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



/* Entry: 10242cea0; end: 10242ced3;  */

void FUN_10242cea0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10242ced4; end: 10242cedb;  */

undefined8 FUN_10242ced4(void)

{
  return 0x1b;
}



/* Entry: 10242cedc; end: 10242d053;  */

void FUN_10242cedc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105069f8;
  func_0x000107c613fc(&UNK_1105069f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10242d054,puVar1);
  return;
}



/* Entry: 10242d054; end: 10242d05b;  */

void FUN_10242d054(undefined8 *param_1)

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
  func_0x000107c61428(0x112e99070,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e99070,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110506a90;
  func_0x000107c613fc(&UNK_110506a90,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10242d108;
  func_0x00010058fa64(0x10242d108,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10242d05c; end: 10242d0b7;  */

void FUN_10242d05c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e99070,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e99070,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10242d0b8; end: 10242d10f;  */

undefined ** FUN_10242d0b8(void)

{
  return &PTR_DAT_112f20c00;
}



/* Entry: 10242d110; end: 10242d157; -[SCAdApplePromptScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d110(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e990d0;
  func_0x000107c61428(param_1 + _DAT_112e990d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10242d158; end: 10242d1af; -[SCAdApplePromptScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d158(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e990d0;
  func_0x000107c61428(param_1 + _DAT_112e990d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10242d1b0; end: 10242d1f7; -[SCAdApplePromptScopeGraphBridgeSaberEntryPoint adApplePromptScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d1b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e990d8;
  func_0x000107c61428(param_1 + _DAT_112e990d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10242d1f8; end: 10242d25b; -[SCAdApplePromptScopeGraphBridgeSaberEntryPoint setAdApplePromptScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d1f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e990d8;
  func_0x000107c61428(param_1 + _DAT_112e990d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10242d25c; end: 10242d38f;  */

/* WARNING: Possible PIC construction at 0x00010242d314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010242d330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010242d34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010242d318) */
/* WARNING: Removing unreachable block (ram,0x00010242d334) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d25c(void)

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
  func_0x000107c3d218();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10242ca90();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10242cd08();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10242d390);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e99000) = lVar5;
    *(long *)(lVar4 + _DAT_112e99008) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10242d390; end: 10242d3b7; -[SCAdApplePromptScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10242d390(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10242d25c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10242d3b8; end: 10242d3fb; -[SCAdApplePromptScopeGraphBridgeSaberEntryPoint end] */

void FUN_10242d3b8(undefined8 param_1)

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



/* Entry: 10242d3fc; end: 10242d593;  */

void FUN_10242d3fc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0f64b60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f09b4a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdApplePromptScopeGraphBridge/SCAdApplePromptScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x52,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10242d594);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52260();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10242d594; end: 10242d63f; -[SCAdApplePromptScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10242d594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10242d3fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10242d640; end: 10242d6ab; -[SCAdApplePromptScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d640(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e990d0,0);
  *(undefined8 *)(param_1 + _DAT_112e990d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e990e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10242d6ac; end: 10242d6df;  */

void FUN_10242d6ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10242d6e0; end: 10242d727; -[SCAdApplePromptScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010242d70c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010242d710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d6e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e990d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e990d8));
  return;
}



/* Entry: 10242d728; end: 10242d747;  */

void FUN_10242d728(void)

{
  func_0x000107c61168(&PTR_PTR_11283e8a0);
  return;
}



/* Entry: 10242d748; end: 10242d78f; -[SCAdApplePromptScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d748(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99110;
  func_0x000107c61428(param_1 + _DAT_112e99110,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10242d790; end: 10242d7e7; -[SCAdApplePromptScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99110;
  func_0x000107c61428(param_1 + _DAT_112e99110,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10242d7e8; end: 10242d8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d7e8(undefined8 param_1,long param_2)

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
    FUN_10242cce8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e99038) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10242d8c0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e99040);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e99118);
    *(long **)(unaff_x20 + _DAT_112e99118) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10242d8c0; end: 10242d8e7; -[SCAdApplePromptScopedServicesSaberEntryPoint begin] */

void FUN_10242d8c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10242d7e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10242d8e8; end: 10242da5f;  */

/* WARNING: Possible PIC construction at 0x00010242d950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010242d9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010242d954) */
/* WARNING: Removing unreachable block (ram,0x00010242d9ec) */
/* WARNING: Removing unreachable block (ram,0x00010242da04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242d8e8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e99118);
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



/* Entry: 10242da60; end: 10242da67;  */

void FUN_10242da60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10242da68; end: 10242da9b; -[SCAdApplePromptScopedServicesSaberEntryPoint end] */

void FUN_10242da68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10242d8e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10242da9c; end: 10242dbbb;  */

void FUN_10242da9c(long param_1,long param_2,long param_3)

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
                        "AdApplePromptScopeGraphBridge/SCAdApplePromptScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10242dbbc);
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



/* Entry: 10242dbbc; end: 10242dc67; -[SCAdApplePromptScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10242dbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10242da9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10242dc68; end: 10242dcc7; -[SCAdApplePromptScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242dc68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e99110,0);
  *(undefined8 *)(param_1 + _DAT_112e99118) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10242dcc8; end: 10242dcfb;  */

void FUN_10242dcc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10242dcfc; end: 10242dd33; -[SCAdApplePromptScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242dcfc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e99110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99118));
  return;
}



/* Entry: 10242dd34; end: 10242dd53;  */

void FUN_10242dd34(void)

{
  func_0x000107c61168(&PTR_PTR_11283e968);
  return;
}



/* Entry: 10242dd54; end: 10242df63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10242dd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar2 = _DAT_112e99148;
  func_0x000107c61614(unaff_x20 + _DAT_112e99148,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e99150) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e99158) = param_2;
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112e99160) = param_4;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(auStack_60,puVar1,0,0);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 10242df64; end: 10242dfd3; -[AdApplePromptAdSlotViewController initWithAdConfigProvider:adTrackingAuthorizationMetricsManager:scopeDelegate:adProductType:] */

void FUN_10242df64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x00010242de5c(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10242dfd4; end: 10242e03f; -[AdApplePromptAdSlotViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242dfd4(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112e99148,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCAdApplePromptSwift/AdApplePromptAdSlotViewController.swift",0x3c,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10242e040);
  (*pcVar1)();
}



/* Entry: 10242e040; end: 10242e153;  */

/* WARNING: Removing unreachable block (ram,0x00010242e150) */

void FUN_10242e040(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  func_0x000107c42448();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
  func_0x000107c46734();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar2);
  func_0x000107c3fa94(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(puVar2);
  func_0x000107c61170(puVar3);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e2d178;
  func_0x000107c61174();
  func_0x000107c520f4(puVar2);
  func_0x000107c61170(ppuVar4);
  func_0x000107c5a568();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10242e154; end: 10242e17b; -[AdApplePromptAdSlotViewController viewDidLoad] */

void FUN_10242e154(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10242e040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10242e17c; end: 10242e3f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242e17c(uint param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  lVar1 = *(long *)(unaff_x20 + _DAT_112e99150);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c5350;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x000107c4d770();
    lVar4 = lVar1;
    if ((int)puVar3 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112e99158);
      func_0x000107c5c734(lVar4);
      func_0x000107c61180();
      puVar3 = &UNK_110506b98;
      func_0x000107c613fc(&UNK_110506b98,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      uStack_60 = 0x10242e2e0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100ab47f8;
      puStack_68 = &UNK_110506bb0;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      func_0x000107c5042c(puVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 10242e3f8; end: 10242e413;  */

void FUN_10242e3f8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10242e414; end: 10242e443; -[AdApplePromptAdSlotViewController viewDidAppear:] */

void FUN_10242e414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10242e17c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10242e444; end: 10242e477;  */

void FUN_10242e444(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10242e478; end: 10242e4e3; -[AdApplePromptAdSlotViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10242e478(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e99150));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e99158));
  param_1 = param_1 + _DAT_112e99148;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10242e4e4; end: 10242e503;  */

void FUN_10242e4e4(void)

{
  func_0x000107c61168(&PTR_PTR_11283ea28);
  return;
}



/* Entry: 10242e504; end: 10242e64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242e504(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  ppuVar3 = &puStack_50;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar4 + _DAT_112e99148;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c3d21c();
    func_0x000107c615e8(lVar1);
  }
  puVar2 = &UNK_110506b98;
  func_0x000107c613fc(&UNK_110506b98,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,lVar4);
  uStack_30 = 0x10242e5d8;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_1000f6b44;
  puStack_38 = &UNK_110506c28;
  puStack_28 = puVar2;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c61574(puStack_28);
  func_0x000107c420a8(lVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10242e64c; end: 10242e65b;  */

void FUN_10242e64c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10242e65c; end: 10242e6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242e65c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10242ea50();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e99198) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10242e6c8; end: 10242e733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10242e6c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e99198) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10242e734; end: 10242e793; -[_TtC42AdReportAdInfoScopedFactoryServiceProvider30SCAdReportAdInfoScopedServices init] */

void FUN_10242e734(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportAdInfoScopedFactoryServiceProvider.SCAdReportAdInfoScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10242e760);
  (*pcVar1)();
}


