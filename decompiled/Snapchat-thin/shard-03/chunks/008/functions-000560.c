/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102da0050; end: 102da27b3;  */

long FUN_102da0050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_69,undefined8 param_70)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  *(undefined8 *)(unaff_x20 + 0x70) = param_3;
  *(undefined8 *)(unaff_x20 + 0x78) = param_4;
  *(undefined8 *)(unaff_x20 + 0x80) = param_5;
  *(undefined8 *)(unaff_x20 + 0x88) = param_6;
  *(undefined8 *)(unaff_x20 + 0x90) = param_7;
  *(undefined8 *)(unaff_x20 + 0x98) = param_8;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_9;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_10;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_11;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_12;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_13;
  *(undefined8 *)(unaff_x20 + 200) = param_14;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_15;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_16;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_20;
  *(undefined8 *)(unaff_x20 + 0x100) = param_21;
  *(undefined8 *)(unaff_x20 + 0x108) = param_22;
  *(undefined8 *)(unaff_x20 + 0x110) = param_23;
  *(undefined8 *)(unaff_x20 + 0x118) = param_24;
  *(undefined8 *)(unaff_x20 + 0x120) = param_25;
  *(undefined8 *)(unaff_x20 + 0x128) = param_26;
  *(undefined8 *)(unaff_x20 + 0x130) = param_27;
  *(undefined8 *)(unaff_x20 + 0x138) = param_28;
  *(undefined8 *)(unaff_x20 + 0x140) = param_29;
  *(undefined8 *)(unaff_x20 + 0x148) = param_30;
  *(undefined8 *)(unaff_x20 + 0x150) = param_31;
  *(undefined8 *)(unaff_x20 + 0x158) = param_32;
  *(undefined8 *)(unaff_x20 + 0x160) = param_33;
  *(undefined8 *)(unaff_x20 + 0x168) = param_34;
  *(undefined8 *)(unaff_x20 + 0x170) = param_35;
  *(undefined8 *)(unaff_x20 + 0x178) = param_36;
  *(undefined8 *)(unaff_x20 + 0x180) = param_37;
  *(undefined8 *)(unaff_x20 + 0x188) = param_38;
  *(undefined8 *)(unaff_x20 + 400) = param_39;
  *(undefined8 *)(unaff_x20 + 0x198) = param_40;
  *(undefined8 *)(unaff_x20 + 0x1a0) = param_41;
  *(undefined8 *)(unaff_x20 + 0x1a8) = param_42;
  *(undefined8 *)(unaff_x20 + 0x1b0) = param_43;
  *(undefined8 *)(unaff_x20 + 0x1b8) = param_44;
  *(undefined8 *)(unaff_x20 + 0x1c0) = param_45;
  *(undefined8 *)(unaff_x20 + 0x1c8) = param_46;
  *(undefined8 *)(unaff_x20 + 0x1d0) = param_47;
  *(undefined8 *)(unaff_x20 + 0x1d8) = param_48;
  *(undefined8 *)(unaff_x20 + 0x1e0) = param_49;
  *(undefined8 *)(unaff_x20 + 0x1e8) = param_50;
  *(undefined8 *)(unaff_x20 + 0x1f0) = param_51;
  *(undefined8 *)(unaff_x20 + 0x1f8) = param_52;
  *(undefined8 *)(unaff_x20 + 0x200) = param_53;
  *(undefined8 *)(unaff_x20 + 0x208) = param_54;
  *(undefined8 *)(unaff_x20 + 0x210) = param_55;
  *(undefined8 *)(unaff_x20 + 0x218) = param_56;
  *(undefined8 *)(unaff_x20 + 0x220) = param_57;
  *(undefined8 *)(unaff_x20 + 0x228) = param_58;
  *(undefined8 *)(unaff_x20 + 0x230) = param_59;
  *(undefined8 *)(unaff_x20 + 0x238) = param_60;
  *(undefined8 *)(unaff_x20 + 0x240) = param_61;
  *(undefined8 *)(unaff_x20 + 0x248) = param_62;
  *(undefined8 *)(unaff_x20 + 0x250) = param_63;
  func_0x0001000285a8(0x112f16e80,&UNK_10db4d498);
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
  uVar1 = param_64;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  func_0x0001000285a8(0x112f16e88,&UNK_10db4d4a0);
  func_0x000107c610f8();
  uVar1 = param_65;
  func_0x000107c6157c(param_65);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar4;
  func_0x0001000285a8(0x112ec3b38,&UNK_10dae3de0);
  func_0x000107c610f8();
  uVar1 = param_66;
  func_0x000107c6157c(param_66);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar5;
  func_0x0001000285a8(0x112e4cd28,&UNK_10daaf350);
  func_0x000107c610f8();
  uVar1 = param_67;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x30) = puVar6;
  func_0x0001000285a8(0x112e49ff0,&UNK_10da41b70);
  func_0x000107c610f8();
  uVar1 = param_68;
  func_0x000107c6157c(param_68);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x38) = puVar7;
  func_0x0001000285a8(0x112e49ff8,&UNK_10db4d4b0);
  func_0x000107c610f8();
  uVar1 = param_69;
  func_0x000107c6157c(param_69);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x40) = puVar8;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = param_70;
  func_0x000107c6157c(param_70);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x48) = puVar9;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar1 = in_stack_000001f0;
  func_0x000107c6157c(in_stack_000001f0);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x50) = puVar12;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  uVar1 = in_stack_000001f8;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x58) = puVar10;
  func_0x0001000285a8(0x112ecfc38,&UNK_10daf63b0);
  func_0x000107c610f8();
  uVar1 = in_stack_00000200;
  func_0x000107c6157c(in_stack_00000200);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x60) = puVar11;
  puVar2 = PTR_PTR_1126ac4c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  uVar1 = uVar14;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef325d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00ad10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar14;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef32630);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2d6e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f10d2c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f10d2f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f063e20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef1ac90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c970);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f10d320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_26);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10d350);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_27);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef32650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_28);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_29);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_30);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f10d380);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_31);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0b02c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_32);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_33);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef20500);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_34);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a4b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_35);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef1e070);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_36);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_37);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef32670);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2d2e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_39);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_40);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_41);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10d3a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_42);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_43);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f051710);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_44);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f052200);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_45);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar14;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2dcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_46);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4520);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_47);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_48);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_49);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar14;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f10d3c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_51);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_52);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_53);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_54);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_55);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f10d3e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_56);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef226b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_57);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effecb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_58);
  func_0x000107c61170(uVar1);
  func_0x000107c61174(param_59);
  func_0x000107c61174();
  uVar1 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_59);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2e260);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_61);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f10d410);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_62);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10d430);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_63);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f10d460);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1ace0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10d490);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef327b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f03f0f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f03f120);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef32810);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f075b90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  puVar12 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
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
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_57);
  func_0x000107c61170(param_58);
  func_0x000107c61170(param_59);
  func_0x000107c61170(param_60);
  func_0x000107c61170(param_61);
  func_0x000107c61170(param_62);
  func_0x000107c61170(param_63);
  func_0x000107c61574(param_64);
  func_0x000107c61574(param_65);
  func_0x000107c61574(param_66);
  func_0x000107c61574(param_67);
  func_0x000107c61574(param_68);
  func_0x000107c61574(param_69);
  func_0x000107c61574(param_70);
  func_0x000107c61574(in_stack_000001f0);
  func_0x000107c61574(in_stack_000001f8);
  func_0x000107c61574(in_stack_00000200);
  *(undefined **)(unaff_x20 + 600) = puVar12;
  return unaff_x20;
}



/* Entry: 102da27b4; end: 102da2a37;  */

void FUN_102da27b4(void)

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
  return;
}



/* Entry: 102da2a38; end: 102da2a8b;  */

void FUN_102da2a38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 600);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102da2a8c; end: 102da2a93;  */

void FUN_102da2a8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 600);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102da2a94; end: 102da2ae3;  */

undefined8 FUN_102da2a94(void)

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



/* Entry: 102da2ae4; end: 102da2b27;  */

undefined1  [16] FUN_102da2ae4(void)

{
  return ZEXT816(0x1105cfb18);
}



/* Entry: 102da2b28; end: 102da2b4f;  */

void FUN_102da2b28(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102da2b50; end: 102da2b57;  */

undefined8 FUN_102da2b50(void)

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



/* Entry: 102da2b58; end: 102da3ca3;  */

void FUN_102da2b58(long *param_1,long param_2)

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
  undefined *puVar11;
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
  func_0x00010035002c();
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
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  *(undefined8 *)(param_2 + 0xe0) = uStack_128;
  *(undefined8 *)(param_2 + 0xe8) = uStack_130;
  func_0x0001000285a8(0x112e84d98,&UNK_10da956b0);
  func_0x000107c610f8();
  uVar14 = uStack_78;
  func_0x000107c61174();
  uVar15 = uStack_80;
  func_0x000107c61174();
  uVar1 = uStack_88;
  func_0x000107c61174();
  uVar2 = uStack_90;
  func_0x000107c61174();
  uVar3 = uStack_98;
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
  uVar16 = uStack_d8;
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
  func_0x000107c615f0(uStack_120);
  uVar25 = uStack_128;
  func_0x000107c61174();
  uVar26 = uStack_130;
  func_0x000107c61174();
  uVar13 = uStack_138;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x18) = puVar11;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar13 = uStack_140;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x20) = puVar11;
  func_0x0001000285a8(0x112e84db8,&UNK_10da956e0);
  func_0x000107c610f8();
  uVar13 = uStack_148;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x28) = puVar11;
  puVar11 = PTR_PTR_1126ac4c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01aaa0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f089210);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0891b0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar13 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar13);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa60);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar13);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0891d0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar23);
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00dcf0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar13);
  func_0x000107c615f0(uStack_120);
  func_0x000107c61174();
  uVar13 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0890b0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c615e8(uStack_120);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0890f0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar13);
  uVar27 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar13 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0893d0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar27);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef35a40);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar27);
  func_0x000107c61174();
  uVar13 = uVar28;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
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
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c615e8(uStack_120);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61574(uStack_138);
  func_0x000107c61574(uStack_140);
  func_0x000107c61574(uStack_148);
  *(undefined8 *)(param_2 + 0xf0) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 102da3ca4; end: 102da3cff;  */

void FUN_102da3ca4(void)

{
  long unaff_x20;
  
  FUN_102da2b58(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
  return;
}



/* Entry: 102da3d00; end: 102da4c03;  */

void FUN_102da3d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  *(undefined8 *)(unaff_x20 + 0x60) = param_8;
  *(undefined8 *)(unaff_x20 + 0x68) = param_9;
  *(undefined8 *)(unaff_x20 + 0x70) = param_10;
  *(undefined8 *)(unaff_x20 + 0x78) = param_11;
  *(undefined8 *)(unaff_x20 + 0x80) = param_12;
  *(undefined8 *)(unaff_x20 + 0x88) = param_13;
  *(undefined8 *)(unaff_x20 + 0x90) = param_14;
  *(undefined8 *)(unaff_x20 + 0x98) = param_15;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_16;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_17;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_18;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_19;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_20;
  *(undefined8 *)(unaff_x20 + 200) = param_21;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_22;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_23;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_24;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_25;
  func_0x0001000285a8(0x112e84d98,&UNK_10da956b0);
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
  func_0x000107c61174(param_20);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = param_26;
  func_0x000107c6157c(param_26);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar4 = param_27;
  func_0x000107c6157c(param_27);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  func_0x0001000285a8(0x112e84db8,&UNK_10da956e0);
  func_0x000107c610f8();
  uVar4 = param_28;
  func_0x000107c6157c(param_28);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  puVar5 = PTR_PTR_1126ac4c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01aaa0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f089210);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0891b0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa60);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_19);
  func_0x000107c61174();
  uVar4 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_20);
  func_0x000107c61174();
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0891d0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00dcf0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar4);
  func_0x000107c615f0(param_23);
  func_0x000107c61174();
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0890b0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(param_23);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_24);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_25);
  func_0x000107c61174();
  uVar4 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0890f0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar4 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0893d0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef35a40);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  puVar1 = puVar5;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
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
  func_0x000107c615e8(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61574(param_26);
  func_0x000107c61574(param_27);
  func_0x000107c61574(param_28);
  *(undefined **)(unaff_x20 + 0xf0) = puVar1;
  return;
}



/* Entry: 102da4c04; end: 102da4d1f;  */

void FUN_102da4c04(void)

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
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  return;
}



/* Entry: 102da4d20; end: 102da4d73;  */

