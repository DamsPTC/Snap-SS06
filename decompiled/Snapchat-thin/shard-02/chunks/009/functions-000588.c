/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102280390; end: 102280503;  */

void FUN_102280390(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102280650();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  func_0x000103bc5660(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  func_0x000103bc5404(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  func_0x000103bc562c();
  *(undefined8 *)(param_2 + 0x28) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 102280504; end: 10228053f;  */

void FUN_102280504(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102280540; end: 102280593;  */

void FUN_102280540(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102280594; end: 10228059b;  */

undefined8 FUN_102280594(void)

{
  return 0x1b;
}



/* Entry: 10228059c; end: 10228061f;  */

void FUN_10228059c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022806a0,param_2,FUN_1022806a4,param_2,0x1022806cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102280620; end: 10228064f;  */

undefined ** FUN_102280620(void)

{
  return &PTR_DAT_113074e20;
}



/* Entry: 102280650; end: 10228066f;  */

void FUN_102280650(void)

{
  func_0x000107c61168(&PTR_PTR_112e77fd0);
  return;
}



/* Entry: 102280670; end: 1022806a3;  */

undefined1  [16] FUN_102280670(void)

{
  return ZEXT816(0x1104ed288);
}



/* Entry: 1022806a4; end: 1022806f7;  */

void FUN_1022806a4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022806f8; end: 102280b03;  */

void FUN_1022806f8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  FUN_102280c88();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  FUN_1022a9aec(0);
  func_0x000107c613fc();
  uVar8 = uStack_68;
  FUN_1022a97ec(uStack_68,uVar3,uVar4,uVar5,uVar6,uVar7,puVar2);
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar8);
  FUN_1022a9804();
  func_0x000107c61574(uVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(undefined **)(param_2 + 0x48) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102280934);
  (*pcVar1)();
}



/* Entry: 102280b04; end: 102280b77;  */

void FUN_102280b04(void)

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
  return;
}



/* Entry: 102280b78; end: 102280bcb;  */

void FUN_102280b78(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102280bcc; end: 102280bd3;  */

undefined8 FUN_102280bcc(void)

{
  return 0x1b;
}



/* Entry: 102280bd4; end: 102280c57;  */

void FUN_102280bd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102280cd8,param_2,FUN_102280cdc,param_2,0x102280d04,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102280c58; end: 102280c87;  */

undefined ** FUN_102280c58(void)

{
  return &PTR_DAT_113074e20;
}



/* Entry: 102280c88; end: 102280ca7;  */

void FUN_102280c88(void)

{
  func_0x000107c61168(&PTR_PTR_112e780b0);
  return;
}



/* Entry: 102280ca8; end: 102280cdb;  */

undefined1  [16] FUN_102280ca8(void)

{
  return ZEXT816(0x1104ed328);
}



/* Entry: 102280cdc; end: 102280d2f;  */

void FUN_102280cdc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102280d30; end: 10228127f;  */

void FUN_102280d30(long *param_1,long param_2)

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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  FUN_102281454();
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
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  FUN_1022b3330();
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
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001022b29d4(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                      uVar11,uVar12,uVar13,uVar14,uVar15,uStack_f0);
  *(undefined8 *)(param_2 + 0x10) = auStack_70[0];
  FUN_1022b32cc();
  *(undefined8 *)(param_2 + 0x98) = auStack_70[0];
  *param_1 = param_2;
  return;
}



/* Entry: 102281280; end: 102281343;  */

void FUN_102281280(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102281344; end: 102281397;  */

void FUN_102281344(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102281398; end: 10228139f;  */

undefined8 FUN_102281398(void)

{
  return 0x1b;
}



/* Entry: 1022813a0; end: 102281423;  */

void FUN_1022813a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022814a4,param_2,FUN_1022814a8,param_2,0x1022814d0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102281424; end: 102281453;  */

undefined ** FUN_102281424(void)

{
  return &PTR_DAT_113074e20;
}



/* Entry: 102281454; end: 102281473;  */

void FUN_102281454(void)

{
  func_0x000107c61168(&PTR_PTR_112e781b0);
  return;
}



/* Entry: 102281474; end: 1022814a7;  */

undefined1  [16] FUN_102281474(void)

{
  return ZEXT816(0x1104ed3c8);
}



/* Entry: 1022814a8; end: 1022814fb;  */

void FUN_1022814a8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022814fc; end: 102282063;  */

void FUN_1022814fc(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
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
  long lVar14;
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
  FUN_102282250();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  uVar10 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126aa298;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0x736569726f6d656d;
  func_0x000107c5fadc(0x736569726f6d656d,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar12 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d8a0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar12 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d4f0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f066a00);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07d930);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar13);
  uVar12 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar12 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f07d960);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar12 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07d990);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  lVar14 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f07d9c0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar14 != 0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(long *)(param_2 + 0x60) = lVar14;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102281afc);
  (*pcVar1)();
}



/* Entry: 102282064; end: 1022820ef;  */

