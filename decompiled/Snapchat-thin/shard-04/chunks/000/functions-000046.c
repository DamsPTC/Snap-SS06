/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ffcae8; end: 102ffcafb;  */

void FUN_102ffcae8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100379af4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x20) = uVar9;
  *(undefined8 *)(lVar3 + 0x28) = uVar7;
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  *(undefined8 *)(lVar3 + 0x38) = uVar8;
  *(undefined8 *)(lVar3 + 0x40) = uVar2;
  *(undefined8 *)(lVar3 + 0x48) = uStack_70;
  func_0x0001000285a8(0x112ec3a68,&UNK_10dae3cc0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c6157c(uStack_78);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar3 + 0x18) = puVar6;
  func_0x000103002054(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x000103001d94();
  *(undefined8 *)(lVar3 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_103001df8();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_78);
  *(undefined8 *)(lVar3 + 0x50) = uVar9;
  *param_1 = lVar3;
  return;
}



/* Entry: 102ffcafc; end: 102ffcceb;  */

long FUN_102ffcafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  func_0x0001000285a8(0x112ec3a68,&UNK_10dae3cc0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61174(param_7);
  uVar1 = param_8;
  func_0x000107c6157c(param_8);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x000103002054(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103001d94();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  FUN_103001df8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61574(param_8);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  return unaff_x20;
}



/* Entry: 102ffccec; end: 102ffcd67;  */

void FUN_102ffccec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102ffcd68; end: 102ffcdbb;  */

void FUN_102ffcd68(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ffcdbc; end: 102ffce07;  */

void FUN_102ffcdbc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ffce08; end: 102ffce5b;  */

void FUN_102ffce08(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ffce5c; end: 102ffde7f;  */

void FUN_102ffce5c(long *param_1,long param_2)

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
  func_0x00010034fbc8();
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
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  *(undefined8 *)(param_2 + 0xc0) = uStack_120;
  *(undefined8 *)(param_2 + 200) = uStack_128;
  *(undefined8 *)(param_2 + 0xd0) = uStack_130;
  *(undefined8 *)(param_2 + 0xd8) = uStack_138;
  *(undefined8 *)(param_2 + 0xe0) = uStack_140;
  puVar1 = PTR_PTR_1126ac9b8;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar13 = uStack_88;
  func_0x000107c61174();
  uVar14 = uStack_90;
  func_0x000107c61174();
  uVar15 = uStack_98;
  func_0x000107c61174();
  uVar4 = uStack_a0;
  func_0x000107c61174();
  uVar5 = uStack_a8;
  func_0x000107c61174();
  uVar6 = uStack_b0;
  func_0x000107c61174();
  uVar7 = uStack_b8;
  func_0x000107c61174();
  uVar8 = uStack_c0;
  func_0x000107c61174();
  uVar9 = uStack_c8;
  func_0x000107c61174();
  uVar10 = uStack_d0;
  func_0x000107c61174();
  uVar11 = uStack_d8;
  func_0x000107c61174();
  uVar17 = uStack_e0;
  func_0x000107c61174();
  uVar18 = uStack_e8;
  func_0x000107c61174();
  uVar19 = uStack_f0;
  func_0x000107c61174();
  uVar20 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar29 = uStack_140;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar30 = 0xd000000000000013;
  uVar16 = uVar30;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar33 = 0xd000000000000016;
  uVar16 = uVar33;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = uVar30;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f017680);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = uVar33;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef329c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar31 = 0xd000000000000017;
  uVar16 = uVar31;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar32 = 0xd000000000000019;
  uVar16 = uVar32;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef32a00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar32);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef329e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f119710);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar33);
  uVar32 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar33 = 0xd000000000000015;
  uVar16 = uVar33;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = uVar31;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar32);
  uVar16 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  uVar32 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f01aa80);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar30);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2b490);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar31);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc3430);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar33);
  func_0x000107c61174(uVar24);
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa60);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar32);
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar32);
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f119740);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar32);
  uVar33 = 0xd000000000000014;
  uVar16 = uVar33;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f00adb0);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar16);
  uVar32 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar32);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar33);
  func_0x000107c61174();
  uVar16 = uVar32;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
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
  *(undefined8 *)(param_2 + 0xe8) = uVar16;
  *param_1 = param_2;
  return;
}



/* Entry: 102ffde80; end: 102ffdedb;  */

void FUN_102ffde80(void)

{
  long unaff_x20;
  
  FUN_102ffce5c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 102ffdedc; end: 102ffecd3;  */

void FUN_102ffdedc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_21;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_22;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_23;
  *(undefined8 *)(unaff_x20 + 200) = param_24;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_25;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_26;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_27;
  puVar1 = PTR_PTR_1126ac9b8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000013;
  uVar2 = uVar5;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  uVar2 = uVar6;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar5;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f017680);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar6;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef329c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  uVar2 = uVar7;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000019;
  uVar2 = uVar4;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef32a00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef329e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f119710);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000015;
  uVar2 = uVar4;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar7;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f01aa80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2b490);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc3430);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_23);
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_24);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f119740);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000014;
  uVar2 = uVar4;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f00adb0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_26);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_27);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_27);
  *(undefined **)(unaff_x20 + 0xe8) = puVar3;
  return;
}



/* Entry: 102ffecd4; end: 102ffede7;  */

void FUN_102ffecd4(void)

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
  return;
}



/* Entry: 102ffede8; end: 102ffee3b;  */

void FUN_102ffede8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ffee3c; end: 102ffee43;  */

void FUN_102ffee3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ffee44; end: 102ffee93;  */

undefined8 FUN_102ffee44(void)

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



/* Entry: 102ffee94; end: 102ffeed7;  */

undefined1  [16] FUN_102ffee94(void)

{
  return ZEXT816(0x1105fbce0);
}



/* Entry: 102ffeed8; end: 102ffeeff;  */

void FUN_102ffeed8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ffef00; end: 102ffef1b;  */

undefined8 FUN_102ffef00(void)

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



/* Entry: 102ffef1c; end: 102ffeff3;  */

void FUN_102ffef1c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ffeff4; end: 102fff013;  */

void FUN_102ffeff4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102fff014; end: 102fff053;  */

void FUN_102fff014(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f323c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db78d90;
  func_0x000107c61520(&UNK_10db78d90,&UNK_1105fbdf8);
  puRam0000000112f323c8 = puVar1;
  return;
}



/* Entry: 102fff054; end: 102fff063;  */

undefined1  [16] FUN_102fff054(void)

{
  return ZEXT816(0x1105fbdf8);
}



/* Entry: 102fff064; end: 102fff073; -[_TtC32SCSpotlightRecentStoriesServices32SCSpotlightRecentStoriesServices recentStoriesProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fff064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f323d0));
  return;
}



/* Entry: 102fff074; end: 102fff0bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fff074(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f323d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102fff0c0; end: 102fff117; -[_TtC32SCSpotlightRecentStoriesServices32SCSpotlightRecentStoriesServices initWithRecentStoriesProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fff0c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f323d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102fff118; end: 102fff177; -[_TtC32SCSpotlightRecentStoriesServices32SCSpotlightRecentStoriesServices init] */

void FUN_102fff118(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightRecentStoriesServices.SCSpotlightRecentStoriesServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fff144);
  (*pcVar1)();
}