void FUN_102da4d20(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xf0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102da4d74; end: 102da4d7b;  */

void FUN_102da4d74(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xf0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102da4d7c; end: 102da4dcb;  */

undefined8 FUN_102da4d7c(void)

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



/* Entry: 102da4dcc; end: 102da4e0f;  */

undefined1  [16] FUN_102da4dcc(void)

{
  return ZEXT816(0x1105cfbe0);
}



/* Entry: 102da4e10; end: 102da4e37;  */

void FUN_102da4e10(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102da4e38; end: 102da4e3f;  */

undefined8 FUN_102da4e38(void)

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



/* Entry: 102da4e40; end: 102da4ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da4e40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f17360) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102da4ed8; end: 102da4f2f; -[SCProfileFlatlandBitmojiConfigProviderAdapter initWithBitmojiFlatlandConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da4ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f17360) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102da4f30; end: 102da5007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102da4f30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112f17360);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    puVar2 = puVar1;
    func_0x000107c41564(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar3 = puVar2;
    func_0x000107c2bd00(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(puVar1);
  }
  return puVar3;
}



/* Entry: 102da5008; end: 102da5013; -[SCProfileFlatlandBitmojiConfigProviderAdapter getDefaultBitmojiBackgroundIdObservableWithUserId:] */

void FUN_102da5008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102da4f30(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102da5014; end: 102da50eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102da5014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112f17360);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    puVar2 = puVar1;
    func_0x000107c41608(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar3 = puVar2;
    func_0x000107c2bd00(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(puVar1);
  }
  return puVar3;
}



/* Entry: 102da50ec; end: 102da50f7; -[SCProfileFlatlandBitmojiConfigProviderAdapter getDefaultBitmojiSceneIdObservableWithUserId:] */

void FUN_102da50ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102da5014(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102da50f8; end: 102da515f;  */

void FUN_102da50f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102da5160; end: 102da5193;  */

void FUN_102da5160(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102da5194; end: 102da51a3; -[SCProfileFlatlandBitmojiConfigProviderAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da5194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f17360));
  return;
}



/* Entry: 102da51a4; end: 102da51c3;  */

void FUN_102da51a4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a60a0);
  return;
}



/* Entry: 102da51c4; end: 102da540f;  */

long FUN_102da51c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_10db4db20;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xffffffffffffffff;
  *(undefined1 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined2 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined4 *)(unaff_x20 + 0xdf) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined4 *)(unaff_x20 + 0xef) = 0;
  uVar2 = param_1;
  func_0x000107c4d80c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  uVar2 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return unaff_x20;
}



/* Entry: 102da5410; end: 102da54ef;  */

void FUN_102da5410(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined3 uStack_38;
  undefined5 uStack_35;
  undefined3 uStack_30;
  undefined8 uStack_2d;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_102f25abc();
    func_0x000107c61170(lVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  func_0x000107c61170(uVar2);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 200);
  uStack_38 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
  uStack_2d = *(undefined8 *)(unaff_x20 + 0xdb);
  uStack_35 = (undefined5)*(undefined8 *)(unaff_x20 + 0xd3);
  uStack_30 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xdb) = 0;
  *(undefined8 *)(unaff_x20 + 0xd3) = 0;
  FUN_102da8eb8(&uStack_70);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x000107c61170(uVar2);
  *(undefined8 *)(unaff_x20 + 0x68) = 0xffffffffffffffff;
  *(undefined1 *)(unaff_x20 + 0x70) = 0;
  *(undefined2 *)(unaff_x20 + 0xf0) = 0;
  *(undefined1 *)(unaff_x20 + 0xf2) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(unaff_x20 + 0x88) = 0;
  return;
}



/* Entry: 102da54f0; end: 102da56d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102da54f0(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112f9cac0;
  lVar6 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar6 + _DAT_112f9cac0,auStack_58,0,0);
  puVar3 = (ulong *)(lVar6 + lVar2);
  func_0x000107c61618();
  if (puVar3 == (ulong *)0x0) {
    uVar8 = 0;
  }
  else {
    func_0x000107c615e8();
    func_0x000103f1dce8();
    uVar4 = *puVar3;
    uVar7 = *(ulong *)(unaff_x20 + 0x38);
    uVar5 = *(undefined8 *)(uVar4 + _DAT_11302e940);
    uVar1 = ((undefined8 *)(uVar4 + _DAT_11302e940))[1];
    func_0x000107c61174();
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c3ebd8();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar7 == 0) {
      uVar8 = (ulong)*(byte *)(uVar4 + _DAT_11302e950);
    }
    else {
      uVar8 = uVar7;
      func_0x000107c3ebcc(uVar7);
      func_0x000107c61170(uVar4);
      uVar4 = uVar7;
    }
    func_0x000107c61170(uVar4);
  }
  return uVar8;
}



/* Entry: 102da56d4; end: 102da5c3f;  */

void FUN_102da56d4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_200 [80];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined3 uStack_178;
  undefined5 uStack_175;
  undefined3 uStack_170;
  undefined8 uStack_16d;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined3 uStack_128;
  undefined5 uStack_125;
  undefined3 uStack_120;
  undefined4 uStack_11d;
  undefined4 uStack_119;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined3 uStack_d8;
  undefined5 uStack_d5;
  undefined3 uStack_d0;
  undefined4 uStack_cd;
  undefined4 uStack_c9;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  
  FUN_102da8a48();
  if (*(long *)(unaff_x20 + 0x48) == 0) {
    puVar9 = param_1;
    FUN_102da9444();
    puStack_c0 = puVar9;
    puStack_b8 = (undefined *)param_2;
    func_0x000107c61434(param_2);
    func_0x000107c5fb78(0x2e2e2e,0xe300000000000000);
    func_0x000107c6142c(param_2);
    puVar7 = puStack_b8;
    puVar3 = puStack_c0;
    puVar9 = PTR___sSiN_11034deb0;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puStack_110 = param_1;
    func_0x000107c6057c();
    puStack_c0 = puVar9;
    puStack_b8 = puVar6;
    func_0x000107c5fb78(0x25,0xe100000000000000);
    puVar1 = puStack_b8;
    puVar6 = puStack_c0;
    puStack_160 = puVar3;
    puStack_158 = puVar7;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    puStack_138 = puStack_c0;
    puStack_130 = puStack_b8;
    uStack_128 = 0;
    uStack_125 = 0;
    uStack_120 = 0;
    uStack_11d = 0;
    uStack_119 = 0;
    uStack_7d = 0;
    uStack_80 = 0;
    puStack_98 = puStack_c0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_85 = 0;
    puStack_90 = puStack_b8;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_108 = *(undefined8 *)(unaff_x20 + 0xa0);
    puStack_110 = *(undefined **)(unaff_x20 + 0x98);
    puStack_e8 = *(undefined **)(unaff_x20 + 0xc0);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_cd = (undefined4)*(undefined8 *)(unaff_x20 + 0xdb);
    uStack_c9 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xdb) >> 0x20);
    uStack_d0 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
    puStack_e0 = *(undefined **)(unaff_x20 + 200);
    uStack_d8 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
    uStack_d5 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xd0) >> 0x18);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0xa8);
    *(undefined **)(unaff_x20 + 0xa0) = puVar7;
    *(undefined **)(unaff_x20 + 0x98) = puVar3;
    *(undefined8 *)(unaff_x20 + 0xdb) = 0;
    *(undefined8 *)(unaff_x20 + 0xd3) = 0;
    *(undefined8 *)(unaff_x20 + 0xd0) = 0;
    *(undefined **)(unaff_x20 + 200) = puStack_b8;
    *(undefined **)(unaff_x20 + 0xc0) = puStack_c0;
    *(undefined8 *)(unaff_x20 + 0xb8) = 0;
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    *(undefined8 *)(unaff_x20 + 0xa8) = 0;
    puStack_c0 = puVar3;
    puStack_b8 = puVar7;
    func_0x000102da8eb8(&puStack_110);
    uVar10 = 0;
    puVar9 = (undefined *)0x0;
    if (*(char *)(unaff_x20 + 0x88) == '\x01') {
      uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
      puVar2 = &UNK_1105cfe60;
      func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
      func_0x000107c61644(puVar2 + 0x10);
      puVar9 = &UNK_1105d0338;
      func_0x000107c613fc(&UNK_1105d0338,0x28,7);
      *(undefined **)(puVar9 + 0x10) = puVar2;
      *(undefined8 *)(puVar9 + 0x18) = uVar10;
      *(undefined8 *)(puVar9 + 0x20) = uVar4;
      func_0x000107c61434(uVar4);
      uVar10 = 0x102da91a0;
    }
    if (*(long *)(unaff_x20 + 0xe8) == 0) {
      lVar8 = *(long *)(unaff_x20 + 0x18);
      func_0x000102da8f00(&puStack_160,&puStack_1b0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
        FUN_102f2821c(0);
        func_0x000107c610f8();
        func_0x000107c61434(uVar11);
        func_0x000107c61434(puVar7);
        func_0x000107c615f0(lVar8);
        func_0x000102f260d8(0,puVar3,puVar7,lVar8);
        func_0x000102f26318(0,0);
        func_0x000107c61170();
        func_0x000102f26300(puVar6,puVar1);
        func_0x000107c61170();
        uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
        uVar4 = uVar12;
        func_0x000107c61174(uVar12);
        FUN_102f2676c(uVar12);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar12);
        FUN_102f26824(0x4022000000000000);
        func_0x000107c61170();
        FUN_102f26adc(0);
        func_0x000107c61170();
        func_0x000102f26b24(0x40ac200000000000);
        func_0x000107c61170();
        func_0x000102f26b00(1);
        func_0x000107c61170();
        uVar4 = uVar10;
        func_0x000102f269dc(uVar10,puVar9);
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(uVar4);
        lVar5 = 0;
        FUN_102da8b28();
        func_0x000107c613fc();
        func_0x000107c61614(lVar5 + 0x10,0);
        puVar6 = &UNK_1105cfe60;
        func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
        func_0x000107c61644(puVar6 + 0x10);
        puVar7 = &UNK_1105d0310;
        func_0x000107c613fc(&UNK_1105d0310,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(long *)(puVar7 + 0x18) = lVar5;
        func_0x000107c6157c(puVar6);
        func_0x000107c6157c(lVar5);
        uVar4 = 0x102da918c;
        FUN_102f268dc(0x102da918c,puVar7);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar7);
        func_0x000107c61170();
        func_0x000102f26dc0();
        func_0x000107c61604(lVar5 + 0x10,uVar4);
        uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
        *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
        func_0x000107c61170(uVar12);
        lVar13 = *(long *)(unaff_x20 + 0x10);
        func_0x000107c61174(uVar4);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar13 != 0) {
          func_0x000107c5c2e0();
          func_0x000107c615e8(lVar13);
        }
        func_0x000107c615e8(lVar8);
        func_0x000107c61574(lVar5);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar3);
      }
    }
    else {
      func_0x000102da8f00(&puStack_160,&puStack_1b0);
      FUN_102da7640(0x40ac200000000000,&puStack_c0,0,0,uVar10,puVar9);
    }
    func_0x000102da8f34(&puStack_160);
    func_0x00010058d43c(uVar10,puVar9);
    *(undefined **)(unaff_x20 + 0x68) = param_1;
  }
  else if (param_1 != *(undefined **)(unaff_x20 + 0x68)) {
    *(undefined **)(unaff_x20 + 0x68) = param_1;
    puStack_b8 = *(undefined **)(unaff_x20 + 0xa0);
    puStack_c0 = *(undefined **)(unaff_x20 + 0x98);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0xa8);
    puStack_98 = *(undefined **)(unaff_x20 + 0xc0);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar10 = *(undefined8 *)(unaff_x20 + 200);
    uStack_88 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
    uStack_7d = *(undefined8 *)(unaff_x20 + 0xdb);
    uStack_85 = (undefined5)*(undefined8 *)(unaff_x20 + 0xd3);
    uStack_80 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
    if (puStack_b8 != (undefined *)0x0) {
      uStack_108 = *(undefined8 *)(unaff_x20 + 0xa0);
      puStack_110 = *(undefined **)(unaff_x20 + 0x98);
      uStack_f8 = *(undefined8 *)(unaff_x20 + 0xb0);
      uStack_100 = *(undefined8 *)(unaff_x20 + 0xa8);
      puStack_e8 = *(undefined **)(unaff_x20 + 0xc0);
      uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb8);
      uStack_d0 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd8);
      uStack_cd = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xd8) >> 0x18);
      uStack_d8 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
      uStack_d5 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xd0) >> 0x18);
      uStack_c9 = *(undefined4 *)(unaff_x20 + 0xdf);
      puStack_1b0 = param_1;
      puStack_e0 = (undefined *)uVar10;
      puStack_90 = (undefined *)uVar10;
      FUN_102da9008(&puStack_c0,&puStack_160);
      puVar9 = PTR___sSiN_11034deb0;
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c();
      puStack_160 = puVar9;
      puStack_158 = puVar3;
      func_0x000107c5fb78(0x25,0xe100000000000000);
      func_0x000107c6142c(uVar10);
      puStack_e8 = puStack_160;
      puStack_e0 = puStack_158;
      uStack_16d = CONCAT44(uStack_c9,uStack_cd);
      uStack_170 = uStack_d0;
      uStack_1a8 = uStack_108;
      puStack_1b0 = puStack_110;
      uStack_198 = uStack_f8;
      uStack_1a0 = uStack_100;
      puStack_188 = puStack_160;
      uStack_190 = uStack_f0;
      uStack_178 = uStack_d8;
      uStack_175 = uStack_d5;
      puStack_180 = puStack_158;
      uVar10 = *(undefined8 *)(unaff_x20 + 0xa0);
      puVar9 = *(undefined **)(unaff_x20 + 0x98);
      puStack_138 = *(undefined **)(unaff_x20 + 0xc0);
      uStack_140 = *(undefined8 *)(unaff_x20 + 0xb8);
      uStack_11d = (undefined4)*(undefined8 *)(unaff_x20 + 0xdb);
      uStack_119 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xdb) >> 0x20);
      uStack_120 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
      puStack_130 = *(undefined **)(unaff_x20 + 200);
      uStack_128 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
      uStack_125 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xd0) >> 0x18);
      uStack_148 = *(undefined8 *)(unaff_x20 + 0xb0);
      uStack_150 = *(undefined8 *)(unaff_x20 + 0xa8);
      *(undefined8 *)(unaff_x20 + 0xa0) = uStack_108;
      *(undefined **)(unaff_x20 + 0x98) = puStack_110;
      *(ulong *)(unaff_x20 + 0xdb) = CONCAT44(uStack_c9,uStack_cd);
      *(ulong *)(unaff_x20 + 0xd3) = CONCAT35(uStack_d0,uStack_d5);
      *(ulong *)(unaff_x20 + 0xd0) = CONCAT53(uStack_d5,uStack_d8);
      *(undefined **)(unaff_x20 + 200) = puStack_158;
      *(undefined **)(unaff_x20 + 0xc0) = puStack_160;
      *(undefined8 *)(unaff_x20 + 0xb8) = uStack_f0;
      *(undefined8 *)(unaff_x20 + 0xb0) = uStack_f8;
      *(undefined8 *)(unaff_x20 + 0xa8) = uStack_100;
      puStack_160 = puVar9;
      puStack_158 = (undefined *)uVar10;
      func_0x000102da8f00(&puStack_1b0,auStack_200);
      func_0x000102da8eb8(&puStack_160);
      FUN_102da5ea8();
      func_0x000102da8f34(&puStack_110);
    }
  }
  return;
}



