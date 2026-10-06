/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10090f07c; end: 10090f0bb;  */

void FUN_10090f07c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090f060();
  FUN_100082720("PreviewQuotaCheckerServiceProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090f0bc; end: 10090f0c3;  */

void FUN_10090f0bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102eade48);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090f0c4; end: 10090f147;  */

void FUN_10090f0c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102eade48,param_2,&UNK_102eade4c,param_2,&UNK_102eade74,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090f148; end: 10090f16b;  */

undefined ** FUN_10090f148(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090f16c; end: 10090f1eb;  */

void FUN_10090f16c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106ae468;
  func_0x000107c613fc(&UNK_1106ae468,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10090f1ec,puVar1);
  return;
}



/* Entry: 10090f1ec; end: 10090f1f3;  */

void FUN_10090f1ec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb0cc8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb0cc8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ae500;
  func_0x000107c613fc(&UNK_1106ae500,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10392a4b4;
  FUN_10058fa64(&UNK_10392a4b4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090f1f4; end: 10090f2eb;  */

void FUN_10090f1f4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb0cc8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb0cc8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ae500;
  func_0x000107c613fc(&UNK_1106ae500,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10392a4b4;
  FUN_10058fa64(&UNK_10392a4b4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090f2ec; end: 10090f30f;  */

void FUN_10090f2ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090f310; end: 10090f31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090f310(undefined8 *param_1)

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
  FUN_10037ace8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112fb0cd8) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112fb0ce0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112fb0ce8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112fb0cf0) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112fb0cf8) = uVar9;
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



/* Entry: 10090f320; end: 10090f3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090f320(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10037ace8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fb0cd8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fb0ce0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fb0ce8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fb0cf0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fb0cf8) = param_6;
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



/* Entry: 10090f3fc; end: 10090f46b;  */

void FUN_10090f3fc(void)

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



/* Entry: 10090f46c; end: 10090f48f;  */

undefined ** FUN_10090f46c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090f490; end: 10090f50f;  */

void FUN_10090f490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106ae898;
  func_0x000107c613fc(&UNK_1106ae898,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10090f510,puVar1);
  return;
}



/* Entry: 10090f510; end: 10090f517;  */