/* Entry: 102fff178; end: 102fff187; -[_TtC32SCSpotlightRecentStoriesServices32SCSpotlightRecentStoriesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fff178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f323d0));
  return;
}



/* Entry: 102fff188; end: 102fff423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102fff188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112f32400;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f32408;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001030018e8();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f32430) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f32448) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f32410) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f32418) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f32420) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f32428) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f32438) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f32440) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f32458) = param_8;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar4,puVar3);
  func_0x000107c61180();
  uVar6 = 0;
  func_0x000107c60714(lVar2,0);
  puVar3 = &UNK_1105fbfa0;
  func_0x000107c613fc(&UNK_1105fbfa0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,puVar4);
  uStack_80 = 0x103001d00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105fbfb8;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_78);
  func_0x000107c5fb28(lVar2,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000100162d98(lVar2 + 0x20,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61574(lVar2);
  return puVar4;
}



/* Entry: 102fff424; end: 102fff4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fff424(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5d9c0();
    func_0x000107c61170(puVar1);
    *(undefined **)(param_1 + _DAT_112f32430) = puVar2;
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102fff4b4; end: 10300011f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102fff4b4(undefined *param_1,undefined **param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  long *plVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long lVar22;
  long unaff_x20;
  long lVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puStack_138;
  long lStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  
  puVar7 = param_1;
  func_0x000107c4004c();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
    return 0;
  }
  puVar8 = puVar7;
  func_0x000107c5faec();
  uVar2 = (ulong)puVar8 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    puVar9 = param_1;
    ppuVar19 = param_2;
    func_0x000107c40674();
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c5faec();
    ppuVar20 = ppuVar19;
    func_0x000107c61170(puVar9);
    puVar9 = param_1;
    func_0x000107c5d88c();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
      puVar31 = (undefined *)0x0;
    }
    else {
      puVar31 = puVar9;
      func_0x000107c3ebcc();
      func_0x000107c61170(puVar9);
    }
    puVar9 = param_1;
    func_0x000107c4cdc4();
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    puStack_a0 = puVar11;
    ppuStack_98 = ppuVar20;
    func_0x000107c5fb78(0x3a,0xe100000000000000);
    bVar6 = ((ulong)puVar31 & 1) == 0;
    uVar28 = 0x65757274;
    if (bVar6) {
      uVar28 = 0x65736c6166;
    }
    uVar25 = 0xe400000000000000;
    if (bVar6) {
      uVar25 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar28,uVar25);
    func_0x000107c6142c(uVar25);
    ppuVar20 = ppuStack_98;
    puVar9 = puStack_a0;
    uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112f32400);
    func_0x000107c4b940(uVar28);
    lVar22 = _DAT_112f32408;
    ppuVar21 = &puStack_a0;
    func_0x000107c61428(unaff_x20 + _DAT_112f32408,ppuVar21,0x20,0);
    lVar23 = *(long *)(unaff_x20 + lVar22);
    if (*(long *)(lVar23 + 0x10) == 0) {
      func_0x000107c614a8(&puStack_a0);
LAB_102fff6ec:
      func_0x000107c5d278(uVar28);
      plVar24 = (long *)0x0;
LAB_102fff6f8:
      puVar31 = param_1;
      func_0x000107c51f10();
      func_0x000107c61180();
      if (puVar31 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(ppuVar21);
      }
      uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112f32410);
      uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112f32418);
      uVar32 = *(undefined8 *)(unaff_x20 + _DAT_112f32420);
      uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f32428);
      puVar11 = PTR_PTR_1126c6928;
      func_0x000107c610f8();
      func_0x000107c61174(uVar25);
      func_0x000107c615f0(uVar30);
      func_0x000107c615f0(uVar32);
      func_0x000107c61174();
      func_0x000107c45f50();
      func_0x000107c61170(uVar25);
      func_0x000107c615e8(uVar30);
      func_0x000107c615e8(uVar32);
      func_0x000107c61170(uVar27);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar31);
      if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103000120);
        (*pcVar5)();
      }
      func_0x000107c61174();
      puVar31 = (undefined *)0x0;
      if (plVar24 == (long *)0x0) goto LAB_102fff970;
LAB_102fff81c:
      func_0x000107c61174(puVar31);
      plVar13 = plVar24;
    }
    else {
      func_0x000107c61434(lVar23);
      puVar31 = puVar10;
      ppuVar21 = ppuVar19;
      func_0x000100029284();
      if (((ulong)ppuVar21 & 1) == 0) {
        func_0x000107c614a8(&puStack_a0);
        func_0x000107c6142c(lVar23);
        goto LAB_102fff6ec;
      }
      plVar24 = (long *)(*(long *)(lVar23 + 0x38) + (long)puVar31 * 0x20);
      lVar29 = *plVar24;
      lVar3 = plVar24[1];
      lVar12 = plVar24[2];
      lVar4 = plVar24[3];
      func_0x000107c61434(lVar29);
      func_0x000107c61434(lVar3);
      func_0x000107c61434(lVar12);
      func_0x000107c61434(lVar4);
      func_0x000107c614a8(&puStack_a0);
      func_0x000107c6142c(lVar23);
      if (*(long *)(lVar3 + 0x10) == 0) {
        lVar23 = 0;
        if (*(long *)(lVar29 + 0x10) != 0) goto LAB_102fff858;
LAB_102fff838:
        puVar31 = (undefined *)0x0;
      }
      else {
        func_0x000107c61438(lVar3,2);
        puVar31 = puVar9;
        ppuVar21 = ppuVar20;
        func_0x000100029284();
        if (((ulong)ppuVar21 & 1) == 0) {
          lVar23 = 0;
        }
        else {
          lVar23 = *(long *)(*(long *)(lVar3 + 0x38) + (long)puVar31 * 8);
          func_0x000107c61174(lVar23);
        }
        ppuVar21 = (undefined **)0x2;
        func_0x000107c61430(lVar3,2);
        if (*(long *)(lVar29 + 0x10) == 0) goto LAB_102fff838;
LAB_102fff858:
        func_0x000107c61438(lVar29,2);
        puVar31 = puVar9;
        ppuVar21 = ppuVar20;
        func_0x000100029284();
        if (((ulong)ppuVar21 & 1) == 0) {
          puVar31 = (undefined *)0x0;
        }
        else {
          puVar31 = *(undefined **)(*(long *)(lVar29 + 0x38) + (long)puVar31 * 8);
          func_0x000107c61174(puVar31);
        }
        ppuVar21 = (undefined **)0x2;
        func_0x000107c61430(lVar29,2);
      }
      func_0x000107c6142c(lVar12);
      func_0x000107c6142c(lVar3);
      func_0x000107c6142c(lVar29);
      if (*(long *)(lVar4 + 0x10) == 0) {
        plVar24 = (long *)0x0;
      }
      else {
        func_0x000107c61434(lVar4);
        puVar11 = puVar8;
        ppuVar21 = param_2;
        func_0x000100029284();
        if (((ulong)ppuVar21 & 1) == 0) {
          plVar24 = (long *)0x0;
        }
        else {
          plVar24 = *(long **)(*(long *)(lVar4 + 0x38) + (long)puVar11 * 8);
          func_0x000107c61174(plVar24);
        }
        func_0x000107c6142c(lVar4);
      }
      func_0x000107c6142c(lVar4);
      func_0x000107c5d278(uVar28);
      if (lVar23 != 0) {
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(ppuVar19);
        func_0x000107c6142c(ppuVar20);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(plVar24);
        func_0x000107c61170(puVar31);
        return lVar23;
      }
      if (puVar31 == (undefined *)0x0) goto LAB_102fff6f8;
      func_0x000107c61174();
      func_0x000107c61170(puVar7);
      puVar11 = puVar31;
      if (plVar24 != (long *)0x0) goto LAB_102fff81c;
LAB_102fff970:
      uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f32438);
      uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112f32440);
      func_0x000107c61174(puVar31);
      func_0x000107c41408();
      func_0x000107c61180();
      if (param_1 == (undefined *)0x0) {
LAB_102fff9f8:
        lVar29 = 0;
      }
      else {
        lVar23 = *(long *)(unaff_x20 + _DAT_112f32458);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar23 == 0) {
          func_0x000107c615e8(param_1);
          goto LAB_102fff9f8;
        }
        lVar29 = lVar23;
        func_0x000107c4e864();
        func_0x000107c61180();
        func_0x000107c615e8(lVar23);
        func_0x000107c615e8(param_1);
      }
      lVar12 = 0;
      FUN_103002440();
      lVar23 = lVar12;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar23 + _DAT_112f325b0);
      *puVar1 = puVar8;
      puVar1[1] = param_2;
      *(undefined8 *)(lVar23 + _DAT_112f325b8) = uVar27;
      *(undefined8 *)(lVar23 + _DAT_112f325c0) = uVar25;
      *(long *)(lVar23 + _DAT_112f325c8) = lVar29;
      puVar7 = PTR_s_init_1125d9248;
      lStack_78 = lVar23;
      lStack_70 = lVar12;
      func_0x000107c61434(param_2);
      func_0x000107c61174(uVar27);
      func_0x000107c61174(uVar25);
      plVar13 = &lStack_78;
      func_0x000107c61154(plVar13,puVar7);
      plVar24 = (long *)0x0;
    }
    puVar26 = *(undefined **)(unaff_x20 + _DAT_112f32448);
    func_0x000107c61174();
    func_0x000107c405c8();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar7 = puVar26;
    func_0x000107c61150(puVar26,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_contextParamsWithMessageType__1125b14f0);
    if (((ulong)puVar7 & 1) != 0) {
      puVar7 = puVar26;
      func_0x000107c405b4();
      func_0x000107c61180();
      puVar14 = puVar7;
      func_0x000107c3ff40();
      func_0x000107c61180();
      if (puVar14 == (undefined *)0x0) {
        ppuStack_b8 = (undefined **)0x0;
        puStack_c0 = (undefined *)0x0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c60234(&puStack_c0);
        func_0x000107c615e8(puVar14);
      }
      ppuStack_98 = ppuStack_b8;
      puStack_a0 = puStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        func_0x000107c6142c(ppuVar19);
        func_0x000107c61170(puVar31);
        func_0x000107c6142c(param_2);
        func_0x000107c61170(plVar24);
        func_0x000107c61170(plVar13);
        func_0x000107c6142c(ppuVar20);
        func_0x000107c61170(puVar11);
        func_0x000107c615e8(puVar26);
        func_0x000107c61170(puVar7);
        func_0x00010006e7f4(&puStack_a0);
        return 0;
      }
      uVar25 = 0;
      FUN_103001a20(0);
      plVar15 = &lStack_c8;
      func_0x000107c6147c(plVar15,&puStack_a0,PTR___sypN_11034f1a8 + 8,uVar25,6);
      if (((ulong)plVar15 & 1) == 0) {
        func_0x000107c6142c(ppuVar19);
        func_0x000107c61170(puVar31);
        func_0x000107c6142c(param_2);
        func_0x000107c61170(plVar24);
        func_0x000107c61170(plVar13);
        func_0x000107c6142c(ppuVar20);
        func_0x000107c61170(puVar11);
        func_0x000107c615e8(puVar26);
        goto LAB_102fffb54;
      }
      func_0x000107c4b940(uVar28);
      func_0x000107c61428(unaff_x20 + lVar22,&puStack_a0,0x20,0);
      lVar23 = *(long *)(unaff_x20 + lVar22);
      if (*(long *)(lVar23 + 0x10) == 0) {
LAB_102fffdb4:
        func_0x000107c614a8(&puStack_a0);
      }
      else {
        func_0x000107c61434(lVar23);
        puVar14 = puVar10;
        ppuVar21 = ppuVar19;
        func_0x000100029284();
        if (((ulong)ppuVar21 & 1) == 0) {
          func_0x000107c6142c(lVar23);
          goto LAB_102fffdb4;
        }
        puVar1 = (undefined8 *)(*(long *)(lVar23 + 0x38) + (long)puVar14 * 0x20);
        uVar25 = *puVar1;
        lVar29 = puVar1[1];
        uVar27 = puVar1[2];
        uVar30 = puVar1[3];
        func_0x000107c61434();
        func_0x000107c61434(lVar29);
        func_0x000107c61434(uVar27);
        func_0x000107c61434(uVar30);
        func_0x000107c6142c(lVar23);
        if (*(long *)(lVar29 + 0x10) == 0) {
          func_0x000107c614a8(&puStack_a0);
          FUN_103001a64(uVar25,lVar29,uVar27,uVar30);
        }
        else {
          func_0x000107c61434(lVar29);
          puVar14 = puVar9;
          ppuVar21 = ppuVar20;
          func_0x000100029284();
          if (((ulong)ppuVar21 & 1) != 0) {
            lVar22 = *(long *)(*(long *)(lVar29 + 0x38) + (long)puVar14 * 8);
            func_0x000107c61174(lVar22);
            func_0x000107c614a8(&puStack_a0);
            func_0x000107c6142c(lVar29);
            FUN_103001a64(uVar25,lVar29,uVar27,uVar30);
            func_0x000107c6142c(param_2);
            func_0x000107c6142c(ppuVar19);
            func_0x000107c6142c(ppuVar20);
            func_0x000107c5d278(uVar28);
            func_0x000107c615e8(puVar26);
            func_0x000107c61170(lStack_c8);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(plVar13);
            func_0x000107c61170(puVar31);
            func_0x000107c61170(plVar24);
            func_0x000107c61170(puVar11);
            return lVar22;
          }
          func_0x000107c614a8(&puStack_a0);
          func_0x000107c6142c(lVar29);
          FUN_103001a64(uVar25,lVar29,uVar27,uVar30);
        }
      }
      func_0x000107c61428(unaff_x20 + lVar22,&puStack_a0,0x20,0);
      lVar23 = *(long *)(unaff_x20 + lVar22);
      if (*(long *)(lVar23 + 0x10) != 0) {
        func_0x000107c61434(lVar23);
        puVar14 = puVar10;
        ppuVar21 = ppuVar19;
        func_0x000100029284();
        if (((ulong)ppuVar21 & 1) != 0) {
          puVar1 = (undefined8 *)(*(long *)(lVar23 + 0x38) + (long)puVar14 * 0x20);
          puVar14 = (undefined *)*puVar1;
          puStack_138 = (undefined *)puVar1[1];
          puVar16 = (undefined *)puVar1[2];
          puVar17 = (undefined *)puVar1[3];
          func_0x000107c61434(puVar14);
          func_0x000107c61434(puStack_138);
          func_0x000107c61434(puVar16);
          func_0x000107c61434(puVar17);
          func_0x000107c614a8(&puStack_a0);
          func_0x000107c6142c(lVar23);
          goto LAB_102fffec4;
        }
        func_0x000107c6142c(lVar23);
      }
      func_0x000107c614a8(&puStack_a0);
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001030017f0(PTR___swiftEmptyArrayStorage_11034f1c8,0x112f324a8,&UNK_10db78f08);
      puStack_138 = puVar17;
      func_0x0001030017f0(puVar17,0x112f32490,&UNK_10db78ef0);
      puVar16 = puVar17;
      func_0x0001030016f4();
      func_0x0001030017f0(puVar17,0x112f324a0,&UNK_10db78f00);
LAB_102fffec4:
      func_0x000107c61174();
      puVar18 = puVar14;
      func_0x000107c61558(puVar14);
      puStack_a0 = puVar14;
      FUN_103000750(puVar11,puVar9,ppuVar20,puVar18,0x112f324a8,&UNK_10db78f08);
      puVar14 = puStack_a0;
      func_0x000107c61174();
      puVar18 = puVar17;
      func_0x000107c61558(puVar17);
      puStack_a0 = puVar17;
      FUN_103000750(plVar13,puVar8,param_2,puVar18,0x112f324a0,&UNK_10db78f00);
      func_0x000107c6142c(param_2);
      puVar8 = puStack_a0;
      func_0x000107c615f0(puVar26);
      puVar17 = puVar16;
      func_0x000107c61558(puVar16);
      puStack_a0 = puVar16;
      FUN_103000600(puVar26,puVar9,ppuVar20,puVar17);
      puVar16 = puStack_a0;
      lVar23 = lStack_c8;
      func_0x000107c61174();
      func_0x000107c61174();
      puVar17 = puStack_138;
      func_0x000107c61558(puStack_138);
      puStack_a0 = puStack_138;
      FUN_103000750(lVar23,puVar9,ppuVar20,puVar17,0x112f32490,&UNK_10db78ef0);
      func_0x000107c6142c(ppuVar20);
      puVar9 = puStack_a0;
      func_0x000107c61428(unaff_x20 + lVar22,&puStack_a0,0x21,0);
      func_0x000107c6157c(puVar14);
      func_0x000107c6157c(puVar9);
      func_0x000107c6157c(puVar16);
      func_0x000107c6157c(puVar8);
      uVar25 = *(undefined8 *)(unaff_x20 + lVar22);
      func_0x000107c61558(uVar25);
      puStack_c0 = *(undefined **)(unaff_x20 + lVar22);
      *(undefined8 *)(unaff_x20 + lVar22) = 0x8000000000000000;
      FUN_103000470(puVar14,puVar9,puVar16,puVar8,puVar10,ppuVar19,uVar25);
      func_0x000107c6142c(ppuVar19);
      *(undefined **)(unaff_x20 + lVar22) = puStack_c0;
      func_0x000107c614a8(&puStack_a0);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar16);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar14);
      func_0x000107c5d278(uVar28);
      func_0x000107c615e8(puVar26);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(plVar13);
      func_0x000107c61170(puVar31);
      func_0x000107c61170(plVar24);
      func_0x000107c61170(puVar11);
      return lStack_c8;
    }
    func_0x000107c615e8(puVar26);
    func_0x000107c6142c(ppuVar19);
    func_0x000107c61170(puVar31);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(plVar24);
    func_0x000107c61170(plVar13);
    param_2 = ppuVar20;
    puVar7 = puVar11;
  }
  func_0x000107c6142c(param_2);
LAB_102fffb54:
  func_0x000107c61170(puVar7);
  return 0;
}



/* Entry: 103000120; end: 10300017b; -[SCSpotlightShareContextProvider getContextWithParams:] */

