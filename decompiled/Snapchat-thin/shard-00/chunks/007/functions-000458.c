/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100944630; end: 1009446b7;  */

void FUN_100944630(undefined8 param_1)

{
  if (lRam0000000112f25468 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7378e0);
  return;
}



/* Entry: 1009446b8; end: 10094473f; -[SCWebLensesSendFlowServices init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009446b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130703b8);
  lVar3 = 0;
  FUN_100944740();
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined1 *)(lVar3 + 0x18) = 1;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(param_1 + _DAT_1130703c0) = lVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100944740; end: 10094475f;  */

void FUN_100944740(void)

{
  func_0x000107c61168(&PTR_PTR_1130702d0);
  return;
}



/* Entry: 100944760; end: 100944767;  */

void FUN_100944760(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100944768; end: 100944787;  */

void FUN_100944768(void)

{
  func_0x000107c61168(&PTR_PTR_112f253d8);
  return;
}



/* Entry: 100944788; end: 100944a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100944788(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  *(long *)(unaff_x20 + 0x10) = param_2;
  uVar12 = *(undefined8 *)(param_2 + _DAT_1130703c0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c42d48();
  func_0x000107c61180();
  func_0x000107c61174();
  uVar4 = param_5;
  func_0x000107c4f1c8();
  func_0x000107c61180();
  puVar5 = &UNK_1105e2238;
  func_0x000107c613fc(&UNK_1105e2238,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_7;
  FUN_1000285a8(0x112f1c950,&UNK_10db54f30);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar6 = &UNK_102e9a320;
  FUN_1000bdd8c(&UNK_102e9a320,puVar5);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  lVar7 = 0;
  FUN_100944a80();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar11 = lVar8 + _DAT_112f25828;
  *(undefined8 *)(lVar11 + 8) = 0;
  func_0x000107c61614(lVar11,0);
  *(undefined8 *)(lVar8 + _DAT_112f25868) = 0;
  lVar11 = _DAT_112f25870;
  lVar9 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar8 + lVar11,1,1,lVar9);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f25840);
  *puVar1 = uVar12;
  puVar1[1] = &PTR_DAT_11075d638;
  *(undefined8 *)(lVar8 + _DAT_112f25830) = param_8;
  *(undefined8 *)(lVar8 + _DAT_112f25848) = param_6;
  *(undefined8 *)(lVar8 + _DAT_112f25850) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112f25838) = param_4;
  *(undefined8 *)(lVar8 + _DAT_112f25858) = uVar4;
  *(undefined **)(lVar8 + _DAT_112f25820) = puVar6;
  *(undefined **)(lVar8 + _DAT_112f25860) = puVar5;
  plVar10 = &lStack_70;
  lStack_70 = lVar8;
  lStack_68 = lVar7;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  *(long **)(unaff_x20 + 0x18) = plVar10;
  plVar2 = (long *)(param_2 + _DAT_1130703b8);
  func_0x000107c61428(plVar2,auStack_88,1,0);
  lVar11 = *plVar2;
  *plVar2 = (long)plVar10;
  plVar2[1] = (long)&PTR_DAT_1105e2668;
  func_0x000107c61174(plVar10);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(lVar11);
  return;
}



/* Entry: 100944a5c; end: 100944a7f;  */

void FUN_100944a5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100944a80; end: 100944a97;  */

void FUN_100944a80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100944a98; end: 100944ac7;  */

void FUN_100944a98(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 100944ac8; end: 100944b7f;  */

void FUN_100944ac8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_78 = &UNK_10db60568;
  puStack_70 = &UNK_10db60580;
  puStack_68 = PTR___sBOWV_11034d658 + 0x40;
  puStack_58 = &UNK_10db60598;
  puStack_40 = PTR___sBoWV_11034d678 + 0x40;
  puStack_48 = &UNK_10db60598;
  puStack_30 = &UNK_10db605b0;
  lVar1 = 0x13f;
  puStack_60 = puStack_68;
  puStack_50 = puStack_68;
  puStack_38 = puStack_68;
  FUN_1000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,0xb,&puStack_78,param_1 + 0x50);
  }
  return;
}



