/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009a6408; end: 1009a642b;  */

void FUN_1009a6408(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a642c; end: 1009a6e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a642c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1002403c8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_1130265c8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_1130265d0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_1130265d8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_1130265e0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_1130265e8) = param_6;
  *(undefined8 *)(lVar3 + _DAT_1130265f0) = param_7;
  *(undefined8 *)(lVar3 + _DAT_1130265f8) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113026600) = param_9;
  *(undefined8 *)(lVar3 + _DAT_113026608) = param_10;
  *(undefined8 *)(lVar3 + _DAT_113026610) = param_11;
  *(undefined8 *)(lVar3 + _DAT_113026618) = param_12;
  *(undefined8 *)(lVar3 + _DAT_113026620) = param_13;
  *(undefined8 *)(lVar3 + _DAT_113026628) = param_14;
  *(undefined8 *)(lVar3 + _DAT_113026630) = param_15;
  *(undefined8 *)(lVar3 + _DAT_113026638) = param_16;
  *(undefined8 *)(lVar3 + _DAT_113026640) = param_17;
  *(undefined8 *)(lVar3 + _DAT_113026648) = param_18;
  *(undefined8 *)(lVar3 + _DAT_113026650) = param_19;
  *(undefined8 *)(lVar3 + _DAT_113026658) = param_20;
  *(undefined8 *)(lVar3 + _DAT_113026660) = param_21;
  *(undefined8 *)(lVar3 + _DAT_113026668) = param_22;
  *(undefined8 *)(lVar3 + _DAT_113026670) = param_23;
  *(undefined8 *)(lVar3 + _DAT_113026678) = param_24;
  *(undefined8 *)(lVar3 + _DAT_113026680) = param_25;
  *(undefined8 *)(lVar3 + _DAT_113026688) = param_26;
  *(undefined8 *)(lVar3 + _DAT_113026690) = param_27;
  *(undefined8 *)(lVar3 + _DAT_113026698) = param_28;
  *(undefined8 *)(lVar3 + _DAT_1130266a0) = param_29;
  *(undefined8 *)(lVar3 + _DAT_1130266a8) = param_30;
  *(undefined8 *)(lVar3 + _DAT_1130266b0) = param_31;
  *(undefined8 *)(lVar3 + _DAT_1130266b8) = param_32;
  *(undefined8 *)(lVar3 + _DAT_1130266c0) = param_33;
  *(undefined8 *)(lVar3 + _DAT_1130266c8) = param_34;
  *(undefined8 *)(lVar3 + _DAT_1130266d0) = param_35;
  *(undefined8 *)(lVar3 + _DAT_1130266d8) = param_36;
  *(undefined8 *)(lVar3 + _DAT_1130266e0) = param_37;
  *(undefined8 *)(lVar3 + _DAT_1130266e8) = param_38;
  *(undefined8 *)(lVar3 + _DAT_1130266f0) = param_39;
  *(undefined8 *)(lVar3 + _DAT_1130266f8) = param_40;
  *(undefined8 *)(lVar3 + _DAT_113026700) = param_41;
  *(undefined8 *)(lVar3 + _DAT_113026708) = param_42;
  *(undefined8 *)(lVar3 + _DAT_113026710) = param_43;
  *(undefined8 *)(lVar3 + _DAT_113026718) = param_44;
  *(undefined8 *)(lVar3 + _DAT_113026720) = param_45;
  *(undefined8 *)(lVar3 + _DAT_113026728) = param_46;
  *(undefined8 *)(lVar3 + _DAT_113026730) = param_47;
  *(undefined8 *)(lVar3 + _DAT_113026738) = param_48;
  *(undefined8 *)(lVar3 + _DAT_113026740) = param_49;
  *(undefined8 *)(lVar3 + _DAT_113026748) = param_50;
  *(undefined8 *)(lVar3 + _DAT_113026750) = param_51;
  *(undefined8 *)(lVar3 + _DAT_113026758) = param_52;
  *(undefined8 *)(lVar3 + _DAT_113026760) = param_53;
  *(undefined8 *)(lVar3 + _DAT_113026768) = param_54;
  *(undefined8 *)(lVar3 + _DAT_113026770) = param_55;
  *(undefined8 *)(lVar3 + _DAT_113026778) = param_56;
  *(undefined8 *)(lVar3 + _DAT_113026780) = param_57;
  *(undefined8 *)(lVar3 + _DAT_113026788) = param_58;
  *(undefined8 *)(lVar3 + _DAT_113026790) = param_59;
  *(undefined8 *)(lVar3 + _DAT_113026798) = param_60;
  *(undefined8 *)(lVar3 + _DAT_1130267a0) = param_61;
  *(undefined8 *)(lVar3 + _DAT_1130267a8) = param_62;
  *(undefined8 *)(lVar3 + _DAT_1130267b0) = param_63;
  *(undefined8 *)(lVar3 + _DAT_1130267b8) = param_64;
  *(undefined8 *)(lVar3 + _DAT_1130267c0) = param_65;
  *(undefined8 *)(lVar3 + _DAT_1130267c8) = param_66;
  *(undefined8 *)(lVar3 + _DAT_1130267d0) = param_67;
  *(undefined8 *)(lVar3 + _DAT_1130267d8) = param_68;
  *(undefined8 *)(lVar3 + _DAT_1130267e0) = param_69;
  *(undefined8 *)(lVar3 + _DAT_1130267e8) = param_70;
  *(undefined8 *)(lVar3 + _DAT_1130267f0) = param_71;
  *(undefined8 *)(lVar3 + _DAT_1130267f8) = in_stack_000001f0;
  *(undefined8 *)(lVar3 + _DAT_113026800) = in_stack_000001f8;
  *(undefined8 *)(lVar3 + _DAT_113026808) = in_stack_00000200;
  *(undefined8 *)(lVar3 + _DAT_113026810) = in_stack_00000208;
  *(undefined8 *)(lVar3 + _DAT_113026818) = in_stack_00000210;
  *(undefined8 *)(lVar3 + _DAT_113026820) = in_stack_00000218;
  *(undefined8 *)(lVar3 + _DAT_113026828) = in_stack_00000220;
  *(undefined8 *)(lVar3 + _DAT_113026830) = in_stack_00000228;
  *(undefined8 *)(lVar3 + _DAT_113026838) = in_stack_00000230;
  *(undefined8 *)(lVar3 + _DAT_113026840) = in_stack_00000238;
  *(undefined8 *)(lVar3 + _DAT_113026848) = in_stack_00000240;
  *(undefined8 *)(lVar3 + _DAT_113026850) = in_stack_00000248;
  *(undefined8 *)(lVar3 + _DAT_113026858) = in_stack_00000250;
  *(undefined8 *)(lVar3 + _DAT_113026860) = in_stack_00000258;
  *(undefined8 *)(lVar3 + _DAT_113026868) = in_stack_00000260;
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
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a6e1c; end: 1009a6f3f;  */