void FUN_103000120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102fff4b4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10300017c; end: 103000257; -[SCSpotlightShareContextProvider disposeWithConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10300017c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c5faec(param_3);
  lVar1 = _DAT_112f32400;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112f32400);
  lVar2 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c4b940(uVar5);
  uVar3 = 0x21;
  uVar4 = 0;
  func_0x000107c61428(lVar2 + _DAT_112f32408,auStack_68,0x21,0);
  uVar5 = param_2;
  FUN_103000384(param_3,param_2);
  func_0x000107c614a8(auStack_68);
  FUN_103001a64(param_3,uVar5,uVar3,uVar4);
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c61170(lVar2);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 103000258; end: 10300025f; -[SCSpotlightShareContextProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_103000258(void)

{
  return 0;
}



/* Entry: 103000260; end: 10300026b; -[SCSpotlightShareContextProvider pushToValdiMarshaller:] */

undefined8 FUN_103000260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df0d0;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010af9b284();
  func_0x00010af9b278();
  return param_3;
}



/* Entry: 10300026c; end: 1030002cb; -[SCSpotlightShareContextProvider init] */

void FUN_10300026c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightShareContextProvider.SCSpotlightShareContextProvider",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103000298);
  (*pcVar1)();
}



/* Entry: 1030002cc; end: 103000383; -[SCSpotlightShareContextProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030002cc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f32448));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f32410));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f32418));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f32420));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f32428));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f32438));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f32440));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f32458));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f32400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f32408));
  return;
}



/* Entry: 103000384; end: 10300046f;  */

undefined8 FUN_103000384(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1030008c4();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 0x20);
    func_0x000103001544(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 103000470; end: 1030005ff;  */

/* WARNING: Possible PIC construction at 0x000103000544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103000554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103000548) */
/* WARNING: Removing unreachable block (ram,0x000103000558) */

void FUN_103000470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,uint param_7)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar5 = param_5;
  uVar6 = param_6;
  func_0x000100029284();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10300057c);
    (*pcVar4)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar8) {
    FUN_103000d44(lVar8,param_7 & 1);
    uVar5 = param_5;
    uVar9 = param_6;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103000520);
      (*pcVar4)();
    }
  }
  else if ((param_7 & 1) == 0) {
    FUN_1030008c4();
    lVar8 = *unaff_x20;
    goto joined_r0x000103000590;
  }
  lVar8 = *unaff_x20;
joined_r0x000103000590:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar5 * 0x20);
    uVar3 = puVar1[3];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  lVar7 = lVar8 + (uVar5 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar5 * 0x10);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar5 * 0x20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103000600);
    (*pcVar4)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_6);
  return;
}



/* Entry: 103000600; end: 10300074f;  */

void FUN_103000600(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1030006d8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000103001014(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030006a0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103000a74();
    lVar6 = *unaff_x20;
    goto joined_r0x0001030006ec;
  }
  lVar6 = *unaff_x20;
joined_r0x0001030006ec:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103000750);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103000750; end: 1030008c3;  */

void FUN_103000750(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103000840);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x0001030012b0(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103000804);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103000be4(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x00010300085c;
  }
  lVar6 = *unaff_x20;
joined_r0x00010300085c:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1030008c4);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1030008c4; end: 103000d43;  */

void FUN_1030008c4(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  func_0x0001000285a8(0x112f32488,&UNK_10db78ee8);
  lVar13 = *unaff_x20;
  lVar7 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar13 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar13 + 0x40);
    if (uVar8 == 0) goto LAB_1030009a4;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
        lVar12 = uVar10 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar12);
        uVar5 = puVar2[1];
        lVar11 = uVar10 * 0x20;
        puVar3 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar11);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar12);
        uVar18 = puVar3[1];
        uVar17 = *puVar3;
        uVar16 = puVar3[3];
        uVar15 = puVar3[2];
        *puVar4 = *puVar2;
        puVar4[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar11);
        puVar2[1] = uVar18;
        *puVar2 = uVar17;
        puVar2[3] = uVar16;
        puVar2[2] = uVar15;
        func_0x000107c61434();
        func_0x000107c61434(uVar17);
        func_0x000107c61434(uVar17,uVar18);
        func_0x000107c61434(uVar15);
        func_0x000107c61434(uVar15,uVar16);
        if (uVar8 != 0) break;
LAB_1030009a4:
        do {
          lVar11 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103000a74);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar11) goto LAB_103000a48;
          uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar14 = lVar11;
      }
    } while( true );
  }
LAB_103000a48:
  func_0x000107c61574(lVar13);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 103000d44; end: 1030016f3;  */

