/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007aa388; end: 1007aa3bb;  */

void FUN_1007aa388(void)

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



/* Entry: 1007aa3bc; end: 1007aa3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007aa3bc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_100375064();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fac418) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1007aa3c4; end: 1007aa497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007aa3c4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100375064();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fac418) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1007aa498; end: 1007ab117;  */

/* WARNING: Possible PIC construction at 0x0001007aac88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aac98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aacb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aacc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aacd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aace8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aacf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aad18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aad28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aad38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aad48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aad58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aad68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aad78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aad88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aad98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aada8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aadb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aadc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aadd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aade8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aadf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aae08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aae18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aae28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aae38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aae48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aae58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aae68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aae78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aae88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aae98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaeb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaf08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaf18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaf28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaf38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaf48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaf58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaf68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaf78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaf88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaf98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aafa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aafb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aafc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aafd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aafe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007aaff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab0a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab0b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007ab0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007ab0dc) */
/* WARNING: Removing unreachable block (ram,0x0001007ab0cc) */
/* WARNING: Removing unreachable block (ram,0x0001007ab0bc) */
/* WARNING: Removing unreachable block (ram,0x0001007ab0ac) */
/* WARNING: Removing unreachable block (ram,0x0001007ab09c) */
/* WARNING: Removing unreachable block (ram,0x0001007ab08c) */
/* WARNING: Removing unreachable block (ram,0x0001007ab07c) */
/* WARNING: Removing unreachable block (ram,0x0001007ab06c) */
/* WARNING: Removing unreachable block (ram,0x0001007ab05c) */
/* WARNING: Removing unreachable block (ram,0x0001007ab04c) */
/* WARNING: Removing unreachable block (ram,0x0001007ab03c) */
/* WARNING: Removing unreachable block (ram,0x0001007ab02c) */
/* WARNING: Removing unreachable block (ram,0x0001007ab01c) */
/* WARNING: Removing unreachable block (ram,0x0001007ab00c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaffc) */
/* WARNING: Removing unreachable block (ram,0x0001007aafec) */
/* WARNING: Removing unreachable block (ram,0x0001007aafdc) */
/* WARNING: Removing unreachable block (ram,0x0001007aafcc) */
/* WARNING: Removing unreachable block (ram,0x0001007aafbc) */
/* WARNING: Removing unreachable block (ram,0x0001007aafac) */
/* WARNING: Removing unreachable block (ram,0x0001007aaf9c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaf8c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaf7c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaf6c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaf5c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaf4c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaf3c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaf2c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaf1c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaf0c) */
/* WARNING: Removing unreachable block (ram,0x0001007aaefc) */
/* WARNING: Removing unreachable block (ram,0x0001007aaeec) */
/* WARNING: Removing unreachable block (ram,0x0001007aaedc) */
/* WARNING: Removing unreachable block (ram,0x0001007aaecc) */
/* WARNING: Removing unreachable block (ram,0x0001007aaebc) */
/* WARNING: Removing unreachable block (ram,0x0001007aaeac) */
/* WARNING: Removing unreachable block (ram,0x0001007aae9c) */
/* WARNING: Removing unreachable block (ram,0x0001007aae8c) */
/* WARNING: Removing unreachable block (ram,0x0001007aae7c) */
/* WARNING: Removing unreachable block (ram,0x0001007aae6c) */
/* WARNING: Removing unreachable block (ram,0x0001007aae5c) */
/* WARNING: Removing unreachable block (ram,0x0001007aae4c) */
/* WARNING: Removing unreachable block (ram,0x0001007aae3c) */
/* WARNING: Removing unreachable block (ram,0x0001007aae2c) */
/* WARNING: Removing unreachable block (ram,0x0001007aae1c) */
/* WARNING: Removing unreachable block (ram,0x0001007aae0c) */
/* WARNING: Removing unreachable block (ram,0x0001007aadfc) */
/* WARNING: Removing unreachable block (ram,0x0001007aadec) */
/* WARNING: Removing unreachable block (ram,0x0001007aaddc) */
/* WARNING: Removing unreachable block (ram,0x0001007aadcc) */
/* WARNING: Removing unreachable block (ram,0x0001007aadbc) */
/* WARNING: Removing unreachable block (ram,0x0001007aadac) */
/* WARNING: Removing unreachable block (ram,0x0001007aad9c) */
/* WARNING: Removing unreachable block (ram,0x0001007aad8c) */
/* WARNING: Removing unreachable block (ram,0x0001007aad7c) */
/* WARNING: Removing unreachable block (ram,0x0001007aad6c) */
/* WARNING: Removing unreachable block (ram,0x0001007aad5c) */
/* WARNING: Removing unreachable block (ram,0x0001007aad4c) */
/* WARNING: Removing unreachable block (ram,0x0001007aad3c) */
/* WARNING: Removing unreachable block (ram,0x0001007aad2c) */
/* WARNING: Removing unreachable block (ram,0x0001007aad1c) */
/* WARNING: Removing unreachable block (ram,0x0001007aad0c) */
/* WARNING: Removing unreachable block (ram,0x0001007aacfc) */
/* WARNING: Removing unreachable block (ram,0x0001007aacec) */
/* WARNING: Removing unreachable block (ram,0x0001007aacdc) */
/* WARNING: Removing unreachable block (ram,0x0001007aaccc) */
/* WARNING: Removing unreachable block (ram,0x0001007aacbc) */
/* WARNING: Removing unreachable block (ram,0x0001007aacac) */
/* WARNING: Removing unreachable block (ram,0x0001007aac9c) */
/* WARNING: Removing unreachable block (ram,0x0001007aac8c) */
/* WARNING: Removing unreachable block (ram,0x0001007ab0ec) */