void FUN_1009a6e1c(void)

{
  long unaff_x20;
  
  FUN_1009a642c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 1009a6f40; end: 1009a722f;  */

void FUN_1009a6f40(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a7230; end: 1009a723b;  */

undefined ** FUN_1009a7230(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a723c; end: 1009a72c7;  */

void FUN_1009a723c(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009a72c8,param_1);
  return;
}



/* Entry: 1009a72c8; end: 1009a72cf;  */

void FUN_1009a72c8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_1009a72d0();
  func_0x000107c613fc();
  func_0x000107c6157c();
  func_0x0001009a7344();
  *param_1 = unaff_x20;
  param_1[1] = &PTR_DAT_1103fcfb8;
  return;
}



/* Entry: 1009a72d0; end: 1009a72ef;  */

void FUN_1009a72d0(void)

{
  func_0x000107c61168(&PTR_PTR_112dc3668);
  return;
}



/* Entry: 1009a72f0; end: 1009a7423;  */

void FUN_1009a72f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1009a72d0();
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x0001009a7344();
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103fcfb8;
  return;
}



/* Entry: 1009a7424; end: 1009a7447;  */

undefined ** FUN_1009a7424(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a7448; end: 1009a74c7;  */

void FUN_1009a7448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11072a7a0;
  func_0x000107c613fc(&UNK_11072a7a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a74c8,puVar1);
  return;
}



