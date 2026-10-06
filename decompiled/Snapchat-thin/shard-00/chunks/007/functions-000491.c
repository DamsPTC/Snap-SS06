/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10099f664; end: 10099f6a3;  */

void FUN_10099f664(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099f648();
  FUN_100082720("CloudSyncDataCapServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10099f6a4; end: 10099f6ab;  */

void FUN_10099f6a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3a084);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099f6ac; end: 10099f72f;  */

void FUN_10099f6ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3a084,param_2,&UNK_101a3a088,param_2,&UNK_101a3a0b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099f730; end: 10099f753;  */

undefined ** FUN_10099f730(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10099f754; end: 10099f7d3;  */

void FUN_10099f754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110716b80;
  func_0x000107c613fc(&UNK_110716b80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10099f7d4,puVar1);
  return;
}



/* Entry: 10099f7d4; end: 10099f7db;  */

void FUN_10099f7d4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113017498,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113017498,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110716c18;
  func_0x000107c613fc(&UNK_110716c18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e30de8;
  FUN_10058fa64(&UNK_103e30de8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10099f7dc; end: 10099f8d3;  */

void FUN_10099f7dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113017498,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113017498,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110716c18;
  func_0x000107c613fc(&UNK_110716c18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e30de8;
  FUN_10058fa64(&UNK_103e30de8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10099f8d4; end: 10099f8f7;  */

void FUN_10099f8d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10099f8f8; end: 10099fa3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10099f8f8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10021b470();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_1130174a8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_1130174b0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_1130174b8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_1130174c0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_1130174c8) = param_6;
  *(undefined8 *)(lVar3 + _DAT_1130174d0) = param_7;
  *(undefined8 *)(lVar3 + _DAT_1130174d8) = param_8;
  *(undefined8 *)(lVar3 + _DAT_1130174e0) = param_9;
  *(undefined8 *)(lVar3 + _DAT_1130174e8) = param_10;
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



/* Entry: 10099fa40; end: 10099fb03;  */

void FUN_10099fa40(void)

{
  long unaff_x20;
  
  FUN_10099f8f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10099fb04; end: 10099fb53;  */

undefined ** FUN_10099fb04(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10099fb54; end: 10099fc4b;  */

void FUN_10099fb54(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113017c38,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113017c38,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110716de0;
  func_0x000107c613fc(&UNK_110716de0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e33568;
  FUN_10058fa64(&UNK_103e33568,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10099fc4c; end: 10099fc6f;  */

void FUN_10099fc4c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10099fc70; end: 10099fc77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10099fc70(undefined8 *param_1)

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
  FUN_10022eccc();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_113017c48) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_113017c50) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 10099fc78; end: 10099fcfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10099fc78(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10022eccc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113017c48) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113017c50) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10099fcfc; end: 10099fcff;  */

void FUN_10099fcfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10099fd00; end: 10099fd2b;  */

void FUN_10099fd00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10099fd2c; end: 10099fd53;  */

void FUN_10099fd2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10099fd54; end: 10099fdd3;  */

void FUN_10099fd54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110717030;
  func_0x000107c613fc(&UNK_110717030,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10099fdd4,puVar1);
  return;
}



/* Entry: 10099fdd4; end: 10099fddb;  */

void FUN_10099fdd4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113018170,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113018170,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107170c8;
  func_0x000107c613fc(&UNK_1107170c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e34c80;
  FUN_10058fa64(&UNK_103e34c80,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10099fddc; end: 10099fed3;  */

void FUN_10099fddc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113018170,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113018170,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107170c8;
  func_0x000107c613fc(&UNK_1107170c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e34c80;
  FUN_10058fa64(&UNK_103e34c80,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10099fed4; end: 10099fef7;  */

void FUN_10099fed4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10099fef8; end: 10099ff03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10099fef8(undefined8 *param_1)

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
  FUN_1001f6400();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_113018180) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_113018188) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_113018190) = uVar7;
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



/* Entry: 10099ff04; end: 10099ffa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10099ff04(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_1001f6400();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113018180) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113018188) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113018190) = param_4;
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



/* Entry: 10099ffa8; end: 1009a0007;  */

void FUN_10099ffa8(void)

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



/* Entry: 1009a0008; end: 1009a0057;  */

undefined ** FUN_1009a0008(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a0058; end: 1009a014f;  */

void FUN_1009a0058(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113018550,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113018550,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107174a8;
  func_0x000107c613fc(&UNK_1107174a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e36f24;
  FUN_10058fa64(&UNK_103e36f24,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a0150; end: 1009a0173;  */

void FUN_1009a0150(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a0174; end: 1009a017b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a0174(undefined8 *param_1)

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
  FUN_1001df820();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_113018560) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_113018568) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009a017c; end: 1009a01ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a017c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1001df820();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113018560) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113018568) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a0200; end: 1009a0203;  */

void FUN_1009a0200(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a0204; end: 1009a022f;  */

void FUN_1009a0204(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a0230; end: 1009a025b;  */

void FUN_1009a0230(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a025c; end: 1009a029b;  */

void FUN_1009a025c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a0240();
  FUN_100082720("CommunitiesMemberRankingJobSchedulingServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x5c,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a029c; end: 1009a02a3;  */

void FUN_1009a029c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a7aa70);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a02a4; end: 1009a0327;  */

void FUN_1009a02a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a7aa70,param_2,&UNK_101a7aa74,param_2,&UNK_101a7aa9c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a0328; end: 1009a0333;  */

undefined ** FUN_1009a0328(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a0334; end: 1009a03fb;  */

void FUN_1009a0334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110401960;
  func_0x000107c613fc(&UNK_110401960,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_1009a0444,puVar1);
  return;
}



/* Entry: 1009a03fc; end: 1009a0443;  */

void FUN_1009a03fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1009a0334(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100082720("ComplianceEngineScopeInitializationPluginPluginProvider",0x37,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009a0444; end: 1009a0453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a0444(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar1 = 0;
  func_0x000107c5f804(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      uStack_b8,*(undefined8 *)(unaff_x20 + 0x30));
  lVar13 = *(long *)(lVar1 + -8);
  lVar12 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  FUN_1009a0890();
  func_0x000107c613fc();
  lStack_a8 = lVar12;
  FUN_100083b20(&puStack_a0);
  puVar9 = puStack_a0;
  lVar12 = -0x7ffffffef1046400;
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d);
  puVar3 = puVar9;
  func_0x000107c3ebd4();
  func_0x000107c615e8(puVar9);
  func_0x000107c61170(uVar2);
  if ((int)puVar3 != 0) {
    FUN_100083b20(&puStack_a0);
    lStack_c8 = lStack_98;
    puStack_d0 = puStack_a0;
    FUN_100083b20(&puStack_a0);
    puVar9 = puStack_a0;
    lVar4 = *(long *)(puStack_a0 + _DAT_113091ad8);
    func_0x000107c61174();
    func_0x000107c61170(puVar9);
    lVar5 = lVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar12;
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = 0;
      func_0x000107c5faec(0);
      lVar4 = lVar12;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar12);
    }
    func_0x000107c5faec();
    func_0x000107c61434(lVar4);
    puStack_d8 = puStack_d0;
    func_0x000107c615f0();
    FUN_100083b20(&puStack_a0);
    lVar7 = 0;
    func_0x000101745bfc();
    lVar12 = lVar7;
    func_0x000107c610f8();
    plVar8 = (long *)(lVar12 + _DAT_112dc5ce0);
    *plVar8 = lVar5;
    plVar8[1] = lVar4;
    plVar8 = (long *)(lVar12 + _DAT_112dc5ce8);
    plVar8[1] = lStack_c8;
    *plVar8 = (long)puStack_d0;
    *(undefined **)(lVar12 + _DAT_112dc5cf0) = puStack_a0;
    plVar8 = &lStack_70;
    lStack_70 = lVar12;
    lStack_68 = lVar7;
    func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
    func_0x000107c6142c(lVar4);
    puVar9 = PTR_PTR_1126b0438;
    func_0x000107c61168(PTR_PTR_1126b0438);
    func_0x000107c4d3fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar3 = PTR_PTR_1126b0440;
    func_0x000107c610f8();
    uVar2 = 0x6e61696c706d6f43;
    func_0x000107c5fadc(0x6e61696c706d6f43,0xef7367616c466563);
    func_0x000107c4709c();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar2);
    (**(code **)(lVar13 + 0x68))
              (auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1);
    puVar10 = PTR_PTR_1126ae790;
    func_0x000107c610f8(PTR_PTR_1126ae790);
    uVar2 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efb9d20);
    func_0x000107c5f800();
    func_0x000107c470d0(puVar10);
    func_0x000107c61170(uVar2);
    (**(code **)(lVar13 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puVar9 = &UNK_110401a38;
    func_0x000107c613fc(&UNK_110401a38,0x28,7);
    uVar2 = uStack_b8;
    *(undefined8 *)(puVar9 + 0x10) = uStack_b8;
    *(undefined **)(puVar9 + 0x18) = puVar3;
    *(long **)(puVar9 + 0x20) = plVar8;
    puStack_80 = &UNK_1017424a4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_98 = 0x42000000;
    pcStack_90 = FUN_1000f6b44;
    puStack_88 = &UNK_110401a50;
    ppuVar11 = &puStack_a0;
    puStack_78 = puVar9;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_78;
    func_0x000107c6157c(uVar2);
    func_0x000107c61174(puVar3);
    func_0x000107c61174(plVar8);
    func_0x000107c61574(puVar9);
    func_0x000107c4e524(puVar10);
    func_0x000107c60bd0(ppuVar11);
    FUN_100083b20(&puStack_a0);
    puVar9 = puStack_a0;
    uVar2 = *(undefined8 *)(puStack_a0 + _DAT_113046c80);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(puVar9);
    func_0x000101748b74(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(plVar8);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puStack_d8);
  }
  *param_1 = lStack_a8;
  param_1[1] = (long)&PTR_DAT_1104019d8;
  return;
}



/* Entry: 1009a0454; end: 1009a088b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a0454(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 in_x3;
  undefined8 in_x5;
  long extraout_x8;
  long lVar13;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  uStack_b8 = in_x3;
  uStack_b0 = in_x5;
  func_0x000107c5f804();
  lVar13 = *(long *)(lVar1 + -8);
  lVar12 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  FUN_1009a0890();
  func_0x000107c613fc();
  lStack_a8 = lVar12;
  FUN_100083b20(&puStack_a0);
  puVar9 = puStack_a0;
  lVar12 = -0x7ffffffef1046400;
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d);
  puVar3 = puVar9;
  func_0x000107c3ebd4();
  func_0x000107c615e8(puVar9);
  func_0x000107c61170(uVar2);
  if ((int)puVar3 != 0) {
    FUN_100083b20(&puStack_a0);
    lStack_c8 = lStack_98;
    puStack_d0 = puStack_a0;
    FUN_100083b20(&puStack_a0);
    puVar9 = puStack_a0;
    lVar4 = *(long *)(puStack_a0 + _DAT_113091ad8);
    func_0x000107c61174();
    func_0x000107c61170(puVar9);
    lVar5 = lVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar12;
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = 0;
      func_0x000107c5faec(0);
      lVar4 = lVar12;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar12);
    }
    func_0x000107c5faec();
    func_0x000107c61434(lVar4);
    puStack_d8 = puStack_d0;
    func_0x000107c615f0();
    FUN_100083b20(&puStack_a0);
    lVar7 = 0;
    func_0x000101745bfc();
    lVar12 = lVar7;
    func_0x000107c610f8();
    plVar8 = (long *)(lVar12 + _DAT_112dc5ce0);
    *plVar8 = lVar5;
    plVar8[1] = lVar4;
    plVar8 = (long *)(lVar12 + _DAT_112dc5ce8);
    plVar8[1] = lStack_c8;
    *plVar8 = (long)puStack_d0;
    *(undefined **)(lVar12 + _DAT_112dc5cf0) = puStack_a0;
    plVar8 = &lStack_70;
    lStack_70 = lVar12;
    lStack_68 = lVar7;
    func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
    func_0x000107c6142c(lVar4);
    puVar9 = PTR_PTR_1126b0438;
    func_0x000107c61168(PTR_PTR_1126b0438);
    func_0x000107c4d3fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar3 = PTR_PTR_1126b0440;
    func_0x000107c610f8();
    uVar2 = 0x6e61696c706d6f43;
    func_0x000107c5fadc(0x6e61696c706d6f43,0xef7367616c466563);
    func_0x000107c4709c();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar2);
    (**(code **)(lVar13 + 0x68))
              (auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1);
    puVar10 = PTR_PTR_1126ae790;
    func_0x000107c610f8(PTR_PTR_1126ae790);
    uVar2 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efb9d20);
    func_0x000107c5f800();
    func_0x000107c470d0(puVar10);
    func_0x000107c61170(uVar2);
    (**(code **)(lVar13 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puVar9 = &UNK_110401a38;
    func_0x000107c613fc(&UNK_110401a38,0x28,7);
    uVar2 = uStack_b8;
    *(undefined8 *)(puVar9 + 0x10) = uStack_b8;
    *(undefined **)(puVar9 + 0x18) = puVar3;
    *(long **)(puVar9 + 0x20) = plVar8;
    puStack_80 = &UNK_1017424a4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_98 = 0x42000000;
    pcStack_90 = FUN_1000f6b44;
    puStack_88 = &UNK_110401a50;
    ppuVar11 = &puStack_a0;
    puStack_78 = puVar9;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_78;
    func_0x000107c6157c(uVar2);
    func_0x000107c61174(puVar3);
    func_0x000107c61174(plVar8);
    func_0x000107c61574(puVar9);
    func_0x000107c4e524(puVar10);
    func_0x000107c60bd0(ppuVar11);
    FUN_100083b20(&puStack_a0);
    puVar9 = puStack_a0;
    uVar2 = *(undefined8 *)(puStack_a0 + _DAT_113046c80);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(puVar9);
    func_0x000101748b74(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(plVar8);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puStack_d8);
  }
  *param_1 = lStack_a8;
  param_1[1] = (long)&PTR_DAT_1104019d8;
  return;
}



/* Entry: 1009a088c; end: 1009a088f;  */

void FUN_1009a088c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a0890; end: 1009a08fb;  */

void FUN_1009a0890(void)

{
  func_0x000107c61168(&PTR_PTR_112dc5b68);
  return;
}



/* Entry: 1009a08fc; end: 1009a0923;  */

undefined ** FUN_1009a08fc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a0924; end: 1009a0963;  */

void FUN_1009a0924(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a0908();
  FUN_100082720("ComposerChatMediaVideoServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a0964; end: 1009a096b;  */

void FUN_1009a0964(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10196584c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a096c; end: 1009a09ef;  */

void FUN_1009a096c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10196584c,param_2,&UNK_101965850,param_2,&UNK_101965878,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a09f0; end: 1009a0a13;  */

undefined ** FUN_1009a09f0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a0a14; end: 1009a0a93;  */

void FUN_1009a0a14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110717610;
  func_0x000107c613fc(&UNK_110717610,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a0a94,puVar1);
  return;
}



/* Entry: 1009a0a94; end: 1009a0a9b;  */

void FUN_1009a0a94(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113018970,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113018970,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107176a8;
  func_0x000107c613fc(&UNK_1107176a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e37a20;
  FUN_10058fa64(&UNK_103e37a20,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a0a9c; end: 1009a0b93;  */

void FUN_1009a0a9c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113018970,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113018970,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107176a8;
  func_0x000107c613fc(&UNK_1107176a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e37a20;
  FUN_10058fa64(&UNK_103e37a20,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a0b94; end: 1009a0bb7;  */

void FUN_1009a0b94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a0bb8; end: 1009a0bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a0bb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_10023c720();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_113018980) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_113018988) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_113018990) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_113018998) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1009a0bc4; end: 1009a0c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a0bc4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_10023c720();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113018980) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113018988) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113018990) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113018998) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a0c80; end: 1009a0ce7;  */

void FUN_1009a0c80(void)

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



/* Entry: 1009a0ce8; end: 1009a0cf3;  */

undefined ** FUN_1009a0ce8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a0cf4; end: 1009a0d97;  */

void FUN_1009a0cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104042d8;
  func_0x000107c613fc(&UNK_1104042d8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1009a0dfc,puVar1);
  return;
}



/* Entry: 1009a0d98; end: 1009a0ddb;  */

void FUN_1009a0d98(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1009a0cf4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_100082720("ConfigAuthScopeInitPluginPluginProvider",0x27,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009a0ddc; end: 1009a0dfb;  */

void FUN_1009a0ddc(void)

{
  func_0x000107c61168(&PTR_PTR_112dc6fe0);
  return;
}



/* Entry: 1009a0dfc; end: 1009a0f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a0dfc(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_60;
  long lStack_58;
  
  FUN_1009a0ddc();
  func_0x000107c613fc();
  FUN_100083b20(&lStack_58);
  lVar7 = lStack_58;
  lVar2 = lStack_58;
  func_0x000107c3e464(lStack_58);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61168(PTR_PTR_1126b86c0);
  func_0x000107c496bc();
  FUN_100083b20(&lStack_58);
  lVar7 = lStack_58;
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_11307e0b8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lVar7);
  FUN_100083b20(&lStack_60);
  uVar4 = *(undefined8 *)(lStack_60 + _DAT_113091ae0);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lStack_60);
  puVar5 = PTR_PTR_1126a7b20;
  func_0x000107c610f8();
  func_0x000107c48610();
  func_0x000107c61170(uVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar6 = PTR_PTR_1126a7b28;
    func_0x000107c610f8(PTR_PTR_1126a7b28);
    func_0x000107c487f8();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar3);
    FUN_100083b20(&lStack_58);
    lVar7 = lStack_58;
    func_0x000107c43f90(lStack_58);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_58);
    func_0x000107c5d948(lVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c615e8(lVar7);
    *param_1 = param_2;
    param_1[1] = &PTR_DAT_110404300;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a0fa0);
  (*pcVar1)();
}



/* Entry: 1009a0fa0; end: 1009a0fcf; +[SCConfigRequestManagerHandler injectRequestManager:] */

void FUN_1009a0fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = uRam00000001136bb988;
  uRam00000001136bb988 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1009a0fd0; end: 1009a1043; -[SCUserSessionContextChangeHandlerImpl initWithSessionContext:] */

undefined1 * FUN_1009a0fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8168;
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



/* Entry: 1009a1044; end: 1009a10e7; -[SCConfigAuth initWithSnapTokenProvider:sessionContextChangeHandler:] */

undefined1 *
FUN_1009a1044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8158;
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
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009a10e8; end: 1009a11db; -[SCConfigUserAuthenticationImpl userDidAuth:] */

void FUN_1009a10e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c52038(param_3);
  func_0x000107c61180();
  func_0x000107c4c6fc();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1009a11dc; end: 1009a11e7; -[SCConfigAuth sessionContextChangeHandler] */

void FUN_1009a11dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 1009a11e8; end: 1009a1303; -[SCUserSessionContextChangeHandlerImpl matchResumed:fromLogIn:fromRegistration:] */

void FUN_1009a11e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1009a1304;
  puStack_40 = &UNK_110842508;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1053e430c;
  puStack_68 = &UNK_110884268;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1053e4318;
  puStack_90 = &UNK_110884298;
  uStack_88 = param_5;
  uStack_60 = param_4;
  uStack_38 = param_3;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4c6fc(uVar1,param_2,&puStack_58,&puStack_80,&puStack_a8);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1009a1304; end: 1009a1327;  */

void FUN_1009a1304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001009a130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1009a1328; end: 1009a1353;  */

void FUN_1009a1328(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3c070();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1009a1354; end: 1009a13bf; -[SCConfigManagerImpl _onResume] */

void FUN_1009a1354(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lVar1 = param_1;
  func_0x000107c49b68();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1009a348c;
  puStack_38 = &UNK_110845ce0;
  uStack_28 = (undefined1)lVar1;
  lStack_30 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_50);
  return;
}



/* Entry: 1009a13c0; end: 1009a13cf; -[SCConfigManagerImpl isColdStart] */

bool FUN_1009a13c0(long param_1)

{
  return *(ulong *)(param_1 + 0x40) < 2;
}



/* Entry: 1009a13d0; end: 1009a140b;  */

void FUN_1009a13d0(void)

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



/* Entry: 1009a140c; end: 1009a1433;  */

undefined ** FUN_1009a140c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a1434; end: 1009a1473;  */

void FUN_1009a1434(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a1418();
  FUN_100082720("ContactSessionServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a1474; end: 1009a147b;  */

void FUN_1009a1474(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a9a2d8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a147c; end: 1009a14ff;  */

void FUN_1009a147c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a9a2d8,param_2,&UNK_101a9a2dc,param_2,&UNK_101a9a304,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a1500; end: 1009a1527;  */

undefined ** FUN_1009a1500(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a1528; end: 1009a1567;  */

void FUN_1009a1528(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a150c();
  FUN_100082720("ContactsNavigationServicesProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a1568; end: 1009a15eb;  */

void FUN_1009a1568(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101918434);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a15ec; end: 1009a1613;  */

undefined ** FUN_1009a15ec(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a1614; end: 1009a1653;  */

void FUN_1009a1614(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a15f8();
  FUN_100082720("ContentBlockingServiceProviderWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a1654; end: 1009a165b;  */

void FUN_1009a1654(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101aa8c74);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a165c; end: 1009a16df;  */

void FUN_1009a165c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101aa8c74,param_2,&UNK_101aa8c78,param_2,&UNK_101aa8ca0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a16e0; end: 1009a16eb;  */

undefined ** FUN_1009a16e0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a16ec; end: 1009a1777;  */

void FUN_1009a16ec(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009a1778,param_1);
  return;
}



/* Entry: 1009a1778; end: 1009a177f;  */

void FUN_1009a1778(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1009a1780();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  func_0x0001000ab060(0);
  FUN_100079360(0);
  FUN_1009a18b0(0);
  func_0x000107c61580();
  FUN_1009a18d0();
  lVar2 = unaff_x20;
  FUN_1009a1930();
  func_0x000107c61170(unaff_x20);
  uVar3 = 0;
  func_0x0001000aad1c(0);
  FUN_1000aad3c();
  func_0x000107c6157c();
  lVar4 = lVar2;
  FUN_1000ab368(lVar2,uVar3,0,0,&UNK_101527a98);
  func_0x000107c61578();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(lVar4);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103d9920;
  return;
}



/* Entry: 1009a1780; end: 1009a179f;  */

void FUN_1009a1780(void)

{
  func_0x000107c61168(&PTR_PTR_112db0960);
  return;
}



/* Entry: 1009a17a0; end: 1009a18af;  */

void FUN_1009a17a0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  FUN_1009a1780();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  func_0x0001000ab060(0);
  FUN_100079360(0);
  FUN_1009a18b0(0);
  lVar2 = param_2;
  func_0x000107c61580(param_2,2);
  FUN_1009a18d0();
  lVar3 = lVar2;
  FUN_1009a1930();
  func_0x000107c61170(lVar2);
  uVar4 = 0;
  func_0x0001000aad1c(0);
  FUN_1000aad3c();
  func_0x000107c6157c(param_2);
  lVar2 = lVar3;
  FUN_1000ab368(lVar3,uVar4,0,0,&UNK_101527a98,param_2);
  func_0x000107c61578(param_2,2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c615e8(lVar2);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103d9920;
  return;
}



/* Entry: 1009a18b0; end: 1009a18cf;  */

void FUN_1009a18b0(void)

{
  func_0x000107c61168(&PTR_PTR_1129e1e28);
  return;
}



/* Entry: 1009a18d0; end: 1009a18d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a18d0(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b650) = 6;
  *(undefined8 *)(unaff_x20 + _DAT_11309b658) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1009a18d8; end: 1009a192f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a18d8(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b650) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309b658) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1009a1930; end: 1009a1983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a1930(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x15;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(long *)(lVar3 + _DAT_11309ad08) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1009a1984; end: 1009a1a7b;  */

void FUN_1009a1984(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113018e90,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113018e90,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110717878;
  func_0x000107c613fc(&UNK_110717878,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e395b4;
  FUN_10058fa64(&UNK_103e395b4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a1a7c; end: 1009a1a9f;  */

void FUN_1009a1a7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a1aa0; end: 1009a1aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a1aa0(undefined8 *param_1)

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
  FUN_100237cd0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_113018ea0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_113018ea8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009a1aa8; end: 1009a1b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a1aa8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100237cd0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113018ea0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113018ea8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a1b2c; end: 1009a1b2f;  */

void FUN_1009a1b2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a1b30; end: 1009a1b5b;  */

void FUN_1009a1b30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a1b5c; end: 1009a1b83;  */

void FUN_1009a1b5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a1b84; end: 1009a1c03;  */

void FUN_1009a1b84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110717ce0;
  func_0x000107c613fc(&UNK_110717ce0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a1c04,puVar1);
  return;
}



/* Entry: 1009a1c04; end: 1009a1c0b;  */

void FUN_1009a1c04(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113019f80,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113019f80,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110717d78;
  func_0x000107c613fc(&UNK_110717d78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e3c774;
  FUN_10058fa64(&UNK_103e3c774,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