void FUN_103000d44(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f32488;
  func_0x0001000285a8(0x112f32488,&UNK_10db78ee8);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_103000fe0:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103001010);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar17 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_103000fe0;
        }
        uVar16 = puVar17[lVar18];
        lVar10 = lVar10 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar18 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 0x20);
    uVar20 = puVar2[1];
    uVar19 = *puVar2;
    uVar22 = puVar2[3];
    uVar21 = puVar2[2];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar19);
      func_0x000107c61434(uVar19,uVar20);
      func_0x000107c61434(uVar21);
      func_0x000107c61434(uVar21,uVar22);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103001014);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 0x20);
    puVar2[1] = uVar20;
    *puVar2 = uVar19;
    puVar2[3] = uVar22;
    puVar2[2] = uVar21;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar18;
  } while( true );
}



/* Entry: 1030016f4; end: 103001a1f;  */

undefined * FUN_1030016f4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f32498,&UNK_10db78ef8);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1030017ec);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1030017f0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 103001a20; end: 103001a63;  */

void FUN_103001a20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f32450 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c6910;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f32450 = puVar1;
  return;
}



/* Entry: 103001a64; end: 103001aaf;  */

/* WARNING: Possible PIC construction at 0x000103001a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103001a94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103001a88) */
/* WARNING: Removing unreachable block (ram,0x000103001a98) */

void FUN_103001a64(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 103001ab0; end: 103001acf;  */

void FUN_103001ab0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b0138);
  return;
}



/* Entry: 103001ad0; end: 103001b33;  */

long FUN_103001ad0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103001b34; end: 103001c13;  */

undefined8 * FUN_103001b34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103001c14; end: 103001c67;  */

undefined8 * FUN_103001c14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103001c68; end: 103001d23;  */

int FUN_103001c68(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103001d24; end: 103001df7;  */

void FUN_103001d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_8;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return;
}



/* Entry: 103001df8; end: 103001fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103001df8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  func_0x000100083b20(&lStack_68);
  uVar12 = *(undefined8 *)(lStack_68 + _DAT_112f51260);
  func_0x000107c615f0(uVar12);
  func_0x000107c61170(lStack_68);
  uVar5 = *(undefined8 *)(lVar1 + _DAT_113074258);
  func_0x000107c61174(uVar5);
  lVar6 = lVar2;
  func_0x000107c4f614();
  func_0x000107c61180();
  lVar7 = lVar3;
  func_0x000107c5bf98();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103001fa0);
    (*pcVar4)();
  }
  lVar8 = lVar3;
  func_0x000107c5bf64();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x000100083b20(&uStack_70);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
    func_0x000107c61174(uVar9);
    func_0x000107c4141c(uVar11);
    func_0x000107c61180();
    uVar10 = uVar11;
    func_0x000107c3ff98();
    func_0x000107c61180();
    func_0x000107c615e8(uVar11);
    uVar11 = 0;
    FUN_103001ab0(0);
    func_0x000107c610f8();
    FUN_102fff188(uVar11,uVar12,uVar5,lVar6,lVar7,lVar8,uStack_70,uVar9,uVar10);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    return uVar12;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x103001fa4);
  (*pcVar4)();
}



/* Entry: 103001fa4; end: 1030020e7;  */

/* WARNING: Possible PIC construction at 0x000103001fd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103001fdc) */

void FUN_103001fa4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 1030020e8; end: 10300215f;  */

void FUN_1030020e8(undefined8 *param_1,undefined8 param_2)

{
  FUN_103001df8();
  *param_1 = param_2;
  return;
}



/* Entry: 103002160; end: 1030022b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103002160(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f325c8);
  if (lVar1 != 0) {
    func_0x000107c4d17c(lVar1,param_2,1);
    func_0x000107c61180();
    func_0x0001043330d0(0);
    uVar2 = 0;
    func_0x0001043320e8(0,0,0,0,0,0,*(undefined8 *)(unaff_x20 + _DAT_112f325b0),
                        ((undefined8 *)(unaff_x20 + _DAT_112f325b0))[1],0);
    lVar5 = *(long *)(unaff_x20 + _DAT_112f325c0);
    lVar3 = lVar5;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar5);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    lVar4 = lVar1;
    func_0x0001043309bc(lVar1,0,0,0,uVar2,0x16,0x57,0xffffffffffffffff);
    lVar3 = _DAT_11306ef08;
    func_0x000107c61428(lVar4 + _DAT_11306ef08,auStack_58,1,0);
    func_0x000107c61604(lVar4 + lVar3);
    func_0x000107c42c1c(lVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1030022b4; end: 1030022ff; -[_TtC31SCSpotlightShareContextProvider35SCSpotlightShareLaunchActionHandler handleStoryTap:] */

/* WARNING: Possible PIC construction at 0x0001030022e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030022ec) */

void FUN_1030022b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103002460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103002300; end: 103002383; -[_TtC31SCSpotlightShareContextProvider35SCSpotlightShareLaunchActionHandler removeSpotlightScope:] */

/* WARNING: Possible PIC construction at 0x00010300233c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103002358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103002340) */
/* WARNING: Removing unreachable block (ram,0x00010300235c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103002300(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103002384; end: 1030023e3; -[_TtC31SCSpotlightShareContextProvider35SCSpotlightShareLaunchActionHandler init] */

void FUN_103002384(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightShareContextProvider.SCSpotlightShareLaunchActionHandler",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030023b0);
  (*pcVar1)();
}



/* Entry: 1030023e4; end: 10300243f; -[_TtC31SCSpotlightShareContextProvider35SCSpotlightShareLaunchActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030023e4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f325b0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f325b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f325c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f325c8));
  return;
}



/* Entry: 103002440; end: 10300245f;  */

void FUN_103002440(void)

{
  func_0x000107c61168(&PTR_PTR_1128b0248);
  return;
}



/* Entry: 103002460; end: 103002543;  */