void FUN_1007aa498(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar2;
  undefined *puVar3;
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
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  
  puVar1 = &UNK_1104ed000;
  func_0x000107c613fc(&UNK_1104ed000,0x488,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_000003f8;
  *(undefined8 *)(puVar1 + 0x450) = in_stack_00000400;
  *(undefined8 *)(puVar1 + 0x458) = in_stack_00000408;
  *(undefined8 *)(puVar1 + 0x460) = in_stack_00000410;
  *(undefined8 *)(puVar1 + 0x468) = in_stack_00000418;
  *(undefined8 *)(puVar1 + 0x470) = in_stack_00000420;
  *(undefined8 *)(puVar1 + 0x478) = in_stack_00000428;
  *(undefined8 *)(puVar1 + 0x480) = in_stack_00000430;
  uVar2 = 0x112e77e98;
  FUN_1000285a8(0x112e77e98,&UNK_10da81298);
  func_0x000107c613fc();
  puVar3 = &UNK_10227fa30;
  FUN_1000841f8(&UNK_10227fa30,puVar1,uVar2);
  FUN_100084214(&UNK_10da81270,0x26,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1007ab118; end: 1007ab11b;  */

void FUN_1007ab118(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007ab11c; end: 1007ab3af;  */

void FUN_1007ab11c(void)

{
  long unaff_x20;
  
  FUN_1007aa498(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 1007ab3b0; end: 1007ab3b3;  */

void FUN_1007ab3b0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007ab3b4; end: 1007ab847;  */

void FUN_1007ab3b4(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007ab848; end: 1007ab84b;  */

void FUN_1007ab848(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1007ab84c; end: 1007abb13; -[SCCameraToGallerySwipeTransitionCoordinatorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ab84c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126c8e50;
  func_0x000107c610f4();
  if (param_1 == 0) {
    func_0x000107c61174(0);
    uStack_68 = 0;
    uVar15 = 0;
    lVar9 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + _DAT_112743538);
    func_0x000107c61174(uVar15);
    uStack_68 = param_1 + _DAT_11274353c;
    func_0x000107c61148();
    lVar9 = param_1 + _DAT_11274351c;
    func_0x000107c61148();
  }
  lVar2 = lVar9;
  func_0x000107c4cb28();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112743518;
    func_0x000107c61148();
  }
  lVar3 = lVar10;
  func_0x000107c5af78();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112743528;
    func_0x000107c61148();
  }
  lVar4 = lVar11;
  func_0x000107c4e288();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112743520;
    func_0x000107c61148();
  }
  lVar5 = lVar12;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112743524;
    func_0x000107c61148();
  }
  lVar6 = lVar13;
  func_0x000107c4cca0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11274352c;
    func_0x000107c61148();
  }
  lVar7 = lVar14;
  func_0x000107c4cb88();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar16 = 0;
    param_1 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112743530;
    func_0x000107c61148();
    param_1 = param_1 + _DAT_112743534;
    func_0x000107c61148();
  }
  func_0x000107c47734(puVar1,param_2,uVar15,uStack_68,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar16,
                      param_1);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uStack_68);
  puVar8 = PTR_PTR_1126c8e58;
  func_0x000107c610f4(PTR_PTR_1126c8e58);
  func_0x000107c45c58();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1007abb14; end: 1007abb1b; -[SCMemoriesBackupService memoriesBackupManager] */

undefined8 FUN_1007abb14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007abb1c; end: 1007abb27; -[_TtC17SCMainCameraScope17SCMainCameraScope sigViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007abb1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130766b8;
  func_0x000107c61428(param_1 + _DAT_1130766b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007abb28; end: 1007abb6b;  */

void FUN_1007abb28(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007abb6c; end: 1007abb7b; -[_TtC26SCMemoriesSnapFeedServices26SCMemoriesSnapFeedServices memoriesSnapFeedManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007abb6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fda3b8));
  return;
}



/* Entry: 1007abb7c; end: 1007abdbb; -[SCCameraToGallerySwipeTransitionCoordinatorFactoryImpl initWithMemoriesScopeExposer:memoriesScopeServices:memoriesBackupManager:viewController:pageLoadMetricManager:circumstanceEngine:memoriesSnapFeedManager:memoriesExperimentService:memoriesTweaksServices:memTwoLandingPageScopeFactoryServices:] */

undefined8 *
FUN_1007abb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126f0728;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007abdbc; end: 1007abe2f; -[SCCameraToGallerySwipeTransitionCoordinatorServices initWithCameraToGallerySwipeTransitionCoordinatorFactory:] */

undefined1 * FUN_1007abdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8350;
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



/* Entry: 1007abe30; end: 1007abe33;  */

void FUN_1007abe30(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007abe34; end: 1007abe9f;  */

void FUN_1007abe34(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007abea0; end: 1007abeaf; -[SCCameraToGallerySwipeTransitionCoordinatorServices cameraToGallerySwipeTransitionCoordinatorFactory] */

undefined8 FUN_1007abea0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007abeb0; end: 1007abf03;  */

void FUN_1007abeb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007abf04; end: 1007abf0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007abf04(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e38;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6e38);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007abfb0;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007abfb0:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6e38;
    FUN_1000285a8(0x112ed6e38,&UNK_10db01520);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad108;
      func_0x000107c610f8();
      func_0x000107c45c4c();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000041,0x800000010f142180);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ac070);
  (*pcVar1)();
}



/* Entry: 1007abf0c; end: 1007ac06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007abf0c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e38;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6e38);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007abfb0;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007abfb0:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6e38;
    FUN_1000285a8(0x112ed6e38,&UNK_10db01520);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad108;
      func_0x000107c610f8();
      func_0x000107c45c4c();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000041,0x800000010f142180);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ac070);
  (*pcVar1)();
}



/* Entry: 1007ac070; end: 1007ac0e3; -[SCMainCameraScopedCameraSnapModelServices initWithCameraSnapModelServices:] */

undefined1 * FUN_1007ac070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f84a0;
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



/* Entry: 1007ac0e4; end: 1007ac0f3; -[SCMainCameraScopedCameraSnapModelServices cameraSnapModelServices] */

undefined8 FUN_1007ac0e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007ac0f4; end: 1007ac257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ac0f4(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e20;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6e20);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007ac198;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007ac198:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6e20;
    FUN_1000285a8(0x112ed6e20,&UNK_10db87b20);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad0e8;
      func_0x000107c610f8();
      func_0x000107c45bb8();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004f,0x800000010f141fa0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ac258);
  (*pcVar1)();
}