/* Entry: 102da5c40; end: 102da5ea7;  */

void FUN_102da5c40(ulong param_1,ulong param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auStack_200 [80];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined3 uStack_178;
  undefined5 uStack_175;
  undefined3 uStack_170;
  undefined8 uStack_16d;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined3 uStack_128;
  undefined5 uStack_125;
  undefined3 uStack_120;
  undefined4 uStack_11d;
  undefined4 uStack_119;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined3 uStack_d8;
  undefined5 uStack_d5;
  undefined3 uStack_d0;
  undefined4 uStack_cd;
  undefined4 uStack_c9;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  
  uVar10 = *(ulong *)(unaff_x20 + 0x58);
  if (uVar10 != 0) {
    uVar9 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar9 = param_2 >> 0x38 & 0xf;
    }
    if (uVar9 != 0) {
      uVar14 = *(ulong *)(unaff_x20 + 0x50);
      uVar9 = param_2;
      if ((uVar14 != param_1 || uVar10 != param_2) &&
         (uVar8 = uVar14, uVar9 = uVar10, func_0x000107c605b8(uVar14,uVar10,param_1,param_2,0),
         (uVar8 & 1) == 0)) {
        func_0x000107c61434(uVar10);
        func_0x000107c5fb78(param_1,param_2);
        uVar8 = 0;
        uVar9 = 0xe100000000000000;
        func_0x000107c5fbb8(0x7e,0xe100000000000000,uVar14,uVar10);
        func_0x000107c6142c(uVar10);
        func_0x000107c6142c(0xe100000000000000);
        if ((uVar8 & 1) == 0) {
          return;
        }
      }
      *(undefined1 *)(unaff_x20 + 0xf0) = 1;
      if (((*(byte *)(unaff_x20 + 0x70) & 1) == 0) && ((*(byte *)(unaff_x20 + 0xf1) & 1) == 0)) {
        FUN_102da8a48();
        if (*(long *)(unaff_x20 + 0x48) == 0) {
          puVar12 = param_3;
          FUN_102da9444();
          puStack_c0 = puVar12;
          puStack_b8 = (undefined *)uVar9;
          func_0x000107c61434(uVar9);
          func_0x000107c5fb78(0x2e2e2e,0xe300000000000000);
          func_0x000107c6142c(uVar9);
          puVar7 = puStack_b8;
          puVar3 = puStack_c0;
          puVar12 = PTR___sSiN_11034deb0;
          puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puStack_110 = param_3;
          func_0x000107c6057c();
          puStack_c0 = puVar12;
          puStack_b8 = puVar6;
          func_0x000107c5fb78(0x25,0xe100000000000000);
          puVar1 = puStack_b8;
          puVar6 = puStack_c0;
          puStack_160 = puVar3;
          puStack_158 = puVar7;
          uStack_150 = 0;
          uStack_148 = 0;
          uStack_140 = 0;
          puStack_138 = puStack_c0;
          puStack_130 = puStack_b8;
          uStack_128 = 0;
          uStack_125 = 0;
          uStack_120 = 0;
          uStack_11d = 0;
          uStack_119 = 0;
          uStack_7d = 0;
          uStack_80 = 0;
          puStack_98 = puStack_c0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_85 = 0;
          puStack_90 = puStack_b8;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_108 = *(undefined8 *)(unaff_x20 + 0xa0);
          puStack_110 = *(undefined **)(unaff_x20 + 0x98);
          puStack_e8 = *(undefined **)(unaff_x20 + 0xc0);
          uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb8);
          uStack_cd = (undefined4)*(undefined8 *)(unaff_x20 + 0xdb);
          uStack_c9 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xdb) >> 0x20);
          uStack_d0 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
          puStack_e0 = *(undefined **)(unaff_x20 + 200);
          uStack_d8 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
          uStack_d5 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xd0) >> 0x18);
          uStack_f8 = *(undefined8 *)(unaff_x20 + 0xb0);
          uStack_100 = *(undefined8 *)(unaff_x20 + 0xa8);
          *(undefined **)(unaff_x20 + 0xa0) = puVar7;
          *(undefined **)(unaff_x20 + 0x98) = puVar3;
          *(undefined8 *)(unaff_x20 + 0xdb) = 0;
          *(undefined8 *)(unaff_x20 + 0xd3) = 0;
          *(undefined8 *)(unaff_x20 + 0xd0) = 0;
          *(undefined **)(unaff_x20 + 200) = puStack_b8;
          *(undefined **)(unaff_x20 + 0xc0) = puStack_c0;
          *(undefined8 *)(unaff_x20 + 0xb8) = 0;
          *(undefined8 *)(unaff_x20 + 0xb0) = 0;
          *(undefined8 *)(unaff_x20 + 0xa8) = 0;
          puStack_c0 = puVar3;
          puStack_b8 = puVar7;
          func_0x000102da8eb8(&puStack_110);
          uVar13 = 0;
          puVar12 = (undefined *)0x0;
          if (*(char *)(unaff_x20 + 0x88) == '\x01') {
            uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
            uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
            puVar2 = &UNK_1105cfe60;
            func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
            func_0x000107c61644(puVar2 + 0x10,unaff_x20);
            puVar12 = &UNK_1105d0338;
            func_0x000107c613fc(&UNK_1105d0338,0x28,7);
            *(undefined **)(puVar12 + 0x10) = puVar2;
            *(undefined8 *)(puVar12 + 0x18) = uVar13;
            *(undefined8 *)(puVar12 + 0x20) = uVar4;
            func_0x000107c61434(uVar4);
            uVar13 = 0x102da91a0;
          }
          if (*(long *)(unaff_x20 + 0xe8) == 0) {
            lVar11 = *(long *)(unaff_x20 + 0x18);
            func_0x000102da8f00(&puStack_160,&puStack_1b0);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar11 != 0) {
              uVar15 = *(undefined8 *)(unaff_x20 + 0x58);
              FUN_102f2821c(0);
              func_0x000107c610f8();
              func_0x000107c61434(uVar15);
              func_0x000107c61434(puVar7);
              func_0x000107c615f0(lVar11);
              func_0x000102f260d8(0,puVar3,puVar7,lVar11);
              func_0x000102f26318(0,0);
              func_0x000107c61170();
              func_0x000102f26300(puVar6,puVar1);
              func_0x000107c61170();
              uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
              uVar4 = uVar16;
              func_0x000107c61174(uVar16);
              FUN_102f2676c(uVar16);
              func_0x000107c61170(uVar4);
              func_0x000107c61170(uVar16);
              FUN_102f26824(0x4022000000000000);
              func_0x000107c61170();
              FUN_102f26adc(0);
              func_0x000107c61170();
              func_0x000102f26b24(0x40ac200000000000);
              func_0x000107c61170();
              func_0x000102f26b00(1);
              func_0x000107c61170();
              uVar4 = uVar13;
              func_0x000102f269dc(uVar13,puVar12);
              func_0x000107c6142c(uVar15);
              func_0x000107c61170(uVar4);
              lVar5 = 0;
              FUN_102da8b28();
              func_0x000107c613fc();
              func_0x000107c61614(lVar5 + 0x10,0);
              puVar6 = &UNK_1105cfe60;
              func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
              func_0x000107c61644(puVar6 + 0x10,unaff_x20);
              puVar7 = &UNK_1105d0310;
              func_0x000107c613fc(&UNK_1105d0310,0x20,7);
              *(undefined **)(puVar7 + 0x10) = puVar6;
              *(long *)(puVar7 + 0x18) = lVar5;
              func_0x000107c6157c(puVar6);
              func_0x000107c6157c(lVar5);
              uVar4 = 0x102da918c;
              FUN_102f268dc(0x102da918c,puVar7);
              func_0x000107c61574(puVar6);
              func_0x000107c61574(puVar7);
              func_0x000107c61170();
              func_0x000102f26dc0();
              func_0x000107c61604(lVar5 + 0x10,uVar4);
              uVar16 = *(undefined8 *)(unaff_x20 + 0x48);
              *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
              func_0x000107c61170(uVar16);
              lVar17 = *(long *)(unaff_x20 + 0x10);
              func_0x000107c61174(uVar4);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar17 != 0) {
                func_0x000107c5c2e0();
                func_0x000107c615e8(lVar17);
              }
              func_0x000107c615e8(lVar11);
              func_0x000107c61574(lVar5);
              func_0x000107c61170(uVar4);
              func_0x000107c61170(puVar3);
            }
          }
          else {
            func_0x000102da8f00(&puStack_160,&puStack_1b0);
            FUN_102da7640(0x40ac200000000000,&puStack_c0,0,0,uVar13,puVar12);
          }
          func_0x000102da8f34(&puStack_160);
          func_0x00010058d43c(uVar13,puVar12);
          *(undefined **)(unaff_x20 + 0x68) = param_3;
        }
        else if (param_3 != *(undefined **)(unaff_x20 + 0x68)) {
          *(undefined **)(unaff_x20 + 0x68) = param_3;
          puStack_b8 = *(undefined **)(unaff_x20 + 0xa0);
          puStack_c0 = *(undefined **)(unaff_x20 + 0x98);
          uStack_a8 = *(undefined8 *)(unaff_x20 + 0xb0);
          uStack_b0 = *(undefined8 *)(unaff_x20 + 0xa8);
          puStack_98 = *(undefined **)(unaff_x20 + 0xc0);
          uStack_a0 = *(undefined8 *)(unaff_x20 + 0xb8);
          uVar13 = *(undefined8 *)(unaff_x20 + 200);
          uStack_88 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
          uStack_7d = *(undefined8 *)(unaff_x20 + 0xdb);
          uStack_85 = (undefined5)*(undefined8 *)(unaff_x20 + 0xd3);
          uStack_80 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
          if (puStack_b8 != (undefined *)0x0) {
            uStack_108 = *(undefined8 *)(unaff_x20 + 0xa0);
            puStack_110 = *(undefined **)(unaff_x20 + 0x98);
            uStack_f8 = *(undefined8 *)(unaff_x20 + 0xb0);
            uStack_100 = *(undefined8 *)(unaff_x20 + 0xa8);
            puStack_e8 = *(undefined **)(unaff_x20 + 0xc0);
            uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb8);
            uStack_d0 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd8);
            uStack_cd = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xd8) >> 0x18);
            uStack_d8 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
            uStack_d5 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xd0) >> 0x18);
            uStack_c9 = *(undefined4 *)(unaff_x20 + 0xdf);
            puStack_1b0 = param_3;
            puStack_e0 = (undefined *)uVar13;
            puStack_90 = (undefined *)uVar13;
            FUN_102da9008(&puStack_c0,&puStack_160);
            puVar12 = PTR___sSiN_11034deb0;
            puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            func_0x000107c6057c();
            puStack_160 = puVar12;
            puStack_158 = puVar3;
            func_0x000107c5fb78(0x25,0xe100000000000000);
            func_0x000107c6142c(uVar13);
            puStack_e8 = puStack_160;
            puStack_e0 = puStack_158;
            uStack_16d = CONCAT44(uStack_c9,uStack_cd);
            uStack_170 = uStack_d0;
            uStack_1a8 = uStack_108;
            puStack_1b0 = puStack_110;
            uStack_198 = uStack_f8;
            uStack_1a0 = uStack_100;
            puStack_188 = puStack_160;
            uStack_190 = uStack_f0;
            uStack_178 = uStack_d8;
            uStack_175 = uStack_d5;
            puStack_180 = puStack_158;
            uVar13 = *(undefined8 *)(unaff_x20 + 0xa0);
            puVar12 = *(undefined **)(unaff_x20 + 0x98);
            puStack_138 = *(undefined **)(unaff_x20 + 0xc0);
            uStack_140 = *(undefined8 *)(unaff_x20 + 0xb8);
            uStack_11d = (undefined4)*(undefined8 *)(unaff_x20 + 0xdb);
            uStack_119 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xdb) >> 0x20);
            uStack_120 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
            puStack_130 = *(undefined **)(unaff_x20 + 200);
            uStack_128 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
            uStack_125 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xd0) >> 0x18);
            uStack_148 = *(undefined8 *)(unaff_x20 + 0xb0);
            uStack_150 = *(undefined8 *)(unaff_x20 + 0xa8);
            *(undefined8 *)(unaff_x20 + 0xa0) = uStack_108;
            *(undefined **)(unaff_x20 + 0x98) = puStack_110;
            *(ulong *)(unaff_x20 + 0xdb) = CONCAT44(uStack_c9,uStack_cd);
            *(ulong *)(unaff_x20 + 0xd3) = CONCAT35(uStack_d0,uStack_d5);
            *(ulong *)(unaff_x20 + 0xd0) = CONCAT53(uStack_d5,uStack_d8);
            *(undefined **)(unaff_x20 + 200) = puStack_158;
            *(undefined **)(unaff_x20 + 0xc0) = puStack_160;
            *(undefined8 *)(unaff_x20 + 0xb8) = uStack_f0;
            *(undefined8 *)(unaff_x20 + 0xb0) = uStack_f8;
            *(undefined8 *)(unaff_x20 + 0xa8) = uStack_100;
            puStack_160 = puVar12;
            puStack_158 = (undefined *)uVar13;
            func_0x000102da8f00(&puStack_1b0,auStack_200);
            func_0x000102da8eb8(&puStack_160);
            FUN_102da5ea8();
            func_0x000102da8f34(&puStack_110);
          }
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 102da5ea8; end: 102da631f;  */

