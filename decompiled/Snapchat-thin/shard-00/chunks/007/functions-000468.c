/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009648bc; end: 100964927; -[SCListPasskeysGrapheneImpl init] */

undefined8 FUN_1009648bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0970;
  func_0x000107c610fc(PTR_PTR_1126d0970);
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c61160(PTR_PTR_1126aeea8);
  func_0x000107c46b9c(param_1,param_2,puVar1,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100964928; end: 10096499b; -[SCGraphenePasskeyManagementMetric2 init] */

undefined1 * FUN_100964928(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4ff0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10096499c; end: 100964a47; -[SCListPasskeysGrapheneImpl initWithGraphene:timeProvider:] */

undefined1 *
FUN_10096499c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f4fd0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = 0xbff0000000000000;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100964a48; end: 100964a87;  */

void FUN_100964a48(void)

{
  func_0x000107c61168(&PTR_PTR_112e0e2a8);
  return;
}



/* Entry: 100964a88; end: 100964acb;  */

long FUN_100964a88(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100964acc; end: 100964b0f;  */

void FUN_100964acc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d69830 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a6700;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d69830 = puVar1;
  return;
}



/* Entry: 100964b10; end: 100964b83; -[SCPasskeyStoreServices initWithPasskeyStore:] */

undefined1 * FUN_100964b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f74f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100964b84; end: 100964b8f; -[SCPasskeyManagementGRPCServiceFactory .cxx_destruct] */

void FUN_100964b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100964b90; end: 100964be3;  */

void FUN_100964b90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100964be4; end: 100964c07;  */

undefined ** FUN_100964be4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100964c08; end: 100964c87;  */

void FUN_100964c08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106c6e90;
  func_0x000107c613fc(&UNK_1106c6e90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100964c88,puVar1);
  return;
}



/* Entry: 100964c88; end: 100964c8f;  */

void FUN_100964c88(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fdc948,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fdc948,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c6f28;
  func_0x000107c613fc(&UNK_1106c6f28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a8735c;
  FUN_10058fa64(&UNK_103a8735c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100964c90; end: 100964d87;  */

void FUN_100964c90(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fdc948,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fdc948,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c6f28;
  func_0x000107c613fc(&UNK_1106c6f28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a8735c;
  FUN_10058fa64(&UNK_103a8735c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100964d88; end: 100964dab;  */

void FUN_100964d88(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100964dac; end: 100964dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100964dac(undefined8 *param_1)

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
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar10 = &lStack_60;
  lVar8 = lVar1;
  FUN_1002c44a4();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112fdc958) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112fdc960) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112fdc968) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112fdc970) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112fdc978) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112fdc980) = uVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar9;
  lStack_58 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_60,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 100964dbc; end: 100964eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100964dbc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_2;
  FUN_1002c44a4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fdc958) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fdc960) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fdc968) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fdc970) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fdc978) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fdc980) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 100964eb0; end: 100964f27;  */

void FUN_100964eb0(void)

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



/* Entry: 100964f28; end: 100964f4f;  */