/* Entry: 1007ac258; end: 1007ac2cb; -[SCMainCameraScopedCameraDeviceSettingsResolverServices initWithCameraDeviceSettingsResolverServices:] */

undefined1 * FUN_1007ac258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a450;
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



/* Entry: 1007ac2cc; end: 1007ac2db; -[SCMainCameraScopedCameraDeviceSettingsResolverServices cameraDeviceSettingsResolverServices] */

undefined8 FUN_1007ac2cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007ac2dc; end: 1007ac43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ac2dc(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6cb0;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6cb0);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007ac380;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007ac380:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6cb0;
    FUN_1000285a8(0x112ed6cb0,&UNK_10db013a0);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad150;
      func_0x000107c610f8();
      func_0x000107c47210();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000047,0x800000010f1426d0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ac440);
  (*pcVar1)();
}



/* Entry: 1007ac440; end: 1007ac447;  */

void FUN_1007ac440(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007ac448; end: 1007ac49b;  */

void FUN_1007ac448(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007ac49c; end: 1007ac4a3;  */

void FUN_1007ac49c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001005c3464();
  func_0x000107c613fc();
  func_0x0001007ac504(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1007ac4a4; end: 1007ac5d3;  */

void FUN_1007ac4a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001005c3464();
  func_0x000107c613fc();
  func_0x0001007ac504(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1007ac5d4; end: 1007ac62f; -[SCLensCollectionTabBarServiceProvider provide] */

void FUN_1007ac5d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110914a98);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c8990;
  func_0x000107c610f4(PTR_PTR_1126c8990);
  func_0x000107c4720c();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007ac630; end: 1007ac6a3; -[SCLensCollectionTabBarServices initWithLensCollectionTabBarObserver:] */

undefined1 * FUN_1007ac630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f63d0;
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



/* Entry: 1007ac6a4; end: 1007ac717; -[SCMainCameraScopedLensCollectionTabBarServices initWithLensCollectionTabBarServices:] */

undefined1 * FUN_1007ac6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f63d8;
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



/* Entry: 1007ac718; end: 1007ac71f; -[SCMainCameraScopedLensCollectionTabBarServices lensCollectionTabBarServices] */

undefined8 FUN_1007ac718(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007ac720; end: 1007ac783; -[SCLensCollectionTabBarServices lensCollectionTabBarObserver] */

undefined8 FUN_1007ac720(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007ac784; end: 1007ac8e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ac784(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6ef0;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6ef0);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007ac828;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007ac828:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6ef0;
    FUN_1000285a8(0x112ed6ef0,&UNK_10dbb6970);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad0f8;
      func_0x000107c610f8();
      func_0x000107c471a0();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004b,0x800000010f1420e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ac8e8);
  (*pcVar1)();
}



/* Entry: 1007ac8e8; end: 1007ac8ef;  */

void FUN_1007ac8e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007ac8f0; end: 1007ac943;  */

void FUN_1007ac8f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007ac944; end: 1007ac94f;  */

void FUN_1007ac944(void)

{
  long unaff_x20;
  
  FUN_1007ac950(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1007ac950; end: 1007ace53;  */

void FUN_1007ac950(long *param_1,long param_2)

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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  func_0x0001005c70c0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126abcf8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0dbc00);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef23640);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  uVar10 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(param_2 + 0x50) = uVar10;
  *param_1 = param_2;
  return;
}



/* Entry: 1007ace54; end: 1007ad133; -[SCLensAlwaysOnMediaPickerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ace54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  if (param_1 == 0) {
    lStack_138 = 0;
    lVar10 = 0;
    lVar9 = 0;
    lVar12 = 0;
    lVar11 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11273efec;
    func_0x000107c61148();
    lVar10 = param_1 + _DAT_11273eff4;
    func_0x000107c61148();
    lVar12 = param_1 + _DAT_11273eff8;
    func_0x000107c61148();
    lStack_138 = param_1 + _DAT_11273effc;
    func_0x000107c61148();
    lVar11 = param_1 + _DAT_11273f000;
    func_0x000107c61148();
  }
  lVar1 = lVar11;
  func_0x000107c3de48();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11273eff0;
    func_0x000107c61148();
  }
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1060d0480;
  puStack_88 = &UNK_110857438;
  puVar2 = PTR_PTR_1126ae720;
  lStack_80 = lVar9;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_a0);
  func_0x000107c61180();
  puStack_c8 = puVar5;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_1060d04dc;
  puStack_b0 = &UNK_11090d800;
  puVar3 = PTR_PTR_1126ae720;
  puStack_a8 = puVar2;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_c8);
  func_0x000107c61180();
  puStack_100 = puVar5;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_1060d050c;
  puStack_e8 = &UNK_11090d830;
  lStack_d0 = lStack_138;
  puVar4 = PTR_PTR_1126ae720;
  lStack_e0 = lVar10;
  lStack_d8 = lVar12;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_100);
  func_0x000107c61180();
  puStack_130 = puVar5;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_1060d05d0;
  puStack_118 = &UNK_11090d860;
  puVar5 = PTR_PTR_1126ae720;
  lStack_110 = lVar1;
  lStack_108 = lVar11;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_130);
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11273efe8;
    func_0x000107c61148(param_1);
  }
  lVar6 = param_1;
  func_0x000107c45198(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar7 = PTR_PTR_1126c7c98;
  func_0x000107c610f4(PTR_PTR_1126c7c98);
  puVar8 = PTR_PTR_1126c7ca0;
  func_0x000107c61160(PTR_PTR_1126c7ca0);
  func_0x000107c45680(puVar7,param_2,puVar3,puVar4,puVar5,puVar8,lVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lStack_138);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1007ad134; end: 1007ad143; -[SCImagineLensServices imagineLensServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ad134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082a80));
  return;
}



/* Entry: 1007ad144; end: 1007ad267; -[SCLensAlwaysOnMediaPickerServices initWithAlwaysOnMediaToggleContainerManager:alwaysOnMediaPickerLogger:alwaysOnMediaPickerConfiguration:supportedDeviceProviding:imagineLensService:] */

undefined1 *
FUN_1007ad144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112701100;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007ad268; end: 1007ad2db; -[SCMainCameraScopedLensAlwaysOnMediaPickerServices initWithLensAlwaysOnMediaPickerServices:] */

undefined1 * FUN_1007ad268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701110;
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



/* Entry: 1007ad2dc; end: 1007ad2eb; -[SCMainCameraScopedLensAlwaysOnMediaPickerServices lensAlwaysOnMediaPickerServices] */

undefined8 FUN_1007ad2dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007ad2ec; end: 1007ad33f;  */

void FUN_1007ad2ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007ad340; end: 1007ad347;  */

void FUN_1007ad340(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1005b62e4();
  func_0x000107c613fc();
  func_0x0001007ad3a8(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1007ad348; end: 1007ad477;  */

void FUN_1007ad348(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1005b62e4();
  func_0x000107c613fc();
  func_0x0001007ad3a8(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1007ad478; end: 1007ad47f; -[SCAUserSessionScopeStart getEventQoS] */

undefined8 FUN_1007ad478(void)

{
  return 1;
}



/* Entry: 1007ad480; end: 1007ad563; -[SCDirectorModeServiceProvider provide] */

void FUN_1007ad480(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c8dc0;
  func_0x000107c610f4(PTR_PTR_1126c8dc0);
  func_0x000107c4659c();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007ad564; end: 1007ad5d7; -[SCDirectorModeService initWithDirectorModeService:] */

undefined1 * FUN_1007ad564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f0698;
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



/* Entry: 1007ad5d8; end: 1007ad5e7; -[SCDirectorModeService directorModeActivator] */

undefined8 FUN_1007ad5d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007ad5e8; end: 1007ad767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ad5e8(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6d80;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6d80);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007ad68c;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007ad68c:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6d80;
    FUN_1000285a8(0x112ed6d80,&UNK_10db06e30);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      lVar2 = alStack_50[0];
      func_0x000107c4ae28(alStack_50[0]);
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      puVar5 = PTR_PTR_1126ad148;
      func_0x000107c610f8();
      func_0x000107c471ac();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar2);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000041,0x800000010f142680);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ad768);
  (*pcVar1)();
}



/* Entry: 1007ad768; end: 1007ad7db; -[SCMainCameraScopedLensCTAHandlingServices initWithLensCTAHandlingServices:] */

undefined1 * FUN_1007ad768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a828;
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



/* Entry: 1007ad7dc; end: 1007ad7eb; -[SCMainCameraScopedLensCTAHandlingServices lensCTAHandlingServices] */

undefined8 FUN_1007ad7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007ad7ec; end: 1007ad83f;  */

void FUN_1007ad7ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007ad840; end: 1007ad847;  */

void FUN_1007ad840(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1001dfb04();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1007ad92c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_1007ad9a8();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_1007ad9d0();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007ad848; end: 1007ad92b;  */

void FUN_1007ad848(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1001dfb04();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1007ad92c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1007ad9a8();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_1007ad9d0();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1007ad92c; end: 1007ad9a7;  */

void FUN_1007ad92c(undefined8 param_1)

{
  if (lRam0000000112de7870 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6653e4);
  return;
}



/* Entry: 1007ad9a8; end: 1007ad9cf;  */

void FUN_1007ad9a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1007ad9d0; end: 1007adaeb;  */

undefined * FUN_1007ad9d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  FUN_1000285a8(0x112d6e3a8,&UNK_10d930310);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_1000bda74();
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_40 = &UNK_1019ddde0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1019ddde8;
  puStack_48 = &UNK_110428268;
  uStack_38 = uVar2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126a8400;
  func_0x000107c610f8(PTR_PTR_1126a8400);
  func_0x000107c46224();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(puVar3);
  return puVar5;
}



/* Entry: 1007adaec; end: 1007adaff;  */

void FUN_1007adaec(long param_1,long param_2)

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



/* Entry: 1007adb00; end: 1007adb73; -[SCLensCrashFuseServices initWithCrashFuser:] */

undefined1 * FUN_1007adb00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f0270;
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



/* Entry: 1007adb74; end: 1007adb9f;  */

void FUN_1007adb74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007adba0; end: 1007adba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007adba0(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e80;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6e80);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007adc4c;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007adc4c:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6e80;
    FUN_1000285a8(0x112ed6e80,&UNK_10db01568);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad100;
      func_0x000107c610f8();
      func_0x000107c45c30();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000048,0x800000010f142130);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007add0c);
  (*pcVar1)();
}



/* Entry: 1007adba8; end: 1007add0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007adba8(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e80;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6e80);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007adc4c;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007adc4c:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6e80;
    FUN_1000285a8(0x112ed6e80,&UNK_10db01568);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad100;
      func_0x000107c610f8();
      func_0x000107c45c30();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000048,0x800000010f142130);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007add0c);
  (*pcVar1)();
}



/* Entry: 1007add0c; end: 1007add7f; -[SCMainCameraScopedCameraPreviewPresenterServices initWithCameraPreviewPresenterServices:] */

undefined1 * FUN_1007add0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fe2f8;
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



/* Entry: 1007add80; end: 1007add8f; -[SCMainCameraScopedCameraPreviewPresenterServices cameraPreviewPresenterServices] */

undefined8 FUN_1007add80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007add90; end: 1007adef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007add90(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6bc8;
    uVar5 = 0;
    FUN_1000285a8(0x112ed6bc8);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007ade34;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007ade34:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6bc8;
    FUN_1000285a8(0x112ed6bc8,&UNK_10dbb6960);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b67a0(0);
      func_0x000107c610f8();
      FUN_1007adef8(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000046,0x800000010f142030);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007adef8);
  (*pcVar1)();
}