void FUN_102da5ea8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_160 [80];
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  
  lVar10 = *(long *)(unaff_x20 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0xb8);
  lVar13 = *(long *)(unaff_x20 + 200);
  uStack_88 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
  uVar12 = *(ulong *)(unaff_x20 + 0xdb);
  uStack_85 = (undefined5)*(undefined8 *)(unaff_x20 + 0xd3);
  uStack_80 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0xa8);
  if (lVar10 != 0) {
    uStack_7d._6_1_ = (undefined1)(uVar12 >> 0x30);
    uStack_7d._7_1_ = (undefined1)(uVar12 >> 0x38);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0xd8);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_c8 = *(undefined1 *)(unaff_x20 + 0xe0);
    uStack_c7 = uStack_7d._6_1_;
    uStack_c6 = uStack_7d._7_1_;
    lVar6 = *(long *)(unaff_x20 + 0x90);
    uStack_110 = uVar9;
    lStack_108 = lVar10;
    uStack_e8 = uVar11;
    lStack_e0 = lVar13;
    uStack_c0 = uVar9;
    lStack_b8 = lVar10;
    uStack_98 = uVar11;
    lStack_90 = lVar13;
    uStack_7d = uVar12;
    if (lVar6 == 0) {
      lVar6 = *(long *)(unaff_x20 + 0x48);
      if (lVar6 != 0) {
        if ((uVar12 & 0x1000000000000) == 0) {
          FUN_102da9008(&uStack_c0,auStack_160);
          func_0x000107c61174(lVar6);
          lVar4 = lVar10;
          lVar7 = 0;
          uVar8 = 0;
        }
        else {
          FUN_102da9008(&uStack_c0,auStack_160);
          lVar2 = lRam0000000112f17578;
          func_0x000107c61174(lVar6);
          func_0x000107c61434(lVar10);
          lVar4 = lRam0000000112f17588;
          lVar7 = lRam0000000112f17588;
          uVar8 = uRam0000000112f17580;
          if (lVar2 != -1) {
            func_0x000107c61568(0x112f17578,0x102da8900);
            lVar4 = lRam0000000112f17588;
            lVar7 = lRam0000000112f17588;
            uVar8 = uRam0000000112f17580;
          }
        }
        func_0x000107c61434(lVar4);
        uVar1 = 0;
        if (lVar13 != 0) {
          uVar1 = uVar11;
        }
        lVar4 = -0x2000000000000000;
        if (lVar13 != 0) {
          lVar4 = lVar13;
        }
        uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
        uVar11 = uVar5;
        func_0x000107c61174(uVar5);
        func_0x000107c61434(lVar13);
        FUN_102f25cb4(uVar9,lVar10,uVar8,lVar7,0,0,uVar1,lVar4,uVar5);
        FUN_102da8eb8(&uStack_c0);
        func_0x000107c61170(lVar6);
        func_0x000107c6142c(lVar10);
        func_0x000107c6142c(lVar4);
        func_0x000107c61170(uVar11);
        func_0x000107c6142c(lVar7);
      }
    }
    else {
      FUN_102da9008(&uStack_c0,auStack_160);
      func_0x000107c61174(lVar6);
      puVar3 = &uStack_110;
      FUN_102da8460(puVar3);
      func_0x000107c5a588(lVar6);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar3);
      FUN_102da8eb8(&uStack_c0);
    }
  }
  return;
}



/* Entry: 102da6320; end: 102da6543;  */

