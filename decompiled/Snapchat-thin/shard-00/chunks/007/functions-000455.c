/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009332a0; end: 1009332ab;  */

undefined ** FUN_1009332a0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009332ac; end: 1009332d7;  */

void FUN_1009332ac(void)

{
  FUN_1008f5bec();
  return;
}



/* Entry: 1009332d8; end: 1009332df;  */

void FUN_1009332d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101fa98e0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009332e0; end: 100933363;  */

void FUN_1009332e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101fa98e0,param_2,&UNK_101fa98e4,param_2,&UNK_101fa990c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100933364; end: 100933387;  */

undefined ** FUN_100933364(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100933388; end: 100933407;  */

void FUN_100933388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106aeeb8;
  func_0x000107c613fc(&UNK_1106aeeb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100933408,puVar1);
  return;
}



/* Entry: 100933408; end: 10093340f;  */

void FUN_100933408(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb2460,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb2460,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106aef50;
  func_0x000107c613fc(&UNK_1106aef50,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10393271c;
  FUN_10058fa64(&UNK_10393271c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100933410; end: 100933507;  */

void FUN_100933410(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb2460,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb2460,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106aef50;
  func_0x000107c613fc(&UNK_1106aef50,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10393271c;
  FUN_10058fa64(&UNK_10393271c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100933508; end: 10093352b;  */

void FUN_100933508(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10093352c; end: 100933537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10093352c(undefined8 *param_1)

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
  FUN_100377dd0();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112fb2470) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112fb2478) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112fb2480) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112fb2488) = uVar4;
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



/* Entry: 100933538; end: 1009335f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100933538(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_100377dd0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fb2470) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fb2478) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fb2480) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fb2488) = param_5;
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



/* Entry: 1009335f4; end: 10093365b;  */

void FUN_1009335f4(void)

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



/* Entry: 10093365c; end: 1009336ab;  */

undefined ** FUN_10093365c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009336ac; end: 1009337a3;  */

void FUN_1009336ac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb2980,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb2980,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106af120;
  func_0x000107c613fc(&UNK_1106af120,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039342b0;
  FUN_10058fa64(&UNK_1039342b0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009337a4; end: 1009337c7;  */

void FUN_1009337a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009337c8; end: 1009337cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009337c8(undefined8 *param_1)

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
  FUN_100363220();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112fb2990) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112fb2998) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009337d0; end: 100933853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009337d0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100363220();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fb2990) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fb2998) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 100933854; end: 100933857;  */

void FUN_100933854(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100933858; end: 100933883;  */

void FUN_100933858(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100933884; end: 1009338af;  */

void FUN_100933884(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009338b0; end: 1009338ef;  */

void FUN_1009338b0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100933894();
  FUN_100082720("SecurityConfigServicesProviderWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009338f0; end: 1009338f7;  */

void FUN_1009338f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fae1c4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009338f8; end: 10093397b;  */

void FUN_1009338f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fae1c4,param_2,&UNK_102fae1c8,param_2,&UNK_102fae1f0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10093397c; end: 100933987;  */

undefined ** FUN_10093397c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100933988; end: 100933a13;  */

void FUN_100933988(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100933a14,param_1);
  return;
}



/* Entry: 100933a14; end: 100933a1b;  */

void FUN_100933a14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_100933ae0();
  FUN_100933b00();
  uVar2 = uVar1;
  FUN_100933b54();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(uVar2,&UNK_102fae480);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100933a1c; end: 100933adf;  */

void FUN_100933a1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_100933ae0();
  FUN_100933b00();
  uVar2 = uVar1;
  FUN_100933b54();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(uVar2,&UNK_102fae480,param_2,&UNK_102fae484,param_2,&UNK_102fae4ac,param_2);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100933ae0; end: 100933aff;  */

void FUN_100933ae0(void)

{
  func_0x000107c61168(&PTR_PTR_1129e2da0);
  return;
}



/* Entry: 100933b00; end: 100933b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100933b00(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309bb60) = 5;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100933b08; end: 100933b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100933b08(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309bb60) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100933b54; end: 100933b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100933b54(long param_1)

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
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x1b;
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
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(long *)(lVar3 + _DAT_11309ad38) = param_1;
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



/* Entry: 100933b7c; end: 100933bfb;  */

void FUN_100933b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106af318;
  func_0x000107c613fc(&UNK_1106af318,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100933bfc,puVar1);
  return;
}



/* Entry: 100933bfc; end: 100933c03;  */

void FUN_100933bfc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb3030,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb3030,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106af3b0;
  func_0x000107c613fc(&UNK_1106af3b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103935bb8;
  FUN_10058fa64(&UNK_103935bb8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100933c04; end: 100933cfb;  */

void FUN_100933c04(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb3030,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb3030,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106af3b0;
  func_0x000107c613fc(&UNK_1106af3b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103935bb8;
  FUN_10058fa64(&UNK_103935bb8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100933cfc; end: 100933d1f;  */

void FUN_100933cfc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100933d20; end: 100933d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100933d20(undefined8 *param_1)

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
  FUN_10035c840();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112fb3040) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112fb3048) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112fb3050) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112fb3058) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112fb3060) = uVar9;
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



/* Entry: 100933d30; end: 100933e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100933d30(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10035c840();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fb3040) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fb3048) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fb3050) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fb3058) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fb3060) = param_6;
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



/* Entry: 100933e0c; end: 100933e7b;  */

void FUN_100933e0c(void)

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



/* Entry: 100933e7c; end: 100933ea3;  */

undefined ** FUN_100933e7c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100933ea4; end: 100933ee3;  */

void FUN_100933ea4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100933e88();
  FUN_100082720("SendToMassSnapNotificationServiceProviderWrapperScopeInitializationPluginProvider",
                0x51,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100933ee4; end: 100933eeb;  */

void FUN_100933ee4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fc526c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100933eec; end: 100933f6f;  */

void FUN_100933eec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fc526c,param_2,&UNK_102fc5270,param_2,&UNK_102fc5298,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100933f70; end: 100933f93;  */

undefined ** FUN_100933f70(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100933f94; end: 100934013;  */

void FUN_100933f94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106af700;
  func_0x000107c613fc(&UNK_1106af700,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100934014,puVar1);
  return;
}



/* Entry: 100934014; end: 10093401b;  */

void FUN_100934014(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb3e78,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb3e78,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106af798;
  func_0x000107c613fc(&UNK_1106af798,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039393f4;
  FUN_10058fa64(&UNK_1039393f4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10093401c; end: 100934113;  */

void FUN_10093401c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb3e78,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb3e78,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106af798;
  func_0x000107c613fc(&UNK_1106af798,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039393f4;
  FUN_10058fa64(&UNK_1039393f4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100934114; end: 100934137;  */

void FUN_100934114(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100934138; end: 1009342d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100934138(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_100371238();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fb3e88) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fb3e90) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fb3e98) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fb3ea0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fb3ea8) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fb3eb0) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fb3eb8) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fb3ec0) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112fb3ec8) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112fb3ed0) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112fb3ed8) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112fb3ee0) = param_13;
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
  func_0x000107c6157c(param_13);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1009342d8; end: 1009343bb;  */