void FUN_102282064(void)

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
  return;
}



/* Entry: 1022820f0; end: 102282143;  */

void FUN_1022820f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102282144; end: 10228214b;  */

undefined8 FUN_102282144(void)

{
  return 0x1b;
}



/* Entry: 10228214c; end: 1022821cf;  */

void FUN_10228214c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022822a0,param_2,FUN_1022822a4,param_2,FUN_1022822cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022821d0; end: 10228221f;  */

undefined8 FUN_1022821d0(void)

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



/* Entry: 102282220; end: 10228224f;  */

void FUN_102282220(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104ed428;
  return;
}



/* Entry: 102282250; end: 10228226f;  */

void FUN_102282250(void)

{
  func_0x000107c61168(&PTR_PTR_112e78300);
  return;
}



/* Entry: 102282270; end: 1022822a3;  */

undefined1  [16] FUN_102282270(void)

{
  return ZEXT816(0x1104ed468);
}



/* Entry: 1022822a4; end: 1022822cb;  */

void FUN_1022822a4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022822cc; end: 1022822d3;  */

undefined8 FUN_1022822cc(void)

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



/* Entry: 1022822d4; end: 10228a36f;  */

void FUN_1022822d4(long *param_1,long param_2)

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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  func_0x000100083b20(&uStack_1b0);
  func_0x000100083b20(&uStack_1b8);
  func_0x000100083b20(&uStack_1c0);
  func_0x000100083b20(&uStack_1c8);
  func_0x000100083b20(&uStack_1d0);
  func_0x000100083b20(&uStack_1d8);
  func_0x000100083b20(&uStack_1e0);
  func_0x000100083b20(&uStack_1e8);
  func_0x000100083b20(&uStack_1f0);
  func_0x000100083b20(&uStack_1f8);
  func_0x000100083b20(&uStack_200);
  func_0x000100083b20(&uStack_208);
  func_0x000100083b20(&uStack_210);
  func_0x000100083b20(&uStack_218);
  func_0x000100083b20(&uStack_220);
  func_0x000100083b20(&uStack_228);
  func_0x000100083b20(&uStack_230);
  func_0x000100083b20(&uStack_238);
  func_0x000100083b20(&uStack_240);
  func_0x000100083b20(&uStack_248);
  func_0x000100083b20(&uStack_250);
  func_0x000100083b20(&uStack_258);
  func_0x000100083b20(&uStack_260);
  func_0x000100083b20(&uStack_268);
  func_0x000100083b20(&uStack_270);
  func_0x000100083b20(&uStack_278);
  func_0x000100083b20(&uStack_280);
  func_0x000100083b20(&uStack_288);
  func_0x000100083b20(&uStack_290);
  func_0x000100083b20(&uStack_298);
  func_0x000100083b20(&uStack_2a0);
  func_0x000100083b20(&uStack_2a8);
  func_0x000100083b20(&uStack_2b0);
  func_0x000100083b20(&uStack_2b8);
  func_0x000100083b20(&uStack_2c0);
  func_0x000100083b20(&uStack_2c8);
  func_0x000100083b20(&uStack_2d0);
  func_0x000100083b20(&uStack_2d8);
  func_0x000100083b20(&uStack_2e0);
  func_0x000100083b20(&uStack_2e8);
  func_0x000100083b20(&uStack_2f0);
  func_0x000100083b20(&uStack_2f8);
  func_0x000100083b20(&uStack_300);
  func_0x000100083b20(&uStack_308);
  func_0x000100083b20(&uStack_310);
  func_0x000100083b20(&uStack_318);
  func_0x000100083b20(&uStack_320);
  func_0x000100083b20(&uStack_328);
  func_0x000100083b20(&uStack_330);
  func_0x000100083b20(&uStack_338);
  func_0x000100083b20(&uStack_340);
  func_0x000100083b20(&uStack_348);
  func_0x000100083b20(&uStack_350);
  func_0x000100083b20(&uStack_358);
  func_0x000100083b20(&uStack_360);
  func_0x000100083b20(&uStack_368);
  func_0x000100083b20(&uStack_370);
  func_0x000100083b20(&uStack_378);
  func_0x000100083b20(&uStack_380);
  func_0x000100083b20(&uStack_388);
  func_0x000100083b20(&uStack_390);
  func_0x000100083b20(&uStack_398);
  func_0x000100083b20(&uStack_3a0);
  func_0x000100083b20(&uStack_3a8);
  func_0x000100083b20(&uStack_3b0);
  FUN_10228a7f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0xc0) = uStack_78;
  *(undefined8 *)(param_2 + 200) = uStack_80;
  *(undefined8 *)(param_2 + 0xd0) = uStack_88;
  *(undefined8 *)(param_2 + 0xd8) = uStack_90;
  *(undefined8 *)(param_2 + 0xe0) = uStack_98;
  *(undefined8 *)(param_2 + 0xe8) = uStack_a0;
  *(undefined8 *)(param_2 + 0xf0) = uStack_a8;
  *(undefined8 *)(param_2 + 0xf8) = uStack_b0;
  *(undefined8 *)(param_2 + 0x100) = uStack_b8;
  *(undefined8 *)(param_2 + 0x108) = uStack_c0;
  *(undefined8 *)(param_2 + 0x110) = uStack_c8;
  *(undefined8 *)(param_2 + 0x118) = uStack_d0;
  *(undefined8 *)(param_2 + 0x120) = uStack_d8;
  *(undefined8 *)(param_2 + 0x128) = uStack_e0;
  *(undefined8 *)(param_2 + 0x130) = uStack_e8;
  *(undefined8 *)(param_2 + 0x138) = uStack_f0;
  *(undefined8 *)(param_2 + 0x140) = uStack_f8;
  *(undefined8 *)(param_2 + 0x148) = uStack_100;
  *(undefined8 *)(param_2 + 0x150) = uStack_108;
  *(undefined8 *)(param_2 + 0x158) = uStack_110;
  *(undefined8 *)(param_2 + 0x160) = uStack_118;
  *(undefined8 *)(param_2 + 0x168) = uStack_120;
  *(undefined8 *)(param_2 + 0x170) = uStack_128;
  *(undefined8 *)(param_2 + 0x178) = uStack_130;
  *(undefined8 *)(param_2 + 0x180) = uStack_138;
  *(undefined8 *)(param_2 + 0x188) = uStack_140;
  *(undefined8 *)(param_2 + 400) = uStack_148;
  *(undefined8 *)(param_2 + 0x198) = uStack_150;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_158;
  *(undefined8 *)(param_2 + 0x1a8) = uStack_160;
  *(undefined8 *)(param_2 + 0x1b0) = uStack_168;
  *(undefined8 *)(param_2 + 0x1b8) = uStack_170;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_178;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_180;
  *(undefined8 *)(param_2 + 0x1d0) = uStack_188;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_190;
  *(undefined8 *)(param_2 + 0x1e0) = uStack_198;
  *(undefined8 *)(param_2 + 0x1e8) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x1f0) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x1f8) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x200) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x208) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x210) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x218) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x220) = uStack_1d8;
  *(undefined8 *)(param_2 + 0x228) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x230) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x238) = uStack_1f0;
  *(undefined8 *)(param_2 + 0x240) = uStack_1f8;
  *(undefined8 *)(param_2 + 0x248) = uStack_200;
  *(undefined8 *)(param_2 + 0x250) = uStack_208;
  *(undefined8 *)(param_2 + 600) = uStack_210;
  *(undefined8 *)(param_2 + 0x260) = uStack_218;
  *(undefined8 *)(param_2 + 0x268) = uStack_220;
  *(undefined8 *)(param_2 + 0x270) = uStack_228;
  *(undefined8 *)(param_2 + 0x278) = uStack_230;
  *(undefined8 *)(param_2 + 0x280) = uStack_238;
  *(undefined8 *)(param_2 + 0x288) = uStack_240;
  *(undefined8 *)(param_2 + 0x290) = uStack_248;
  *(undefined8 *)(param_2 + 0x298) = uStack_250;
  *(undefined8 *)(param_2 + 0x2a0) = uStack_258;
  *(undefined8 *)(param_2 + 0x2a8) = uStack_260;
  *(undefined8 *)(param_2 + 0x2b0) = uStack_268;
  *(undefined8 *)(param_2 + 0x2b8) = uStack_270;
  *(undefined8 *)(param_2 + 0x2c0) = uStack_278;
  *(undefined8 *)(param_2 + 0x2c8) = uStack_280;
  *(undefined8 *)(param_2 + 0x2d0) = uStack_288;
  *(undefined8 *)(param_2 + 0x2d8) = uStack_290;
  *(undefined8 *)(param_2 + 0x2e0) = uStack_298;
  *(undefined8 *)(param_2 + 0x2e8) = uStack_2a0;
  *(undefined8 *)(param_2 + 0x2f0) = uStack_2a8;
  *(undefined8 *)(param_2 + 0x2f8) = uStack_2b0;
  *(undefined8 *)(param_2 + 0x300) = uStack_2b8;
  *(undefined8 *)(param_2 + 0x308) = uStack_2c0;
  *(undefined8 *)(param_2 + 0x310) = uStack_2c8;
  *(undefined8 *)(param_2 + 0x318) = uStack_2d0;
  *(undefined8 *)(param_2 + 800) = uStack_2d8;
  *(undefined8 *)(param_2 + 0x328) = uStack_2e0;
  *(undefined8 *)(param_2 + 0x330) = uStack_2e8;
  *(undefined8 *)(param_2 + 0x338) = uStack_2f0;
  *(undefined8 *)(param_2 + 0x340) = uStack_2f8;
  *(undefined8 *)(param_2 + 0x348) = uStack_300;
  *(undefined8 *)(param_2 + 0x350) = uStack_308;
  func_0x0001000285a8(0x112e783b0,&UNK_10da81b58);
  func_0x000107c610f8();
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
  func_0x000107c61174();
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
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c61174();
  uVar17 = uStack_f8;
  func_0x000107c61174();
  uVar18 = uStack_100;
  func_0x000107c61174();
  uVar19 = uStack_108;
  func_0x000107c61174();
  uVar20 = uStack_110;
  func_0x000107c61174();
  uVar21 = uStack_118;
  func_0x000107c61174();
  uVar22 = uStack_120;
  func_0x000107c61174();
  uVar23 = uStack_128;
  func_0x000107c61174();
  uVar24 = uStack_130;
  func_0x000107c61174();
  uVar25 = uStack_138;
  func_0x000107c61174();
  uVar26 = uStack_140;
  func_0x000107c61174();
  uVar27 = uStack_148;
  func_0x000107c61174();
  uVar28 = uStack_150;
  func_0x000107c61174();
  uVar29 = uStack_158;
  func_0x000107c61174();
  uVar30 = uStack_160;
  func_0x000107c61174();
  uVar31 = uStack_168;
  func_0x000107c61174();
  uVar32 = uStack_170;
  func_0x000107c61174();
  uVar33 = uStack_178;
  func_0x000107c61174();
  uVar34 = uStack_180;
  func_0x000107c61174();
  uVar35 = uStack_188;
  func_0x000107c61174();
  uVar36 = uStack_190;
  func_0x000107c61174();
  uVar41 = uStack_198;
  func_0x000107c61174();
  uVar42 = uStack_1a0;
  func_0x000107c61174();
  uVar43 = uStack_1a8;
  func_0x000107c61174();
  uVar44 = uStack_1b0;
  func_0x000107c61174();
  uVar45 = uStack_1b8;
  func_0x000107c61174();
  uVar46 = uStack_1c0;
  func_0x000107c61174();
  uVar47 = uStack_1c8;
  func_0x000107c61174();
  uVar48 = uStack_1d0;
  func_0x000107c61174();
  uVar49 = uStack_1d8;
  func_0x000107c61174();
  uVar50 = uStack_1e0;
  func_0x000107c61174();
  uVar51 = uStack_1e8;
  func_0x000107c61174();
  uVar52 = uStack_1f0;
  func_0x000107c61174();
  uVar53 = uStack_1f8;
  func_0x000107c61174();
  uVar54 = uStack_200;
  func_0x000107c61174();
  uVar55 = uStack_208;
  func_0x000107c61174();
  uVar56 = uStack_210;
  func_0x000107c61174();
  uVar57 = uStack_218;
  func_0x000107c61174();
  uVar58 = uStack_220;
  func_0x000107c61174();
  uVar59 = uStack_228;
  func_0x000107c61174();
  uVar60 = uStack_230;
  func_0x000107c61174();
  uVar61 = uStack_238;
  func_0x000107c61174();
  uVar62 = uStack_240;
  func_0x000107c61174();
  uVar63 = uStack_248;
  func_0x000107c61174();
  uVar64 = uStack_250;
  func_0x000107c61174();
  uVar65 = uStack_258;
  func_0x000107c61174();
  uVar66 = uStack_260;
  func_0x000107c61174();
  uVar67 = uStack_268;
  func_0x000107c61174();
  uVar68 = uStack_270;
  func_0x000107c61174();
  uVar69 = uStack_278;
  func_0x000107c61174();
  uVar70 = uStack_280;
  func_0x000107c61174();
  uVar71 = uStack_288;
  func_0x000107c61174();
  uVar72 = uStack_290;
  func_0x000107c61174();
  uVar73 = uStack_298;
  func_0x000107c61174();
  uVar74 = uStack_2a0;
  func_0x000107c61174();
  uVar75 = uStack_2a8;
  func_0x000107c61174();
  uVar76 = uStack_2b0;
  func_0x000107c61174();
  uVar77 = uStack_2b8;
  func_0x000107c61174();
  uVar78 = uStack_2c0;
  func_0x000107c61174();
  uVar79 = uStack_2c8;
  func_0x000107c61174();
  uVar80 = uStack_2d0;
  func_0x000107c61174();
  uVar81 = uStack_2d8;
  func_0x000107c61174();
  uVar82 = uStack_2e0;
  func_0x000107c61174();
  uVar83 = uStack_2e8;
  func_0x000107c61174();
  uVar84 = uStack_2f0;
  func_0x000107c61174();
  uVar85 = uStack_2f8;
  func_0x000107c61174();
  uVar86 = uStack_300;
  func_0x000107c61174();
  uVar87 = uStack_308;
  func_0x000107c61174();
  uVar39 = uStack_310;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x18) = puVar37;
  func_0x0001000285a8(0x112e783b8,&UNK_10da81b60);
  func_0x000107c610f8();
  uVar39 = uStack_318;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x20) = puVar37;
  func_0x0001000285a8(0x112e783c0,&UNK_10da81b68);
  func_0x000107c610f8();
  uVar39 = uStack_320;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x28) = puVar37;
  func_0x0001000285a8(0x112e60be8,&UNK_10da81b70);
  func_0x000107c610f8();
  uVar39 = uStack_328;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x30) = puVar37;
  func_0x0001000285a8(0x112e783c8,&UNK_10da81b78);
  func_0x000107c610f8();
  uVar39 = uStack_330;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x38) = puVar37;
  func_0x0001000285a8(0x112e783d0,&UNK_10da81b80);
  func_0x000107c610f8();
  uVar39 = uStack_338;
  func_0x000107c6157c(uStack_338);
  func_0x00010025a71c();
  puVar37 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x40) = puVar37;
  func_0x0001000285a8(0x112e783d8,&UNK_10da81b88);
  func_0x000107c610f8();
  uVar39 = uStack_340;
  func_0x000107c6157c();
  func_0x00010025a71c();
  puVar37 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x48) = puVar37;
  func_0x0001000285a8(0x112e783e0,&UNK_10da81b90);
  func_0x000107c610f8();
  uVar39 = uStack_348;
  func_0x000107c6157c();
  func_0x00010025a71c();
  puVar37 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x50) = puVar37;
  func_0x0001000285a8(0x112e5cf70,&UNK_10db5d010);
  func_0x000107c610f8();
  uVar39 = uStack_350;
  func_0x000107c6157c(uStack_350);
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x58) = puVar37;
  func_0x0001000285a8(0x112e5cf88,&UNK_10da63620);
  func_0x000107c610f8();
  uVar39 = uStack_358;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x60) = puVar37;
  func_0x0001000285a8(0x112e783e8,&UNK_10db75220);
  func_0x000107c610f8();
  uVar39 = uStack_360;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x68) = puVar37;
  func_0x0001000285a8(0x112e5cf80,&UNK_10da81ba0);
  func_0x000107c610f8();
  uVar39 = uStack_368;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x70) = puVar37;
  func_0x0001000285a8(0x112e783f0,&UNK_10da81ba8);
  func_0x000107c610f8();
  uVar39 = uStack_370;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x78) = puVar37;
  func_0x0001000285a8(0x112e783f8,&UNK_10da81bb0);
  func_0x000107c610f8();
  uVar39 = uStack_378;
  func_0x000107c6157c(uStack_378);
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x80) = puVar37;
  func_0x0001000285a8(0x112e78400,&UNK_10da81bb8);
  func_0x000107c610f8();
  uVar39 = uStack_380;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x88) = puVar37;
  func_0x0001000285a8(0x112e78408,&UNK_10da81bc0);
  func_0x000107c610f8();
  uVar39 = uStack_388;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x90) = puVar37;
  func_0x0001000285a8(0x112e77ac0,&UNK_10da80a08);
  func_0x000107c610f8();
  uVar39 = uStack_390;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0x98) = puVar37;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar39 = uStack_398;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0xa0) = puVar37;
  func_0x0001000285a8(0x112e78410,&UNK_10db5b9a0);
  func_0x000107c610f8();
  uVar39 = uStack_3a0;
  func_0x000107c6157c(uStack_3a0);
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0xa8) = puVar37;
  func_0x0001000285a8(0x112e78418,&UNK_10da81bd0);
  func_0x000107c610f8();
  uVar39 = uStack_3a8;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0xb0) = puVar37;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar39 = uStack_3b0;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar37 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar39);
  *(undefined **)(param_2 + 0xb8) = puVar37;
  puVar37 = PTR_PTR_1126aa2a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar37;
  func_0x000107c61174();
  uVar38 = auStack_70[0];
  func_0x000107c61174();
  uVar39 = 0x736569726f6d656d;
  func_0x000107c5fadc(0x736569726f6d656d,0xed000065706f6353);
  func_0x000107c5a49c(puVar37);
  func_0x000107c61170(puVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f019ff0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  uVar40 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f01a010);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07d9f0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f056bd0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  uVar40 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07da20);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef299a0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd000000000000016;
  uVar39 = uVar90;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef329c0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  uVar40 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = uVar90;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef3c3c0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar89 = 0xd000000000000013;
  uVar39 = uVar89;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar93 = 0xd00000000000001a;
  uVar39 = uVar93;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f07da50);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar92 = 0xd000000000000020;
  uVar39 = uVar92;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f07da70);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar90);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar88 = 0xd000000000000010;
  uVar39 = uVar88;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f07daa0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar93);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd000000000000018;
  uVar39 = uVar90;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f07dac0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  uVar40 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f07dae0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar93 = 0xd000000000000015;
  uVar39 = uVar93;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f07db10);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f07db30);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar39 = uVar93;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f07db60);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = uVar92;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f07db80);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f07d960);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = uVar90;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00d910);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar91 = 0xd000000000000014;
  uVar39 = uVar91;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f00d6c0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar89);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07dbb0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef28ec0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar93);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar92);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar93 = 0xd000000000000017;
  uVar39 = uVar93;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd00000000000001c;
  uVar39 = uVar90;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00d930);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar88);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  uVar40 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07d990);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar92 = 0xd00000000000001b;
  uVar39 = uVar92;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f07dbe0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0669a0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = uVar91;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar89 = 0xd00000000000001a;
  uVar39 = uVar89;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00d820);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef29390);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0675d0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd00000000000001e;
  uVar39 = uVar90;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d4f0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d8a0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar90);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010ef29970);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = uVar91;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc46f0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar93);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar89);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = uVar92;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f07dc00);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc12b0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar90 = 0xd000000000000016;
  uVar39 = uVar90;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1bda0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010f00d480);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar91);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f00da00);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f07dc30);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f00da40);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85540);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar90);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar93 = 0xd000000000000018;
  uVar39 = uVar93;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00c510);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f07dc60);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar89 = 0xd00000000000001c;
  uVar39 = uVar89;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28e70);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar68);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  uVar40 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar70);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = uVar89;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f07dc90);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar71);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef1e090);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar72);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar39 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar73);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar39 = uVar92;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f07dcb0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar74);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd00000000000001e;
  uVar39 = uVar90;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00dcd0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar75);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f07dcd0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar76);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f07dcf0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar77);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f07dd10);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar78);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f07dd40);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar79);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f07dd60);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar80);
  func_0x000107c61170(uVar92);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = uVar89;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef29e30);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar81);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  uVar40 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar82);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f07dd80);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f07ddb0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar84);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000018,0x800000010f07dde0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar85);
  func_0x000107c61170(uVar93);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar93 = 0xd00000000000001a;
  uVar39 = uVar93;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef20360);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar86);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f07de00);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar88 = 0xd00000000000001f;
  uVar90 = uVar88;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f07de30);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar90 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar92 = 0xd000000000000020;
  uVar39 = uVar92;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f07de50);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar39);
  func_0x000107c61174(uVar40);
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f07de80);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar89);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar90 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar89 = 0xd00000000000001e;
  uVar39 = uVar89;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f07dea0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f07dec0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f07dee0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174(uVar39);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f07df10);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar93);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174(uVar39);
  func_0x000107c61174(uVar40);
  func_0x000107c5fadc(0xd000000000000020,0x800000010f07df30);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar92);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar90 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f07df60);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  func_0x000107c61170(uVar39);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar90 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f066b00);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f07df90);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar89);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar90 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f066ad0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x78);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f07dfb0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x80);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07dfe0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x88);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f07e010);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar90 = *(undefined8 *)(param_2 + 0x90);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f07e030);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x98);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f07e060);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0xa0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef20410);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f075b40);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0xb0);
  func_0x000107c61174(uVar39);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f07e090);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar88);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar90 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar38);
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
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar68);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar70);
  func_0x000107c61170(uVar71);
  func_0x000107c61170(uVar72);
  func_0x000107c61170(uVar73);
  func_0x000107c61170(uVar74);
  func_0x000107c61170(uVar75);
  func_0x000107c61170(uVar76);
  func_0x000107c61170(uVar77);
  func_0x000107c61170(uVar78);
  func_0x000107c61170(uVar79);
  func_0x000107c61170(uVar80);
  func_0x000107c61170(uVar81);
  func_0x000107c61170(uVar82);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar84);
  func_0x000107c61170(uVar85);
  func_0x000107c61170(uVar86);
  func_0x000107c61170(uVar87);
  func_0x000107c61574(uStack_310);
  func_0x000107c61574(uStack_318);
  func_0x000107c61574(uStack_320);
  func_0x000107c61574(uStack_328);
  func_0x000107c61574(uStack_330);
  func_0x000107c61574(uStack_338);
  func_0x000107c61574(uStack_340);
  func_0x000107c61574(uStack_348);
  func_0x000107c61574(uStack_350);
  func_0x000107c61574(uStack_358);
  func_0x000107c61574(uStack_360);
  func_0x000107c61574(uStack_368);
  func_0x000107c61574(uStack_370);
  func_0x000107c61574(uStack_378);
  func_0x000107c61574(uStack_380);
  func_0x000107c61574(uStack_388);
  func_0x000107c61574(uStack_390);
  func_0x000107c61574(uStack_398);
  func_0x000107c61574(uStack_3a0);
  func_0x000107c61574(uStack_3a8);
  func_0x000107c61574(uStack_3b0);
  *param_1 = param_2;
  return;
}