void FUN_102da6320(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined1 auStack_1c0 [80];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined3 uStack_138;
  undefined5 uStack_135;
  undefined3 uStack_130;
  undefined5 uStack_12d;
  undefined2 uStack_128;
  undefined1 uStack_126;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined3 uStack_e8;
  undefined5 uStack_e5;
  undefined3 uStack_e0;
  undefined8 uStack_dd;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined3 uStack_98;
  undefined5 uStack_95;
  undefined3 uStack_90;
  ulong uStack_8d;
  
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  lVar2 = *(long *)(unaff_x20 + 0x48);
  uVar3 = 0;
  if (lVar2 != 0) {
    func_0x000107c61174();
    FUN_102f25abc();
    func_0x000107c61170(lVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = uVar1;
  func_0x000107c61434();
  func_0x000102da95dc();
  uVar5 = uVar4;
  uVar9 = param_2;
  func_0x000102da96a8();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar10 = uVar9;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c3e124();
  func_0x000107c61170(puVar6);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0((double)(int)puVar7);
  puVar6 = puVar8;
  func_0x000102da9774();
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = SUB83(puVar6,0);
  uStack_135 = (undefined5)((ulong)puVar6 >> 0x18);
  uStack_130 = (undefined3)uVar10;
  uStack_12d = (undefined5)((ulong)uVar10 >> 0x18);
  uStack_128 = 1;
  uStack_126 = 0;
  uStack_8d = (ulong)CONCAT25(1,uStack_12d);
  uStack_90 = uStack_130;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puVar6 = &UNK_1105cfe60;
  uStack_170 = uVar4;
  uStack_168 = param_2;
  uStack_160 = uVar5;
  uStack_158 = uVar9;
  puStack_150 = puVar8;
  uStack_d0 = uVar4;
  uStack_c8 = param_2;
  uStack_c0 = uVar5;
  uStack_b8 = uVar9;
  puStack_b0 = puVar8;
  uStack_98 = uStack_138;
  uStack_95 = uStack_135;
  func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  puVar7 = &UNK_1105cfe88;
  func_0x000107c613fc(&UNK_1105cfe88,0x28,7);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 200);
  uStack_e8 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
  uStack_dd = *(undefined8 *)(unaff_x20 + 0xdb);
  uStack_e5 = (undefined5)*(undefined8 *)(unaff_x20 + 0xd3);
  uStack_e0 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_148;
  *(undefined **)(unaff_x20 + 0xb8) = puStack_150;
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar1;
  *(ulong *)(unaff_x20 + 0xd0) = CONCAT53(uStack_135,uStack_138);
  *(undefined8 *)(unaff_x20 + 200) = uStack_140;
  *(ulong *)(unaff_x20 + 0xdb) = CONCAT17(uStack_126,CONCAT25(uStack_128,uStack_12d));
  *(ulong *)(unaff_x20 + 0xd3) = CONCAT35(uStack_130,uStack_135);
  func_0x000107c6157c(puVar6);
  FUN_102da8eb8(&uStack_120);
  func_0x000102da8f00(&uStack_170,auStack_1c0);
  func_0x000102da79a8(0x40ac200000000000,&uStack_d0,0,FUN_102da8e84,puVar7,0,0);
  func_0x000107c61574(puVar7);
  func_0x000102da8f34(&uStack_170);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 102da6544; end: 102da6b1f;  */

void FUN_102da6544(undefined *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_1f0 [80];
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined3 uStack_168;
  undefined5 uStack_165;
  undefined3 uStack_160;
  undefined8 uStack_15d;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined3 uStack_118;
  undefined5 uStack_115;
  undefined3 uStack_110;
  undefined5 uStack_10d;
  undefined1 uStack_108;
  undefined2 uStack_107;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined3 uStack_c8;
  undefined5 uStack_c5;
  undefined3 uStack_c0;
  undefined4 uStack_bd;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined3 uStack_78;
  undefined5 uStack_75;
  undefined3 uStack_70;
  undefined8 uStack_6d;
  
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  if (*(long *)(unaff_x20 + 0x48) == 0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_120 = 0xa300000000000000;
    uStack_128 = 0x8b80e2;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_115 = 0;
    uStack_110 = 0;
    uStack_10d = 0;
    uStack_108 = 0;
    uStack_107 = 1;
    uStack_6d = 0x1000000000000;
    uStack_70 = 0;
    uStack_88 = 0x8b80e2;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_75 = 0;
    uStack_80 = 0xa300000000000000;
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_f8 = *(long *)(unaff_x20 + 0xa0);
    puStack_100 = *(undefined **)(unaff_x20 + 0x98);
    puStack_d8 = *(undefined **)(unaff_x20 + 0xc0);
    pcStack_e0 = *(code **)(unaff_x20 + 0xb8);
    uVar8 = *(undefined8 *)(unaff_x20 + 0xdb);
    uStack_bd = (undefined4)uVar8;
    uStack_b9 = (undefined1)((ulong)uVar8 >> 0x20);
    uStack_b8 = (undefined1)((ulong)uVar8 >> 0x28);
    uStack_b7 = (undefined1)((ulong)uVar8 >> 0x30);
    uStack_b6 = (undefined1)((ulong)uVar8 >> 0x38);
    uStack_c0 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 200);
    uStack_c8 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
    uStack_c5 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xd0) >> 0x18);
    puStack_e8 = *(undefined **)(unaff_x20 + 0xb0);
    puStack_f0 = *(undefined **)(unaff_x20 + 0xa8);
    *(long *)(unaff_x20 + 0xa0) = param_2;
    *(undefined **)(unaff_x20 + 0x98) = param_1;
    *(undefined8 *)(unaff_x20 + 0xdb) = 0x1000000000000;
    *(undefined8 *)(unaff_x20 + 0xd3) = 0;
    *(undefined8 *)(unaff_x20 + 0xd0) = 0;
    *(undefined8 *)(unaff_x20 + 200) = 0xa300000000000000;
    *(undefined8 *)(unaff_x20 + 0xc0) = 0x8b80e2;
    *(undefined8 *)(unaff_x20 + 0xb8) = 0;
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    *(undefined8 *)(unaff_x20 + 0xa8) = 0;
    puStack_150 = param_1;
    lStack_148 = param_2;
    puStack_b0 = param_1;
    lStack_a8 = param_2;
    func_0x000107c61434(param_2);
    func_0x000102da8eb8(&puStack_100);
    uVar8 = 0;
    puVar7 = (undefined *)0x0;
    if (*(char *)(unaff_x20 + 0x88) == '\x01') {
      uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
      puVar2 = &UNK_1105cfe60;
      func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
      func_0x000107c61644(puVar2 + 0x10);
      puVar7 = &UNK_1105d02e8;
      func_0x000107c613fc(&UNK_1105d02e8,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar2;
      *(undefined8 *)(puVar7 + 0x18) = uVar8;
      *(undefined8 *)(puVar7 + 0x20) = uVar11;
      func_0x000107c61434(uVar11);
      uVar8 = 0x102da919c;
    }
    if (*(long *)(unaff_x20 + 0xe8) == 0) {
      lVar9 = *(long *)(unaff_x20 + 0x18);
      func_0x000102da8f00(&puStack_150,&puStack_1a0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 != 0) {
        uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
        FUN_102f2821c(0);
        func_0x000107c610f8();
        func_0x000107c61434(uVar11);
        func_0x000107c61434(param_2);
        func_0x000107c615f0(lVar9);
        func_0x000102f260d8(0,param_1,param_2,lVar9);
        if (lRam0000000112f17578 != -1) {
          func_0x000107c61568(0x112f17578,0x102da8900);
        }
        uVar10 = uRam0000000112f17588;
        uVar6 = uRam0000000112f17580;
        func_0x000107c61434(uRam0000000112f17588);
        func_0x000102f26318(uVar6,uVar10);
        func_0x000107c6142c(uVar10);
        func_0x000107c61170(uVar6);
        func_0x000102f26300(0x8b80e2,0xa300000000000000);
        func_0x000107c61170();
        uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
        uVar6 = uVar10;
        func_0x000107c61174(uVar10);
        FUN_102f2676c(uVar10);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar10);
        FUN_102f26824(0x4022000000000000);
        func_0x000107c61170();
        FUN_102f26adc(0);
        func_0x000107c61170();
        func_0x000102f26b24(0x4014000000000000);
        func_0x000107c61170();
        func_0x000102f26b00(0);
        func_0x000107c61170();
        uVar6 = uVar8;
        func_0x000102f269dc(uVar8,puVar7);
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(uVar6);
        lVar3 = 0;
        FUN_102da8b28();
        func_0x000107c613fc();
        func_0x000107c61614(lVar3 + 0x10,0);
        puVar2 = &UNK_1105cfe60;
        func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
        func_0x000107c61644(puVar2 + 0x10);
        puVar4 = &UNK_1105d02c0;
        func_0x000107c613fc(&UNK_1105d02c0,0x20,7);
        *(undefined **)(puVar4 + 0x10) = puVar2;
        *(long *)(puVar4 + 0x18) = lVar3;
        func_0x000107c6157c(puVar2);
        func_0x000107c6157c(lVar3);
        uVar11 = 0x102da9188;
        FUN_102f268dc(0x102da9188,puVar4);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(puVar4);
        func_0x000107c61170();
        func_0x000102f26dc0();
        func_0x000107c61604(lVar3 + 0x10,uVar11);
        uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
        *(undefined8 *)(unaff_x20 + 0x48) = uVar11;
        func_0x000107c61170(uVar6);
        lVar12 = *(long *)(unaff_x20 + 0x10);
        func_0x000107c61174(uVar11);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar12 != 0) {
          func_0x000107c5c2e0();
          func_0x000107c615e8(lVar12);
        }
        func_0x000107c615e8(lVar9);
        func_0x000107c61574(lVar3);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(param_1);
      }
    }
    else {
      func_0x000102da8f00(&puStack_150,&puStack_1a0);
      FUN_102da7640(0x4014000000000000,&puStack_b0,0,0,uVar8,puVar7);
    }
    func_0x000102da8f34(&puStack_150);
    func_0x00010058d43c(uVar8,puVar7);
  }
  else {
    lVar9 = *(long *)(unaff_x20 + 0xa0);
    puStack_b0 = *(undefined **)(unaff_x20 + 0x98);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_90 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar8 = *(undefined8 *)(unaff_x20 + 200);
    uStack_78 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
    uStack_6d = *(undefined8 *)(unaff_x20 + 0xdb);
    uStack_75 = (undefined5)*(undefined8 *)(unaff_x20 + 0xd3);
    uStack_70 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
    lStack_a8 = lVar9;
    uStack_80 = uVar8;
    if (lVar9 != 0) {
      puStack_e8 = *(undefined **)(unaff_x20 + 0xb0);
      puStack_f0 = *(undefined **)(unaff_x20 + 0xa8);
      pcStack_e0 = *(code **)(unaff_x20 + 0xb8);
      uStack_c0 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd8);
      uStack_bd = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xd8) >> 0x18);
      uStack_c8 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
      uStack_c5 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xd0) >> 0x18);
      uVar1 = *(undefined4 *)(unaff_x20 + 0xdf);
      uStack_b9 = (undefined1)uVar1;
      uStack_b8 = (undefined1)((uint)uVar1 >> 8);
      uStack_b7 = (undefined1)((uint)uVar1 >> 0x10);
      uStack_b6 = (undefined1)((uint)uVar1 >> 0x18);
      func_0x000107c61434(param_2);
      FUN_102da9008(&puStack_b0,&puStack_150);
      func_0x000107c6142c(lVar9);
      puStack_100 = param_1;
      lStack_f8 = param_2;
      func_0x000107c6142c(uVar8);
      uStack_d0 = 0xa300000000000000;
      puStack_d8 = (undefined *)0x8b80e2;
      uStack_b7 = 1;
      lStack_198 = lStack_f8;
      puStack_1a0 = puStack_100;
      uStack_188 = puStack_e8;
      uStack_190 = puStack_f0;
      uStack_178 = 0x8b80e2;
      uStack_180 = pcStack_e0;
      uStack_168 = uStack_c8;
      uStack_170 = 0xa300000000000000;
      uStack_15d = CONCAT17(uStack_b6,CONCAT16(1,CONCAT15(uStack_b8,CONCAT14(uStack_b9,uStack_bd))))
      ;
      uStack_165 = uStack_c5;
      uStack_160 = uStack_c0;
      uStack_138 = *(undefined8 *)(unaff_x20 + 0xb0);
      uStack_140 = *(undefined8 *)(unaff_x20 + 0xa8);
      uStack_128 = *(undefined8 *)(unaff_x20 + 0xc0);
      uStack_130 = *(undefined8 *)(unaff_x20 + 0xb8);
      uStack_120 = *(undefined8 *)(unaff_x20 + 200);
      uStack_118 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
      uVar8 = *(undefined8 *)(unaff_x20 + 0xdb);
      uStack_10d = (undefined5)uVar8;
      uStack_108 = (undefined1)((ulong)uVar8 >> 0x28);
      uStack_107 = (undefined2)((ulong)uVar8 >> 0x30);
      uStack_115 = (undefined5)*(undefined8 *)(unaff_x20 + 0xd3);
      uStack_110 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
      lStack_148 = *(long *)(unaff_x20 + 0xa0);
      puStack_150 = *(undefined **)(unaff_x20 + 0x98);
      *(undefined **)(unaff_x20 + 0xb0) = puStack_e8;
      *(undefined **)(unaff_x20 + 0xa8) = puStack_f0;
      *(undefined8 *)(unaff_x20 + 0xc0) = 0x8b80e2;
      *(code **)(unaff_x20 + 0xb8) = pcStack_e0;
      *(ulong *)(unaff_x20 + 0xd0) = CONCAT53(uStack_c5,uStack_c8);
      *(undefined8 *)(unaff_x20 + 200) = 0xa300000000000000;
      *(ulong *)(unaff_x20 + 0xdb) =
           CONCAT17(uStack_b6,CONCAT16(1,CONCAT15(uStack_b8,CONCAT14(uStack_b9,uStack_bd))));
      *(ulong *)(unaff_x20 + 0xd3) = CONCAT35(uStack_c0,uStack_c5);
      *(long *)(unaff_x20 + 0xa0) = lStack_f8;
      *(undefined **)(unaff_x20 + 0x98) = puStack_100;
      func_0x000102da8f00(&puStack_1a0,auStack_1f0);
      func_0x000102da8eb8(&puStack_150);
      FUN_102da5ea8();
      func_0x000102da8f34(&puStack_100);
    }
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar7 = &UNK_1105cfe60;
  func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar2 = &UNK_1105d0270;
  func_0x000107c613fc(&UNK_1105d0270,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar7;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x20) = uVar11;
  pcStack_e0 = FUN_102da90cc;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_f8 = 0x42000000;
  puStack_f0 = &UNK_1000f6b44;
  puStack_e8 = &UNK_1105d0288;
  ppuVar5 = &puStack_100;
  puStack_d8 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  puVar7 = puStack_d8;
  func_0x000107c61434(uVar11);
  func_0x000107c61574(puVar7);
  func_0x000107c4e528(0x4014000000000000,uVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 102da6b20; end: 102da6c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102da6b20(ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  if (((*(byte *)(unaff_x20 + 0x89) & 1) == 0) && (*(char *)(unaff_x20 + 0x88) == '\x01')) {
    func_0x000103f1dd94();
    uVar2 = *param_1;
    uVar4 = *(ulong *)(unaff_x20 + 0x38);
    uVar3 = *(undefined8 *)(uVar2 + _DAT_11302e940);
    uVar1 = ((undefined8 *)(uVar2 + _DAT_11302e940))[1];
    func_0x000107c61174();
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c3ebd8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar4 == 0) {
      uVar5 = (ulong)*(byte *)(uVar2 + _DAT_11302e950);
    }
    else {
      uVar5 = uVar4;
      func_0x000107c3ebcc(uVar4);
      func_0x000107c61170(uVar2);
      uVar2 = uVar4;
    }
    func_0x000107c61170(uVar2);
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 102da6c0c; end: 102da7283;  */

void FUN_102da6c0c(ulong param_1,long param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong **ppuVar9;
  ulong *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_200 [80];
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined3 uStack_178;
  undefined5 uStack_175;
  undefined3 uStack_170;
  undefined8 uStack_16d;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined2 uStack_127;
  undefined5 uStack_125;
  undefined1 uStack_120;
  undefined2 uStack_11f;
  undefined6 uStack_11d;
  undefined2 uStack_117;
  ulong *puStack_110;
  ulong *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined3 uStack_d8;
  undefined5 uStack_d5;
  undefined3 uStack_d0;
  undefined4 uStack_cd;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    lVar14 = *(long *)(unaff_x20 + 0xa0);
    uStack_c0 = *(ulong *)(unaff_x20 + 0x98);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar15 = *(undefined8 *)(unaff_x20 + 200);
    uStack_88 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
    uStack_7d = *(undefined8 *)(unaff_x20 + 0xdb);
    uStack_85 = (undefined5)*(undefined8 *)(unaff_x20 + 0xd3);
    uStack_80 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
    lStack_b8 = lVar14;
    uStack_90 = uVar15;
    if (lVar14 != 0) {
      puStack_f8 = *(undefined **)(unaff_x20 + 0xb0);
      puStack_100 = *(undefined **)(unaff_x20 + 0xa8);
      uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb8);
      uStack_d0 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd8);
      uStack_cd = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xd8) >> 0x18);
      uStack_d8 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
      uStack_d5 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xd0) >> 0x18);
      uVar1 = *(undefined4 *)(unaff_x20 + 0xdf);
      uStack_c9 = (undefined1)uVar1;
      uStack_c8 = (undefined1)((uint)uVar1 >> 8);
      uStack_c7 = (undefined1)((uint)uVar1 >> 0x10);
      uStack_c6 = (undefined1)((uint)uVar1 >> 0x18);
      puVar2 = &uStack_c0;
      puVar10 = &uStack_160;
      FUN_102da9008();
      func_0x000102da9840();
      func_0x000107c6142c(lVar14);
      func_0x000107c6142c(uVar15);
      puStack_e8 = (undefined *)0x0;
      uStack_e0 = 0;
      uStack_c7 = 1;
      puStack_188 = (undefined *)0x0;
      uStack_190 = uStack_f0;
      uStack_178 = uStack_d8;
      uStack_180 = 0;
      uStack_16d = CONCAT17(uStack_c6,CONCAT16(1,CONCAT15(uStack_c8,CONCAT14(uStack_c9,uStack_cd))))
      ;
      uStack_175 = uStack_d5;
      uStack_170 = uStack_d0;
      puStack_198 = puStack_f8;
      puStack_1a0 = puStack_100;
      lStack_158 = *(long *)(unaff_x20 + 0xa0);
      uStack_160 = *(ulong *)(unaff_x20 + 0x98);
      uStack_138 = *(undefined8 *)(unaff_x20 + 0xc0);
      uStack_140 = *(undefined8 *)(unaff_x20 + 0xb8);
      uStack_11d = (undefined6)*(undefined8 *)(unaff_x20 + 0xdb);
      uStack_117 = (undefined2)((ulong)*(undefined8 *)(unaff_x20 + 0xdb) >> 0x30);
      uStack_120 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
      uStack_11f = (undefined2)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x30);
      uVar15 = *(undefined8 *)(unaff_x20 + 0xd0);
      uStack_130 = *(undefined8 *)(unaff_x20 + 200);
      uStack_128 = (undefined1)uVar15;
      uStack_127 = (undefined2)((ulong)uVar15 >> 8);
      uStack_125 = (undefined5)((ulong)uVar15 >> 0x18);
      uStack_148 = *(undefined8 *)(unaff_x20 + 0xb0);
      uStack_150 = *(undefined8 *)(unaff_x20 + 0xa8);
      *(ulong **)(unaff_x20 + 0xa0) = puVar10;
      *(ulong **)(unaff_x20 + 0x98) = puVar2;
      *(ulong *)(unaff_x20 + 0xdb) =
           CONCAT17(uStack_c6,CONCAT16(1,CONCAT15(uStack_c8,CONCAT14(uStack_c9,uStack_cd))));
      *(ulong *)(unaff_x20 + 0xd3) = CONCAT35(uStack_d0,uStack_d5);
      *(ulong *)(unaff_x20 + 0xd0) = CONCAT53(uStack_d5,uStack_d8);
      *(undefined8 *)(unaff_x20 + 200) = 0;
      *(undefined8 *)(unaff_x20 + 0xc0) = 0;
      *(undefined8 *)(unaff_x20 + 0xb8) = uStack_f0;
      *(undefined **)(unaff_x20 + 0xb0) = puStack_f8;
      *(undefined **)(unaff_x20 + 0xa8) = puStack_100;
      puStack_1b0 = puVar2;
      puStack_1a8 = puVar10;
      puStack_110 = puVar2;
      puStack_108 = puVar10;
      func_0x000102da8f00(&puStack_1b0,auStack_200);
      func_0x000102da8eb8(&uStack_160);
      FUN_102da5ea8();
      func_0x000102da8f34(&puStack_110);
    }
    if ((param_1 & 1) == 0) {
      return;
    }
    uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
    puVar12 = &UNK_1105cfe60;
    func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
    func_0x000107c61644(puVar12 + 0x10);
    puVar4 = &UNK_1105d0090;
    func_0x000107c613fc(&UNK_1105d0090,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar12;
    *(undefined8 *)(puVar4 + 0x18) = uVar15;
    *(undefined8 *)(puVar4 + 0x20) = uVar8;
    uStack_f0 = 0x102da9190;
    puStack_110 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
    puStack_108 = (ulong *)0x42000000;
    puStack_100 = &UNK_1000f6b44;
    puStack_f8 = &UNK_1105d00a8;
    ppuVar9 = &puStack_110;
    puStack_e8 = puVar4;
    func_0x000107c60bc4(ppuVar9);
    puVar12 = puStack_e8;
    goto LAB_102da7224;
  }
  uVar3 = param_1;
  func_0x000102da9840();
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_11f = 0;
  uStack_11d = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_127 = 0;
  uStack_125 = 0;
  uStack_130 = 0;
  uStack_117 = 1;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_7d = 0x1000000000000;
  uStack_85 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  puStack_108 = *(ulong **)(unaff_x20 + 0xa0);
  puStack_110 = *(ulong **)(unaff_x20 + 0x98);
  puStack_e8 = *(undefined **)(unaff_x20 + 0xc0);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xdb);
  uStack_cd = (undefined4)uVar15;
  uStack_c9 = (undefined1)((ulong)uVar15 >> 0x20);
  uStack_c8 = (undefined1)((ulong)uVar15 >> 0x28);
  uStack_c7 = (undefined1)((ulong)uVar15 >> 0x30);
  uStack_c6 = (undefined1)((ulong)uVar15 >> 0x38);
  uStack_d0 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 200);
  uStack_d8 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
  uStack_d5 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xd0) >> 0x18);
  puStack_f8 = *(undefined **)(unaff_x20 + 0xb0);
  puStack_100 = *(undefined **)(unaff_x20 + 0xa8);
  *(long *)(unaff_x20 + 0xa0) = param_2;
  *(ulong *)(unaff_x20 + 0x98) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xdb) = 0x1000000000000;
  *(undefined8 *)(unaff_x20 + 0xd3) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  uStack_160 = uVar3;
  lStack_158 = param_2;
  uStack_c0 = uVar3;
  lStack_b8 = param_2;
  func_0x000102da8eb8(&puStack_110);
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
    puVar4 = &UNK_1105cfe60;
    func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    puVar12 = &UNK_1105d0068;
    func_0x000107c613fc(&UNK_1105d0068,0x28,7);
    *(undefined **)(puVar12 + 0x10) = puVar4;
    *(undefined8 *)(puVar12 + 0x18) = uVar15;
    *(undefined8 *)(puVar12 + 0x20) = uVar8;
    func_0x000107c61434(uVar8);
    pcVar13 = FUN_102da8fd4;
    if (*(long *)(unaff_x20 + 0xe8) == 0) goto LAB_102da6f1c;