/* Entry: 1009a74c8; end: 1009a74cf;  */

void FUN_1009a74c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113039830,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113039830,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11072a838;
  func_0x000107c613fc(&UNK_11072a838,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103f9f5e4;
  FUN_10058fa64(&UNK_103f9f5e4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a74d0; end: 1009a75c7;  */

void FUN_1009a74d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113039830,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113039830,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11072a838;
  func_0x000107c613fc(&UNK_11072a838,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103f9f5e4;
  FUN_10058fa64(&UNK_103f9f5e4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a75c8; end: 1009a75eb;  */

void FUN_1009a75c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a75ec; end: 1009a75fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a75ec(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar10 = &lStack_60;
  lVar8 = lVar1;
  FUN_10021928c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_113039840) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_113039848) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_113039850) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_113039858) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_113039860) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_113039868) = uVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar9;
  lStack_58 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_60,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 1009a75fc; end: 1009a76ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a75fc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10021928c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113039840) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113039848) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113039850) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113039858) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113039860) = param_6;
  *(undefined8 *)(lVar3 + _DAT_113039868) = param_7;
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



/* Entry: 1009a76f0; end: 1009a7767;  */

void FUN_1009a76f0(void)

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



/* Entry: 1009a7768; end: 1009a778b;  */

undefined ** FUN_1009a7768(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a778c; end: 1009a780b;  */

void FUN_1009a778c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11072ac90;
  func_0x000107c613fc(&UNK_11072ac90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a780c,puVar1);
  return;
}



/* Entry: 1009a780c; end: 1009a7813;  */