void FUN_10090f510(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb15a8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb15a8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ae930;
  func_0x000107c613fc(&UNK_1106ae930,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10392dbd8;
  FUN_10058fa64(&UNK_10392dbd8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090f518; end: 10090f60f;  */

void FUN_10090f518(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb15a8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb15a8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ae930;
  func_0x000107c613fc(&UNK_1106ae930,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10392dbd8;
  FUN_10058fa64(&UNK_10392dbd8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090f610; end: 10090f633;  */

void FUN_10090f610(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090f634; end: 10090f63f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090f634(undefined8 *param_1)

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
  FUN_10038b390();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112fb15b8) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112fb15c0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112fb15c8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112fb15d0) = uVar4;
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



/* Entry: 10090f640; end: 10090f6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090f640(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10038b390();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fb15b8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fb15c0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fb15c8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fb15d0) = param_5;
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



/* Entry: 10090f6fc; end: 10090f763;  */

void FUN_10090f6fc(void)

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



/* Entry: 10090f764; end: 10090f787;  */

undefined ** FUN_10090f764(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090f788; end: 10090f807;  */

void FUN_10090f788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106aea98;
  func_0x000107c613fc(&UNK_1106aea98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10090f808,puVar1);
  return;
}



/* Entry: 10090f808; end: 10090f80f;  */

void FUN_10090f808(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb1c48,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb1c48,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106aeb30;
  func_0x000107c613fc(&UNK_1106aeb30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103930064;
  FUN_10058fa64(&UNK_103930064,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090f810; end: 10090f907;  */

void FUN_10090f810(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb1c48,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb1c48,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106aeb30;
  func_0x000107c613fc(&UNK_1106aeb30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103930064;
  FUN_10058fa64(&UNK_103930064,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10090f908; end: 10090f92b;  */

void FUN_10090f908(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090f92c; end: 10090f937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090f92c(undefined8 *param_1)

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
  FUN_10037ae38();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112fb1c58) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112fb1c60) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112fb1c68) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112fb1c70) = uVar4;
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



/* Entry: 10090f938; end: 10090f9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090f938(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10037ae38();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fb1c58) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fb1c60) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fb1c68) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fb1c70) = param_5;
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



/* Entry: 10090f9f4; end: 10090fa5b;  */

void FUN_10090f9f4(void)

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



/* Entry: 10090fa5c; end: 10090fa83;  */

undefined ** FUN_10090fa5c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090fa84; end: 10090fac3;  */

void FUN_10090fa84(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090fa68();
  FUN_100082720("RankedPostableContentDestinationsServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x58,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090fac4; end: 10090facb;  */

void FUN_10090fac4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10300c3e4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090facc; end: 10090fb4f;  */

void FUN_10090facc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10300c3e4,param_2,&UNK_10300c3e8,param_2,&UNK_10300c410,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090fb50; end: 10090fb77;  */

undefined ** FUN_10090fb50(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090fb78; end: 10090fbb7;  */

void FUN_10090fb78(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090fb5c();
  FUN_100082720("RemixChatWallpaperImplServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090fbb8; end: 10090fbbf;  */

void FUN_10090fbb8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d6bfd8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090fbc0; end: 10090fc43;  */

void FUN_10090fbc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d6bfd8,param_2,&UNK_102d6bfdc,param_2,&UNK_102d6c004,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090fc44; end: 10090fc6b;  */

undefined ** FUN_10090fc44(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090fc6c; end: 10090fcab;  */

void FUN_10090fc6c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090fc50();
  FUN_100082720("SCAdDiscoverSharingServiceProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090fcac; end: 10090fcb3;  */

void FUN_10090fcac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cd8120);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090fcb4; end: 10090fd37;  */

void FUN_10090fcb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cd8120,param_2,&UNK_102cd8124,param_2,&UNK_102cd814c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090fd38; end: 10090fd5f;  */

undefined ** FUN_10090fd38(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090fd60; end: 10090fd9f;  */

void FUN_10090fd60(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090fd44();
  FUN_100082720("SCAdOperaParserServiceProviderWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090fda0; end: 10090fda7;  */

void FUN_10090fda0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cd8aa4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090fda8; end: 10090fe2b;  */

void FUN_10090fda8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cd8aa4,param_2,&UNK_102cd8aa8,param_2,&UNK_102cd8ad0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090fe2c; end: 10090fe53;  */

undefined ** FUN_10090fe2c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090fe54; end: 10090fe93;  */

void FUN_10090fe54(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090fe38();
  FUN_100082720("SCAdPlaybackServiceProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090fe94; end: 10090fe9b;  */

void FUN_10090fe94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cdb8dc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090fe9c; end: 10090ff1f;  */

void FUN_10090fe9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cdb8dc,param_2,&UNK_102cdb8e0,param_2,&UNK_102cdb908,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090ff20; end: 10090ff47;  */

undefined ** FUN_10090ff20(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090ff48; end: 10090ff87;  */

void FUN_10090ff48(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090ff2c();
  FUN_100082720("SCAdReportServiceProviderWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090ff88; end: 10090ff8f;  */

void FUN_10090ff88(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cdc090);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10090ff90; end: 100910013;  */

void FUN_10090ff90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cdc090,param_2,&UNK_102cdc094,param_2,&UNK_102cdc0bc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910014; end: 10091003b;  */

undefined ** FUN_100910014(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10091003c; end: 10091007b;  */

void FUN_10091003c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100910020();
  FUN_100082720("SCAddSoundPillOperaServiceProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10091007c; end: 100910083;  */

void FUN_10091007c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e94f94);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910084; end: 100910107;  */

void FUN_100910084(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e94f94,param_2,&UNK_102e94f98,param_2,&UNK_102e94fc0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910108; end: 10091012f;  */

undefined ** FUN_100910108(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100910130; end: 10091016f;  */

void FUN_100910130(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100910114();
  FUN_100082720("SCAudioNotePlayingServiceProviderWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100910170; end: 100910177;  */

void FUN_100910170(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d6c428);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910178; end: 1009101fb;  */

void FUN_100910178(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d6c428,param_2,&UNK_102d6c42c,param_2,&UNK_102d6c454,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009101fc; end: 100910223;  */

undefined ** FUN_1009101fc(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100910224; end: 100910263;  */

void FUN_100910224(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100910208();
  FUN_100082720("SCBillboardSignalDependencyServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x52,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100910264; end: 10091026b;  */

void FUN_100910264(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102f23068);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10091026c; end: 1009102ef;  */

void FUN_10091026c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102f23068,param_2,&UNK_102f2306c,param_2,&UNK_102f23094,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009102f0; end: 100910317;  */

undefined ** FUN_1009102f0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100910318; end: 100910357;  */

void FUN_100910318(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009102fc();
  FUN_100082720("SCBirthdayPageComposerContextServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x54,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100910358; end: 10091035f;  */

void FUN_100910358(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102f1e734);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910360; end: 1009103e3;  */

void FUN_100910360(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102f1e734,param_2,&UNK_102f1e738,param_2,&UNK_102f1e760,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009103e4; end: 10091040b;  */

undefined ** FUN_1009103e4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10091040c; end: 10091044b;  */

void FUN_10091040c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009103f0();
  FUN_100082720("SCBirthdayPageServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10091044c; end: 100910453;  */

void FUN_10091044c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102f1fa64);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910454; end: 1009104d7;  */

void FUN_100910454(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102f1fa64,param_2,&UNK_102f1fa68,param_2,&UNK_102f1fa90,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009104d8; end: 1009104ff;  */

undefined ** FUN_1009104d8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100910500; end: 10091053f;  */

void FUN_100910500(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009104e4();
  FUN_100082720("SCBitmojiFashionNotificationServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100910540; end: 100910547;  */

void FUN_100910540(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d433f0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910548; end: 1009105cb;  */

void FUN_100910548(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d433f0,param_2,&UNK_102d433f4,param_2,&UNK_102d4341c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009105cc; end: 1009105d7;  */

undefined ** FUN_1009105cc(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009105d8; end: 100910663;  */

void FUN_1009105d8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100910664,param_1);
  return;
}



/* Entry: 100910664; end: 100910703;  */

void FUN_100910664(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aa260;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_102206d54);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910704; end: 10091075f; +[SCBlizzardCallingEntryPoint attributedTask] */

void FUN_100910704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126d0318;
  func_0x000107c3eaa4(PTR_PTR_1126d0318);
  func_0x000107c61180();
  func_0x000107c41218(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100910760; end: 100910767; +[SCAttributedDataAcquisitionTask blizzardDependenciesProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100910760(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b330) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100910768; end: 1009107b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100910768(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b330) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009107b8; end: 1009107ef; +[SCAttributedTask dataAcquisition:] */

void FUN_1009107b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_1000b7434();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1009107f0; end: 10091082b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1009107f0(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  
  lVar12 = param_2;
  puVar10 = param_3;
  func_0x000107c61174();
  FUN_10007c020();
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_113096e78);
  }
  lVar13 = param_4;
  if (param_4 == 0) {
    param_3 = param_1;
    lVar13 = lVar12;
    FUN_10007c170(param_1,lVar12,puVar10);
  }
  puVar6 = &UNK_1107ad218;
  func_0x000107c613fc(&UNK_1107ad218,0x38,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  uVar1 = SUB81(puVar10,0);
  puVar6[0x20] = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  puVar7 = &UNK_1107ad240;
  func_0x000107c613fc(&UNK_1107ad240,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &UNK_10dd3d1e8;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar6 = &UNK_1107ad268;
  func_0x000107c613fc(&UNK_1107ad268,0x48,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  puVar6[0x20] = uVar1;
  *(undefined **)(puVar6 + 0x28) = param_3;
  *(long *)(puVar6 + 0x30) = lVar13;
  *(undefined **)(puVar6 + 0x38) = &UNK_10dd3d1f0;
  *(undefined **)(puVar6 + 0x40) = puVar7;
  puVar8 = &UNK_1107ad290;
  func_0x000107c613fc(&UNK_1107ad290,0x38,7);
  *(undefined **)(puVar8 + 0x10) = param_1;
  *(long *)(puVar8 + 0x18) = lVar12;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_10dd3d1f8;
  *(undefined **)(puVar8 + 0x30) = puVar6;
  FUN_1000ab9d4(param_1,lVar12,puVar10);
  FUN_1000ab9d4(param_1,lVar12,puVar10);
  FUN_1000ab9d4(param_1,lVar12,puVar10);
  lVar2 = lRam0000000113097070;
  func_0x000107c61434(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c61434(lVar13);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar6);
  if (lVar2 != -1) {
    func_0x000107c61568(0x113097070,FUN_1000ab9ec);
  }
  uVar3 = uRam0000000113097078;
  pcStack_88 = (code *)((ulong)puVar10 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd00000000000004f;
  puStack_78 = (undefined *)0x800000010f2130c0;
  puStack_98 = param_1;
  lStack_90 = lVar12;
  FUN_1000ab9d4(param_1,lVar12,puVar10);
  uVar9 = 0x1130970b8;
  FUN_1000285a8(0x1130970b8,&UNK_10dd3d148);
  func_0x000107c615d4(uVar3,&puStack_98,uVar9);
  FUN_1000aba5c(uVar14,&UNK_10dd3d200,puVar8);
  func_0x000107c615d0();
  func_0x000107c6142c(lVar13);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  FUN_10007d980(param_1,lVar12,puVar10);
  puVar10 = PTR_PTR_1126afd78;
  func_0x000107c610f8();
  puStack_78 = &UNK_1048933f8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_90 = 0x42000000;
  pcStack_88 = FUN_1000f6b44;
  puStack_80 = &UNK_1107ad2a8;
  ppuVar11 = &puStack_98;
  uStack_70 = uVar14;
  func_0x000107c60bc4(ppuVar11);
  uVar4 = uStack_70;
  func_0x000107c6157c(uVar14);
  func_0x000107c61574(uVar4);
  func_0x000107c45b74();
  func_0x000107c60bd0(ppuVar11);
  if (puVar10 != (undefined *)0x0) {
    func_0x000107c61574(uVar14);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006745fc);
  (*pcVar5)();
}



/* Entry: 10091082c; end: 10091086b;  */

void FUN_10091082c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100910810();
  FUN_100082720("SCBloopsContextServiceProviderWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10091086c; end: 100910873;  */

void FUN_10091086c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d45cb8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910874; end: 1009108f7;  */

void FUN_100910874(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d45cb8,param_2,&UNK_102d45cbc,param_2,&UNK_102d45ce4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009108f8; end: 10091091f;  */

undefined ** FUN_1009108f8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100910920; end: 10091095f;  */

void FUN_100910920(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100910904();
  FUN_100082720("SCBloopsStorySharingServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100910960; end: 100910967;  */

void FUN_100910960(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d463a4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910968; end: 1009109eb;  */

void FUN_100910968(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d463a4,param_2,&UNK_102d463a8,param_2,&UNK_102d463d0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009109ec; end: 100910a13;  */

undefined ** FUN_1009109ec(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100910a14; end: 100910a53;  */

void FUN_100910a14(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009109f8();
  FUN_100082720("SCBoltURLMediaOperaFeatureEntryPointWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100910a54; end: 100910a5b;  */

void FUN_100910a54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fc3ae4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910a5c; end: 100910adf;  */

void FUN_100910a5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fc3ae4,param_2,&UNK_102fc3ae8,param_2,&UNK_102fc3b10,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910ae0; end: 100910aeb;  */

undefined ** FUN_100910ae0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100910aec; end: 100910b17;  */

void FUN_100910aec(void)

{
  FUN_1008f5bec();
  return;
}



/* Entry: 100910b18; end: 100910b1f;  */

void FUN_100910b18(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a9c18;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_101f9bc60);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910b20; end: 100910bc3;  */

void FUN_100910b20(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a9c18;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_101f9bc60,param_2,&UNK_101f9bc64,param_2,&UNK_101f9bc8c,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100910bc4; end: 100910c1f; +[SCBoostCleanupEntryPoint attributedTask] */

void FUN_100910bc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126be840;
  func_0x000107c3ebe8(PTR_PTR_1126be840);
  func_0x000107c61180();
  func_0x000107c40418(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100910c20; end: 100910c27; +[SCAttributedContentTask boostCleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100910c20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b110) = 4;
  *(undefined8 *)(lVar1 + _DAT_11309b118) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b120) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