void FUN_103002460(void)

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
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x000107c60714();
  puVar1 = &UNK_1105fc008;
  func_0x000107c613fc(&UNK_1105fc008,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_103002544;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105fc020;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5fb28(unaff_x20,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001000d76cc(unaff_x20 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(unaff_x20);
  return;
}



/* Entry: 103002544; end: 103002567;  */

void FUN_103002544(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_103002160();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103002568; end: 103002997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103002568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  puVar5 = auStack_80;
  func_0x000107c610f8();
  lVar2 = _DAT_112f325f8;
  func_0x000107c61614(unaff_x20 + _DAT_112f325f8,0);
  lVar3 = _DAT_112f32600;
  func_0x000107c61614(unaff_x20 + _DAT_112f32600,0);
  lVar1 = _DAT_112f32608;
  lVar4 = 0;
  func_0x000107c5eff8();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(unaff_x20 + lVar1,1,1,lVar4);
  func_0x000107c61614(unaff_x20 + _DAT_112f32610,0);
  lVar1 = unaff_x20 + _DAT_112f32618;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f32620) = 1;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112f32628) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f32630) = param_4;
  func_0x000107c61604(unaff_x20 + lVar3,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_112f32638) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f32640) = param_1;
  puVar6 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61154(auStack_80,puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168();
  func_0x000107c61174(puVar5);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000103b83da8();
  func_0x000107c3d7bc(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 103002998; end: 103002a33; -[SCCollectionViewAutoPlayCoordinator initWithCollectionView:collectionViewAutoPlayManager:storiesConfigProvider:dataSource:attribution:autoPlayOperaCornerRadius:] */

void FUN_103002998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_8);
  func_0x000103002780(param_1,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 103002a34; end: 103002aaf;  */

void FUN_103002a34(void)

{
  undefined *puVar1;
  
  func_0x000107c614f0();
  FUN_103002ab0(1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffa0();
  func_0x000107c61170(puVar1);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103002ab0; end: 103002ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103002ab0(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  code *pcStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar8 = (long)&pcStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112f32648;
  func_0x0001000285a8(0x112f32648,&UNK_10db79000);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar8 - extraout_x8_00;
  lVar5 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = lVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = uVar9 - extraout_x12_00;
  if ((param_1 & 1) != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f32620) = 1;
  }
  lVar1 = _DAT_112f32608;
  func_0x000107c61428(unaff_x20 + _DAT_112f32608,auStack_78,0,0);
  pcStack_a0 = *(code **)(lVar6 + 0x38);
  (*pcStack_a0)(lVar5,1,1,lVar2);
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x00010126b110(unaff_x20 + lVar1,lVar7);
  func_0x00010126b110(lVar5,lVar7 + lVar10);
  pcVar11 = *(code **)(lVar6 + 0x30);
  lVar3 = lVar7;
  (*pcVar11)(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000103005ff4(lVar5,0x112d54580,&UNK_10d91b480);
    lVar10 = lVar7 + lVar10;
    (*pcVar11)(lVar10,1,lVar2);
    if ((int)lVar10 == 1) {
      func_0x000103005ff4(lVar7,0x112d54580,&UNK_10d91b480);
      return;
    }
  }
  else {
    func_0x00010126b110(lVar7,uVar9);
    lVar3 = lVar7 + lVar10;
    (*pcVar11)(lVar3,1,lVar2);
    if ((int)lVar3 != 1) {
      lVar3 = lVar8;
      (**(code **)(lVar6 + 0x20))(lVar8,lVar7 + lVar10,lVar2);
      func_0x0001020f5298();
      uVar4 = uVar9;
      func_0x000107c5fab8(uVar9,lVar8,lVar2,lVar3);
      pcVar11 = *(code **)(lVar6 + 8);
      (*pcVar11)(lVar8,lVar2);
      func_0x000103005ff4(lVar5,0x112d54580,&UNK_10d91b480);
      (*pcVar11)(uVar9,lVar2);
      func_0x000103005ff4(lVar7,0x112d54580,&UNK_10d91b480);
      if ((uVar4 & 1) != 0) {
        return;
      }
      goto LAB_103002cfc;
    }
    func_0x000103005ff4(lVar5,0x112d54580,&UNK_10d91b480);
    (**(code **)(lVar6 + 8))(uVar9,lVar2);
  }
  func_0x000103005ff4(lVar7,0x112f32648,&UNK_10db79000);
LAB_103002cfc:
  lVar10 = _DAT_112f32610;
  uVar9 = unaff_x20 + _DAT_112f32610;
  func_0x000107c61618();
  if (uVar9 != 0) {
    uVar4 = uVar9;
    func_0x000107c61150();
    if ((uVar4 & 1) != 0) {
      func_0x000107c52a68(uVar9);
    }
    func_0x000107c615e8(uVar9);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f32628);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c5be5c();
    func_0x000107c615e8(lVar5);
  }
  uVar9 = unaff_x20 + lVar10;
  func_0x000107c61618();
  if (uVar9 != 0) {
    uVar4 = uVar9;
    func_0x000107c61150();
    if ((uVar4 & 1) != 0) {
      func_0x000107c52a70(uVar9);
    }
    func_0x000107c615e8(uVar9);
  }
  func_0x000107c61604(unaff_x20 + lVar10,0);
  lVar10 = unaff_x20 + _DAT_112f32618;
  *(undefined8 *)(lVar10 + 8) = 0;
  func_0x000107c61604(lVar10,0);
  lVar10 = lStack_98;
  (*pcStack_a0)(lStack_98,1,1,lVar2);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x21,0);
  func_0x000101268c10(lVar10,unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_90);
  return;
}



/* Entry: 103002ebc; end: 103002f43; -[SCCollectionViewAutoPlayCoordinator dealloc] */

void FUN_103002ebc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_103002ab0(1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffa0();
  func_0x000107c61170(puVar2);
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103002f44; end: 103002feb; -[SCCollectionViewAutoPlayCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103002fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103002fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103002fa4) */
/* WARNING: Removing unreachable block (ram,0x000103002fd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103002f44(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f32628));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f32638));
  func_0x000107c61610(param_1 + _DAT_112f325f8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f32630));
  param_1 = param_1 + _DAT_112f32600;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103002fec; end: 103003157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103002fec(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&uStack_70;
  func_0x000107c5eba4(&puStack_60);
  if (puStack_48 == (undefined *)0x0) {
    func_0x000103005ff4(&puStack_60,0x112d387f8,&UNK_10d902650);
    uStack_68 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0x112f32688;
    func_0x0001000285a8(0x112f32688,&UNK_10db79088);
    func_0x000107c6147c(&uStack_70,&puStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    uVar3 = uStack_70;
    if (iVar2 == 0) {
      uVar3 = 0;
      uStack_68 = 0;
    }
  }
  lVar1 = unaff_x20 + _DAT_112f32618;
  *(undefined8 *)(lVar1 + 8) = uStack_68;
  func_0x000107c61604(lVar1,uVar3);
  func_0x000107c615e8(uVar3);
  pcVar4 = "_handleMediaReadyToDisplay(_:)";
  func_0x0001000c10c0("_handleMediaReadyToDisplay(_:)");
  func_0x000107c61180();
  puVar5 = &UNK_1105fc538;
  func_0x000107c613fc(&UNK_1105fc538,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcStack_40 = FUN_103006034;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105fc550;
  ppuVar6 = &puStack_60;
  puStack_38 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 103003158; end: 103003463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103003158(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  uVar3 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f32608;
  if (uVar3 == 0) {
    return;
  }
  func_0x000107c61428(uVar3 + _DAT_112f32608,auStack_80,0,0);
  func_0x00010126b110(uVar3 + lVar1,puVar9);
  puVar4 = puVar9;
  (**(code **)(lVar11 + 0x30))(puVar9,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x000107c61170(uVar3);
    func_0x000103005ff4(puVar9,0x112d54580,&UNK_10d91b480);
    return;
  }
  (**(code **)(lVar11 + 0x20))(lVar10,puVar9,lVar2);
  uVar5 = uVar3 + _DAT_112f325f8;
  func_0x000107c61618();
  if (uVar5 == 0) {
    (**(code **)(lVar11 + 8))(lVar10,lVar2);
  }
  else {
    uVar6 = uVar3 + _DAT_112f32600;
    func_0x000107c61618();
    if (uVar6 == 0) {
LAB_1030033d8:
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar5);
      (**(code **)(lVar11 + 8))(lVar10,lVar2);
      return;
    }
    func_0x000107c61174();
    uVar7 = uVar3;
    func_0x000107c5efd4();
    uVar8 = uVar6;
    func_0x000107c3e4cc();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    lVar1 = _DAT_112f32610;
    if (uVar8 == 0) {
      (**(code **)(lVar11 + 8))(lVar10,lVar2);
    }
    else {
      uVar6 = uVar3 + _DAT_112f32610;
      func_0x000107c61618();
      if (uVar6 != 0) {
        uVar7 = uVar6;
        func_0x000107c61150();
        if ((uVar7 & 1) != 0) {
          func_0x000107c52a68(uVar6);
        }
        func_0x000107c615e8(uVar6);
      }
      FUN_103003464(0);
      uVar6 = uVar8;
      FUN_103005d20();
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar3 + lVar1;
        func_0x000107c61618();
        if (uVar6 == 0) {
          func_0x000107c61170(uVar3);
          uVar3 = uVar8;
        }
        else {
          uVar7 = uVar6;
          func_0x000107c61150();
          if ((uVar7 & 1) != 0) {
            func_0x000107c52a70(uVar6);
          }
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(uVar6);
          uVar3 = uVar8;
        }
        goto LAB_1030033d8;
      }
      (**(code **)(lVar11 + 8))(lVar10,lVar2);
      func_0x000107c61170(uVar3);
      uVar3 = uVar8;
    }
    func_0x000107c61170(uVar3);
    uVar3 = uVar5;
  }
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 103003464; end: 10300352f;  */

/* WARNING: Possible PIC construction at 0x0001030034c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103003464(uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = unaff_x20 + _DAT_112f32618;
  uVar1 = uVar2;
  func_0x000107c61618();
  if (uVar1 == 0) {
    uVar1 = unaff_x20 + _DAT_112f32610;
    func_0x000107c61618();
    if (uVar1 == 0) {
      return;
    }
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) != 0) {
      func_0x000107c52a6c(uVar1);
    }
  }
  else {
    lVar3 = *(long *)(uVar2 + 8);
    uVar2 = uVar1;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))(*(undefined1 *)(unaff_x20 + _DAT_112f32620),param_1 & 1,uVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 103003530; end: 1030035d3; -[SCCollectionViewAutoPlayCoordinator _handleMediaReadyToDisplay:] */

void FUN_103003530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eba0(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_103002fec(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1030035d4; end: 103003c43;  */

/* WARNING: Possible PIC construction at 0x0001030038ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103003964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103003a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103003a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103003b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103003840: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103003a7c) */
/* WARNING: Removing unreachable block (ram,0x000103003a18) */
/* WARNING: Removing unreachable block (ram,0x000103003968) */
/* WARNING: Removing unreachable block (ram,0x000103003b18) */
/* WARNING: Removing unreachable block (ram,0x000103003b2c) */
/* WARNING: Removing unreachable block (ram,0x0001030038b0) */
/* WARNING: Removing unreachable block (ram,0x0001030038e0) */
/* WARNING: Removing unreachable block (ram,0x0001030038b8) */
/* WARNING: Removing unreachable block (ram,0x0001030038e4) */
/* WARNING: Removing unreachable block (ram,0x000103003984) */
/* WARNING: Removing unreachable block (ram,0x000103003a90) */
/* WARNING: Removing unreachable block (ram,0x000103003b08) */
/* WARNING: Removing unreachable block (ram,0x0001030039ac) */
/* WARNING: Removing unreachable block (ram,0x000103003940) */
/* WARNING: Removing unreachable block (ram,0x0001030039bc) */
/* WARNING: Removing unreachable block (ram,0x0001030039d4) */
/* WARNING: Removing unreachable block (ram,0x000103003a48) */
/* WARNING: Removing unreachable block (ram,0x000103003a08) */
/* WARNING: Removing unreachable block (ram,0x000103003958) */
/* WARNING: Removing unreachable block (ram,0x000103003844) */
/* WARNING: Removing unreachable block (ram,0x000103003860) */
/* WARNING: Removing unreachable block (ram,0x000103003868) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030035d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112f32648;
  func_0x0001000285a8(0x112f32648,&UNK_10db79000);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puStack_88 = auStack_c0 + (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - extraout_x8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)(auStack_c0 + (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - extraout_x8)) -
          extraout_x12;
  lStack_90 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar5 - extraout_x12_01;
  lVar3 = 0;
  func_0x000107c5eff8();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = unaff_x20 + _DAT_112f325f8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar4 = unaff_x20 + _DAT_112f32600;
  func_0x000107c61618();
  lVar1 = _DAT_112f32608;
  lStack_80 = lVar4;
  if (lVar4 != 0) {
    lStack_b0 = lVar6;
    func_0x000107c61428(unaff_x20 + _DAT_112f32608,auStack_78,0,0);
    lStack_a8 = lVar1;
    func_0x00010126b110(unaff_x20 + lVar1,lVar8);
    pcStack_a0 = *(code **)(lVar7 + 0x30);
    lVar4 = lVar8;
    (*pcStack_a0)(lVar8,1,lVar3);
    if ((int)lVar4 == 1) {
      func_0x000103005ff4(lVar8,0x112d54580,&UNK_10d91b480);
      lVar2 = lStack_80;
      func_0x000107c3e4c8(lStack_80);
      func_0x000107c61180();
      func_0x000107c5fc54();
    }
    else {
      lStack_b8 = lVar5;
      (**(code **)(lVar7 + 0x20))(lVar6 - extraout_x12_03,lVar8,lVar3);
      func_0x000107c45358(lVar2);
      func_0x000107c61180();
      func_0x000107c5fc54();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103003c44; end: 103003c6b; -[SCCollectionViewAutoPlayCoordinator updateAutoPlayForVisibleCells] */

void FUN_103003c44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030035d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103003c6c; end: 103003c9b; -[SCCollectionViewAutoPlayCoordinator stopAutoPlayingTilesOnDisappear:] */

void FUN_103003c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103002ab0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103003c9c; end: 103003de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103003c9c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = _DAT_112f32608;
  uVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112f32608,auStack_68,0,0);
  func_0x00010126b110(unaff_x20 + lVar1,puVar6);
  puVar3 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x000103005ff4(puVar6,0x112d54580,&UNK_10d91b480);
  }
  else {
    (**(code **)(lVar7 + 0x20))(uVar5,puVar6,lVar2);
    uVar4 = uVar5;
    func_0x000103003b50(uVar5,param_1);
    if ((uVar4 & 1) == 0) {
      FUN_103002ab0(0);
    }
    (**(code **)(lVar7 + 8))(uVar5,lVar2);
  }
  return;
}



/* Entry: 103003de8; end: 103003e3f; -[SCCollectionViewAutoPlayCoordinator stopAutoPlayIfNotVisibleForVisibleIndexPaths:] */

void FUN_103003de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5eff8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_103003c9c(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103003e40; end: 103004d6f;  */

/* WARNING: Possible PIC construction at 0x000103003f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103003f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103004448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103004458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103004468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103004550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010300450c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103004530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103004548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103004240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103004280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103004270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030040c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030040d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103004084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030040dc) */
/* WARNING: Removing unreachable block (ram,0x0001030040cc) */
/* WARNING: Removing unreachable block (ram,0x000103004274) */
/* WARNING: Removing unreachable block (ram,0x000103004284) */
/* WARNING: Removing unreachable block (ram,0x000103004244) */
/* WARNING: Removing unreachable block (ram,0x000103004280) */
/* WARNING: Removing unreachable block (ram,0x00010300454c) */
/* WARNING: Removing unreachable block (ram,0x000103004534) */
/* WARNING: Removing unreachable block (ram,0x000103004548) */
/* WARNING: Removing unreachable block (ram,0x000103004510) */
/* WARNING: Removing unreachable block (ram,0x00010300446c) */
/* WARNING: Removing unreachable block (ram,0x000103004550) */
/* WARNING: Removing unreachable block (ram,0x00010300445c) */
/* WARNING: Removing unreachable block (ram,0x00010300444c) */
/* WARNING: Removing unreachable block (ram,0x000103003f78) */
/* WARNING: Removing unreachable block (ram,0x000103004078) */
/* WARNING: Removing unreachable block (ram,0x000103003f80) */
/* WARNING: Removing unreachable block (ram,0x00010300408c) */
/* WARNING: Removing unreachable block (ram,0x000103003f88) */
/* WARNING: Removing unreachable block (ram,0x0001030040c4) */
/* WARNING: Removing unreachable block (ram,0x000103003f98) */
/* WARNING: Removing unreachable block (ram,0x0001030040e4) */
/* WARNING: Removing unreachable block (ram,0x000103004034) */
/* WARNING: Removing unreachable block (ram,0x000103004100) */
/* WARNING: Removing unreachable block (ram,0x000103004114) */
/* WARNING: Removing unreachable block (ram,0x000103004058) */
/* WARNING: Removing unreachable block (ram,0x00010300412c) */
/* WARNING: Removing unreachable block (ram,0x00010300406c) */
/* WARNING: Removing unreachable block (ram,0x00010300411c) */
/* WARNING: Removing unreachable block (ram,0x000103004130) */
/* WARNING: Removing unreachable block (ram,0x00010300415c) */
/* WARNING: Removing unreachable block (ram,0x000103004148) */
/* WARNING: Removing unreachable block (ram,0x00010300416c) */
/* WARNING: Removing unreachable block (ram,0x0001030041d4) */
/* WARNING: Removing unreachable block (ram,0x00010300426c) */
/* WARNING: Removing unreachable block (ram,0x0001030041f4) */
/* WARNING: Removing unreachable block (ram,0x000103004184) */
/* WARNING: Removing unreachable block (ram,0x00010300425c) */
/* WARNING: Removing unreachable block (ram,0x00010300419c) */
/* WARNING: Removing unreachable block (ram,0x00010300429c) */
/* WARNING: Removing unreachable block (ram,0x0001030041b8) */
/* WARNING: Removing unreachable block (ram,0x0001030042a8) */
/* WARNING: Removing unreachable block (ram,0x000103004484) */
/* WARNING: Removing unreachable block (ram,0x0001030042b8) */
/* WARNING: Removing unreachable block (ram,0x000103004578) */
/* WARNING: Removing unreachable block (ram,0x0001030044a0) */
/* WARNING: Removing unreachable block (ram,0x00010300451c) */
/* WARNING: Removing unreachable block (ram,0x000103004524) */
/* WARNING: Removing unreachable block (ram,0x0001030044c0) */
/* WARNING: Removing unreachable block (ram,0x0001030042f0) */
/* WARNING: Removing unreachable block (ram,0x000103003f40) */
/* WARNING: Removing unreachable block (ram,0x000103004088) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103003e40(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_110 [56];
  undefined1 *puStack_d8;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = unaff_x20 + _DAT_112f325f8;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20 + _DAT_112f32600;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puStack_d8 = auStack_110 + -(lVar3 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c5efd4();
    func_0x000107c3f730(lVar1);
    func_0x000107c61180();
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 103004d70; end: 103004ecb;  */

void FUN_103004d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar8 = *(long *)(lVar1 + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)&puStack_90 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(lVar7,param_4,lVar1);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  uVar6 = lVar5 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar2 = &UNK_1105fc650;
  func_0x000107c613fc(&UNK_1105fc650,uVar6 + 8,uVar4 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  (**(code **)(lVar8 + 0x20))(puVar2 + uVar9,lVar7,lVar1);
  *(undefined8 *)(puVar2 + uVar6) = param_5;
  pcStack_70 = FUN_1030060e0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105fc668;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(param_2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103004ecc; end: 1030055c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103004ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar3 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = 0x112f32648;
  uStack_c0 = uVar3;
  func_0x0001000285a8(0x112f32648,&UNK_10db79000);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = uVar3 - extraout_x8_00;
  lVar2 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  uVar14 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12_00;
  func_0x000107c61428(param_5 + 0x10,auStack_98,0,0);
  uVar3 = param_5 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f32608;
  if (uVar3 == 0) {
    return;
  }
  lStack_d0 = param_7;
  func_0x000107c61428(uVar3 + _DAT_112f32608,auStack_b0,0,0);
  func_0x00010126b110(uVar3 + lVar2,lVar15);
  uStack_c8 = param_6;
  (**(code **)(lVar10 + 0x10))(lVar16,param_6,lVar1);
  (**(code **)(lVar10 + 0x38))(lVar16,0,1,lVar1);
  lVar17 = (long)*(int *)(lVar17 + 0x30);
  func_0x00010126b110(lVar15,lVar13);
  func_0x00010126b110(lVar16,lVar13 + lVar17);
  pcVar12 = *(code **)(lVar10 + 0x30);
  lVar2 = lVar13;
  (*pcVar12)(lVar13,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000103005ff4(lVar16,0x112d54580,&UNK_10d91b480);
    func_0x000103005ff4(lVar15,0x112d54580,&UNK_10d91b480);
    lVar17 = lVar13 + lVar17;
    (*pcVar12)(lVar17,1,lVar1);
    if ((int)lVar17 != 1) {
LAB_103005174:
      func_0x000103005ff4(lVar13,0x112f32648,&UNK_10db79000);
      goto LAB_1030053f4;
    }
    func_0x000103005ff4(lVar13,0x112d54580,&UNK_10d91b480);
  }
  else {
    func_0x00010126b110(lVar13,uVar14);
    lVar2 = lVar13 + lVar17;
    (*pcVar12)(lVar2,1,lVar1);
    uVar6 = uStack_c0;
    if ((int)lVar2 == 1) {
      func_0x000103005ff4(lVar16,0x112d54580,&UNK_10d91b480);
      func_0x000103005ff4(lVar15,0x112d54580,&UNK_10d91b480);
      (**(code **)(lVar10 + 8))(uVar14,lVar1);
      goto LAB_103005174;
    }
    uVar4 = uStack_c0;
    (**(code **)(lVar10 + 0x20))(uStack_c0,lVar13 + lVar17,lVar1);
    func_0x0001020f5298();
    uVar5 = uVar14;
    func_0x000107c5fab8(uVar14,uVar6,lVar1,uVar4);
    pcVar12 = *(code **)(lVar10 + 8);
    (*pcVar12)(uVar6,lVar1);
    func_0x000103005ff4(lVar16,0x112d54580,&UNK_10d91b480);
    func_0x000103005ff4(lVar15,0x112d54580,&UNK_10d91b480);
    (*pcVar12)(uVar14,lVar1);
    func_0x000103005ff4(lVar13,0x112d54580,&UNK_10d91b480);
    if ((uVar5 & 1) == 0) goto LAB_1030053f4;
  }
  uVar14 = uVar3 + _DAT_112f325f8;
  func_0x000107c61618();
  if (uVar14 == 0) goto LAB_1030053f4;
  uVar6 = uVar3 + _DAT_112f32600;
  func_0x000107c61618();
  if (uVar6 != 0) {
    func_0x000107c61174();
    uVar4 = uVar3;
    func_0x000107c5efd4();
    uVar5 = uVar6;
    func_0x000107c3e4cc();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c4004c();
      func_0x000107c61180();
      lVar17 = lStack_d0;
      func_0x000107c4004c();
      func_0x000107c61180();
      if (uVar6 == 0) {
        uVar6 = 0;
        if (lVar17 == 0) {
LAB_103005334:
          func_0x000107c5efd4();
          uVar4 = uVar14;
          func_0x000107c3f730();
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          if (uVar4 == 0) {
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar14);
            uVar3 = uVar5;
            goto LAB_1030053f4;
          }
          puStack_b8 = PTR_DAT_1126a26c8;
          uVar6 = uVar4;
          func_0x000107c61494(uVar4,1,&puStack_b8);
          if (uVar6 == 0) {
            uVar7 = uVar4;
            func_0x000107c40510();
            func_0x000107c61180();
            if (uVar7 == 0) {
              func_0x000107c61170(uVar3);
              func_0x000107c61170(uVar14);
              func_0x000107c61170(uVar5);
              uVar3 = uVar4;
              goto LAB_1030053f4;
            }
            uVar11 = 0;
LAB_103005488:
            func_0x000107c438d4(uVar7);
          }
          else {
            func_0x000107c61174(uVar4);
            uVar7 = uVar6;
            func_0x000107c3e4c0(uVar6);
            func_0x000107c61180();
            uVar11 = uVar6;
            func_0x000107c61150(uVar6,PTR_s_respondsToSelector__11262c7e0,
                                PTR_s_autoPlayInsertBelowView_1125a2030);
            if ((uVar11 & 1) == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar6;
              func_0x000107c3e4dc(uVar6);
              func_0x000107c61180();
            }
            uVar8 = uVar6;
            func_0x000107c61150(uVar6,PTR_s_respondsToSelector__11262c7e0,
                                PTR_s_autoPlayDesiredSize_1125a2020);
            if ((uVar8 & 1) == 0) goto LAB_103005488;
            func_0x000107c3e4d4(uVar6);
            param_3 = param_1;
            param_4 = param_2;
          }
          func_0x000107c61604(uVar3 + _DAT_112f32610,uVar6);
          lVar17 = *(long *)(uVar3 + _DAT_112f32628);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar17 == 0) {
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar7);
            func_0x000107c61170(uVar5);
            func_0x000107c615e8(uVar6);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar14);
            uVar3 = uVar11;
            goto LAB_1030053f4;
          }
          func_0x000107c5efec();
          uVar9 = *(undefined8 *)(uVar3 + _DAT_112f32638);
          uVar18 = *(undefined8 *)(uVar3 + _DAT_112f32640);
          func_0x000107c61174(uVar9);
          uStack_c0 = uVar4;
          func_0x000107c5bb68(uVar18,param_3,param_4,lVar17);
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(lVar17);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar5);
          func_0x000107c615e8(uVar6);
          uVar3 = uStack_c0;
          goto LAB_1030053ec;
        }
LAB_1030053dc:
        func_0x000107c61170();
      }
      else {
        if (lVar17 == 0) goto LAB_1030053dc;
        func_0x0001044c8618(0);
        func_0x000107c61174();
        uVar4 = uVar6;
        func_0x000107c60118();
        func_0x000107c61170(lVar17);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar6);
        if ((uVar4 & 1) != 0) goto LAB_103005334;
      }
      func_0x000107c61170(uVar3);
      uVar3 = uVar5;
    }
  }