/* Entry: 10228a370; end: 10228a6eb;  */

void FUN_10228a370(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x350));
  return;
}



/* Entry: 10228a6ec; end: 10228a6f3;  */

undefined8 FUN_10228a6ec(void)

{
  return 0x1b;
}



/* Entry: 10228a6f4; end: 10228a777;  */

void FUN_10228a6f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10228a838,param_2,FUN_10228a83c,param_2,FUN_10228a864,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10228a778; end: 10228a7c7;  */

undefined8 FUN_10228a778(void)

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



/* Entry: 10228a7c8; end: 10228a7f7;  */

undefined ** FUN_10228a7c8(void)

{
  return &PTR_DAT_113074e20;
}



/* Entry: 10228a7f8; end: 10228a817;  */

void FUN_10228a7f8(void)

{
  func_0x000107c61168(&PTR_PTR_112e78488);
  return;
}



/* Entry: 10228a818; end: 10228a83b;  */

undefined1  [16] FUN_10228a818(void)

{
  return ZEXT816(0x1104ed508);
}



/* Entry: 10228a83c; end: 10228a863;  */

void FUN_10228a83c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10228a864; end: 10228a86b;  */

undefined8 FUN_10228a864(void)

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



/* Entry: 10228a86c; end: 10228b1c7;  */

