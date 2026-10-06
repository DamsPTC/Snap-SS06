/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10204238c; end: 10204239f;  */

void FUN_10204238c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104c0660;
  return;
}



/* Entry: 1020423a0; end: 10204255b;  */

void FUN_1020423a0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9e30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f05bf00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f05ca50);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10204255c);
  (*pcVar1)();
}



/* Entry: 10204255c; end: 102042577;  */

undefined ** FUN_10204255c(void)

{
  return &PTR_DAT_113066b20;
}



/* Entry: 102042578; end: 102042597;  */

void FUN_102042578(void)

{
  func_0x000107c61168(&PTR_PTR_112e52548);
  return;
}



/* Entry: 102042598; end: 1020425cb;  */

undefined1  [16] FUN_102042598(void)

{
  return ZEXT816(0x1104c06a0);
}



/* Entry: 1020425cc; end: 1020425f3;  */

void FUN_1020425cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1020425f4; end: 1020425fb;  */

undefined8 FUN_1020425f4(void)

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



/* Entry: 1020425fc; end: 1020433f7;  */

void FUN_1020425fc(long *param_1,long param_2)

{
  undefined *puVar1;
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
  FUN_1020435f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  puVar1 = PTR_PTR_1126a9e38;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f05bf00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef27f00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f05c080);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f05ca80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar14 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar15);
  uVar14 = 0x65536b6165727473;
  func_0x000107c5fadc(0x65536b6165727473,0xee00736563697672);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2e280);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar14 = uVar15;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
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
  *(undefined8 *)(param_2 + 0x70) = uVar14;
  *param_1 = param_2;
  return;
}



/* Entry: 1020433f8; end: 102043493;  */

void FUN_1020433f8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 102043494; end: 1020434e7;  */

void FUN_102043494(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1020434e8; end: 1020434ef;  */

undefined8 FUN_1020434e8(void)

{
  return 0x1b;
}



/* Entry: 1020434f0; end: 102043573;  */

void FUN_1020434f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x102043644,param_2,FUN_102043648,param_2,FUN_102043670,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102043574; end: 1020435c3;  */

undefined8 FUN_102043574(void)

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



/* Entry: 1020435c4; end: 1020435f3;  */

undefined ** FUN_1020435c4(void)

{
  return &PTR_DAT_113066b20;
}



/* Entry: 1020435f4; end: 102043613;  */

void FUN_1020435f4(void)

{
  func_0x000107c61168(&PTR_PTR_112e52628);
  return;
}



/* Entry: 102043614; end: 102043647;  */

undefined1  [16] FUN_102043614(void)

{
  return ZEXT816(0x1104c0740);
}



/* Entry: 102043648; end: 10204366f;  */

void FUN_102043648(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102043670; end: 102043677;  */

undefined8 FUN_102043670(void)

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



/* Entry: 102043678; end: 102043d43;  */

void FUN_102043678(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  FUN_102043e9c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x0001000ad7c4();
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  puVar6 = PTR_PTR_1126a9e40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f05bf00);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar6);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar9);
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05cab0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f05c280);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f017eb0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar7);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f05cad0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 102043d44; end: 102043d8f;  */

void FUN_102043d44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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



/* Entry: 102043d90; end: 102043d97;  */

undefined8 FUN_102043d90(void)

{
  return 0x1b;
}



/* Entry: 102043d98; end: 102043e1b;  */

void FUN_102043d98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102043edc,param_2,FUN_102043ee0,param_2,FUN_102043f08,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102043e1c; end: 102043e6b;  */

undefined8 FUN_102043e1c(void)

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



/* Entry: 102043e6c; end: 102043e9b;  */

void FUN_102043e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104c07a0;
  return;
}



/* Entry: 102043e9c; end: 102043ebb;  */

void FUN_102043e9c(void)

{
  func_0x000107c61168(&PTR_PTR_112e52750);
  return;
}



/* Entry: 102043ebc; end: 102043edf;  */