LAB_1030053ec:
  func_0x000107c61170(uVar3);
  uVar3 = uVar14;
LAB_1030053f4:
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1030055c4; end: 103005807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1030055c4(ulong param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar6;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f32630);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000103b8446c();
    lVar4 = lVar3;
    func_0x000107c3ebc0();
    func_0x000107c615e8(lVar3);
    if ((int)lVar4 != 0) {
      if (param_1 == 0) {
        return 0;
      }
      uVar9 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar9 + 0x10);
      }
      else {
        uVar7 = param_1;
        if (-1 < (long)param_1) {
          uVar7 = uVar9;
        }
        func_0x000107c60480();
      }
      uVar8 = 0;
      while( true ) {
        if (uVar7 == uVar8) {
          return 0;
        }
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1030056d4);
            (*pcVar1)();
          }
          uVar5 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar8;
          func_0x000101eff1fc(uVar8,param_1);
        }
        if (SCARRY8(uVar8,1)) break;
        uVar6 = uVar5;
        func_0x000107c4ca5c();
        iVar2 = (int)uVar6;
        func_0x000107c30854();
        func_0x000107c61170(uVar5);
        uVar8 = uVar8 + 1;
        if (iVar2 != 0) {
          return 1;
        }
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030056a8);
      (*pcVar1)();
    }
  }
  return 1;
}



