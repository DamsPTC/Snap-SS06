/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102123a1c; end: 102123a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102123a1c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e59f80) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102123a88; end: 102123ae7; -[_TtC37CallLogUIScopedFactoryServiceProvider23CallLogUIScopedServices init] */

void FUN_102123a88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallLogUIScopedFactoryServiceProvider.CallLogUIScopedServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102123ab4);
  (*pcVar1)();
}



/* Entry: 102123ae8; end: 102123af7; -[_TtC37CallLogUIScopedFactoryServiceProvider23CallLogUIScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102123ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e59f80));
  return;
}



/* Entry: 102123af8; end: 102123b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102123af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104cdd70;
  func_0x000107c613fc(&UNK_1104cdd70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102123e3c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102123b64; end: 102123bff;  */

void FUN_102123b64(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104cdc80;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104cdc80;
  return;
}



/* Entry: 102123c00; end: 102123c37;  */

void FUN_102123c00(long *param_1)

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



/* Entry: 102123c38; end: 102123c3f;  */

undefined8 FUN_102123c38(void)

{
  return 0x1b;
}



/* Entry: 102123c40; end: 102123d73;  */

void FUN_102123c40(undefined8 *param_1)

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
  puVar1 = &UNK_1104cdd98;
  func_0x000107c613fc(&UNK_1104cdd98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102123e14;
  func_0x00010058fa64(FUN_102123e14,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102123d74; end: 102123da3;  */

undefined ** FUN_102123d74(void)

{
  return &PTR_DAT_113066520;
}



/* Entry: 102123da4; end: 102123dc3;  */

void FUN_102123da4(void)

{
  func_0x000107c61168(&PTR_PTR_11281f468);
  return;
}



/* Entry: 102123dc4; end: 102123e13;  */

undefined1  [16] FUN_102123dc4(void)

{
  return ZEXT816(0x1104cdcd0);
}



/* Entry: 102123e14; end: 102123e3b;  */

void FUN_102123e14(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102123e3c; end: 102123e3f;  */

void FUN_102123e3c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102123e40; end: 102124073;  */

void FUN_102123e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e59fe8,&UNK_10da5f1b0);
  puVar1 = &UNK_1104cddd8;
  func_0x000107c613fc(&UNK_1104cddd8,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_9;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_2;
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102124074,puVar1);
  return;
}



/* Entry: 102124074; end: 1021240a7;  */

void FUN_102124074(void)

{
  long unaff_x20;
  
  func_0x000102123f44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1021240a8; end: 1021240b7;  */

undefined1  [16] FUN_1021240a8(void)

{
  return ZEXT816(0x1104cde00);
}



/* Entry: 1021240b8; end: 102124433;  */

void FUN_1021240b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e59ff8,&UNK_10da5f1f0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e5a000,&UNK_10da5f200);
  puVar2 = &UNK_1104cde48;
  func_0x000107c613fc(&UNK_1104cde48,0x60,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  *(undefined8 *)(puVar2 + 0x50) = param_10;
  *(undefined8 *)(puVar2 + 0x58) = param_11;
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
  uVar8 = 0x1021244cc;
  func_0x0001000823a8(0x1021244cc,puVar2);
  pcVar3 = "CallLogUIEntryPointWrapperServiceProvider";
  func_0x000100082720("CallLogUIEntryPointWrapperServiceProvider",0x29,2);
  FUN_1021252a0();
  func_0x000100082720("CallLogUIScopeGraphBridgeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102123c00;
  func_0x0001000823a8(FUN_102123c00,0);
  func_0x000100082720("CallLogUIScopedServicesCleanupRelayServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e5a008,&UNK_10da5f1f8);
  puVar2 = &UNK_1104cde70;
  func_0x000107c613fc(&UNK_1104cde70,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_102124500;
  func_0x0001000823a8(FUN_102124500,puVar2);
  func_0x000100082720("CallLogUIScopeInitializationPluginRegistryServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e59f88,&UNK_10da5efc0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x10212450c;
  func_0x0001000823a8(0x10212450c,pcVar5);
  func_0x000100082720("CallLogUIScopeInitializationServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112e59f78,&UNK_10da5efb0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102124514;
  func_0x0001000823a8(0x102124514,uVar6);
  func_0x000100082720("CallLogUIScopedServicesServiceProvider",0x26,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104cde98;
  func_0x000107c613fc(&UNK_1104cde98,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10212451c;
  func_0x0001000823a8(0x10212451c,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("CallLogUIScopeEntryPointProvider",0x20,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102124434; end: 1021244ff;  */

void FUN_102124434(void)

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



/* Entry: 102124500; end: 102124523;  */

void FUN_102124500(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102124a5c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("CallLogUIScopeInitializationPluginRegistryServiceProvider",0x39,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102124524; end: 102124847;  */

void FUN_102124524(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  FUN_102124988();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  FUN_102126c44();
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
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000102126718(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uStack_b0);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 102124848; end: 1021248cb;  */

void FUN_102124848(void)

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
  return;
}



/* Entry: 1021248cc; end: 1021248d3;  */

undefined8 FUN_1021248cc(void)

{
  return 0x1b;
}



/* Entry: 1021248d4; end: 102124957;  */

void FUN_1021248d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1021249c8,param_2,FUN_1021249cc,param_2,0x1021249f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102124958; end: 102124987;  */

undefined ** FUN_102124958(void)

{
  return &PTR_DAT_113066520;
}



/* Entry: 102124988; end: 1021249a7;  */

void FUN_102124988(void)

{
  func_0x000107c61168(&PTR_PTR_112e5a078);
  return;
}



/* Entry: 1021249a8; end: 1021249cb;  */

undefined1  [16] FUN_1021249a8(void)

{
  return ZEXT816(0x1104cdef0);
}



/* Entry: 1021249cc; end: 102124a1f;  */

void FUN_1021249cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102124a20; end: 102124a5b;  */

void FUN_102124a20(undefined8 *param_1,undefined8 param_2)

{
  FUN_102124a5c();
  func_0x0001000a7f38("CallLogUIScopeInitializationPluginRegistryServiceProvider",0x39,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102124a5c; end: 102124c47;  */

void FUN_102124a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cb00;
  ppuVar4 = &PTR_DAT_113066520;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e5a120;
  func_0x0001000285a8(0x112e5a120,&UNK_10da5f350);
  func_0x0001000a6ee8(&UNK_1104cdef0,"CallLogUIEntryPointWrapperScopeInitializationPluginKey",0x36,2
                      ,FUN_102124cbc,param_1,uVar2,&UNK_1104cdef0,&PTR_DAT_112e5a010);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104cdf40;
  func_0x000107c613fc(&UNK_1104cdf40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104ce150,"CallLogUIScopeGraphBridgeScopeInitializationPluginKey",0x35,2,
                      FUN_102124cc4,puVar3,uVar2,&UNK_1104ce150,&PTR_DAT_112e5a1b0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104cdf68;
  func_0x000107c613fc(&UNK_1104cdf68,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104cdd10,"CallLogUIScopedServicesScopeInitializationPluginKey",0x33,2,
                      FUN_102124dac,puVar3,uVar2,&UNK_1104cdd10,&PTR_DAT_112e59f90);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e5a128;
  func_0x0001000285a8(0x112e5a128,&UNK_10da5f358);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102124c48; end: 102124cbb;  */

void FUN_102124c48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102124de8;
  func_0x0001000823a8(0x102124de8,param_3);
  func_0x000100082720("CallLogUIEntryPointWrapperScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102124cbc; end: 102124cc3;  */

void FUN_102124cbc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102124de8;
  func_0x0001000823a8();
  func_0x000100082720("CallLogUIEntryPointWrapperScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102124cc4; end: 102124d03;  */

void FUN_102124cc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102125384(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CallLogUIScopeGraphBridgeScopeInitializationPluginProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102124d04; end: 102124dab;  */

void FUN_102124d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104cdf90;
  func_0x000107c613fc(&UNK_1104cdf90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102124de0;
  func_0x0001000823a8(FUN_102124de0,puVar1);
  func_0x000100082720("CallLogUIScopedServicesScopeInitializationPluginProvider",0x38,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102124dac; end: 102124db3;  */

void FUN_102124dac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104cdf90;
  func_0x000107c613fc(&UNK_1104cdf90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102124de0;
  func_0x0001000823a8(FUN_102124de0,puVar3);
  func_0x000100082720("CallLogUIScopedServicesScopeInitializationPluginProvider",0x38,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102124db4; end: 102124ddf;  */

void FUN_102124db4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102124de0; end: 102124def;  */

void FUN_102124de0(undefined8 *param_1)

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
  puVar1 = &UNK_1104cdd98;
  func_0x000107c613fc(&UNK_1104cdd98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102123e14;
  func_0x00010058fa64(FUN_102123e14,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102124df0; end: 102124e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102124df0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1021251b0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e5a130) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e5a138) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102124e78);
  (*pcVar1)();
}



/* Entry: 102124e78; end: 102124ed7; -[_TtC25CallLogUIScopeGraphBridge40CallLogUIScopeGraphBridgeSaberEntryPoint init] */

void FUN_102124e78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallLogUIScopeGraphBridge.CallLogUIScopeGraphBridgeSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102124ea4);
  (*pcVar1)();
}



/* Entry: 102124ed8; end: 102124f0f; -[_TtC25CallLogUIScopeGraphBridge40CallLogUIScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102124ef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102124ef8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102124ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5a130));
  return;
}



/* Entry: 102124f10; end: 102124f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102124f10(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e5a138),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e5a130));
  return;
}



/* Entry: 102124f38; end: 102124f57;  */

void FUN_102124f38(void)

{
  func_0x000107c61168(&PTR_PTR_11281f528);
  return;
}



/* Entry: 102124f58; end: 102124fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102124f58(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5a168) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e5a170);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102124fe0);
  (*pcVar2)();
}



/* Entry: 102124fe0; end: 1021250c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102124fe0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5a168);
  *(undefined **)(unaff_x20 + _DAT_112e5a168) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5a170);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e5a170))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104ce0b0;
  func_0x000107c613fc(&UNK_1104ce0b0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1021250cc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021250c8; end: 1021250d3;  */

void FUN_1021250c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021250d4; end: 102125133; -[_TtC25CallLogUIScopeGraphBridge38CallLogUIScopedServicesSaberEntryPoint init] */

void FUN_1021250d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallLogUIScopeGraphBridge.CallLogUIScopedServicesSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102125100);
  (*pcVar1)();
}



/* Entry: 102125134; end: 10212516b; -[_TtC25CallLogUIScopeGraphBridge38CallLogUIScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102125134(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5a170));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5a168));
  return;
}



/* Entry: 10212516c; end: 10212516f;  */

void FUN_10212516c(void)

{
  return;
}



/* Entry: 102125170; end: 10212518f;  */

void FUN_102125170(void)

{
  FUN_102124fe0();
  return;
}



/* Entry: 102125190; end: 1021251af;  */

void FUN_102125190(void)

{
  func_0x000107c61168(&PTR_PTR_11281f5f0);
  return;
}



/* Entry: 1021251b0; end: 10212527f;  */

undefined8 FUN_1021251b0(void)

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
  
  func_0x000107c61428(0x112e5a1a0,&uStack_40,0x20,0);
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
    FUN_102125280();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102125280; end: 10212529f;  */

void FUN_102125280(void)

{
  func_0x000107c61168(&PTR_PTR_11281f6b8);
  return;
}



/* Entry: 1021252a0; end: 10212530b;  */

void FUN_1021252a0(void)

{
  func_0x0001000285a8(0x112e5a1a8,&UNK_10da5f3f8);
  func_0x0001000823a8(0x1021252e0,0);
  return;
}



/* Entry: 10212530c; end: 102125347; -[_TtC25CallLogUIScopeGraphBridge33CallLogUIScopeGraphBridgeServices init] */

void FUN_10212530c(undefined8 param_1)

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



/* Entry: 102125348; end: 10212537b;  */

void FUN_102125348(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10212537c; end: 102125383;  */

undefined8 FUN_10212537c(void)

{
  return 0x1b;
}



/* Entry: 102125384; end: 1021254fb;  */

void FUN_102125384(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ce0f8;
  func_0x000107c613fc(&UNK_1104ce0f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021254fc,puVar1);
  return;
}



/* Entry: 1021254fc; end: 102125503;  */

void FUN_1021254fc(undefined8 *param_1)

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
  func_0x000107c61428(0x112e5a1a0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e5a1a0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104ce190;
  func_0x000107c613fc(&UNK_1104ce190,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1021255b0;
  func_0x00010058fa64(0x1021255b0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102125504; end: 10212555f;  */

void FUN_102125504(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e5a1a0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e5a1a0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102125560; end: 1021255b7;  */

undefined ** FUN_102125560(void)

{
  return &PTR_DAT_113066520;
}



/* Entry: 1021255b8; end: 1021255ff; -[SCCallLogUIScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021255b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5a200;
  func_0x000107c61428(param_1 + _DAT_112e5a200,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102125600; end: 102125657; -[SCCallLogUIScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102125600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5a200;
  func_0x000107c61428(param_1 + _DAT_112e5a200,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102125658; end: 10212569f; -[SCCallLogUIScopeGraphBridgeSaberEntryPoint callLogUIScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102125658(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5a208;
  func_0x000107c61428(param_1 + _DAT_112e5a208,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1021256a0; end: 102125703; -[SCCallLogUIScopeGraphBridgeSaberEntryPoint setCallLogUIScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021256a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5a208;
  func_0x000107c61428(param_1 + _DAT_112e5a208,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102125704; end: 102125837;  */

/* WARNING: Possible PIC construction at 0x0001021257bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021257d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021257f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021257c0) */
/* WARNING: Removing unreachable block (ram,0x0001021257dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102125704(void)

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
  func_0x000107c3efb0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102124f38();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1021251b0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102125838);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e5a130) = lVar5;
    *(long *)(lVar4 + _DAT_112e5a138) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102125838; end: 10212585f; -[SCCallLogUIScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102125838(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102125704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102125860; end: 1021258a3; -[SCCallLogUIScopeGraphBridgeSaberEntryPoint end] */

void FUN_102125860(undefined8 param_1)

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



/* Entry: 1021258a4; end: 102125a3b;  */

void FUN_1021258a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0f9c510)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f063af0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CallLogUIScopeGraphBridge/SCCallLogUIScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4a,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102125a3c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52f44();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102125a3c; end: 102125ae7; -[SCCallLogUIScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102125a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021258a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102125ae8; end: 102125b53; -[SCCallLogUIScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102125ae8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5a200,0);
  *(undefined8 *)(param_1 + _DAT_112e5a208) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5a210) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102125b54; end: 102125b87;  */

void FUN_102125b54(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102125b88; end: 102125bcf; -[SCCallLogUIScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102125bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102125bb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102125b88(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5a200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5a208));
  return;
}



/* Entry: 102125bd0; end: 102125bef;  */

void FUN_102125bd0(void)

{
  func_0x000107c61168(&PTR_PTR_11281f768);
  return;
}



/* Entry: 102125bf0; end: 102125c37; -[SCCallLogUIScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102125bf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5a240;
  func_0x000107c61428(param_1 + _DAT_112e5a240,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102125c38; end: 102125c8f; -[SCCallLogUIScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102125c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5a240;
  func_0x000107c61428(param_1 + _DAT_112e5a240,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102125c90; end: 102125d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102125c90(undefined8 param_1,long param_2)

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
    FUN_102125190();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e5a168) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102125d68);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e5a170);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5a248);
    *(long **)(unaff_x20 + _DAT_112e5a248) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102125d68; end: 102125d8f; -[SCCallLogUIScopedServicesSaberEntryPoint begin] */

void FUN_102125d68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102125c90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102125d90; end: 102125f07;  */

/* WARNING: Possible PIC construction at 0x000102125df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102125e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102125dfc) */
/* WARNING: Removing unreachable block (ram,0x000102125e94) */
/* WARNING: Removing unreachable block (ram,0x000102125eac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102125d90(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5a248);
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



/* Entry: 102125f08; end: 102125f0f;  */

void FUN_102125f08(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102125f10; end: 102125f43; -[SCCallLogUIScopedServicesSaberEntryPoint end] */

void FUN_102125f10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102125d90();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102125f44; end: 102126063;  */

void FUN_102125f44(long param_1,long param_2,long param_3)

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
                        "CallLogUIScopeGraphBridge/SCCallLogUIScopedServicesSaberEntryPoint.swift",
                        0x48,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102126064);
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



/* Entry: 102126064; end: 10212610f; -[SCCallLogUIScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102126064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102125f44(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102126110; end: 10212616f; -[SCCallLogUIScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102126110(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5a240,0);
  *(undefined8 *)(param_1 + _DAT_112e5a248) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102126170; end: 1021261a3;  */

void FUN_102126170(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021261a4; end: 1021261db; -[SCCallLogUIScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021261a4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5a240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5a248));
  return;
}



/* Entry: 1021261dc; end: 1021261fb;  */

void FUN_1021261dc(void)

{
  func_0x000107c61168(&PTR_PTR_11281f830);
  return;
}



/* Entry: 1021261fc; end: 102126c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1021261fc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,long param_7,long param_8,long param_9,long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 unaff_x20;
  undefined8 uVar15;
  
  func_0x000107c613fc();
  lVar1 = param_4;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      lVar2 = param_2;
      func_0x000107c4141c();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c41414();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) {
        lVar3 = param_6;
        func_0x000107c3cfe0();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 == 0) {
          func_0x000107c615e8(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar3 = lVar4;
          func_0x000107c4c1dc();
          func_0x000107c61180();
          func_0x000107c615e8(lVar4);
          lVar4 = lVar2;
          func_0x000107c409cc();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar5 = param_8;
            func_0x000107c439dc();
            func_0x000107c61180();
            puVar6 = PTR_PTR_1126b0c98;
            func_0x000107c610f8(PTR_PTR_1126b0c98);
            func_0x000107c47f1c();
            lVar7 = lVar5;
            (**(code **)(lVar5 + 0x10))(lVar5,puVar6);
            func_0x000107c61180();
            func_0x000107c61170(puVar6);
            func_0x000107c60bd0(lVar5);
            lVar5 = lVar7;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(lVar7);
            if (lVar5 == 0) {
              func_0x000107c615e8(lVar1);
              func_0x000107c615e8(lVar2);
              func_0x000107c615e8(lVar3);
              func_0x000107c615e8(lVar4);
            }
            else {
              lVar7 = param_9;
              func_0x000107c4453c();
              func_0x000107c61180();
              lVar8 = lVar7;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar7);
              if (lVar8 == 0) {
                func_0x000107c615e8(lVar1);
                func_0x000107c615e8(lVar2);
                func_0x000107c615e8(lVar3);
                func_0x000107c615e8(lVar4);
              }
              else {
                lVar7 = param_10;
                func_0x000107c3fa04();
                func_0x000107c61180();
                if (lVar7 != 0) {
                  lVar9 = lVar4;
                  func_0x000107c508d0();
                  func_0x000107c61180();
                  lVar10 = param_4;
                  func_0x000107c5dbd4(param_4);
                  func_0x000107c61180();
                  lVar11 = lVar9;
                  func_0x000107c40974();
                  func_0x000107c61180();
                  func_0x000107c61170(lVar10);
                  func_0x0001000285a8(0x112e5a278,&UNK_10da5f580);
                  uVar15 = *(undefined8 *)(param_5 + _DAT_112fedfd0);
                  uVar12 = param_1;
                  func_0x000107c61174();
                  func_0x000107c615f0(lVar1);
                  func_0x000107c615f0(lVar11);
                  func_0x000107c61174();
                  uVar13 = uVar15;
                  func_0x0001000bda74();
                  func_0x000107c61170(uVar15);
                  uVar15 = *(undefined8 *)(param_7 + _DAT_112f0eec8);
                  lVar14 = 0;
                  func_0x0001021271e0();
                  func_0x000107c613fc();
                  *(undefined8 *)(lVar14 + 0x10) = uVar12;
                  *(long *)(lVar14 + 0x18) = lVar1;
                  *(undefined8 *)(lVar14 + 0x20) = uVar13;
                  *(long *)(lVar14 + 0x28) = lVar11;
                  *(long *)(lVar14 + 0x30) = lVar3;
                  *(undefined8 *)(lVar14 + 0x38) = uVar15;
                  func_0x0001005f60b4(0);
                  func_0x000107c613fc();
                  func_0x000107c615f0(lVar3);
                  func_0x000107c6157c(uVar15);
                  func_0x000107c615f0(lVar5);
                  func_0x000107c615f0(lVar8);
                  lVar10 = lVar7;
                  func_0x000107c615f0();
                  func_0x0001005f60d4();
                  *(long *)(lVar14 + 0x40) = lVar10;
                  *(long *)(lVar14 + 0x48) = lVar5;
                  *(long *)(lVar14 + 0x50) = lVar8;
                  *(long *)(lVar14 + 0x58) = lVar7;
                  FUN_102126c64();
                  func_0x000107c615e8(lVar1);
                  func_0x000107c615e8(lVar2);
                  func_0x000107c615e8(lVar3);
                  func_0x000107c615e8(lVar4);
                  func_0x000107c615e8(lVar5);
                  func_0x000107c615e8(lVar8);
                  func_0x000107c615e8(lVar7);
                  func_0x000107c615e8(lVar9);
                  func_0x000107c615e8(lVar11);
                  func_0x000107c61574(lVar14);
                  goto LAB_10212661c;
                }
                func_0x000107c615e8(lVar1);
                func_0x000107c615e8(lVar2);
                func_0x000107c615e8(lVar3);
                func_0x000107c615e8(lVar4);
                func_0x000107c615e8(lVar5);
                lVar5 = lVar8;
              }
              func_0x000107c615e8(lVar5);
            }
            goto LAB_10212661c;
          }
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(lVar2);
          lVar1 = lVar3;
        }
      }
      func_0x000107c615e8(lVar1);
    }
  }
LAB_10212661c:
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  return unaff_x20;
}



/* Entry: 102126c28; end: 102126c43;  */

void FUN_102126c28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102126c44; end: 102126c63;  */

void FUN_102126c44(void)

{
  func_0x000107c61168(&PTR_PTR_112e5a2c0);
  return;
}



/* Entry: 102126c64; end: 102126e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102126c64(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  
  ppuVar4 = &puStack_b0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c41408(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126a9ec8;
  func_0x000107c610f8(PTR_PTR_1126a9ec8);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_102127200;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_102127210;
  puStack_68 = &UNK_1104ce288;
  ppuVar3 = &puStack_80;
  func_0x000107c60bc4(ppuVar3);
  uStack_90 = 0x102127208;
  puStack_b0 = puVar5;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100ec2630;
  puStack_98 = &UNK_1104ce2b0;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61580();
  func_0x000107c46408(puVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(unaff_x20);
  func_0x000107c61574(unaff_x20);
  puVar5 = PTR_PTR_1126a9ed0;
  func_0x000107c610f8();
  func_0x000107c49520();
  puVar6 = puVar5;
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c5448c();
    func_0x000107c615e8(puVar6);
  }
  func_0x000107c3e2c8(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307b490));
  func_0x000102126f88();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 102126e08; end: 102126ed3;  */

void FUN_102126e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x00010446de8c(0);
    func_0x00010446dbbc(param_3,param_4);
    func_0x000107c5ba74(lStack_58);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102126ed4; end: 1021270c7;  */

void FUN_102126ed4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    uVar1 = 0;
    func_0x00010446de8c(0);
    func_0x00010446db10();
    func_0x000107c5ba74(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1021270c8; end: 10212715b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021270c8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (*param_1 != 0) {
    return;
  }
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c41868(*(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_11307b490));
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    func_0x000107c6157c(uVar1);
    func_0x000100c82230();
    func_0x000107c61574(param_2);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 10212715c; end: 1021271ff;  */

void FUN_10212715c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102127200; end: 10212720f;  */

void FUN_102127200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x00010446de8c(0);
    func_0x00010446dbbc(param_3,param_4);
    func_0x000107c5ba74(lStack_58);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102127210; end: 1021272a3;  */

/* WARNING: Possible PIC construction at 0x000102127284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102127288) */

void FUN_102127210(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar4 = uVar3;
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3,param_3,uVar4,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1021272a4; end: 1021272bf;  */

void FUN_1021272a4(long param_1,long param_2)

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



/* Entry: 1021272c0; end: 102127307;  */

undefined8 FUN_1021272c0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e5a400;
  func_0x0001000285a8(0x112e5a400,&UNK_10da5f638);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102127308; end: 10212732f;  */

undefined8 * FUN_102127308(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102127330; end: 10212739b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102127330(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5a410) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10212739c; end: 1021273fb; -[_TtC47ProfileHeaderButtonScopedFactoryServiceProvider35SCProfileHeaderButtonScopedServices init] */

void FUN_10212739c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ProfileHeaderButtonScopedFactoryServiceProvider.SCProfileHeaderButtonScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021273c8);
  (*pcVar1)();
}