/* Entry: 1007adef8; end: 1007adf43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007adef8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fe9ee0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007adf44; end: 1007adf4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007adf44(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6ed8;
    uVar5 = 0;
    FUN_1000285a8(0x112ed6ed8);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007adff0;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007adff0:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6ed8;
    FUN_1000285a8(0x112ed6ed8,&UNK_10db015c0);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6be4(0);
      func_0x000107c610f8();
      FUN_1007ae0b4(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000003c,0x800000010f142640);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ae0b4);
  (*pcVar1)();
}



/* Entry: 1007adf4c; end: 1007ae0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007adf4c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6ed8;
    uVar5 = 0;
    FUN_1000285a8(0x112ed6ed8);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007adff0;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007adff0:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6ed8;
    FUN_1000285a8(0x112ed6ed8,&UNK_10db015c0);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6be4(0);
      func_0x000107c610f8();
      FUN_1007ae0b4(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000003c,0x800000010f142640);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ae0b4);
  (*pcVar1)();
}



/* Entry: 1007ae0b4; end: 1007ae0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ae0b4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113036328) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007ae100; end: 1007ae107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ae100(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6d40;
    uVar5 = 0;
    FUN_1000285a8(0x112ed6d40);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007ae1ac;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007ae1ac:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6d40;
    FUN_1000285a8(0x112ed6d40,&UNK_10db01428);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6890(0);
      func_0x000107c610f8();
      FUN_1007ae270(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000059,0x800000010f1425e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ae270);
  (*pcVar1)();
}



/* Entry: 1007ae108; end: 1007ae26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ae108(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6d40;
    uVar5 = 0;
    FUN_1000285a8(0x112ed6d40);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007ae1ac;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007ae1ac:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6d40;
    FUN_1000285a8(0x112ed6d40,&UNK_10db01428);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6890(0);
      func_0x000107c610f8();
      FUN_1007ae270(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000059,0x800000010f1425e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ae270);
  (*pcVar1)();
}



/* Entry: 1007ae270; end: 1007ae2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ae270(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113038d90) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007ae2bc; end: 1007ae2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ae2bc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ee4048;
    uVar5 = 0;
    FUN_1000285a8(0x112ee4048);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007ae368;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007ae368:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ee4048;
    FUN_1000285a8(0x112ee4048,&UNK_10db0f0b0);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6908(0);
      func_0x000107c610f8();
      FUN_1007ae42c(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000003d,0x800000010f1428c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ae42c);
  (*pcVar1)();
}



/* Entry: 1007ae2c4; end: 1007ae42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ae2c4(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ee4048;
    uVar5 = 0;
    FUN_1000285a8(0x112ee4048);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007ae368;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007ae368:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ee4048;
    FUN_1000285a8(0x112ee4048,&UNK_10db0f0b0);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6908(0);
      func_0x000107c610f8();
      FUN_1007ae42c(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000003d,0x800000010f1428c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ae42c);
  (*pcVar1)();
}



/* Entry: 1007ae42c; end: 1007ae477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ae42c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f5cde0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007ae478; end: 1007af29f; -[SCCameraMainCameraFeatureProviderPluginWorkflow initWithPrivateFeatureContainer:cameraUIScope:cameraUIServices:mainCameraScope:applicationLifecycleEvents:userSession:footerItem:memoriesRecentThumbnailProvidingServices:memoriesSideButtonStateProvidingServices:cameraConfigurationServices:userPreferenceTimeProviderServices:grapheneServices:featureSettingsServices:circumstanceEngine:coreCameraLogger:cameraSnapCreationLogger:cameraActivePathServices:cameraHardwareServices:cameraRequestHandlerServices:cameraViewfinderServices:snapVideoFilterServices:lazyUserTrackedLogger:legacyCameraTooltipsService:valdiRuntimeProvider:captureServiceScopeExposer:galleryLogger:lensCarouselStudySettingsServices:lensCarouselSettingsServices:directorModeLaunchServices:directorModeScopeServices:featureUpdateEventSubject:userStorageServices:contentDeliveryServices:lensProcessingLensModeServices:mainCameraPresentationServices:lensCarouselProcessingServices:lensCarouselFeatureServices:galleryTransitionCoordinatorFactory:memoriesTransitionCoordinatorProvider:navigationLogger:legacyMemoriesNavigationServices:memoriesNavigationServices:cameraFeaturePerformanceFeatureScopedLoggerFactory:deepLinkHandlingServices:snapDocManagerServices:cameraSnapModelServices:snapDocThumbnailServices:cameraUserLoggingServices:cameraDeviceSettingsResolver:locationProvider:currentPageTracker:memoriesExperimentService:memoriesUserDefaultsManager:lensCollectionTabBarObserver:plusServices:plusSubcriberScopeExposer:previewScopeExposer:sendflowScopeExposer:previewFilterDataProviderFactory:mainTabNavigationServices:snapDocEditorServices:alwaysOnMediaPickerServices:directorModeActivator:lensCTAHandlingServices:lensCrashFuseServices:tinsel:appStartExperimentReader:cameraPreviewPresenterServices:cameraModeActivationServices:imagineLensServices:lensPlusServices:lensCarouselOnCameraScopeDataProvider:cameraCircumstanceEngineServices:lensPlusSnapDocRecordProvider:] */