/* Entry: 100944b80; end: 100944bdb;  */

void FUN_100944b80(void)

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



/* Entry: 100944bdc; end: 100944c03;  */

undefined ** FUN_100944bdc(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100944c04; end: 100944c43;  */

void FUN_100944c04(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100944be8();
  FUN_100082720("WebLensesSendFlowServiceProviderWrapperScopeInitializationPluginProvider",0x48,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100944c44; end: 100944c4b;  */

void FUN_100944c44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e99cac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100944c4c; end: 100944ccf;  */

void FUN_100944c4c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e99cac,param_2,&UNK_102e99cb0,param_2,&UNK_102e99cd8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100944cd0; end: 100944cdb;  */

undefined ** FUN_100944cd0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100944cdc; end: 100944d07;  */

void FUN_100944cdc(void)

{
  FUN_1008f5bec();
  return;
}



/* Entry: 100944d08; end: 100944d0f;  */

void FUN_100944d08(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101fa9e38);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100944d10; end: 100944d93;  */

void FUN_100944d10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101fa9e38,param_2,&UNK_101fa9e3c,param_2,&UNK_101fa9e64,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100944d94; end: 100944db7;  */

undefined ** FUN_100944d94(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100944db8; end: 100944e4f;  */

void FUN_100944db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104e28b8;
  func_0x000107c613fc(&UNK_1104e28b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100944e50,puVar1);
  return;
}



/* Entry: 100944e50; end: 100944e5b;  */

void FUN_100944e50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = uVar1;
  FUN_100944e5c();
  func_0x000107c613fc();
  puVar4 = &UNK_1104e28e0;
  func_0x000107c613fc(&UNK_1104e28e0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,uVar3);
  puVar5 = &UNK_1104e29e0;
  func_0x000107c613fc(&UNK_1104e29e0,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  func_0x000107c61580(uVar1,2);
  func_0x000107c61580(uVar2,2);
  func_0x000107c61580(uVar7,2);
  uVar6 = 3;
  func_0x0001001ca524(3,0,0x78,3,0,0,&UNK_10da6e798,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar6);
  *param_1 = uVar3;
  param_1[1] = &PTR_DAT_1104e2930;
  return;
}



/* Entry: 100944e5c; end: 100944e7b;  */

void FUN_100944e5c(void)

{
  func_0x000107c61168(&PTR_PTR_112e64440);
  return;
}



/* Entry: 100944e7c; end: 100944faf;  */

void FUN_100944e7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_2;
  FUN_100944e5c();
  func_0x000107c613fc();
  puVar2 = &UNK_1104e28e0;
  func_0x000107c613fc(&UNK_1104e28e0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,uVar1);
  puVar3 = &UNK_1104e29e0;
  func_0x000107c613fc(&UNK_1104e29e0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  func_0x000107c61580(param_2,2);
  func_0x000107c61580(param_3,2);
  func_0x000107c61580(param_4,2);
  uVar4 = 3;
  func_0x0001001ca524(3,0,0x78,3,0,0,&UNK_10da6e798,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104e2930;
  return;
}



/* Entry: 100944fb0; end: 100944fd3;  */

void FUN_100944fb0(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100944fd4; end: 100944fdb;  */

void FUN_100944fd4(void)

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



/* Entry: 100944fdc; end: 10094500f;  */

void FUN_100944fdc(void)

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



/* Entry: 100945010; end: 100945027;  */

void FUN_100945010(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100945028; end: 10094505b;  */

void FUN_100945028(void)

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



/* Entry: 10094505c; end: 100945087;  */

void FUN_10094505c(void)

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



/* Entry: 100945088; end: 1009450d3;  */

void FUN_100945088(void)

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



/* Entry: 1009450d4; end: 1009450df;  */

void FUN_1009450d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009450e0; end: 10094515b;  */

void FUN_1009450e0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094515c; end: 100945173;  */

void FUN_10094515c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100945174; end: 1009451cf;  */

void FUN_100945174(void)

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



/* Entry: 1009451d0; end: 10094522b;  */

void FUN_1009451d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094522c; end: 100945257;  */

void FUN_10094522c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100945258; end: 10094525f;  */

void FUN_100945258(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112e01400;
  FUN_1000285a8(0x112e01400,&UNK_10d9d2340);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100945260; end: 1009452eb;  */

void FUN_100945260(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112e01400;
  FUN_1000285a8(0x112e01400,&UNK_10d9d2340);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1009452ec; end: 1009452f3;  */

void FUN_1009452ec(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1009452f4; end: 10094531f;  */

void FUN_1009452f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100945320; end: 100945347;  */

undefined ** FUN_100945320(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100945348; end: 100945387;  */

void FUN_100945348(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010094532c();
  FUN_100082720("AIFTopLevelCardsHelperServicesProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100945388; end: 10094538f;  */

void FUN_100945388(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cbc424);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100945390; end: 100945413;  */

void FUN_100945390(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cbc424,param_2,&UNK_101cbc428,param_2,&UNK_101cbc450,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100945414; end: 10094543b;  */

undefined ** FUN_100945414(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094543c; end: 10094547b;  */

void FUN_10094543c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100945420();
  FUN_100082720("AIReplyGeneratingFactoryServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10094547c; end: 100945483;  */

void FUN_10094547c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c9c680);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100945484; end: 100945507;  */

void FUN_100945484(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c9c680,param_2,&UNK_101c9c684,param_2,&UNK_101c9c6ac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100945508; end: 10094552b;  */

undefined ** FUN_100945508(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094552c; end: 1009455ab;  */

void FUN_10094552c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b54e0;
  func_0x000107c613fc(&UNK_1106b54e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009455ac,puVar1);
  return;
}



/* Entry: 1009455ac; end: 1009455b3;  */

void FUN_1009455ac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fbb698,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fbb698,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b5578;
  func_0x000107c613fc(&UNK_1106b5578,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103990d74;
  FUN_10058fa64(&UNK_103990d74,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009455b4; end: 1009456ab;  */

void FUN_1009455b4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fbb698,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fbb698,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b5578;
  func_0x000107c613fc(&UNK_1106b5578,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103990d74;
  FUN_10058fa64(&UNK_103990d74,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009456ac; end: 1009456cf;  */

void FUN_1009456ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009456d0; end: 1009456df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009456d0(undefined8 *param_1)

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
  FUN_1002b5b14();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112fbb6a8) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112fbb6b0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112fbb6b8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112fbb6c0) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112fbb6c8) = uVar9;
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



/* Entry: 1009456e0; end: 1009457bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009456e0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1002b5b14();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fbb6a8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fbb6b0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fbb6b8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fbb6c0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fbb6c8) = param_6;
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



/* Entry: 1009457bc; end: 10094582b;  */

void FUN_1009457bc(void)

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



/* Entry: 10094582c; end: 10094584f;  */

undefined ** FUN_10094582c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100945850; end: 1009458cf;  */

void FUN_100945850(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110447938;
  func_0x000107c613fc(&UNK_110447938,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009458d0,puVar1);
  return;
}



/* Entry: 1009458d0; end: 1009458d7;  */

void FUN_1009458d0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100083b20(&uStack_38);
  func_0x000100945a4c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_38;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  uVar3 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c6157c(uVar1);
  FUN_100945a6c();
  func_0x000107c61170(uVar3);
  *param_1 = lVar2;
  param_1[1] = (long)&PTR_DAT_110447960;
  return;
}



/* Entry: 1009458d8; end: 10094595b;  */

void FUN_1009458d8(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x000100945a4c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  *(undefined8 *)(param_2 + 0x18) = param_3;
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c6157c(param_3);
  FUN_100945a6c();
  func_0x000107c61170(uVar1);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_110447960;
  return;
}



/* Entry: 10094595c; end: 100945967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094595c(undefined8 *param_1)

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
  FUN_1002c716c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112ff8ed8) = 0;
  *(long *)(lVar5 + _DAT_112ff8ee0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ff8ee8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ff8ef0) = uVar7;
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



/* Entry: 100945968; end: 100945a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100945968(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_1002c716c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ff8ed8) = 0;
  *(long *)(lVar3 + _DAT_112ff8ee0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ff8ee8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112ff8ef0) = param_4;
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



/* Entry: 100945a18; end: 100945a6b;  */

void FUN_100945a18(void)

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



/* Entry: 100945a6c; end: 100945b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100945a6c(void)

{
  long lVar1;
  undefined1 auStack_70 [24];
  long in_stack_ffffffffffffffa8;
  
  func_0x000107c614f0();
  FUN_100083b20(&stack0xffffffffffffffa8);
  lVar1 = _DAT_112ff9108;
  func_0x000107c61428(in_stack_ffffffffffffffa8 + _DAT_112ff9108,auStack_70,0x21,0);
  func_0x000107c61174();
  FUN_100945ca4(&stack0xffffffffffffffa8,in_stack_ffffffffffffffa8 + lVar1);
  func_0x000107c614a8(auStack_70);
  func_0x000107c61170(in_stack_ffffffffffffffa8);
  func_0x000100945cf4(&stack0xffffffffffffffa8);
  return;
}



/* Entry: 100945b14; end: 100945b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100945b14(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [40];
  
  FUN_1000a1598();
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff9120);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff9108);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  FUN_100083b20(auStack_58);
  FUN_100945c8c(auStack_58,unaff_x20 + _DAT_112ff9118);
  puVar2 = auStack_68;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 100945b1c; end: 100945bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100945b1c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [40];
  
  FUN_1000a1598();
  lVar2 = param_2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff9120);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff9108);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  FUN_100083b20(auStack_58);
  FUN_100945c8c(auStack_58,lVar2 + _DAT_112ff9118);
  plVar3 = &lStack_68;
  lStack_68 = lVar2;
  lStack_60 = param_2;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 100945bbc; end: 100945bc3;  */

/* WARNING: Possible PIC construction at 0x000100945c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100945c30) */

void FUN_100945bbc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  FUN_100945bc4();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x10) = lVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1103f5de0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 100945bc4; end: 100945be3;  */

void FUN_100945bc4(void)

{
  func_0x000107c61168(&PTR_PTR_112dbfc88);
  return;
}



/* Entry: 100945be4; end: 100945c43;  */

/* WARNING: Possible PIC construction at 0x000100945c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100945c30) */

void FUN_100945be4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_100945bc4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1103f5de0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100945c44; end: 100945c4f;  */

void FUN_100945c44(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000100945c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100945c50; end: 100945c8b;  */

void FUN_100945c50(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000100945c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100945c8c; end: 100945ca3;  */

undefined8 * FUN_100945c8c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 100945ca4; end: 100945d3b;  */

undefined8 FUN_100945ca4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ff8ef8;
  FUN_1000285a8(0x112ff8ef8,&UNK_10dc67b90);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100945d3c; end: 100945d67;  */

void FUN_100945d3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100945d68; end: 100945d9f;  */

undefined ** FUN_100945d68(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100945da0; end: 100945df3;  */

void FUN_100945da0(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100945df4; end: 100945f07;  */

void FUN_100945df4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  code *param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  FUN_100083b20(&lStack_58);
  FUN_100083b20(&lStack_60);
  FUN_100083b20(&uStack_68);
  (*param_5)();
  func_0x000107c613fc();
  *(long *)(param_2 + 0x10) = lStack_60;
  lVar1 = lStack_60;
  func_0x000107c6157c();
  (*param_6)();
  func_0x000107c61574(uStack_68);
  func_0x000107c61428(lStack_60 + 0x10,auStack_80,1,0);
  uVar2 = *(undefined8 *)(lStack_60 + 0x10);
  *(long *)(lStack_60 + 0x10) = lVar1;
  func_0x000107c61574(lStack_60);
  func_0x000107c6142c(uVar2);
  func_0x000107c61428(lStack_58 + 0x18,auStack_98,1,0);
  *(undefined ***)(lStack_58 + 0x20) = &PTR_DAT_1104e42c8;
  func_0x000107c61604(lStack_58 + 0x18,lStack_60);
  func_0x000107c61574(lStack_58);
  *param_1 = param_2;
  param_1[1] = param_7;
  return;
}



/* Entry: 100945f08; end: 100945f3b;  */

void FUN_100945f08(void)

{
  long unaff_x20;
  
  FUN_100945df4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_100945fd4,FUN_100946020,&PTR_DAT_1104e4528);
  return;
}



/* Entry: 100945f3c; end: 100945f57;  */

void FUN_100945f3c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x112e65278;
  FUN_1000285a8(0x112e65278,&UNK_10da70180);
  func_0x000107c613fc();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  func_0x000107c61614(lVar1 + 0x18,0);
  *param_1 = lVar1;
  return;
}



/* Entry: 100945f58; end: 100945fd3;  */

void FUN_100945f58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112df87d8,&UNK_10d9c8d00);
  func_0x000107c613fc();
  uVar1 = 0x10094618c;
  FUN_1000841f8(0x10094618c,param_2);
  FUN_100084214("SCActiveUserSessionScopeApplicationLifeCycleListenerPluginRegistryServiceProvider",
                0x51,2);
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100945fd4; end: 10094601f;  */

void FUN_100945fd4(void)

{
  func_0x000107c61168(&PTR_PTR_112e65148);
  return;
}



/* Entry: 100946020; end: 10094613f;  */

undefined * FUN_100946020(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_68;
  
  func_0x000100945ff4();
  uVar9 = *(ulong *)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        if (*(ulong *)(param_1 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100946140);
          (*pcVar4)();
        }
        uVar1 = uVar10 + 1;
        FUN_10008a7c8(&lStack_68);
        lVar3 = lStack_68;
        if (lStack_68 != 0) break;
        uVar10 = uVar1;
        if (uVar9 == uVar1) goto LAB_100946110;
      }
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_1009461cc(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar2 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_1009461cc(puVar8,uVar2 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
      *(long *)(puVar8 + uVar2 * 8 + 0x20) = lVar3;
      bVar5 = uVar9 - 1 != uVar10;
      uVar10 = uVar1;
    } while (bVar5);
  }
LAB_100946110:
  func_0x000107c6142c(param_1);
  return puVar8;
}



/* Entry: 100946140; end: 1009461cb;  */

void FUN_100946140(undefined8 param_1)

{
  FUN_1000285a8(0x112d9dd00,&UNK_10d93e920);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101c4bd60,param_1);
  return;
}



/* Entry: 1009461cc; end: 1009462fb;  */

undefined * FUN_1009461cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009462fc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e65250;
    FUN_1000285a8(0x112e65250,&UNK_10da70158);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e65258;
    FUN_1000285a8(0x112e65258,&UNK_10da70160);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1009462fc; end: 100946323;  */

void FUN_1009462fc(void)

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



/* Entry: 100946324; end: 1009463a3;  */

void FUN_100946324(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110442050;
  func_0x000107c613fc(&UNK_110442050,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009463a4,puVar1);
  return;
}



/* Entry: 1009463a4; end: 1009463ab;  */

void FUN_1009463a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112dfd2d8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112dfd2d8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110442e28;
  func_0x000107c613fc(&UNK_110442e28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_101ae2458;
  FUN_10058fa64(&UNK_101ae2458,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009463ac; end: 1009464a3;  */

void FUN_1009463ac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112dfd2d8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112dfd2d8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110442e28;
  func_0x000107c613fc(&UNK_110442e28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_101ae2458;
  FUN_10058fa64(&UNK_101ae2458,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009464a4; end: 1009464c7;  */

void FUN_1009464a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009464c8; end: 100947157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009464c8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
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
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1002d9dc8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dfd2e8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112dfd2f0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112dfd2f8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112dfd300) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112dfd308) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112dfd310) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112dfd318) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112dfd320) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112dfd328) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112dfd330) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112dfd338) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112dfd340) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112dfd348) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112dfd350) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112dfd358) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112dfd360) = param_17;
  *(undefined8 *)(lVar3 + _DAT_112dfd368) = param_18;
  *(undefined8 *)(lVar3 + _DAT_112dfd370) = param_19;
  *(undefined8 *)(lVar3 + _DAT_112dfd378) = param_20;
  *(undefined8 *)(lVar3 + _DAT_112dfd380) = param_21;
  *(undefined8 *)(lVar3 + _DAT_112dfd388) = param_22;
  *(undefined8 *)(lVar3 + _DAT_112dfd390) = param_23;
  *(undefined8 *)(lVar3 + _DAT_112dfd398) = param_24;
  *(undefined8 *)(lVar3 + _DAT_112dfd3a0) = param_25;
  *(undefined8 *)(lVar3 + _DAT_112dfd3a8) = param_26;
  *(undefined8 *)(lVar3 + _DAT_112dfd3b0) = param_27;
  *(undefined8 *)(lVar3 + _DAT_112dfd3b8) = param_28;
  *(undefined8 *)(lVar3 + _DAT_112dfd3c0) = param_29;
  *(undefined8 *)(lVar3 + _DAT_112dfd3c8) = param_30;
  *(undefined8 *)(lVar3 + _DAT_112dfd3d0) = param_31;
  *(undefined8 *)(lVar3 + _DAT_112dfd3d8) = param_32;
  *(undefined8 *)(lVar3 + _DAT_112dfd3e0) = param_33;
  *(undefined8 *)(lVar3 + _DAT_112dfd3e8) = param_34;
  *(undefined8 *)(lVar3 + _DAT_112dfd3f0) = param_35;
  *(undefined8 *)(lVar3 + _DAT_112dfd3f8) = param_36;
  *(undefined8 *)(lVar3 + _DAT_112dfd400) = param_37;
  *(undefined8 *)(lVar3 + _DAT_112dfd408) = param_38;
  *(undefined8 *)(lVar3 + _DAT_112dfd410) = param_39;
  *(undefined8 *)(lVar3 + _DAT_112dfd418) = param_40;
  *(undefined8 *)(lVar3 + _DAT_112dfd420) = param_41;
  *(undefined8 *)(lVar3 + _DAT_112dfd428) = param_42;
  *(undefined8 *)(lVar3 + _DAT_112dfd430) = param_43;
  *(undefined8 *)(lVar3 + _DAT_112dfd438) = param_44;
  *(undefined8 *)(lVar3 + _DAT_112dfd440) = param_45;
  *(undefined8 *)(lVar3 + _DAT_112dfd448) = param_46;
  *(undefined8 *)(lVar3 + _DAT_112dfd450) = param_47;
  *(undefined8 *)(lVar3 + _DAT_112dfd458) = param_48;
  *(undefined8 *)(lVar3 + _DAT_112dfd460) = param_49;
  *(undefined8 *)(lVar3 + _DAT_112dfd468) = param_50;
  *(undefined8 *)(lVar3 + _DAT_112dfd470) = param_51;
  *(undefined8 *)(lVar3 + _DAT_112dfd478) = param_52;
  *(undefined8 *)(lVar3 + _DAT_112dfd480) = param_53;
  *(undefined8 *)(lVar3 + _DAT_112dfd488) = param_54;
  *(undefined8 *)(lVar3 + _DAT_112dfd490) = param_55;
  *(undefined8 *)(lVar3 + _DAT_112dfd498) = param_56;
  *(undefined8 *)(lVar3 + _DAT_112dfd4a0) = param_57;
  *(undefined8 *)(lVar3 + _DAT_112dfd4a8) = param_58;
  *(undefined8 *)(lVar3 + _DAT_112dfd4b0) = param_59;
  *(undefined8 *)(lVar3 + _DAT_112dfd4b8) = param_60;
  *(undefined8 *)(lVar3 + _DAT_112dfd4c0) = param_61;
  *(undefined8 *)(lVar3 + _DAT_112dfd4c8) = param_62;
  *(undefined8 *)(lVar3 + _DAT_112dfd4d0) = param_63;
  *(undefined8 *)(lVar3 + _DAT_112dfd4d8) = param_64;
  *(undefined8 *)(lVar3 + _DAT_112dfd4e0) = param_65;
  *(undefined8 *)(lVar3 + _DAT_112dfd4e8) = param_66;
  *(undefined8 *)(lVar3 + _DAT_112dfd4f0) = param_67;
  *(undefined8 *)(lVar3 + _DAT_112dfd4f8) = param_68;
  *(undefined8 *)(lVar3 + _DAT_112dfd500) = param_69;
  *(undefined8 *)(lVar3 + _DAT_112dfd508) = param_70;
  *(undefined8 *)(lVar3 + _DAT_112dfd510) = param_71;
  *(undefined8 *)(lVar3 + _DAT_112dfd518) = in_stack_000001f0;
  *(undefined8 *)(lVar3 + _DAT_112dfd520) = in_stack_000001f8;
  *(undefined8 *)(lVar3 + _DAT_112dfd528) = in_stack_00000200;
  *(undefined8 *)(lVar3 + _DAT_112dfd530) = in_stack_00000208;
  *(undefined8 *)(lVar3 + _DAT_112dfd538) = in_stack_00000210;
  *(undefined8 *)(lVar3 + _DAT_112dfd540) = in_stack_00000218;
  *(undefined8 *)(lVar3 + _DAT_112dfd548) = in_stack_00000220;
  *(undefined8 *)(lVar3 + _DAT_112dfd550) = in_stack_00000228;
  *(undefined8 *)(lVar3 + _DAT_112dfd558) = in_stack_00000230;
  *(undefined8 *)(lVar3 + _DAT_112dfd560) = in_stack_00000238;
  *(undefined8 *)(lVar3 + _DAT_112dfd568) = in_stack_00000240;
  *(undefined8 *)(lVar3 + _DAT_112dfd570) = in_stack_00000248;
  *(undefined8 *)(lVar3 + _DAT_112dfd578) = in_stack_00000250;
  *(undefined8 *)(lVar3 + _DAT_112dfd580) = in_stack_00000258;
  *(undefined8 *)(lVar3 + _DAT_112dfd588) = in_stack_00000260;
  *(undefined8 *)(lVar3 + _DAT_112dfd590) = in_stack_00000268;
  *(undefined8 *)(lVar3 + _DAT_112dfd598) = in_stack_00000270;
  *(undefined8 *)(lVar3 + _DAT_112dfd5a0) = in_stack_00000278;
  *(undefined8 *)(lVar3 + _DAT_112dfd5a8) = in_stack_00000280;
  *(undefined8 *)(lVar3 + _DAT_112dfd5b0) = in_stack_00000288;
  *(undefined8 *)(lVar3 + _DAT_112dfd5b8) = in_stack_00000290;
  *(undefined8 *)(lVar3 + _DAT_112dfd5c0) = in_stack_00000298;
  *(undefined8 *)(lVar3 + _DAT_112dfd5c8) = in_stack_000002a0;
  *(undefined8 *)(lVar3 + _DAT_112dfd5d0) = in_stack_000002a8;
  *(undefined8 *)(lVar3 + _DAT_112dfd5d8) = in_stack_000002b0;
  *(undefined8 *)(lVar3 + _DAT_112dfd5e0) = in_stack_000002b8;
  *(undefined8 *)(lVar3 + _DAT_112dfd5e8) = in_stack_000002c0;
  *(undefined8 *)(lVar3 + _DAT_112dfd5f0) = in_stack_000002c8;
  *(undefined8 *)(lVar3 + _DAT_112dfd5f8) = in_stack_000002d0;
  *(undefined8 *)(lVar3 + _DAT_112dfd600) = in_stack_000002d8;
  *(undefined8 *)(lVar3 + _DAT_112dfd608) = in_stack_000002e0;
  *(undefined8 *)(lVar3 + _DAT_112dfd610) = in_stack_000002e8;
  *(undefined8 *)(lVar3 + _DAT_112dfd618) = in_stack_000002f0;
  *(undefined8 *)(lVar3 + _DAT_112dfd620) = in_stack_000002f8;
  *(undefined8 *)(lVar3 + _DAT_112dfd628) = in_stack_00000300;
  *(undefined8 *)(lVar3 + _DAT_112dfd630) = in_stack_00000308;
  *(undefined8 *)(lVar3 + _DAT_112dfd638) = in_stack_00000310;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
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
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
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
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_59);
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
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_000002c0);
  func_0x000107c6157c(in_stack_000002c8);
  func_0x000107c6157c(in_stack_000002d0);
  func_0x000107c6157c(in_stack_000002d8);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(in_stack_000002e8);
  func_0x000107c6157c(in_stack_000002f0);
  func_0x000107c6157c(in_stack_000002f8);
  func_0x000107c6157c(in_stack_00000300);
  func_0x000107c6157c(in_stack_00000308);
  func_0x000107c6157c(in_stack_00000310);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 100947158; end: 1009472eb;  */

void FUN_100947158(void)

{
  long unaff_x20;
  
  FUN_1009464c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1009472ec; end: 10094768b;  */

void FUN_1009472ec(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094768c; end: 1009476af;  */

undefined ** FUN_10094768c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009476b0; end: 1009477d3;  */

void FUN_1009476b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11049f498;
  func_0x000107c613fc(&UNK_11049f498,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(0x100947748,puVar1);
  return;
}



/* Entry: 1009477d4; end: 1009477f3;  */

void FUN_1009477d4(void)

{
  func_0x000107c61168(&PTR_PTR_112e40580);
  return;
}



/* Entry: 1009477f4; end: 100947983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009477f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_3 + _DAT_113092298);
  func_0x000107c615f0(uVar6);
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f000020);
  uVar2 = uVar6;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x0001000ab060(0);
    FUN_100079360(0);
    uVar3 = 0;
    func_0x0001009479b0(0);
    FUN_1009479d0();
    uVar1 = uVar3;
    FUN_100947a24();
    func_0x000107c61170(uVar3);
    uVar4 = 0;
    func_0x0001000aad1c(0);
    FUN_1000aad3c();
    puVar5 = &UNK_11049f4c0;
    func_0x000107c613fc(&UNK_11049f4c0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(param_2);
    uVar3 = uVar1;
    FUN_100947c8c(uVar1,uVar4,0,0,&UNK_101f1b088,puVar5);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar3);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 100947984; end: 1009479cf;  */

void FUN_100947984(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009479d0; end: 1009479d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009479d0(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309bab8) = 1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1009479d8; end: 100947a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009479d8(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309bab8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}