undefined1  [16] FUN_102043ebc(void)

{
  return ZEXT816(0x1104c07e0);
}



/* Entry: 102043ee0; end: 102043f07;  */

void FUN_102043ee0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102043f08; end: 102043f0f;  */

undefined8 FUN_102043f08(void)

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



/* Entry: 102043f10; end: 102043fbf;  */

void FUN_102043f10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102044318();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102044154(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102043fc0; end: 10204402f;  */

undefined8 FUN_102043fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102044154(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102044030; end: 102044063;  */

void FUN_102044030(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102044064; end: 10204406b;  */

undefined8 FUN_102044064(void)

{
  return 0x1b;
}



/* Entry: 10204406c; end: 1020440ef;  */

void FUN_10204406c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102044358,param_2,FUN_10204435c,param_2,FUN_102044384,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1020440f0; end: 10204413f;  */

undefined8 FUN_1020440f0(void)

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



/* Entry: 102044140; end: 102044153;  */

void FUN_102044140(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104c0820;
  return;
}



/* Entry: 102044154; end: 1020442fb;  */

void FUN_102044154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9e48;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f05bf00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f017eb0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1020442fc; end: 102044317;  */

undefined ** FUN_1020442fc(void)

{
  return &PTR_DAT_113066b20;
}



/* Entry: 102044318; end: 102044337;  */

void FUN_102044318(void)

{
  func_0x000107c61168(&PTR_PTR_112e52840);
  return;
}



/* Entry: 102044338; end: 10204435b;  */

undefined1  [16] FUN_102044338(void)

{
  return ZEXT816(0x1104c0860);
}



/* Entry: 10204435c; end: 102044383;  */

void FUN_10204435c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102044384; end: 10204438b;  */

undefined8 FUN_102044384(void)

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



/* Entry: 10204438c; end: 1020447c3;  */

void FUN_10204438c(long *param_1,long param_2)

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
  FUN_102044950();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  func_0x000102048cb0(0);
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
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  func_0x000102048480();
  *(undefined8 *)(param_2 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  FUN_1020484e4();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(param_2 + 0x50) = uVar10;
  *param_1 = param_2;
  return;
}



/* Entry: 1020447c4; end: 10204483f;  */

void FUN_1020447c4(void)

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
  return;
}



/* Entry: 102044840; end: 102044893;  */

void FUN_102044840(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102044894; end: 10204489b;  */

undefined8 FUN_102044894(void)

{
  return 0x1b;
}



/* Entry: 10204489c; end: 10204491f;  */

void FUN_10204489c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1020449a0,param_2,FUN_1020449a4,param_2,0x1020449cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102044920; end: 10204494f;  */

undefined ** FUN_102044920(void)

{
  return &PTR_DAT_113066b20;
}



/* Entry: 102044950; end: 10204496f;  */

void FUN_102044950(void)

{
  func_0x000107c61168(&PTR_PTR_112e52918);
  return;
}



/* Entry: 102044970; end: 1020449a3;  */

undefined1  [16] FUN_102044970(void)

{
  return ZEXT816(0x1104c08e0);
}



/* Entry: 1020449a4; end: 1020449f7;  */

void FUN_1020449a4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1020449f8; end: 102044b53;  */

void FUN_1020449f8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102044c44();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_102049028(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_102048e90(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 102044b54; end: 102044b87;  */

void FUN_102044b54(void)

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



/* Entry: 102044b88; end: 102044b8f;  */

undefined8 FUN_102044b88(void)

{
  return 0x1b;
}



/* Entry: 102044b90; end: 102044c13;  */

void FUN_102044b90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102044c84,param_2,FUN_102044c88,param_2,0x102044cb0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102044c14; end: 102044c43;  */

undefined ** FUN_102044c14(void)

{
  return &PTR_DAT_113066b20;
}



/* Entry: 102044c44; end: 102044c63;  */

void FUN_102044c44(void)

{
  func_0x000107c61168(&PTR_PTR_112e52a20);
  return;
}



/* Entry: 102044c64; end: 102044c87;  */

undefined1  [16] FUN_102044c64(void)

{
  return ZEXT816(0x1104c0980);
}



/* Entry: 102044c88; end: 102044cdb;  */

void FUN_102044c88(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102044cdc; end: 102045113;  */

void FUN_102044cdc(long *param_1,long param_2)

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
  FUN_1020452a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  func_0x00010211e6c0(0);
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
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  func_0x00010211dd90();
  *(undefined8 *)(param_2 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  FUN_10211def4();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(param_2 + 0x50) = uVar10;
  *param_1 = param_2;
  return;
}



/* Entry: 102045114; end: 10204518f;  */

void FUN_102045114(void)

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
  return;
}



/* Entry: 102045190; end: 1020451e3;  */

void FUN_102045190(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1020451e4; end: 1020451eb;  */

undefined8 FUN_1020451e4(void)

{
  return 0x1b;
}



/* Entry: 1020451ec; end: 10204526f;  */

void FUN_1020451ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1020452f0,param_2,FUN_1020452f4,param_2,0x10204531c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102045270; end: 10204529f;  */

undefined ** FUN_102045270(void)

{
  return &PTR_DAT_113066b20;
}



/* Entry: 1020452a0; end: 1020452bf;  */

void FUN_1020452a0(void)

{
  func_0x000107c61168(&PTR_PTR_112e52af8);
  return;
}



/* Entry: 1020452c0; end: 1020452f3;  */

undefined1  [16] FUN_1020452c0(void)

{
  return ZEXT816(0x1104c0a00);
}



/* Entry: 1020452f4; end: 102045347;  */

void FUN_1020452f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102045348; end: 102045ab3;  */

void FUN_102045348(long *param_1,long param_2)

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
  FUN_102045c78();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  FUN_10206d850();
  func_0x000107c613fc();
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
  func_0x000107c61174(uStack_a0);
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
  func_0x000107c615f4(uStack_d0,2);
  uVar12 = uStack_d8;
  func_0x000107c61174();
  uVar13 = uStack_e0;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = uVar14;
  FUN_10206bfa0();
  *(undefined8 *)(param_2 + 0x10) = uVar15;
  uVar16 = uVar15;
  func_0x000107c6157c();
  FUN_10206bfd4();
  func_0x000107c61574(uVar15);
  func_0x000107c61170(uVar14);
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
  func_0x000107c615e8(uStack_d0);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  *(undefined8 *)(param_2 + 0x88) = uVar16;
  *param_1 = param_2;
  return;
}



/* Entry: 102045ab4; end: 102045b67;  */

void FUN_102045ab4(void)

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
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 102045b68; end: 102045bbb;  */

void FUN_102045b68(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102045bbc; end: 102045bc3;  */

undefined8 FUN_102045bbc(void)

{
  return 0x1b;
}



/* Entry: 102045bc4; end: 102045c47;  */

void FUN_102045bc4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x102045cc8,param_2,FUN_102045ccc,param_2,0x102045cf4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102045c48; end: 102045c77;  */

undefined ** FUN_102045c48(void)

{
  return &PTR_DAT_113066b20;
}



/* Entry: 102045c78; end: 102045c97;  */

void FUN_102045c78(void)

{
  func_0x000107c61168(&PTR_PTR_112e52c00);
  return;
}



/* Entry: 102045c98; end: 102045ccb;  */

undefined1  [16] FUN_102045c98(void)

{
  return ZEXT816(0x1104c0aa0);
}



/* Entry: 102045ccc; end: 102045d1f;  */

void FUN_102045ccc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102045d20; end: 1020463df;  */

void FUN_102045d20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d500;
  ppuVar4 = &PTR_DAT_113066b20;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104c0b10;
  func_0x000107c613fc(&UNK_1104c0b10,0x50,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  uVar3 = 0x112e52cd8;
  func_0x0001000285a8(0x112e52cd8,&UNK_10da53650);
  func_0x0001000a6ee8(&UNK_1104c1060,"ExternalMusicReminderNotificationManagerKey",0x2b,2,
                      FUN_1020463e0,puVar2,uVar3,&UNK_1104c1060,&PTR_DAT_112e52ff0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_1104c0460,
                      "FriendsFeedItemServiceProviderWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_10204642c,param_10,uVar3,&UNK_1104c0460,&PTR_DAT_112e51a90);
  func_0x000107c61574(param_10);
  puVar2 = &UNK_1104c0b38;
  func_0x000107c613fc(&UNK_1104c0b38,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_11;
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_11);
  func_0x0001000a6ee8(&UNK_1104c1f00,"FriendsFeedScopeGraphBridgeScopeInitializationPluginKey",0x37,
                      2,FUN_102046458,puVar2,uVar3,&UNK_1104c1f00,&PTR_DAT_112e53820);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_12);
  func_0x0001000a6ee8(&UNK_1104c0500,
                      "MapContextInFriendsFeedServiceProviderWrapperScopeInitializationPluginKey",
                      0x49,2,FUN_102046498,param_12,uVar3,&UNK_1104c0500,&PTR_DAT_112e51b60);
  func_0x000107c61574(param_12);
  func_0x000107c6157c(param_13);
  func_0x0001000a6ee8(&UNK_1104c05a0,
                      "SCFriendsFeedCTAImpressionTrackingEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4f,2,0x1020464c4,param_13,uVar3,&UNK_1104c05a0,&PTR_DAT_112e51c60);
  func_0x000107c61574(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000a6ee8(&UNK_1104c0620,"SCFriendsFeedEntryPointWrapperScopeInitializationPluginKey",
                      0x3a,2,0x1020464f0,param_14,uVar3,&UNK_1104c0620,&PTR_DAT_112e51e48);
  func_0x000107c61574(param_14);
  puVar2 = &UNK_1104c0b60;
  func_0x000107c613fc(&UNK_1104c0b60,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_15;
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_15);
  func_0x0001000a6ee8(&UNK_1104c00d0,"SCFriendsFeedScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_1020465c4,puVar2,uVar3,&UNK_1104c00d0,&PTR_DAT_112e51978);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_16);
  func_0x0001000a6ee8(&UNK_1104c06c0,
                      "SCLensFriendsFeedContextConfigServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x53,2,FUN_1020465cc,param_16,uVar3,&UNK_1104c06c0,&PTR_DAT_112e524e0);
  func_0x000107c61574(param_16);
  func_0x000107c6157c(param_17);
  func_0x0001000a6ee8(&UNK_1104c0760,
                      "SCLensFriendsFeedContextServicesProviderWrapperScopeInitializationPluginKey",
                      0x4b,2,0x1020465f8,param_17,uVar3,&UNK_1104c0760,&PTR_DAT_112e525c0);
  func_0x000107c61574(param_17);
  func_0x000107c6157c(param_18);
  func_0x0001000a6ee8(&UNK_1104c07e0,
                      "SCModularCallIncomingCallRequestOnFriendsFeedEntryPointWrapperScopeInitializationPluginKey"
                      ,0x5a,2,0x102046624,param_18,uVar3,&UNK_1104c07e0,&PTR_DAT_112e526e8);
  func_0x000107c61574(param_18);
  func_0x000107c6157c(param_19);
  func_0x0001000a6ee8(&UNK_1104c0860,
                      "SCNotificationExperienceFriendsFeedEntryPointWrapperScopeInitializationPluginKey"
                      ,0x50,2,0x102046650,param_19,uVar3,&UNK_1104c0860,&PTR_DAT_112e527d8);
  func_0x000107c61574(param_19);
  func_0x000107c6157c(param_20);
  func_0x0001000a6ee8(&UNK_1104c0900,
                      "SCSpotlightBatchUserNetworkRequesterServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x56,2,0x10204667c,param_20,uVar3,&UNK_1104c0900,&PTR_DAT_112e528b0);
  func_0x000107c61574(param_20);
  func_0x000107c6157c(param_21);
  func_0x0001000a6ee8(&UNK_1104c0980,
                      "SCSpotlightBatchUserNetworkRequesterWarmupEntryPointWrapperScopeInitializationPluginKey"
                      ,0x57,2,0x1020466a8,param_21,uVar3,&UNK_1104c0980,&PTR_DAT_112e529b8);
  func_0x000107c61574(param_21);
  func_0x000107c6157c(param_22);
  func_0x0001000a6ee8(&UNK_1104c0a20,
                      "SaturnFriendsFeedServiceProviderWrapperScopeInitializationPluginKey",0x43,2,
                      0x1020466d4,param_22,uVar3,&UNK_1104c0a20,&PTR_DAT_112e52a90);
  func_0x000107c61574(param_22);
  func_0x000107c6157c(param_23);
  func_0x0001000a6ee8(&UNK_1104c0ac0,
                      "SponsoredSnapFeedImpressionTrackerServicesProviderWrapperScopeInitializationPluginKey"
                      ,0x55,2,FUN_102046784,param_23,uVar3,&UNK_1104c0ac0,&PTR_DAT_112e52b98);
  func_0x000107c61574(param_23);
  uVar3 = 0x112e52ce0;
  func_0x0001000285a8(0x112e52ce0,&UNK_10da53658);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCFriendsFeedScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1020463e0; end: 10204642b;  */

void FUN_1020463e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1020491b4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100082720("ExternalMusicReminderNotificationManagerPluginProvider",0x36,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10204642c; end: 102046457;  */

void FUN_10204642c(void)

{
  FUN_102046700();
  return;
}



/* Entry: 102046458; end: 102046497;  */

void FUN_102046458(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10204ecfc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FriendsFeedScopeGraphBridgeScopeInitializationPluginProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102046498; end: 10204651b;  */

void FUN_102046498(void)

{
  FUN_102046700();
  return;
}



/* Entry: 10204651c; end: 1020465c3;  */

void FUN_10204651c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104c0b88;
  func_0x000107c613fc(&UNK_1104c0b88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10204681c;
  func_0x0001000823a8(FUN_10204681c,puVar1);
  func_0x000100082720("SCFriendsFeedScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1020465c4; end: 1020465cb;  */

void FUN_1020465c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104c0b88;
  func_0x000107c613fc(&UNK_1104c0b88,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10204681c;
  func_0x0001000823a8(FUN_10204681c,puVar3);
  func_0x000100082720("SCFriendsFeedScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1020465cc; end: 1020466ff;  */

void FUN_1020465cc(void)

{
  FUN_102046700();
  return;
}



/* Entry: 102046700; end: 102046783;  */

void FUN_102046700(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 102046784; end: 1020467af;  */

void FUN_102046784(void)

{
  FUN_102046700();
  return;
}



/* Entry: 1020467b0; end: 1020467ef;  */

void FUN_1020467b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  func_0x0001005d8744(1,0x102045cc8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1020467f0; end: 10204681b;  */

void FUN_1020467f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10204681c; end: 102046843;  */

void FUN_10204681c(undefined8 *param_1)

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
  puVar1 = &UNK_1104c0158;
  func_0x000107c613fc(&UNK_1104c0158,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10202e378;
  func_0x00010058fa64(FUN_10202e378,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102046844; end: 1020468c3;  */

undefined1  [16] FUN_102046844(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  func_0x000108f13a58();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5fc54();
    func_0x000107c61170(param_1);
    if (*(long *)(lVar2 + 0x10) == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      func_0x000107c61434(uVar4);
    }
    func_0x000107c6142c(lVar2);
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar3;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020468c4);
  (*pcVar1)();
}



/* Entry: 1020468c4; end: 102046b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1020468c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112e52d38;
  puVar3 = PTR_PTR_1126d7120;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112e52d40;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined **)(unaff_x20 + _DAT_112e52d48) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112e52d58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e52d50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e52ce8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e52cf0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e52cf8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e52d00) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e52d08) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e52d10) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e52d18);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e52d20) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e52d28) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e52d30);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c6157c(param_12);
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar5,puVar3);
  func_0x000107c61180();
  FUN_102046b38();
  func_0x000102046c5c();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61574(param_12);
  return puVar5;
}



/* Entry: 102046b38; end: 102046d67;  */

/* WARNING: Possible PIC construction at 0x000102046c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102046c30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102046b38(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  plVar1 = *(long **)(unaff_x20 + _DAT_112e52cf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar1 != (long *)0x0) {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    plVar2 = plVar1;
    func_0x000107c43aa8();
    func_0x000107c61180();
    plVar3 = plVar2;
    func_0x0001000b637c();
    func_0x000107c61170(plVar2);
    puVar4 = &UNK_1104c0c58;
    func_0x000107c613fc(&UNK_1104c0c58,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar5 = 0x1020483dc;
    puVar6 = puVar4;
    (**(code **)(*plVar3 + 0x60))(0x1020483dc);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(uVar5);
    (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112e52d40),uVar5,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(plVar1);
    return;
  }
  return;
}



/* Entry: 102046d68; end: 102046e83; -[SCSpotlightBatchUserFeedCardRequester initWithFeedCardRequestSender:friendsFeedDataCoordinator:spotlightQueryCoordinator:spotlightStoriesPrefetcherFactory:preferences:storiesConfigProvider:currentUserId:performer:completionQueue:preferredLanguageProvider:] */

void FUN_102046d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  puVar1 = &UNK_1104c0d20;
  func_0x000107c613fc(&UNK_1104c0d20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_10);
  func_0x000107c61174();
  FUN_1020468c4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_2,param_10,param_11,
                FUN_1020483d4,puVar1);
  return;
}



/* Entry: 102046e84; end: 102046ee3;  */

undefined1  [16] FUN_102046e84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  (**(code **)(param_1 + 0x10))();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
    param_2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 102046ee4; end: 102046fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102046ee4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + _DAT_112e52d20);
    puVar1 = &UNK_1104c0c58;
    func_0x000107c613fc(&UNK_1104c0c58,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_2);
    puVar2 = &UNK_1104c0d48;
    func_0x000107c613fc(&UNK_1104c0d48,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = uVar4;
    uStack_68 = 0x1020483e4;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104c0d60;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar1 = puStack_60;
    func_0x000107c61174(uVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102047000; end: 10204709b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102047000(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puStack_40 = (undefined *)0x0;
    uVar2 = 0;
    FUN_102048390(0);
    func_0x000107c5fc50(param_2,&puStack_40,uVar2);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puStack_40 != (undefined *)0x0) {
      puVar1 = puStack_40;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e52d48);
    *(undefined **)(param_1 + _DAT_112e52d48) = puVar1;
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 10204709c; end: 102047153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10204709c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e52d20);
  puVar1 = &UNK_1104c0c58;
  func_0x000107c613fc(&UNK_1104c0c58,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_102048314;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104c0c70;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102047154; end: 102047187; -[SCSpotlightBatchUserFeedCardRequester onUserResumed:didLaunchWithDataUnavailable:] */

void FUN_102047154(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  if ((param_3 != 0) && ((param_4 & 1) == 0)) {
    func_0x000107c61174();
    FUN_10204709c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102047188; end: 10204718b; -[SCSpotlightBatchUserFeedCardRequester onAppDidFinishLaunching] */

void FUN_102047188(void)

{
  return;
}



/* Entry: 10204718c; end: 10204718f; -[SCSpotlightBatchUserFeedCardRequester onAppDidBecomeActive] */

void FUN_10204718c(void)

{
  return;
}