LAB_102da6ed4:
    func_0x000102da8f00(&uStack_160,&puStack_1b0);
    FUN_102da7640(0x40ac200000000000,&uStack_c0,0,0,pcVar13,puVar12);
  }
  else {
    pcVar13 = (code *)0x0;
    puVar12 = (undefined *)0x0;
    if (*(long *)(unaff_x20 + 0xe8) != 0) goto LAB_102da6ed4;
LAB_102da6f1c:
    lVar14 = *(long *)(unaff_x20 + 0x18);
    func_0x000102da8f00(&uStack_160,&puStack_1b0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar14 != 0) {
      uVar15 = *(undefined8 *)(unaff_x20 + 0x58);
      FUN_102f2821c(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar15);
      func_0x000107c61434(param_2);
      func_0x000107c615f0(lVar14);
      func_0x000102f260d8(0,uVar3,param_2,lVar14);
      if (lRam0000000112f17578 != -1) {
        func_0x000107c61568(0x112f17578,0x102da8900);
      }
      uVar11 = uRam0000000112f17588;
      uVar8 = uRam0000000112f17580;
      func_0x000107c61434(uRam0000000112f17588);
      func_0x000102f26318(uVar8,uVar11);
      func_0x000107c6142c(uVar11);
      func_0x000107c61170(uVar8);
      func_0x000102f26300(0,0);
      func_0x000107c61170();
      uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
      uVar8 = uVar11;
      func_0x000107c61174(uVar11);
      FUN_102f2676c(uVar11);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar11);
      FUN_102f26824(0x4022000000000000);
      func_0x000107c61170();
      FUN_102f26adc(0);
      func_0x000107c61170();
      func_0x000102f26b24(0x40ac200000000000);
      func_0x000107c61170();
      func_0x000102f26b00(1);
      func_0x000107c61170();
      pcVar5 = pcVar13;
      func_0x000102f269dc(pcVar13,puVar12);
      func_0x000107c6142c(uVar15);
      func_0x000107c61170(pcVar5);
      lVar6 = 0;
      FUN_102da8b28();
      func_0x000107c613fc();
      func_0x000107c61614(lVar6 + 0x10,0);
      puVar4 = &UNK_1105cfe60;
      func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar7 = &UNK_1105d0040;
      func_0x000107c613fc(&UNK_1105d0040,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar4;
      *(long *)(puVar7 + 0x18) = lVar6;
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(lVar6);
      uVar15 = 0x102da9180;
      FUN_102f268dc(0x102da9180,puVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar7);
      func_0x000107c61170();
      func_0x000102f26dc0();
      func_0x000107c61604(lVar6 + 0x10,uVar15);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
      *(undefined8 *)(unaff_x20 + 0x48) = uVar15;
      func_0x000107c61170(uVar8);
      lVar16 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c61174(uVar15);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar16 != 0) {
        func_0x000107c5c2e0();
        func_0x000107c615e8(lVar16);
      }
      func_0x000107c615e8(lVar14);
      func_0x000107c61574(lVar6);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar3);
    }
  }
  func_0x000102da8f34(&uStack_160);
  func_0x00010058d43c(pcVar13,puVar12);
  if ((param_1 & 1) == 0) {
    return;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar12 = &UNK_1105cfe60;
  func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
  func_0x000107c61644(puVar12 + 0x10);
  puVar4 = &UNK_1105cfff0;
  func_0x000107c613fc(&UNK_1105cfff0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar12;
  *(undefined8 *)(puVar4 + 0x18) = uVar15;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  uStack_190 = 0x102da8fc8;
  puStack_1b0 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
  puStack_1a8 = (ulong *)0x42000000;
  puStack_1a0 = &UNK_1000f6b44;
  puStack_198 = &UNK_1105d0008;
  ppuVar9 = &puStack_1b0;
  puStack_188 = puVar4;
  func_0x000107c60bc4(ppuVar9);
  puVar12 = puStack_188;
LAB_102da7224:
  func_0x000107c61434(uVar8);
  func_0x000107c61574(puVar12);
  func_0x000107c4e528(0x3ff0000000000000,uVar11);
  func_0x000107c60bd0(ppuVar9);
  return;
}



/* Entry: 102da7284; end: 102da744b;  */

/* WARNING: Possible PIC construction at 0x000102da7340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da7404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102da7344) */

void FUN_102da7284(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (((param_3 != 0) && (lVar3 = *(long *)(param_1 + 0x58), lVar3 != 0)) &&
     ((uVar1 = *(ulong *)(param_1 + 0x50), uVar1 == param_2 && lVar3 == param_3 ||
      (func_0x000107c605b8(uVar1,lVar3,param_2,param_3,0), (uVar1 & 1) != 0)))) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 0x60);
      uVar1 = uVar4;
      func_0x000107c61174(uVar4);
      FUN_102da5410();
      uVar2 = param_2;
      func_0x000102da52bc(param_2,param_3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c615e8(lVar3);
      }
      else {
        func_0x000107c5fadc(param_2,param_3);
        func_0x000107c5082c(lVar3);
        uVar1 = param_2;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 102da744c; end: 102da763f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da744c(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_1e0 [80];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined3 uStack_158;
  undefined5 uStack_155;
  undefined3 uStack_150;
  undefined8 uStack_14d;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined3 uStack_108;
  undefined5 uStack_105;
  undefined3 uStack_100;
  undefined8 uStack_fd;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined3 uStack_b8;
  undefined5 uStack_b5;
  undefined3 uStack_b0;
  undefined5 uStack_ad;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined3 uStack_68;
  undefined5 uStack_65;
  undefined3 uStack_60;
  undefined8 uStack_5d;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 == 0) {
    if (param_3 != 0) goto LAB_102da7628;
  }
  else if ((param_3 == 0) ||
          ((uVar3 = *(ulong *)(param_1 + 0x50), uVar3 != param_2 || lVar2 != param_3 &&
           (func_0x000107c605b8(uVar3,lVar2,param_2,param_3,0), (uVar3 & 1) == 0))))
  goto LAB_102da7628;
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (((*(byte *)(param_1 + 0xf1) & 1) == 0 && ((*(byte *)(param_1 + 0xf2) & 1) == 0)))) {
    *(undefined1 *)(param_1 + 0xf2) = 1;
    lStack_98 = *(long *)(param_1 + 0xa0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x98);
    uStack_88 = *(undefined8 *)(param_1 + 0xb0);
    uStack_90 = *(undefined8 *)(param_1 + 0xa8);
    uStack_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_80 = *(undefined8 *)(param_1 + 0xb8);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    uStack_68 = (undefined3)*(undefined8 *)(param_1 + 0xd0);
    uStack_5d = *(undefined8 *)(param_1 + 0xdb);
    uStack_65 = (undefined5)*(undefined8 *)(param_1 + 0xd3);
    uStack_60 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0xd3) >> 0x28);
    if (lStack_98 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xd0);
      uStack_160 = *(undefined8 *)(param_1 + 200);
      uStack_b0 = (undefined3)*(undefined8 *)(param_1 + 0xd8);
      uStack_ad = (undefined5)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x18);
      uStack_178 = *(undefined8 *)(param_1 + 0xb0);
      uStack_180 = *(undefined8 *)(param_1 + 0xa8);
      uStack_168 = *(undefined8 *)(param_1 + 0xc0);
      uStack_170 = *(undefined8 *)(param_1 + 0xb8);
      uStack_b8 = (undefined3)uVar4;
      uStack_b5 = (undefined5)((ulong)uVar4 >> 0x18);
      uStack_188 = *(undefined8 *)(param_1 + 0xa0);
      uStack_190 = *(undefined8 *)(param_1 + 0x98);
      uStack_a6 = 1;
      uStack_a8 = 1;
      uStack_14d = CONCAT17(1,CONCAT25(1,uStack_ad));
      uStack_155 = uStack_b5;
      uStack_150 = uStack_b0;
      uStack_138 = *(undefined8 *)(param_1 + 0xa0);
      uStack_140 = *(undefined8 *)(param_1 + 0x98);
      uStack_128 = *(undefined8 *)(param_1 + 0xb0);
      uStack_130 = *(undefined8 *)(param_1 + 0xa8);
      uStack_118 = *(undefined8 *)(param_1 + 0xc0);
      uStack_120 = *(undefined8 *)(param_1 + 0xb8);
      uStack_fd = *(undefined8 *)(param_1 + 0xdb);
      uStack_100 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0xd3) >> 0x28);
      uStack_110 = *(undefined8 *)(param_1 + 200);
      uStack_108 = (undefined3)*(undefined8 *)(param_1 + 0xd0);
      uStack_105 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x18);
      *(undefined8 *)(param_1 + 0xa0) = uStack_188;
      *(undefined8 *)(param_1 + 0x98) = uStack_190;
      *(ulong *)(param_1 + 0xdb) = CONCAT17(1,CONCAT25(1,uStack_ad));
      *(ulong *)(param_1 + 0xd3) = CONCAT35(uStack_b0,uStack_b5);
      *(undefined8 *)(param_1 + 0xd0) = uVar4;
      *(undefined8 *)(param_1 + 200) = uStack_160;
      *(undefined8 *)(param_1 + 0xc0) = uStack_168;
      *(undefined8 *)(param_1 + 0xb8) = uStack_170;
      *(undefined8 *)(param_1 + 0xb0) = uStack_178;
      *(undefined8 *)(param_1 + 0xa8) = uStack_180;
      uStack_158 = uStack_b8;
      uStack_f0 = uStack_190;
      uStack_e8 = uStack_188;
      uStack_e0 = uStack_180;
      uStack_d8 = uStack_178;
      uStack_d0 = uStack_170;
      uStack_c8 = uStack_168;
      uStack_c0 = uStack_160;
      FUN_102da9008(&uStack_a0,auStack_1e0);
      func_0x000102da8f00(&uStack_190,auStack_1e0);
      func_0x000102da8eb8(&uStack_140);
      FUN_102da5ea8();
      func_0x000102da8f34(&uStack_f0);
    }
    lVar2 = *(long *)(param_1 + 0x28) + _DAT_112f9cac0;
    func_0x000107c61428(lVar2,&uStack_f0,0,0);
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar2 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar2 + 0x18))();
      func_0x000107c615e8(lVar1);
    }
  }
LAB_102da7628:
  func_0x000107c61574();
  return;
}



/* Entry: 102da7640; end: 102da7e7f;  */

/* WARNING: Possible PIC construction at 0x000102da7928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da7938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da7950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102da793c) */
/* WARNING: Removing unreachable block (ram,0x000102da7954) */