/* Entry: 103005808; end: 103005b8f;  */

void FUN_103005808(long param_1,byte *param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  
  if ((param_3 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    func_0x000107c5b538();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar4 = 0;
    }
    else {
      uVar1 = 0;
      FUN_10300604c(0,0x112e0fd78,&PTR_PTR_1126cbc90);
      lVar4 = param_1;
      func_0x000107c5fc54(param_1,uVar1);
      func_0x000107c61170(param_1);
    }
    lVar2 = lVar4;
    FUN_1030055c4();
    bVar3 = (byte)lVar2;
    func_0x000107c6142c(lVar4);
  }
  *param_2 = bVar3 & 1;
  return;
}



/* Entry: 103005b90; end: 103005beb; -[SCCollectionViewAutoPlayCoordinator couldAutoPlayWithStory:] */

uint FUN_103005b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000103004580(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103005bec; end: 103005c17; -[SCCollectionViewAutoPlayCoordinator init] */

void FUN_103005bec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CollectionViewAutoPlayServicesImplementation.CollectionViewAutoPlayCoordinator"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103005c18);
  (*pcVar1)();
}



/* Entry: 103005c18; end: 103005cf7;  */

/* WARNING: Possible PIC construction at 0x000103005c8c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103005c18(void)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  
  bVar1 = (*(byte *)(unaff_x20 + _DAT_112f32620) ^ 1) & 1;
  *(byte *)(unaff_x20 + _DAT_112f32620) = bVar1;
  uVar3 = unaff_x20 + _DAT_112f32618;
  uVar2 = uVar3;
  func_0x000107c61618();
  if (uVar2 == 0) {
    uVar2 = unaff_x20 + _DAT_112f32610;
    func_0x000107c61618();
    if (uVar2 == 0) {
      return;
    }
    uVar3 = uVar2;
    func_0x000107c61150();
    if ((uVar3 & 1) != 0) {
      func_0x000107c52a6c(uVar2);
    }
  }
  else {
    lVar4 = *(long *)(uVar3 + 8);
    uVar3 = uVar2;
    func_0x000107c614f0();
    (**(code **)(lVar4 + 8))(bVar1,1,uVar3,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 103005cf8; end: 103005d1f; -[SCCollectionViewAutoPlayCoordinator muteButtonTapped] */

void FUN_103005cf8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103005c18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103005d20; end: 103005e43;  */

byte FUN_103005d20(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  byte bStack_31;
  
  bStack_31 = 0;
  func_0x000107c5bfc4();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar5 = 0;
    puVar3 = (undefined *)0x0;
    bVar4 = 0;
  }
  else {
    puVar3 = &UNK_1105fc588;
    func_0x000107c613fc(&UNK_1105fc588,0x18,7);
    *(byte **)(puVar3 + 0x10) = &bStack_31;
    puVar1 = &UNK_1105fc5b0;
    func_0x000107c613fc(&UNK_1105fc5b0,0x20,7);
    uVar5 = 0x10300603c;
    *(undefined8 *)(puVar1 + 0x10) = 0x10300603c;
    *(undefined **)(puVar1 + 0x18) = puVar3;
    uStack_48 = 0x1030061b8;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    pcStack_58 = FUN_103006124;
    puStack_50 = &UNK_1105fc5c8;
    ppuVar2 = &puStack_68;
    puStack_40 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_40);
    func_0x000107c4c6e0(param_1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
    bVar4 = bStack_31;
  }
  func_0x000100d2f9c0(uVar5,puVar3);
  return bVar4;
}



/* Entry: 103005e44; end: 103005ee7;  */

void FUN_103005e44(long param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  long unaff_x20;
  long lVar5;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x10);
  if ((*(ulong *)(unaff_x20 + 0x18) & 1) == 0) {
    bVar4 = 0;
  }
  else {
    func_0x000107c5b538();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar5 = 0;
    }
    else {
      uVar2 = 0;
      FUN_10300604c(0,0x112e0fd78,&PTR_PTR_1126cbc90);
      lVar5 = param_1;
      func_0x000107c5fc54(param_1,uVar2);
      func_0x000107c61170(param_1);
    }
    lVar3 = lVar5;
    FUN_1030055c4();
    bVar4 = (byte)lVar3;
    func_0x000107c6142c(lVar5);
  }
  *pbVar1 = bVar4 & 1;
  return;
}



/* Entry: 103005ee8; end: 103005f07;  */

void FUN_103005ee8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103005f08; end: 103005f0f;  */

void FUN_103005f08(void)

{
  if (lRam0000000112f32678 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e73f658);
  return;
}



/* Entry: 103005f10; end: 103005f47;  */

void FUN_103005f10(undefined8 param_1)

{
  if (lRam0000000112f32678 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e73f658);
  return;
}



/* Entry: 103005f48; end: 103006033;  */

void FUN_103005f48(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_70 = PTR___sBOWV_11034d658 + 0x40;
  puStack_60 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_58 = &UNK_10db79038;
  puStack_48 = &UNK_10db79038;
  lVar1 = 0x13f;
  puStack_68 = puStack_70;
  puStack_50 = puStack_70;
  func_0x000101277810();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10db79038;
    puStack_30 = &UNK_10db79050;
    puStack_28 = &UNK_10db79068;
    func_0x000107c61630(param_1,0x100,10,&puStack_70,param_1 + 0x50);
  }
  return;
}



/* Entry: 103006034; end: 10300604b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103006034(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  uVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f32608;
  if (uVar3 == 0) {
    return;
  }
  func_0x000107c61428(uVar3 + _DAT_112f32608,auStack_80,0,0);
  func_0x00010126b110(uVar3 + lVar1,puVar9);
  puVar4 = puVar9;
  (**(code **)(lVar11 + 0x30))(puVar9,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x000107c61170(uVar3);
    func_0x000103005ff4(puVar9,0x112d54580,&UNK_10d91b480);
    return;
  }
  (**(code **)(lVar11 + 0x20))(lVar10,puVar9,lVar2);
  uVar5 = uVar3 + _DAT_112f325f8;
  func_0x000107c61618();
  if (uVar5 == 0) {
    (**(code **)(lVar11 + 8))(lVar10,lVar2);
  }
  else {
    uVar6 = uVar3 + _DAT_112f32600;
    func_0x000107c61618();
    if (uVar6 == 0) {
LAB_1030033d8:
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar5);
      (**(code **)(lVar11 + 8))(lVar10,lVar2);
      return;
    }
    func_0x000107c61174();
    uVar7 = uVar3;
    func_0x000107c5efd4();
    uVar8 = uVar6;
    func_0x000107c3e4cc();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    lVar1 = _DAT_112f32610;
    if (uVar8 == 0) {
      (**(code **)(lVar11 + 8))(lVar10,lVar2);
    }
    else {
      uVar6 = uVar3 + _DAT_112f32610;
      func_0x000107c61618();
      if (uVar6 != 0) {
        uVar7 = uVar6;
        func_0x000107c61150();
        if ((uVar7 & 1) != 0) {
          func_0x000107c52a68(uVar6);
        }
        func_0x000107c615e8(uVar6);
      }
      FUN_103003464(0);
      uVar6 = uVar8;
      FUN_103005d20();
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar3 + lVar1;
        func_0x000107c61618();
        if (uVar6 == 0) {
          func_0x000107c61170(uVar3);
          uVar3 = uVar8;
        }
        else {
          uVar7 = uVar6;
          func_0x000107c61150();
          if ((uVar7 & 1) != 0) {
            func_0x000107c52a70(uVar6);
          }
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(uVar6);
          uVar3 = uVar8;
        }
        goto LAB_1030033d8;
      }
      (**(code **)(lVar11 + 8))(lVar10,lVar2);
      func_0x000107c61170(uVar3);
      uVar3 = uVar8;
    }
    func_0x000107c61170(uVar3);
    uVar3 = uVar5;
  }
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10300604c; end: 1030060df;  */