void FUN_1009342d8(void)

{
  long unaff_x20;
  
  FUN_100934138(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1009343bc; end: 1009343df;  */

undefined ** FUN_1009343bc(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009343e0; end: 10093445f;  */

void FUN_1009343e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b0468;
  func_0x000107c613fc(&UNK_1106b0468,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100934460,puVar1);
  return;
}



/* Entry: 100934460; end: 100934467;  */

void FUN_100934460(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb50d8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb50d8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b0500;
  func_0x000107c613fc(&UNK_1106b0500,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103944550;
  FUN_10058fa64(&UNK_103944550,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100934468; end: 10093455f;  */

void FUN_100934468(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb50d8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb50d8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b0500;
  func_0x000107c613fc(&UNK_1106b0500,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103944550;
  FUN_10058fa64(&UNK_103944550,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100934560; end: 100934583;  */

void FUN_100934560(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100934584; end: 100934597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100934584(undefined8 *param_1)

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
  FUN_10035c94c();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(long *)(lVar11 + _DAT_112fb50e8) = lVar1;
  *(undefined8 *)(lVar11 + _DAT_112fb50f0) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112fb50f8) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_112fb5100) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_112fb5108) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112fb5110) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_112fb5118) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_112fb5120) = uVar8;
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



/* Entry: 100934598; end: 1009346c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100934598(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10035c94c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fb50e8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fb50f0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fb50f8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fb5100) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fb5108) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fb5110) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fb5118) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fb5120) = param_9;
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



/* Entry: 1009346c4; end: 10093474b;  */

void FUN_1009346c4(void)

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



/* Entry: 10093474c; end: 100934773;  */

undefined ** FUN_10093474c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100934774; end: 1009347b3;  */

void FUN_100934774(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100934758();
  FUN_100082720("SnapDocSaveServiceProviderWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009347b4; end: 1009347bb;  */

void FUN_1009347b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102eaf720);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009347bc; end: 10093483f;  */

void FUN_1009347bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102eaf720,param_2,&UNK_102eaf724,param_2,&UNK_102eaf74c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100934840; end: 100934867;  */

undefined ** FUN_100934840(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100934868; end: 1009348a7;  */

void FUN_100934868(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010093484c();
  FUN_100082720("SnapDocSendServiceProviderWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009348a8; end: 1009348af;  */

void FUN_1009348a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102eb0d74);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009348b0; end: 100934933;  */

void FUN_1009348b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102eb0d74,param_2,&UNK_102eb0d78,param_2,&UNK_102eb0da0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100934934; end: 10093493f;  */

undefined ** FUN_100934934(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100934940; end: 1009349cb;  */

void FUN_100934940(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009349cc,param_1);
  return;
}



/* Entry: 1009349cc; end: 1009349d3;  */

void FUN_1009349cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102dbf4e4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009349d4; end: 100934a57;  */

void FUN_1009349d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102dbf4e4,param_2,FUN_100934a58,param_2,&UNK_102dbf4e8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100934a58; end: 100934a7f;  */

void FUN_100934a58(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100934a80; end: 100934a87;  */

void FUN_100934a80(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_100360dac();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_100934b30();
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_100934bd4(uStack_48,uStack_50);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 100934a88; end: 100934b2f;  */

void FUN_100934a88(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100360dac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_100934b30();
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_100934bd4(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 100934b30; end: 100934b67;  */

void FUN_100934b30(undefined8 param_1)

{
  if (lRam0000000112f19518 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e730e18);
  return;
}



/* Entry: 100934b68; end: 100934bd3;  */

void FUN_100934b68(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_1000b88b8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 100934bd4; end: 100934d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100934bd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  code *pcVar6;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lVar1 = _DAT_112f194e8;
  lVar3 = 0;
  func_0x000107c5eec8();
  pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar6)(unaff_x20 + lVar1,1,1,lVar3);
  iVar2 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  else {
    lVar4 = 0x112d3bc20;
    FUN_1000285a8(0x112d3bc20,&UNK_10d904ef0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar5 = auStack_a0 + -extraout_x8;
    FUN_100934d60(auStack_80,param_2,&UNK_10db4fcc8,0);
    FUN_100934e4c(puVar5,auStack_80);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(uStack_78);
    func_0x000107c61574(uStack_68);
    func_0x000107c61574(uStack_58);
    (*pcVar6)(puVar5,0,1,lVar3);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_98,0x21,0);
    FUN_1000c90cc(puVar5,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_98);
  }
  return;
}



/* Entry: 100934d40; end: 100934d5f;  */

void FUN_100934d40(void)

{
  func_0x000107c61168(&PTR_PTR_112f192a0);
  return;
}



/* Entry: 100934d60; end: 100934e2b;  */

/* WARNING: Possible PIC construction at 0x000100934e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100934e14) */

void FUN_100934d60(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_100934d40();
  func_0x000107c613fc();
  lVar2 = lVar1;
  func_0x000107c61474();
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  FUN_100934e2c();
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  *(undefined **)(lVar1 + 0x70) = &UNK_10db4fcd8;
  *(long *)(lVar1 + 0x78) = lVar2;
  *(undefined **)(lVar1 + 0x80) = &UNK_10db4fce8;
  *(long *)(lVar1 + 0x88) = lVar2;
  *(undefined8 *)(lVar1 + 0x90) = param_3;
  *(undefined8 *)(lVar1 + 0x98) = param_4;
  *param_1 = &UNK_10db4fcf8;
  param_1[1] = lVar1;
  param_1[2] = &UNK_10db4fd08;
  param_1[3] = lVar1;
  param_1[4] = &UNK_10db4fd18;
  param_1[5] = lVar1;
  func_0x000107c61580(lVar1,2);
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar2);
  return;
}



/* Entry: 100934e2c; end: 100934e4b;  */

void FUN_100934e2c(void)

{
  func_0x000107c61168(&PTR_PTR_112f19478);
  return;
}



/* Entry: 100934e4c; end: 100935027;  */

void FUN_100934e4c(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 (*pauStack_88) [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  ulong uStack_58;
  
  uVar2 = *(undefined8 *)*param_2;
  auVar5 = *param_2;
  auVar18 = *param_2;
  pauVar1 = param_2 + 1;
  uVar3 = *(undefined8 *)*pauVar1;
  auVar7 = *pauVar1;
  auVar6 = *pauVar1;
  pauVar1 = param_2 + 2;
  uVar4 = *(undefined8 *)*pauVar1;
  auVar17 = *pauVar1;
  auVar16 = *pauVar1;
  if (lRam0000000112f19bc0 != -1) {
    func_0x000107c61568(0x112f19bc0,FUN_100935060);
  }
  lVar8 = lRam0000000113805088;
  func_0x000107c5eec4(param_1);
  uVar10 = *(undefined8 *)(lVar8 + 0x10);
  uStack_90 = param_1;
  pauStack_88 = param_2;
  func_0x000107c6157c(uVar10);
  uVar14 = 0x112f19bc8;
  FUN_1000285a8(0x112f19bc8,&UNK_10db51538);
  FUN_100075034(&uStack_58,FUN_100935770,&uStack_a0,uVar14);
  func_0x000107c61574(uVar10);
  if (uStack_58 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uStack_58 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uStack_58 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uStack_58) {
      uVar12 = uStack_58;
    }
    func_0x000107c60480();
  }
  if (uVar12 != 0) {
    if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100935028);
      (*pcVar9)();
    }
    uVar13 = 0;
    uVar14 = *(undefined8 *)(*param_2 + 8);
    uVar15 = *(undefined8 *)(param_2[1] + 8);
    uVar10 = *(undefined8 *)(param_2[2] + 8);
    auVar16 = NEON_ext(auVar16,auVar17,8,1);
    auVar17 = NEON_ext(auVar18,auVar5,8,1);
    auVar18 = NEON_ext(auVar6,auVar7,8,1);
    do {
      if ((uStack_58 & 0xc000000000000001) == 0) {
        uVar11 = *(ulong *)(uStack_58 + uVar13 * 8 + 0x20);
        func_0x000107c6157c(uVar11);
      }
      else {
        uVar11 = uVar13;
        func_0x000102de9a20(uVar13,uStack_58);
      }
      uVar13 = uVar13 + 1;
      uStack_70 = 0;
      uStack_a0 = uVar2;
      uStack_98 = auVar17._0_8_;
      uStack_90 = uVar3;
      pauStack_88 = auVar18._0_8_;
      uStack_80 = uVar4;
      uStack_78 = auVar16._0_8_;
      func_0x000107c6157c(uVar14);
      func_0x000107c6157c(uVar15);
      func_0x000107c6157c(uVar10);
      func_0x00010488e5d4(&uStack_a0);
      func_0x000107c61574(uVar10);
      func_0x000107c61574(uVar15);
      func_0x000107c61574(uVar14);
      func_0x000107c61574(uVar11);
    } while (uVar12 != uVar13);
  }
  func_0x000107c6142c(uStack_58);
  return;
}



/* Entry: 100935028; end: 10093505f;  */

void FUN_100935028(undefined8 param_1)

{
  if (lRam0000000112f19cd8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7313b8);
  return;
}



/* Entry: 100935060; end: 10093517b;  */

void FUN_100935060(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  lVar1 = 0;
  FUN_100935028();
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  FUN_100935260();
  func_0x000107c613fc();
  lVar3 = 0x112f19c70;
  FUN_1000285a8(0x112f19c70,&UNK_10db51598);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar5,1,1,lVar3);
  *(undefined **)(lVar5 + *(int *)(lVar1 + 0x14)) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  FUN_1009352cc(lVar5,puVar4);
  FUN_1000285a8(0x112f19d48,&UNK_10db515f0);
  func_0x000107c613fc();
  FUN_10006c248();
  FUN_10093547c(lVar5);
  *(undefined1 **)(lVar2 + 0x10) = puVar4;
  lRam0000000113805088 = lVar2;
  return;
}



/* Entry: 10093517c; end: 10093524f;  */

void FUN_10093517c(long param_1)

{
  long lVar1;
  
  if (lRam0000000112f19ce8 == 0) {
    lVar1 = 0x112f19c70;
    FUN_10002969c(0x112f19c70,&UNK_10db51598);
    func_0x000107c60188();
    if (lVar1 == 0) {
      lRam0000000112f19ce8 = param_1;
    }
  }
  return;
}



/* Entry: 100935250; end: 10093525f;  */

undefined1  [16] FUN_100935250(void)

{
  return ZEXT816(0x1105d3f80);
}



/* Entry: 100935260; end: 10093527f;  */

void FUN_100935260(void)

{
  func_0x000107c61168(&PTR_PTR_112f19c10);
  return;
}



/* Entry: 100935280; end: 1009352cb;  */

void FUN_100935280(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 1009352cc; end: 10093530f;  */

undefined8 FUN_1009352cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100935028();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100935310; end: 100935433;  */

long FUN_100935310(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = 0x112f19c70;
  FUN_1000285a8(0x112f19c70,&UNK_10db51598);
  lVar8 = *(long *)(lVar3 + -8);
  lVar4 = param_2;
  (**(code **)(lVar8 + 0x30))(param_2,1,lVar3);
  if ((int)lVar4 == 0) {
    lVar4 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
    puVar2 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x30));
    uVar5 = puVar2[1];
    uVar7 = *puVar2;
    uVar11 = puVar2[3];
    uVar10 = puVar2[2];
    uVar6 = puVar2[3];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar7;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    uVar7 = puVar2[5];
    uVar10 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar10;
    pcVar9 = *(code **)(lVar8 + 0x38);
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar7);
    (*pcVar9)(param_1,0,1,lVar3);
  }
  else {
    lVar3 = 0x112f19c78;
    FUN_1000285a8(0x112f19c78,&UNK_10db515a0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100935434; end: 10093547b;  */

int FUN_100935434(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10093547c; end: 1009354b7;  */

undefined8 FUN_10093547c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100935028();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1009354b8; end: 100935557;  */

void FUN_1009354b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112f19c70;
  FUN_1000285a8(0x112f19c70,&UNK_10db51598);
  lVar2 = param_1;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    lVar1 = param_1 + *(int *)(lVar1 + 0x30);
    func_0x000107c61574(*(undefined8 *)(lVar1 + 8));
    func_0x000107c61574(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c61574(*(undefined8 *)(lVar1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 100935558; end: 100935567;  */

void FUN_100935558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e821f78);
  return;
}



/* Entry: 100935568; end: 1009355ab;  */

void FUN_100935568(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 1009355ac; end: 1009355eb;  */

undefined8 FUN_1009355ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1009355ec; end: 10093576f;  */

void FUN_1009355ec(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_1009355ac(param_2,0x112f19c78,&UNK_10db515a0);
  lVar4 = 0x112f19c70;
  FUN_1000285a8(0x112f19c70,&UNK_10db51598);
  puVar7 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x30));
  lVar3 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_2,param_3,lVar3);
  uVar8 = param_4[1];
  uVar9 = param_4[3];
  uVar10 = param_4[5];
  uVar11 = *param_4;
  uVar13 = param_4[3];
  uVar12 = param_4[2];
  puVar7[1] = param_4[1];
  *puVar7 = uVar11;
  puVar7[3] = uVar13;
  puVar7[2] = uVar12;
  uVar11 = param_4[4];
  puVar7[5] = param_4[5];
  puVar7[4] = uVar11;
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_2,0,1,lVar4);
  lVar4 = 0;
  FUN_100935028();
  iVar1 = *(int *)(lVar4 + 0x14);
  lVar4 = *(long *)(param_2 + iVar1);
  puVar7 = *(undefined8 **)(lVar4 + 0x10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x000107c6142c(lVar4);
    puVar5 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar4);
    puVar5 = puVar7;
    func_0x000102deadd4(puVar7,0);
    puVar6 = &uStack_88;
    func_0x000102deac88(puVar6,puVar5 + 4,puVar7,lVar4);
    func_0x000102deae54(uStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    if (puVar6 != puVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100935770);
      (*pcVar2)();
    }
    func_0x000107c6142c(lVar4);
  }
  *(undefined **)(param_2 + iVar1) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *param_1 = puVar5;
  return;
}



/* Entry: 100935770; end: 1009357b3;  */

void FUN_100935770(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009355ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1009357b4; end: 100935803;  */

undefined ** FUN_1009357b4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100935804; end: 1009358fb;  */

void FUN_100935804(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb57b0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb57b0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b07c8;
  func_0x000107c613fc(&UNK_1106b07c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103946a90;
  FUN_10058fa64(&UNK_103946a90,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009358fc; end: 10093591f;  */

void FUN_1009358fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100935920; end: 100935927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100935920(undefined8 *param_1)

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
  FUN_10035ca10();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112fb57c0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112fb57c8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 100935928; end: 1009359ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100935928(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10035ca10();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fb57c0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fb57c8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}