undefined ** FUN_100964f28(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100964f50; end: 100964f8f;  */

void FUN_100964f50(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100964f34();
  FUN_100082720("PlaybackPlayerServicesProviderWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100964f90; end: 100964f97;  */

void FUN_100964f90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e698ac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100964f98; end: 10096501b;  */

void FUN_100964f98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e698ac,param_2,&UNK_101e698b0,param_2,&UNK_101e698d8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096501c; end: 100965043;  */

undefined ** FUN_10096501c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100965044; end: 100965083;  */

void FUN_100965044(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100965028();
  FUN_100082720("PlaybackWebProxyServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100965084; end: 10096508b;  */

void FUN_100965084(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e69aac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096508c; end: 10096510f;  */

void FUN_10096508c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e69aac,param_2,&UNK_101e69ab0,param_2,&UNK_101e69ad8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965110; end: 100965133;  */

undefined ** FUN_100965110(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100965134; end: 1009651b3;  */

void FUN_100965134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106c7168;
  func_0x000107c613fc(&UNK_1106c7168,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009651b4,puVar1);
  return;
}



/* Entry: 1009651b4; end: 1009651bb;  */

void FUN_1009651b4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fdd110,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fdd110,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c7200;
  func_0x000107c613fc(&UNK_1106c7200,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a89608;
  FUN_10058fa64(&UNK_103a89608,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009651bc; end: 1009652b3;  */

void FUN_1009651bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fdd110,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fdd110,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c7200;
  func_0x000107c613fc(&UNK_1106c7200,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a89608;
  FUN_10058fa64(&UNK_103a89608,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009652b4; end: 1009652d7;  */

void FUN_1009652b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009652d8; end: 1009652e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009652d8(undefined8 *param_1)

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
  FUN_1002b72a0();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112fdd120) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112fdd128) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112fdd130) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112fdd138) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112fdd140) = uVar9;
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



/* Entry: 1009652e8; end: 1009653c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009652e8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1002b72a0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fdd120) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fdd128) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fdd130) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fdd138) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fdd140) = param_6;
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



/* Entry: 1009653c4; end: 100965433;  */

void FUN_1009653c4(void)

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



/* Entry: 100965434; end: 100965457;  */

undefined ** FUN_100965434(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100965458; end: 1009654d7;  */

void FUN_100965458(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11045d270;
  func_0x000107c613fc(&UNK_11045d270,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009654f8,puVar1);
  return;
}



/* Entry: 1009654d8; end: 1009654f7;  */

void FUN_1009654d8(void)

{
  func_0x000107c61168(&PTR_PTR_112e0be30);
  return;
}



/* Entry: 1009654f8; end: 1009655bf;  */

void FUN_1009654f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1009654d8();
  func_0x000107c613fc();
  puVar3 = &UNK_11045d320;
  func_0x000107c613fc(&UNK_11045d320,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x0001001ca524(6,0x100,0x60,1,0,0,&UNK_10d9e5580,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar3);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_11045d2c0;
  return;
}



/* Entry: 1009655c0; end: 1009655c7;  */

void FUN_1009655c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009655c8; end: 1009655f3;  */

void FUN_1009655c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009655f4; end: 10096561b;  */

undefined ** FUN_1009655f4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096561c; end: 10096565b;  */

void FUN_10096561c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100965600();
  FUN_100082720("PostableContentDestinationsDataRepositoryServicesServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x68,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096565c; end: 100965663;  */

void FUN_10096565c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f04934);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965664; end: 1009656e7;  */

void FUN_100965664(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f04934,param_2,&UNK_101f04938,param_2,&UNK_101f04960,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009656e8; end: 10096570b;  */

undefined ** FUN_1009656e8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096570c; end: 10096578b;  */

void FUN_10096570c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106c7748;
  func_0x000107c613fc(&UNK_1106c7748,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10096578c,puVar1);
  return;
}



/* Entry: 10096578c; end: 100965793;  */

void FUN_10096578c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fddcf0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fddcf0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c77e0;
  func_0x000107c613fc(&UNK_1106c77e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a8d0c4;
  FUN_10058fa64(&UNK_103a8d0c4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100965794; end: 10096588b;  */

void FUN_100965794(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fddcf0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fddcf0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c77e0;
  func_0x000107c613fc(&UNK_1106c77e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a8d0c4;
  FUN_10058fa64(&UNK_103a8d0c4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10096588c; end: 1009658af;  */

void FUN_10096588c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009658b0; end: 1009658c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009658b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar12 = &lStack_70;
  lVar10 = lVar1;
  FUN_1002baecc();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(long *)(lVar11 + _DAT_112fddd00) = lVar1;
  *(undefined8 *)(lVar11 + _DAT_112fddd08) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112fddd10) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_112fddd18) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_112fddd20) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112fddd28) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_112fddd30) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_112fddd38) = uVar8;
  puVar9 = PTR_s_init_1125d9248;
  lStack_70 = lVar11;
  lStack_68 = lVar10;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c61154(&lStack_70,puVar9);
  *param_1 = plVar12;
  return;
}



/* Entry: 1009658c4; end: 1009659ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009658c4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar2 = param_2;
  FUN_1002baecc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fddd00) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fddd08) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fddd10) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fddd18) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fddd20) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fddd28) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fddd30) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fddd38) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c61154(&lStack_70,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009659f0; end: 100965a77;  */

void FUN_1009659f0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100965a78; end: 100965a9f;  */

undefined ** FUN_100965a78(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100965aa0; end: 100965adf;  */

void FUN_100965aa0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100965a84();
  FUN_100082720("PreviewLazyServicesProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100965ae0; end: 100965ae7;  */

void FUN_100965ae0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e9dd30);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965ae8; end: 100965b6b;  */

void FUN_100965ae8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e9dd30,param_2,&UNK_101e9dd34,param_2,&UNK_101e9dd5c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965b6c; end: 100965b77;  */

undefined ** FUN_100965b6c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100965b78; end: 100965c03;  */

void FUN_100965b78(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100965c04,param_1);
  return;
}



/* Entry: 100965c04; end: 100965c0b;  */

void FUN_100965c04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  func_0x0001005e21cc();
  FUN_100965cd0();
  uVar2 = uVar1;
  FUN_1005e2264();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(uVar2,&UNK_101cfd7f4);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965c0c; end: 100965ccf;  */

void FUN_100965c0c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  func_0x0001005e21cc();
  FUN_100965cd0();
  uVar2 = uVar1;
  FUN_1005e2264();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(uVar2,&UNK_101cfd7f4,param_2,&UNK_101cfd7f8,param_2,&UNK_101cfd820,param_2);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965cd0; end: 100965ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100965cd0(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b568) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_11309b570) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b580) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100965ce4; end: 100965d6f;  */

void FUN_100965ce4(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100965d70,param_1);
  return;
}



/* Entry: 100965d70; end: 100965d77;  */

void FUN_100965d70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  func_0x0001005e21cc();
  FUN_100965e3c();
  uVar2 = uVar1;
  FUN_1005e2264();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(uVar2,&UNK_101cfdab0);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965d78; end: 100965e3b;  */

void FUN_100965d78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  func_0x0001005e21cc();
  FUN_100965e3c();
  uVar2 = uVar1;
  FUN_1005e2264();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(uVar2,&UNK_101cfdab0,param_2,&UNK_101cfdab4,param_2,&UNK_101cfdadc,param_2);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965e3c; end: 100965e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100965e3c(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b568) = 0x10;
  *(undefined8 *)(unaff_x20 + _DAT_11309b570) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b580) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100965e6c; end: 100965eab;  */