void FUN_10228a86c(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
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
  FUN_10228b3a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126aa2a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0x736569726f6d656d;
  func_0x000107c5fadc(0x736569726f6d656d,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d4f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d8a0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f07e0b0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar10 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f07e0d0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(long *)(param_2 + 0x50) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10228ad54);
  (*pcVar1)();
}



/* Entry: 10228b1c8; end: 10228b243;  */

void FUN_10228b1c8(void)

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
  return;
}



/* Entry: 10228b244; end: 10228b297;  */

void FUN_10228b244(undefined8 *param_1)

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



/* Entry: 10228b298; end: 10228b29f;  */

undefined8 FUN_10228b298(void)

{
  return 0x1b;
}



/* Entry: 10228b2a0; end: 10228b323;  */

void FUN_10228b2a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10228b3f4,param_2,FUN_10228b3f8,param_2,FUN_10228b420,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10228b324; end: 10228b373;  */

undefined8 FUN_10228b324(void)

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



/* Entry: 10228b374; end: 10228b3a3;  */

void FUN_10228b374(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104ed548;
  return;
}



/* Entry: 10228b3a4; end: 10228b3c3;  */

void FUN_10228b3a4(void)

{
  func_0x000107c61168(&PTR_PTR_112e78890);
  return;
}