void FUN_1009a780c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11303af08,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11303af08,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11072ad28;
  func_0x000107c613fc(&UNK_11072ad28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103fa43e8;
  FUN_10058fa64(&UNK_103fa43e8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a7814; end: 1009a790b;  */

void FUN_1009a7814(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11303af08,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11303af08,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11072ad28;
  func_0x000107c613fc(&UNK_11072ad28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103fa43e8;
  FUN_10058fa64(&UNK_103fa43e8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a790c; end: 1009a792f;  */

void FUN_1009a790c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a7930; end: 1009a7c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a7930(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_10023e778();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11303af18) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11303af20) = param_3;
  *(undefined8 *)(lVar3 + _DAT_11303af28) = param_4;
  *(undefined8 *)(lVar3 + _DAT_11303af30) = param_5;
  *(undefined8 *)(lVar3 + _DAT_11303af38) = param_6;
  *(undefined8 *)(lVar3 + _DAT_11303af40) = param_7;
  *(undefined8 *)(lVar3 + _DAT_11303af48) = param_8;
  *(undefined8 *)(lVar3 + _DAT_11303af50) = param_9;
  *(undefined8 *)(lVar3 + _DAT_11303af58) = param_10;
  *(undefined8 *)(lVar3 + _DAT_11303af60) = param_11;
  *(undefined8 *)(lVar3 + _DAT_11303af68) = param_12;
  *(undefined8 *)(lVar3 + _DAT_11303af70) = param_13;
  *(undefined8 *)(lVar3 + _DAT_11303af78) = param_14;
  *(undefined8 *)(lVar3 + _DAT_11303af80) = param_15;
  *(undefined8 *)(lVar3 + _DAT_11303af88) = param_16;
  *(undefined8 *)(lVar3 + _DAT_11303af90) = param_17;
  *(undefined8 *)(lVar3 + _DAT_11303af98) = param_18;
  *(undefined8 *)(lVar3 + _DAT_11303afa0) = param_19;
  *(undefined8 *)(lVar3 + _DAT_11303afa8) = param_20;
  *(undefined8 *)(lVar3 + _DAT_11303afb0) = param_21;
  *(undefined8 *)(lVar3 + _DAT_11303afb8) = param_22;
  *(undefined8 *)(lVar3 + _DAT_11303afc0) = param_23;
  *(undefined8 *)(lVar3 + _DAT_11303afc8) = param_24;
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
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a7c18; end: 1009a7d6b;  */

void FUN_1009a7c18(void)

{
  long unaff_x20;
  
  FUN_1009a7930(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 1009a7d6c; end: 1009a7d93;  */

undefined ** FUN_1009a7d6c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a7d94; end: 1009a7dd3;  */

void FUN_1009a7d94(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a7d78();
  FUN_100082720("MemPlatBackupDependencyEntriesResolvingServicesProviderWrapperScopeInitializationPluginProvider"
                ,0x5f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a7dd4; end: 1009a7ddb;  */

void FUN_1009a7dd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3a208);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a7ddc; end: 1009a7e5f;  */

void FUN_1009a7ddc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3a208,param_2,&UNK_101a3a20c,param_2,&UNK_101a3a234,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a7e60; end: 1009a7e87;  */

undefined ** FUN_1009a7e60(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a7e88; end: 1009a7ec7;  */

void FUN_1009a7e88(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a7e6c();
  FUN_100082720("MemPlatBackupLoggingServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a7ec8; end: 1009a7ecf;  */

void FUN_1009a7ec8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3a40c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a7ed0; end: 1009a7f53;  */

void FUN_1009a7ed0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3a40c,param_2,&UNK_101a3a410,param_2,&UNK_101a3a438,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a7f54; end: 1009a7f77;  */

undefined ** FUN_1009a7f54(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a7f78; end: 1009a7ff7;  */

void FUN_1009a7f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11072ba70;
  func_0x000107c613fc(&UNK_11072ba70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a7ff8,puVar1);
  return;
}



/* Entry: 1009a7ff8; end: 1009a7fff;  */

void FUN_1009a7ff8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11303d4d0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11303d4d0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11072bb08;
  func_0x000107c613fc(&UNK_11072bb08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103fb2958;
  FUN_10058fa64(&UNK_103fb2958,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a8000; end: 1009a80f7;  */

void FUN_1009a8000(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11303d4d0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11303d4d0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11072bb08;
  func_0x000107c613fc(&UNK_11072bb08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103fb2958;
  FUN_10058fa64(&UNK_103fb2958,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a80f8; end: 1009a811b;  */

void FUN_1009a80f8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a811c; end: 1009a83e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a811c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1002405cc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11303d4e0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11303d4e8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_11303d4f0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_11303d4f8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_11303d500) = param_6;
  *(undefined8 *)(lVar3 + _DAT_11303d508) = param_7;
  *(undefined8 *)(lVar3 + _DAT_11303d510) = param_8;
  *(undefined8 *)(lVar3 + _DAT_11303d518) = param_9;
  *(undefined8 *)(lVar3 + _DAT_11303d520) = param_10;
  *(undefined8 *)(lVar3 + _DAT_11303d528) = param_11;
  *(undefined8 *)(lVar3 + _DAT_11303d530) = param_12;
  *(undefined8 *)(lVar3 + _DAT_11303d538) = param_13;
  *(undefined8 *)(lVar3 + _DAT_11303d540) = param_14;
  *(undefined8 *)(lVar3 + _DAT_11303d548) = param_15;
  *(undefined8 *)(lVar3 + _DAT_11303d550) = param_16;
  *(undefined8 *)(lVar3 + _DAT_11303d558) = param_17;
  *(undefined8 *)(lVar3 + _DAT_11303d560) = param_18;
  *(undefined8 *)(lVar3 + _DAT_11303d568) = param_19;
  *(undefined8 *)(lVar3 + _DAT_11303d570) = param_20;
  *(undefined8 *)(lVar3 + _DAT_11303d578) = param_21;
  *(undefined8 *)(lVar3 + _DAT_11303d580) = param_22;
  *(undefined8 *)(lVar3 + _DAT_11303d588) = param_23;
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
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a83e4; end: 1009a8527;  */

void FUN_1009a83e4(void)

{
  long unaff_x20;
  
  FUN_1009a811c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 1009a8528; end: 1009a854f;  */

undefined ** FUN_1009a8528(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a8550; end: 1009a858f;  */

void FUN_1009a8550(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a8534();
  FUN_100082720("MemoriesBackupUploadStoreServiceProviderWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a8590; end: 1009a8597;  */

void FUN_1009a8590(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3a6d8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8598; end: 1009a861b;  */

void FUN_1009a8598(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3a6d8,param_2,&UNK_101a3a6dc,param_2,&UNK_101a3a704,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a861c; end: 1009a8627;  */

undefined ** FUN_1009a861c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a8628; end: 1009a86b3;  */

void FUN_1009a8628(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009a86b4,param_1);
  return;
}



/* Entry: 1009a86b4; end: 1009a86bb;  */

void FUN_1009a86b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101a3a868);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a86bc; end: 1009a873f;  */

void FUN_1009a86bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101a3a868,param_2,FUN_1009a8740,param_2,&UNK_101a3a86c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8740; end: 1009a8767;  */

void FUN_1009a8740(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009a8768; end: 1009a8777;  */

void FUN_1009a8768(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_1002193f4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  FUN_1009a8898(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  FUN_1009a88b8(uStack_58,uVar2,uVar3,uVar4,uStack_78);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 1009a8778; end: 1009a8897;  */

void FUN_1009a8778(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_1002193f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  FUN_1009a8898(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  FUN_1009a88b8(uStack_58,uVar1,uVar2,uVar3,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 1009a8898; end: 1009a88b7;  */

void FUN_1009a8898(void)

{
  func_0x000107c61168(&PTR_PTR_112def4d0);
  return;
}



/* Entry: 1009a88b8; end: 1009a89db;  */

void FUN_1009a88b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a85f0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  func_0x000107c6157c();
  uVar2 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,4,0,0,&UNK_10d9bc450);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574();
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1009a89dc; end: 1009a8a4f; -[SCGrapheneMemoriesDbPurgeMetric2 init] */

undefined1 * FUN_1009a89dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9800;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1009a8a50; end: 1009a8a93;  */

void FUN_1009a8a50(void)

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



/* Entry: 1009a8a94; end: 1009a8abb;  */

undefined ** FUN_1009a8a94(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a8abc; end: 1009a8afb;  */

void FUN_1009a8abc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a8aa0();
  FUN_100082720("MemoriesEncryptedContentManagerHelperServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x5c,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a8afc; end: 1009a8b03;  */

void FUN_1009a8afc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3a98c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8b04; end: 1009a8b87;  */

void FUN_1009a8b04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3a98c,param_2,&UNK_101a3a990,param_2,&UNK_101a3a9b8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8b88; end: 1009a8baf;  */

undefined ** FUN_1009a8b88(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a8bb0; end: 1009a8bef;  */

void FUN_1009a8bb0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a8b94();
  FUN_100082720("MemoriesExperimentServiceProviderWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a8bf0; end: 1009a8bf7;  */

void FUN_1009a8bf0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3ab1c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8bf8; end: 1009a8c7b;  */

void FUN_1009a8bf8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3ab1c,param_2,&UNK_101a3ab20,param_2,&UNK_101a3ab48,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8c7c; end: 1009a8ca3;  */

undefined ** FUN_1009a8c7c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a8ca4; end: 1009a8ce3;  */

void FUN_1009a8ca4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a8c88();
  FUN_100082720("MemoriesExperimentServicesEntryPointWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a8ce4; end: 1009a8ceb;  */

void FUN_1009a8ce4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3ac50);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8cec; end: 1009a8d6f;  */

void FUN_1009a8cec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3ac50,param_2,&UNK_101a3ac54,param_2,&UNK_101a3ac7c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8d70; end: 1009a8d97;  */

undefined ** FUN_1009a8d70(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a8d98; end: 1009a8dd7;  */

void FUN_1009a8d98(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a8d7c();
  FUN_100082720("MemoriesFileManagerServiceProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a8dd8; end: 1009a8ddf;  */

void FUN_1009a8dd8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3add4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8de0; end: 1009a8e63;  */

void FUN_1009a8de0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3add4,param_2,&UNK_101a3add8,param_2,&UNK_101a3ae00,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8e64; end: 1009a8e8b;  */

undefined ** FUN_1009a8e64(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a8e8c; end: 1009a8ecb;  */

void FUN_1009a8e8c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a8e70();
  FUN_100082720("MemoriesFriendshipFlashbackDatabaseServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x5a,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a8ecc; end: 1009a8ed3;  */

void FUN_1009a8ecc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3aefc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8ed4; end: 1009a8f57;  */

void FUN_1009a8ed4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3aefc,param_2,&UNK_101a3af00,param_2,&UNK_101a3af28,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8f58; end: 1009a8f7f;  */

undefined ** FUN_1009a8f58(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a8f80; end: 1009a8fbf;  */

void FUN_1009a8f80(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a8f64();
  FUN_100082720("MemoriesInvalidStreamingContentRemovalServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x5d,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a8fc0; end: 1009a8fc7;  */

void FUN_1009a8fc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3b08c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a8fc8; end: 1009a904b;  */

void FUN_1009a8fc8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3b08c,param_2,&UNK_101a3b090,param_2,&UNK_101a3b0b8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a904c; end: 1009a9073;  */

undefined ** FUN_1009a904c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a9074; end: 1009a90b3;  */

void FUN_1009a9074(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a9058();
  FUN_100082720("MemoriesMonetizationServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a90b4; end: 1009a90bb;  */

void FUN_1009a90b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3b240);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a90bc; end: 1009a913f;  */

void FUN_1009a90bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3b240,param_2,&UNK_101a3b244,param_2,&UNK_101a3b26c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a9140; end: 1009a9167;  */

undefined ** FUN_1009a9140(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a9168; end: 1009a91a7;  */

void FUN_1009a9168(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a914c();
  FUN_100082720("MemoriesNetworkingServiceProviderWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a91a8; end: 1009a91af;  */

void FUN_1009a91a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3b610);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a91b0; end: 1009a9233;  */

void FUN_1009a91b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3b610,param_2,&UNK_101a3b614,param_2,&UNK_101a3b63c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a9234; end: 1009a925b;  */

undefined ** FUN_1009a9234(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a925c; end: 1009a929b;  */

void FUN_1009a925c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a9240();
  FUN_100082720("MemoriesOpportunisticRetranscodeBitrateHelpingServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x65,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a929c; end: 1009a92a3;  */

void FUN_1009a929c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3b874);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a92a4; end: 1009a9327;  */

void FUN_1009a92a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3b874,param_2,&UNK_101a3b878,param_2,&UNK_101a3b8a0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a9328; end: 1009a934f;  */

undefined ** FUN_1009a9328(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a9350; end: 1009a938f;  */

void FUN_1009a9350(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a9334();
  FUN_100082720("MemoriesShakeToReportLoggingRepositoryServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x5d,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a9390; end: 1009a9397;  */

void FUN_1009a9390(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3bad8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a9398; end: 1009a941b;  */

void FUN_1009a9398(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3bad8,param_2,&UNK_101a3badc,param_2,&UNK_101a3bb04,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a941c; end: 1009a9443;  */

undefined ** FUN_1009a941c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a9444; end: 1009a9483;  */

void FUN_1009a9444(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a9428();
  FUN_100082720("MemoriesSnapDocSerializationServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a9484; end: 1009a948b;  */

void FUN_1009a9484(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3bd04);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a948c; end: 1009a950f;  */

void FUN_1009a948c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a3bd04,param_2,&UNK_101a3bd08,param_2,&UNK_101a3bd30,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a9510; end: 1009a9537;  */

undefined ** FUN_1009a9510(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a9538; end: 1009a9577;  */

void FUN_1009a9538(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a951c();
  FUN_100082720("MemoriesSnapDocValidationServiceProviderWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}