undefined8 *
FUN_1007ae478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  func_0x000107c61174(param_49);
  func_0x000107c61174(param_50);
  func_0x000107c61174(param_51);
  func_0x000107c61174(param_52);
  func_0x000107c61174(param_53);
  func_0x000107c61174(param_54);
  func_0x000107c61174(param_55);
  func_0x000107c61174(param_56);
  func_0x000107c61174(param_57);
  func_0x000107c61174(param_58);
  func_0x000107c61174(param_59);
  func_0x000107c61174(param_60);
  func_0x000107c61174(param_61);
  func_0x000107c61174(param_62);
  func_0x000107c61174(param_63);
  func_0x000107c61174(param_64);
  func_0x000107c61174(param_65);
  func_0x000107c61174(param_66);
  func_0x000107c61174(param_67);
  func_0x000107c61174(param_68);
  func_0x000107c61174(param_69);
  func_0x000107c61174(param_70);
  func_0x000107c61174(in_stack_000001f0);
  func_0x000107c61174(in_stack_000001f8);
  func_0x000107c61174(in_stack_00000200);
  func_0x000107c61174(in_stack_00000208);
  func_0x000107c61174(in_stack_00000210);
  func_0x000107c61174(in_stack_00000218);
  puStack_70 = PTR_PTR_1126efd98;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_6;
    func_0x000107c61170(uVar2);
    uVar2 = param_6;
    func_0x000107c5c500(param_6);
    func_0x000107c61180();
    func_0x000107c611a0(puVar1 + 0x1d,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[8];
    puVar1[8] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_45);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_45;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x53,param_3);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_26;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_27;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_28);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_28;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_29);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_29;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_32;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_35);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_35;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_36);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_36;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_38);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_38;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_39);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_39;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_37);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_37;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_40);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_40;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_41);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_41;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_42);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_42;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_43);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_43;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_44);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_44;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_46);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_46;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_48);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_48;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_47);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_47;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_49);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_49;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_50);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_50;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_51);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_51;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_52);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_52;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_53);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_53;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_54);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_54;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_55);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_55;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000208);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = in_stack_00000208;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_56);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_56;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_57);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_57;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_62);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_62;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_63);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_63;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_59);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_59;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_60);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_60;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_61);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_61;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_58);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_58;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_64);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_64;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_65);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_65;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_66);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_66;
    func_0x000107c61170(uVar2);
    uVar2 = param_67;
    func_0x000107c408c4();
    func_0x000107c61180();
    uVar3 = puVar1[0x43];
    puVar1[0x43] = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_68);
    uVar2 = puVar1[0x4a];
    puVar1[0x4a] = param_68;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_69);
    uVar2 = puVar1[0x4b];
    puVar1[0x4b] = param_69;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_70);
    uVar2 = puVar1[0x4c];
    puVar1[0x4c] = param_70;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_000001f0);
    uVar2 = puVar1[0x4d];
    puVar1[0x4d] = in_stack_000001f0;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_000001f8);
    uVar2 = puVar1[0x4f];
    puVar1[0x4f] = in_stack_000001f8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000200);
    uVar2 = puVar1[0x50];
    puVar1[0x50] = in_stack_00000200;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000210);
    uVar2 = puVar1[0x51];
    puVar1[0x51] = in_stack_00000210;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000218);
    uVar2 = puVar1[0x52];
    puVar1[0x52] = in_stack_00000218;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(in_stack_00000218);
  func_0x000107c61170(in_stack_00000210);
  func_0x000107c61170(in_stack_00000208);
  func_0x000107c61170(in_stack_00000200);
  func_0x000107c61170(in_stack_000001f8);
  func_0x000107c61170(in_stack_000001f0);
  func_0x000107c61170(param_70);
  func_0x000107c61170(param_69);
  func_0x000107c61170(param_68);
  func_0x000107c61170(param_67);
  func_0x000107c61170(param_66);
  func_0x000107c61170(param_65);
  func_0x000107c61170(param_64);
  func_0x000107c61170(param_63);
  func_0x000107c61170(param_62);
  func_0x000107c61170(param_61);
  func_0x000107c61170(param_60);
  func_0x000107c61170(param_59);
  func_0x000107c61170(param_58);
  func_0x000107c61170(param_57);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007af2a0; end: 1007af2ab; -[_TtC17SCMainCameraScope17SCMainCameraScope swipeViewDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007af2a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130766c0;
  func_0x000107c61428(param_1 + _DAT_1130766c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007af2ac; end: 1007af2b3; -[SCLensCrashFuseServices crashFuser] */

undefined8 FUN_1007af2ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007af2b4; end: 1007af4ff;  */

void FUN_1007af2b4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007af500; end: 1007b0473;  */

void FUN_1007af500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112eef830,&UNK_10db202b0);
  puVar1 = &UNK_11059cf38;
  func_0x000107c613fc(&UNK_11059cf38,0x188,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_47;
  *(undefined8 *)(puVar1 + 0x148) = param_39;
  *(undefined8 *)(puVar1 + 0x150) = param_40;
  *(undefined8 *)(puVar1 + 0x158) = param_41;
  *(undefined8 *)(puVar1 + 0x160) = param_42;
  *(undefined8 *)(puVar1 + 0x168) = param_43;
  *(undefined8 *)(puVar1 + 0x170) = param_44;
  *(undefined8 *)(puVar1 + 0x178) = param_45;
  *(undefined8 *)(puVar1 + 0x180) = param_46;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
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
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  FUN_1000823a8(0x1007af8b8,puVar1);
  return;
}



/* Entry: 1007b0474; end: 1007b047b;  */

void FUN_1007b0474(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b047c; end: 1007b04cf;  */

void FUN_1007b047c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b04d0; end: 1007b04db;  */

void FUN_1007b04d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100231c18();
  func_0x000107c613fc();
  FUN_1007b0570(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b04dc; end: 1007b056f;  */

void FUN_1007b04dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100231c18();
  func_0x000107c613fc();
  FUN_1007b0570(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1007b0570; end: 1007b0757;  */

void FUN_1007b0570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8298;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1007b0758; end: 1007b083b; -[SCLensFavoritesLoggingServiceProvider provide] */

void FUN_1007b0758(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bbc88;
  func_0x000107c610f4(PTR_PTR_1126bbc88);
  func_0x000107c472a8();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007b083c; end: 1007b08af; -[SCLensFavoritesLoggingServices initWithLensFavoritesButtonLogger:] */

undefined1 * FUN_1007b083c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700b10;
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



/* Entry: 1007b08b0; end: 1007b08e3;  */

void FUN_1007b08b0(void)

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



/* Entry: 1007b08e4; end: 1007b08eb;  */

void FUN_1007b08e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b08ec; end: 1007b093f;  */

void FUN_1007b08ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b0940; end: 1007b094b;  */

void FUN_1007b0940(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001f3f3c();
  func_0x000107c613fc();
  FUN_1007b09e0(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b094c; end: 1007b09df;  */

void FUN_1007b094c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001f3f3c();
  func_0x000107c613fc();
  FUN_1007b09e0(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1007b09e0; end: 1007b0bbb;  */

void FUN_1007b09e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8288;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6650);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1007b0bbc; end: 1007b0bc3; -[SCAUserSessionScopeStart getPayloadIdentifier] */

undefined8 FUN_1007b0bbc(void)

{
  return 0x1287;
}