/* Entry: 10228b3c4; end: 10228b3f7;  */

undefined1  [16] FUN_10228b3c4(void)

{
  return ZEXT816(0x1104ed588);
}



/* Entry: 10228b3f8; end: 10228b41f;  */

void FUN_10228b3f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10228b420; end: 10228b427;  */

undefined8 FUN_10228b420(void)

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



/* Entry: 10228b428; end: 10228c757;  */

void FUN_10228b428(long *param_1,long param_2)

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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  FUN_10228c97c();
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
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  puVar1 = PTR_PTR_1126aa2b0;
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
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
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
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174(uStack_e8);
  uVar17 = uStack_f0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar18 = auStack_70[0];
  func_0x000107c61174();
  uVar19 = 0x736569726f6d656d;
  func_0x000107c5fadc(0x736569726f6d656d,0xed000065706f6353);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  uVar20 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar19 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef22f10);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f07e100);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f07da70);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00d820);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0x726553646e756f73;
  func_0x000107c5fadc(0x726553646e756f73,0xed00007365636976);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar19);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0675d0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar19);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar19 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f07e120);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  uVar19 = uVar20;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar18);
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
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  *(undefined8 *)(param_2 + 0x98) = uVar19;
  *param_1 = param_2;
  return;
}