void FUN_102da7640(undefined8 param_1,undefined8 param_2,code *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    puVar4 = PTR_PTR_1126ac4d0;
    func_0x000107c610f8(PTR_PTR_1126ac4d0);
    func_0x000107c61434(uVar1);
    func_0x000107c453e4(puVar4);
    puVar5 = &UNK_1105cfe60;
    func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar6 = &UNK_1105d0180;
    func_0x000107c613fc(&UNK_1105d0180,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar9;
    *(undefined8 *)(puVar6 + 0x20) = uVar1;
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_102da9064;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105d0198;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_78);
    func_0x000107c54fc0(puVar4);
    func_0x000107c60bd0(ppuVar7);
    ppuVar7 = (undefined **)0x0;
    if (param_3 != (code *)0x0) {
      puStack_a0 = puVar5;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1105d01e8;
      ppuVar7 = &puStack_a0;
      pcStack_80 = param_3;
      puStack_78 = param_4;
      func_0x000107c60bc4(ppuVar7);
      puVar5 = puStack_78;
      func_0x000107c6157c(param_4);
      func_0x000107c61574(puVar5);
    }
    func_0x000107c54fb8(puVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c5906c(puVar4);
    FUN_102da8460(param_2);
    puVar8 = PTR_PTR_1126ac4d8;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61170(param_2);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined **)(unaff_x20 + 0x90) = puVar8;
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    lVar2 = 0;
    FUN_102da8b28();
    func_0x000107c613fc();
    func_0x000107c61614(lVar2 + 0x10,0);
    FUN_102f2821c(0);
    puVar5 = &UNK_1105cfe60;
    func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar6 = &UNK_1105d01d0;
    func_0x000107c613fc(&UNK_1105d01d0,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(long *)(puVar6 + 0x18) = lVar2;
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(lVar2);
    FUN_102f26b48(param_1,puVar8,0,1,param_5,param_6,0x102da9098,puVar6);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61604(lVar2 + 0x10,puVar8);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined **)(unaff_x20 + 0x48) = puVar8;
    func_0x000107c61170(uVar9);
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c61174(puVar8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(puVar4);
      lVar2 = lVar3;
    }
    else {
      func_0x000107c5c2e0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102da7e80; end: 102da7f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da7e80(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x58) == 0) {
    if (param_3 != 0) {
      return;
    }
  }
  else {
    if (param_3 == 0) {
      return;
    }
    uVar1 = *(ulong *)(param_1 + 0x50);
    if ((uVar1 != param_2 || *(long *)(param_1 + 0x58) != param_3) &&
       (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    if (*(long *)(param_1 + 0xe8) == 0) {
      FUN_102da8148();
    }
    else {
      FUN_102da7f6c();
    }
  }
  else if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x30) + _DAT_112f9ca90;
    func_0x000107c61428(lVar3,auStack_38,0,0);
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c615e8();
      lVar2 = lVar3;
      func_0x000107c61618();
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar3 + 8);
        func_0x000107c614f0();
        (**(code **)(lVar3 + 0x10))();
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 102da7f6c; end: 102da8147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da7f6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  if ((((*(char *)(unaff_x20 + 0x88) == '\x01') && (*(char *)(unaff_x20 + 0x70) == '\x01')) &&
      ((*(long *)(unaff_x20 + 0xa0) == 0 || ((*(byte *)(unaff_x20 + 0xe2) & 1) == 0)))) &&
     (lVar10 = *(long *)(unaff_x20 + 0x80), lVar10 != 0)) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
    lVar7 = *(long *)(unaff_x20 + 0x30) + _DAT_112f9ca90;
    func_0x000107c61428(lVar7,auStack_68,0,0);
    lVar3 = lVar7;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c61434(lVar10);
      func_0x000107c615e8(lVar3);
      if (*(long *)(unaff_x20 + 0xa0) != 0) {
        *(undefined1 *)(unaff_x20 + 0xe2) = 1;
      }
      uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
      puVar4 = &UNK_1105cfe60;
      func_0x000107c613fc(&UNK_1105cfe60,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar5 = &UNK_1105d0130;
      func_0x000107c613fc(&UNK_1105d0130,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = uVar1;
      *(undefined8 *)(puVar5 + 0x20) = uVar2;
      uStack_78 = 0x102da9194;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_1105d0148;
      ppuVar6 = &puStack_98;
      puStack_70 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar4 = puStack_70;
      func_0x000107c61434(uVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c4e528(0,uVar11);
      func_0x000107c60bd0(ppuVar6);
      lVar3 = lVar10;
      func_0x0001038051d0(uVar9,lVar10);
      func_0x000107c6142c(lVar10);
      lVar10 = lVar7;
      func_0x000107c61618();
      if (lVar10 != 0) {
        lVar8 = *(long *)(lVar7 + 8);
        lVar7 = lVar10;
        func_0x000107c614f0();
        (**(code **)(lVar8 + 8))(uVar9,lVar3,lVar7,lVar8);
        func_0x000107c615e8(lVar10);
      }
      func_0x000107c6142c(lVar3);
    }
  }
  return;
}



/* Entry: 102da8148; end: 102da824f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da8148(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  if (((*(char *)(unaff_x20 + 0x88) == '\x01') && (*(char *)(unaff_x20 + 0x70) == '\x01')) &&
     (lVar4 = *(long *)(unaff_x20 + 0x80), lVar4 != 0)) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
    lVar2 = *(long *)(unaff_x20 + 0x30) + _DAT_112f9ca90;
    func_0x000107c61428(lVar2,auStack_58,0,0);
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61434(lVar4);
      func_0x000107c615e8(lVar1);
      lVar1 = lVar4;
      func_0x0001038051d0(uVar5,lVar4);
      func_0x000107c6142c(lVar4);
      lVar4 = lVar2;
      func_0x000107c61618();
      if (lVar4 != 0) {
        lVar3 = *(long *)(lVar2 + 8);
        lVar2 = lVar4;
        func_0x000107c614f0();
        (**(code **)(lVar3 + 8))(uVar5,lVar1,lVar2,lVar3);
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c6142c(lVar1);
      FUN_102da5410();
    }
  }
  return;
}



/* Entry: 102da8250; end: 102da82fb;  */

void FUN_102da8250(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined3 uStack_38;
  undefined5 uStack_35;
  undefined3 uStack_30;
  undefined8 uStack_2d;
  
  if ((param_1 != 0) && (param_1 == *(long *)(unaff_x20 + 0x48))) {
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
    func_0x000107c61170(uVar1);
    uStack_58 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_48 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_50 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_40 = *(undefined8 *)(unaff_x20 + 200);
    uStack_38 = (undefined3)*(undefined8 *)(unaff_x20 + 0xd0);
    uStack_2d = *(undefined8 *)(unaff_x20 + 0xdb);
    uStack_35 = (undefined5)*(undefined8 *)(unaff_x20 + 0xd3);
    uStack_30 = (undefined3)((ulong)*(undefined8 *)(unaff_x20 + 0xd3) >> 0x28);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0xa0);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0x98);
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    *(undefined8 *)(unaff_x20 + 0xa8) = 0;
    *(undefined8 *)(unaff_x20 + 0xc0) = 0;
    *(undefined8 *)(unaff_x20 + 0xb8) = 0;
    *(undefined8 *)(unaff_x20 + 0xd0) = 0;
    *(undefined8 *)(unaff_x20 + 200) = 0;
    *(undefined8 *)(unaff_x20 + 0xdb) = 0;
    *(undefined8 *)(unaff_x20 + 0xd3) = 0;
    FUN_102da8eb8(&uStack_70);
    if ((*(byte *)(unaff_x20 + 0x70) & 1) == 0) {
      func_0x000107c615e8(param_1);
      *(undefined1 *)(unaff_x20 + 0xf1) = 1;
    }
    else {
      FUN_102da5410();
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 102da82fc; end: 102da8407;  */

void FUN_102da82fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c613fc(param_4,0x28,7);
    *(long *)(param_4 + 0x10) = param_1;
    *(undefined8 *)(param_4 + 0x18) = param_2;
    *(undefined8 *)(param_4 + 0x20) = param_3;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    ppuVar2 = &puStack_98;
    uStack_80 = param_6;
    uStack_78 = param_5;
    lStack_70 = param_4;
    func_0x000107c60bc4(ppuVar2);
    lVar1 = lStack_70;
    func_0x000107c61434(param_3);
    func_0x000107c615f0(uVar3);
    func_0x000107c6157c(param_1);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102da8408; end: 102da845f;  */

void FUN_102da8408(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    if (param_3 != 0) {
      return;
    }
  }
  else {
    if (param_3 == 0) {
      return;
    }
    uVar1 = *(ulong *)(param_1 + 0x50);
    if ((uVar1 != param_2 || *(long *)(param_1 + 0x58) != param_3) &&
       (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
      return;
    }
  }
  FUN_102da5410();
  return;
}



/* Entry: 102da8460; end: 102da8733;  */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_102da8460(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  puVar3 = PTR_PTR_1126ac4e0;
  func_0x000107c610f8(PTR_PTR_1126ac4e0);
  func_0x000107c453e4();
  uVar4 = *param_1;
  func_0x000107c5fadc(uVar4,param_1[1]);
  func_0x000107c59e18(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c59e30(puVar3);
  if (param_1[6] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1[5];
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c5a024(puVar3);
  func_0x000107c61170(uVar4);
  lVar7 = param_1[8];
  if (lVar7 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = (undefined *)param_1[7];
    func_0x000107c5fadc(puVar5);
  }
  func_0x000107c52160(puVar3);
  func_0x000107c61170(puVar5);
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    bVar2 = *(byte *)((long)param_1 + 0x49);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c591f0(puVar3);
    func_0x000107c61170(puVar5);
    bVar2 = *(byte *)((long)param_1 + 0x49);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)((long)param_1 + 0x4a);
  }
  else {
    PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar6;
    func_0x000107c610f8(puVar6);
    func_0x000107c45a48();
    func_0x000107c59e28(puVar3);
    func_0x000107c61170(puVar6);
    bVar2 = *(byte *)((long)param_1 + 0x4a);
    puVar5 = puVar6;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar6;
  if ((bVar2 & 1) == 0) {
    lVar8 = *(long *)(unaff_x20 + 0xe8);
  }
  else {
    func_0x000107c610f8(puVar6);
    func_0x000107c45a48();
    func_0x000107c54778(puVar3);
    func_0x000107c61170(puVar6);
    lVar8 = *(long *)(unaff_x20 + 0xe8);
    puVar5 = puVar6;
  }
  if (lVar8 != 0) {
    func_0x000102da9510();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar7);
    func_0x000107c54780(puVar3);
    func_0x000107c61170(puVar5);
  }
  uVar10 = param_1[3];
  if (uVar10 != 0) {
    uVar9 = param_1[2];
    uVar1 = uVar9 & 0xffffffffffff;
    if ((uVar10 & 0x2000000000000000) != 0) {
      uVar1 = uVar10 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar5 = PTR_PTR_1126ac4f0;
      func_0x000107c610f8(PTR_PTR_1126ac4f0);
      func_0x000107c5fadc(uVar9,uVar10);
      func_0x000107c48c8c(puVar5);
      func_0x000107c61170(uVar9);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c59310(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c59a8c(puVar3);
      func_0x000107c61170(puVar5);
    }
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar5 = PTR_PTR_1126ac4e8;
  func_0x000107c610f8(PTR_PTR_1126ac4e8);
  func_0x000107c61174(uVar4);
  func_0x000107c48eac(puVar5);
  func_0x000107c5292c();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(0x4022000000000000);
  func_0x000107c539d4(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c59cec(puVar3);
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 102da8734; end: 102da879f;  */

void FUN_102da8734(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    param_2 = param_2 + 0x10;
    func_0x000107c61618(param_2);
    FUN_102da8250();
    func_0x000107c61574(param_1);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 102da87a0; end: 102da883f;  */

void FUN_102da87a0(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x58);
    if (((lVar2 != 0) &&
        (((uVar1 = *(ulong *)(param_1 + 0x50), uVar1 == param_2 && lVar2 == param_3 ||
          (func_0x000107c605b8(uVar1,lVar2,param_2,param_3,0), (uVar1 & 1) != 0)) &&
         ((*(byte *)(param_1 + 0x70) & 1) == 0)))) && ((*(byte *)(param_1 + 0xf0) & 1) == 0)) {
      FUN_102da6320();
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102da8840; end: 102da8863;  */

void FUN_102da8840(void)

{
  long unaff_x20;
  
  func_0x000101249a90(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102da8864; end: 102da895f;  */

void FUN_102da8864(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 == 0) {
    if (param_3 != 0) goto LAB_102da88e4;
  }
  else if ((param_3 == 0) ||
          ((uVar1 = *(ulong *)(param_1 + 0x50), uVar1 != param_2 || lVar2 != param_3 &&
           (func_0x000107c605b8(uVar1,lVar2,param_2,param_3,0), (uVar1 & 1) == 0))))
  goto LAB_102da88e4;
  FUN_102da5410();
LAB_102da88e4:
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 102da8960; end: 102da8a2f;  */

void FUN_102da8960(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  FUN_102da8acc(*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                *(undefined8 *)(unaff_x20 + 0xd8),(uint)*(uint3 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  return;
}



/* Entry: 102da8a30; end: 102da8a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102da8a30(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    uVar2 = 0;
    func_0x000102da5604();
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x58) != 0) {
        FUN_102da5410();
      }
      func_0x000102da54f0();
      if ((uVar2 & 1) != 0) {
        lVar6 = *(long *)(unaff_x20 + 0x28) + _DAT_112f9cac0;
        func_0x000107c61428(lVar6,auStack_68,0,0);
        lVar3 = lVar6;
        func_0x000107c61618();
        if (lVar3 == 0) {
          lVar6 = 0;
        }
        else {
          lVar5 = *(long *)(lVar6 + 8);
          lVar6 = lVar3;
          func_0x000107c614f0();
          (**(code **)(lVar5 + 8))();
          func_0x000107c615e8(lVar3);
        }
        uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
        *(long *)(unaff_x20 + 0xe8) = lVar6;
        func_0x000107c61170(uVar4);
      }
      bVar1 = 0;
      func_0x000102da5604();
      *(byte *)(unaff_x20 + 0x88) = bVar1 & 1;
      uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
      *(ulong *)(unaff_x20 + 0x50) = param_1;
      *(ulong *)(unaff_x20 + 0x58) = param_2;
      func_0x000107c6142c(uVar4);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
      *(undefined8 *)(unaff_x20 + 0x60) = param_3;
      func_0x000107c61434(param_2);
      func_0x000107c61174(param_3);
      func_0x000107c61170(uVar4);
      FUN_102da56d4(param_4);
      return 1;
    }
  }
  return 0;
}



/* Entry: 102da8a48; end: 102da8acb;  */

long FUN_102da8a48(double param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  if (param_2 == 0) {
    param_1 = 0.0;
  }
  else {
    func_0x000107c4223c();
    param_1 = param_1 * 100.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102da8acc);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102da8ac8);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102da8aa4);
      (*pcVar1)();
    }
  }
  lVar2 = (long)param_1;
  if (lVar2 < 2) {
    lVar2 = 1;
  }
  if (0x62 < lVar2) {
    lVar2 = 99;
  }
  return lVar2;
}



/* Entry: 102da8acc; end: 102da8b27;  */

/* WARNING: Possible PIC construction at 0x000102da8af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da8b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102da8af8) */
/* WARNING: Removing unreachable block (ram,0x000102da8b10) */

void FUN_102da8acc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 102da8b28; end: 102da8b47;  */

void FUN_102da8b28(void)

{
  func_0x000107c61168(&PTR_PTR_112f17510);
  return;
}



/* Entry: 102da8b48; end: 102da8bb3;  */

long FUN_102da8b48(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102da8bb4; end: 102da8c47;  */

undefined8 * FUN_102da8bb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  uVar4 = param_2[8];
  param_1[8] = uVar4;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 102da8c48; end: 102da8d23;  */

undefined8 * FUN_102da8c48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  return param_1;
}



/* Entry: 102da8d24; end: 102da8d47;  */

void FUN_102da8d24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar7 = *(undefined8 *)((long)param_2 + 0x3b);
  *(undefined8 *)((long)param_1 + 0x43) = *(undefined8 *)((long)param_2 + 0x43);
  *(undefined8 *)((long)param_1 + 0x3b) = uVar7;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 102da8d48; end: 102da8dd3;  */

undefined8 * FUN_102da8d48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61170(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  return param_1;
}



/* Entry: 102da8dd4; end: 102da8e83;  */

int FUN_102da8dd4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x4b) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102da8e84; end: 102da8eb7;  */

void FUN_102da8e84(void)

{
  long unaff_x20;
  
  FUN_102da82fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&UNK_1105cff50,0x102da8fb0,&UNK_1105cff68);
  return;
}



/* Entry: 102da8eb8; end: 102da8f5f;  */

undefined8 FUN_102da8eb8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f17570;
  func_0x0001000285a8(0x112f17570,&UNK_10db4dc48);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102da8f60; end: 102da8f93;  */

void FUN_102da8f60(void)

{
  long unaff_x20;
  
  FUN_102da82fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&UNK_1105cff00,0x102da9198,&UNK_1105cff18);
  return;
}



/* Entry: 102da8f94; end: 102da8fd3;  */

void FUN_102da8f94(long param_1,long param_2)

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



/* Entry: 102da8fd4; end: 102da9007;  */

void FUN_102da8fd4(void)

{
  long unaff_x20;
  
  FUN_102da82fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&UNK_1105d00e0,FUN_102da9058,&UNK_1105d00f8);
  return;
}



/* Entry: 102da9008; end: 102da9057;  */

undefined8 FUN_102da9008(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f17570;
  func_0x0001000285a8(0x112f17570,&UNK_10db4dc48);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102da9058; end: 102da9063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da9058(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (*(long *)(lVar3 + 0x58) == 0) {
    if (lVar2 != 0) {
      return;
    }
  }
  else {
    if (lVar2 == 0) {
      return;
    }
    uVar1 = *(ulong *)(lVar3 + 0x50);
    if ((uVar1 != *(ulong *)(unaff_x20 + 0x18) || *(long *)(lVar3 + 0x58) != lVar2) &&
       (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
      return;
    }
  }
  if (*(char *)(lVar3 + 0x70) == '\x01') {
    if (*(long *)(lVar3 + 0xe8) == 0) {
      FUN_102da8148();
    }
    else {
      FUN_102da7f6c();
    }
  }
  else if ((*(byte *)(lVar3 + 0x88) & 1) != 0) {
    lVar3 = *(long *)(lVar3 + 0x30) + _DAT_112f9ca90;
    func_0x000107c61428(lVar3,auStack_38,0,0);
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c615e8();
      lVar2 = lVar3;
      func_0x000107c61618();
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar3 + 8);
        func_0x000107c614f0();
        (**(code **)(lVar3 + 0x10))();
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 102da9064; end: 102da90cb;  */

void FUN_102da9064(void)

{
  long unaff_x20;
  
  FUN_102da82fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&UNK_1105d0220,0x102da90b0,&UNK_1105d0238);
  return;
}



/* Entry: 102da90cc; end: 102da90d7;  */

void FUN_102da90cc(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar2 + 0x58);
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_102da88e4;
  }
  else if ((lVar5 == 0) ||
          ((uVar3 = *(ulong *)(lVar2 + 0x50), uVar3 != uVar1 || lVar4 != lVar5 &&
           (func_0x000107c605b8(uVar3,lVar4,uVar1,lVar5,0), (uVar3 & 1) == 0)))) goto LAB_102da88e4;
  FUN_102da5410();
LAB_102da88e4:
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 102da90d8; end: 102da912f;  */

void FUN_102da90d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102da9130; end: 102da91a3;  */

void FUN_102da9130(long param_1,long param_2)

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



/* Entry: 102da91a4; end: 102da92df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102da91a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  lVar2 = param_6;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    *(undefined8 *)(unaff_x20 + 0x60) = param_17;
    *(undefined8 *)(unaff_x20 + 0x68) = param_16;
    *(undefined8 *)(unaff_x20 + 0x20) = param_5;
    *(undefined8 *)(unaff_x20 + 0x28) = param_7;
    *(undefined8 *)(unaff_x20 + 0x30) = param_8;
    *(undefined8 *)(unaff_x20 + 0x38) = param_9;
    *(undefined8 *)(unaff_x20 + 0x40) = param_10;
    *(undefined8 *)(unaff_x20 + 0x48) = param_11;
    *(undefined8 *)(unaff_x20 + 0x50) = param_13;
    *(long *)(unaff_x20 + 0x58) = lVar2;
    uVar3 = *(undefined8 *)(param_4 + _DAT_11302e640);
    func_0x000107c61174();
    func_0x000107c61170(param_4);
    *(undefined8 *)(unaff_x20 + 0x70) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x78) = param_12;
    *(undefined8 *)(unaff_x20 + 0x80) = param_14;
    *(undefined8 *)(unaff_x20 + 0x88) = param_15;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102da92e0);
  (*pcVar1)();
}



/* Entry: 102da92e0; end: 102da941f;  */

/* WARNING: Possible PIC construction at 0x000102da92ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da92fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da930c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da931c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da932c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da933c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da934c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102da935c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102da9350) */
/* WARNING: Removing unreachable block (ram,0x000102da9340) */
/* WARNING: Removing unreachable block (ram,0x000102da9330) */
/* WARNING: Removing unreachable block (ram,0x000102da9320) */
/* WARNING: Removing unreachable block (ram,0x000102da9310) */
/* WARNING: Removing unreachable block (ram,0x000102da9300) */
/* WARNING: Removing unreachable block (ram,0x000102da92f0) */
/* WARNING: Removing unreachable block (ram,0x000102da9360) */

void FUN_102da92e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102da9420; end: 102da9443;  */

void FUN_102da9420(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100937060();
  *param_1 = param_2;
  return;
}



/* Entry: 102da9444; end: 102da990b;  */

undefined1  [16] FUN_102da9444(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe0;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f10d690);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f10d5b0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102da9510);
  (*pcVar1)();
}



/* Entry: 102da990c; end: 102da9983; +[SCProfileStreakDataHelpers streakDataFromStreak:friendmojiRegistry:friendmojiDataProvider:] */

void FUN_102da990c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  FUN_102da99f4(param_3,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102da9984; end: 102da99bf; -[SCProfileStreakDataHelpers init] */

void FUN_102da9984(undefined8 param_1)

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



/* Entry: 102da99c0; end: 102da99f3;  */

void FUN_102da99c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102da99f4; end: 102da9bb7;  */

undefined * FUN_102da99f4(undefined8 param_1,ulong param_2,undefined **param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined **ppuVar5;
  long lVar6;
  
  lVar1 = 0;
  ppuVar5 = param_3;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  if (param_2 != 0) {
    func_0x000107c61174();
    uVar2 = param_2;
    func_0x000107c5c0d4();
    if (uVar2 != 0) {
      uVar2 = param_2;
      func_0x000107c49e30();
      if ((int)uVar2 == 0) {
        func_0x000107c42504();
        func_0x000107c61180();
        if (param_3 == (undefined **)0x0) {
          ppuVar3 = (undefined **)0x0;
          ppuVar5 = (undefined **)0xe000000000000000;
        }
        else {
          ppuVar3 = param_3;
          func_0x000107c5faec();
          func_0x000107c61170(param_3);
        }
        uVar2 = param_2;
        func_0x000107c42bcc(param_2);
        func_0x000107c61180();
        func_0x000107c5ee94(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000107c61170(uVar2);
        func_0x000107c5ee8c();
        (**(code **)(lVar6 + 8))
                  (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
        func_0x000107c4a540(param_1,param_4);
      }
      else {
        ppuVar3 = &PTR____CFConstantStringClassReference_110f5ef38;
        func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f5ef38);
      }
      uVar2 = param_2;
      func_0x000107c5c0d4(param_2);
      puVar4 = PTR_PTR_1126b3e38;
      func_0x000107c610f8(PTR_PTR_1126b3e38);
      func_0x000107c5fadc(ppuVar3,ppuVar5);
      func_0x000107c6142c(ppuVar5);
      func_0x000107c46200((double)uVar2,puVar4);
      func_0x000107c61170(param_2);
      func_0x000107c61170(ppuVar3);
      return puVar4;
    }
    func_0x000107c61170(param_2);
  }
  return (undefined *)0x0;
}



/* Entry: 102da9bb8; end: 102da9bd7;  */

void FUN_102da9bb8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a6160);
  return;
}



/* Entry: 102da9bd8; end: 102da9e33;  */

long FUN_102da9bd8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102da9e34; end: 102da9e43; -[_TtC37SCImpalaLegacyBusinessProfileServices37SCImpalaLegacyBusinessProfileServices viewControllerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da9e34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f17700));
  return;
}



/* Entry: 102da9e44; end: 102da9e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da9e44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f17700) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102da9e90; end: 102da9ee7; -[_TtC37SCImpalaLegacyBusinessProfileServices37SCImpalaLegacyBusinessProfileServices initWithViewControllerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da9e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f17700) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102da9ee8; end: 102da9f47; -[_TtC37SCImpalaLegacyBusinessProfileServices37SCImpalaLegacyBusinessProfileServices init] */

void FUN_102da9ee8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaLegacyBusinessProfileServices.SCImpalaLegacyBusinessProfileServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102da9f14);
  (*pcVar1)();
}



