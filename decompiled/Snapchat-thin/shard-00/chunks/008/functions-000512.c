/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009d1efc; end: 1009d1f03;  */

void FUN_1009d1efc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b0e88);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d1f04; end: 1009d1f87;  */

void FUN_1009d1f04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b0e88,param_2,FUN_1009d1f88,param_2,&UNK_1014b0e8c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d1f88; end: 1009d1faf;  */

void FUN_1009d1f88(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009d1fb0; end: 1009d1fb7;  */

void FUN_1009d1fb0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100083b20(&uStack_48);
  FUN_1000958f0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  FUN_1009d2054(0);
  func_0x000107c613fc();
  func_0x000107c61580(uVar1,2);
  FUN_1009d2074(uStack_48,uVar1);
  *(undefined8 *)(lVar2 + 0x10) = uStack_48;
  *param_1 = lVar2;
  return;
}



/* Entry: 1009d1fb8; end: 1009d2053;  */

void FUN_1009d1fb8(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1000958f0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = param_3;
  FUN_1009d2054(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_3,2);
  FUN_1009d2074(uStack_48,param_3);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1009d2054; end: 1009d2073;  */

void FUN_1009d2054(void)

{
  func_0x000107c61168(&PTR_PTR_112dde4c0);
  return;
}



/* Entry: 1009d2074; end: 1009d214b;  */

void FUN_1009d2074(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c6157c(param_2);
  func_0x0001009d20cc(&UNK_101980d84,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61578(param_2,2);
  return;
}



/* Entry: 1009d214c; end: 1009d2173;  */

void FUN_1009d214c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112e64758 = puVar1;
  return;
}



/* Entry: 1009d2174; end: 1009d218f;  */

void FUN_1009d2174(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1009d2190; end: 1009d21cb;  */

void FUN_1009d2190(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001009d21c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1009d21cc; end: 1009d21d7;  */

undefined ** FUN_1009d21cc(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d21d8; end: 1009d2263;  */

void FUN_1009d21d8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d2264,param_1);
  return;
}



/* Entry: 1009d2264; end: 1009d226b;  */

void FUN_1009d2264(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_100933ae0();
  FUN_10094a100();
  uVar2 = uVar1;
  FUN_100933b54();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(uVar2,&UNK_1014b8de8);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d226c; end: 1009d232f;  */

void FUN_1009d226c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_100933ae0();
  FUN_10094a100();
  uVar2 = uVar1;
  FUN_100933b54();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(uVar2,&UNK_1014b8de8,param_2,&UNK_1014b8dec,param_2,&UNK_1014b8e14,param_2);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d2330; end: 1009d2357;  */

undefined ** FUN_1009d2330(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d2358; end: 1009d2397;  */

void FUN_1009d2358(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009d233c();
  FUN_100082720("CAIDServiceProviderWrapperScopeInitializationPluginProvider",0x3b,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d2398; end: 1009d239f;  */

void FUN_1009d2398(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b90e8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d23a0; end: 1009d2423;  */

void FUN_1009d23a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b90e8,param_2,&UNK_1014b90ec,param_2,&UNK_1014b9114,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d2424; end: 1009d2447;  */

undefined ** FUN_1009d2424(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d2448; end: 1009d24c7;  */

void FUN_1009d2448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073db60;
  func_0x000107c613fc(&UNK_11073db60,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d24c8,puVar1);
  return;
}



/* Entry: 1009d24c8; end: 1009d24cf;  */

void FUN_1009d24c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113053fd8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113053fd8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073dbf8;
  func_0x000107c613fc(&UNK_11073dbf8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1040729a0;
  FUN_10058fa64(&UNK_1040729a0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d24d0; end: 1009d25c7;  */

void FUN_1009d24d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113053fd8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113053fd8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073dbf8;
  func_0x000107c613fc(&UNK_11073dbf8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1040729a0;
  FUN_10058fa64(&UNK_1040729a0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d25c8; end: 1009d25eb;  */

void FUN_1009d25c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d25ec; end: 1009d25ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d25ec(undefined8 *param_1)

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
  FUN_10009e958();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(long *)(lVar11 + _DAT_113053fe8) = lVar1;
  *(undefined8 *)(lVar11 + _DAT_113053ff0) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_113053ff8) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_113054000) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_113054008) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_113054010) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_113054018) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_113054020) = uVar8;
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



/* Entry: 1009d2600; end: 1009d272b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d2600(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10009e958();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113053fe8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113053ff0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113053ff8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113054000) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113054008) = param_6;
  *(undefined8 *)(lVar3 + _DAT_113054010) = param_7;
  *(undefined8 *)(lVar3 + _DAT_113054018) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113054020) = param_9;
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



/* Entry: 1009d272c; end: 1009d27d7;  */

undefined8 FUN_1009d272c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1009d27d8; end: 1009d27fb;  */

undefined ** FUN_1009d27d8(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d27fc; end: 1009d287b;  */

void FUN_1009d27fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073e030;
  func_0x000107c613fc(&UNK_11073e030,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(0x1009d2884,puVar1);
  return;
}



/* Entry: 1009d287c; end: 1009d288b;  */

void FUN_1009d287c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1009d288c; end: 1009d2983;  */

void FUN_1009d288c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130549d0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130549d0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073e0c8;
  func_0x000107c613fc(&UNK_11073e0c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104076f60;
  FUN_10058fa64(&UNK_104076f60,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d2984; end: 1009d29a7;  */

void FUN_1009d2984(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d29a8; end: 1009d29b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d29a8(undefined8 *param_1)

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
  FUN_10009f970();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_1130549e0) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_1130549e8) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_1130549f0) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_1130549f8) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_113054a00) = uVar9;
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



/* Entry: 1009d29b8; end: 1009d2a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d29b8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10009f970();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_1130549e0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_1130549e8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_1130549f0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_1130549f8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113054a00) = param_6;
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



/* Entry: 1009d2a94; end: 1009d2b03;  */

void FUN_1009d2a94(void)

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



/* Entry: 1009d2b04; end: 1009d2b27;  */

undefined ** FUN_1009d2b04(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d2b28; end: 1009d2ba7;  */

void FUN_1009d2b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073e258;
  func_0x000107c613fc(&UNK_11073e258,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d2ccc,puVar1);
  return;
}



/* Entry: 1009d2ba8; end: 1009d2baf;  */

void FUN_1009d2ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1009d2bb0; end: 1009d2ccb; -[SCNDuplexDuplexClientCppProxy registerHandler:handler:queue:] */

void FUN_1009d2bb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  FUN_1009d2ba8();
  FUN_1009d2df0();
  func_0x0001009d2df8();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001009d2e00(auStack_58);
  FUN_1009d2f84(auStack_68,param_4);
  FUN_10049e05c(auStack_78,param_5);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_58,auStack_68,auStack_78);
  FUN_1009d41fc();
  FUN_10057201c(auStack_68);
  func_0x000107c60ca0(auStack_58);
  func_0x0001009d4204();
  func_0x0001009d420c();
  FUN_10049e91c();
  return;
}



/* Entry: 1009d2ccc; end: 1009d2cd3;  */

void FUN_1009d2ccc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113055280,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113055280,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073e2f0;
  func_0x000107c613fc(&UNK_11073e2f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104079124;
  FUN_10058fa64(&UNK_104079124,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d2cd4; end: 1009d2dcb;  */

void FUN_1009d2cd4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113055280,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113055280,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073e2f0;
  func_0x000107c613fc(&UNK_11073e2f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104079124;
  FUN_10058fa64(&UNK_104079124,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d2dcc; end: 1009d2def;  */

void FUN_1009d2dcc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d2df0; end: 1009d2e17;  */

void FUN_1009d2df0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1009d2e18; end: 1009d2f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d2e18(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10009cdf8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113055290) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113055298) = param_3;
  *(undefined8 *)(lVar3 + _DAT_1130552a0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_1130552a8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_1130552b0) = param_6;
  *(undefined8 *)(lVar3 + _DAT_1130552b8) = param_7;
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



/* Entry: 1009d2f0c; end: 1009d2f83;  */

void FUN_1009d2f0c(void)

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



/* Entry: 1009d2f84; end: 1009d3077;  */

void FUN_1009d2f84(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126db3c8;
    func_0x000107c61158(PTR_PTR_1126db3c8);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110ab9e40;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_1009d3614);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_1009d3718(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_1009d3708();
        } while (extraout_w10 != 0);
      }
    }
  }
  FUN_1009d3974();
  return;
}



/* Entry: 1009d3078; end: 1009d309b;  */

undefined ** FUN_1009d3078(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d309c; end: 1009d311b;  */

void FUN_1009d309c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073e4d0;
  func_0x000107c613fc(&UNK_11073e4d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d311c,puVar1);
  return;
}



/* Entry: 1009d311c; end: 1009d3123;  */

void FUN_1009d311c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113055ec0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113055ec0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073e568;
  func_0x000107c613fc(&UNK_11073e568,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10407c9f4;
  FUN_10058fa64(&UNK_10407c9f4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d3124; end: 1009d321b;  */

void FUN_1009d3124(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113055ec0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113055ec0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073e568;
  func_0x000107c613fc(&UNK_11073e568,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10407c9f4;
  FUN_10058fa64(&UNK_10407c9f4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d321c; end: 1009d323f;  */

void FUN_1009d321c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d3240; end: 1009d3387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d3240(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_10009ff18();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113055ed0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113055ed8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113055ee0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113055ee8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113055ef0) = param_6;
  *(undefined8 *)(lVar3 + _DAT_113055ef8) = param_7;
  *(undefined8 *)(lVar3 + _DAT_113055f00) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113055f08) = param_9;
  *(undefined8 *)(lVar3 + _DAT_113055f10) = param_10;
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
  func_0x000107c6157c(param_10);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1009d3388; end: 1009d344b;  */

void FUN_1009d3388(void)

{
  long unaff_x20;
  
  FUN_1009d3240(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1009d344c; end: 1009d346f;  */

undefined ** FUN_1009d344c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d3470; end: 1009d34ef;  */

void FUN_1009d3470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073e788;
  func_0x000107c613fc(&UNK_11073e788,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d34f0,puVar1);
  return;
}



/* Entry: 1009d34f0; end: 1009d34f7;  */

void FUN_1009d34f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113056d50,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113056d50,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073e820;
  func_0x000107c613fc(&UNK_11073e820,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104081464;
  FUN_10058fa64(&UNK_104081464,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d34f8; end: 1009d35ef;  */

void FUN_1009d34f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113056d50,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113056d50,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073e820;
  func_0x000107c613fc(&UNK_11073e820,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104081464;
  FUN_10058fa64(&UNK_104081464,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d35f0; end: 1009d3613;  */

void FUN_1009d35f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d3614; end: 1009d3707;  */

void FUN_1009d3614(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ab9e80;
  puVar1[3] = &PTR_DAT_110ab9ef8;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_1009d3708();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110ab9ed0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1009d3718(&uStack_50);
  return;
}



/* Entry: 1009d3708; end: 1009d3717;  */

void FUN_1009d3708(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1009d3718; end: 1009d373f;  */

long FUN_1009d3718(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1009d3740; end: 1009d3747;  */

void FUN_1009d3740(void)

{
  return;
}



/* Entry: 1009d3748; end: 1009d38c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d3748(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_10009a718();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113056d60) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113056d68) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113056d70) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113056d78) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113056d80) = param_6;
  *(undefined8 *)(lVar3 + _DAT_113056d88) = param_7;
  *(undefined8 *)(lVar3 + _DAT_113056d90) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113056d98) = param_9;
  *(undefined8 *)(lVar3 + _DAT_113056da0) = param_10;
  *(undefined8 *)(lVar3 + _DAT_113056da8) = param_11;
  *(undefined8 *)(lVar3 + _DAT_113056db0) = param_12;
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
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1009d38c4; end: 1009d3973;  */

void FUN_1009d38c4(void)

{
  long unaff_x20;
  
  FUN_1009d3748(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1009d3974; end: 1009d397b;  */

void FUN_1009d3974(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1009d397c; end: 1009d39a7;  */

void FUN_1009d397c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d39a8; end: 1009d39b3;  */

undefined ** FUN_1009d39a8(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d39b4; end: 1009d3a3f;  */

void FUN_1009d39b4(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d3a40,param_1);
  return;
}



/* Entry: 1009d3a40; end: 1009d3a47;  */

void FUN_1009d3a40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  func_0x0001000ab080(0);
  uVar1 = 0;
  FUN_1009d3b30();
  FUN_1009d3b50();
  uVar2 = uVar1;
  func_0x0001009d3ba4();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  FUN_1000ab100();
  func_0x000107c61170(uVar2);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(uVar1,&UNK_1014aea4c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d3a48; end: 1009d3b2f;  */

void FUN_1009d3a48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  func_0x0001000ab080(0);
  uVar1 = 0;
  FUN_1009d3b30();
  FUN_1009d3b50();
  uVar2 = uVar1;
  func_0x0001009d3ba4();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  FUN_1000ab100();
  func_0x000107c61170(uVar2);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(uVar1,&UNK_1014aea4c,param_2,&UNK_1014aea50,param_2,&UNK_1014aea78,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d3b30; end: 1009d3b4f;  */

void FUN_1009d3b30(void)

{
  func_0x000107c61168(&PTR_PTR_1129dfec8);
  return;
}



/* Entry: 1009d3b50; end: 1009d3b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d3b50(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309abe0) = 5;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1009d3b58; end: 1009d3c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d3b58(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309abe0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1009d3c0c; end: 1009d3c2f;  */

undefined ** FUN_1009d3c0c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d3c30; end: 1009d3caf;  */

void FUN_1009d3c30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073e9d8;
  func_0x000107c613fc(&UNK_11073e9d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d3cb0,puVar1);
  return;
}



/* Entry: 1009d3cb0; end: 1009d3cb7;  */

void FUN_1009d3cb0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130577c8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130577c8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073ea70;
  func_0x000107c613fc(&UNK_11073ea70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1040850d4;
  FUN_10058fa64(&UNK_1040850d4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d3cb8; end: 1009d3daf;  */

void FUN_1009d3cb8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130577c8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130577c8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073ea70;
  func_0x000107c613fc(&UNK_11073ea70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1040850d4;
  FUN_10058fa64(&UNK_1040850d4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d3db0; end: 1009d3dd3;  */

void FUN_1009d3db0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d3dd4; end: 1009d3ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d3dd4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_1000a2d68();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_1130577d8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_1130577e0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_1130577e8) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009d3de0; end: 1009d3e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d3de0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_1000a2d68();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_1130577d8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_1130577e0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_1130577e8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d3e84; end: 1009d3ee3;  */

void FUN_1009d3e84(void)

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



/* Entry: 1009d3ee4; end: 1009d3eef;  */

undefined ** FUN_1009d3ee4(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d3ef0; end: 1009d3f7b;  */

void FUN_1009d3ef0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d3f7c,param_1);
  return;
}



/* Entry: 1009d3f7c; end: 1009d3f83;  */

void FUN_1009d3f7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014aebc0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d3f84; end: 1009d4007;  */

void FUN_1009d3f84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014aebc0,param_2,FUN_1009d4008,param_2,&UNK_1014aebc4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d4008; end: 1009d402f;  */

void FUN_1009d4008(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009d4030; end: 1009d403b;  */

void FUN_1009d4030(undefined8 *param_1)

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
  FUN_10009daf0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1009d4100(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009d403c; end: 1009d40eb;  */

void FUN_1009d403c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10009daf0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1009d4100(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009d40ec; end: 1009d40ff;  */

void FUN_1009d40ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1009d4100; end: 1009d41fb;  */

void FUN_1009d4100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  FUN_1000285a8(0x112da5238,&UNK_10d94a700);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  FUN_10025a71c();
  puVar1 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001009d4240(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  func_0x000107c61174();
  FUN_1009d4260();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c6157c();
  FUN_1009d4298();
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1009d41fc; end: 1009d4213;  */

void FUN_1009d41fc(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000008;
  FUN_10046e218();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1009d4214; end: 1009d425f;  */

void FUN_1009d4214(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d4260; end: 1009d4297;  */

void FUN_1009d4260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1009d4298; end: 1009d439f;  */

void FUN_1009d4298(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  puStack_60 = (undefined *)0x100a47fb0;
  puStack_58 = (undefined *)0x0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100a47ee4;
  puStack_68 = &UNK_110711038;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  puVar3 = &UNK_110711070;
  func_0x000107c613fc(&UNK_110711070,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puStack_60 = &UNK_100c164d8;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100ba5314;
  puStack_68 = &UNK_110711088;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c42c14(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1009d43a0; end: 1009d43b7;  */

void FUN_1009d43a0(long param_1,long param_2)

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



/* Entry: 1009d43b8; end: 1009d43eb;  */

void FUN_1009d43b8(void)

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



/* Entry: 1009d43ec; end: 1009d4547; -[SCDuplexSyncTriggerServiceImpl registerPayloadType:handler:] */

/* WARNING: Possible PIC construction at 0x0001009d4460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009d44b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009d4504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009d44bc) */
/* WARNING: Removing unreachable block (ram,0x0001009d4464) */
/* WARNING: Removing unreachable block (ram,0x0001009d44c4) */
/* WARNING: Removing unreachable block (ram,0x0001009d4470) */
/* WARNING: Removing unreachable block (ram,0x0001009d4508) */

void FUN_1009d43ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_4);
  if (((int)param_3 != 0) && (param_4 != 0)) {
    func_0x000107c611ec(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c4d9c0(uVar2,param_2,puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1009d4548; end: 1009d4553;  */

undefined ** FUN_1009d4548(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d4554; end: 1009d45df;  */

void FUN_1009d4554(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d45e0,param_1);
  return;
}



/* Entry: 1009d45e0; end: 1009d45e7;  */

void FUN_1009d45e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_1000faf74();
  FUN_1009d46ac();
  uVar2 = uVar1;
  FUN_1000faff4();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(uVar2,&UNK_1014ad160);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d45e8; end: 1009d46ab;  */

void FUN_1009d45e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_1000faf74();
  FUN_1009d46ac();
  uVar2 = uVar1;
  FUN_1000faff4();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(uVar2,&UNK_1014ad160,param_2,&UNK_1014ad164,param_2,&UNK_1014ad18c,param_2);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