void FUN_10300604c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1030060e0; end: 103006123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030060e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  
  lVar10 = 0;
  func_0x000107c5eff8();
  uVar13 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  uVar13 = uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff);
  lVar11 = *(long *)(unaff_x20 + 0x10);
  lVar12 = *(long *)(unaff_x20 +
                    (*(long *)(*(long *)(lVar10 + -8) + 0x40) + uVar13 + 7 & 0xffffffffffffff8));
  lVar1 = unaff_x20 + uVar13;
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  uVar13 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112f32648;
  uStack_c0 = uVar13;
  func_0x0001000285a8(0x112f32648,&UNK_10db79000);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = uVar13 - extraout_x8_00;
  lVar3 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  uVar18 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = uVar18 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar20 - extraout_x12_00;
  func_0x000107c61428(lVar11 + 0x10,auStack_98,0,0);
  uVar13 = lVar11 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112f32608;
  if (uVar13 == 0) {
    return;
  }
  lStack_d0 = lVar12;
  func_0x000107c61428(uVar13 + _DAT_112f32608,auStack_b0,0,0);
  func_0x00010126b110(uVar13 + lVar3,lVar19);
  lStack_c8 = lVar1;
  (**(code **)(lVar14 + 0x10))(lVar20,lVar1,lVar2);
  (**(code **)(lVar14 + 0x38))(lVar20,0,1,lVar2);
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x00010126b110(lVar19,lVar17);
  func_0x00010126b110(lVar20,lVar17 + lVar10);
  pcVar16 = *(code **)(lVar14 + 0x30);
  lVar3 = lVar17;
  (*pcVar16)(lVar17,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000103005ff4(lVar20,0x112d54580,&UNK_10d91b480);
    func_0x000103005ff4(lVar19,0x112d54580,&UNK_10d91b480);
    lVar10 = lVar17 + lVar10;
    (*pcVar16)(lVar10,1,lVar2);
    if ((int)lVar10 != 1) {
LAB_103005174:
      func_0x000103005ff4(lVar17,0x112f32648,&UNK_10db79000);
      goto LAB_1030053f4;
    }
    func_0x000103005ff4(lVar17,0x112d54580,&UNK_10d91b480);
  }
  else {
    func_0x00010126b110(lVar17,uVar18);
    lVar3 = lVar17 + lVar10;
    (*pcVar16)(lVar3,1,lVar2);
    uVar6 = uStack_c0;
    if ((int)lVar3 == 1) {
      func_0x000103005ff4(lVar20,0x112d54580,&UNK_10d91b480);
      func_0x000103005ff4(lVar19,0x112d54580,&UNK_10d91b480);
      (**(code **)(lVar14 + 8))(uVar18,lVar2);
      goto LAB_103005174;
    }
    uVar4 = uStack_c0;
    (**(code **)(lVar14 + 0x20))(uStack_c0,lVar17 + lVar10,lVar2);
    func_0x0001020f5298();
    uVar5 = uVar18;
    func_0x000107c5fab8(uVar18,uVar6,lVar2,uVar4);
    pcVar16 = *(code **)(lVar14 + 8);
    (*pcVar16)(uVar6,lVar2);
    func_0x000103005ff4(lVar20,0x112d54580,&UNK_10d91b480);
    func_0x000103005ff4(lVar19,0x112d54580,&UNK_10d91b480);
    (*pcVar16)(uVar18,lVar2);
    func_0x000103005ff4(lVar17,0x112d54580,&UNK_10d91b480);
    if ((uVar5 & 1) == 0) goto LAB_1030053f4;
  }
  uVar18 = uVar13 + _DAT_112f325f8;
  func_0x000107c61618();
  if (uVar18 == 0) goto LAB_1030053f4;
  uVar6 = uVar13 + _DAT_112f32600;
  func_0x000107c61618();
  if (uVar6 != 0) {
    func_0x000107c61174();
    uVar4 = uVar13;
    func_0x000107c5efd4();
    uVar5 = uVar6;
    func_0x000107c3e4cc();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar4);
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c4004c();
      func_0x000107c61180();
      lVar10 = lStack_d0;
      func_0x000107c4004c();
      func_0x000107c61180();
      if (uVar6 == 0) {
        uVar6 = 0;
        if (lVar10 == 0) {
LAB_103005334:
          func_0x000107c5efd4();
          uVar4 = uVar18;
          func_0x000107c3f730();
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          if (uVar4 == 0) {
            func_0x000107c61170(uVar13);
            func_0x000107c61170(uVar18);
            uVar13 = uVar5;
            goto LAB_1030053f4;
          }
          puStack_b8 = PTR_DAT_1126a26c8;
          uVar6 = uVar4;
          func_0x000107c61494(uVar4,1,&puStack_b8);
          if (uVar6 == 0) {
            uVar7 = uVar4;
            func_0x000107c40510();
            func_0x000107c61180();
            if (uVar7 == 0) {
              func_0x000107c61170(uVar13);
              func_0x000107c61170(uVar18);
              func_0x000107c61170(uVar5);
              uVar13 = uVar4;
              goto LAB_1030053f4;
            }
            uVar15 = 0;
LAB_103005488:
            func_0x000107c438d4(uVar7);
          }
          else {
            func_0x000107c61174(uVar4);
            uVar7 = uVar6;
            func_0x000107c3e4c0(uVar6);
            func_0x000107c61180();
            uVar15 = uVar6;
            func_0x000107c61150(uVar6,PTR_s_respondsToSelector__11262c7e0,
                                PTR_s_autoPlayInsertBelowView_1125a2030);
            if ((uVar15 & 1) == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = uVar6;
              func_0x000107c3e4dc(uVar6);
              func_0x000107c61180();
            }
            uVar8 = uVar6;
            func_0x000107c61150(uVar6,PTR_s_respondsToSelector__11262c7e0,
                                PTR_s_autoPlayDesiredSize_1125a2020);
            if ((uVar8 & 1) == 0) goto LAB_103005488;
            func_0x000107c3e4d4(uVar6);
            param_3 = param_1;
            param_4 = param_2;
          }
          func_0x000107c61604(uVar13 + _DAT_112f32610,uVar6);
          lVar10 = *(long *)(uVar13 + _DAT_112f32628);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar10 == 0) {
            func_0x000107c61170(uVar13);
            func_0x000107c61170(uVar7);
            func_0x000107c61170(uVar5);
            func_0x000107c615e8(uVar6);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar18);
            uVar13 = uVar15;
            goto LAB_1030053f4;
          }
          func_0x000107c5efec();
          uVar9 = *(undefined8 *)(uVar13 + _DAT_112f32638);
          uVar21 = *(undefined8 *)(uVar13 + _DAT_112f32640);
          func_0x000107c61174(uVar9);
          uStack_c0 = uVar4;
          func_0x000107c5bb68(uVar21,param_3,param_4,lVar10);
          func_0x000107c61170(uVar13);
          func_0x000107c615e8(lVar10);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar15);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar5);
          func_0x000107c615e8(uVar6);
          uVar13 = uStack_c0;
          goto LAB_1030053ec;
        }
LAB_1030053dc:
        func_0x000107c61170();
      }
      else {
        if (lVar10 == 0) goto LAB_1030053dc;
        func_0x0001044c8618(0);
        func_0x000107c61174();
        uVar4 = uVar6;
        func_0x000107c60118();
        func_0x000107c61170(lVar10);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar6);
        if ((uVar4 & 1) != 0) goto LAB_103005334;
      }
      func_0x000107c61170(uVar13);
      uVar13 = uVar5;
    }
  }
LAB_1030053ec:
  func_0x000107c61170(uVar13);
  uVar13 = uVar18;
LAB_1030053f4:
  func_0x000107c61170(uVar13);
  return;
}



/* Entry: 103006124; end: 1030061df;  */

void FUN_103006124(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1030061e0; end: 103006237; -[_TtC44CollectionViewAutoPlayServicesImplementation41SCCollectionViewInlineOperaViewController initWithCoder:] */

void FUN_1030061e0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "CollectionViewAutoPlayServicesImplementation/CollectionViewAutoPlayManager.swift"
                      ,0x50,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103006238);
  (*pcVar1)();
}



/* Entry: 103006238; end: 103006247; -[_TtC44CollectionViewAutoPlayServicesImplementation41SCCollectionViewInlineOperaViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103006238(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f326c0);
}



/* Entry: 103006248; end: 10300639f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103006248(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  FUN_103009770();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103006394);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103006398);
    (*pcVar1)();
  }
  func_0x000107c5a378();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10300639c);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c539d4(*(undefined8 *)(unaff_x20 + _DAT_112f326c8),lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    func_0x000107c562fc(lVar2);
    func_0x000107c61170(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030063a0);
  (*pcVar1)();
}



/* Entry: 1030063a0; end: 1030063c7; -[_TtC44CollectionViewAutoPlayServicesImplementation41SCCollectionViewInlineOperaViewController viewDidLoad] */

void FUN_1030063a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103006248();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030063c8; end: 103006423; -[_TtC44CollectionViewAutoPlayServicesImplementation41SCCollectionViewInlineOperaViewController initWithNibName:bundle:] */

void FUN_1030063c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CollectionViewAutoPlayServicesImplementation.SCCollectionViewInlineOperaViewController"
                      ,0x56,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030063f4);
  (*pcVar1)();
}



/* Entry: 103006424; end: 1030064bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103006424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f32698) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f326a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f326a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f326b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f326b8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}