void FUN_100965e6c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100965e50();
  FUN_100082720("PrimaryLocationDeviceServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100965eac; end: 100965eb3;  */

void FUN_100965eac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cfdbd8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965eb4; end: 100965f37;  */

void FUN_100965eb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cfdbd8,param_2,&UNK_101cfdbdc,param_2,&UNK_101cfdc04,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965f38; end: 100965f5f;  */

undefined ** FUN_100965f38(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100965f60; end: 100965f9f;  */

void FUN_100965f60(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100965f44();
  FUN_100082720("ProcessedNotificationServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100965fa0; end: 100965fa7;  */

void FUN_100965fa0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101eb2560);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100965fa8; end: 10096602b;  */

void FUN_100965fa8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101eb2560,param_2,&UNK_101eb2564,param_2,&UNK_101eb258c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096602c; end: 10096607b;  */

undefined ** FUN_10096602c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096607c; end: 100966173;  */

void FUN_10096607c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fde6e8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fde6e8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c7e28;
  func_0x000107c613fc(&UNK_1106c7e28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a91da0;
  FUN_10058fa64(&UNK_103a91da0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100966174; end: 100966197;  */

void FUN_100966174(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100966198; end: 10096619f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100966198(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1002d9450();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112fde6f8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112fde700) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009661a0; end: 100966223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009661a0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1002d9450();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fde6f8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fde700) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 100966224; end: 100966227;  */

void FUN_100966224(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100966228; end: 100966253;  */

void FUN_100966228(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100966254; end: 10096627f;  */

void FUN_100966254(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100966280; end: 1009662bf;  */

void FUN_100966280(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100966264();
  FUN_100082720("PublicGroupsChatDeckTransitionServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x55,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009662c0; end: 1009662c7;  */

void FUN_1009662c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cc2ca0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009662c8; end: 10096634b;  */

void FUN_1009662c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cc2ca0,param_2,&UNK_101cc2ca4,param_2,&UNK_101cc2ccc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096634c; end: 10096636f;  */

undefined ** FUN_10096634c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100966370; end: 1009663ef;  */

void FUN_100966370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106c83c0;
  func_0x000107c613fc(&UNK_1106c83c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009663f0,puVar1);
  return;
}



/* Entry: 1009663f0; end: 1009663f7;  */

void FUN_1009663f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fdf040,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fdf040,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c8458;
  func_0x000107c613fc(&UNK_1106c8458,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a959a4;
  FUN_10058fa64(&UNK_103a959a4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009663f8; end: 1009664ef;  */

void FUN_1009663f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fdf040,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fdf040,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c8458;
  func_0x000107c613fc(&UNK_1106c8458,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a959a4;
  FUN_10058fa64(&UNK_103a959a4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009664f0; end: 100966513;  */

void FUN_1009664f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100966514; end: 100966527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100966514(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar12 = &lStack_70;
  lVar10 = lVar1;
  FUN_1002ccb9c();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(long *)(lVar11 + _DAT_112fdf050) = lVar1;
  *(undefined8 *)(lVar11 + _DAT_112fdf058) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112fdf060) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_112fdf068) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_112fdf070) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112fdf078) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_112fdf080) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_112fdf088) = uVar8;
  puVar9 = PTR_s_init_1125d9248;
  lStack_70 = lVar11;
  lStack_68 = lVar10;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c61154(&lStack_70,puVar9);
  *param_1 = plVar12;
  return;
}



/* Entry: 100966528; end: 100966653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100966528(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar2 = param_2;
  FUN_1002ccb9c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fdf050) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fdf058) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fdf060) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fdf068) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fdf070) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fdf078) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fdf080) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fdf088) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c61154(&lStack_70,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 100966654; end: 1009666db;  */

void FUN_100966654(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009666dc; end: 100966703;  */

undefined ** FUN_1009666dc(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100966704; end: 100966743;  */

void FUN_100966704(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009666e8();
  FUN_100082720("RuntimeServiceProviderWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100966744; end: 10096674b;  */

void FUN_100966744(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ed3784);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096674c; end: 1009667cf;  */

void FUN_10096674c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ed3784,param_2,&UNK_101ed3788,param_2,&UNK_101ed37b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009667d0; end: 1009667db;  */

undefined ** FUN_1009667d0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009667dc; end: 100966867;  */

void FUN_1009667dc(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100966868,param_1);
  return;
}



/* Entry: 100966868; end: 10096686f;  */

void FUN_100966868(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101cdc054);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100966870; end: 1009668f3;  */

void FUN_100966870(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101cdc054,param_2,FUN_1009668f4,param_2,&UNK_101cdc058,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009668f4; end: 10096691b;  */

void FUN_1009668f4(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10096691c; end: 100966927;  */

void FUN_10096691c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100293db8();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1009669d8(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}