/* Entry: 102da9f48; end: 102da9f57; -[_TtC37SCImpalaLegacyBusinessProfileServices37SCImpalaLegacyBusinessProfileServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da9f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f17700));
  return;
}



/* Entry: 102da9f58; end: 102da9f63; -[SCImpalaLegacyBusinessProfileLoggingInfo sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da9f58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f17730))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f17730);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102da9f64; end: 102da9f6f; -[SCImpalaLegacyBusinessProfileLoggingInfo sourcePageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da9f64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f17738))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f17738);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102da9f70; end: 102da9f7b; -[SCImpalaLegacyBusinessProfileLoggingInfo pageEntryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da9f70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f17740))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f17740);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102da9f7c; end: 102da9fd3;  */

void FUN_102da9f7c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102da9fd4; end: 102daa06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102da9fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17730);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17738);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17740);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102daa070; end: 102daa153; -[SCImpalaLegacyBusinessProfileLoggingInfo initWithSourcePageType:sourcePageSessionId:pageEntryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102daa070(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = param_2;
  }
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f17730);
  *plVar1 = param_3;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_112f17738);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112f17740);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102daa154; end: 102daa1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102daa154(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17730);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17738);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17740);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102daa1c0; end: 102daa1c3; -[SCImpalaLegacyBusinessProfileLoggingInfo copyWithZone:] */

void FUN_102daa1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102daa1c4; end: 102daa1df; -[SCImpalaLegacyBusinessProfileLoggingInfo description] */

void FUN_102daa1c4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102daa1e0; end: 102daa25b; -[SCImpalaLegacyBusinessProfileLoggingInfo init] */

void FUN_102daa1e0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCImpalaLegacyBusinessProfileServices/SCImpalaLegacyBusinessProfileLoggingInfoWrapper.swift"
                      ,0x5b,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102daa228);
  (*pcVar1)();
}



/* Entry: 102daa25c; end: 102daa2af; -[SCImpalaLegacyBusinessProfileLoggingInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102daa27c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102daa280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102daa25c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f17730 + 8))
  ;
  return;
}