/* Entry: 10228c758; end: 10228c81b;  */

void FUN_10228c758(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 10228c81c; end: 10228c86f;  */

void FUN_10228c81c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10228c870; end: 10228c877;  */

undefined8 FUN_10228c870(void)

{
  return 0x1b;
}



/* Entry: 10228c878; end: 10228c8fb;  */

void FUN_10228c878(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x10228c9cc,param_2,FUN_10228c9d0,param_2,FUN_10228c9f8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10228c8fc; end: 10228c94b;  */

undefined8 FUN_10228c8fc(void)

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



/* Entry: 10228c94c; end: 10228c97b;  */

undefined ** FUN_10228c94c(void)

{
  return &PTR_DAT_113074e20;
}



/* Entry: 10228c97c; end: 10228c99b;  */

void FUN_10228c97c(void)

{
  func_0x000107c61168(&PTR_PTR_112e78998);
  return;
}



/* Entry: 10228c99c; end: 10228c9cf;  */

undefined1  [16] FUN_10228c99c(void)

{
  return ZEXT816(0x1104ed628);
}



/* Entry: 10228c9d0; end: 10228c9f7;  */

void FUN_10228c9d0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10228c9f8; end: 10228c9ff;  */

undefined8 FUN_10228c9f8(void)

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



/* Entry: 10228ca00; end: 10228cabf;  */

void FUN_10228ca00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_10228cdb4();
  func_0x000107c613fc();
  FUN_10228cac0(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10228cac0; end: 10228cc1f;  */

void FUN_10228cac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126aa2b8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x736569726f6d656d;
  func_0x000107c5fadc(0x736569726f6d656d,0xed000065706f6353);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f066b30);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10228cc20; end: 10228cc53;  */

void FUN_10228cc20(void)

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



/* Entry: 10228cc54; end: 10228cca7;  */

void FUN_10228cc54(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10228cca8; end: 10228ccaf;  */

undefined8 FUN_10228cca8(void)

{
  return 0x1b;
}



/* Entry: 10228ccb0; end: 10228cd33;  */

void FUN_10228ccb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x10228ce04,param_2,FUN_10228ce08,param_2,FUN_10228ce30,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10228cd34; end: 10228cd83;  */

undefined8 FUN_10228cd34(void)

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



/* Entry: 10228cd84; end: 10228cdb3;  */

undefined ** FUN_10228cd84(void)

{
  return &PTR_DAT_113074e20;
}



/* Entry: 10228cdb4; end: 10228cdd3;  */

void FUN_10228cdb4(void)

{
  func_0x000107c61168(&PTR_PTR_112e78ae8);
  return;
}



/* Entry: 10228cdd4; end: 10228ce07;  */

undefined1  [16] FUN_10228cdd4(void)

{
  return ZEXT816(0x1104ed6c8);
}



/* Entry: 10228ce08; end: 10228ce2f;  */

void FUN_10228ce08(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10228ce30; end: 10228ce37;  */

undefined8 FUN_10228ce30(void)

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



/* Entry: 10228ce38; end: 10228cef7;  */

void FUN_10228ce38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_10228d1ec();
  func_0x000107c613fc();
  FUN_10228cef8(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10228cef8; end: 10228d057;  */

void FUN_10228cef8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126aa2c0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x736569726f6d656d;
  func_0x000107c5fadc(0x736569726f6d656d,0xed000065706f6353);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f066b50);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10228d058; end: 10228d08b;  */

void FUN_10228d058(void)

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



/* Entry: 10228d08c; end: 10228d0df;  */

void FUN_10228d08c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10228d0e0; end: 10228d0e7;  */

undefined8 FUN_10228d0e0(void)

{
  return 0x1b;
}



/* Entry: 10228d0e8; end: 10228d16b;  */

void FUN_10228d0e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x10228d23c,param_2,FUN_10228d240,param_2,FUN_10228d268,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10228d16c; end: 10228d1bb;  */

undefined8 FUN_10228d16c(void)

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



/* Entry: 10228d1bc; end: 10228d1eb;  */

undefined ** FUN_10228d1bc(void)

{
  return &PTR_DAT_113074e20;
}



/* Entry: 10228d1ec; end: 10228d20b;  */

void FUN_10228d1ec(void)

{
  func_0x000107c61168(&PTR_PTR_112e78bc0);
  return;
}



/* Entry: 10228d20c; end: 10228d23f;  */

undefined1  [16] FUN_10228d20c(void)

{
  return ZEXT816(0x1104ed768);
}



/* Entry: 10228d240; end: 10228d267;  */

void FUN_10228d240(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10228d268; end: 10228d26f;  */

undefined8 FUN_10228d268(void)

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



/* Entry: 10228d270; end: 10228e44f;  */

void FUN_10228d270(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
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
  FUN_10228e664();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  func_0x0001000285a8(0x112e78c30,&UNK_10da827c0);
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
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  uVar11 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar15 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x18) = puVar13;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar15 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x20) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar13;
  puVar13 = PTR_PTR_1126aa2c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar13;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0x736569726f6d656d;
  func_0x000107c5fadc(0x736569726f6d656d,0xed000065706f6353);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar18 = 0xd000000000000010;
  uVar15 = uVar18;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f00d650);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1c2c0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar15 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f07e150);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar16);
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  lVar17 = *(long *)(param_2 + 0x28);
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f07e170);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(uVar15);
  uVar18 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f07e190);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c3e740(uVar16);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar17 != 0) {
    func_0x000107c61170(uVar14);
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
    func_0x000107c61574(uStack_d0);
    func_0x000107c61574(uStack_d8);
    *(long *)(param_2 + 0x88) = lVar17;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10228dbe8);
  (*pcVar1)();
}



/* Entry: 10228e450; end: 10228e503;  */

void FUN_10228e450(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 10228e504; end: 10228e557;  */

void FUN_10228e504(undefined8 *param_1)

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



/* Entry: 10228e558; end: 10228e55f;  */

undefined8 FUN_10228e558(void)

{
  return 0x1b;
}



/* Entry: 10228e560; end: 10228e5e3;  */

void FUN_10228e560(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10228e6b4,param_2,FUN_10228e6b8,param_2,FUN_10228e6e0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10228e5e4; end: 10228e633;  */

undefined8 FUN_10228e5e4(void)

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


